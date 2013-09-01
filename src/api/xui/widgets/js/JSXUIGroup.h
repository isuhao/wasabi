// ----------------------------------------------------------------------------
// Generated by JSScriptable Factory - DO NOT EDIT
// 
// File        : ../js/JSXUIGroup.h
// Class       : XUIGroup
// class layer : Javascript Dispatcher
// ----------------------------------------------------------------------------

#ifndef JSXUIGROUP_H
#define JSXUIGROUP_H

#include <api/js/jsscriptable.h>
#include "../sourcesink/XUIGroupEventSink.h"
#include <api/js/jseventlistener.h>

class XUIObject;


const GUID JS_XUIGroup_GUID = { 0x304035a0, 0xe221, 0x49e0, { 0xb6, 0x07, 0x3b, 0x0c, 0x99, 0xb2, 0xe7, 0x7a } };

class JSXUIGroupEventSink;
// ----------------------------------------------------------------------------

class JSXUIGroup {
  protected:
    JSXUIGroup();
    virtual ~JSXUIGroup();
  
  public:
    static JSClass JSXUIGroup::classDescriptor;
    static JSFunctionSpec JSXUIGroup::functionTable[];
    
  public:
    static JSBool fromjs_getContent(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
  
  
  private:
    JSXUIGroupEventSink *jsSink;
};

// ----------------------------------------------------------------------------

class JSXUIGroupEventSink : public XUIGroupEventSink {
  public:
    JSXUIGroupEventSink(JSXUIGroup *jsclass) : m_jsClass(jsclass) {}
    virtual ~JSXUIGroupEventSink() {}
  private:
    JSXUIGroup *m_jsClass;
};

#endif // JSXUIGROUP_H