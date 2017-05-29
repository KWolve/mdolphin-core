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

#include "JSSVGFEComponentTransferElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEComponentTransferElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEComponentTransferElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEComponentTransferElementTableValues[10] =
{
    { "in1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementIn1), (intptr_t)0 THUNK_GENERATOR(0) },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "result", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementResult), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEComponentTransferElementTable = { 34, 31, JSSVGFEComponentTransferElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEComponentTransferElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEComponentTransferElementConstructorTable = { 1, 0, JSSVGFEComponentTransferElementConstructorTableValues, 0 };
class JSSVGFEComponentTransferElementConstructor : public DOMConstructorObject {
public:
    JSSVGFEComponentTransferElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGFEComponentTransferElementConstructor::s_info = { "SVGFEComponentTransferElementConstructor", &DOMConstructorObject::s_info, &JSSVGFEComponentTransferElementConstructorTable, 0 };

JSSVGFEComponentTransferElementConstructor::JSSVGFEComponentTransferElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGFEComponentTransferElementConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGFEComponentTransferElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFEComponentTransferElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEComponentTransferElementConstructor, DOMObject>(exec, &JSSVGFEComponentTransferElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFEComponentTransferElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEComponentTransferElementConstructor, DOMObject>(exec, &JSSVGFEComponentTransferElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEComponentTransferElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGFEComponentTransferElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEComponentTransferElementPrototypeTable = { 2, 1, JSSVGFEComponentTransferElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEComponentTransferElementPrototype::s_info = { "SVGFEComponentTransferElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGFEComponentTransferElementPrototypeTable, 0 };

JSObject* JSSVGFEComponentTransferElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEComponentTransferElement>(exec, globalObject);
}

bool JSSVGFEComponentTransferElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFEComponentTransferElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGFEComponentTransferElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGFEComponentTransferElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGFEComponentTransferElement::s_info = { "SVGFEComponentTransferElement", &JSSVGElement::s_info, &JSSVGFEComponentTransferElementTable, 0 };

JSSVGFEComponentTransferElement::JSSVGFEComponentTransferElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEComponentTransferElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEComponentTransferElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFEComponentTransferElementPrototype(globalObject, JSSVGFEComponentTransferElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEComponentTransferElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEComponentTransferElement, Base>(exec, &JSSVGFEComponentTransferElementTable, this, propertyName, slot);
}

bool JSSVGFEComponentTransferElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEComponentTransferElement, Base>(exec, &JSSVGFEComponentTransferElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEComponentTransferElementIn1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEComponentTransferElement* castedThis = static_cast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* imp = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEComponentTransferElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEComponentTransferElement* castedThis = static_cast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* imp = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEComponentTransferElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEComponentTransferElement* castedThis = static_cast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* imp = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEComponentTransferElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEComponentTransferElement* castedThis = static_cast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* imp = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEComponentTransferElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEComponentTransferElement* castedThis = static_cast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* imp = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEComponentTransferElementResult(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEComponentTransferElement* castedThis = static_cast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* imp = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEComponentTransferElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEComponentTransferElement* castedThis = static_cast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* imp = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGFEComponentTransferElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEComponentTransferElement* castedThis = static_cast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* imp = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGFEComponentTransferElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEComponentTransferElement* domObject = static_cast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    return JSSVGFEComponentTransferElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEComponentTransferElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEComponentTransferElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGFEComponentTransferElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGFEComponentTransferElement::s_info))
        return throwVMTypeError(exec);
    JSSVGFEComponentTransferElement* castedThis = static_cast<JSSVGFEComponentTransferElement*>(asObject(thisValue));
    SVGFEComponentTransferElement* imp = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
