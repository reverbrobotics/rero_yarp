import threading
import sys
import os
import time
import grpc
import rero_grpc.audio_pb2_grpc as audio_grpc
import rero_grpc.audio_pb2 as audio
import wave
import yarp




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

        self.saving_path = None

        self.sound = None

        self.start_ts = -1
        self.date_path = time.strftime("%Y%m%d-%H%M%S")

        self.audio = []

        self.record = False
        self.stop_ts = -1


    def configure(self, rf):
        self.module_name = rf.check("name",
                                    yarp.Value("AudioReroRecorder"),
                                    "module name (string)").asString()

        self.saving_path = rf.check("path",
                                    yarp.Value("/tmp"),
                                    "saving path name (string)").asString()

        # Create handle port to read message
        self.handle_port.open('/' + self.module_name)
        # Create a port to receive an audio object

        if not os.path.exists(f'{self.saving_path}/{self.date_path}'):
            print("Creating directory for saving")
            os.makedirs(f'{self.saving_path}/{self.date_path}')

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


        return True

    def interruptModule(self):
        print("stopping the module")
        self.handle_port.interrupt()

        return True

    def close(self):
        self.handle_port.close()
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
            reply.addString("AudioReroRecorder module commands are")

            reply.addString("start : Start the recording")
            reply.addString("stop : Stop the recording")
            reply.addString("save : Stop and save the recording")

        elif command.get(0).asString() == "start":
            self.audio_stream = self.audio_stub.GetStream(self.request)
            self.audio = []
            self.record = True
            self.start_ts = time.time()
            print("starting recording!")
            reply.addString("ok")


        elif command.get(0).asString() == "stop":
            print("stopping recording!")
            self.record = False
            self.stop_ts = time.time()
            reply.addString("ok")



        elif command.get(0).asString() == "save":
            print("Saving recording!")
            self.record = False
            self.stop_ts = time.time()


            # Terminate the PortAudio interface



            self.save_recording()
            filePath = f'{self.saving_path}/{self.date_path}/'
            fileName = f'{self.start_ts}_{self.stop_ts}.wav'
            reply.addString("ok")
            reply.addString(filePath)
            reply.addString(fileName)
        return True

    def getPeriod(self):
        """
           Module refresh rate.

           Returns : The period of the module in seconds.
        """
        return 0.01

    def record_audio(self):
        data = next(self.audio_stream)

        self.audio.append(data.raw_data)
        return True

    def updateModule(self):

        if self.record:
            self.record_audio()

        return True

    def save_recording(self):
        filename = f'{self.saving_path}/{self.date_path}/{self.start_ts}_{self.stop_ts}.wav'

        wf = wave.open(filename, 'wb')
        wf.setnchannels(self.request.num_channels)
        wf.setsampwidth(self.request.bytes_per_sample)
        wf.setframerate(self.request.sample_rate)

        wf.writeframes(b''.join(self.audio))
        wf.close()

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
    rf.setDefaultConfigFile('rero_recorder.ini')

    if rf.configure(sys.argv):
        audioRecorderModule.runModule(rf)
    sys.exit()
