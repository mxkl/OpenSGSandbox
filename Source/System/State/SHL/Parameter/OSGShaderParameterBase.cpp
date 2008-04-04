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
 **     class ShaderParameter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFieldContainer.h> // Parents Class

#include "OSGShaderParameterBase.h"
#include "OSGShaderParameter.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameter
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     ShaderParameterBase::_sfName
    parameter name
*/

/*! \var ParentFieldContainerPtr ShaderParameterBase::_mfParents
    parameter name
*/


void ShaderParameterBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "name",
        "parameter name\n",
        NameFieldId, NameFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShaderParameterBase::editHandleName),
        static_cast<FieldGetMethodSig >(&ShaderParameterBase::getHandleName));

    oType.addInitialDesc(pDesc);

    pDesc = new MFParentFieldContainerPtr::Description(
        MFParentFieldContainerPtr::getClassType(),
        "parents",
        "parameter name\n",
        ParentsFieldId, ParentsFieldMask,
        true,
        Field::MFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ShaderParameterBase::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderParameterBase::invalidGetField));

    oType.addInitialDesc(pDesc);
}


ShaderParameterBase::TypeObject ShaderParameterBase::_type(
    ShaderParameterBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    ShaderParameter::initMethod,
    ShaderParameter::exitMethod,
    (InitalInsertDescFunc) &ShaderParameterBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameter\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "    childfieldparent=\"FieldContainer\"\n"
    "    parentfieldcard=\"multi\"\n"
    "    childFields=\"multi\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"name\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tparameter name\n"
    "\t</Field>\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"parents\"\n"
    "\t\ttype=\"FieldContainer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"none\"\n"
    "        category=\"parentpointer\"\n"
    "\t>\n"
    "\tparameter name\n"
    "\t</Field>\n"
    "\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterBase::getContainerSize(void) const
{
    return sizeof(ShaderParameter);
}

/*------------------------- decorator get ------------------------------*/


SFString *ShaderParameterBase::editSFName(void)
{
    editSField(NameFieldMask);

    return &_sfName;
}

const SFString *ShaderParameterBase::getSFName(void) const
{
    return &_sfName;
}

#ifdef OSG_1_GET_COMPAT
SFString            *ShaderParameterBase::getSFName           (void)
{
    return this->editSFName           ();
}
#endif






/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        returnValue += _sfName.getBinSize();
    }
    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        returnValue += _mfParents.getBinSize();
    }

    return returnValue;
}

void ShaderParameterBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        _mfParents.copyToBin(pMem);
    }
}

void ShaderParameterBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        _mfParents.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

ShaderParameterBase::ShaderParameterBase(void) :
    Inherited(),
    _sfName                   (),
    _mfParents                ()
{
}

ShaderParameterBase::ShaderParameterBase(const ShaderParameterBase &source) :
    Inherited(source),
    _sfName                   (source._sfName                   ),
    _mfParents                ()
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderParameterBase::~ShaderParameterBase(void)
{
}

void ShaderParameterBase::onCreate(const ShaderParameter *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
    }
}

GetFieldHandlePtr ShaderParameterBase::getHandleName            (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfName, 
             this->getType().getFieldDesc(NameFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderParameterBase::editHandleName           (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfName, 
             this->getType().getFieldDesc(NameFieldId)));

    editSField(NameFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderParameterBase::getHandleParents         (void) const
{
    MFParentFieldContainerPtr::GetHandlePtr returnValue(
        new  MFParentFieldContainerPtr::GetHandle(
             &_mfParents, 
             this->getType().getFieldDesc(ParentsFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderParameterBase::editHandleParents        (void)
{
    MFParentFieldContainerPtr::EditHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void ShaderParameterBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderParameterPtr>::_type("ShaderParameterPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterPtr)

OSG_EXPORT_PTR_SFIELD_FULL(FieldContainerPtrSField, 
                           ShaderParameterPtr, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(FieldContainerPtrMField, 
                           ShaderParameterPtr, 
                           0);

DataType &FieldTraits< ShaderParameterPtr, 1 >::getType(void)
{                                                           
    return FieldTraits<ShaderParameterPtr, 0>::getType();
}


OSG_EXPORT_PTR_MFIELD(FieldContainerPtrChildMField,
                      ShaderParameterPtr,       
                      UnrecordedRefCounts,  
                      1);


OSG_END_NAMESPACE
