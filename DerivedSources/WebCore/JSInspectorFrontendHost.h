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

#ifndef JSInspectorFrontendHost_h
#define JSInspectorFrontendHost_h

#if ENABLE(INSPECTOR)

#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class InspectorFrontendHost;

class JSInspectorFrontendHost : public DOMObjectWithGlobalPointer {
    typedef DOMObjectWithGlobalPointer Base;
public:
    JSInspectorFrontendHost(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<InspectorFrontendHost>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom functions
    JSC::JSValue platform(JSC::ExecState*);
    JSC::JSValue port(JSC::ExecState*);
    JSC::JSValue showContextMenu(JSC::ExecState*);
    InspectorFrontendHost* impl() const { return m_impl.get(); }

private:
    RefPtr<InspectorFrontendHost> m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, InspectorFrontendHost*);
InspectorFrontendHost* toInspectorFrontendHost(JSC::JSValue);

class JSInspectorFrontendHostPrototype : public JSC::JSObjectWithGlobalObject {
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
    JSInspectorFrontendHostPrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionLoaded(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionCloseWindow(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionDisconnectFromBackend(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionBringToFront(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionInspectedURLChanged(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionRequestAttachWindow(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionRequestDetachWindow(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSetAttachedWindowHeight(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionMoveWindowBy(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSetExtensionAPI(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionLocalizedStringsURL(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionHiddenPanels(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSaveSessionSetting(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionLoadSessionSetting(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionCopyText(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionPlatform(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionPort(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionShowContextMenu(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSendMessageToBackend(JSC::ExecState*);
// Attributes

JSC::JSValue jsInspectorFrontendHostConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(INSPECTOR)

#endif
