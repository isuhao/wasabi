// ----------------------------------------------------------------------------
// Generated by SourceSink Factory - DO NOT EDIT
// 
// File        : ../sourcesink/XUIOSWindowEventSource.cpp
// Class       : XUIOSWindow
// class layer : Event Source for for XUIOSWindow
// ----------------------------------------------------------------------------

#include "precomp.h"
#include "XUIOSWindowEventSource.h"
#include "XUIOSWindowEventSink.h"
#include "..\xuioswindow.h"


void XUIOSWindowEventSource::eventSource_onUserClose() {
  foreach(m_sinks)
    m_sinks.getfor()->eventSink_onUserClose(this);
  endfor
}

