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
#include "JSCanvasGradient.h"

#include "CanvasGradient.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "PlatformString.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCanvasGradient);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCanvasGradientTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCanvasGradientConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCanvasGradientTable = { 2, 1, JSCanvasGradientTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCanvasGradientConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCanvasGradientConstructorTable = { 1, 0, JSCanvasGradientConstructorTableValues, 0 };
class JSCanvasGradientConstructor : public DOMConstructorObject {
public:
    JSCanvasGradientConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSCanvasGradientConstructor::s_info = { "CanvasGradientConstructor", &DOMConstructorObject::s_info, &JSCanvasGradientConstructorTable, 0 };

JSCanvasGradientConstructor::JSCanvasGradientConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSCanvasGradientConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSCanvasGradientPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSCanvasGradientConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCanvasGradientConstructor, DOMObject>(exec, &JSCanvasGradientConstructorTable, this, propertyName, slot);
}

bool JSCanvasGradientConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCanvasGradientConstructor, DOMObject>(exec, &JSCanvasGradientConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCanvasGradientPrototypeTableValues[2] =
{
    { "addColorStop", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCanvasGradientPrototypeFunctionAddColorStop), (intptr_t)2 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCanvasGradientPrototypeTable = { 2, 1, JSCanvasGradientPrototypeTableValues, 0 };
const ClassInfo JSCanvasGradientPrototype::s_info = { "CanvasGradientPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSCanvasGradientPrototypeTable, 0 };

JSObject* JSCanvasGradientPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCanvasGradient>(exec, globalObject);
}

bool JSCanvasGradientPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSCanvasGradientPrototypeTable, this, propertyName, slot);
}

bool JSCanvasGradientPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSCanvasGradientPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSCanvasGradient::s_info = { "CanvasGradient", &DOMObjectWithGlobalPointer::s_info, &JSCanvasGradientTable, 0 };

JSCanvasGradient::JSCanvasGradient(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<CanvasGradient> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSCanvasGradient::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCanvasGradientPrototype(globalObject, JSCanvasGradientPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSCanvasGradient::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCanvasGradient, Base>(exec, &JSCanvasGradientTable, this, propertyName, slot);
}

bool JSCanvasGradient::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCanvasGradient, Base>(exec, &JSCanvasGradientTable, this, propertyName, descriptor);
}

JSValue jsCanvasGradientConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCanvasGradient* domObject = static_cast<JSCanvasGradient*>(asObject(slotBase));
    return JSCanvasGradient::getConstructor(exec, domObject->globalObject());
}

JSValue JSCanvasGradient::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCanvasGradientConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsCanvasGradientPrototypeFunctionAddColorStop(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCanvasGradient::s_info))
        return throwVMTypeError(exec);
    JSCanvasGradient* castedThis = static_cast<JSCanvasGradient*>(asObject(thisValue));
    CanvasGradient* imp = static_cast<CanvasGradient*>(castedThis->impl());
    ExceptionCode ec = 0;
    float offset(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& color(ustringToString(exec->argument(1).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->addColorStop(offset, color, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, CanvasGradient* object)
{
    return getDOMObjectWrapper<JSCanvasGradient>(exec, globalObject, object);
}
CanvasGradient* toCanvasGradient(JSC::JSValue value)
{
    return value.inherits(&JSCanvasGradient::s_info) ? static_cast<JSCanvasGradient*>(asObject(value))->impl() : 0;
}

}
