/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <folly/futures/Future.h>


#include "thrift/compiler/test/fixtures/basic/gen-cpp2/MyServicePrioParent.h"

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyServicePrioChildSvAsyncIf {
 public:
  virtual ~MyServicePrioChildSvAsyncIf() {}
  virtual void async_tm_pang(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual void async_pang(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = delete;
  virtual folly::Future<folly::Unit> future_pang() = 0;
};

class MyServicePrioChildAsyncProcessor;

class MyServicePrioChildSvIf : public MyServicePrioChildSvAsyncIf, virtual public  ::cpp2::MyServicePrioParentSvIf {
 public:
  typedef MyServicePrioChildAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual void pang();
  folly::Future<folly::Unit> future_pang() override;
  void async_tm_pang(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
};

class MyServicePrioChildSvNull : public MyServicePrioChildSvIf, virtual public  ::cpp2::MyServicePrioParentSvIf {
 public:
  void pang() override;
};

class MyServicePrioChildAsyncProcessor : public  ::cpp2::MyServicePrioParentAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor =  ::cpp2::MyServicePrioParentAsyncProcessor;
  using HasFrozen2 = std::false_type;
 protected:
  MyServicePrioChildSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<MyServicePrioChildAsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const MyServicePrioChildAsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static const MyServicePrioChildAsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<MyServicePrioChildAsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const MyServicePrioChildAsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static const MyServicePrioChildAsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_pang(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_pang(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_pang(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_pang(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  MyServicePrioChildAsyncProcessor(MyServicePrioChildSvIf* iface) :
       ::cpp2::MyServicePrioParentAsyncProcessor(iface),
      iface_(iface) {}

  virtual ~MyServicePrioChildAsyncProcessor() {}
};

class MyServicePrioChildAsyncClient : public  ::cpp2::MyServicePrioParentAsyncClient {
 public:
  virtual const char* getServiceName();
  typedef std::unique_ptr<apache::thrift::RequestChannel, folly::DelayedDestruction::Destructor> channel_ptr;

  virtual ~MyServicePrioChildAsyncClient() {}

  MyServicePrioChildAsyncClient(std::shared_ptr<apache::thrift::RequestChannel> channel) :
       ::cpp2::MyServicePrioParentAsyncClient(channel) {}
  virtual void pang(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void pang(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void pangImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_pang();
  virtual void sync_pang(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<folly::Unit> future_pang();
  virtual folly::Future<folly::Unit> future_pang(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_pang(apache::thrift::RpcOptions& rpcOptions);
  virtual void pang(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_pang(::apache::thrift::ClientReceiveState& state);
  static void recv_pang(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_pang(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_pang(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void pangT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_pangT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_pangT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
