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
 * @file  ReroNLUThread.cpp
 * @brief Implementation of the ReroNLUThread (see header file).
 * =========================================================================== */

#include <ReroNLUThread.h>
#include "json.h"

ReroNLUThread::ReroNLUThread() :
	Thread() {
	startTime = yarp::os::Time::now();        
}


ReroNLUThread::ReroNLUThread(std::string _configFile) :
	Thread() {

	configFile = _configFile;
	startTime = yarp::os::Time::now();
}


ReroNLUThread::~ReroNLUThread() {
    delete client;
}


bool ReroNLUThread::configure(yarp::os::ResourceFinder &rf) {
	/* ===========================================================================
	 *  Pull variables for this module from the resource finder.
	 * =========================================================================== */
	yInfo( "Loading Configuration File." );
    grpcHost = rf.findGroup("server").check("host",  yarp::os::Value("0.0.0.0"),    "grpc server address" ).asString();
    grpcPort = rf.findGroup("server").check("port",  yarp::os::Value("50052"),    "grpc server port" ).asString();


    client = new NLUClient(
            grpc::CreateChannel(grpcHost+":"+grpcPort, grpc::InsecureChannelCredentials()));

    /* ===========================================================================
     *  Print the resulting variables to the console.
     * =========================================================================== */
//	yInfo( "\t                  [SAMPLING]                  "                                    );
//	yInfo( "\t ============================================ "                                    );
//	yInfo( "\t Sampling Rate                    : %d Hz",    samplingRate                        );
//	yInfo( "\t Number Samples per Frame         : %d",       numFrameSamples                     );
//    yInfo( "\t gRPC Host         : %s",                      grpcHost.c_str()                            );
//    yInfo( "\t gRPC Port         : %s",                      grpcPort.c_str()                            );
//	yInfo( " " );

	return true;
}


bool ReroNLUThread::threadInit() {

	/* ===========================================================================
	 *  Initialize all ports. If any fail to open, return false to 
	 *    let RFModule know initialization was unsuccessful.
	 * =========================================================================== */

    if (!inputNLUPort.open(getName("/nlu:i").c_str())) {
        yError("Unable to open port for sending audio");
        return false;
    }
	if (!outNLUPort.open(getName("/nlu:o").c_str())) {
		yError("Unable to open port for sending audio");
		return false;
	}

	stopTime = yarp::os::Time::now();
	yInfo("Initialization of the processing thread correctly ended.");
	startTime = stopTime;


	return true;
}


void ReroNLUThread::threadRelease() {
    //-- Stop all threads.
	outNLUPort.interrupt();
	
	//-- Close the threads.
	outNLUPort.close();
}


void ReroNLUThread::setName(std::string str) {
	this->name=str;
}


std::string ReroNLUThread::getName(const char* p) {
	std::string str(name);
	str.append(p);
	return str;
}


void ReroNLUThread::setInputPortName(std::string InpPort) {
	//-- Do nothing.
}

void ReroNLUThread::run() {

    while(!isStopping()) {
        if (inputNLUPort.getInputCount()) {

            inputNLU = inputNLUPort.read(true);

            std::string inputString = inputNLU->toString();

            std::cout << "received string: " << inputString << std::endl;

            Intent nluResult = client->GetSpeechIntent(inputString);

            outputNLU = &outNLUPort.prepare();
            outputNLU->clear();

            outputNLU->addString(nluResult.intentname());
            outputNLU->addFloat32(nluResult.probability());

            for(auto slot : nluResult.slots()) {
                yarp::os::Bottle& slotBottle = outputNLU->addList();

                slotBottle.addString(slot.rawvalue());
                slotBottle.addString(slot.entity());
                slotBottle.addString(slot.slotname());
                slotBottle.addInt16(slot.rangestart());
                slotBottle.addInt16(slot.rangeend());
            }


            publishOutPorts();

            timeStamp.update();
        }
    }
}



void ReroNLUThread::publishOutPorts() {
	
	//-- Write to Active Ports.
	if (outNLUPort.getOutputCount()) {
		outNLUPort.setEnvelope(timeStamp);
		outNLUPort.write();
		yInfo("Writing to active port");
	}
}

