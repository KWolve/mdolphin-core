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

#if ENABLE(WEB_AUDIO)

#include "JSAudioGainNode.h"

#include "AudioGain.h"
#include "AudioGainNode.h"
#include "JSAudioGain.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSAudioGainNode);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioGainNodeTableValues[3] =
{
    { "gain", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioGainNodeGain), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioGainNodeConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioGainNodeTable = { 4, 3, JSAudioGainNodeTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioGainNodeConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioGainNodeConstructorTable = { 1, 0, JSAudioGainNodeConstructorTableValues, 0 };
class JSAudioGainNodeConstructor : public DOMConstructorObject {
public:
    JSAudioGainNodeConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSAudioGainNodeConstructor::s_info = { "AudioGainNodeConstructor", &DOMConstructorObject::s_info, &JSAudioGainNodeConstructorTable, 0 };

JSAudioGainNodeConstructor::JSAudioGainNodeConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSAudioGainNodeConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSAudioGainNodePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSAudioGainNodeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioGainNodeConstructor, DOMObject>(exec, &JSAudioGainNodeConstructorTable, this, propertyName, slot);
}

bool JSAudioGainNodeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSAudioGainNodeConstructor, DOMObject>(exec, &JSAudioGainNodeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioGainNodePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioGainNodePrototypeTable = { 1, 0, JSAudioGainNodePrototypeTableValues, 0 };
const ClassInfo JSAudioGainNodePrototype::s_info = { "AudioGainNodePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSAudioGainNodePrototypeTable, 0 };

JSObject* JSAudioGainNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAudioGainNode>(exec, globalObject);
}

const ClassInfo JSAudioGainNode::s_info = { "AudioGainNode", &JSAudioNode::s_info, &JSAudioGainNodeTable, 0 };

JSAudioGainNode::JSAudioGainNode(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioGainNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSAudioGainNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSAudioGainNodePrototype(globalObject, JSAudioGainNodePrototype::createStructure(exec->globalData(), JSAudioNodePrototype::self(exec, globalObject)));
}

bool JSAudioGainNode::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioGainNode, Base>(exec, &JSAudioGainNodeTable, this, propertyName, slot);
}

bool JSAudioGainNode::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSAudioGainNode, Base>(exec, &JSAudioGainNodeTable, this, propertyName, descriptor);
}

JSValue jsAudioGainNodeGain(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioGainNode* castedThis = static_cast<JSAudioGainNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioGainNode* imp = static_cast<AudioGainNode*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->gain()));
    return result;
}

JSValue jsAudioGainNodeConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioGainNode* domObject = static_cast<JSAudioGainNode*>(asObject(slotBase));
    return JSAudioGainNode::getConstructor(exec, domObject->globalObject());
}

JSValue JSAudioGainNode::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSAudioGainNodeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, AudioGainNode* object)
{
    return getDOMObjectWrapper<JSAudioGainNode>(exec, globalObject, object);
}

}

#endif // ENABLE(WEB_AUDIO)
