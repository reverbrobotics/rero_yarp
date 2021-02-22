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
 * @file  ReroSpeechRecognitionThread.cpp
 * @brief Implementation of the ReroSpeechRecognitionThread (see header file).
 * =========================================================================== */

#include <ReroSpeechRecognitionThread.h>

ReroSpeechRecognitionThread::ReroSpeechRecognitionThread() : 
	Thread() {
	startTime = yarp::os::Time::now();        
}


ReroSpeechRecognitionThread::ReroSpeechRecognitionThread(std::string _configFile) : 
	Thread() {

	configFile = _configFile;
	startTime = yarp::os::Time::now();
}


ReroSpeechRecognitionThread::~ReroSpeechRecognitionThread() {
    delete client;
}


bool ReroSpeechRecognitionThread::configure(yarp::os::ResourceFinder &rf) {
	/* ===========================================================================
	 *  Pull variables for this module from the resource finder.
	 * =========================================================================== */
	yInfo( "Loading Configuration File." );
	numMics      = rf.findGroup("audio").check("numMics",     yarp::os::Value(2),     "number of mics (int)"                 ).asInt();
	samplingRate     = rf.findGroup("audio").check("samplingRate",     yarp::os::Value(48000),   "sampling rate of mics (int)"            ).asInt();
	numFrameSamples  = rf.findGroup("audio").check("numFrameSamples",  yarp::os::Value(4096),    "number of frame samples received (int)" ).asInt();
    grpcHost = rf.findGroup("server").check("host",  yarp::os::Value("0.0.0.0"),    "grpc server address" ).asString();
    grpcPort = rf.findGroup("server").check("port",  yarp::os::Value("50052"),    "grpc server port" ).asString();
    grpcBufferSize = rf.findGroup("server").check("bufferSize",  yarp::os::Value(3),    "grpc audio buffer size" ).asInt();



	/* ===========================================================================
	 *  Initialize time counters to zero.
	 * =========================================================================== */
	totalDelay        = 0.0;
	totalReading      = 0.0;
	totalProcessing   = 0.0;
	totalTransmission = 0.0;
	totalTime         = 0.0;
	totalIterations   = 0;

    client = new SpeechRecognitionClient(
            grpc::CreateChannel(grpcHost+":"+grpcPort, grpc::InsecureChannelCredentials()),
            grpc::CreateChannel(grpcHost+":"+grpcPort, grpc::InsecureChannelCredentials())
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


bool ReroSpeechRecognitionThread::threadInit() {

	/* ===========================================================================
	 *  Initialize all ports. If any fail to open, return false to 
	 *    let RFModule know initialization was unsuccessful.
	 * =========================================================================== */
	if (!outSpeechPort.open(getName("/speechRecognition:o").c_str())) {
		yError("Unable to open port for sending audio");
		return false;
	}

	stopTime = yarp::os::Time::now();
	yInfo("Initialization of the processing thread correctly ended. Elapsed Time: %f.", stopTime - startTime);
	startTime = stopTime;


	return true;
}


void ReroSpeechRecognitionThread::threadRelease() {
    //stop audio stream
    client->StopStream();

    //-- Stop all threads.
	outSpeechPort.interrupt();
	
	//-- Close the threads.
	outSpeechPort.close();
}


void ReroSpeechRecognitionThread::setName(std::string str) {
	this->name=str;
}


std::string ReroSpeechRecognitionThread::getName(const char* p) {
	std::string str(name);
	str.append(p);
	return str;
}


void ReroSpeechRecognitionThread::setInputPortName(std::string InpPort) {
	//-- Do nothing.
}


void ReroSpeechRecognitionThread::run() {

    while(!isStopping()) {
        SpeechRecognitionResult speechRecognitionResult = client->StreamAudio();

        yInfo("Speech recognition result: %s", speechRecognitionResult.result().c_str());
        timeStamp.update();
    }
//
//	if (outAudioPort.getOutputCount()) {
//	    outputSound = &outAudioPort.prepare();
//
//		//-- Write data to outgoing ports.
//		publishOutPorts();
//
//		//-- Give time stats to the user.
//		timeTotal  = timeDelay + timeReading + timeProcessing + timeTransmission;
//		totalTime += timeTotal;
//		totalIterations++;
//	}
}



void ReroSpeechRecognitionThread::publishOutPorts() {
	
	//-- Write to Active Ports.
	if (outSpeechPort.getOutputCount()) {
		outSpeechPort.setEnvelope(timeStamp);
		outSpeechPort.write();
		yInfo("Writing to active port");
	}
}

