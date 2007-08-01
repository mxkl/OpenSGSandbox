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
 **     class GeoProperty!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGEOPROPERTYINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGLEXT.h>                     // Usage default header


#include "OSGGeoPropertyBase.h"
#include "OSGGeoProperty.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GeoProperty
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            GeoPropertyBase::_sfUseVBO
    The id used to register with the Window, 0 if not set up yet.
*/

/*! \var UInt32          GeoPropertyBase::_sfGLId
    The id used to register with the Window, 0 if not set up yet.
*/

/*! \var Int32           GeoPropertyBase::_sfUsage
    The usage pattern, only valid for VBO use.
*/


void GeoPropertyBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "useVBO",
        "The id used to register with the Window, 0 if not set up yet.\n",
        UseVBOFieldId, UseVBOFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeoPropertyBase::editHandleUseVBO),
        static_cast<FieldGetMethodSig >(&GeoPropertyBase::getHandleUseVBO));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "GLId",
        "The id used to register with the Window, 0 if not set up yet.\n",
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&GeoPropertyBase::editHandleGLId),
        static_cast<FieldGetMethodSig >(&GeoPropertyBase::getHandleGLId));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "usage",
        "The usage pattern, only valid for VBO use.\n",
        UsageFieldId, UsageFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeoPropertyBase::editHandleUsage),
        static_cast<FieldGetMethodSig >(&GeoPropertyBase::getHandleUsage));

    oType.addInitialDesc(pDesc);
}


GeoPropertyBase::TypeObject GeoPropertyBase::_type(
    GeoPropertyBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    GeoProperty::initMethod,
    (InitalInsertDescFunc) &GeoPropertyBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GeoProperty\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"Drawable\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"useVBO\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe id used to register with the Window, 0 if not set up yet.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"GLId\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tfieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\tThe id used to register with the Window, 0 if not set up yet.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"usage\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"GL_STATIC_DRAW_ARB\"\n"
    "                defaultHeader=\"&lt;OSGGLEXT.h&gt;\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\tThe usage pattern, only valid for VBO use.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoPropertyBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeoPropertyBase::getType(void) const
{
    return _type;
}

UInt32 GeoPropertyBase::getContainerSize(void) const
{
    return sizeof(GeoProperty);
}

/*------------------------- decorator get ------------------------------*/


SFBool *GeoPropertyBase::editSFUseVBO(void)
{
    editSField(UseVBOFieldMask);

    return &_sfUseVBO;
}

const SFBool *GeoPropertyBase::getSFUseVBO(void) const
{
    return &_sfUseVBO;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *GeoPropertyBase::getSFUseVBO         (void)
{
    return this->editSFUseVBO         ();
}
#endif

SFUInt32 *GeoPropertyBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFUInt32 *GeoPropertyBase::getSFGLId(void) const
{
    return &_sfGLId;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *GeoPropertyBase::getSFGLId           (void)
{
    return this->editSFGLId           ();
}
#endif

SFInt32 *GeoPropertyBase::editSFUsage(void)
{
    editSField(UsageFieldMask);

    return &_sfUsage;
}

const SFInt32 *GeoPropertyBase::getSFUsage(void) const
{
    return &_sfUsage;
}

#ifdef OSG_1_GET_COMPAT
SFInt32             *GeoPropertyBase::getSFUsage          (void)
{
    return this->editSFUsage          ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 GeoPropertyBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (UseVBOFieldMask & whichField))
    {
        returnValue += _sfUseVBO.getBinSize();
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }
    if(FieldBits::NoField != (UsageFieldMask & whichField))
    {
        returnValue += _sfUsage.getBinSize();
    }

    return returnValue;
}

void GeoPropertyBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (UseVBOFieldMask & whichField))
    {
        _sfUseVBO.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UsageFieldMask & whichField))
    {
        _sfUsage.copyToBin(pMem);
    }
}

void GeoPropertyBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (UseVBOFieldMask & whichField))
    {
        _sfUseVBO.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UsageFieldMask & whichField))
    {
        _sfUsage.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

GeoPropertyBase::GeoPropertyBase(void) :
    Inherited(),
    _sfUseVBO                 (bool(false)),
    _sfGLId                   (UInt32(0)),
    _sfUsage                  (Int32(GL_STATIC_DRAW_ARB))
{
}

GeoPropertyBase::GeoPropertyBase(const GeoPropertyBase &source) :
    Inherited(source),
    _sfUseVBO                 (source._sfUseVBO                 ),
    _sfGLId                   (source._sfGLId                   ),
    _sfUsage                  (source._sfUsage                  )
{
}


/*-------------------------- destructors ----------------------------------*/

GeoPropertyBase::~GeoPropertyBase(void)
{
}


GetFieldHandlePtr GeoPropertyBase::getHandleUseVBO          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfUseVBO, 
             this->getType().getFieldDesc(UseVBOFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeoPropertyBase::editHandleUseVBO         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfUseVBO, 
             this->getType().getFieldDesc(UseVBOFieldId)));

    editSField(UseVBOFieldMask);

    return returnValue;
}

GetFieldHandlePtr GeoPropertyBase::getHandleGLId            (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGLId, 
             this->getType().getFieldDesc(GLIdFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeoPropertyBase::editHandleGLId           (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGLId, 
             this->getType().getFieldDesc(GLIdFieldId)));

    editSField(GLIdFieldMask);

    return returnValue;
}

GetFieldHandlePtr GeoPropertyBase::getHandleUsage           (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfUsage, 
             this->getType().getFieldDesc(UsageFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeoPropertyBase::editHandleUsage          (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfUsage, 
             this->getType().getFieldDesc(UsageFieldId)));

    editSField(UsageFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void GeoPropertyBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<GeoPropertyBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void GeoPropertyBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GeoPropertyPtr>::_type("GeoPropertyPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GeoPropertyPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, GeoPropertyPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, GeoPropertyPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
