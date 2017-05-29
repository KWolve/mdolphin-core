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
#include "JSWheelEvent.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "WheelEvent.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWheelEvent);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWheelEventTableValues[17] =
{
    { "screenX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventScreenX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "screenY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventScreenY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "clientX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventClientX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "clientY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventClientY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ctrlKey", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventCtrlKey), (intptr_t)0 THUNK_GENERATOR(0) },
    { "shiftKey", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventShiftKey), (intptr_t)0 THUNK_GENERATOR(0) },
    { "altKey", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventAltKey), (intptr_t)0 THUNK_GENERATOR(0) },
    { "metaKey", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventMetaKey), (intptr_t)0 THUNK_GENERATOR(0) },
    { "wheelDelta", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventWheelDelta), (intptr_t)0 THUNK_GENERATOR(0) },
    { "wheelDeltaX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventWheelDeltaX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "wheelDeltaY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventWheelDeltaY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "offsetX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventOffsetX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "offsetY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventOffsetY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWheelEventConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWheelEventTable = { 33, 31, JSWheelEventTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWheelEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWheelEventConstructorTable = { 1, 0, JSWheelEventConstructorTableValues, 0 };
class JSWheelEventConstructor : public DOMConstructorObject {
public:
    JSWheelEventConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSWheelEventConstructor::s_info = { "WheelEventConstructor", &DOMConstructorObject::s_info, &JSWheelEventConstructorTable, 0 };

JSWheelEventConstructor::JSWheelEventConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSWheelEventConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSWheelEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSWheelEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWheelEventConstructor, DOMObject>(exec, &JSWheelEventConstructorTable, this, propertyName, slot);
}

bool JSWheelEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWheelEventConstructor, DOMObject>(exec, &JSWheelEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWheelEventPrototypeTableValues[2] =
{
    { "initWebKitWheelEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWheelEventPrototypeFunctionInitWebKitWheelEvent), (intptr_t)11 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWheelEventPrototypeTable = { 2, 1, JSWheelEventPrototypeTableValues, 0 };
const ClassInfo JSWheelEventPrototype::s_info = { "WheelEventPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSWheelEventPrototypeTable, 0 };

JSObject* JSWheelEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWheelEvent>(exec, globalObject);
}

bool JSWheelEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSWheelEventPrototypeTable, this, propertyName, slot);
}

bool JSWheelEventPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSWheelEventPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSWheelEvent::s_info = { "WheelEvent", &JSUIEvent::s_info, &JSWheelEventTable, 0 };

JSWheelEvent::JSWheelEvent(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<WheelEvent> impl)
    : JSUIEvent(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSWheelEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSWheelEventPrototype(globalObject, JSWheelEventPrototype::createStructure(exec->globalData(), JSUIEventPrototype::self(exec, globalObject)));
}

bool JSWheelEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWheelEvent, Base>(exec, &JSWheelEventTable, this, propertyName, slot);
}

bool JSWheelEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWheelEvent, Base>(exec, &JSWheelEventTable, this, propertyName, descriptor);
}

JSValue jsWheelEventScreenX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->screenX());
    return result;
}

JSValue jsWheelEventScreenY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->screenY());
    return result;
}

JSValue jsWheelEventClientX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->clientX());
    return result;
}

JSValue jsWheelEventClientY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->clientY());
    return result;
}

JSValue jsWheelEventCtrlKey(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->ctrlKey());
    return result;
}

JSValue jsWheelEventShiftKey(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->shiftKey());
    return result;
}

JSValue jsWheelEventAltKey(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->altKey());
    return result;
}

JSValue jsWheelEventMetaKey(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->metaKey());
    return result;
}

JSValue jsWheelEventWheelDelta(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->wheelDelta());
    return result;
}

JSValue jsWheelEventWheelDeltaX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->wheelDeltaX());
    return result;
}

JSValue jsWheelEventWheelDeltaY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->wheelDeltaY());
    return result;
}

JSValue jsWheelEventOffsetX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->offsetX());
    return result;
}

JSValue jsWheelEventOffsetY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->offsetY());
    return result;
}

JSValue jsWheelEventX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->x());
    return result;
}

JSValue jsWheelEventY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->y());
    return result;
}

JSValue jsWheelEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWheelEvent* domObject = static_cast<JSWheelEvent*>(asObject(slotBase));
    return JSWheelEvent::getConstructor(exec, domObject->globalObject());
}

JSValue JSWheelEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWheelEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsWheelEventPrototypeFunctionInitWebKitWheelEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWheelEvent::s_info))
        return throwVMTypeError(exec);
    JSWheelEvent* castedThis = static_cast<JSWheelEvent*>(asObject(thisValue));
    WheelEvent* imp = static_cast<WheelEvent*>(castedThis->impl());
    int wheelDeltaX(exec->argument(0).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int wheelDeltaY(exec->argument(1).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    DOMWindow* view(toDOMWindow(exec->argument(2)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int screenX(exec->argument(3).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int screenY(exec->argument(4).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int clientX(exec->argument(5).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int clientY(exec->argument(6).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool ctrlKey(exec->argument(7).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool altKey(exec->argument(8).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool shiftKey(exec->argument(9).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool metaKey(exec->argument(10).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->initWebKitWheelEvent(wheelDeltaX, wheelDeltaY, view, screenX, screenY, clientX, clientY, ctrlKey, altKey, shiftKey, metaKey);
    return JSValue::encode(jsUndefined());
}


}
