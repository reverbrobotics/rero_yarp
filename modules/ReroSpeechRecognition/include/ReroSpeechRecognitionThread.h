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
 * @file  ReroSpeechRecognitionThread.h
 * @brief Periodic thread for ReroAudio Module. Relays audio from gRPC to YARP.
 * =========================================================================== */

#ifndef _RERO_SPEECH_RECOGNITION_THREAD_H_
#define _RERO_SPEECH_RECOGNITION_THREAD_H_

#include <iostream>
#include <fstream>
#include <cstring>
#include <time.h>

#include <yarp/math/Math.h>
#include <yarp/sig/all.h>
#include <yarp/os/all.h>
#include <yarp/dev/all.h>
#include <yarp/os/Thread.h>
#include <yarp/os/Log.h>

#include <grpcpp/grpcpp.h>
#include <AudioClient.h>
#include <SpeechRecognitionClient.h>

using grpc::Status;
using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;

using rero::StreamRequest;
using rero::AudioStreamer;
using rero::Audio;

class ReroSpeechRecognitionThread : public yarp::os::Thread {

private:
	bool result;                //-- Result of the processing.

	std::string name;           //-- Rootname of all the ports opened by this thread.
	std::string configFile;     //-- Name of the configFile where the parameter of the camera are set.
	yarp::os::Stamp timeStamp;  //-- Time stamp updated by yarp network.

	double startTime;           //-- Used for keeping time and reporting temporal
    double stopTime;            //-- events to the user via command line.

	int    totalIterations;

	/* ===========================================================================
	 *  Yarp Ports for Sending and Receiving Data from this Periodic Thread.
	 * =========================================================================== */
    yarp::os::BufferedPort< yarp::os::Bottle >  outSpeechPort;

	/* ===========================================================================
	 *  Yarp Matrices used for Modules Computation. 
	 *    Objects passed around to encapsulated objects.
	 * =========================================================================== */
	yarp::os::Bottle* outputSpeech;

    /* ===========================================================================
     *  AudioClient for connecting to gRPC server
     * =========================================================================== */
    SpeechRecognitionClient* client;
	
	/* ===========================================================================
	 *  Variables received from the resource finder.
	 * =========================================================================== */
	int samplingRate;
	int numFrameSamples;
	int numMics;
	int grpcBufferSize;
	std::string grpcHost;
	std::string grpcPort;

public:
	/* ===========================================================================
	 *  Default Constructor.
	 * =========================================================================== */
	ReroSpeechRecognitionThread();


	/* ===========================================================================
	 *  Main Constructor.
	 * 
	 * @param robotname  : Name of the robot.
	 * @param configFile : Path to the .ini configuration file.
	 * =========================================================================== */
	ReroSpeechRecognitionThread(std::string configFile);


	/* ===========================================================================
	 *  Destructor.
	 * =========================================================================== */
	~ReroSpeechRecognitionThread();


	/* ===========================================================================
	 *  Configure all the parameters and return true if successful.
	 * 
	 * @param rf : Reference to the resource finder.
	 * 
	 * @return Flag for the success.
	 * =========================================================================== */
	bool configure(yarp::os::ResourceFinder &rf);


	/* ===========================================================================
	 *  Initialises the thread. Build tables and open ports.
	 * =========================================================================== */
	bool threadInit();


	/* ===========================================================================
	 *  Correctly releases the thread.
	 * =========================================================================== */
	void threadRelease();


	/* ===========================================================================
	 *  Function that sets the rootname of all the ports 
	 *    that are going to be created by the thread.
	 * 
	 * @param str : rootname.
	 * =========================================================================== */
	void setName(std::string str);
	

	/* ===========================================================================
	 *  Function that returns the original root name and 
	 *    appends another string iff passed as parameter.
	 * 
	 * @param p : pointer to the string that has to be added.
	 * 
	 * @return rootname + appended string.
	 * =========================================================================== */
	std::string getName(const char* p);


	/* ===========================================================================
	 *  Function that sets the inputPort name.
	 * =========================================================================== */
	void setInputPortName(std::string inpPrtName);


	/* ===========================================================================
	 *  Active part of the thread.
	 * =========================================================================== */
	void run(); 



private:
	
	/* ===========================================================================
	 *  Write data to out going ports if something is connected.
	 * =========================================================================== */
	void publishOutPorts();


};

#endif  //_RERO_SPEECH_RECOGNITION_THREAD_H_

//----- end-of-file --- ( next line intentionally left blank ) ------------------
