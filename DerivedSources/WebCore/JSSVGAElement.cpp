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

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGAElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGAElement.h"
#include "SVGElement.h"
#include "SVGMatrix.h"
#include "SVGRect.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAElementTableValues[15] =
{
    { "target", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementTarget), (intptr_t)0 THUNK_GENERATOR(0) },
    { "href", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementHref), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredFeatures", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementRequiredFeatures), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredExtensions", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementRequiredExtensions), (intptr_t)0 THUNK_GENERATOR(0) },
    { "systemLanguage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementSystemLanguage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "xmllang", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementXmllang), (intptr_t)setJSSVGAElementXmllang THUNK_GENERATOR(0) },
    { "xmlspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementXmlspace), (intptr_t)setJSSVGAElementXmlspace THUNK_GENERATOR(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementExternalResourcesRequired), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "transform", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementTransform), (intptr_t)0 THUNK_GENERATOR(0) },
    { "nearestViewportElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementNearestViewportElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "farthestViewportElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementFarthestViewportElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAElementTable = { 34, 31, JSSVGAElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAElementConstructorTable = { 1, 0, JSSVGAElementConstructorTableValues, 0 };
class JSSVGAElementConstructor : public DOMConstructorObject {
public:
    JSSVGAElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGAElementConstructor::s_info = { "SVGAElementConstructor", &DOMConstructorObject::s_info, &JSSVGAElementConstructorTable, 0 };

JSSVGAElementConstructor::JSSVGAElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGAElementConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGAElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGAElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAElementConstructor, DOMObject>(exec, &JSSVGAElementConstructorTable, this, propertyName, slot);
}

bool JSSVGAElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAElementConstructor, DOMObject>(exec, &JSSVGAElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAElementPrototypeTableValues[7] =
{
    { "hasExtension", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAElementPrototypeFunctionHasExtension), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getBBox", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAElementPrototypeFunctionGetBBox), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getCTM", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAElementPrototypeFunctionGetCTM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getScreenCTM", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAElementPrototypeFunctionGetScreenCTM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getTransformToElement", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAElementPrototypeFunctionGetTransformToElement), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAElementPrototypeTable = { 17, 15, JSSVGAElementPrototypeTableValues, 0 };
const ClassInfo JSSVGAElementPrototype::s_info = { "SVGAElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGAElementPrototypeTable, 0 };

JSObject* JSSVGAElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAElement>(exec, globalObject);
}

bool JSSVGAElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGAElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGAElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGAElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGAElement::s_info = { "SVGAElement", &JSSVGElement::s_info, &JSSVGAElementTable, 0 };

JSSVGAElement::JSSVGAElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGAElementPrototype(globalObject, JSSVGAElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGAElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAElement, Base>(exec, &JSSVGAElementTable, this, propertyName, slot);
}

bool JSSVGAElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAElement, Base>(exec, &JSSVGAElementTable, this, propertyName, descriptor);
}

JSValue jsSVGAElementTarget(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->svgTargetAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGAElementHref(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGAElementRequiredFeatures(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGAElement, IsDerivedFromSVGElement<SVGAElement>::value>::ownerElement(imp), imp->requiredFeatures())));
    return result;
}

JSValue jsSVGAElementRequiredExtensions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGAElement, IsDerivedFromSVGElement<SVGAElement>::value>::ownerElement(imp), imp->requiredExtensions())));
    return result;
}

JSValue jsSVGAElementSystemLanguage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGAElement, IsDerivedFromSVGElement<SVGAElement>::value>::ownerElement(imp), imp->systemLanguage())));
    return result;
}

JSValue jsSVGAElementXmllang(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmllang());
    return result;
}

JSValue jsSVGAElementXmlspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmlspace());
    return result;
}

JSValue jsSVGAElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGAElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGAElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGAElementTransform(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGAElementNearestViewportElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nearestViewportElement()));
    return result;
}

JSValue jsSVGAElementFarthestViewportElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->farthestViewportElement()));
    return result;
}

JSValue jsSVGAElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAElement* domObject = static_cast<JSSVGAElement*>(asObject(slotBase));
    return JSSVGAElement::getConstructor(exec, domObject->globalObject());
}

void JSSVGAElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGAElement, Base>(exec, propertyName, value, &JSSVGAElementTable, this, slot);
}

void setJSSVGAElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(thisObject);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    imp->setXmllang(ustringToString(value.toString(exec)));
}

void setJSSVGAElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(thisObject);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    imp->setXmlspace(ustringToString(value.toString(exec)));
}

JSValue JSSVGAElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGAElementPrototypeFunctionHasExtension(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(thisValue));
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    const String& extension(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGAElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(thisValue));
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGAElementPrototypeFunctionGetBBox(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(thisValue));
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(imp->getBBox())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGAElementPrototypeFunctionGetCTM(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(thisValue));
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getCTM())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGAElementPrototypeFunctionGetScreenCTM(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(thisValue));
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getScreenCTM())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGAElementPrototypeFunctionGetTransformToElement(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAElement* castedThis = static_cast<JSSVGAElement*>(asObject(thisValue));
    SVGAElement* imp = static_cast<SVGAElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    SVGElement* element(toSVGElement(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getTransformToElement(element, ec))));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG)
