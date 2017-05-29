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

#include "JSSVGPreserveAspectRatio.h"

#include "SVGPreserveAspectRatio.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPreserveAspectRatio);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPreserveAspectRatioTableValues[4] =
{
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioAlign), (intptr_t)setJSSVGPreserveAspectRatioAlign THUNK_GENERATOR(0) },
    { "meetOrSlice", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioMeetOrSlice), (intptr_t)setJSSVGPreserveAspectRatioMeetOrSlice THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPreserveAspectRatioTable = { 8, 7, JSSVGPreserveAspectRatioTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPreserveAspectRatioConstructorTableValues[15] =
{
    { "SVG_PRESERVEASPECTRATIO_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_NONE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_NONE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMINYMIN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMIN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMIN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMIN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMIN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMIN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMINYMID", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMID), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMID", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMID), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMID", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMID), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMINYMAX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMAX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMAX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMAX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMAX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMAX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_MEETORSLICE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_MEETORSLICE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_MEETORSLICE_MEET", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_MEETORSLICE_MEET), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_MEETORSLICE_SLICE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_MEETORSLICE_SLICE), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPreserveAspectRatioConstructorTable = { 35, 31, JSSVGPreserveAspectRatioConstructorTableValues, 0 };

COMPILE_ASSERT(0 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_UNKNOWN, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_NONE, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_NONEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMINYMIN, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMINYMINIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMIDYMIN, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMIDYMINIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMAXYMIN, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMAXYMINIsWrongUseDontCheckEnums);
COMPILE_ASSERT(5 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMINYMID, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMINYMIDIsWrongUseDontCheckEnums);
COMPILE_ASSERT(6 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMIDYMID, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMIDYMIDIsWrongUseDontCheckEnums);
COMPILE_ASSERT(7 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMAXYMID, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMAXYMIDIsWrongUseDontCheckEnums);
COMPILE_ASSERT(8 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMINYMAX, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMINYMAXIsWrongUseDontCheckEnums);
COMPILE_ASSERT(9 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMIDYMAX, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMIDYMAXIsWrongUseDontCheckEnums);
COMPILE_ASSERT(10 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMAXYMAX, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMAXYMAXIsWrongUseDontCheckEnums);
COMPILE_ASSERT(0 == SVGPreserveAspectRatio::SVG_MEETORSLICE_UNKNOWN, SVGPreserveAspectRatioEnumSVG_MEETORSLICE_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGPreserveAspectRatio::SVG_MEETORSLICE_MEET, SVGPreserveAspectRatioEnumSVG_MEETORSLICE_MEETIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGPreserveAspectRatio::SVG_MEETORSLICE_SLICE, SVGPreserveAspectRatioEnumSVG_MEETORSLICE_SLICEIsWrongUseDontCheckEnums);

class JSSVGPreserveAspectRatioConstructor : public DOMConstructorObject {
public:
    JSSVGPreserveAspectRatioConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGPreserveAspectRatioConstructor::s_info = { "SVGPreserveAspectRatioConstructor", &DOMConstructorObject::s_info, &JSSVGPreserveAspectRatioConstructorTable, 0 };

JSSVGPreserveAspectRatioConstructor::JSSVGPreserveAspectRatioConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGPreserveAspectRatioConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGPreserveAspectRatioPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGPreserveAspectRatioConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPreserveAspectRatioConstructor, DOMObject>(exec, &JSSVGPreserveAspectRatioConstructorTable, this, propertyName, slot);
}

bool JSSVGPreserveAspectRatioConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPreserveAspectRatioConstructor, DOMObject>(exec, &JSSVGPreserveAspectRatioConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPreserveAspectRatioPrototypeTableValues[15] =
{
    { "SVG_PRESERVEASPECTRATIO_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_NONE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_NONE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMINYMIN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMIN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMIN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMIN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMIN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMIN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMINYMID", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMID), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMID", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMID), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMID", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMID), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMINYMAX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMAX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMAX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMAX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMAX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMAX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_MEETORSLICE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_MEETORSLICE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_MEETORSLICE_MEET", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_MEETORSLICE_MEET), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_MEETORSLICE_SLICE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPreserveAspectRatioSVG_MEETORSLICE_SLICE), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPreserveAspectRatioPrototypeTable = { 35, 31, JSSVGPreserveAspectRatioPrototypeTableValues, 0 };
const ClassInfo JSSVGPreserveAspectRatioPrototype::s_info = { "SVGPreserveAspectRatioPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGPreserveAspectRatioPrototypeTable, 0 };

JSObject* JSSVGPreserveAspectRatioPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPreserveAspectRatio>(exec, globalObject);
}

bool JSSVGPreserveAspectRatioPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPreserveAspectRatioPrototype, JSObject>(exec, &JSSVGPreserveAspectRatioPrototypeTable, this, propertyName, slot);
}

bool JSSVGPreserveAspectRatioPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPreserveAspectRatioPrototype, JSObject>(exec, &JSSVGPreserveAspectRatioPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGPreserveAspectRatio::s_info = { "SVGPreserveAspectRatio", &DOMObjectWithGlobalPointer::s_info, &JSSVGPreserveAspectRatioTable, 0 };

JSSVGPreserveAspectRatio::JSSVGPreserveAspectRatio(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPropertyTearOff<SVGPreserveAspectRatio> > impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPreserveAspectRatio::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPreserveAspectRatioPrototype(globalObject, JSSVGPreserveAspectRatioPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSSVGPreserveAspectRatio::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPreserveAspectRatio, Base>(exec, &JSSVGPreserveAspectRatioTable, this, propertyName, slot);
}

bool JSSVGPreserveAspectRatio::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPreserveAspectRatio, Base>(exec, &JSSVGPreserveAspectRatioTable, this, propertyName, descriptor);
}

JSValue jsSVGPreserveAspectRatioAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPreserveAspectRatio* castedThis = static_cast<JSSVGPreserveAspectRatio*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPreserveAspectRatio& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.align());
    return result;
}

