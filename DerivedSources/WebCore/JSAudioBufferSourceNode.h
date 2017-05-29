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

#ifndef JSAudioBufferSourceNode_h
#define JSAudioBufferSourceNode_h

#if ENABLE(WEB_AUDIO)

#include "JSAudioSourceNode.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore {

class AudioBufferSourceNode;

class JSAudioBufferSourceNode : public JSAudioSourceNode {
    typedef JSAudioSourceNode Base;
public:
    JSAudioBufferSourceNode(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<AudioBufferSourceNode>);
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

    // Custom attributes
    void setBuffer(JSC::ExecState*, JSC::JSValue);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, AudioBufferSourceNode*);

class JSAudioBufferSourceNodePrototype : public JSC::JSObjectWithGlobalObject {
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
    JSAudioBufferSourceNodePrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsAudioBufferSourceNodePrototypeFunctionNoteOn(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioBufferSourceNodePrototypeFunctionNoteGrainOn(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioBufferSourceNodePrototypeFunctionNoteOff(JSC::ExecState*);
// Attributes

JSC::JSValue jsAudioBufferSourceNodeBuffer(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSAudioBufferSourceNodeBuffer(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioBufferSourceNodeGain(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsAudioBufferSourceNodePlaybackRate(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsAudioBufferSourceNodeLooping(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSAudioBufferSourceNodeLooping(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioBufferSourceNodeConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)

#endif
