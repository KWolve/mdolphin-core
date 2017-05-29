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

#if ENABLE(INPUT_SPEECH)

#include "JSSpeechInputResultList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSpeechInputResult.h"
#include "SpeechInputResult.h"
#include "SpeechInputResultList.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSpeechInputResultList);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSpeechInputResultListTableValues[3] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechInputResultListLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechInputResultListConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSpeechInputResultListTable = { 5, 3, JSSpeechInputResultListTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSpeechInputResultListConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSpeechInputResultListConstructorTable = { 1, 0, JSSpeechInputResultListConstructorTableValues, 0 };
class JSSpeechInputResultListConstructor : public DOMConstructorObject {
public:
    JSSpeechInputResultListConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSpeechInputResultListConstructor::s_info = { "SpeechInputResultListConstructor", &DOMConstructorObject::s_info, &JSSpeechInputResultListConstructorTable, 0 };

JSSpeechInputResultListConstructor::JSSpeechInputResultListConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSpeechInputResultListConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSpeechInputResultListPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSpeechInputResultListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSpeechInputResultListConstructor, DOMObject>(exec, &JSSpeechInputResultListConstructorTable, this, propertyName, slot);
}

bool JSSpeechInputResultListConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSpeechInputResultListConstructor, DOMObject>(exec, &JSSpeechInputResultListConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSpeechInputResultListPrototypeTableValues[2] =
{
    { "item", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSpeechInputResultListPrototypeFunctionItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSpeechInputResultListPrototypeTable = { 2, 1, JSSpeechInputResultListPrototypeTableValues, 0 };
const ClassInfo JSSpeechInputResultListPrototype::s_info = { "SpeechInputResultListPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSpeechInputResultListPrototypeTable, 0 };

JSObject* JSSpeechInputResultListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSpeechInputResultList>(exec, globalObject);
}

bool JSSpeechInputResultListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSpeechInputResultListPrototypeTable, this, propertyName, slot);
}

bool JSSpeechInputResultListPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSpeechInputResultListPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSpeechInputResultList::s_info = { "SpeechInputResultList", &DOMObjectWithGlobalPointer::s_info, &JSSpeechInputResultListTable, 0 };

JSSpeechInputResultList::JSSpeechInputResultList(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SpeechInputResultList> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSpeechInputResultList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSpeechInputResultListPrototype(globalObject, JSSpeechInputResultListPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSSpeechInputResultList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSSpeechInputResultListTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<SpeechInputResultList*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSSpeechInputResultList, Base>(exec, &JSSpeechInputResultListTable, this, propertyName, slot);
}

bool JSSpeechInputResultList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    const HashEntry* entry = JSSpeechInputResultListTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<SpeechInputResultList*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    return getStaticValueDescriptor<JSSpeechInputResultList, Base>(exec, &JSSpeechInputResultListTable, this, propertyName, descriptor);
}

bool JSSpeechInputResultList::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<SpeechInputResultList*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsSpeechInputResultListLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSpeechInputResultList* castedThis = static_cast<JSSpeechInputResultList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SpeechInputResultList* imp = static_cast<SpeechInputResultList*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}

JSValue jsSpeechInputResultListConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSpeechInputResultList* domObject = static_cast<JSSpeechInputResultList*>(asObject(slotBase));
    return JSSpeechInputResultList::getConstructor(exec, domObject->globalObject());
}

void JSSpeechInputResultList::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    for (unsigned i = 0; i < static_cast<SpeechInputResultList*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSSpeechInputResultList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSpeechInputResultListConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSpeechInputResultListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSpeechInputResultList::s_info))
        return throwVMTypeError(exec);
    JSSpeechInputResultList* castedThis = static_cast<JSSpeechInputResultList*>(asObject(thisValue));
    SpeechInputResultList* imp = static_cast<SpeechInputResultList*>(castedThis->impl());
    int index(exec->argument(0).toUInt32(exec));
    if (index < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->item(index)));
    return JSValue::encode(result);
}


JSValue JSSpeechInputResultList::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSSpeechInputResultList* thisObj = static_cast<JSSpeechInputResultList*>(asObject(slotBase));
    return toJS(exec, thisObj->globalObject(), static_cast<SpeechInputResultList*>(thisObj->impl())->item(index));
}
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SpeechInputResultList* object)
{
    return getDOMObjectWrapper<JSSpeechInputResultList>(exec, globalObject, object);
}
SpeechInputResultList* toSpeechInputResultList(JSC::JSValue value)
{
    return value.inherits(&JSSpeechInputResultList::s_info) ? static_cast<JSSpeechInputResultList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(INPUT_SPEECH)
