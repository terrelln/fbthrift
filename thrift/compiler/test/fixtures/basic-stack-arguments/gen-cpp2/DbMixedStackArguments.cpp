/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/DbMixedStackArguments.h"
#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/DbMixedStackArguments.tcc"
#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> DbMixedStackArgumentsSvIf::getProcessor() {
  return std::make_unique<DbMixedStackArgumentsAsyncProcessor>(this);
}

DbMixedStackArgumentsSvIf::CreateMethodMetadataResult DbMixedStackArgumentsSvIf::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<DbMixedStackArgumentsAsyncProcessor>();
}


void DbMixedStackArgumentsSvIf::getDataByKey0(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getDataByKey0");
}

folly::SemiFuture<std::unique_ptr<::std::string>> DbMixedStackArgumentsSvIf::semifuture_getDataByKey0(std::unique_ptr<::std::string> p_key) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_getDataByKey0.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::std::string>();
  getDataByKey0(*ret, std::move(p_key));
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::std::string>> DbMixedStackArgumentsSvIf::future_getDataByKey0(std::unique_ptr<::std::string> p_key) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_getDataByKey0.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_getDataByKey0(std::move(p_key)), getInternalKeepAlive());
}

void DbMixedStackArgumentsSvIf::async_tm_getDataByKey0(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback, std::unique_ptr<::std::string> p_key) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_getDataByKey0.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_getDataByKey0.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_getDataByKey0(std::move(p_key));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_getDataByKey0(std::move(p_key));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::std::string _return;
        getDataByKey0(_return, std::move(p_key));
        callback->result(_return);
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void DbMixedStackArgumentsSvIf::getDataByKey1(::std::string& /*_return*/, const ::std::string& /*key*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getDataByKey1");
}

folly::SemiFuture<::std::string> DbMixedStackArgumentsSvIf::semifuture_getDataByKey1(const ::std::string& p_key) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_getDataByKey1.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  ::std::string ret;
  getDataByKey1(ret, p_key);
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<::std::string> DbMixedStackArgumentsSvIf::future_getDataByKey1(const ::std::string& p_key) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_getDataByKey1.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_getDataByKey1(p_key), getInternalKeepAlive());
}

void DbMixedStackArgumentsSvIf::async_tm_getDataByKey1(std::unique_ptr<apache::thrift::HandlerCallback<::std::string>> callback, const ::std::string& p_key) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_getDataByKey1.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_getDataByKey1.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_getDataByKey1(p_key);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_getDataByKey1(p_key);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::std::string _return;
        getDataByKey1(_return, p_key);
        callback->result(_return);
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void DbMixedStackArgumentsSvNull::getDataByKey0(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/) {}

void DbMixedStackArgumentsSvNull::getDataByKey1(::std::string& /*_return*/, const ::std::string& /*key*/) {}



const char* DbMixedStackArgumentsAsyncProcessor::getServiceName() {
  return "DbMixedStackArguments";
}

void DbMixedStackArgumentsAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<DbMixedStackArgumentsSvIf>::gen(response);
}

void DbMixedStackArgumentsAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

void DbMixedStackArgumentsAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

const DbMixedStackArgumentsAsyncProcessor::ProcessMap& DbMixedStackArgumentsAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const DbMixedStackArgumentsAsyncProcessor::ProcessMap DbMixedStackArgumentsAsyncProcessor::kOwnProcessMap_ {
  {"getDataByKey0", {&DbMixedStackArgumentsAsyncProcessor::setUpAndProcess_getDataByKey0<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &DbMixedStackArgumentsAsyncProcessor::setUpAndProcess_getDataByKey0<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"getDataByKey1", {&DbMixedStackArgumentsAsyncProcessor::setUpAndProcess_getDataByKey1<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &DbMixedStackArgumentsAsyncProcessor::setUpAndProcess_getDataByKey1<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

} // cpp2
