/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSHTMLMediaElement_h
#define JSHTMLMediaElement_h

#if ENABLE(VIDEO)

#include "JSHTMLElement.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore {

class HTMLMediaElement;

class JSHTMLMediaElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLMediaElement(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<HTMLMediaElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSHTMLMediaElementPrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
    JSHTMLMediaElementPrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLMediaElementPrototypeFunctionLoad(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLMediaElementPrototypeFunctionCanPlayType(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLMediaElementPrototypeFunctionPlay(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLMediaElementPrototypeFunctionPause(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLMediaElementError(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementSrc(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLMediaElementSrc(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementCurrentSrc(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementNetworkState(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementPreload(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLMediaElementPreload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementBuffered(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementReadyState(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementSeeking(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementCurrentTime(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLMediaElementCurrentTime(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementStartTime(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementDuration(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementPaused(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementDefaultPlaybackRate(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLMediaElementDefaultPlaybackRate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementPlaybackRate(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLMediaElementPlaybackRate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementPlayed(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementSeekable(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementEnded(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementAutoplay(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLMediaElementAutoplay(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementLoop(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLMediaElementLoop(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementControls(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLMediaElementControls(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementVolume(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLMediaElementVolume(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementMuted(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLMediaElementMuted(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementWebkitPreservesPitch(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLMediaElementWebkitPreservesPitch(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementWebkitHasClosedCaptions(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementWebkitClosedCaptionsVisible(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLMediaElementWebkitClosedCaptionsVisible(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
// Constants

JSC::JSValue jsHTMLMediaElementNETWORK_EMPTY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementNETWORK_IDLE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementNETWORK_LOADING(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementNETWORK_NO_SOURCE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementHAVE_NOTHING(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementHAVE_METADATA(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementHAVE_CURRENT_DATA(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementHAVE_FUTURE_DATA(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLMediaElementHAVE_ENOUGH_DATA(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(VIDEO)

#endif
