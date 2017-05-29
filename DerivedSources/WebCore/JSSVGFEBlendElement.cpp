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

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "JSSVGFEBlendElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEBlendElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEBlendElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEBlendElementTableValues[12] =
{
    { "in1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementIn1), (intptr_t)0 THUNK_GENERATOR(0) },
    { "in2", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementIn2), (intptr_t)0 THUNK_GENERATOR(0) },
    { "mode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementMode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "result", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementResult), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEBlendElementTable = { 35, 31, JSSVGFEBlendElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEBlendElementConstructorTableValues[7] =
{
    { "SVG_FEBLEND_MODE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FEBLEND_MODE_NORMAL", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_NORMAL), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FEBLEND_MODE_MULTIPLY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_MULTIPLY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FEBLEND_MODE_SCREEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_SCREEN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FEBLEND_MODE_DARKEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_DARKEN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FEBLEND_MODE_LIGHTEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_LIGHTEN), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEBlendElementConstructorTable = { 16, 15, JSSVGFEBlendElementConstructorTableValues, 0 };
class JSSVGFEBlendElementConstructor : public DOMConstructorObject {
public:
    JSSVGFEBlendElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGFEBlendElementConstructor::s_info = { "SVGFEBlendElementConstructor", &DOMConstructorObject::s_info, &JSSVGFEBlendElementConstructorTable, 0 };

JSSVGFEBlendElementConstructor::JSSVGFEBlendElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGFEBlendElementConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGFEBlendElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFEBlendElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEBlendElementConstructor, DOMObject>(exec, &JSSVGFEBlendElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFEBlendElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEBlendElementConstructor, DOMObject>(exec, &JSSVGFEBlendElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEBlendElementPrototypeTableValues[8] =
{
    { "SVG_FEBLEND_MODE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FEBLEND_MODE_NORMAL", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_NORMAL), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FEBLEND_MODE_MULTIPLY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_MULTIPLY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FEBLEND_MODE_SCREEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_SCREEN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FEBLEND_MODE_DARKEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_DARKEN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_FEBLEND_MODE_LIGHTEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_LIGHTEN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGFEBlendElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEBlendElementPrototypeTable = { 16, 15, JSSVGFEBlendElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEBlendElementPrototype::s_info = { "SVGFEBlendElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGFEBlendElementPrototypeTable, 0 };

JSObject* JSSVGFEBlendElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEBlendElement>(exec, globalObject);
}

bool JSSVGFEBlendElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGFEBlendElementPrototype, JSObject>(exec, &JSSVGFEBlendElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGFEBlendElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSSVGFEBlendElementPrototype, JSObject>(exec, &JSSVGFEBlendElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGFEBlendElement::s_info = { "SVGFEBlendElement", &JSSVGElement::s_info, &JSSVGFEBlendElementTable, 0 };

JSSVGFEBlendElement::JSSVGFEBlendElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEBlendElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEBlendElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFEBlendElementPrototype(globalObject, JSSVGFEBlendElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEBlendElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEBlendElement, Base>(exec, &JSSVGFEBlendElementTable, this, propertyName, slot);
}

bool JSSVGFEBlendElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEBlendElement, Base>(exec, &JSSVGFEBlendElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEBlendElementIn1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEBlendElement* castedThis = static_cast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEBlendElementIn2(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEBlendElement* castedThis = static_cast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->in2Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEBlendElementMode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEBlendElement* castedThis = static_cast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->modeAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEBlendElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEBlendElement* castedThis = static_cast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEBlendElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEBlendElement* castedThis = static_cast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEBlendElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEBlendElement* castedThis = static_cast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEBlendElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEBlendElement* castedThis = static_cast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEBlendElementResult(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEBlendElement* castedThis = static_cast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEBlendElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEBlendElement* castedThis = static_cast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEBlendElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEBlendElement* castedThis = static_cast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGFEBlendElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEBlendElement* domObject = static_cast<JSSVGFEBlendElement*>(asObject(slotBase));
    return JSSVGFEBlendElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEBlendElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEBlendElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGFEBlendElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGFEBlendElement::s_info))
        return throwVMTypeError(exec);
    JSSVGFEBlendElement* castedThis = static_cast<JSSVGFEBlendElement*>(asObject(thisValue));
    SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}

// Constant getters

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_NORMAL(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_MULTIPLY(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_SCREEN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_DARKEN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_LIGHTEN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
