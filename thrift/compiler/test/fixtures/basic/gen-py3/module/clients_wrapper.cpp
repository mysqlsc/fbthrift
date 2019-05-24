/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/clients_wrapper.h>

namespace cpp2 {


MyServiceClientWrapper::MyServiceClientWrapper(
    std::shared_ptr<::cpp2::MyServiceAsyncClient> async_client,
    std::shared_ptr<apache::thrift::RequestChannel> channel) : 
    async_client(async_client),
      channel_(channel) {}

MyServiceClientWrapper::~MyServiceClientWrapper() {}

folly::Future<folly::Unit> MyServiceClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [cha = std::move(channel_), cli = std::move(async_client)] {});
}

void MyServiceClientWrapper::setPersistentHeader(const std::string& key, const std::string& value) {
    auto headerChannel = async_client->getHeaderChannel();
    if (headerChannel != nullptr) {
        headerChannel->setPersistentHeader(key, value);
    }
}


folly::Future<folly::Unit>
MyServiceClientWrapper::ping(
    apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_ping, channel_);
  async_client->ping(
    rpcOptions,
    std::move(callback)
  );
  return _future;
}

folly::Future<std::string>
MyServiceClientWrapper::getRandomData(
    apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::string> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<std::string>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_getRandomData, channel_);
  async_client->getRandomData(
    rpcOptions,
    std::move(callback)
  );
  return _future;
}

folly::Future<bool>
MyServiceClientWrapper::hasDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id) {
  folly::Promise<bool> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<bool>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_hasDataById, channel_);
  async_client->hasDataById(
    rpcOptions,
    std::move(callback),
    arg_id
  );
  return _future;
}

folly::Future<std::string>
MyServiceClientWrapper::getDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id) {
  folly::Promise<std::string> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<std::string>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_getDataById, channel_);
  async_client->getDataById(
    rpcOptions,
    std::move(callback),
    arg_id
  );
  return _future;
}

folly::Future<folly::Unit>
MyServiceClientWrapper::putDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id,
    std::string arg_data) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_putDataById, channel_);
  async_client->putDataById(
    rpcOptions,
    std::move(callback),
    arg_id,
    arg_data
  );
  return _future;
}

folly::Future<folly::Unit>
MyServiceClientWrapper::lobDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id,
    std::string arg_data) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::apache::thrift::OneWayFutureCallback>(
    std::move(_promise), channel_);
  async_client->lobDataById(
    rpcOptions,
    std::move(callback),
    arg_id,
    arg_data
  );
  return _future;
}

folly::Future<folly::Unit>
MyServiceClientWrapper::doNothing(
    apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_doNothing, channel_);
  async_client->doNothing(
    rpcOptions,
    std::move(callback)
  );
  return _future;
}


MyServiceFastClientWrapper::MyServiceFastClientWrapper(
    std::shared_ptr<::cpp2::MyServiceFastAsyncClient> async_client,
    std::shared_ptr<apache::thrift::RequestChannel> channel) : 
    async_client(async_client),
      channel_(channel) {}

MyServiceFastClientWrapper::~MyServiceFastClientWrapper() {}

folly::Future<folly::Unit> MyServiceFastClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [cha = std::move(channel_), cli = std::move(async_client)] {});
}

void MyServiceFastClientWrapper::setPersistentHeader(const std::string& key, const std::string& value) {
    auto headerChannel = async_client->getHeaderChannel();
    if (headerChannel != nullptr) {
        headerChannel->setPersistentHeader(key, value);
    }
}


folly::Future<folly::Unit>
MyServiceFastClientWrapper::ping(
    apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_ping, channel_);
  async_client->ping(
    rpcOptions,
    std::move(callback)
  );
  return _future;
}

folly::Future<std::string>
MyServiceFastClientWrapper::getRandomData(
    apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::string> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<std::string>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_getRandomData, channel_);
  async_client->getRandomData(
    rpcOptions,
    std::move(callback)
  );
  return _future;
}

