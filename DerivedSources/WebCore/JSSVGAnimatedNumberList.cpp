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

#if ENABLE(SVG)

#include "JSSVGAnimatedNumberList.h"

#include "JSSVGNumberList.h"
#include "SVGNumberList.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimatedNumberList);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedNumberListTableValues[4] =
{
    { "baseVal", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedNumberListBaseVal), (intptr_t)0 THUNK_GENERATOR(0) },
    { "animVal", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedNumberListAnimVal), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedNumberListConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedNumberListTable = { 8, 7, JSSVGAnimatedNumberListTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedNumberListConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedNumberListConstructorTable = { 1, 0, JSSVGAnimatedNumberListConstructorTableValues, 0 };
class JSSVGAnimatedNumberListConstructor : public DOMConstructorObject {
public:
    JSSVGAnimatedNumberListConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGAnimatedNumberListConstructor::s_info = { "SVGAnimatedNumberListConstructor", &DOMConstructorObject::s_info, &JSSVGAnimatedNumberListConstructorTable, 0 };

JSSVGAnimatedNumberListConstructor::JSSVGAnimatedNumberListConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGAnimatedNumberListConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGAnimatedNumberListPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGAnimatedNumberListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedNumberListConstructor, DOMObject>(exec, &JSSVGAnimatedNumberListConstructorTable, this, propertyName, slot);
}

bool JSSVGAnimatedNumberListConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedNumberListConstructor, DOMObject>(exec, &JSSVGAnimatedNumberListConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedNumberListPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedNumberListPrototypeTable = { 1, 0, JSSVGAnimatedNumberListPrototypeTableValues, 0 };
const ClassInfo JSSVGAnimatedNumberListPrototype::s_info = { "SVGAnimatedNumberListPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGAnimatedNumberListPrototypeTable, 0 };

JSObject* JSSVGAnimatedNumberListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimatedNumberList>(exec, globalObject);
}

const ClassInfo JSSVGAnimatedNumberList::s_info = { "SVGAnimatedNumberList", &DOMObjectWithGlobalPointer::s_info, &JSSVGAnimatedNumberListTable, 0 };

JSSVGAnimatedNumberList::JSSVGAnimatedNumberList(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimatedNumberList> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAnimatedNumberList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGAnimatedNumberListPrototype(globalObject, JSSVGAnimatedNumberListPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSSVGAnimatedNumberList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedNumberList, Base>(exec, &JSSVGAnimatedNumberListTable, this, propertyName, slot);
}

bool JSSVGAnimatedNumberList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedNumberList, Base>(exec, &JSSVGAnimatedNumberListTable, this, propertyName, descriptor);
}

JSValue jsSVGAnimatedNumberListBaseVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedNumberList* castedThis = static_cast<JSSVGAnimatedNumberList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedNumberList* imp = static_cast<SVGAnimatedNumberList*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(static_cast<SVGListPropertyTearOff<SVGNumberList>*>(imp->baseVal())));
    return result;
}

JSValue jsSVGAnimatedNumberListAnimVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedNumberList* castedThis = static_cast<JSSVGAnimatedNumberList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedNumberList* imp = static_cast<SVGAnimatedNumberList*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(static_cast<SVGListPropertyTearOff<SVGNumberList>*>(imp->animVal())));
    return result;
}

JSValue jsSVGAnimatedNumberListConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedNumberList* domObject = static_cast<JSSVGAnimatedNumberList*>(asObject(slotBase));
    return JSSVGAnimatedNumberList::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGAnimatedNumberList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimatedNumberListConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGAnimatedNumberList* object)
{
    return getDOMObjectWrapper<JSSVGAnimatedNumberList>(exec, globalObject, object);
}
SVGAnimatedNumberList* toSVGAnimatedNumberList(JSC::JSValue value)
{
    return value.inherits(&JSSVGAnimatedNumberList::s_info) ? static_cast<JSSVGAnimatedNumberList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
