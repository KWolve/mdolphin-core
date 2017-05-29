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
#include "JSDOMParser.h"

#include "DOMParser.h"
#include "Document.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDocument.h"
#include "NodeFilter.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDOMParser);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMParserTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMParserConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMParserTable = { 2, 1, JSDOMParserTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMParserConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMParserConstructorTable = { 1, 0, JSDOMParserConstructorTableValues, 0 };
class JSDOMParserConstructor : public DOMConstructorObject {
public:
    JSDOMParserConstructor(JSC::ExecState*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSDOMParser(JSC::ExecState*);
    virtual JSC::ConstructType getConstructData(JSC::ConstructData&);
};

const ClassInfo JSDOMParserConstructor::s_info = { "DOMParserConstructor", &DOMConstructorObject::s_info, &JSDOMParserConstructorTable, 0 };

JSDOMParserConstructor::JSDOMParserConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSDOMParserConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSDOMParserPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSDOMParserConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMParserConstructor, DOMObject>(exec, &JSDOMParserConstructorTable, this, propertyName, slot);
}

bool JSDOMParserConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDOMParserConstructor, DOMObject>(exec, &JSDOMParserConstructorTable, this, propertyName, descriptor);
}

EncodedJSValue JSC_HOST_CALL JSDOMParserConstructor::constructJSDOMParser(ExecState* exec)
{
    return JSValue::encode(asObject(toJS(exec, static_cast<JSDOMParserConstructor*>(exec->callee())->globalObject(), DOMParser::create())));
}

ConstructType JSDOMParserConstructor::getConstructData(ConstructData& constructData)
{
    constructData.native.function = constructJSDOMParser;
    return ConstructTypeHost;
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMParserPrototypeTableValues[2] =
{
    { "parseFromString", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDOMParserPrototypeFunctionParseFromString), (intptr_t)2 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMParserPrototypeTable = { 2, 1, JSDOMParserPrototypeTableValues, 0 };
const ClassInfo JSDOMParserPrototype::s_info = { "DOMParserPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSDOMParserPrototypeTable, 0 };

JSObject* JSDOMParserPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMParser>(exec, globalObject);
}

bool JSDOMParserPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSDOMParserPrototypeTable, this, propertyName, slot);
}

bool JSDOMParserPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSDOMParserPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSDOMParser::s_info = { "DOMParser", &DOMObjectWithGlobalPointer::s_info, &JSDOMParserTable, 0 };

JSDOMParser::JSDOMParser(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMParser> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSDOMParser::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSDOMParserPrototype(globalObject, JSDOMParserPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSDOMParser::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMParser, Base>(exec, &JSDOMParserTable, this, propertyName, slot);
}

bool JSDOMParser::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDOMParser, Base>(exec, &JSDOMParserTable, this, propertyName, descriptor);
}

JSValue jsDOMParserConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDOMParser* domObject = static_cast<JSDOMParser*>(asObject(slotBase));
    return JSDOMParser::getConstructor(exec, domObject->globalObject());
}

JSValue JSDOMParser::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMParserConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDOMParserPrototypeFunctionParseFromString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMParser::s_info))
        return throwVMTypeError(exec);
    JSDOMParser* castedThis = static_cast<JSDOMParser*>(asObject(thisValue));
    DOMParser* imp = static_cast<DOMParser*>(castedThis->impl());
    const String& str(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& contentType(ustringToString(exec->argument(1).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->parseFromString(str, contentType)));
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DOMParser* object)
{
    return getDOMObjectWrapper<JSDOMParser>(exec, globalObject, object);
}
DOMParser* toDOMParser(JSC::JSValue value)
{
    return value.inherits(&JSDOMParser::s_info) ? static_cast<JSDOMParser*>(asObject(value))->impl() : 0;
}

}
