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

#include "JSSVGPathSegLinetoHorizontalRel.h"

#include "SVGPathSegLinetoHorizontal.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegLinetoHorizontalRel);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegLinetoHorizontalRelTableValues[3] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoHorizontalRelX), (intptr_t)setJSSVGPathSegLinetoHorizontalRelX THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoHorizontalRelConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoHorizontalRelTable = { 5, 3, JSSVGPathSegLinetoHorizontalRelTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegLinetoHorizontalRelConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoHorizontalRelConstructorTable = { 1, 0, JSSVGPathSegLinetoHorizontalRelConstructorTableValues, 0 };
class JSSVGPathSegLinetoHorizontalRelConstructor : public DOMConstructorObject {
public:
    JSSVGPathSegLinetoHorizontalRelConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGPathSegLinetoHorizontalRelConstructor::s_info = { "SVGPathSegLinetoHorizontalRelConstructor", &DOMConstructorObject::s_info, &JSSVGPathSegLinetoHorizontalRelConstructorTable, 0 };

JSSVGPathSegLinetoHorizontalRelConstructor::JSSVGPathSegLinetoHorizontalRelConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGPathSegLinetoHorizontalRelConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGPathSegLinetoHorizontalRelPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGPathSegLinetoHorizontalRelConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoHorizontalRelConstructor, DOMObject>(exec, &JSSVGPathSegLinetoHorizontalRelConstructorTable, this, propertyName, slot);
}

bool JSSVGPathSegLinetoHorizontalRelConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegLinetoHorizontalRelConstructor, DOMObject>(exec, &JSSVGPathSegLinetoHorizontalRelConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegLinetoHorizontalRelPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoHorizontalRelPrototypeTable = { 1, 0, JSSVGPathSegLinetoHorizontalRelPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegLinetoHorizontalRelPrototype::s_info = { "SVGPathSegLinetoHorizontalRelPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGPathSegLinetoHorizontalRelPrototypeTable, 0 };

JSObject* JSSVGPathSegLinetoHorizontalRelPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegLinetoHorizontalRel>(exec, globalObject);
}

const ClassInfo JSSVGPathSegLinetoHorizontalRel::s_info = { "SVGPathSegLinetoHorizontalRel", &JSSVGPathSeg::s_info, &JSSVGPathSegLinetoHorizontalRelTable, 0 };

JSSVGPathSegLinetoHorizontalRel::JSSVGPathSegLinetoHorizontalRel(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegLinetoHorizontalRel> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPathSegLinetoHorizontalRel::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPathSegLinetoHorizontalRelPrototype(globalObject, JSSVGPathSegLinetoHorizontalRelPrototype::createStructure(exec->globalData(), JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegLinetoHorizontalRel::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoHorizontalRel, Base>(exec, &JSSVGPathSegLinetoHorizontalRelTable, this, propertyName, slot);
}

bool JSSVGPathSegLinetoHorizontalRel::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegLinetoHorizontalRel, Base>(exec, &JSSVGPathSegLinetoHorizontalRelTable, this, propertyName, descriptor);
}

JSValue jsSVGPathSegLinetoHorizontalRelX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegLinetoHorizontalRel* castedThis = static_cast<JSSVGPathSegLinetoHorizontalRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegLinetoHorizontalRel* imp = static_cast<SVGPathSegLinetoHorizontalRel*>(castedThis->impl());
    JSValue result = jsNumber(imp->x());
    return result;
}

JSValue jsSVGPathSegLinetoHorizontalRelConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegLinetoHorizontalRel* domObject = static_cast<JSSVGPathSegLinetoHorizontalRel*>(asObject(slotBase));
    return JSSVGPathSegLinetoHorizontalRel::getConstructor(exec, domObject->globalObject());
}

void JSSVGPathSegLinetoHorizontalRel::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegLinetoHorizontalRel, Base>(exec, propertyName, value, &JSSVGPathSegLinetoHorizontalRelTable, this, slot);
}

void setJSSVGPathSegLinetoHorizontalRelX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegLinetoHorizontalRel* castedThis = static_cast<JSSVGPathSegLinetoHorizontalRel*>(thisObject);
    SVGPathSegLinetoHorizontalRel* imp = static_cast<SVGPathSegLinetoHorizontalRel*>(castedThis->impl());
    imp->setX(value.toFloat(exec));
}

JSValue JSSVGPathSegLinetoHorizontalRel::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegLinetoHorizontalRelConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
