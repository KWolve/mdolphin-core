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

#include "JSAudioPannerNode.h"

#include "AudioGain.h"
#include "AudioPannerNode.h"
#include "ExceptionCode.h"
#include "JSAudioGain.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSAudioPannerNode);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioPannerNodeTableValues[12] =
{
    { "panningModel", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodePanningModel), (intptr_t)setJSAudioPannerNodePanningModel THUNK_GENERATOR(0) },
    { "distanceModel", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeDistanceModel), (intptr_t)setJSAudioPannerNodeDistanceModel THUNK_GENERATOR(0) },
    { "refDistance", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeRefDistance), (intptr_t)setJSAudioPannerNodeRefDistance THUNK_GENERATOR(0) },
    { "maxDistance", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeMaxDistance), (intptr_t)setJSAudioPannerNodeMaxDistance THUNK_GENERATOR(0) },
    { "rolloffFactor", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeRolloffFactor), (intptr_t)setJSAudioPannerNodeRolloffFactor THUNK_GENERATOR(0) },
    { "coneInnerAngle", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeConeInnerAngle), (intptr_t)setJSAudioPannerNodeConeInnerAngle THUNK_GENERATOR(0) },
    { "coneOuterAngle", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeConeOuterAngle), (intptr_t)setJSAudioPannerNodeConeOuterAngle THUNK_GENERATOR(0) },
    { "coneOuterGain", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeConeOuterGain), (intptr_t)setJSAudioPannerNodeConeOuterGain THUNK_GENERATOR(0) },
    { "coneGain", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeConeGain), (intptr_t)0 THUNK_GENERATOR(0) },
    { "distanceGain", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeDistanceGain), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioPannerNodeTable = { 35, 31, JSAudioPannerNodeTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioPannerNodeConstructorTableValues[4] =
{
    { "EQUALPOWER", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeEQUALPOWER), (intptr_t)0 THUNK_GENERATOR(0) },
    { "HRTF", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeHRTF), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SOUNDFIELD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeSOUNDFIELD), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioPannerNodeConstructorTable = { 9, 7, JSAudioPannerNodeConstructorTableValues, 0 };

COMPILE_ASSERT(0 == AudioPannerNode::EQUALPOWER, AudioPannerNodeEnumEQUALPOWERIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == AudioPannerNode::HRTF, AudioPannerNodeEnumHRTFIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == AudioPannerNode::SOUNDFIELD, AudioPannerNodeEnumSOUNDFIELDIsWrongUseDontCheckEnums);

class JSAudioPannerNodeConstructor : public DOMConstructorObject {
public:
    JSAudioPannerNodeConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSAudioPannerNodeConstructor::s_info = { "AudioPannerNodeConstructor", &DOMConstructorObject::s_info, &JSAudioPannerNodeConstructorTable, 0 };

JSAudioPannerNodeConstructor::JSAudioPannerNodeConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSAudioPannerNodeConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSAudioPannerNodePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSAudioPannerNodeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioPannerNodeConstructor, DOMObject>(exec, &JSAudioPannerNodeConstructorTable, this, propertyName, slot);
}

bool JSAudioPannerNodeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSAudioPannerNodeConstructor, DOMObject>(exec, &JSAudioPannerNodeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioPannerNodePrototypeTableValues[7] =
{
    { "EQUALPOWER", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeEQUALPOWER), (intptr_t)0 THUNK_GENERATOR(0) },
    { "HRTF", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeHRTF), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SOUNDFIELD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioPannerNodeSOUNDFIELD), (intptr_t)0 THUNK_GENERATOR(0) },
    { "setPosition", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsAudioPannerNodePrototypeFunctionSetPosition), (intptr_t)3 THUNK_GENERATOR(0) },
    { "setOrientation", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsAudioPannerNodePrototypeFunctionSetOrientation), (intptr_t)3 THUNK_GENERATOR(0) },
    { "setVelocity", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsAudioPannerNodePrototypeFunctionSetVelocity), (intptr_t)3 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioPannerNodePrototypeTable = { 17, 15, JSAudioPannerNodePrototypeTableValues, 0 };
const ClassInfo JSAudioPannerNodePrototype::s_info = { "AudioPannerNodePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSAudioPannerNodePrototypeTable, 0 };

JSObject* JSAudioPannerNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAudioPannerNode>(exec, globalObject);
}

bool JSAudioPannerNodePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSAudioPannerNodePrototype, JSObject>(exec, &JSAudioPannerNodePrototypeTable, this, propertyName, slot);
}

