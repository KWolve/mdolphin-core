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

#if ENABLE(DEVICE_ORIENTATION)

#include "JSDeviceMotionEvent.h"

#include "DeviceMotionEvent.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDeviceMotionEvent);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDeviceMotionEventTableValues[6] =
{
    { "acceleration", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceMotionEventAcceleration), (intptr_t)0 THUNK_GENERATOR(0) },
    { "accelerationIncludingGravity", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceMotionEventAccelerationIncludingGravity), (intptr_t)0 THUNK_GENERATOR(0) },
    { "rotationRate", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceMotionEventRotationRate), (intptr_t)0 THUNK_GENERATOR(0) },
    { "interval", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceMotionEventInterval), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceMotionEventConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDeviceMotionEventTable = { 18, 15, JSDeviceMotionEventTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDeviceMotionEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDeviceMotionEventConstructorTable = { 1, 0, JSDeviceMotionEventConstructorTableValues, 0 };
class JSDeviceMotionEventConstructor : public DOMConstructorObject {
public:
    JSDeviceMotionEventConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSDeviceMotionEventConstructor::s_info = { "DeviceMotionEventConstructor", &DOMConstructorObject::s_info, &JSDeviceMotionEventConstructorTable, 0 };

JSDeviceMotionEventConstructor::JSDeviceMotionEventConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSDeviceMotionEventConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSDeviceMotionEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSDeviceMotionEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDeviceMotionEventConstructor, DOMObject>(exec, &JSDeviceMotionEventConstructorTable, this, propertyName, slot);
}

bool JSDeviceMotionEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDeviceMotionEventConstructor, DOMObject>(exec, &JSDeviceMotionEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDeviceMotionEventPrototypeTableValues[2] =
{
    { "initDeviceMotionEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDeviceMotionEventPrototypeFunctionInitDeviceMotionEvent), (intptr_t)7 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDeviceMotionEventPrototypeTable = { 2, 1, JSDeviceMotionEventPrototypeTableValues, 0 };
const ClassInfo JSDeviceMotionEventPrototype::s_info = { "DeviceMotionEventPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSDeviceMotionEventPrototypeTable, 0 };

JSObject* JSDeviceMotionEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDeviceMotionEvent>(exec, globalObject);
}

bool JSDeviceMotionEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSDeviceMotionEventPrototypeTable, this, propertyName, slot);
}

bool JSDeviceMotionEventPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSDeviceMotionEventPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSDeviceMotionEvent::s_info = { "DeviceMotionEvent", &JSEvent::s_info, &JSDeviceMotionEventTable, 0 };

JSDeviceMotionEvent::JSDeviceMotionEvent(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<DeviceMotionEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSDeviceMotionEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSDeviceMotionEventPrototype(globalObject, JSDeviceMotionEventPrototype::createStructure(exec->globalData(), JSEventPrototype::self(exec, globalObject)));
}

bool JSDeviceMotionEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDeviceMotionEvent, Base>(exec, &JSDeviceMotionEventTable, this, propertyName, slot);
}

bool JSDeviceMotionEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDeviceMotionEvent, Base>(exec, &JSDeviceMotionEventTable, this, propertyName, descriptor);
}

JSValue jsDeviceMotionEventAcceleration(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDeviceMotionEvent* castedThis = static_cast<JSDeviceMotionEvent*>(asObject(slotBase));
    return castedThis->acceleration(exec);
}

JSValue jsDeviceMotionEventAccelerationIncludingGravity(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDeviceMotionEvent* castedThis = static_cast<JSDeviceMotionEvent*>(asObject(slotBase));
    return castedThis->accelerationIncludingGravity(exec);
}

JSValue jsDeviceMotionEventRotationRate(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDeviceMotionEvent* castedThis = static_cast<JSDeviceMotionEvent*>(asObject(slotBase));
    return castedThis->rotationRate(exec);
}

JSValue jsDeviceMotionEventInterval(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDeviceMotionEvent* castedThis = static_cast<JSDeviceMotionEvent*>(asObject(slotBase));
    return castedThis->interval(exec);
}

JSValue jsDeviceMotionEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDeviceMotionEvent* domObject = static_cast<JSDeviceMotionEvent*>(asObject(slotBase));
    return JSDeviceMotionEvent::getConstructor(exec, domObject->globalObject());
}

JSValue JSDeviceMotionEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDeviceMotionEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDeviceMotionEventPrototypeFunctionInitDeviceMotionEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDeviceMotionEvent::s_info))
        return throwVMTypeError(exec);
    JSDeviceMotionEvent* castedThis = static_cast<JSDeviceMotionEvent*>(asObject(thisValue));
    return JSValue::encode(castedThis->initDeviceMotionEvent(exec));
}


}

#endif // ENABLE(DEVICE_ORIENTATION)
