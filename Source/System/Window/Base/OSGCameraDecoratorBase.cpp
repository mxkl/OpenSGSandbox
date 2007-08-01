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
 **     class CameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECAMERADECORATORINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGNode.h> // Beacon Class

#include "OSGCameraDecoratorBase.h"
#include "OSGCameraDecorator.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CameraDecorator
    \ingroup GrpSystemWindowCameras

    The Camera base class, see \ref PageSystemWindowCamera for a description.

    The only common fields are _sfNear and _sfFar.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var CameraPtr CameraDecoratorBase::_sfDecoratee
    The object being decorated
*/

void CameraDecoratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;

    pDesc = new SFCameraPtr::Description(
        SFCameraPtr::getClassType(),
        "decoratee",
        "undocumented decoratee",
        DecorateeFieldId, DecorateeFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&CameraDecoratorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&CameraDecoratorBase::getSFDecoratee));

    oType.addInitialDesc(pDesc);
}


CameraDecoratorBase::TypeObject CameraDecoratorBase::_type(
    CameraDecoratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    CameraDecorator::initMethod,
    (InitalInsertDescFunc) &CameraDecoratorBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Camera\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"abstract\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowCameras\n"
    "\n"
    "The Camera base class, see \\ref PageSystemWindowCamera for a description.\n"
    "\n"
    "The only common fields are _sfNear and _sfFar.\n"
    "\t<Field\n"
    "\t\tname=\"beacon\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\tThe object that define's the camera's coordinate system. The camera is positioned\n"
    "\tat the origin of the system and looks down the negative z-axis (OpenGL-style).\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"near\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\tThe near distance of the camera.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"far\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\tThe far distance of the camera.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowCameras\n"
    "\n"
    "The Camera base class, see \\ref PageSystemWindowCamera for a description.\n"
    "\n"
    "The only common fields are _sfNear and _sfFar.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CameraDecoratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &CameraDecoratorBase::getType(void) const
{
    return _type;
}

UInt32 CameraDecoratorBase::getContainerSize(void) const
{
    return sizeof(CameraDecorator);
}

/*------------------------- decorator get ------------------------------*/

const SFCameraPtr *CameraDecoratorBase::getSFDecoratee(void) const
{
    return &_sfDecoratee;
}

//! Get the CameraDecorator::_sfBeacon field.
const SFNodePtr *CameraDecoratorBase::getSFBeacon(void) const
{
    if(_sfDecoratee.getValue() != NullFC)
    {
        return getDecoratee()->getSFBeacon();
    }
    else
    {
        return NULL;
    }
}

SFReal32 *CameraDecoratorBase::editSFNear(void)
{
    if(_sfDecoratee.getValue() != NullFC)
    {
        return getDecoratee()->editSFNear();
    }
    else
    {
        return NULL;
    }
}

const SFReal32 *CameraDecoratorBase::getSFNear(void) const
{
    if(_sfDecoratee.getValue() != NullFC)
    {
        return getDecoratee()->getSFNear();
    }
    else
    {
        return NULL;
    }
}
#ifdef OSG_1_GET_COMPAT
SFReal32            *CameraDecoratorBase::getSFNear           (void)
{
    return this->editSFNear           ();
}
#endif

SFReal32 *CameraDecoratorBase::editSFFar(void)
{
    if(_sfDecoratee.getValue() != NullFC)
    {
        return getDecoratee()->editSFFar();
    }
    else
    {
        return NULL;
    }
}

const SFReal32 *CameraDecoratorBase::getSFFar(void) const
{
    if(_sfDecoratee.getValue() != NullFC)
    {
        return getDecoratee()->getSFFar();
    }
    else
    {
        return NULL;
    }
}
#ifdef OSG_1_GET_COMPAT
SFReal32            *CameraDecoratorBase::getSFFar            (void)
{
    return this->editSFFar            ();
}
#endif






/*------------------------------ access -----------------------------------*/

UInt32 CameraDecoratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DecorateeFieldMask & whichField))
    {
        returnValue += _sfDecoratee.getBinSize();
    }

    return returnValue;
}

void CameraDecoratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DecorateeFieldMask & whichField))
    {
        _sfDecoratee.copyToBin(pMem);
    }
}

void CameraDecoratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DecorateeFieldMask & whichField))
    {
        _sfDecoratee.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

CameraDecoratorBase::CameraDecoratorBase(void) :
    Inherited(),
    _sfDecoratee()
{
}

CameraDecoratorBase::CameraDecoratorBase(const CameraDecoratorBase &source) :
    Inherited(source),
    _sfDecoratee(source._sfDecoratee)
{
}


/*-------------------------- destructors ----------------------------------*/

CameraDecoratorBase::~CameraDecoratorBase(void)
{
}

void CameraDecoratorBase::onCreate(const CameraDecorator *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setBeacon(source->getBeacon());
    }
}

