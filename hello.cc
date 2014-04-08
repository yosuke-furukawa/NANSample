#include <node.h>
#include <nan.h>

using namespace v8;

NAN_METHOD(Method) {
  NanScope();
  v8::Handle<v8::Object> buffer = args[0]->ToObject();
  bool hasIndexed = buffer->HasIndexedPropertiesInExternalArrayData();
  printf("hasINDEXED = %d\n", hasIndexed);
  NanReturnValue(NanSymbol("world"));
}

void init(Handle<Object> exports) {
  exports->Set(NanSymbol("hello"),
      FunctionTemplate::New(Method)->GetFunction());
}

NODE_MODULE(addon, init)
