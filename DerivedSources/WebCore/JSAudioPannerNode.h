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

#ifndef JSAudioPannerNode_h
#define JSAudioPannerNode_h

#if ENABLE(WEB_AUDIO)

#include "JSAudioNode.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore {

class AudioPannerNode;

class JSAudioPannerNode : public JSAudioNode {
    typedef JSAudioNode Base;
public:
    JSAudioPannerNode(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<AudioPannerNode>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, AudioPannerNode*);

class JSAudioPannerNodePrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
    JSAudioPannerNodePrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsAudioPannerNodePrototypeFunctionSetPosition(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioPannerNodePrototypeFunctionSetOrientation(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioPannerNodePrototypeFunctionSetVelocity(JSC::ExecState*);
// Attributes

JSC::JSValue jsAudioPannerNodePanningModel(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSAudioPannerNodePanningModel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeDistanceModel(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSAudioPannerNodeDistanceModel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeRefDistance(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSAudioPannerNodeRefDistance(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeMaxDistance(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSAudioPannerNodeMaxDistance(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeRolloffFactor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSAudioPannerNodeRolloffFactor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeConeInnerAngle(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSAudioPannerNodeConeInnerAngle(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeConeOuterAngle(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSAudioPannerNodeConeOuterAngle(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeConeOuterGain(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSAudioPannerNodeConeOuterGain(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeConeGain(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsAudioPannerNodeDistanceGain(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsAudioPannerNodeConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
// Constants

JSC::JSValue jsAudioPannerNodeEQUALPOWER(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsAudioPannerNodeHRTF(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsAudioPannerNodeSOUNDFIELD(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)

#endif
