# Rero YARP Package

This package contains the Reverb Robotics YARP client. The client relays audio, speech recognition, and NLU intent results from a ReroCore server. ReroCore distributables can be downloaded [here](https://github.com/reverbrobotics/rero_core_dist). 

ReroCore uses [gRPC](https://grpc.io/) for communication between the ReroCore server and all clients, such as this YARP client.   

## Configuration
The app/rero/conf/rero_config.ini file contains an example configuration. The configuration parameters are as follows:

```
[audio]
numMics              2
samplingRate         48000
numFrameSamples      4096       # 1024 # 2048 # 4096 # 8192 # 16384 # 32768

[server]
host                 "0.0.0.0"
port                 "50052"
bufferSize           3
```

The audio parameters define the parameters for the raw audio sound objects that are streamed over the raw audio port. 

The server parameters define the gRPC server host, port, and gRPC buffer size for connecting to the ReroCore server.

## Usage
the app/rero/scripts/rero.xml.template file contains an example yarp application configuration file for use with yarpmanager.

## Licence
This package is licenced under the GNU GENERAL PUBLIC LICENSE v2.0. The ReroCore distributable is licenced under the MIT License. 