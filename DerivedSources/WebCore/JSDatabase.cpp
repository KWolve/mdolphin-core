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

#if ENABLE(DATABASE)

#include "JSDatabase.h"

#include "Database.h"
#include "ExceptionCode.h"
#include "JSCustomVoidCallback.h"
#include "JSDOMBinding.h"
#include "JSSQLTransactionCallback.h"
#include "JSSQLTransactionErrorCallback.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDatabase);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDatabaseTableValues[2] =
{
    { "version", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDatabaseVersion), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDatabaseTable = { 2, 1, JSDatabaseTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDatabasePrototypeTableValues[4] =
{
    { "changeVersion", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDatabasePrototypeFunctionChangeVersion), (intptr_t)5 THUNK_GENERATOR(0) },
    { "transaction", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDatabasePrototypeFunctionTransaction), (intptr_t)3 THUNK_GENERATOR(0) },
    { "readTransaction", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDatabasePrototypeFunctionReadTransaction), (intptr_t)3 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDatabasePrototypeTable = { 8, 7, JSDatabasePrototypeTableValues, 0 };
static const HashTable* getJSDatabasePrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSDatabasePrototypeTable);
}
const ClassInfo JSDatabasePrototype::s_info = { "DatabasePrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSDatabasePrototypeTable };

JSObject* JSDatabasePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDatabase>(exec, globalObject);
}

bool JSDatabasePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, getJSDatabasePrototypeTable(exec), this, propertyName, slot);
}

bool JSDatabasePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, getJSDatabasePrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSDatabaseTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSDatabaseTable);
}
const ClassInfo JSDatabase::s_info = { "Database", &DOMObjectWithGlobalPointer::s_info, 0, getJSDatabaseTable };

JSDatabase::JSDatabase(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<Database> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSDatabase::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSDatabasePrototype(globalObject, JSDatabasePrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSDatabase::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDatabase, Base>(exec, getJSDatabaseTable(exec), this, propertyName, slot);
}

bool JSDatabase::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDatabase, Base>(exec, getJSDatabaseTable(exec), this, propertyName, descriptor);
}

JSValue jsDatabaseVersion(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDatabase* castedThis = static_cast<JSDatabase*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Database* imp = static_cast<Database*>(castedThis->impl());
    JSValue result = jsString(exec, imp->version());
    return result;
}

EncodedJSValue JSC_HOST_CALL jsDatabasePrototypeFunctionChangeVersion(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDatabase::s_info))
        return throwVMTypeError(exec);
    JSDatabase* castedThis = static_cast<JSDatabase*>(asObject(thisValue));
    Database* imp = static_cast<Database*>(castedThis->impl());
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createSyntaxError(exec, "Not enough arguments"));
    const String& oldVersion(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& newVersion(ustringToString(exec->argument(1).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    RefPtr<SQLTransactionCallback> callback;
    if (exec->argumentCount() > 2 && !exec->argument(2).isNull() && !exec->argument(2).isUndefined()) {
        if (!exec->argument(2).isObject()) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return JSValue::encode(jsUndefined());
        }
        callback = JSSQLTransactionCallback::create(asObject(exec->argument(2)), castedThis->globalObject());
    }
    RefPtr<SQLTransactionErrorCallback> errorCallback;
    if (exec->argumentCount() > 3 && !exec->argument(3).isNull() && !exec->argument(3).isUndefined()) {
        if (!exec->argument(3).isObject()) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return JSValue::encode(jsUndefined());
        }
        errorCallback = JSSQLTransactionErrorCallback::create(asObject(exec->argument(3)), castedThis->globalObject());
    }
    RefPtr<VoidCallback> successCallback;
    if (exec->argumentCount() > 4 && !exec->argument(4).isNull() && !exec->argument(4).isUndefined()) {
        if (!exec->argument(4).isObject()) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return JSValue::encode(jsUndefined());
        }
        successCallback = JSCustomVoidCallback::create(asObject(exec->argument(4)), castedThis->globalObject());
    }

    imp->changeVersion(oldVersion, newVersion, callback, errorCallback, successCallback);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDatabasePrototypeFunctionTransaction(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDatabase::s_info))
        return throwVMTypeError(exec);
    JSDatabase* castedThis = static_cast<JSDatabase*>(asObject(thisValue));
    Database* imp = static_cast<Database*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createSyntaxError(exec, "Not enough arguments"));
    if (exec->argumentCount() <= 0 || !exec->argument(0).isObject()) {
        setDOMException(exec, TYPE_MISMATCH_ERR);
        return JSValue::encode(jsUndefined());
    }
    RefPtr<SQLTransactionCallback> callback = JSSQLTransactionCallback::create(asObject(exec->argument(0)), castedThis->globalObject());
    RefPtr<SQLTransactionErrorCallback> errorCallback;
    if (exec->argumentCount() > 1 && !exec->argument(1).isNull() && !exec->argument(1).isUndefined()) {
        if (!exec->argument(1).isObject()) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return JSValue::encode(jsUndefined());
        }
        errorCallback = JSSQLTransactionErrorCallback::create(asObject(exec->argument(1)), castedThis->globalObject());
    }
    RefPtr<VoidCallback> successCallback;
    if (exec->argumentCount() > 2 && !exec->argument(2).isNull() && !exec->argument(2).isUndefined()) {
        if (!exec->argument(2).isObject()) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return JSValue::encode(jsUndefined());
        }
        successCallback = JSCustomVoidCallback::create(asObject(exec->argument(2)), castedThis->globalObject());
    }

    imp->transaction(callback, errorCallback, successCallback);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDatabasePrototypeFunctionReadTransaction(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDatabase::s_info))
        return throwVMTypeError(exec);
    JSDatabase* castedThis = static_cast<JSDatabase*>(asObject(thisValue));
    Database* imp = static_cast<Database*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createSyntaxError(exec, "Not enough arguments"));
    if (exec->argumentCount() <= 0 || !exec->argument(0).isObject()) {
        setDOMException(exec, TYPE_MISMATCH_ERR);
        return JSValue::encode(jsUndefined());
    }
    RefPtr<SQLTransactionCallback> callback = JSSQLTransactionCallback::create(asObject(exec->argument(0)), castedThis->globalObject());
    RefPtr<SQLTransactionErrorCallback> errorCallback;
    if (exec->argumentCount() > 1 && !exec->argument(1).isNull() && !exec->argument(1).isUndefined()) {
        if (!exec->argument(1).isObject()) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return JSValue::encode(jsUndefined());
        }
        errorCallback = JSSQLTransactionErrorCallback::create(asObject(exec->argument(1)), castedThis->globalObject());
    }
    RefPtr<VoidCallback> successCallback;
    if (exec->argumentCount() > 2 && !exec->argument(2).isNull() && !exec->argument(2).isUndefined()) {
        if (!exec->argument(2).isObject()) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return JSValue::encode(jsUndefined());
        }
        successCallback = JSCustomVoidCallback::create(asObject(exec->argument(2)), castedThis->globalObject());
    }

    imp->readTransaction(callback, errorCallback, successCallback);
    return JSValue::encode(jsUndefined());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Database* object)
{
    return getDOMObjectWrapper<JSDatabase>(exec, globalObject, object);
}
Database* toDatabase(JSC::JSValue value)
{
    return value.inherits(&JSDatabase::s_info) ? static_cast<JSDatabase*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(DATABASE)
