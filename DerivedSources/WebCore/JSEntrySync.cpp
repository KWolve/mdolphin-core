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

#if ENABLE(FILE_SYSTEM)

#include "JSEntrySync.h"

#include "DOMFileSystemSync.h"
#include "DirectoryEntrySync.h"
#include "EntrySync.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMFileSystemSync.h"
#include "JSDirectoryEntrySync.h"
#include "JSEntrySync.h"
#include "JSMetadata.h"
#include "KURL.h"
#include "Metadata.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSEntrySync);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSEntrySyncTableValues[7] =
{
    { "isFile", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntrySyncIsFile), (intptr_t)0 THUNK_GENERATOR(0) },
    { "isDirectory", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntrySyncIsDirectory), (intptr_t)0 THUNK_GENERATOR(0) },
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntrySyncName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "fullPath", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntrySyncFullPath), (intptr_t)0 THUNK_GENERATOR(0) },
    { "filesystem", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntrySyncFilesystem), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntrySyncConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSEntrySyncTable = { 17, 15, JSEntrySyncTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSEntrySyncConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSEntrySyncConstructorTable = { 1, 0, JSEntrySyncConstructorTableValues, 0 };
class JSEntrySyncConstructor : public DOMConstructorObject {
public:
    JSEntrySyncConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSEntrySyncConstructor::s_info = { "EntrySyncConstructor", &DOMConstructorObject::s_info, &JSEntrySyncConstructorTable, 0 };

JSEntrySyncConstructor::JSEntrySyncConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSEntrySyncConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSEntrySyncPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSEntrySyncConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSEntrySyncConstructor, DOMObject>(exec, &JSEntrySyncConstructorTable, this, propertyName, slot);
}

bool JSEntrySyncConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSEntrySyncConstructor, DOMObject>(exec, &JSEntrySyncConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSEntrySyncPrototypeTableValues[7] =
{
    { "getMetadata", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsEntrySyncPrototypeFunctionGetMetadata), (intptr_t)0 THUNK_GENERATOR(0) },
    { "moveTo", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsEntrySyncPrototypeFunctionMoveTo), (intptr_t)2 THUNK_GENERATOR(0) },
    { "copyTo", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsEntrySyncPrototypeFunctionCopyTo), (intptr_t)2 THUNK_GENERATOR(0) },
    { "toURL", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsEntrySyncPrototypeFunctionToURL), (intptr_t)0 THUNK_GENERATOR(0) },
    { "remove", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsEntrySyncPrototypeFunctionRemove), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getParent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsEntrySyncPrototypeFunctionGetParent), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSEntrySyncPrototypeTable = { 17, 15, JSEntrySyncPrototypeTableValues, 0 };
static const HashTable* getJSEntrySyncPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSEntrySyncPrototypeTable);
}
const ClassInfo JSEntrySyncPrototype::s_info = { "EntrySyncPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSEntrySyncPrototypeTable };

JSObject* JSEntrySyncPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSEntrySync>(exec, globalObject);
}

bool JSEntrySyncPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, getJSEntrySyncPrototypeTable(exec), this, propertyName, slot);
}

bool JSEntrySyncPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, getJSEntrySyncPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSEntrySyncTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSEntrySyncTable);
}
const ClassInfo JSEntrySync::s_info = { "EntrySync", &DOMObjectWithGlobalPointer::s_info, 0, getJSEntrySyncTable };

JSEntrySync::JSEntrySync(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<EntrySync> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSEntrySync::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSEntrySyncPrototype(globalObject, JSEntrySyncPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSEntrySync::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSEntrySync, Base>(exec, getJSEntrySyncTable(exec), this, propertyName, slot);
}

bool JSEntrySync::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSEntrySync, Base>(exec, getJSEntrySyncTable(exec), this, propertyName, descriptor);
}

