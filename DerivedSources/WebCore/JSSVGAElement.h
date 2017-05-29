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

#ifndef JSSVGAElement_h
#define JSSVGAElement_h

#if ENABLE(SVG)

#include "JSSVGElement.h"
#include "SVGElement.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore {

class SVGAElement;

class JSSVGAElement : public JSSVGElement {
    typedef JSSVGElement Base;
public:
    JSSVGAElement(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<SVGAElement>);
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


class JSSVGAElementPrototype : public JSC::JSObjectWithGlobalObject {
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
    JSSVGAElementPrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSVGAElementPrototypeFunctionHasExtension(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGAElementPrototypeFunctionGetPresentationAttribute(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGAElementPrototypeFunctionGetBBox(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGAElementPrototypeFunctionGetCTM(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGAElementPrototypeFunctionGetScreenCTM(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGAElementPrototypeFunctionGetTransformToElement(JSC::ExecState*);
// Attributes

JSC::JSValue jsSVGAElementTarget(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGAElementHref(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGAElementRequiredFeatures(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGAElementRequiredExtensions(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGAElementSystemLanguage(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGAElementXmllang(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGAElementXmllang(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGAElementXmlspace(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGAElementXmlspace(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGAElementExternalResourcesRequired(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGAElementClassName(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGAElementStyle(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGAElementTransform(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGAElementNearestViewportElement(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGAElementFarthestViewportElement(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGAElementConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
