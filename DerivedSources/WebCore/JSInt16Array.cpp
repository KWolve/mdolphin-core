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
#include "JSInt16Array.h"

#include "ExceptionCode.h"
#include "Int16Array.h"
#include "JSDOMBinding.h"
#include "JSInt16Array.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSInt16Array);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSInt16ArrayTableValues[3] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt16ArrayLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt16ArrayConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSInt16ArrayTable = { 5, 3, JSInt16ArrayTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSInt16ArrayConstructorTableValues[2] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt16ArrayBYTES_PER_ELEMENT), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSInt16ArrayConstructorTable = { 2, 1, JSInt16ArrayConstructorTableValues, 0 };
const ClassInfo JSInt16ArrayConstructor::s_info = { "Int16ArrayConstructor", &DOMConstructorObject::s_info, &JSInt16ArrayConstructorTable, 0 };

JSInt16ArrayConstructor::JSInt16ArrayConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSInt16ArrayConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSInt16ArrayPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSInt16ArrayConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSInt16ArrayConstructor, DOMObject>(exec, &JSInt16ArrayConstructorTable, this, propertyName, slot);
}

bool JSInt16ArrayConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSInt16ArrayConstructor, DOMObject>(exec, &JSInt16ArrayConstructorTable, this, propertyName, descriptor);
}

ConstructType JSInt16ArrayConstructor::getConstructData(ConstructData& constructData)
{
    constructData.native.function = constructJSInt16Array;
    return ConstructTypeHost;
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSInt16ArrayPrototypeTableValues[4] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt16ArrayBYTES_PER_ELEMENT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "subarray", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInt16ArrayPrototypeFunctionSubarray), (intptr_t)2 THUNK_GENERATOR(0) },
    { "set", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInt16ArrayPrototypeFunctionSet), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSInt16ArrayPrototypeTable = { 8, 7, JSInt16ArrayPrototypeTableValues, 0 };
static const HashTable* getJSInt16ArrayPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSInt16ArrayPrototypeTable);
}
const ClassInfo JSInt16ArrayPrototype::s_info = { "Int16ArrayPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSInt16ArrayPrototypeTable };

JSObject* JSInt16ArrayPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSInt16Array>(exec, globalObject);
}

bool JSInt16ArrayPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSInt16ArrayPrototype, JSObject>(exec, getJSInt16ArrayPrototypeTable(exec), this, propertyName, slot);
}

bool JSInt16ArrayPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSInt16ArrayPrototype, JSObject>(exec, getJSInt16ArrayPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSInt16ArrayTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSInt16ArrayTable);
}
const ClassInfo JSInt16Array::s_info = { "Int16Array", &JSArrayBufferView::s_info, 0, getJSInt16ArrayTable };

JSInt16Array::JSInt16Array(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<Int16Array> impl)
    : JSArrayBufferView(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSInt16Array::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSInt16ArrayPrototype(globalObject, JSInt16ArrayPrototype::createStructure(exec->globalData(), JSArrayBufferViewPrototype::self(exec, globalObject)));
}

bool JSInt16Array::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<Int16Array*>(impl())->length()) {
        slot.setValue(getByIndex(exec, index));
        return true;
    }
    return getStaticValueSlot<JSInt16Array, Base>(exec, getJSInt16ArrayTable(exec), this, propertyName, slot);
}

bool JSInt16Array::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<Int16Array*>(impl())->length()) {
        descriptor.setDescriptor(getByIndex(exec, index), DontDelete);
        return true;
    }
    return getStaticValueDescriptor<JSInt16Array, Base>(exec, getJSInt16ArrayTable(exec), this, propertyName, descriptor);
}

bool JSInt16Array::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<Int16Array*>(impl())->length()) {
        slot.setValue(getByIndex(exec, propertyName));
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsInt16ArrayLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSInt16Array* castedThis = static_cast<JSInt16Array*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Int16Array* imp = static_cast<Int16Array*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}

JSValue jsInt16ArrayConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSInt16Array* domObject = static_cast<JSInt16Array*>(asObject(slotBase));
    return JSInt16Array::getConstructor(exec, domObject->globalObject());
}

void JSInt16Array::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok) {
        indexSetter(exec, index, value);
        return;
    }
    Base::put(exec, propertyName, value, slot);
}

void JSInt16Array::put(ExecState* exec, unsigned propertyName, JSValue value)
{
    indexSetter(exec, propertyName, value);
    return;
}

void JSInt16Array::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    for (unsigned i = 0; i < static_cast<Int16Array*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSInt16Array::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSInt16ArrayConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsInt16ArrayPrototypeFunctionSubarray(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInt16Array::s_info))
        return throwVMTypeError(exec);
    JSInt16Array* castedThis = static_cast<JSInt16Array*>(asObject(thisValue));
    Int16Array* imp = static_cast<Int16Array*>(castedThis->impl());
    int start(exec->argument(0).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    int argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->subarray(start)));
        return JSValue::encode(result);
    }

    int end(exec->argument(1).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->subarray(start, end)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsInt16ArrayPrototypeFunctionSet(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInt16Array::s_info))
        return throwVMTypeError(exec);
    JSInt16Array* castedThis = static_cast<JSInt16Array*>(asObject(thisValue));
    return JSValue::encode(castedThis->set(exec));
}

// Constant getters

JSValue jsInt16ArrayBYTES_PER_ELEMENT(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}


JSValue JSInt16Array::getByIndex(ExecState*, unsigned index)
{
    return jsNumber(static_cast<Int16Array*>(impl())->item(index));
}
Int16Array* toInt16Array(JSC::JSValue value)
{
    return value.inherits(&JSInt16Array::s_info) ? static_cast<JSInt16Array*>(asObject(value))->impl() : 0;
}

}