JSValue jsEntrySyncIsFile(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEntrySync* castedThis = static_cast<JSEntrySync*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EntrySync* imp = static_cast<EntrySync*>(castedThis->impl());
    JSValue result = jsBoolean(imp->isFile());
    return result;
}

JSValue jsEntrySyncIsDirectory(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEntrySync* castedThis = static_cast<JSEntrySync*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EntrySync* imp = static_cast<EntrySync*>(castedThis->impl());
    JSValue result = jsBoolean(imp->isDirectory());
    return result;
}

JSValue jsEntrySyncName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEntrySync* castedThis = static_cast<JSEntrySync*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EntrySync* imp = static_cast<EntrySync*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}

JSValue jsEntrySyncFullPath(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEntrySync* castedThis = static_cast<JSEntrySync*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EntrySync* imp = static_cast<EntrySync*>(castedThis->impl());
    JSValue result = jsString(exec, imp->fullPath());
    return result;
}

JSValue jsEntrySyncFilesystem(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEntrySync* castedThis = static_cast<JSEntrySync*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EntrySync* imp = static_cast<EntrySync*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->filesystem()));
    return result;
}

JSValue jsEntrySyncConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEntrySync* domObject = static_cast<JSEntrySync*>(asObject(slotBase));
    return JSEntrySync::getConstructor(exec, domObject->globalObject());
}

JSValue JSEntrySync::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSEntrySyncConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsEntrySyncPrototypeFunctionGetMetadata(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEntrySync::s_info))
        return throwVMTypeError(exec);
    JSEntrySync* castedThis = static_cast<JSEntrySync*>(asObject(thisValue));
    EntrySync* imp = static_cast<EntrySync*>(castedThis->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getMetadata(ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsEntrySyncPrototypeFunctionMoveTo(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEntrySync::s_info))
        return throwVMTypeError(exec);
    JSEntrySync* castedThis = static_cast<JSEntrySync*>(asObject(thisValue));
    EntrySync* imp = static_cast<EntrySync*>(castedThis->impl());
    ExceptionCode ec = 0;
    DirectoryEntrySync* parent(toDirectoryEntrySync(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& name(valueToStringWithUndefinedOrNullCheck(exec, exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->moveTo(parent, name, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsEntrySyncPrototypeFunctionCopyTo(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEntrySync::s_info))
        return throwVMTypeError(exec);
    JSEntrySync* castedThis = static_cast<JSEntrySync*>(asObject(thisValue));
    EntrySync* imp = static_cast<EntrySync*>(castedThis->impl());
    ExceptionCode ec = 0;
    DirectoryEntrySync* parent(toDirectoryEntrySync(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& name(valueToStringWithUndefinedOrNullCheck(exec, exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->copyTo(parent, name, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsEntrySyncPrototypeFunctionToURL(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEntrySync::s_info))
        return throwVMTypeError(exec);
    JSEntrySync* castedThis = static_cast<JSEntrySync*>(asObject(thisValue));
    EntrySync* imp = static_cast<EntrySync*>(castedThis->impl());


    JSC::JSValue result = jsString(exec, imp->toURL());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsEntrySyncPrototypeFunctionRemove(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEntrySync::s_info))
        return throwVMTypeError(exec);
    JSEntrySync* castedThis = static_cast<JSEntrySync*>(asObject(thisValue));
    EntrySync* imp = static_cast<EntrySync*>(castedThis->impl());
    ExceptionCode ec = 0;

    imp->remove(ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEntrySyncPrototypeFunctionGetParent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEntrySync::s_info))
        return throwVMTypeError(exec);
    JSEntrySync* castedThis = static_cast<JSEntrySync*>(asObject(thisValue));
    EntrySync* imp = static_cast<EntrySync*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getParent()));
    return JSValue::encode(result);
}

EntrySync* toEntrySync(JSC::JSValue value)
{
    return value.inherits(&JSEntrySync::s_info) ? static_cast<JSEntrySync*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(FILE_SYSTEM)
