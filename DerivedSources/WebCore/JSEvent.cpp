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
#include "JSEvent.h"

#include "Event.h"
#include "EventTarget.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEventTarget.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSEvent);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSEventTableValues[14] =
{
    { "type", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "target", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventTarget), (intptr_t)0 THUNK_GENERATOR(0) },
    { "currentTarget", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventCurrentTarget), (intptr_t)0 THUNK_GENERATOR(0) },
    { "eventPhase", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventEventPhase), (intptr_t)0 THUNK_GENERATOR(0) },
    { "bubbles", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventBubbles), (intptr_t)0 THUNK_GENERATOR(0) },
    { "cancelable", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventCancelable), (intptr_t)0 THUNK_GENERATOR(0) },
    { "timeStamp", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventTimeStamp), (intptr_t)0 THUNK_GENERATOR(0) },
    { "defaultPrevented", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventDefaultPrevented), (intptr_t)0 THUNK_GENERATOR(0) },
    { "srcElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSrcElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "returnValue", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventReturnValue), (intptr_t)setJSEventReturnValue THUNK_GENERATOR(0) },
    { "cancelBubble", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventCancelBubble), (intptr_t)setJSEventCancelBubble THUNK_GENERATOR(0) },
    { "clipboardData", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventClipboardData), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSEventTable = { 35, 31, JSEventTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSEventConstructorTableValues[20] =
{
    { "CAPTURING_PHASE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventCAPTURING_PHASE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "AT_TARGET", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventAT_TARGET), (intptr_t)0 THUNK_GENERATOR(0) },
    { "BUBBLING_PHASE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventBUBBLING_PHASE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MOUSEDOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventMOUSEDOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MOUSEUP", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventMOUSEUP), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MOUSEOVER", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventMOUSEOVER), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MOUSEOUT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventMOUSEOUT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MOUSEMOVE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventMOUSEMOVE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MOUSEDRAG", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventMOUSEDRAG), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CLICK", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventCLICK), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DBLCLICK", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventDBLCLICK), (intptr_t)0 THUNK_GENERATOR(0) },
    { "KEYDOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventKEYDOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "KEYUP", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventKEYUP), (intptr_t)0 THUNK_GENERATOR(0) },
    { "KEYPRESS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventKEYPRESS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DRAGDROP", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventDRAGDROP), (intptr_t)0 THUNK_GENERATOR(0) },
    { "FOCUS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventFOCUS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "BLUR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventBLUR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SELECT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSELECT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CHANGE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventCHANGE), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSEventConstructorTable = { 68, 63, JSEventConstructorTableValues, 0 };

