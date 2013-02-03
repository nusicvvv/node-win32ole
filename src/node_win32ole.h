#ifndef __NODE_WIN32OLE_H__
#define __NODE_WIN32OLE_H__

#include <node_buffer.h>
#include <node.h>
#include <v8.h>

using namespace v8;

namespace node_win32ole {

template <class T> T *castedInternalField(Handle<Object> object)
{
  return static_cast<T *>(
    Local<External>::Cast(object->GetInternalField(0))->Value());
}

extern Persistent<Object> module_target;

Handle<Value> Method_version(const Arguments& args);
Handle<Value> Method_print(const Arguments& args);
Handle<Value> Method_gettimeofday(const Arguments& args);

} // namespace node_win32ole

#endif // __NODE_WIN32OLE_H__
