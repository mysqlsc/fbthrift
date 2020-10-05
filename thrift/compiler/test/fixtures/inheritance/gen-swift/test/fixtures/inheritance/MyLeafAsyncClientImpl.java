/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.inheritance;

import com.facebook.nifty.client.RequestChannel;
import com.facebook.swift.codec.*;
import com.facebook.swift.service.*;
import com.facebook.swift.service.metadata.*;
import com.facebook.swift.transport.client.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.lang.reflect.Method;
import java.util.*;
import org.apache.thrift.ProtocolId;

@SwiftGenerated
public class MyLeafAsyncClientImpl extends test.fixtures.inheritance.MyNodeAsyncClientImpl implements MyLeaf.Async {

    // Method Handlers
    private ThriftMethodHandler doLeafMethodHandler;

    // Method Exceptions
    private static final Class[] doLeafExceptions = new Class[] {
        org.apache.thrift.TException.class};

    public MyLeafAsyncClientImpl(
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      super(channel, methods, headers, persistentHeaders, eventHandlers);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      doLeafMethodHandler = methodHandlerMap.get("doLeaf");
    }

    public MyLeafAsyncClientImpl(
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        RpcClient rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      super(headers, persistentHeaders, rpcClient, serviceMetadata, codecManager, protocolId, methods);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      doLeafMethodHandler = methodHandlerMap.get("doLeaf");
    }

    @Override
    public void close() {
        super.close();
    }


    @Override
    public ListenableFuture<Void> doLeaf() {
        try {
          return (ListenableFuture<Void>) execute(doLeafMethodHandler, doLeafExceptions);
        } catch (Throwable t) {
          throw new RuntimeTException(t.getMessage(), t);
        }
    }


    public ListenableFuture<Void> doLeaf(
        RpcOptions rpcOptions) {
        try {
          return (ListenableFuture<Void>) executeWithOptions(doLeafMethodHandler, doLeafExceptions, rpcOptions);
        } catch (Throwable t) {
          throw new RuntimeTException(t.getMessage(), t);
        }
    }
}
