import threading
import sys
import os
import time
import grpc
import rero_grpc.audio_pb2_grpc as audio_grpc
import rero_grpc.audio_pb2 as audio
import wave
import yarp
import numpy as np




class AudioReroRecorderModule(yarp.RFModule):
    """
    Description:
        Class to record audio form the iCub head

    Args:
        input_port  : Audio from remoteInterface

    """

    def __init__(self):
        yarp.RFModule.__init__(self)

        # handle port for the RFModule
        self.audio_stub = None
        self.request = None
        self.audio_stream = None
        self.handle_port = yarp.Port()
        self.attach(self.handle_port)

        # Define vars to receive an image


        self.module_name = None



        self.sound = None








    def configure(self, rf):
        self.module_name = rf.check("name",
                                    yarp.Value("reroRemoteInterface"),
                                    "module name (string)").asString()

       

        # Create handle port to read message
        self.handle_port.open('/' + self.module_name)
        # Create a port to receive an audio object
        self.audio_out_port = yarp.BufferedPortSound()
        self.audio_out_port.open('/' + self.module_name + '/rawAudio:o')


        host = rf.findGroup("server").check("host",
                        yarp.Value("10.0.0.4"),
                        "rero ip  (string)").asString()
        port = rf.findGroup("server").check("port",
                        yarp.Value("50052"),
                        "rero  port (string)").asString()
        ipChannel = host + ":" + port
        # audio stub
        self.channel = grpc.insecure_channel(ipChannel)
        self.audio_stub = audio_grpc.AudioStreamerStub(self.channel)

        # create audio request object
        self.request = audio.StreamRequest()
        self.request.sample_rate = rf.findGroup("audio").check("samplingRate",
                                    yarp.Value(48000),
                                    "samplin rate (int)").asInt32()
        self.request.num_channels = rf.findGroup("audio").check("numMics",
                                    yarp.Value(2),
                                    "number of channels (int)").asInt32()
        self.request.format = "paInt16"
        self.request.frames_per_buffer = rf.findGroup("audio").check("numFrameSamples",
                                    yarp.Value(1024),
                                    "buffer size (int)").asInt32()
        self.request.bytes_per_sample = 2

        print("_____Initialization Parameters______")
        print("___________[audio] ________")
        print("samplingRate      :",self.request.sample_rate)
        print("numFrameSamples   :",self.request.frames_per_buffer)
        print("numMics           :",self.request.num_channels)
        print("___________[server] ________")
        print("channel      :",ipChannel)


        print("Initialization complete")
        
        self.audio_stream = self.audio_stub.GetStream(self.request)


        return True

    def interruptModule(self):
        print("stopping the module")
        self.handle_port.interrupt()
        self.audio_out_port.interrupt()

        return True

    def close(self):
        self.handle_port.close()
        self.audio_out_port.close()       
        self.channel.close()
        return True

    def respond(self, command, reply):
        ok = False

        # Is the command recognized
        rec = False

        reply.clear()

        if command.get(0).asString() == "quit":
            reply.addString("quitting")
            return False

        elif command.get(0).asString() == "help":
            reply.addVocab(yarp.encode("many"))
            reply.addString("reroRemoteInterface module commands are")


        return True

    def getPeriod(self):
        """
           Module refresh rate.

           Returns : The period of the module in seconds.
        """
        return 0.01



    def updateModule(self):
    
        data = next(self.audio_stream)
        print("getting data")
        yarpSound = self.audio_out_port.prepare()
        shortArray = np.frombuffer(data.raw_data, dtype=np.short)
        yarpSound.resize(self.request.frames_per_buffer,2)
        yarpSound.setFrequency(self.request.sample_rate)
        for i in range(self.request.frames_per_buffer*2):
            yarpSound.setSafe(int(shortArray[i]),i//2,i%2)

        if(self.audio_out_port.getOutputCount()):
            print("writing in the port")
            self.audio_out_port.write()
        return True

    

if __name__ == '__main__':

    # Initialise YARP
    if not yarp.Network.checkNetwork():
        print("Unable to find a yarp server exiting ...")
        sys.exit(1)
    yarp.Network.init()

    audioRecorderModule = AudioReroRecorderModule()

    rf = yarp.ResourceFinder()
    rf.setVerbose(True)
    rf.setDefaultContext('rero')
    rf.setDefaultConfigFile('reroRemoteInterface.ini')

    if rf.configure(sys.argv):
        audioRecorderModule.runModule(rf)
    sys.exit()
