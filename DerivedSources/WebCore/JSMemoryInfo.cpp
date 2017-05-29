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
#include "JSMemoryInfo.h"

#include "MemoryInfo.h"
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSMemoryInfo);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMemoryInfoTableValues[4] =
{
    { "totalJSHeapSize", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMemoryInfoTotalJSHeapSize), (intptr_t)0 THUNK_GENERATOR(0) },
    { "usedJSHeapSize", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMemoryInfoUsedJSHeapSize), (intptr_t)0 THUNK_GENERATOR(0) },
    { "jsHeapSizeLimit", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMemoryInfoJsHeapSizeLimit), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMemoryInfoTable = { 8, 7, JSMemoryInfoTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMemoryInfoPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMemoryInfoPrototypeTable = { 1, 0, JSMemoryInfoPrototypeTableValues, 0 };
const ClassInfo JSMemoryInfoPrototype::s_info = { "MemoryInfoPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSMemoryInfoPrototypeTable, 0 };

JSObject* JSMemoryInfoPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMemoryInfo>(exec, globalObject);
}

const ClassInfo JSMemoryInfo::s_info = { "MemoryInfo", &DOMObjectWithGlobalPointer::s_info, &JSMemoryInfoTable, 0 };

JSMemoryInfo::JSMemoryInfo(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<MemoryInfo> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSMemoryInfo::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSMemoryInfoPrototype(globalObject, JSMemoryInfoPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSMemoryInfo::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMemoryInfo, Base>(exec, &JSMemoryInfoTable, this, propertyName, slot);
}

bool JSMemoryInfo::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSMemoryInfo, Base>(exec, &JSMemoryInfoTable, this, propertyName, descriptor);
}

JSValue jsMemoryInfoTotalJSHeapSize(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMemoryInfo* castedThis = static_cast<JSMemoryInfo*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MemoryInfo* imp = static_cast<MemoryInfo*>(castedThis->impl());
    JSValue result = jsNumber(imp->totalJSHeapSize());
    return result;
}

JSValue jsMemoryInfoUsedJSHeapSize(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMemoryInfo* castedThis = static_cast<JSMemoryInfo*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MemoryInfo* imp = static_cast<MemoryInfo*>(castedThis->impl());
    JSValue result = jsNumber(imp->usedJSHeapSize());
    return result;
}

JSValue jsMemoryInfoJsHeapSizeLimit(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMemoryInfo* castedThis = static_cast<JSMemoryInfo*>(asObject(slotBase));
    return castedThis->jsHeapSizeLimit(exec);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MemoryInfo* object)
{
    return getDOMObjectWrapper<JSMemoryInfo>(exec, globalObject, object);
}
MemoryInfo* toMemoryInfo(JSC::JSValue value)
{
    return value.inherits(&JSMemoryInfo::s_info) ? static_cast<JSMemoryInfo*>(asObject(value))->impl() : 0;
}

}