GetFieldHandlePtr CameraDecoratorBase::getHandleBeacon          (void) const
{
    SFNodePtr::GetHandlePtr returnValue(
        new  SFNodePtr::GetHandle(
             &_sfBeacon, 
             this->getType().getFieldDesc(BeaconFieldId)));

    return returnValue;
}

EditFieldHandlePtr CameraDecoratorBase::editHandleBeacon         (void)
{
    SFNodePtr::EditHandlePtr returnValue(
        new  SFNodePtr::EditHandle(
             &_sfBeacon, 
             this->getType().getFieldDesc(BeaconFieldId)));

    returnValue->setSetMethod(boost::bind(&CameraDecorator::setBeacon, this, _1));

    editSField(BeaconFieldMask);

    return returnValue;
}

GetFieldHandlePtr CameraDecoratorBase::getHandleNear            (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfNear, 
             this->getType().getFieldDesc(NearFieldId)));

    return returnValue;
}

EditFieldHandlePtr CameraDecoratorBase::editHandleNear           (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfNear, 
             this->getType().getFieldDesc(NearFieldId)));

    editSField(NearFieldMask);

    return returnValue;
}

GetFieldHandlePtr CameraDecoratorBase::getHandleFar             (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFar, 
             this->getType().getFieldDesc(FarFieldId)));

    return returnValue;
}

EditFieldHandlePtr CameraDecoratorBase::editHandleFar            (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFar, 
             this->getType().getFieldDesc(FarFieldId)));

    editSField(FarFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<CameraDecoratorBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void CameraDecoratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CameraDecorator *>(this)->setBeacon(NullFC);


}

/*------------------------------ get -----------------------------------*/


//! Get the value of the CameraDecorator::_sfBeacon field.
NodePtrConst CameraDecoratorBase::getBeacon(void) const
{
    if(_sfDecoratee.getValue() != NullFC)
    {
        return getDecoratee()->getBeacon();
    }
    else
    {
        return Inherited::getBeacon();
    }
}

//! Set the value of the CameraDecorator::_sfBeacon field.
void CameraDecoratorBase::setBeacon(NodePtrConstArg value)
{
    if(_sfDecoratee.getValue() != NullFC)
    {
        getDecoratee()->setBeacon(value);
    }
    else
    {
//        Inherited::setBeacon(value);
    }
}

//! Get the value of the CameraDecorator::_sfNear field.
Real32 &CameraDecoratorBase::editNear(void)
{
    if(_sfDecoratee.getValue() != NullFC)
    {
        return getDecoratee()->editNear();
    }
    else
    {
        return Inherited::editNear();
    }
}

//! Get the value of the CameraDecorator::_sfNear field.
const Real32 &CameraDecoratorBase::getNear(void) const
{
    if(_sfDecoratee.getValue() != NullFC)
    {
        return getDecoratee()->getNear();
    }
    else
    {
        return Inherited::getNear();
    }
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &CameraDecoratorBase::getNear           (void)
{
    return this->editNear           ();
}
#endif

//! Set the value of the CameraDecorator::_sfNear field.
void CameraDecoratorBase::setNear(const Real32 &value)
{
    if(_sfDecoratee.getValue() != NullFC)
    {
        getDecoratee()->setNear(value);
    }
    else
    {
//        Inherited::setNear(value);
    }
}

//! Get the value of the CameraDecorator::_sfFar field.
Real32 &CameraDecoratorBase::editFar(void)
{
    if(_sfDecoratee.getValue() != NullFC)
    {
        return getDecoratee()->editFar();
    }
    else
    {
        return Inherited::editFar();
    }
}

//! Get the value of the CameraDecorator::_sfFar field.
const Real32 &CameraDecoratorBase::getFar(void) const
{
    if(_sfDecoratee.getValue() != NullFC)
    {
        return getDecoratee()->getFar();
    }
    else
    {
        return Inherited::getFar();
    }
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &CameraDecoratorBase::getFar            (void)
{
    return this->editFar            ();
}
#endif

//! Set the value of the CameraDecorator::_sfFar field.
void CameraDecoratorBase::setFar(const Real32 &value)
{
    if(_sfDecoratee.getValue() != NullFC)
    {
        getDecoratee()->setFar(value);
    }
    else
    {
//        Inherited::setFar(value);
    }
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CameraDecoratorPtr>::_type("CameraDecoratorPtr", "CameraPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CameraDecoratorPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, CameraDecoratorPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, CameraDecoratorPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
