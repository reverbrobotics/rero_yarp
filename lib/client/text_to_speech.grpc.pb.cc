// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: text_to_speech.proto

#include "text_to_speech.pb.h"
#include "text_to_speech.grpc.pb.h"

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

static const char* TextToSpeech_method_names[] = {
  "/rero.TextToSpeech/TTS",
};

std::unique_ptr< TextToSpeech::Stub> TextToSpeech::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< TextToSpeech::Stub> stub(new TextToSpeech::Stub(channel));
  return stub;
}

TextToSpeech::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_TTS_(TextToSpeech_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status TextToSpeech::Stub::TTS(::grpc::ClientContext* context, const ::rero::TTSRequest& request, ::rero::TTSResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::rero::TTSRequest, ::rero::TTSResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_TTS_, context, request, response);
}

void TextToSpeech::Stub::experimental_async::TTS(::grpc::ClientContext* context, const ::rero::TTSRequest* request, ::rero::TTSResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::rero::TTSRequest, ::rero::TTSResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TTS_, context, request, response, std::move(f));
}

void TextToSpeech::Stub::experimental_async::TTS(::grpc::ClientContext* context, const ::rero::TTSRequest* request, ::rero::TTSResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TTS_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::rero::TTSResponse>* TextToSpeech::Stub::PrepareAsyncTTSRaw(::grpc::ClientContext* context, const ::rero::TTSRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::rero::TTSResponse, ::rero::TTSRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_TTS_, context, request);
}

::grpc::ClientAsyncResponseReader< ::rero::TTSResponse>* TextToSpeech::Stub::AsyncTTSRaw(::grpc::ClientContext* context, const ::rero::TTSRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTTSRaw(context, request, cq);
  result->StartCall();
  return result;
}

TextToSpeech::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TextToSpeech_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TextToSpeech::Service, ::rero::TTSRequest, ::rero::TTSResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TextToSpeech::Service* service,
             ::grpc::ServerContext* ctx,
             const ::rero::TTSRequest* req,
             ::rero::TTSResponse* resp) {
               return service->TTS(ctx, req, resp);
             }, this)));
}

TextToSpeech::Service::~Service() {
}

::grpc::Status TextToSpeech::Service::TTS(::grpc::ServerContext* context, const ::rero::TTSRequest* request, ::rero::TTSResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace rero
