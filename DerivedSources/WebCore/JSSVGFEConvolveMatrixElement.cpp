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

#include "JSSVGFEConvolveMatrixElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedInteger.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedNumberList.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEConvolveMatrixElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEConvolveMatrixElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEConvolveMatrixElementTableValues[21] =
{
    { "in1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementIn1), (intptr_t)0 THUNK_GENERATOR(0) },
    { "orderX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementOrderX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "orderY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementOrderY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "kernelMatrix", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementKernelMatrix), (intptr_t)0 THUNK_GENERATOR(0) },
    { "divisor", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementDivisor), (intptr_t)0 THUNK_GENERATOR(0) },
    { "bias", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementBias), (intptr_t)0 THUNK_GENERATOR(0) },
    { "targetX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementTargetX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "targetY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementTargetY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "edgeMode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementEdgeMode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "kernelUnitLengthX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementKernelUnitLengthX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "kernelUnitLengthY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementKernelUnitLengthY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "preserveAlpha", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementPreserveAlpha), (intptr_t)0 THUNK_GENERATOR(0) },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "result", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementResult), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEConvolveMatrixElementTable = { 68, 63, JSSVGFEConvolveMatrixElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEConvolveMatrixElementConstructorTableValues[5] =
{
    { "SVG_EDGEMODE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_EDGEMODE_DUPLICATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_DUPLICATE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_EDGEMODE_WRAP", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_WRAP), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_EDGEMODE_NONE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_NONE), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEConvolveMatrixElementConstructorTable = { 9, 7, JSSVGFEConvolveMatrixElementConstructorTableValues, 0 };
class JSSVGFEConvolveMatrixElementConstructor : public DOMConstructorObject {
public:
    JSSVGFEConvolveMatrixElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGFEConvolveMatrixElementConstructor::s_info = { "SVGFEConvolveMatrixElementConstructor", &DOMConstructorObject::s_info, &JSSVGFEConvolveMatrixElementConstructorTable, 0 };

JSSVGFEConvolveMatrixElementConstructor::JSSVGFEConvolveMatrixElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGFEConvolveMatrixElementConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGFEConvolveMatrixElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFEConvolveMatrixElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEConvolveMatrixElementConstructor, DOMObject>(exec, &JSSVGFEConvolveMatrixElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFEConvolveMatrixElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEConvolveMatrixElementConstructor, DOMObject>(exec, &JSSVGFEConvolveMatrixElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEConvolveMatrixElementPrototypeTableValues[6] =
{
    { "SVG_EDGEMODE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_EDGEMODE_DUPLICATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_DUPLICATE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_EDGEMODE_WRAP", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_WRAP), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_EDGEMODE_NONE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_NONE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGFEConvolveMatrixElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEConvolveMatrixElementPrototypeTable = { 17, 15, JSSVGFEConvolveMatrixElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEConvolveMatrixElementPrototype::s_info = { "SVGFEConvolveMatrixElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGFEConvolveMatrixElementPrototypeTable, 0 };

JSObject* JSSVGFEConvolveMatrixElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEConvolveMatrixElement>(exec, globalObject);
}

bool JSSVGFEConvolveMatrixElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGFEConvolveMatrixElementPrototype, JSObject>(exec, &JSSVGFEConvolveMatrixElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGFEConvolveMatrixElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSSVGFEConvolveMatrixElementPrototype, JSObject>(exec, &JSSVGFEConvolveMatrixElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGFEConvolveMatrixElement::s_info = { "SVGFEConvolveMatrixElement", &JSSVGElement::s_info, &JSSVGFEConvolveMatrixElementTable, 0 };

JSSVGFEConvolveMatrixElement::JSSVGFEConvolveMatrixElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEConvolveMatrixElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEConvolveMatrixElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFEConvolveMatrixElementPrototype(globalObject, JSSVGFEConvolveMatrixElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEConvolveMatrixElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEConvolveMatrixElement, Base>(exec, &JSSVGFEConvolveMatrixElementTable, this, propertyName, slot);
}

bool JSSVGFEConvolveMatrixElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEConvolveMatrixElement, Base>(exec, &JSSVGFEConvolveMatrixElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEConvolveMatrixElementIn1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementOrderX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedInteger> obj = imp->orderXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementOrderY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedInteger> obj = imp->orderYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementKernelMatrix(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumberList> obj = imp->kernelMatrixAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementDivisor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->divisorAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementBias(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->biasAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementTargetX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedInteger> obj = imp->targetXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementTargetY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedInteger> obj = imp->targetYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementEdgeMode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->edgeModeAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementKernelUnitLengthX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->kernelUnitLengthXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementKernelUnitLengthY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->kernelUnitLengthYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementPreserveAlpha(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->preserveAlphaAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementResult(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEConvolveMatrixElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGFEConvolveMatrixElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEConvolveMatrixElement* domObject = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    return JSSVGFEConvolveMatrixElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEConvolveMatrixElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEConvolveMatrixElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGFEConvolveMatrixElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGFEConvolveMatrixElement::s_info))
        return throwVMTypeError(exec);
    JSSVGFEConvolveMatrixElement* castedThis = static_cast<JSSVGFEConvolveMatrixElement*>(asObject(thisValue));
    SVGFEConvolveMatrixElement* imp = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}

// Constant getters

JSValue jsSVGFEConvolveMatrixElementSVG_EDGEMODE_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGFEConvolveMatrixElementSVG_EDGEMODE_DUPLICATE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGFEConvolveMatrixElementSVG_EDGEMODE_WRAP(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSVGFEConvolveMatrixElementSVG_EDGEMODE_NONE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
