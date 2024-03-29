// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: speech_recognition.proto

#include "speech_recognition.pb.h"
#include "speech_recognition.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace rero {

static const char* SpeechRecognition_method_names[] = {
  "/rero.SpeechRecognition/RecognizeSpeech",
  "/rero.SpeechRecognition/SetVocab",
};

std::unique_ptr< SpeechRecognition::Stub> SpeechRecognition::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SpeechRecognition::Stub> stub(new SpeechRecognition::Stub(channel));
  return stub;
}

SpeechRecognition::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_RecognizeSpeech_(SpeechRecognition_method_names[0], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_SetVocab_(SpeechRecognition_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientWriter< ::rero::Audio>* SpeechRecognition::Stub::RecognizeSpeechRaw(::grpc::ClientContext* context, ::rero::SpeechRecognitionResult* response) {
  return ::grpc::internal::ClientWriterFactory< ::rero::Audio>::Create(channel_.get(), rpcmethod_RecognizeSpeech_, context, response);
}

void SpeechRecognition::Stub::experimental_async::RecognizeSpeech(::grpc::ClientContext* context, ::rero::SpeechRecognitionResult* response, ::grpc::experimental::ClientWriteReactor< ::rero::Audio>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::rero::Audio>::Create(stub_->channel_.get(), stub_->rpcmethod_RecognizeSpeech_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::rero::Audio>* SpeechRecognition::Stub::AsyncRecognizeSpeechRaw(::grpc::ClientContext* context, ::rero::SpeechRecognitionResult* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::rero::Audio>::Create(channel_.get(), cq, rpcmethod_RecognizeSpeech_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::rero::Audio>* SpeechRecognition::Stub::PrepareAsyncRecognizeSpeechRaw(::grpc::ClientContext* context, ::rero::SpeechRecognitionResult* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::rero::Audio>::Create(channel_.get(), cq, rpcmethod_RecognizeSpeech_, context, response, false, nullptr);
}

::grpc::Status SpeechRecognition::Stub::SetVocab(::grpc::ClientContext* context, const ::rero::Vocab& request, ::rero::VocabResult* response) {
  return ::grpc::internal::BlockingUnaryCall< ::rero::Vocab, ::rero::VocabResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetVocab_, context, request, response);
}

void SpeechRecognition::Stub::experimental_async::SetVocab(::grpc::ClientContext* context, const ::rero::Vocab* request, ::rero::VocabResult* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::rero::Vocab, ::rero::VocabResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetVocab_, context, request, response, std::move(f));
}

void SpeechRecognition::Stub::experimental_async::SetVocab(::grpc::ClientContext* context, const ::rero::Vocab* request, ::rero::VocabResult* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetVocab_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::rero::VocabResult>* SpeechRecognition::Stub::PrepareAsyncSetVocabRaw(::grpc::ClientContext* context, const ::rero::Vocab& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::rero::VocabResult, ::rero::Vocab, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetVocab_, context, request);
}

::grpc::ClientAsyncResponseReader< ::rero::VocabResult>* SpeechRecognition::Stub::AsyncSetVocabRaw(::grpc::ClientContext* context, const ::rero::Vocab& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetVocabRaw(context, request, cq);
  result->StartCall();
  return result;
}

SpeechRecognition::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SpeechRecognition_method_names[0],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< SpeechRecognition::Service, ::rero::Audio, ::rero::SpeechRecognitionResult>(
          [](SpeechRecognition::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReader<::rero::Audio>* reader,
             ::rero::SpeechRecognitionResult* resp) {
               return service->RecognizeSpeech(ctx, reader, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SpeechRecognition_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SpeechRecognition::Service, ::rero::Vocab, ::rero::VocabResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SpeechRecognition::Service* service,
             ::grpc::ServerContext* ctx,
             const ::rero::Vocab* req,
             ::rero::VocabResult* resp) {
               return service->SetVocab(ctx, req, resp);
             }, this)));
}

SpeechRecognition::Service::~Service() {
}

::grpc::Status SpeechRecognition::Service::RecognizeSpeech(::grpc::ServerContext* context, ::grpc::ServerReader< ::rero::Audio>* reader, ::rero::SpeechRecognitionResult* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SpeechRecognition::Service::SetVocab(::grpc::ServerContext* context, const ::rero::Vocab* request, ::rero::VocabResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace rero

