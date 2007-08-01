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
 **     class GeoMultiProperty!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGEOMULTIPROPERTYINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGGeoMultiPropertyData.h> // Container Class

#include "OSGGeoMultiPropertyBase.h"
#include "OSGGeoMultiProperty.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GeoMultiProperty
    Class referencing data from a GeoMultiPropertyData.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var GeoMultiPropertyDataPtr GeoMultiPropertyBase::_sfContainer
    The data container to source off of.
*/

/*! \var UInt32          GeoMultiPropertyBase::_sfOffset
    The offset from the start of the container to the first element of this property.
*/

/*! \var GLenum          GeoMultiPropertyBase::_sfIFormat
    The OpenGL format for the data.
*/

/*! \var UInt32          GeoMultiPropertyBase::_sfIDimension
    The dimensionality of the data.
*/

/*! \var UInt32          GeoMultiPropertyBase::_sfISize
    The number of elements in the data.
*/

/*! \var bool            GeoMultiPropertyBase::_sfINormalize
    Whether to normalize integer arguments to 0..1.
*/

/*! \var UInt32          GeoMultiPropertyBase::_sfIStride
    The stride between elements (can be 0).
*/


void GeoMultiPropertyBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGeoMultiPropertyDataPtr::Description(
        SFGeoMultiPropertyDataPtr::getClassType(),
        "container",
        "The data container to source off of.\n",
        ContainerFieldId, ContainerFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeoMultiPropertyBase::editHandleContainer),
        static_cast<FieldGetMethodSig >(&GeoMultiPropertyBase::getHandleContainer));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "offset",
        "The offset from the start of the container to the first element of this property.\n",
        OffsetFieldId, OffsetFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeoMultiPropertyBase::editHandleOffset),
        static_cast<FieldGetMethodSig >(&GeoMultiPropertyBase::getHandleOffset));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "iFormat",
        "The OpenGL format for the data.\n",
        IFormatFieldId, IFormatFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeoMultiPropertyBase::editHandleIFormat),
        static_cast<FieldGetMethodSig >(&GeoMultiPropertyBase::getHandleIFormat));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "iDimension",
        "The dimensionality of the data.\n",
        IDimensionFieldId, IDimensionFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeoMultiPropertyBase::editHandleIDimension),
        static_cast<FieldGetMethodSig >(&GeoMultiPropertyBase::getHandleIDimension));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "iSize",
        "The number of elements in the data.\n",
        ISizeFieldId, ISizeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeoMultiPropertyBase::editHandleISize),
        static_cast<FieldGetMethodSig >(&GeoMultiPropertyBase::getHandleISize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "iNormalize",
        "Whether to normalize integer arguments to 0..1.\n",
        INormalizeFieldId, INormalizeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeoMultiPropertyBase::editHandleINormalize),
        static_cast<FieldGetMethodSig >(&GeoMultiPropertyBase::getHandleINormalize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "iStride",
        "The stride between elements (can be 0).\n",
        IStrideFieldId, IStrideFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeoMultiPropertyBase::editHandleIStride),
        static_cast<FieldGetMethodSig >(&GeoMultiPropertyBase::getHandleIStride));

    oType.addInitialDesc(pDesc);
}


