/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class PassiveWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPASSIVEWINDOWINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGPassiveWindowBase.h"
#include "OSGPassiveWindow.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PassiveWindow
    \ingroup GrpSystemWindowPassive
 */


PassiveWindowBase::TypeObject PassiveWindowBase::_type(true,
    PassiveWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &PassiveWindowBase::createEmpty,
    PassiveWindow::initMethod,
    NULL,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PassiveWindow\"\n"
    "\tparent=\"Window\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowPassive\n"
    "\n"
    "A PassiveWindow is a Window class for integration into other OpenGL\n"
    "programs. See \\ref PageSystemWindowWindowPassive for a description.\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowPassive\n"
    "\n"
    "A PassiveWindow is a Window class for integration into other OpenGL\n"
    "programs. See \\ref PageSystemWindowWindowPassive for a description.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PassiveWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &PassiveWindowBase::getType(void) const
{
    return _type;
}

UInt32 PassiveWindowBase::getContainerSize(void) const
{
    return sizeof(PassiveWindow);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 PassiveWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void PassiveWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void PassiveWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create an empty new instance of the class, do not copy the prototype
PassiveWindowPtr PassiveWindowBase::createEmpty(void)
{
    PassiveWindowPtr returnValue;

    newPtr<PassiveWindow>(returnValue);

    return returnValue;
}

FieldContainerPtr PassiveWindowBase::shallowCopy(void) const
{
    PassiveWindowPtr returnValue;

    newPtr(returnValue, dynamic_cast<const PassiveWindow *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

PassiveWindowBase::PassiveWindowBase(void) :
    Inherited()
{
}

PassiveWindowBase::PassiveWindowBase(const PassiveWindowBase &source) :
    Inherited(source)
{
}

/*-------------------------- destructors ----------------------------------*/

PassiveWindowBase::~PassiveWindowBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void PassiveWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<PassiveWindowBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void PassiveWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<PassiveWindowBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void PassiveWindowBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr PassiveWindowBase::createAspectCopy(void) const
{
    PassiveWindowPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PassiveWindow *>(this));

    return returnValue;
}
#endif

void PassiveWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PassiveWindowPtr>::_type("PassiveWindowPtr", "WindowPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PassiveWindowPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, PassiveWindowPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, PassiveWindowPtr, MFFieldContainerPtr);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id$";
    static Char8 cvsid_hpp       [] = OSGPASSIVEWINDOWBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPASSIVEWINDOWBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPASSIVEWINDOWFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
