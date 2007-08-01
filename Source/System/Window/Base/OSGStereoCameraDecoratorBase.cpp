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
 **     class StereoCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESTEREOCAMERADECORATORINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGStereoCameraDecoratorBase.h"
#include "OSGStereoCameraDecorator.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::StereoCameraDecorator
    \ingroup PageSystemWindowCameraDecoratorsStereo

    The abstract base class for stereo camera decorators, see \ref
    PageSystemWindowCameraDecoratorsStereo for a description.

    The basic parameters are given by the _sfEyeSeparation and _sfLeftEye fields.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            StereoCameraDecoratorBase::_sfLeftEye
    Flag to distinguish between left and right eye views.
*/

/*! \var Real32          StereoCameraDecoratorBase::_sfEyeSeparation
    The distance between the two eyes.
*/


void StereoCameraDecoratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "leftEye",
        "Flag to distinguish between left and right eye views.\n",
        LeftEyeFieldId, LeftEyeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&StereoCameraDecoratorBase::editHandleLeftEye),
        static_cast<FieldGetMethodSig >(&StereoCameraDecoratorBase::getHandleLeftEye));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "eyeSeparation",
        "The distance between the two eyes.\n",
        EyeSeparationFieldId, EyeSeparationFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&StereoCameraDecoratorBase::editHandleEyeSeparation),
        static_cast<FieldGetMethodSig >(&StereoCameraDecoratorBase::getHandleEyeSeparation));

    oType.addInitialDesc(pDesc);
}


StereoCameraDecoratorBase::TypeObject StereoCameraDecoratorBase::_type(
    StereoCameraDecoratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    StereoCameraDecorator::initMethod,
    (InitalInsertDescFunc) &StereoCameraDecoratorBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"StereoCameraDecorator\"\n"
    "\tparent=\"CameraDecorator\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup PageSystemWindowCameraDecoratorsStereo\n"
    "\n"
    "The abstract base class for stereo camera decorators, see \\ref\n"
    "PageSystemWindowCameraDecoratorsStereo for a description.\n"
    "\n"
    "The basic parameters are given by the _sfEyeSeparation and _sfLeftEye fields.\n"
    "\t<Field\n"
    "\t\tname=\"leftEye\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tFlag to distinguish between left and right eye views.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"eyeSeparation\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe distance between the two eyes.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup PageSystemWindowCameraDecoratorsStereo\n"
    "\n"
    "The abstract base class for stereo camera decorators, see \\ref\n"
    "PageSystemWindowCameraDecoratorsStereo for a description.\n"
    "\n"
    "The basic parameters are given by the _sfEyeSeparation and _sfLeftEye fields.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StereoCameraDecoratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &StereoCameraDecoratorBase::getType(void) const
{
    return _type;
}

UInt32 StereoCameraDecoratorBase::getContainerSize(void) const
{
    return sizeof(StereoCameraDecorator);
}

/*------------------------- decorator get ------------------------------*/


SFBool *StereoCameraDecoratorBase::editSFLeftEye(void)
{
    editSField(LeftEyeFieldMask);

    return &_sfLeftEye;
}

const SFBool *StereoCameraDecoratorBase::getSFLeftEye(void) const
{
    return &_sfLeftEye;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *StereoCameraDecoratorBase::getSFLeftEye        (void)
{
    return this->editSFLeftEye        ();
}
#endif

SFReal32 *StereoCameraDecoratorBase::editSFEyeSeparation(void)
{
    editSField(EyeSeparationFieldMask);

    return &_sfEyeSeparation;
}

const SFReal32 *StereoCameraDecoratorBase::getSFEyeSeparation(void) const
{
    return &_sfEyeSeparation;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *StereoCameraDecoratorBase::getSFEyeSeparation  (void)
{
    return this->editSFEyeSeparation  ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 StereoCameraDecoratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LeftEyeFieldMask & whichField))
    {
        returnValue += _sfLeftEye.getBinSize();
    }
    if(FieldBits::NoField != (EyeSeparationFieldMask & whichField))
    {
        returnValue += _sfEyeSeparation.getBinSize();
    }

    return returnValue;
}

void StereoCameraDecoratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LeftEyeFieldMask & whichField))
    {
        _sfLeftEye.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EyeSeparationFieldMask & whichField))
    {
        _sfEyeSeparation.copyToBin(pMem);
    }
}

void StereoCameraDecoratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LeftEyeFieldMask & whichField))
    {
        _sfLeftEye.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EyeSeparationFieldMask & whichField))
    {
        _sfEyeSeparation.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

StereoCameraDecoratorBase::StereoCameraDecoratorBase(void) :
    Inherited(),
    _sfLeftEye                (),
    _sfEyeSeparation          ()
{
}

StereoCameraDecoratorBase::StereoCameraDecoratorBase(const StereoCameraDecoratorBase &source) :
    Inherited(source),
    _sfLeftEye                (source._sfLeftEye                ),
    _sfEyeSeparation          (source._sfEyeSeparation          )
{
}


/*-------------------------- destructors ----------------------------------*/

StereoCameraDecoratorBase::~StereoCameraDecoratorBase(void)
{
}


GetFieldHandlePtr StereoCameraDecoratorBase::getHandleLeftEye         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfLeftEye, 
             this->getType().getFieldDesc(LeftEyeFieldId)));

    return returnValue;
}

EditFieldHandlePtr StereoCameraDecoratorBase::editHandleLeftEye        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfLeftEye, 
             this->getType().getFieldDesc(LeftEyeFieldId)));

    editSField(LeftEyeFieldMask);

    return returnValue;
}

GetFieldHandlePtr StereoCameraDecoratorBase::getHandleEyeSeparation   (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfEyeSeparation, 
             this->getType().getFieldDesc(EyeSeparationFieldId)));

    return returnValue;
}

EditFieldHandlePtr StereoCameraDecoratorBase::editHandleEyeSeparation  (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfEyeSeparation, 
             this->getType().getFieldDesc(EyeSeparationFieldId)));

    editSField(EyeSeparationFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void StereoCameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<StereoCameraDecoratorBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void StereoCameraDecoratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<StereoCameraDecoratorPtr>::_type("StereoCameraDecoratorPtr", "CameraDecoratorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(StereoCameraDecoratorPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, StereoCameraDecoratorPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, StereoCameraDecoratorPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
