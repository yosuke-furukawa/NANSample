#include <node.h>
#include <nan.h>

using namespace v8;

NAN_METHOD(Method) {
  NanScope();
  v8::Handle<v8::Object> buffer = args[0]->ToObject();
  bool hasIndexed = buffer->HasIndexedPropertiesInExternalArrayData();
  NanReturnValue(NanNew<Boolean>(hasIndexed));
}

void init(Handle<Object> exports) {
  exports->Set(NanSymbol("hasIndexed"),
      NanNew<FunctionTemplate>(Method)->GetFunction());
}

NODE_MODULE(addon, init)
