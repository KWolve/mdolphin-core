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

#include "JSFlags.h"

#include "Flags.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSFlags);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSFlagsTableValues[4] =
{
    { "create", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFlagsCreate), (intptr_t)setJSFlagsCreate THUNK_GENERATOR(0) },
    { "exclusive", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFlagsExclusive), (intptr_t)setJSFlagsExclusive THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFlagsConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSFlagsTable = { 9, 7, JSFlagsTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSFlagsConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSFlagsConstructorTable = { 1, 0, JSFlagsConstructorTableValues, 0 };
class JSFlagsConstructor : public DOMConstructorObject {
public:
    JSFlagsConstructor(JSC::ExecState*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSFlags(JSC::ExecState*);
    virtual JSC::ConstructType getConstructData(JSC::ConstructData&);
};

const ClassInfo JSFlagsConstructor::s_info = { "FlagsConstructor", &DOMConstructorObject::s_info, &JSFlagsConstructorTable, 0 };

JSFlagsConstructor::JSFlagsConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSFlagsConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSFlagsPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSFlagsConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSFlagsConstructor, DOMObject>(exec, &JSFlagsConstructorTable, this, propertyName, slot);
}

bool JSFlagsConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSFlagsConstructor, DOMObject>(exec, &JSFlagsConstructorTable, this, propertyName, descriptor);
}

EncodedJSValue JSC_HOST_CALL JSFlagsConstructor::constructJSFlags(ExecState* exec)
{
    return JSValue::encode(asObject(toJS(exec, static_cast<JSFlagsConstructor*>(exec->callee())->globalObject(), Flags::create())));
}

ConstructType JSFlagsConstructor::getConstructData(ConstructData& constructData)
{
    constructData.native.function = constructJSFlags;
    return ConstructTypeHost;
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSFlagsPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSFlagsPrototypeTable = { 1, 0, JSFlagsPrototypeTableValues, 0 };
static const HashTable* getJSFlagsPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSFlagsPrototypeTable);
}
const ClassInfo JSFlagsPrototype::s_info = { "FlagsPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSFlagsPrototypeTable };

JSObject* JSFlagsPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSFlags>(exec, globalObject);
}

static const HashTable* getJSFlagsTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSFlagsTable);
}
const ClassInfo JSFlags::s_info = { "Flags", &DOMObjectWithGlobalPointer::s_info, 0, getJSFlagsTable };

JSFlags::JSFlags(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<Flags> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSFlags::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSFlagsPrototype(globalObject, JSFlagsPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSFlags::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSFlags, Base>(exec, getJSFlagsTable(exec), this, propertyName, slot);
}

bool JSFlags::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSFlags, Base>(exec, getJSFlagsTable(exec), this, propertyName, descriptor);
}

JSValue jsFlagsCreate(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSFlags* castedThis = static_cast<JSFlags*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Flags* imp = static_cast<Flags*>(castedThis->impl());
    JSValue result = jsBoolean(imp->isCreate());
    return result;
}

JSValue jsFlagsExclusive(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSFlags* castedThis = static_cast<JSFlags*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Flags* imp = static_cast<Flags*>(castedThis->impl());
    JSValue result = jsBoolean(imp->isExclusive());
    return result;
}

JSValue jsFlagsConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSFlags* domObject = static_cast<JSFlags*>(asObject(slotBase));
    return JSFlags::getConstructor(exec, domObject->globalObject());
}

void JSFlags::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSFlags, Base>(exec, propertyName, value, getJSFlagsTable(exec), this, slot);
}

void setJSFlagsCreate(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSFlags* castedThis = static_cast<JSFlags*>(thisObject);
    Flags* imp = static_cast<Flags*>(castedThis->impl());
    imp->setCreate(value.toBoolean(exec));
}

void setJSFlagsExclusive(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSFlags* castedThis = static_cast<JSFlags*>(thisObject);
    Flags* imp = static_cast<Flags*>(castedThis->impl());
    imp->setExclusive(value.toBoolean(exec));
}

JSValue JSFlags::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSFlagsConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Flags* object)
{
    return getDOMObjectWrapper<JSFlags>(exec, globalObject, object);
}
Flags* toFlags(JSC::JSValue value)
{
    return value.inherits(&JSFlags::s_info) ? static_cast<JSFlags*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(FILE_SYSTEM)