JSValue jsSVGPreserveAspectRatioMeetOrSlice(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPreserveAspectRatio* castedThis = static_cast<JSSVGPreserveAspectRatio*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPreserveAspectRatio& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.meetOrSlice());
    return result;
}

JSValue jsSVGPreserveAspectRatioConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPreserveAspectRatio* domObject = static_cast<JSSVGPreserveAspectRatio*>(asObject(slotBase));
    return JSSVGPreserveAspectRatio::getConstructor(exec, domObject->globalObject());
}

void JSSVGPreserveAspectRatio::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPreserveAspectRatio, Base>(exec, propertyName, value, &JSSVGPreserveAspectRatioTable, this, slot);
}

void setJSSVGPreserveAspectRatioAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPreserveAspectRatio* castedThis = static_cast<JSSVGPreserveAspectRatio*>(thisObject);
    SVGPropertyTearOff<SVGPreserveAspectRatio> * imp = static_cast<SVGPropertyTearOff<SVGPreserveAspectRatio> *>(castedThis->impl());
    ExceptionCode ec = 0;
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGPreserveAspectRatio& podImp = imp->propertyReference();
    podImp.setAlign(value.toUInt32(exec), ec);
    setDOMException(exec, ec);
    if (!ec)
        imp->commitChange();
}

void setJSSVGPreserveAspectRatioMeetOrSlice(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPreserveAspectRatio* castedThis = static_cast<JSSVGPreserveAspectRatio*>(thisObject);
    SVGPropertyTearOff<SVGPreserveAspectRatio> * imp = static_cast<SVGPropertyTearOff<SVGPreserveAspectRatio> *>(castedThis->impl());
    ExceptionCode ec = 0;
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGPreserveAspectRatio& podImp = imp->propertyReference();
    podImp.setMeetOrSlice(value.toUInt32(exec), ec);
    setDOMException(exec, ec);
    if (!ec)
        imp->commitChange();
}

JSValue JSSVGPreserveAspectRatio::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPreserveAspectRatioConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_NONE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMIN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMIN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMIN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMID(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}

JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMID(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(6));
}

JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMID(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(7));
}

JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMAX(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(8));
}

JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMAX(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(9));
}

JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMAX(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(10));
}

JSValue jsSVGPreserveAspectRatioSVG_MEETORSLICE_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGPreserveAspectRatioSVG_MEETORSLICE_MEET(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGPreserveAspectRatioSVG_MEETORSLICE_SLICE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGPropertyTearOff<SVGPreserveAspectRatio> * object)
{
    return getDOMObjectWrapper<JSSVGPreserveAspectRatio, SVGPropertyTearOff<SVGPreserveAspectRatio> >(exec, globalObject, object);
}
SVGPropertyTearOff<SVGPreserveAspectRatio> * toSVGPreserveAspectRatio(JSC::JSValue value)
{
    return value.inherits(&JSSVGPreserveAspectRatio::s_info) ? static_cast<JSSVGPreserveAspectRatio*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
