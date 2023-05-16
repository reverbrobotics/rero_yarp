# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

from . import text_to_speech_pb2 as text__to__speech__pb2


class TextToSpeechStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.TTS = channel.unary_unary(
                '/rero.TextToSpeech/TTS',
                request_serializer=text__to__speech__pb2.TTSRequest.SerializeToString,
                response_deserializer=text__to__speech__pb2.TTSResponse.FromString,
                )


class TextToSpeechServicer(object):
    """Missing associated documentation comment in .proto file."""

    def TTS(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_TextToSpeechServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'TTS': grpc.unary_unary_rpc_method_handler(
                    servicer.TTS,
                    request_deserializer=text__to__speech__pb2.TTSRequest.FromString,
                    response_serializer=text__to__speech__pb2.TTSResponse.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'rero.TextToSpeech', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class TextToSpeech(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def TTS(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/rero.TextToSpeech/TTS',
            text__to__speech__pb2.TTSRequest.SerializeToString,
            text__to__speech__pb2.TTSResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)
