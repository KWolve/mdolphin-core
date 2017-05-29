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

#ifndef JSHTMLOListElement_h
#define JSHTMLOListElement_h

#include "JSHTMLElement.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore {

class HTMLOListElement;

class JSHTMLOListElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLOListElement(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<HTMLOListElement>);
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


class JSHTMLOListElementPrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static const JSC::ClassInfo s_info;
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
    JSHTMLOListElementPrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsHTMLOListElementCompact(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLOListElementCompact(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLOListElementStart(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLOListElementStart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLOListElementType(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLOListElementType(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLOListElementConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
