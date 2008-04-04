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
 **     class ChunkOverrideGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECHUNKOVERRIDEGROUPINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGStateChunk.h> // Chunks Class

#include "OSGChunkOverrideGroupBase.h"
#include "OSGChunkOverrideGroup.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ChunkOverrideGroup
    ChunkOverrideGroup is a simple group node that allows for material chunks
    to be set that will override all chunks stored in materials in the entire 
    subtree. Currently the last chunk override wins (note the difference to
    the material group). This might change in future
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var StateChunkPtr   ChunkOverrideGroupBase::_mfChunks
    
*/


void ChunkOverrideGroupBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecStateChunkPtr::Description(
        MFUnrecStateChunkPtr::getClassType(),
        "chunks",
        "",
        ChunksFieldId, ChunksFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ChunkOverrideGroupBase::editHandleChunks),
        static_cast<FieldGetMethodSig >(&ChunkOverrideGroupBase::getHandleChunks));

    oType.addInitialDesc(pDesc);
}


ChunkOverrideGroupBase::TypeObject ChunkOverrideGroupBase::_type(
    ChunkOverrideGroupBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ChunkOverrideGroupBase::createEmptyLocal,
    ChunkOverrideGroup::initMethod,
    ChunkOverrideGroup::exitMethod,
    (InitalInsertDescFunc) &ChunkOverrideGroupBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ChunkOverrideGroup\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "ChunkOverrideGroup is a simple group node that allows for material chunks\n"
    "to be set that will override all chunks stored in materials in the entire \n"
    "subtree. Currently the last chunk override wins (note the difference to\n"
    "the material group). This might change in future\n"
    "\t<Field\n"
    "\t\tname=\"chunks\"\n"
    "\t\ttype=\"StateChunkPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "        access=\"protected\"\n"
    "    >\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "ChunkOverrideGroup is a simple group node that allows for material chunks\n"
    "to be set that will override all chunks stored in materials in the entire \n"
    "subtree. Currently the last chunk override wins (note the difference to\n"
    "the material group). This might change in future\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ChunkOverrideGroupBase::getType(void)
{
    return _type;
}

const FieldContainerType &ChunkOverrideGroupBase::getType(void) const
{
    return _type;
}

UInt32 ChunkOverrideGroupBase::getContainerSize(void) const
{
    return sizeof(ChunkOverrideGroup);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ChunkOverrideGroup::_mfChunks field.
const MFUnrecStateChunkPtr *ChunkOverrideGroupBase::getMFChunks(void) const
{
    return &_mfChunks;
}



void ChunkOverrideGroupBase::pushToChunks(StateChunkPtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(ChunksFieldMask, _mfChunks);

    //addRef(value);

    _mfChunks.push_back(value);
}

void ChunkOverrideGroupBase::assignChunks   (const MFUnrecStateChunkPtr &value)
{
    MFUnrecStateChunkPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecStateChunkPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<ChunkOverrideGroup *>(this)->clearChunks();

    while(elemIt != elemEnd)
    {
        this->pushToChunks(*elemIt);

        ++elemIt;
    }
}

void ChunkOverrideGroupBase::insertIntoChunks(UInt32                uiIndex,
                                                   StateChunkPtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(ChunksFieldMask, _mfChunks);

    MFUnrecStateChunkPtr::iterator fieldIt = _mfChunks.begin();

    //addRef(value);

    fieldIt += uiIndex;

    _mfChunks.insert(fieldIt, value);
}

void ChunkOverrideGroupBase::replaceInChunks(UInt32                uiIndex,
                                                       StateChunkPtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfChunks.size())
        return;

    editMField(ChunksFieldMask, _mfChunks);


//    addRef(value);
//    subRef(_mfChunks[uiIndex]);

//    _mfChunks[uiIndex] = value;

      _mfChunks.replace(uiIndex, value);
}

void ChunkOverrideGroupBase::replaceInChunks(StateChunkPtrConstArg pOldElem,
                                                        StateChunkPtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfChunks.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ChunksFieldMask, _mfChunks);

//        MFStateChunkPtr::iterator fieldIt = _mfChunks.begin();

//        fieldIt += elemIdx;
//        addRef(pNewElem);
//        subRef(pOldElem);

//        (*fieldIt) = pNewElem;
          _mfChunks.replace(elemIdx, pNewElem);
    }
}

void ChunkOverrideGroupBase::removeFromChunks(UInt32 uiIndex)
{
    if(uiIndex < _mfChunks.size())
    {
        editMField(ChunksFieldMask, _mfChunks);

        MFUnrecStateChunkPtr::iterator fieldIt = _mfChunks.begin();

        fieldIt += uiIndex;

        //subRef(*fieldIt);

        _mfChunks.erase(fieldIt);
    }
}

