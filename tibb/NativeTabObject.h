/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2012 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#ifndef NATIVETABOBJECT_H_
#define NATIVETABOBJECT_H_

#include "NativeControlObject.h"

class NativeObjectFactory;
namespace bb
{
namespace cascades
{
class ActionItem;
class NavigationPane;
class Page;
class Tab;
}
}

/*
 * NativeTabObject
 *
 * UI: Tab container
 */

class NativeTabObject : public NativeControlObject
{
public:
    static NativeObject* createTab(TiObject* tiObject);
    virtual ~NativeTabObject();
    virtual int getObjectType() const;
    virtual int setTitle(TiObject* obj);
    virtual int setIcon(TiObject* obj);
    virtual int addChildNativeObject(NativeObject* obj);
    virtual int openWindowOnTab(NativeObject* obj);
    virtual NAHANDLE getNativeHandle() const;

protected:
    virtual int initialize();

private:
    bb::cascades::NavigationPane* navigationPane_;
    bb::cascades::Tab* tab_;

    explicit NativeTabObject(TiObject* tiObject);
    // Disable copy ctor & assignment operator
    NativeTabObject(const NativeTabObject& obj);
    NativeTabObject& operator=(const NativeTabObject& obj);
};


#endif /* NATIVETABOBJECT_H_ */
