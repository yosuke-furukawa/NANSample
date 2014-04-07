#include <node.h>
#include <nan.h>

using namespace v8;

NAN_METHOD(Method) {
  NanScope();
  NanReturnValue(NanSymbol("world"));
}

void init(Handle<Object> exports) {
  exports->Set(NanSymbol("hello"),
      FunctionTemplate::New(Method)->GetFunction());
}

NODE_MODULE(addon, init)
