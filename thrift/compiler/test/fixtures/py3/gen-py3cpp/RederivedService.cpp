/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/py3/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/py3/gen-py3cpp/RederivedService.h"
#include "thrift/compiler/test/fixtures/py3/gen-py3cpp/RederivedService.tcc"
#include "thrift/compiler/test/fixtures/py3/gen-py3cpp/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

std::unique_ptr<apache::thrift::AsyncProcessor> apache::thrift::ServiceHandler<::py3::simple::RederivedService>::getProcessor() {
  return std::make_unique<::py3::simple::RederivedServiceAsyncProcessor>(this);
}

apache::thrift::ServiceHandler<::py3::simple::RederivedService>::CreateMethodMetadataResult apache::thrift::ServiceHandler<::py3::simple::RederivedService>::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<::py3::simple::RederivedServiceAsyncProcessor>(getServiceRequestInfoMap().value().get());
}


std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> apache::thrift::ServiceHandler<::py3::simple::RederivedService>::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

::py3::simple::RederivedServiceServiceInfoHolder apache::thrift::ServiceHandler<::py3::simple::RederivedService>::__fbthrift_serviceInfoHolder;


::std::int32_t apache::thrift::ServiceHandler<::py3::simple::RederivedService>::get_seven() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("get_seven");
}

::std::int32_t apache::thrift::ServiceHandler<::py3::simple::RederivedService>::sync_get_seven() {
  return get_seven();
}

folly::SemiFuture<::std::int32_t> apache::thrift::ServiceHandler<::py3::simple::RederivedService>::semifuture_get_seven() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_get_seven.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return sync_get_seven();
}

folly::Future<::std::int32_t> apache::thrift::ServiceHandler<::py3::simple::RederivedService>::future_get_seven() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_get_seven.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_get_seven(), getInternalKeepAlive());
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<::std::int32_t> apache::thrift::ServiceHandler<::py3::simple::RederivedService>::co_get_seven() {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_get_seven.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<>());
}

folly::coro::Task<::std::int32_t> apache::thrift::ServiceHandler<::py3::simple::RederivedService>::co_get_seven(apache::thrift::RequestParams /* params */) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_get_seven.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_get_seven();
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::py3::simple::RederivedService>::async_tm_get_seven(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_get_seven.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_get_seven.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_get_seven(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_get_seven.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_get_seven();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_get_seven();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_get_seven(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_get_seven();
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(sync_get_seven());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
#if FOLLY_HAS_COROUTINES
  } catch (apache::thrift::detail::si::UnimplementedCoroMethod& ex) {
    std::tie() = std::move(ex).restoreArgs<>();
    goto determineInvocationType;
#endif // FOLLY_HAS_COROUTINES
  } catch (...) {
    callback->exception(std::current_exception());
  }
}


namespace py3 { namespace simple {

::std::int32_t RederivedServiceSvNull::get_seven() {
  return 0;
}


const char* RederivedServiceAsyncProcessor::getServiceName() {
  return "RederivedService";
}

void RederivedServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::py3::simple::RederivedService>>::gen(response);
}

void RederivedServiceAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, iface_, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void RederivedServiceAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const RederivedServiceAsyncProcessor::ProcessMap& RederivedServiceAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const RederivedServiceAsyncProcessor::ProcessMap RederivedServiceAsyncProcessor::kOwnProcessMap_ {
  {"get_seven",
    {&RederivedServiceAsyncProcessor::setUpAndProcess_get_seven<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &RederivedServiceAsyncProcessor::setUpAndProcess_get_seven<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &RederivedServiceAsyncProcessor::executeRequest_get_seven<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &RederivedServiceAsyncProcessor::executeRequest_get_seven<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& RederivedServiceServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap RederivedServiceServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"get_seven",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "RederivedService.get_seven",
     std::nullopt,
     apache::thrift::concurrency::NORMAL,
     std::nullopt}},
  };
  apache::thrift::ServiceRequestInfoMap parentMap = ::py3::simple::DerivedServiceServiceInfoHolder::staticRequestInfoMap();
  requestInfoMap.insert(std::begin(parentMap), std::end(parentMap));

  return requestInfoMap;
}
}} // py3::simple
