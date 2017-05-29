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

#ifndef JSHTMLVideoElement_h
#define JSHTMLVideoElement_h

#if ENABLE(VIDEO)

#include "HTMLVideoElement.h"
#include "JSHTMLMediaElement.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore {

class HTMLVideoElement;

class JSHTMLVideoElement : public JSHTMLMediaElement {
    typedef JSHTMLMediaElement Base;
public:
    JSHTMLVideoElement(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<HTMLVideoElement>);
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
    HTMLVideoElement* impl() const
    {
        return static_cast<HTMLVideoElement*>(Base::impl());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

HTMLVideoElement* toHTMLVideoElement(JSC::JSValue);

class JSHTMLVideoElementPrototype : public JSC::JSObjectWithGlobalObject {
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
    JSHTMLVideoElementPrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLVideoElementPrototypeFunctionWebkitEnterFullscreen(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLVideoElementPrototypeFunctionWebkitExitFullscreen(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLVideoElementPrototypeFunctionWebkitEnterFullScreen(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLVideoElementPrototypeFunctionWebkitExitFullScreen(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLVideoElementWidth(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLVideoElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLVideoElementHeight(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLVideoElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLVideoElementVideoWidth(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLVideoElementVideoHeight(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLVideoElementPoster(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLVideoElementPoster(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLVideoElementWebkitSupportsFullscreen(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLVideoElementWebkitDisplayingFullscreen(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLVideoElementConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(VIDEO)

#endif
