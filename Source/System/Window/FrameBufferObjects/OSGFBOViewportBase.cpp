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
 **     class FBOViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFBOVIEWPORTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFrameBufferObject.h> // FrameBufferObject Class

#include "OSGFBOViewportBase.h"
#include "OSGFBOViewport.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FBOViewport
    \ingroup GrpSystemWindowViewports

    A viewport using a framebuffer object for output.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var FrameBufferObjectPtr FBOViewportBase::_sfFrameBufferObject
    FramebufferObject to write to.
*/


void FBOViewportBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFFrameBufferObjectPtr::Description(
        SFFrameBufferObjectPtr::getClassType(),
        "frameBufferObject",
        "FramebufferObject to write to.\n",
        FrameBufferObjectFieldId, FrameBufferObjectFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&FBOViewportBase::editHandleFrameBufferObject),
        static_cast<FieldGetMethodSig >(&FBOViewportBase::getHandleFrameBufferObject));

    oType.addInitialDesc(pDesc);
}


FBOViewportBase::TypeObject FBOViewportBase::_type(
    FBOViewportBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &FBOViewportBase::createEmpty,
    FBOViewport::initMethod,
    (InitalInsertDescFunc) &FBOViewportBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FBOViewport\"\n"
    "\tparent=\"Viewport\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowViewports\n"
    "\n"
    "A viewport using a framebuffer object for output.\n"
    "\t<Field\n"
    "\t\tname=\"frameBufferObject\"\n"
    "\t\ttype=\"FrameBufferObjectPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        FramebufferObject to write to.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowViewports\n"
    "\n"
    "A viewport using a framebuffer object for output.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FBOViewportBase::getType(void)
{
    return _type;
}

const FieldContainerType &FBOViewportBase::getType(void) const
{
    return _type;
}

UInt32 FBOViewportBase::getContainerSize(void) const
{
    return sizeof(FBOViewport);
}

/*------------------------- decorator get ------------------------------*/


//! Get the FBOViewport::_sfFrameBufferObject field.
const SFFrameBufferObjectPtr *FBOViewportBase::getSFFrameBufferObject(void) const
{
    return &_sfFrameBufferObject;
}





/*------------------------------ access -----------------------------------*/

UInt32 FBOViewportBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FrameBufferObjectFieldMask & whichField))
    {
        returnValue += _sfFrameBufferObject.getBinSize();
    }

    return returnValue;
}

void FBOViewportBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FrameBufferObjectFieldMask & whichField))
    {
        _sfFrameBufferObject.copyToBin(pMem);
    }
}

void FBOViewportBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FrameBufferObjectFieldMask & whichField))
    {
        _sfFrameBufferObject.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FBOViewportPtr FBOViewportBase::create(void)
{
    FBOViewportPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<FBOViewport::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
FBOViewportPtr FBOViewportBase::createEmpty(void)
{
    FBOViewportPtr returnValue;

    newPtr<FBOViewport>(returnValue);

    return returnValue;
}

FieldContainerPtr FBOViewportBase::shallowCopy(void) const
{
    FBOViewportPtr returnValue;

    newPtr(returnValue, dynamic_cast<const FBOViewport *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

FBOViewportBase::FBOViewportBase(void) :
    Inherited(),
    _sfFrameBufferObject      (NullFC)
{
}

FBOViewportBase::FBOViewportBase(const FBOViewportBase &source) :
    Inherited(source),
    _sfFrameBufferObject      (NullFC)
{
}


/*-------------------------- destructors ----------------------------------*/

FBOViewportBase::~FBOViewportBase(void)
{
}

void FBOViewportBase::onCreate(const FBOViewport *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setFrameBufferObject(source->getFrameBufferObject());
    }
}

GetFieldHandlePtr FBOViewportBase::getHandleFrameBufferObject (void) const
{
    SFFrameBufferObjectPtr::GetHandlePtr returnValue(
        new  SFFrameBufferObjectPtr::GetHandle(
             &_sfFrameBufferObject, 
             this->getType().getFieldDesc(FrameBufferObjectFieldId)));

    return returnValue;
}

EditFieldHandlePtr FBOViewportBase::editHandleFrameBufferObject(void)
{
    SFFrameBufferObjectPtr::EditHandlePtr returnValue(
        new  SFFrameBufferObjectPtr::EditHandle(
             &_sfFrameBufferObject, 
             this->getType().getFieldDesc(FrameBufferObjectFieldId)));

    returnValue->setSetMethod(boost::bind(&FBOViewport::setFrameBufferObject, this, _1));

    editSField(FrameBufferObjectFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FBOViewportBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<FBOViewportBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr FBOViewportBase::createAspectCopy(void) const
{
    FBOViewportPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FBOViewport *>(this));

    return returnValue;
}
#endif

void FBOViewportBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<FBOViewport *>(this)->setFrameBufferObject(NullFC);


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FBOViewportPtr>::_type("FBOViewportPtr", "ViewportPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FBOViewportPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, FBOViewportPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, FBOViewportPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