COMPILE_ASSERT(1 == Event::CAPTURING_PHASE, EventEnumCAPTURING_PHASEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == Event::AT_TARGET, EventEnumAT_TARGETIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == Event::BUBBLING_PHASE, EventEnumBUBBLING_PHASEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == Event::MOUSEDOWN, EventEnumMOUSEDOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == Event::MOUSEUP, EventEnumMOUSEUPIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == Event::MOUSEOVER, EventEnumMOUSEOVERIsWrongUseDontCheckEnums);
COMPILE_ASSERT(8 == Event::MOUSEOUT, EventEnumMOUSEOUTIsWrongUseDontCheckEnums);
COMPILE_ASSERT(16 == Event::MOUSEMOVE, EventEnumMOUSEMOVEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(32 == Event::MOUSEDRAG, EventEnumMOUSEDRAGIsWrongUseDontCheckEnums);
COMPILE_ASSERT(64 == Event::CLICK, EventEnumCLICKIsWrongUseDontCheckEnums);
COMPILE_ASSERT(128 == Event::DBLCLICK, EventEnumDBLCLICKIsWrongUseDontCheckEnums);
COMPILE_ASSERT(256 == Event::KEYDOWN, EventEnumKEYDOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(512 == Event::KEYUP, EventEnumKEYUPIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1024 == Event::KEYPRESS, EventEnumKEYPRESSIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2048 == Event::DRAGDROP, EventEnumDRAGDROPIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4096 == Event::FOCUS, EventEnumFOCUSIsWrongUseDontCheckEnums);
COMPILE_ASSERT(8192 == Event::BLUR, EventEnumBLURIsWrongUseDontCheckEnums);
COMPILE_ASSERT(16384 == Event::SELECT, EventEnumSELECTIsWrongUseDontCheckEnums);
COMPILE_ASSERT(32768 == Event::CHANGE, EventEnumCHANGEIsWrongUseDontCheckEnums);

class JSEventConstructor : public DOMConstructorObject {
public:
    JSEventConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSEventConstructor::s_info = { "EventConstructor", &DOMConstructorObject::s_info, &JSEventConstructorTable, 0 };

JSEventConstructor::JSEventConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSEventConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSEventConstructor, DOMObject>(exec, &JSEventConstructorTable, this, propertyName, slot);
}

bool JSEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSEventConstructor, DOMObject>(exec, &JSEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSEventPrototypeTableValues[24] =
{
    { "CAPTURING_PHASE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventCAPTURING_PHASE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "AT_TARGET", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventAT_TARGET), (intptr_t)0 THUNK_GENERATOR(0) },
    { "BUBBLING_PHASE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventBUBBLING_PHASE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MOUSEDOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventMOUSEDOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MOUSEUP", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventMOUSEUP), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MOUSEOVER", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventMOUSEOVER), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MOUSEOUT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventMOUSEOUT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MOUSEMOVE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventMOUSEMOVE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MOUSEDRAG", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventMOUSEDRAG), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CLICK", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventCLICK), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DBLCLICK", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventDBLCLICK), (intptr_t)0 THUNK_GENERATOR(0) },
    { "KEYDOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventKEYDOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "KEYUP", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventKEYUP), (intptr_t)0 THUNK_GENERATOR(0) },
    { "KEYPRESS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventKEYPRESS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DRAGDROP", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventDRAGDROP), (intptr_t)0 THUNK_GENERATOR(0) },
    { "FOCUS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventFOCUS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "BLUR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventBLUR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SELECT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSELECT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CHANGE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventCHANGE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "stopPropagation", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsEventPrototypeFunctionStopPropagation), (intptr_t)0 THUNK_GENERATOR(0) },
    { "preventDefault", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsEventPrototypeFunctionPreventDefault), (intptr_t)0 THUNK_GENERATOR(0) },
    { "initEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsEventPrototypeFunctionInitEvent), (intptr_t)3 THUNK_GENERATOR(0) },
    { "stopImmediatePropagation", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsEventPrototypeFunctionStopImmediatePropagation), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSEventPrototypeTable = { 69, 63, JSEventPrototypeTableValues, 0 };
static const HashTable* getJSEventPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSEventPrototypeTable);
}
const ClassInfo JSEventPrototype::s_info = { "EventPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSEventPrototypeTable };

JSObject* JSEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSEvent>(exec, globalObject);
}

bool JSEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSEventPrototype, JSObject>(exec, getJSEventPrototypeTable(exec), this, propertyName, slot);
}

bool JSEventPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSEventPrototype, JSObject>(exec, getJSEventPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSEventTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSEventTable);
}
const ClassInfo JSEvent::s_info = { "Event", &DOMObjectWithGlobalPointer::s_info, 0, getJSEventTable };

JSEvent::JSEvent(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<Event> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSEventPrototype(globalObject, JSEventPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSEvent, Base>(exec, getJSEventTable(exec), this, propertyName, slot);
}

bool JSEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSEvent, Base>(exec, getJSEventTable(exec), this, propertyName, descriptor);
}

JSValue jsEventType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Event* imp = static_cast<Event*>(castedThis->impl());
    JSValue result = jsString(exec, imp->type());
    return result;
}

JSValue jsEventTarget(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Event* imp = static_cast<Event*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->target()));
    return result;
}

JSValue jsEventCurrentTarget(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Event* imp = static_cast<Event*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->currentTarget()));
    return result;
}

JSValue jsEventEventPhase(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Event* imp = static_cast<Event*>(castedThis->impl());
    JSValue result = jsNumber(imp->eventPhase());
    return result;
}

