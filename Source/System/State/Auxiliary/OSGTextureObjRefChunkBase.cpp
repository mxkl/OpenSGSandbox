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
 **     class TextureObjRefChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETEXTUREOBJREFCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGTextureObjRefChunkBase.h"
#include "OSGTextureObjRefChunk.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextureObjRefChunk
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var GLenum          TextureObjRefChunkBase::_sfGLId
    glid
*/


void TextureObjRefChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "GLId",
        "glid\n",
        GLIdFieldId, GLIdFieldMask,
        false,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&TextureObjRefChunkBase::editHandleGLId),
        static_cast<FieldGetMethodSig >(&TextureObjRefChunkBase::getHandleGLId));

    oType.addInitialDesc(pDesc);
}


TextureObjRefChunkBase::TypeObject TextureObjRefChunkBase::_type(
    TextureObjRefChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &TextureObjRefChunkBase::createEmpty,
    TextureObjRefChunk::initMethod,
    (InitalInsertDescFunc) &TextureObjRefChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TextureObjRefChunk\"\n"
    "\tparent=\"TextureBaseChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"GLId\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\tfieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\tglid\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureObjRefChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextureObjRefChunkBase::getType(void) const
{
    return _type;
}

UInt32 TextureObjRefChunkBase::getContainerSize(void) const
{
    return sizeof(TextureObjRefChunk);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *TextureObjRefChunkBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFGLenum *TextureObjRefChunkBase::getSFGLId(void) const
{
    return &_sfGLId;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *TextureObjRefChunkBase::getSFGLId           (void)
{
    return this->editSFGLId           ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 TextureObjRefChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }

    return returnValue;
}

void TextureObjRefChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
}

void TextureObjRefChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TextureObjRefChunkPtr TextureObjRefChunkBase::create(void)
{
    TextureObjRefChunkPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<TextureObjRefChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
TextureObjRefChunkPtr TextureObjRefChunkBase::createEmpty(void)
{
    TextureObjRefChunkPtr returnValue;

    newPtr<TextureObjRefChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr TextureObjRefChunkBase::shallowCopy(void) const
{
    TextureObjRefChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const TextureObjRefChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TextureObjRefChunkBase::TextureObjRefChunkBase(void) :
    Inherited(),
    _sfGLId                   (GLenum(0))
{
}

TextureObjRefChunkBase::TextureObjRefChunkBase(const TextureObjRefChunkBase &source) :
    Inherited(source),
    _sfGLId                   (source._sfGLId                   )
{
}


/*-------------------------- destructors ----------------------------------*/

TextureObjRefChunkBase::~TextureObjRefChunkBase(void)
{
}


GetFieldHandlePtr TextureObjRefChunkBase::getHandleGLId            (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfGLId, 
             this->getType().getFieldDesc(GLIdFieldId)));

    return returnValue;
}

EditFieldHandlePtr TextureObjRefChunkBase::editHandleGLId           (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfGLId, 
             this->getType().getFieldDesc(GLIdFieldId)));

    editSField(GLIdFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TextureObjRefChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TextureObjRefChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr TextureObjRefChunkBase::createAspectCopy(void) const
{
    TextureObjRefChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextureObjRefChunk *>(this));

    return returnValue;
}
#endif

void TextureObjRefChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextureObjRefChunkPtr>::_type("TextureObjRefChunkPtr", "TextureBaseChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextureObjRefChunkPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, TextureObjRefChunkPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, TextureObjRefChunkPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