bool JSAudioPannerNodePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSAudioPannerNodePrototype, JSObject>(exec, &JSAudioPannerNodePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSAudioPannerNode::s_info = { "AudioPannerNode", &JSAudioNode::s_info, &JSAudioPannerNodeTable, 0 };

JSAudioPannerNode::JSAudioPannerNode(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioPannerNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSAudioPannerNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSAudioPannerNodePrototype(globalObject, JSAudioPannerNodePrototype::createStructure(exec->globalData(), JSAudioNodePrototype::self(exec, globalObject)));
}

bool JSAudioPannerNode::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioPannerNode, Base>(exec, &JSAudioPannerNodeTable, this, propertyName, slot);
}

bool JSAudioPannerNode::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSAudioPannerNode, Base>(exec, &JSAudioPannerNodeTable, this, propertyName, descriptor);
}

JSValue jsAudioPannerNodePanningModel(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->panningModel());
    return result;
}

JSValue jsAudioPannerNodeDistanceModel(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->distanceModel());
    return result;
}

JSValue jsAudioPannerNodeRefDistance(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->refDistance());
    return result;
}

JSValue jsAudioPannerNodeMaxDistance(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->maxDistance());
    return result;
}

JSValue jsAudioPannerNodeRolloffFactor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->rolloffFactor());
    return result;
}

JSValue jsAudioPannerNodeConeInnerAngle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->coneInnerAngle());
    return result;
}

JSValue jsAudioPannerNodeConeOuterAngle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->coneOuterAngle());
    return result;
}

JSValue jsAudioPannerNodeConeOuterGain(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->coneOuterGain());
    return result;
}

JSValue jsAudioPannerNodeConeGain(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->coneGain()));
    return result;
}

JSValue jsAudioPannerNodeDistanceGain(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->distanceGain()));
    return result;
}

JSValue jsAudioPannerNodeConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioPannerNode* domObject = static_cast<JSAudioPannerNode*>(asObject(slotBase));
    return JSAudioPannerNode::getConstructor(exec, domObject->globalObject());
}

void JSAudioPannerNode::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSAudioPannerNode, Base>(exec, propertyName, value, &JSAudioPannerNodeTable, this, slot);
}

void setJSAudioPannerNodePanningModel(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(thisObject);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    imp->setPanningModel(value.toUInt32(exec));
}

void setJSAudioPannerNodeDistanceModel(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(thisObject);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    imp->setDistanceModel(value.toUInt32(exec));
}

void setJSAudioPannerNodeRefDistance(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(thisObject);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    imp->setRefDistance(value.toFloat(exec));
}

void setJSAudioPannerNodeMaxDistance(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(thisObject);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    imp->setMaxDistance(value.toFloat(exec));
}

void setJSAudioPannerNodeRolloffFactor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(thisObject);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    imp->setRolloffFactor(value.toFloat(exec));
}

void setJSAudioPannerNodeConeInnerAngle(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(thisObject);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    imp->setConeInnerAngle(value.toFloat(exec));
}

void setJSAudioPannerNodeConeOuterAngle(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(thisObject);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    imp->setConeOuterAngle(value.toFloat(exec));
}

void setJSAudioPannerNodeConeOuterGain(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(thisObject);
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    imp->setConeOuterGain(value.toFloat(exec));
}

JSValue JSAudioPannerNode::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSAudioPannerNodeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsAudioPannerNodePrototypeFunctionSetPosition(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioPannerNode::s_info))
        return throwVMTypeError(exec);
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(asObject(thisValue));
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float z(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setPosition(x, y, z);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsAudioPannerNodePrototypeFunctionSetOrientation(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioPannerNode::s_info))
        return throwVMTypeError(exec);
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(asObject(thisValue));
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float z(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setOrientation(x, y, z);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsAudioPannerNodePrototypeFunctionSetVelocity(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioPannerNode::s_info))
        return throwVMTypeError(exec);
    JSAudioPannerNode* castedThis = static_cast<JSAudioPannerNode*>(asObject(thisValue));
    AudioPannerNode* imp = static_cast<AudioPannerNode*>(castedThis->impl());
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float z(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setVelocity(x, y, z);
    return JSValue::encode(jsUndefined());
}

// Constant getters

JSValue jsAudioPannerNodeEQUALPOWER(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsAudioPannerNodeHRTF(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsAudioPannerNodeSOUNDFIELD(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, AudioPannerNode* object)
{
    return getDOMObjectWrapper<JSAudioPannerNode>(exec, globalObject, object);
}

}

#endif // ENABLE(WEB_AUDIO)
