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

#include "JSSVGAnimatedRect.h"

#include "FloatRect.h"
#include "JSSVGRect.h"
#include "SVGRect.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimatedRect);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedRectTableValues[4] =
{
    { "baseVal", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedRectBaseVal), (intptr_t)0 THUNK_GENERATOR(0) },
    { "animVal", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedRectAnimVal), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedRectConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedRectTable = { 8, 7, JSSVGAnimatedRectTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedRectConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedRectConstructorTable = { 1, 0, JSSVGAnimatedRectConstructorTableValues, 0 };
class JSSVGAnimatedRectConstructor : public DOMConstructorObject {
public:
    JSSVGAnimatedRectConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGAnimatedRectConstructor::s_info = { "SVGAnimatedRectConstructor", &DOMConstructorObject::s_info, &JSSVGAnimatedRectConstructorTable, 0 };

JSSVGAnimatedRectConstructor::JSSVGAnimatedRectConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGAnimatedRectConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGAnimatedRectPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGAnimatedRectConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedRectConstructor, DOMObject>(exec, &JSSVGAnimatedRectConstructorTable, this, propertyName, slot);
}

bool JSSVGAnimatedRectConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedRectConstructor, DOMObject>(exec, &JSSVGAnimatedRectConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedRectPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedRectPrototypeTable = { 1, 0, JSSVGAnimatedRectPrototypeTableValues, 0 };
const ClassInfo JSSVGAnimatedRectPrototype::s_info = { "SVGAnimatedRectPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGAnimatedRectPrototypeTable, 0 };

JSObject* JSSVGAnimatedRectPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimatedRect>(exec, globalObject);
}

const ClassInfo JSSVGAnimatedRect::s_info = { "SVGAnimatedRect", &DOMObjectWithGlobalPointer::s_info, &JSSVGAnimatedRectTable, 0 };

JSSVGAnimatedRect::JSSVGAnimatedRect(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimatedRect> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAnimatedRect::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGAnimatedRectPrototype(globalObject, JSSVGAnimatedRectPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSSVGAnimatedRect::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedRect, Base>(exec, &JSSVGAnimatedRectTable, this, propertyName, slot);
}

bool JSSVGAnimatedRect::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedRect, Base>(exec, &JSSVGAnimatedRectTable, this, propertyName, descriptor);
}

JSValue jsSVGAnimatedRectBaseVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedRect* castedThis = static_cast<JSSVGAnimatedRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedRect* imp = static_cast<SVGAnimatedRect*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(static_cast<SVGPropertyTearOff<FloatRect>*>(imp->baseVal())));
    return result;
}

JSValue jsSVGAnimatedRectAnimVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedRect* castedThis = static_cast<JSSVGAnimatedRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedRect* imp = static_cast<SVGAnimatedRect*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(static_cast<SVGPropertyTearOff<FloatRect>*>(imp->animVal())));
    return result;
}

JSValue jsSVGAnimatedRectConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedRect* domObject = static_cast<JSSVGAnimatedRect*>(asObject(slotBase));
    return JSSVGAnimatedRect::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGAnimatedRect::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimatedRectConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGAnimatedRect* object)
{
    return getDOMObjectWrapper<JSSVGAnimatedRect>(exec, globalObject, object);
}
SVGAnimatedRect* toSVGAnimatedRect(JSC::JSValue value)
{
    return value.inherits(&JSSVGAnimatedRect::s_info) ? static_cast<JSSVGAnimatedRect*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