JSValue jsEventBubbles(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Event* imp = static_cast<Event*>(castedThis->impl());
    JSValue result = jsBoolean(imp->bubbles());
    return result;
}

JSValue jsEventCancelable(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Event* imp = static_cast<Event*>(castedThis->impl());
    JSValue result = jsBoolean(imp->cancelable());
    return result;
}

JSValue jsEventTimeStamp(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Event* imp = static_cast<Event*>(castedThis->impl());
    JSValue result = jsNumber(imp->timeStamp());
    return result;
}

JSValue jsEventDefaultPrevented(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Event* imp = static_cast<Event*>(castedThis->impl());
    JSValue result = jsBoolean(imp->defaultPrevented());
    return result;
}

JSValue jsEventSrcElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Event* imp = static_cast<Event*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->srcElement()));
    return result;
}

JSValue jsEventReturnValue(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Event* imp = static_cast<Event*>(castedThis->impl());
    JSValue result = jsBoolean(imp->returnValue());
    return result;
}

JSValue jsEventCancelBubble(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Event* imp = static_cast<Event*>(castedThis->impl());
    JSValue result = jsBoolean(imp->cancelBubble());
    return result;
}

JSValue jsEventClipboardData(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(slotBase));
    return castedThis->clipboardData(exec);
}

JSValue jsEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEvent* domObject = static_cast<JSEvent*>(asObject(slotBase));
    return JSEvent::getConstructor(exec, domObject->globalObject());
}

void JSEvent::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSEvent, Base>(exec, propertyName, value, getJSEventTable(exec), this, slot);
}

void setJSEventReturnValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSEvent* castedThis = static_cast<JSEvent*>(thisObject);
    Event* imp = static_cast<Event*>(castedThis->impl());
    imp->setReturnValue(value.toBoolean(exec));
}

void setJSEventCancelBubble(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSEvent* castedThis = static_cast<JSEvent*>(thisObject);
    Event* imp = static_cast<Event*>(castedThis->impl());
    imp->setCancelBubble(value.toBoolean(exec));
}

JSValue JSEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionStopPropagation(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEvent::s_info))
        return throwVMTypeError(exec);
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(thisValue));
    Event* imp = static_cast<Event*>(castedThis->impl());

    imp->stopPropagation();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionPreventDefault(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEvent::s_info))
        return throwVMTypeError(exec);
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(thisValue));
    Event* imp = static_cast<Event*>(castedThis->impl());

    imp->preventDefault();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionInitEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEvent::s_info))
        return throwVMTypeError(exec);
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(thisValue));
    Event* imp = static_cast<Event*>(castedThis->impl());
    const String& eventTypeArg(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool canBubbleArg(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool cancelableArg(exec->argument(2).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->initEvent(eventTypeArg, canBubbleArg, cancelableArg);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionStopImmediatePropagation(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEvent::s_info))
        return throwVMTypeError(exec);
    JSEvent* castedThis = static_cast<JSEvent*>(asObject(thisValue));
    Event* imp = static_cast<Event*>(castedThis->impl());

    imp->stopImmediatePropagation();
    return JSValue::encode(jsUndefined());
}

// Constant getters

JSValue jsEventCAPTURING_PHASE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsEventAT_TARGET(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsEventBUBBLING_PHASE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsEventMOUSEDOWN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsEventMOUSEUP(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsEventMOUSEOVER(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsEventMOUSEOUT(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(8));
}

JSValue jsEventMOUSEMOVE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(16));
}

JSValue jsEventMOUSEDRAG(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(32));
}

JSValue jsEventCLICK(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(64));
}

JSValue jsEventDBLCLICK(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(128));
}

JSValue jsEventKEYDOWN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(256));
}

JSValue jsEventKEYUP(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(512));
}

JSValue jsEventKEYPRESS(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1024));
}

JSValue jsEventDRAGDROP(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2048));
}

JSValue jsEventFOCUS(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4096));
}

JSValue jsEventBLUR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(8192));
}

JSValue jsEventSELECT(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(16384));
}

JSValue jsEventCHANGE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(32768));
}

Event* toEvent(JSC::JSValue value)
{
    return value.inherits(&JSEvent::s_info) ? static_cast<JSEvent*>(asObject(value))->impl() : 0;
}

}