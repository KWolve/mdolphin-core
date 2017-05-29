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

#if ENABLE(WORKERS)

#include "JSWorker.h"

#include "EventListener.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEventListener.h"
#include "Worker.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWorker);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWorkerTableValues[3] =
{
    { "onmessage", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerOnmessage), (intptr_t)setJSWorkerOnmessage THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWorkerTable = { 4, 3, JSWorkerTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWorkerConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWorkerConstructorTable = { 1, 0, JSWorkerConstructorTableValues, 0 };
const ClassInfo JSWorkerConstructor::s_info = { "WorkerConstructor", &DOMConstructorObject::s_info, &JSWorkerConstructorTable, 0 };

JSWorkerConstructor::JSWorkerConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSWorkerConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSWorkerPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->globalData(), exec->propertyNames().length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSWorkerConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWorkerConstructor, DOMObject>(exec, &JSWorkerConstructorTable, this, propertyName, slot);
}

bool JSWorkerConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWorkerConstructor, DOMObject>(exec, &JSWorkerConstructorTable, this, propertyName, descriptor);
}

ConstructType JSWorkerConstructor::getConstructData(ConstructData& constructData)
{
    constructData.native.function = constructJSWorker;
    return ConstructTypeHost;
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWorkerPrototypeTableValues[3] =
{
    { "postMessage", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerPrototypeFunctionPostMessage), (intptr_t)2 THUNK_GENERATOR(0) },
    { "terminate", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerPrototypeFunctionTerminate), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWorkerPrototypeTable = { 5, 3, JSWorkerPrototypeTableValues, 0 };
const ClassInfo JSWorkerPrototype::s_info = { "WorkerPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSWorkerPrototypeTable, 0 };

JSObject* JSWorkerPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWorker>(exec, globalObject);
}

bool JSWorkerPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSWorkerPrototypeTable, this, propertyName, slot);
}

bool JSWorkerPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSWorkerPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSWorker::s_info = { "Worker", &JSAbstractWorker::s_info, &JSWorkerTable, 0 };

JSWorker::JSWorker(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<Worker> impl)
    : JSAbstractWorker(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSWorker::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSWorkerPrototype(globalObject, JSWorkerPrototype::createStructure(exec->globalData(), JSAbstractWorkerPrototype::self(exec, globalObject)));
}

bool JSWorker::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWorker, Base>(exec, &JSWorkerTable, this, propertyName, slot);
}

bool JSWorker::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWorker, Base>(exec, &JSWorkerTable, this, propertyName, descriptor);
}

JSValue jsWorkerOnmessage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorker* castedThis = static_cast<JSWorker*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Worker* imp = static_cast<Worker*>(castedThis->impl());
    if (EventListener* listener = imp->onmessage()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(imp->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}

JSValue jsWorkerConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorker* domObject = static_cast<JSWorker*>(asObject(slotBase));
    return JSWorker::getConstructor(exec, domObject->globalObject());
}

void JSWorker::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSWorker, Base>(exec, propertyName, value, &JSWorkerTable, this, slot);
}

void setJSWorkerOnmessage(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    Worker* imp = static_cast<Worker*>(static_cast<JSWorker*>(thisObject)->impl());
    imp->setOnmessage(createJSAttributeEventListener(exec, value, thisObject));
}

JSValue JSWorker::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWorkerConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsWorkerPrototypeFunctionPostMessage(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWorker::s_info))
        return throwVMTypeError(exec);
    JSWorker* castedThis = static_cast<JSWorker*>(asObject(thisValue));
    return JSValue::encode(castedThis->postMessage(exec));
}

EncodedJSValue JSC_HOST_CALL jsWorkerPrototypeFunctionTerminate(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWorker::s_info))
        return throwVMTypeError(exec);
    JSWorker* castedThis = static_cast<JSWorker*>(asObject(thisValue));
    Worker* imp = static_cast<Worker*>(castedThis->impl());

    imp->terminate();
    return JSValue::encode(jsUndefined());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Worker* object)
{
    return getDOMObjectWrapper<JSWorker>(exec, globalObject, object);
}
Worker* toWorker(JSC::JSValue value)
{
    return value.inherits(&JSWorker::s_info) ? static_cast<JSWorker*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WORKERS)
