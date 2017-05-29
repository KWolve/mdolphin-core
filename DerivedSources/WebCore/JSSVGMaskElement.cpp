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

#include "JSSVGMaskElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGMaskElement.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGMaskElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGMaskElementTableValues[16] =
{
    { "maskUnits", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementMaskUnits), (intptr_t)0 THUNK_GENERATOR(0) },
    { "maskContentUnits", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementMaskContentUnits), (intptr_t)0 THUNK_GENERATOR(0) },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredFeatures", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementRequiredFeatures), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredExtensions", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementRequiredExtensions), (intptr_t)0 THUNK_GENERATOR(0) },
    { "systemLanguage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementSystemLanguage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "xmllang", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementXmllang), (intptr_t)setJSSVGMaskElementXmllang THUNK_GENERATOR(0) },
    { "xmlspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementXmlspace), (intptr_t)setJSSVGMaskElementXmlspace THUNK_GENERATOR(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementExternalResourcesRequired), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMaskElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGMaskElementTable = { 37, 31, JSSVGMaskElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGMaskElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGMaskElementConstructorTable = { 1, 0, JSSVGMaskElementConstructorTableValues, 0 };
class JSSVGMaskElementConstructor : public DOMConstructorObject {
public:
    JSSVGMaskElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGMaskElementConstructor::s_info = { "SVGMaskElementConstructor", &DOMConstructorObject::s_info, &JSSVGMaskElementConstructorTable, 0 };

JSSVGMaskElementConstructor::JSSVGMaskElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGMaskElementConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGMaskElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGMaskElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGMaskElementConstructor, DOMObject>(exec, &JSSVGMaskElementConstructorTable, this, propertyName, slot);
}

bool JSSVGMaskElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGMaskElementConstructor, DOMObject>(exec, &JSSVGMaskElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGMaskElementPrototypeTableValues[3] =
{
    { "hasExtension", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGMaskElementPrototypeFunctionHasExtension), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGMaskElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGMaskElementPrototypeTable = { 4, 3, JSSVGMaskElementPrototypeTableValues, 0 };
const ClassInfo JSSVGMaskElementPrototype::s_info = { "SVGMaskElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGMaskElementPrototypeTable, 0 };

JSObject* JSSVGMaskElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGMaskElement>(exec, globalObject);
}

bool JSSVGMaskElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGMaskElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGMaskElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGMaskElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGMaskElement::s_info = { "SVGMaskElement", &JSSVGElement::s_info, &JSSVGMaskElementTable, 0 };

JSSVGMaskElement::JSSVGMaskElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGMaskElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGMaskElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGMaskElementPrototype(globalObject, JSSVGMaskElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGMaskElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGMaskElement, Base>(exec, &JSSVGMaskElementTable, this, propertyName, slot);
}

bool JSSVGMaskElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGMaskElement, Base>(exec, &JSSVGMaskElementTable, this, propertyName, descriptor);
}

JSValue jsSVGMaskElementMaskUnits(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->maskUnitsAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGMaskElementMaskContentUnits(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->maskContentUnitsAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGMaskElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGMaskElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGMaskElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGMaskElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGMaskElementRequiredFeatures(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGMaskElement, IsDerivedFromSVGElement<SVGMaskElement>::value>::ownerElement(imp), imp->requiredFeatures())));
    return result;
}

JSValue jsSVGMaskElementRequiredExtensions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGMaskElement, IsDerivedFromSVGElement<SVGMaskElement>::value>::ownerElement(imp), imp->requiredExtensions())));
    return result;
}

JSValue jsSVGMaskElementSystemLanguage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGMaskElement, IsDerivedFromSVGElement<SVGMaskElement>::value>::ownerElement(imp), imp->systemLanguage())));
    return result;
}

JSValue jsSVGMaskElementXmllang(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmllang());
    return result;
}

JSValue jsSVGMaskElementXmlspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmlspace());
    return result;
}

JSValue jsSVGMaskElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGMaskElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGMaskElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGMaskElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGMaskElement* domObject = static_cast<JSSVGMaskElement*>(asObject(slotBase));
    return JSSVGMaskElement::getConstructor(exec, domObject->globalObject());
}

void JSSVGMaskElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGMaskElement, Base>(exec, propertyName, value, &JSSVGMaskElementTable, this, slot);
}

void setJSSVGMaskElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(thisObject);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    imp->setXmllang(ustringToString(value.toString(exec)));
}

void setJSSVGMaskElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(thisObject);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    imp->setXmlspace(ustringToString(value.toString(exec)));
}

JSValue JSSVGMaskElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGMaskElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGMaskElementPrototypeFunctionHasExtension(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMaskElement::s_info))
        return throwVMTypeError(exec);
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(thisValue));
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    const String& extension(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGMaskElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMaskElement::s_info))
        return throwVMTypeError(exec);
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(thisValue));
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG)
