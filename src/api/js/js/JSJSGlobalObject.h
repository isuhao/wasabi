// ----------------------------------------------------------------------------
// Generated by JSScriptable Factory - DO NOT EDIT
// 
// File        : ../js/JSJSGlobalObject.h
// Class       : JSGlobalObject
// class layer : Javascript Dispatcher
// ----------------------------------------------------------------------------

#ifndef JSJSGLOBALOBJECT_H
#define JSJSGLOBALOBJECT_H

#include <api/js/jsscriptable.h>
#include "../sourcesink/JSGlobalObjectEventSink.h"
#include <api/js/jseventlistener.h>

class JSTimer;


const GUID JS_JSGlobalObject_GUID = { 0xcafe5d05, 0xa4a4, 0x495d, { 0xac, 0x61, 0x31, 0xaa, 0xb4, 0x35, 0xff, 0x76 } };

class JSJSGlobalObjectEventSink;
// ----------------------------------------------------------------------------

class JSJSGlobalObject {
  protected:
    JSJSGlobalObject();
    virtual ~JSJSGlobalObject();
  
  public:
    static JSClass JSJSGlobalObject::classDescriptor;
    static JSFunctionSpec JSJSGlobalObject::functionTable[];
    
  public:
    static JSBool fromjs_printDebug(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_alert(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_createTimer(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_deleteTimer(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_isTimerValid(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_shutdown(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
  
  
  private:
    JSJSGlobalObjectEventSink *jsSink;
};

// ----------------------------------------------------------------------------

class JSJSGlobalObjectEventSink : public JSGlobalObjectEventSink {
  public:
    JSJSGlobalObjectEventSink(JSJSGlobalObject *jsclass) : m_jsClass(jsclass) {}
    virtual ~JSJSGlobalObjectEventSink() {}
  private:
    JSJSGlobalObject *m_jsClass;
};

#endif // JSJSGLOBALOBJECT_H