GeoMultiPropertyBase::TypeObject GeoMultiPropertyBase::_type(
    GeoMultiPropertyBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &GeoMultiPropertyBase::createEmpty,
    GeoMultiProperty::initMethod,
    (InitalInsertDescFunc) &GeoMultiPropertyBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GeoMultiProperty\"\n"
    "\tparent=\"GeoVectorProperty\"\n"
    "\tlibrary=\"Drawable\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "Class referencing data from a GeoMultiPropertyData.\n"
    "\t<Field\n"
    "\t\tname=\"container\"\n"
    "\t\ttype=\"GeoMultiPropertyDataPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe data container to source off of.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"offset\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe offset from the start of the container to the first element of this property.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"iFormat\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe OpenGL format for the data.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"iDimension\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe dimensionality of the data.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"iSize\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe number of elements in the data.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"iNormalize\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tWhether to normalize integer arguments to 0..1.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"iStride\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe stride between elements (can be 0).\n"
    "\t</Field>\n"
    "        \n"
    "\n"
    "Class referencing data from a GeoMultiPropertyData container.\n"
    "</FieldContainer>\n",
    "Class referencing data from a GeoMultiPropertyData.\n"
    "\n"
    "\n"
    "\n"
    "\n"
    "\n"
    "\n"
    "\n"
    "\n"
    "\n"
    "Class referencing data from a GeoMultiPropertyData container.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoMultiPropertyBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeoMultiPropertyBase::getType(void) const
{
    return _type;
}

UInt32 GeoMultiPropertyBase::getContainerSize(void) const
{
    return sizeof(GeoMultiProperty);
}

/*------------------------- decorator get ------------------------------*/


//! Get the GeoMultiProperty::_sfContainer field.
const SFGeoMultiPropertyDataPtr *GeoMultiPropertyBase::getSFContainer(void) const
{
    return &_sfContainer;
}

SFUInt32 *GeoMultiPropertyBase::editSFOffset(void)
{
    editSField(OffsetFieldMask);

    return &_sfOffset;
}

const SFUInt32 *GeoMultiPropertyBase::getSFOffset(void) const
{
    return &_sfOffset;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *GeoMultiPropertyBase::getSFOffset         (void)
{
    return this->editSFOffset         ();
}
#endif

SFGLenum *GeoMultiPropertyBase::editSFIFormat(void)
{
    editSField(IFormatFieldMask);

    return &_sfIFormat;
}

const SFGLenum *GeoMultiPropertyBase::getSFIFormat(void) const
{
    return &_sfIFormat;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *GeoMultiPropertyBase::getSFIFormat        (void)
{
    return this->editSFIFormat        ();
}
#endif

SFUInt32 *GeoMultiPropertyBase::editSFIDimension(void)
{
    editSField(IDimensionFieldMask);

    return &_sfIDimension;
}

const SFUInt32 *GeoMultiPropertyBase::getSFIDimension(void) const
{
    return &_sfIDimension;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *GeoMultiPropertyBase::getSFIDimension     (void)
{
    return this->editSFIDimension     ();
}
#endif

SFUInt32 *GeoMultiPropertyBase::editSFISize(void)
{
    editSField(ISizeFieldMask);

    return &_sfISize;
}

const SFUInt32 *GeoMultiPropertyBase::getSFISize(void) const
{
    return &_sfISize;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *GeoMultiPropertyBase::getSFISize          (void)
{
    return this->editSFISize          ();
}
#endif

SFBool *GeoMultiPropertyBase::editSFINormalize(void)
{
    editSField(INormalizeFieldMask);

    return &_sfINormalize;
}

const SFBool *GeoMultiPropertyBase::getSFINormalize(void) const
{
    return &_sfINormalize;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *GeoMultiPropertyBase::getSFINormalize     (void)
{
    return this->editSFINormalize     ();
}
#endif

SFUInt32 *GeoMultiPropertyBase::editSFIStride(void)
{
    editSField(IStrideFieldMask);

    return &_sfIStride;
}

const SFUInt32 *GeoMultiPropertyBase::getSFIStride(void) const
{
    return &_sfIStride;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *GeoMultiPropertyBase::getSFIStride        (void)
{
    return this->editSFIStride        ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 GeoMultiPropertyBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ContainerFieldMask & whichField))
    {
        returnValue += _sfContainer.getBinSize();
    }
    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        returnValue += _sfOffset.getBinSize();
    }
    if(FieldBits::NoField != (IFormatFieldMask & whichField))
    {
        returnValue += _sfIFormat.getBinSize();
    }
    if(FieldBits::NoField != (IDimensionFieldMask & whichField))
    {
        returnValue += _sfIDimension.getBinSize();
    }
    if(FieldBits::NoField != (ISizeFieldMask & whichField))
    {
        returnValue += _sfISize.getBinSize();
    }
    if(FieldBits::NoField != (INormalizeFieldMask & whichField))
    {
        returnValue += _sfINormalize.getBinSize();
    }
    if(FieldBits::NoField != (IStrideFieldMask & whichField))
    {
        returnValue += _sfIStride.getBinSize();
    }

    return returnValue;
}

void GeoMultiPropertyBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ContainerFieldMask & whichField))
    {
        _sfContainer.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        _sfOffset.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IFormatFieldMask & whichField))
    {
        _sfIFormat.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IDimensionFieldMask & whichField))
    {
        _sfIDimension.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ISizeFieldMask & whichField))
    {
        _sfISize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (INormalizeFieldMask & whichField))
    {
        _sfINormalize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IStrideFieldMask & whichField))
    {
        _sfIStride.copyToBin(pMem);
    }
}

void GeoMultiPropertyBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ContainerFieldMask & whichField))
    {
        _sfContainer.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        _sfOffset.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IFormatFieldMask & whichField))
    {
        _sfIFormat.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IDimensionFieldMask & whichField))
    {
        _sfIDimension.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ISizeFieldMask & whichField))
    {
        _sfISize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (INormalizeFieldMask & whichField))
    {
        _sfINormalize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IStrideFieldMask & whichField))
    {
        _sfIStride.copyFromBin(pMem);
    }
}

