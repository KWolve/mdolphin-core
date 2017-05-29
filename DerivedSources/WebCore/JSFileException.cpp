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

#if ENABLE(BLOB) || ENABLE(FILE_SYSTEM)

#include "JSFileException.h"

#include "ExceptionCode.h"
#include "FileException.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSFileException);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSFileExceptionTableValues[5] =
{
    { "code", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionCode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "message", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionMessage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSFileExceptionTable = { 10, 7, JSFileExceptionTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSFileExceptionConstructorTableValues[13] =
{
    { "NOT_FOUND_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionNOT_FOUND_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SECURITY_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionSECURITY_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ABORT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionABORT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NOT_READABLE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionNOT_READABLE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ENCODING_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionENCODING_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NO_MODIFICATION_ALLOWED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionNO_MODIFICATION_ALLOWED_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "INVALID_STATE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionINVALID_STATE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SYNTAX_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionSYNTAX_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "INVALID_MODIFICATION_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionINVALID_MODIFICATION_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "QUOTA_EXCEEDED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionQUOTA_EXCEEDED_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "TYPE_MISMATCH_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionTYPE_MISMATCH_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "PATH_EXISTS_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionPATH_EXISTS_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSFileExceptionConstructorTable = { 34, 31, JSFileExceptionConstructorTableValues, 0 };
class JSFileExceptionConstructor : public DOMConstructorObject {
public:
    JSFileExceptionConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSFileExceptionConstructor::s_info = { "FileExceptionConstructor", &DOMConstructorObject::s_info, &JSFileExceptionConstructorTable, 0 };

JSFileExceptionConstructor::JSFileExceptionConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSFileExceptionConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSFileExceptionPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSFileExceptionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSFileExceptionConstructor, DOMObject>(exec, &JSFileExceptionConstructorTable, this, propertyName, slot);
}

bool JSFileExceptionConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSFileExceptionConstructor, DOMObject>(exec, &JSFileExceptionConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSFileExceptionPrototypeTableValues[14] =
{
    { "NOT_FOUND_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionNOT_FOUND_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SECURITY_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionSECURITY_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ABORT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionABORT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NOT_READABLE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionNOT_READABLE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ENCODING_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionENCODING_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NO_MODIFICATION_ALLOWED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionNO_MODIFICATION_ALLOWED_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "INVALID_STATE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionINVALID_STATE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SYNTAX_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionSYNTAX_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "INVALID_MODIFICATION_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionINVALID_MODIFICATION_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "QUOTA_EXCEEDED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionQUOTA_EXCEEDED_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "TYPE_MISMATCH_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionTYPE_MISMATCH_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "PATH_EXISTS_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileExceptionPATH_EXISTS_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "toString", DontDelete | DontEnum | Function, (intptr_t)static_cast<NativeFunction>(jsFileExceptionPrototypeFunctionToString), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSFileExceptionPrototypeTable = { 35, 31, JSFileExceptionPrototypeTableValues, 0 };
static const HashTable* getJSFileExceptionPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSFileExceptionPrototypeTable);
}
const ClassInfo JSFileExceptionPrototype::s_info = { "FileExceptionPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSFileExceptionPrototypeTable };

JSObject* JSFileExceptionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSFileException>(exec, globalObject);
}

bool JSFileExceptionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSFileExceptionPrototype, JSObject>(exec, getJSFileExceptionPrototypeTable(exec), this, propertyName, slot);
}

bool JSFileExceptionPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSFileExceptionPrototype, JSObject>(exec, getJSFileExceptionPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSFileExceptionTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSFileExceptionTable);
}
const ClassInfo JSFileException::s_info = { "FileException", &DOMObjectWithGlobalPointer::s_info, 0, getJSFileExceptionTable };

JSFileException::JSFileException(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<FileException> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSFileException::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSFileExceptionPrototype(globalObject, JSFileExceptionPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSFileException::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSFileException, Base>(exec, getJSFileExceptionTable(exec), this, propertyName, slot);
}

bool JSFileException::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSFileException, Base>(exec, getJSFileExceptionTable(exec), this, propertyName, descriptor);
}

JSValue jsFileExceptionCode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSFileException* castedThis = static_cast<JSFileException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    FileException* imp = static_cast<FileException*>(castedThis->impl());
    JSValue result = jsNumber(imp->code());
    return result;
}

JSValue jsFileExceptionName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSFileException* castedThis = static_cast<JSFileException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    FileException* imp = static_cast<FileException*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}

JSValue jsFileExceptionMessage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSFileException* castedThis = static_cast<JSFileException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    FileException* imp = static_cast<FileException*>(castedThis->impl());
    JSValue result = jsString(exec, imp->message());
    return result;
}

JSValue jsFileExceptionConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSFileException* domObject = static_cast<JSFileException*>(asObject(slotBase));
    return JSFileException::getConstructor(exec, domObject->globalObject());
}

JSValue JSFileException::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSFileExceptionConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsFileExceptionPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSFileException::s_info))
        return throwVMTypeError(exec);
    JSFileException* castedThis = static_cast<JSFileException*>(asObject(thisValue));
    FileException* imp = static_cast<FileException*>(castedThis->impl());


    JSC::JSValue result = jsString(exec, imp->toString());
    return JSValue::encode(result);
}

// Constant getters

JSValue jsFileExceptionNOT_FOUND_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsFileExceptionSECURITY_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsFileExceptionABORT_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsFileExceptionNOT_READABLE_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsFileExceptionENCODING_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}

JSValue jsFileExceptionNO_MODIFICATION_ALLOWED_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(6));
}

JSValue jsFileExceptionINVALID_STATE_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(7));
}

JSValue jsFileExceptionSYNTAX_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(8));
}

JSValue jsFileExceptionINVALID_MODIFICATION_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(9));
}

JSValue jsFileExceptionQUOTA_EXCEEDED_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(10));
}

JSValue jsFileExceptionTYPE_MISMATCH_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(11));
}

JSValue jsFileExceptionPATH_EXISTS_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(12));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, FileException* object)
{
    return getDOMObjectWrapper<JSFileException>(exec, globalObject, object);
}
FileException* toFileException(JSC::JSValue value)
{
    return value.inherits(&JSFileException::s_info) ? static_cast<JSFileException*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(BLOB) || ENABLE(FILE_SYSTEM)
