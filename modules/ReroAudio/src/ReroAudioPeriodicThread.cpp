// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

/*
 * Copyright (C) 2021 Reverb Robotics Inc.
 * Author: Lukas Grasse
 * email: lukas@reverbrobotics.ca
 *
 * Based on source code from https://github.com/TataLab/iCubAudioAttention
 * Copyright (C) 2019 Department of Neuroscience - University of Lethbridge
 * 
 * Permission is granted to copy, distribute, and/or modify this program
 * under the terms of the GNU General Public License, version 2 or any
 * later version published by the Free Software Foundation.
 *
 * A copy of the license can be found at
 * http://www.robotcub.org/icub/license/gpl.txt
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details
*/

/* ===========================================================================
 * @file  ReroAudioPeriodicThread.cpp
 * @brief Implementation of the ReroAudioPeriodicThread (see header file).
 * =========================================================================== */

#include <ReroAudioPeriodicThread.h>

#define THPERIOD 0.01 // seconds.

ReroAudioPeriodicThread::ReroAudioPeriodicThread() : 
	PeriodicThread(THPERIOD) {
	startTime = yarp::os::Time::now();        
}


ReroAudioPeriodicThread::ReroAudioPeriodicThread(std::string _configFile) : 
	PeriodicThread(THPERIOD) {

	configFile = _configFile;
	startTime = yarp::os::Time::now();
}


ReroAudioPeriodicThread::~ReroAudioPeriodicThread() {
    delete client;
}


bool ReroAudioPeriodicThread::configure(yarp::os::ResourceFinder &rf) {
	/* ===========================================================================
	 *  Pull variables for this module from the resource finder.
	 * =========================================================================== */
	yInfo( "Loading Configuration File." );
	numMics      = rf.findGroup("audio").check("numMics",     yarp::os::Value(2),     "number of mics (int)"                 ).asInt32();
	samplingRate     = rf.findGroup("audio").check("samplingRate",     yarp::os::Value(48000),   "sampling rate of mics (int)"            ).asInt32();
	numFrameSamples  = rf.findGroup("audio").check("numFrameSamples",  yarp::os::Value(4096),    "number of frame samples received (int)" ).asInt32();
    grpcHost = rf.findGroup("server").check("host",  yarp::os::Value("0.0.0.0"),    "grpc server address" ).asString();
    grpcPort = rf.findGroup("server").check("port",  yarp::os::Value("50052"),    "grpc server port" ).asString();
    grpcBufferSize = rf.findGroup("server").check("bufferSize",  yarp::os::Value(3),    "grpc audio buffer size" ).asInt32();


    /* ===========================================================================
     *  Set period to audio rate
     * =========================================================================== */
    setPeriod(numFrameSamples*1.0/samplingRate);

	/* ===========================================================================
	 *  Initialize time counters to zero.
	 * =========================================================================== */
	totalDelay        = 0.0;
	totalReading      = 0.0;
	totalProcessing   = 0.0;
	totalTransmission = 0.0;
	totalTime         = 0.0;
	totalIterations   = 0;

    client = new AudioClient(
            grpc::CreateChannel(grpcHost+":"+grpcPort, grpc::InsecureChannelCredentials()),
            samplingRate,
            numMics,
            "paInt16",
            numFrameSamples,
            2,
            grpcBufferSize
            );

    /* ===========================================================================
     *  Print the resulting variables to the console.
     * =========================================================================== */
	yInfo( "\t                  [SAMPLING]                  "                                    );
	yInfo( "\t ============================================ "                                    );
	yInfo( "\t Sampling Rate                    : %d Hz",    samplingRate                        );
	yInfo( "\t Number Samples per Frame         : %d",       numFrameSamples                     );
    yInfo( "\t gRPC Host         : %s",                      grpcHost.c_str()                            );
    yInfo( "\t gRPC Port         : %s",                      grpcPort.c_str()                            );
	yInfo( " " );

	return true;
}


bool ReroAudioPeriodicThread::threadInit() {

	/* ===========================================================================
	 *  Initialize all ports. If any fail to open, return false to 
	 *    let RFModule know initialization was unsuccessful.
	 * =========================================================================== */
	if (!outAudioPort.open(getName("/rawAudio:o").c_str())) {
		yError("Unable to open port for sending audio");
		return false;
	}

    client->StreamAudioAsync();

	stopTime = yarp::os::Time::now();
	yInfo("Initialization of the processing thread correctly ended. Elapsed Time: %f.", stopTime - startTime);
	startTime = stopTime;


	return true;
}


void ReroAudioPeriodicThread::threadRelease() {
    //stop audio stream
    client->StopStream();

    //-- Stop all threads.
	outAudioPort.interrupt();
	
	//-- Close the threads.
	outAudioPort.close();

	//-- Print thread stats.
	endOfProcessingStats();	
}


void ReroAudioPeriodicThread::setName(std::string str) {
	this->name=str;
}


std::string ReroAudioPeriodicThread::getName(const char* p) {
	std::string str(name);
	str.append(p);
	return str;
}


void ReroAudioPeriodicThread::setInputPortName(std::string InpPort) {
	//-- Do nothing.
}


void ReroAudioPeriodicThread::run() {
    //skip first couple of frames to fill buffer
    if(this->getIterations() < 2)
        return;

    char* buffer = this->client->GetBuffer();

	if (outAudioPort.getOutputCount()) {
	    outputSound = &outAudioPort.prepare();

        copyGRPCBufferToSound(buffer, outputSound);

		//-- Write data to outgoing ports.
		publishOutPorts();

		//-- Give time stats to the user.
		timeTotal  = timeDelay + timeReading + timeProcessing + timeTransmission;
		totalTime += timeTotal;
		totalIterations++;
		yInfo("Sent audio frame %d with timestamp %d", totalIterations, timeStamp.getCount());
	}

	timeStamp.update();
}

void ReroAudioPeriodicThread::copyGRPCBufferToSound(char* buffer, yarp::sig::Sound* sound) {
    auto sampleBuffer = reinterpret_cast<short*>(buffer);

    sound->resize(numFrameSamples, numMics);
    sound->setFrequency(samplingRate);

    for(int i=0; i<numFrameSamples*numMics; i++) {
        // set sample, /2 is index and %2 is channel for interleaved audio
        sound->setSafe(sampleBuffer[i], i/2, i%2);
    }
}


void ReroAudioPeriodicThread::publishOutPorts() {
	
	//-- Write to Active Ports.
	if (outAudioPort.getOutputCount()) {
		outAudioPort.setEnvelope(timeStamp);

		outAudioPort.write();
		yInfo("Writing to active port");
	}
}


void ReroAudioPeriodicThread::endOfProcessingStats() {

	//-- Display Execution stats.
	yInfo(" ");
	yInfo("End of Thread . . . ");
	yInfo(" ");
	yInfo("\t Total Iterations : %d", totalIterations);
	yInfo("\t Total Time       : %.2f", totalTime);
	yInfo(" ");
	yInfo("Average Stats . . . ");
	yInfo(" ");
	yInfo("\t Delay        : %f", totalDelay        / (double) totalIterations );
	yInfo("\t Reading      : %f", totalReading      / (double) totalIterations );
	yInfo("\t Processing   : %f", totalProcessing   / (double) totalIterations );
	yInfo("\t Transmission : %f", totalTransmission / (double) totalIterations );
	yInfo("\t Loop Time    : %f", totalTime         / (double) totalIterations );
	yInfo(" ");
}