//! create a new instance of the class
GeoMultiPropertyPtr GeoMultiPropertyBase::create(void)
{
    GeoMultiPropertyPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<GeoMultiProperty::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
GeoMultiPropertyPtr GeoMultiPropertyBase::createEmpty(void)
{
    GeoMultiPropertyPtr returnValue;

    newPtr<GeoMultiProperty>(returnValue);

    return returnValue;
}

FieldContainerPtr GeoMultiPropertyBase::shallowCopy(void) const
{
    GeoMultiPropertyPtr returnValue;

    newPtr(returnValue, dynamic_cast<const GeoMultiProperty *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

GeoMultiPropertyBase::GeoMultiPropertyBase(void) :
    Inherited(),
    _sfContainer              (NullFC),
    _sfOffset                 (UInt32(0)),
    _sfIFormat                (GLenum(0)),
    _sfIDimension             (UInt32(0)),
    _sfISize                  (UInt32(0)),
    _sfINormalize             (bool(false)),
    _sfIStride                (UInt32(0))
{
}

GeoMultiPropertyBase::GeoMultiPropertyBase(const GeoMultiPropertyBase &source) :
    Inherited(source),
    _sfContainer              (NullFC),
    _sfOffset                 (source._sfOffset                 ),
    _sfIFormat                (source._sfIFormat                ),
    _sfIDimension             (source._sfIDimension             ),
    _sfISize                  (source._sfISize                  ),
    _sfINormalize             (source._sfINormalize             ),
    _sfIStride                (source._sfIStride                )
{
}


/*-------------------------- destructors ----------------------------------*/

GeoMultiPropertyBase::~GeoMultiPropertyBase(void)
{
}

void GeoMultiPropertyBase::onCreate(const GeoMultiProperty *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setContainer(source->getContainer());
    }
}

GetFieldHandlePtr GeoMultiPropertyBase::getHandleContainer       (void) const
{
    SFGeoMultiPropertyDataPtr::GetHandlePtr returnValue(
        new  SFGeoMultiPropertyDataPtr::GetHandle(
             &_sfContainer, 
             this->getType().getFieldDesc(ContainerFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeoMultiPropertyBase::editHandleContainer      (void)
{
    SFGeoMultiPropertyDataPtr::EditHandlePtr returnValue(
        new  SFGeoMultiPropertyDataPtr::EditHandle(
             &_sfContainer, 
             this->getType().getFieldDesc(ContainerFieldId)));

    returnValue->setSetMethod(boost::bind(&GeoMultiProperty::setContainer, this, _1));

    editSField(ContainerFieldMask);

    return returnValue;
}

GetFieldHandlePtr GeoMultiPropertyBase::getHandleOffset          (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfOffset, 
             this->getType().getFieldDesc(OffsetFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeoMultiPropertyBase::editHandleOffset         (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfOffset, 
             this->getType().getFieldDesc(OffsetFieldId)));

    editSField(OffsetFieldMask);

    return returnValue;
}

GetFieldHandlePtr GeoMultiPropertyBase::getHandleIFormat         (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfIFormat, 
             this->getType().getFieldDesc(IFormatFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeoMultiPropertyBase::editHandleIFormat        (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfIFormat, 
             this->getType().getFieldDesc(IFormatFieldId)));

    editSField(IFormatFieldMask);

    return returnValue;
}

GetFieldHandlePtr GeoMultiPropertyBase::getHandleIDimension      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfIDimension, 
             this->getType().getFieldDesc(IDimensionFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeoMultiPropertyBase::editHandleIDimension     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfIDimension, 
             this->getType().getFieldDesc(IDimensionFieldId)));

    editSField(IDimensionFieldMask);

    return returnValue;
}

GetFieldHandlePtr GeoMultiPropertyBase::getHandleISize           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfISize, 
             this->getType().getFieldDesc(ISizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeoMultiPropertyBase::editHandleISize          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfISize, 
             this->getType().getFieldDesc(ISizeFieldId)));

    editSField(ISizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr GeoMultiPropertyBase::getHandleINormalize      (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfINormalize, 
             this->getType().getFieldDesc(INormalizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeoMultiPropertyBase::editHandleINormalize     (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfINormalize, 
             this->getType().getFieldDesc(INormalizeFieldId)));

    editSField(INormalizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr GeoMultiPropertyBase::getHandleIStride         (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfIStride, 
             this->getType().getFieldDesc(IStrideFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeoMultiPropertyBase::editHandleIStride        (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfIStride, 
             this->getType().getFieldDesc(IStrideFieldId)));

    editSField(IStrideFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void GeoMultiPropertyBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<GeoMultiPropertyBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr GeoMultiPropertyBase::createAspectCopy(void) const
{
    GeoMultiPropertyPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GeoMultiProperty *>(this));

    return returnValue;
}
#endif

void GeoMultiPropertyBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<GeoMultiProperty *>(this)->setContainer(NullFC);


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GeoMultiPropertyPtr>::_type("GeoMultiPropertyPtr", "GeoVectorPropertyPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GeoMultiPropertyPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, GeoMultiPropertyPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, GeoMultiPropertyPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
