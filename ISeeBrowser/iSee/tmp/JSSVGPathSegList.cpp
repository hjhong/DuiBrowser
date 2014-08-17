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

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGPathSegList.h"

#include <wtf/GetPtr.h>

#include "SVGPathSeg.h"
#include "SVGPathSegList.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegList)

/* Hash table */

static const HashTableValue JSSVGPathSegListTableValues[2] =
{
    { "numberOfItems", (intptr_t)JSSVGPathSegList::NumberOfItemsAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegListTable = { 0, JSSVGPathSegListTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegListPrototypeTableValues[8] =
{
    { "clear", (intptr_t)jsSVGPathSegListPrototypeFunctionClear, DontDelete|Function, 0 },
    { "initialize", (intptr_t)jsSVGPathSegListPrototypeFunctionInitialize, DontDelete|Function, 1 },
    { "getItem", (intptr_t)jsSVGPathSegListPrototypeFunctionGetItem, DontDelete|Function, 1 },
    { "insertItemBefore", (intptr_t)jsSVGPathSegListPrototypeFunctionInsertItemBefore, DontDelete|Function, 2 },
    { "replaceItem", (intptr_t)jsSVGPathSegListPrototypeFunctionReplaceItem, DontDelete|Function, 2 },
    { "removeItem", (intptr_t)jsSVGPathSegListPrototypeFunctionRemoveItem, DontDelete|Function, 1 },
    { "appendItem", (intptr_t)jsSVGPathSegListPrototypeFunctionAppendItem, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegListPrototypeTable = { 63, JSSVGPathSegListPrototypeTableValues, 0 };

const ClassInfo JSSVGPathSegListPrototype::s_info = { "SVGPathSegListPrototype", 0, &JSSVGPathSegListPrototypeTable, 0 };

JSObject* JSSVGPathSegListPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGPathSegList.prototype]]");
    return JSC::cacheGlobalObject<JSSVGPathSegListPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGPathSegListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGPathSegListPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGPathSegList::s_info = { "SVGPathSegList", 0, &JSSVGPathSegListTable , 0 };

JSSVGPathSegList::JSSVGPathSegList(JSObject* prototype, SVGPathSegList* impl, SVGElement* context)
    : DOMObject(prototype)
    , m_context(context)
    , m_impl(impl)
{
}

JSSVGPathSegList::~JSSVGPathSegList()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSSVGPathSegList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegList, Base>(exec, &JSSVGPathSegListTable, this, propertyName, slot);
}

JSValue* JSSVGPathSegList::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case NumberOfItemsAttrNum: {
        SVGPathSegList* imp = static_cast<SVGPathSegList*>(impl());
        return jsNumber(exec, imp->numberOfItems());
    }
    }
    return 0;
}

JSValue* jsSVGPathSegListPrototypeFunctionClear(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(thisValue);
    return castedThisObj->clear(exec, args);
}

JSValue* jsSVGPathSegListPrototypeFunctionInitialize(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(thisValue);
    return castedThisObj->initialize(exec, args);
}

JSValue* jsSVGPathSegListPrototypeFunctionGetItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(thisValue);
    return castedThisObj->getItem(exec, args);
}

JSValue* jsSVGPathSegListPrototypeFunctionInsertItemBefore(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(thisValue);
    return castedThisObj->insertItemBefore(exec, args);
}

JSValue* jsSVGPathSegListPrototypeFunctionReplaceItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(thisValue);
    return castedThisObj->replaceItem(exec, args);
}

JSValue* jsSVGPathSegListPrototypeFunctionRemoveItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(thisValue);
    return castedThisObj->removeItem(exec, args);
}

JSValue* jsSVGPathSegListPrototypeFunctionAppendItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(thisValue);
    return castedThisObj->appendItem(exec, args);
}

JSC::JSValue* toJS(JSC::ExecState* exec, SVGPathSegList* obj, SVGElement* context)
{
    return cacheSVGDOMObject<SVGPathSegList, JSSVGPathSegList, JSSVGPathSegListPrototype>(exec, obj, context);
}
SVGPathSegList* toSVGPathSegList(JSC::JSValue* val)
{
    return val->isObject(&JSSVGPathSegList::s_info) ? static_cast<JSSVGPathSegList*>(val)->impl() : 0;
}

}

#endif // ENABLE(SVG)