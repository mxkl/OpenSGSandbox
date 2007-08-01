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
 **     class TestStage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETESTSTAGEINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGTestStageBase.h"
#include "OSGTestStage.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TestStage
    just dumps a message on traversal and render for testing
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     TestStageBase::_sfMessage
    
*/


void TestStageBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "message",
        "",
        MessageFieldId, MessageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&TestStageBase::editHandleMessage),
        static_cast<FieldGetMethodSig >(&TestStageBase::getHandleMessage));

    oType.addInitialDesc(pDesc);
}


TestStageBase::TypeObject TestStageBase::_type(
    TestStageBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &TestStageBase::createEmpty,
    TestStage::initMethod,
    (InitalInsertDescFunc) &TestStageBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TestStage\"\n"
    "\tparent=\"Stage\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "just dumps a message on traversal and render for testing\n"
    "\t<Field\n"
    "\t\tname=\"message\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "just dumps a message on traversal and render for testing\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TestStageBase::getType(void)
{
    return _type;
}

const FieldContainerType &TestStageBase::getType(void) const
{
    return _type;
}

UInt32 TestStageBase::getContainerSize(void) const
{
    return sizeof(TestStage);
}

/*------------------------- decorator get ------------------------------*/


SFString *TestStageBase::editSFMessage(void)
{
    editSField(MessageFieldMask);

    return &_sfMessage;
}

const SFString *TestStageBase::getSFMessage(void) const
{
    return &_sfMessage;
}

#ifdef OSG_1_GET_COMPAT
SFString            *TestStageBase::getSFMessage        (void)
{
    return this->editSFMessage        ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 TestStageBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MessageFieldMask & whichField))
    {
        returnValue += _sfMessage.getBinSize();
    }

    return returnValue;
}

void TestStageBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MessageFieldMask & whichField))
    {
        _sfMessage.copyToBin(pMem);
    }
}

void TestStageBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MessageFieldMask & whichField))
    {
        _sfMessage.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TestStagePtr TestStageBase::create(void)
{
    TestStagePtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<TestStage::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
TestStagePtr TestStageBase::createEmpty(void)
{
    TestStagePtr returnValue;

    newPtr<TestStage>(returnValue);

    return returnValue;
}

FieldContainerPtr TestStageBase::shallowCopy(void) const
{
    TestStagePtr returnValue;

    newPtr(returnValue, dynamic_cast<const TestStage *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TestStageBase::TestStageBase(void) :
    Inherited(),
    _sfMessage                ()
{
}

TestStageBase::TestStageBase(const TestStageBase &source) :
    Inherited(source),
    _sfMessage                (source._sfMessage                )
{
}


/*-------------------------- destructors ----------------------------------*/

TestStageBase::~TestStageBase(void)
{
}


GetFieldHandlePtr TestStageBase::getHandleMessage         (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfMessage, 
             this->getType().getFieldDesc(MessageFieldId)));

    return returnValue;
}

EditFieldHandlePtr TestStageBase::editHandleMessage        (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfMessage, 
             this->getType().getFieldDesc(MessageFieldId)));

    editSField(MessageFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TestStageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TestStageBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr TestStageBase::createAspectCopy(void) const
{
    TestStagePtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TestStage *>(this));

    return returnValue;
}
#endif

void TestStageBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TestStagePtr>::_type("TestStagePtr", "StagePtr");
#endif


OSG_END_NAMESPACE
