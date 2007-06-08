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
 **     class OffCenterPerspectiveCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEOFFCENTERPERSPECTIVECAMERAINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGOffCenterPerspectiveCameraBase.h"
#include "OSGOffCenterPerspectiveCamera.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::OffCenterPerspectiveCamera
    A generalized perspective camera for an asymmetric frustum.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec2f           OffCenterPerspectiveCameraBase::_sfPrincipalPoint
    The relative position of the principal point.
*/


void OffCenterPerspectiveCameraBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFVec2f *(OffCenterPerspectiveCameraBase::*GetSFPrincipalPointF)(void) const;

    GetSFPrincipalPointF GetSFPrincipalPoint = &OffCenterPerspectiveCameraBase::getSFPrincipalPoint;
#endif

    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "principalPoint",
        "The relative position of the principal point.\n",
        PrincipalPointFieldId, PrincipalPointFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&OffCenterPerspectiveCameraBase::editSFPrincipalPoint),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFPrincipalPoint));
#else
        reinterpret_cast<FieldGetMethodSig >(&OffCenterPerspectiveCameraBase::getSFPrincipalPoint));
#endif

    oType.addInitialDesc(pDesc);
}


OffCenterPerspectiveCameraBase::TypeObject OffCenterPerspectiveCameraBase::_type(
    OffCenterPerspectiveCameraBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &OffCenterPerspectiveCameraBase::createEmpty,
    OffCenterPerspectiveCamera::initMethod,
    (InitalInsertDescFunc) &OffCenterPerspectiveCameraBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"OffCenterPerspectiveCamera\"\n"
    "\tparent=\"PerspectiveCamera\"\n"
    "\tlibrary=\"Window\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "A generalized perspective camera for an asymmetric frustum.\n"
    "\t<Field\n"
    "\t\tname=\"principalPoint\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "                defaultValue=\"0,0\"\n"
    "\t>\n"
    "\tThe relative position of the principal point.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A generalized perspective camera for an asymmetric frustum.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &OffCenterPerspectiveCameraBase::getType(void)
{
    return _type;
}

const FieldContainerType &OffCenterPerspectiveCameraBase::getType(void) const
{
    return _type;
}

UInt32 OffCenterPerspectiveCameraBase::getContainerSize(void) const
{
    return sizeof(OffCenterPerspectiveCamera);
}

/*------------------------- decorator get ------------------------------*/


SFVec2f *OffCenterPerspectiveCameraBase::editSFPrincipalPoint(void)
{
    editSField(PrincipalPointFieldMask);

    return &_sfPrincipalPoint;
}

const SFVec2f *OffCenterPerspectiveCameraBase::getSFPrincipalPoint(void) const
{
    return &_sfPrincipalPoint;
}

#ifdef OSG_1_GET_COMPAT
SFVec2f             *OffCenterPerspectiveCameraBase::getSFPrincipalPoint (void)
{
    return this->editSFPrincipalPoint ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 OffCenterPerspectiveCameraBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PrincipalPointFieldMask & whichField))
    {
        returnValue += _sfPrincipalPoint.getBinSize();
    }

    return returnValue;
}

void OffCenterPerspectiveCameraBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PrincipalPointFieldMask & whichField))
    {
        _sfPrincipalPoint.copyToBin(pMem);
    }
}

void OffCenterPerspectiveCameraBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PrincipalPointFieldMask & whichField))
    {
        _sfPrincipalPoint.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
OffCenterPerspectiveCameraPtr OffCenterPerspectiveCameraBase::createEmpty(void)
{
    OffCenterPerspectiveCameraPtr returnValue;

    newPtr<OffCenterPerspectiveCamera>(returnValue);

    return returnValue;
}

FieldContainerPtr OffCenterPerspectiveCameraBase::shallowCopy(void) const
{
    OffCenterPerspectiveCameraPtr returnValue;

    newPtr(returnValue, dynamic_cast<const OffCenterPerspectiveCamera *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

OffCenterPerspectiveCameraBase::OffCenterPerspectiveCameraBase(void) :
    Inherited(),
    _sfPrincipalPoint         (Vec2f(0,0))
{
}

OffCenterPerspectiveCameraBase::OffCenterPerspectiveCameraBase(const OffCenterPerspectiveCameraBase &source) :
    Inherited(source),
    _sfPrincipalPoint         (source._sfPrincipalPoint         )
{
}

/*-------------------------- destructors ----------------------------------*/

OffCenterPerspectiveCameraBase::~OffCenterPerspectiveCameraBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void OffCenterPerspectiveCameraBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<OffCenterPerspectiveCameraBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void OffCenterPerspectiveCameraBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<OffCenterPerspectiveCameraBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void OffCenterPerspectiveCameraBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr OffCenterPerspectiveCameraBase::createAspectCopy(void) const
{
    OffCenterPerspectiveCameraPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const OffCenterPerspectiveCamera *>(this));

    return returnValue;
}
#endif

void OffCenterPerspectiveCameraBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<OffCenterPerspectiveCameraPtr>::_type("OffCenterPerspectiveCameraPtr", "PerspectiveCameraPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(OffCenterPerspectiveCameraPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, OffCenterPerspectiveCameraPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, OffCenterPerspectiveCameraPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