folly::Future<bool>
MyServiceFastClientWrapper::hasDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id) {
  folly::Promise<bool> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<bool>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_hasDataById, channel_);
  async_client->hasDataById(
    rpcOptions,
    std::move(callback),
    arg_id
  );
  return _future;
}

folly::Future<std::string>
MyServiceFastClientWrapper::getDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id) {
  folly::Promise<std::string> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<std::string>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_getDataById, channel_);
  async_client->getDataById(
    rpcOptions,
    std::move(callback),
    arg_id
  );
  return _future;
}

folly::Future<folly::Unit>
MyServiceFastClientWrapper::putDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id,
    std::string arg_data) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_putDataById, channel_);
  async_client->putDataById(
    rpcOptions,
    std::move(callback),
    arg_id,
    arg_data
  );
  return _future;
}

folly::Future<folly::Unit>
MyServiceFastClientWrapper::lobDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id,
    std::string arg_data) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::apache::thrift::OneWayFutureCallback>(
    std::move(_promise), channel_);
  async_client->lobDataById(
    rpcOptions,
    std::move(callback),
    arg_id,
    arg_data
  );
  return _future;
}


MyServiceEmptyClientWrapper::MyServiceEmptyClientWrapper(
    std::shared_ptr<::cpp2::MyServiceEmptyAsyncClient> async_client,
    std::shared_ptr<apache::thrift::RequestChannel> channel) : 
    async_client(async_client),
      channel_(channel) {}

MyServiceEmptyClientWrapper::~MyServiceEmptyClientWrapper() {}

folly::Future<folly::Unit> MyServiceEmptyClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [cha = std::move(channel_), cli = std::move(async_client)] {});
}

void MyServiceEmptyClientWrapper::setPersistentHeader(const std::string& key, const std::string& value) {
    auto headerChannel = async_client->getHeaderChannel();
    if (headerChannel != nullptr) {
        headerChannel->setPersistentHeader(key, value);
    }
}



MyServicePrioParentClientWrapper::MyServicePrioParentClientWrapper(
    std::shared_ptr<::cpp2::MyServicePrioParentAsyncClient> async_client,
    std::shared_ptr<apache::thrift::RequestChannel> channel) : 
    async_client(async_client),
      channel_(channel) {}

MyServicePrioParentClientWrapper::~MyServicePrioParentClientWrapper() {}

folly::Future<folly::Unit> MyServicePrioParentClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [cha = std::move(channel_), cli = std::move(async_client)] {});
}

void MyServicePrioParentClientWrapper::setPersistentHeader(const std::string& key, const std::string& value) {
    auto headerChannel = async_client->getHeaderChannel();
    if (headerChannel != nullptr) {
        headerChannel->setPersistentHeader(key, value);
    }
}


folly::Future<folly::Unit>
MyServicePrioParentClientWrapper::ping(
    apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_ping, channel_);
  async_client->ping(
    rpcOptions,
    std::move(callback)
  );
  return _future;
}

folly::Future<folly::Unit>
MyServicePrioParentClientWrapper::pong(
    apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_pong, channel_);
  async_client->pong(
    rpcOptions,
    std::move(callback)
  );
  return _future;
}


MyServicePrioChildClientWrapper::MyServicePrioChildClientWrapper(
    std::shared_ptr<::cpp2::MyServicePrioChildAsyncClient> async_client,
    std::shared_ptr<apache::thrift::RequestChannel> channel) : 
    MyServicePrioParentClientWrapper(async_client, channel),
    async_client(async_client),
      channel_(channel) {}


folly::Future<folly::Unit> MyServicePrioChildClientWrapper::disconnect() {
  folly::via(
    this->async_client->getChannel()->getEventBase(),
    [cha = std::move(channel_), cli = std::move(async_client)] {});
  return ::cpp2::MyServicePrioParentClientWrapper::disconnect();
}



folly::Future<folly::Unit>
MyServicePrioChildClientWrapper::pang(
    apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_pang, channel_);
  async_client->pang(
    rpcOptions,
    std::move(callback)
  );
  return _future;
}


} // namespace cpp2
