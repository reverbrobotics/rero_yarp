// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

/*
 * Copyright (C) 2021 Reverb Robotics Inc.
 * Author: Lukas Grasse
 * email: lukas@reverbrobotics.ca
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
 * @file  main.cpp
 * @brief main code for the Preprocessor module.
 * =========================================================================== */

#include <ReroSpeechRecognitionModule.h> 

int main(int argc, char * argv[]) {
	
	yarp::os::Network yarp;
	ReroSpeechRecognitionModule module; 

	yarp::os::ResourceFinder rf;
	rf.setVerbose(true);
	rf.setDefaultConfigFile("rero_config.ini"); // overridden by --from parameter
	rf.setDefaultContext("rero");               // overridden by --context parameter
	rf.configure(argc, argv);  
 
	module.runModule(rf);
	return 0;
}
