// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: nlu.proto

#include "nlu.pb.h"
#include "nlu.grpc.pb.h"

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

static const char* NLU_method_names[] = {
  "/rero.NLU/GetSpeechIntent",
};

std::unique_ptr< NLU::Stub> NLU::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< NLU::Stub> stub(new NLU::Stub(channel));
  return stub;
}

NLU::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetSpeechIntent_(NLU_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status NLU::Stub::GetSpeechIntent(::grpc::ClientContext* context, const ::rero::NLURequest& request, ::rero::Intent* response) {
  return ::grpc::internal::BlockingUnaryCall< ::rero::NLURequest, ::rero::Intent, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetSpeechIntent_, context, request, response);
}

void NLU::Stub::experimental_async::GetSpeechIntent(::grpc::ClientContext* context, const ::rero::NLURequest* request, ::rero::Intent* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::rero::NLURequest, ::rero::Intent, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetSpeechIntent_, context, request, response, std::move(f));
}

void NLU::Stub::experimental_async::GetSpeechIntent(::grpc::ClientContext* context, const ::rero::NLURequest* request, ::rero::Intent* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetSpeechIntent_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::rero::Intent>* NLU::Stub::PrepareAsyncGetSpeechIntentRaw(::grpc::ClientContext* context, const ::rero::NLURequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::rero::Intent, ::rero::NLURequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetSpeechIntent_, context, request);
}

::grpc::ClientAsyncResponseReader< ::rero::Intent>* NLU::Stub::AsyncGetSpeechIntentRaw(::grpc::ClientContext* context, const ::rero::NLURequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetSpeechIntentRaw(context, request, cq);
  result->StartCall();
  return result;
}

NLU::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NLU_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NLU::Service, ::rero::NLURequest, ::rero::Intent, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](NLU::Service* service,
             ::grpc::ServerContext* ctx,
             const ::rero::NLURequest* req,
             ::rero::Intent* resp) {
               return service->GetSpeechIntent(ctx, req, resp);
             }, this)));
}

NLU::Service::~Service() {
}

::grpc::Status NLU::Service::GetSpeechIntent(::grpc::ServerContext* context, const ::rero::NLURequest* request, ::rero::Intent* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace rero