void ChunkOverrideGroupBase::removeFromChunks(StateChunkPtrConstArg value)
{
    Int32 iElemIdx = _mfChunks.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ChunksFieldMask, _mfChunks);

        MFUnrecStateChunkPtr::iterator fieldIt = _mfChunks.begin();

        fieldIt += iElemIdx;

        //subRef(*fieldIt);

        _mfChunks.erase(fieldIt);
    }
}
void ChunkOverrideGroupBase::clearChunks(void)
{
    editMField(ChunksFieldMask, _mfChunks);


    _mfChunks.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 ChunkOverrideGroupBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        returnValue += _mfChunks.getBinSize();
    }

    return returnValue;
}

void ChunkOverrideGroupBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyToBin(pMem);
    }
}

void ChunkOverrideGroupBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ChunkOverrideGroupTransitPtr ChunkOverrideGroupBase::create(void)
{
    ChunkOverrideGroupTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ChunkOverrideGroup>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ChunkOverrideGroupTransitPtr ChunkOverrideGroupBase::createLocal(BitVector bFlags)
{
    ChunkOverrideGroupTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ChunkOverrideGroup>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ChunkOverrideGroupPtr ChunkOverrideGroupBase::createEmpty(void)
{
    ChunkOverrideGroupPtr returnValue;

    newPtr<ChunkOverrideGroup>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

ChunkOverrideGroupPtr ChunkOverrideGroupBase::createEmptyLocal(BitVector bFlags)
{
    ChunkOverrideGroupPtr returnValue;

    newPtr<ChunkOverrideGroup>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ChunkOverrideGroupBase::shallowCopy(void) const
{
    ChunkOverrideGroupPtr tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const ChunkOverrideGroup *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr ChunkOverrideGroupBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ChunkOverrideGroupPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ChunkOverrideGroup *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ChunkOverrideGroupBase::ChunkOverrideGroupBase(void) :
    Inherited(),
    _mfChunks                 ()
{
}

ChunkOverrideGroupBase::ChunkOverrideGroupBase(const ChunkOverrideGroupBase &source) :
    Inherited(source),
    _mfChunks                 ()
{
}


/*-------------------------- destructors ----------------------------------*/

ChunkOverrideGroupBase::~ChunkOverrideGroupBase(void)
{
}

void ChunkOverrideGroupBase::onCreate(const ChunkOverrideGroup *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFUnrecStateChunkPtr::const_iterator ChunksIt  =
            source->_mfChunks.begin();
        MFUnrecStateChunkPtr::const_iterator ChunksEnd =
            source->_mfChunks.end  ();

        while(ChunksIt != ChunksEnd)
        {
            this->pushToChunks(*ChunksIt);

            ++ChunksIt;
        }
    }
}

GetFieldHandlePtr ChunkOverrideGroupBase::getHandleChunks          (void) const
{
    MFUnrecStateChunkPtr::GetHandlePtr returnValue(
        new  MFUnrecStateChunkPtr::GetHandle(
             &_mfChunks, 
             this->getType().getFieldDesc(ChunksFieldId)));

    return returnValue;
}

EditFieldHandlePtr ChunkOverrideGroupBase::editHandleChunks         (void)
{
    MFUnrecStateChunkPtr::EditHandlePtr returnValue(
        new  MFUnrecStateChunkPtr::EditHandle(
             &_mfChunks, 
             this->getType().getFieldDesc(ChunksFieldId)));

    returnValue->setAddMethod(boost::bind(&ChunkOverrideGroup::pushToChunks, 
                              static_cast<ChunkOverrideGroup *>(this), _1));

    editMField(ChunksFieldMask, _mfChunks);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ChunkOverrideGroupBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ChunkOverrideGroupBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ChunkOverrideGroupBase::createAspectCopy(void) const
{
    ChunkOverrideGroupPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ChunkOverrideGroup *>(this));

    return returnValue;
}
#endif

void ChunkOverrideGroupBase::resolveLinks(void)
{
    Inherited::resolveLinks();


    static_cast<ChunkOverrideGroup *>(this)->clearChunks();
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ChunkOverrideGroupPtr>::_type("ChunkOverrideGroupPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ChunkOverrideGroupPtr)

OSG_EXPORT_PTR_SFIELD_FULL(FieldContainerPtrSField, 
                           ChunkOverrideGroupPtr, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(FieldContainerPtrMField, 
                           ChunkOverrideGroupPtr, 
                           0);

OSG_END_NAMESPACE
