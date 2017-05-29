/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * This file was generated by the dom/make_names.pl script.
 *
 * Copyright (C) 2005, 2006, 2007, 2008, 2009 Apple Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#ifdef SKIP_STATIC_CONSTRUCTORS_ON_GCC
#define DOM_WMLNAMES_HIDE_GLOBALS 1
#else
#define QNAME_DEFAULT_CONSTRUCTOR 1
#endif

#include "WMLNames.h"

#include <wtf/StaticConstructors.h>
namespace WebCore {

 namespace WMLNames {

using namespace WebCore;

DEFINE_GLOBAL(AtomicString, wmlNamespaceURI, "http://www.wapforum.org/DTD/wml_1.1.xml")
// Tags
DEFINE_GLOBAL(QualifiedName, aTag, nullAtom, "a", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, accessTag, nullAtom, "access", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, anchorTag, nullAtom, "anchor", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, brTag, nullAtom, "br", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, cardTag, nullAtom, "card", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, doTag, nullAtom, "do", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, fieldsetTag, nullAtom, "fieldset", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, goTag, nullAtom, "go", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, headTag, nullAtom, "head", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, imgTag, nullAtom, "img", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, inputTag, nullAtom, "input", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, insertedLegendTag, nullAtom, "insertedLegend", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, metaTag, nullAtom, "meta", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, noopTag, nullAtom, "noop", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, oneventTag, nullAtom, "onevent", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, optgroupTag, nullAtom, "optgroup", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, optionTag, nullAtom, "option", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, pTag, nullAtom, "p", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, postfieldTag, nullAtom, "postfield", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, prevTag, nullAtom, "prev", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, refreshTag, nullAtom, "refresh", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, selectTag, nullAtom, "select", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, setvarTag, nullAtom, "setvar", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, tableTag, nullAtom, "table", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, tdTag, nullAtom, "td", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, templateTag, nullAtom, "template", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, timerTag, nullAtom, "timer", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, trTag, nullAtom, "tr", wmlNamespaceURI);


WebCore::QualifiedName** getWMLTags(size_t* size)
{
    static WebCore::QualifiedName* WMLTags[] = {
        (WebCore::QualifiedName*)&aTag,
        (WebCore::QualifiedName*)&accessTag,
        (WebCore::QualifiedName*)&anchorTag,
        (WebCore::QualifiedName*)&brTag,
        (WebCore::QualifiedName*)&cardTag,
        (WebCore::QualifiedName*)&doTag,
        (WebCore::QualifiedName*)&fieldsetTag,
        (WebCore::QualifiedName*)&goTag,
        (WebCore::QualifiedName*)&headTag,
        (WebCore::QualifiedName*)&imgTag,
        (WebCore::QualifiedName*)&inputTag,
        (WebCore::QualifiedName*)&insertedLegendTag,
        (WebCore::QualifiedName*)&metaTag,
        (WebCore::QualifiedName*)&noopTag,
        (WebCore::QualifiedName*)&oneventTag,
        (WebCore::QualifiedName*)&optgroupTag,
        (WebCore::QualifiedName*)&optionTag,
        (WebCore::QualifiedName*)&pTag,
        (WebCore::QualifiedName*)&postfieldTag,
        (WebCore::QualifiedName*)&prevTag,
        (WebCore::QualifiedName*)&refreshTag,
        (WebCore::QualifiedName*)&selectTag,
        (WebCore::QualifiedName*)&setvarTag,
        (WebCore::QualifiedName*)&tableTag,
        (WebCore::QualifiedName*)&tdTag,
        (WebCore::QualifiedName*)&templateTag,
        (WebCore::QualifiedName*)&timerTag,
        (WebCore::QualifiedName*)&trTag,
    };
    *size = 28;
    return WMLTags;
}

// Attributes
DEFINE_GLOBAL(QualifiedName, cache_controlAttr, nullAtom, "cache_control", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, columnsAttr, nullAtom, "columns", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, domainAttr, nullAtom, "domain", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, emptyokAttr, nullAtom, "emptyok", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, formatAttr, nullAtom, "format", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, foruaAttr, nullAtom, "forua", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, inameAttr, nullAtom, "iname", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, ivalueAttr, nullAtom, "ivalue", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, localsrcAttr, nullAtom, "localsrc", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, modeAttr, nullAtom, "mode", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, newcontextAttr, nullAtom, "newcontext", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, onenterbackwardAttr, nullAtom, "onenterbackward", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, onenterforwardAttr, nullAtom, "onenterforward", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, onpickAttr, nullAtom, "onpick", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, ontimerAttr, nullAtom, "ontimer", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, optionalAttr, nullAtom, "optional", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, orderedAttr, nullAtom, "ordered", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, pathAttr, nullAtom, "path", wmlNamespaceURI);
DEFINE_GLOBAL(QualifiedName, sendrefererAttr, nullAtom, "sendreferer", wmlNamespaceURI);


WebCore::QualifiedName** getWMLAttrs(size_t* size)
{
    static WebCore::QualifiedName* WMLAttr[] = {
        (WebCore::QualifiedName*)&cache_controlAttr,
        (WebCore::QualifiedName*)&columnsAttr,
        (WebCore::QualifiedName*)&domainAttr,
        (WebCore::QualifiedName*)&emptyokAttr,
        (WebCore::QualifiedName*)&formatAttr,
        (WebCore::QualifiedName*)&foruaAttr,
        (WebCore::QualifiedName*)&inameAttr,
        (WebCore::QualifiedName*)&ivalueAttr,
        (WebCore::QualifiedName*)&localsrcAttr,
        (WebCore::QualifiedName*)&modeAttr,
        (WebCore::QualifiedName*)&newcontextAttr,
        (WebCore::QualifiedName*)&onenterbackwardAttr,
        (WebCore::QualifiedName*)&onenterforwardAttr,
        (WebCore::QualifiedName*)&onpickAttr,
        (WebCore::QualifiedName*)&ontimerAttr,
        (WebCore::QualifiedName*)&optionalAttr,
        (WebCore::QualifiedName*)&orderedAttr,
        (WebCore::QualifiedName*)&pathAttr,
        (WebCore::QualifiedName*)&sendrefererAttr,
    };
    *size = 19;
    return WMLAttr;
}

void init()
{
    static bool initialized = false;
    if (initialized)
        return;
    initialized = true;
    
    // Use placement new to initialize the globals.
    
    AtomicString::init();
    AtomicString wmlNS("http://www.wapforum.org/DTD/wml_1.1.xml");

    // Namespace
    new ((void*)&wmlNamespaceURI) AtomicString(wmlNS);

    // Tags
    new ((void*)&aTag) QualifiedName(nullAtom, "a", wmlNS);
    new ((void*)&accessTag) QualifiedName(nullAtom, "access", wmlNS);
    new ((void*)&anchorTag) QualifiedName(nullAtom, "anchor", wmlNS);
    new ((void*)&brTag) QualifiedName(nullAtom, "br", wmlNS);
    new ((void*)&cardTag) QualifiedName(nullAtom, "card", wmlNS);
    new ((void*)&doTag) QualifiedName(nullAtom, "do", wmlNS);
    new ((void*)&fieldsetTag) QualifiedName(nullAtom, "fieldset", wmlNS);
    new ((void*)&goTag) QualifiedName(nullAtom, "go", wmlNS);
    new ((void*)&headTag) QualifiedName(nullAtom, "head", wmlNS);
    new ((void*)&imgTag) QualifiedName(nullAtom, "img", wmlNS);
    new ((void*)&inputTag) QualifiedName(nullAtom, "input", wmlNS);
    new ((void*)&insertedLegendTag) QualifiedName(nullAtom, "insertedLegend", wmlNS);
    new ((void*)&metaTag) QualifiedName(nullAtom, "meta", wmlNS);
    new ((void*)&noopTag) QualifiedName(nullAtom, "noop", wmlNS);
    new ((void*)&oneventTag) QualifiedName(nullAtom, "onevent", wmlNS);
    new ((void*)&optgroupTag) QualifiedName(nullAtom, "optgroup", wmlNS);
    new ((void*)&optionTag) QualifiedName(nullAtom, "option", wmlNS);
    new ((void*)&pTag) QualifiedName(nullAtom, "p", wmlNS);
    new ((void*)&postfieldTag) QualifiedName(nullAtom, "postfield", wmlNS);
    new ((void*)&prevTag) QualifiedName(nullAtom, "prev", wmlNS);
    new ((void*)&refreshTag) QualifiedName(nullAtom, "refresh", wmlNS);
    new ((void*)&selectTag) QualifiedName(nullAtom, "select", wmlNS);
    new ((void*)&setvarTag) QualifiedName(nullAtom, "setvar", wmlNS);
    new ((void*)&tableTag) QualifiedName(nullAtom, "table", wmlNS);
    new ((void*)&tdTag) QualifiedName(nullAtom, "td", wmlNS);
    new ((void*)&templateTag) QualifiedName(nullAtom, "template", wmlNS);
    new ((void*)&timerTag) QualifiedName(nullAtom, "timer", wmlNS);
    new ((void*)&trTag) QualifiedName(nullAtom, "tr", wmlNS);
    // Attributes
    new ((void*)&cache_controlAttr) QualifiedName(nullAtom, "cache-control", nullAtom);
    new ((void*)&columnsAttr) QualifiedName(nullAtom, "columns", nullAtom);
    new ((void*)&domainAttr) QualifiedName(nullAtom, "domain", nullAtom);
    new ((void*)&emptyokAttr) QualifiedName(nullAtom, "emptyok", nullAtom);
    new ((void*)&formatAttr) QualifiedName(nullAtom, "format", nullAtom);
    new ((void*)&foruaAttr) QualifiedName(nullAtom, "forua", nullAtom);
    new ((void*)&inameAttr) QualifiedName(nullAtom, "iname", nullAtom);
    new ((void*)&ivalueAttr) QualifiedName(nullAtom, "ivalue", nullAtom);
    new ((void*)&localsrcAttr) QualifiedName(nullAtom, "localsrc", nullAtom);
    new ((void*)&modeAttr) QualifiedName(nullAtom, "mode", nullAtom);
    new ((void*)&newcontextAttr) QualifiedName(nullAtom, "newcontext", nullAtom);
    new ((void*)&onenterbackwardAttr) QualifiedName(nullAtom, "onenterbackward", nullAtom);
    new ((void*)&onenterforwardAttr) QualifiedName(nullAtom, "onenterforward", nullAtom);
    new ((void*)&onpickAttr) QualifiedName(nullAtom, "onpick", nullAtom);
    new ((void*)&ontimerAttr) QualifiedName(nullAtom, "ontimer", nullAtom);
    new ((void*)&optionalAttr) QualifiedName(nullAtom, "optional", nullAtom);
    new ((void*)&orderedAttr) QualifiedName(nullAtom, "ordered", nullAtom);
    new ((void*)&pathAttr) QualifiedName(nullAtom, "path", nullAtom);
    new ((void*)&sendrefererAttr) QualifiedName(nullAtom, "sendreferer", nullAtom);
}

} }

