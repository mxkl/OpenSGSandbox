/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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
 **     class HeadTrackedStereoCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#ifdef WIN32 
#pragma warning(disable: 4355) // turn off 'this' : used in base member initializer list warning
#pragma warning(disable: 4290) // disable exception specification warning
#endif

#include "OSGConfig.h"



#include "OSGNode.h"                    // User Class

#include "OSGHeadTrackedStereoCameraDecoratorBase.h"
#include "OSGHeadTrackedStereoCameraDecorator.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::HeadTrackedStereoCameraDecorator
    The decorator for tracked stereo projections (e.g. HMD's), see \ref
    PageSystemWindowCameraDecoratorsStereoProjection for a description.

    The parameters are defined by the _sfUser field.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Node *          HeadTrackedStereoCameraDecoratorBase::_sfUser
    The coordinate system relative to the camera.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<HeadTrackedStereoCameraDecorator *, nsOSG>::_type(
    "HeadTrackedStereoCameraDecoratorPtr", 
    "StereoCameraDecoratorPtr", 
    HeadTrackedStereoCameraDecorator::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(HeadTrackedStereoCameraDecorator *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           HeadTrackedStereoCameraDecorator *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           HeadTrackedStereoCameraDecorator *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void HeadTrackedStereoCameraDecoratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecNodePtr::Description(
        SFUnrecNodePtr::getClassType(),
        "user",
        "The coordinate system relative to the camera.\n",
        UserFieldId, UserFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&HeadTrackedStereoCameraDecorator::editHandleUser),
        static_cast<FieldGetMethodSig >(&HeadTrackedStereoCameraDecorator::getHandleUser));

    oType.addInitialDesc(pDesc);
}


HeadTrackedStereoCameraDecoratorBase::TypeObject HeadTrackedStereoCameraDecoratorBase::_type(
    HeadTrackedStereoCameraDecoratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&HeadTrackedStereoCameraDecoratorBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&HeadTrackedStereoCameraDecorator::initMethod),
    reinterpret_cast<ExitContainerF>(&HeadTrackedStereoCameraDecorator::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&HeadTrackedStereoCameraDecorator::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"HeadTrackedStereoCameraDecorator\"\n"
    "   parent=\"StereoCameraDecorator\"\n"
    "   library=\"Window\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpWindowCamera\"\n"
    "   >\n"
    "  The decorator for tracked stereo projections (e.g. HMD's), see \\ref\n"
    "  PageSystemWindowCameraDecoratorsStereoProjection for a description.\n"
    "\n"
    "  The parameters are defined by the _sfUser field.\n"
    "\n"
    "  <Field\n"
    "\t name=\"user\"\n"
    "\t type=\"NodePtr\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tThe coordinate system relative to the camera.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "The decorator for tracked stereo projections (e.g. HMD's), see \\ref\n"
    "PageSystemWindowCameraDecoratorsStereoProjection for a description.\n"
    "\n"
    "The parameters are defined by the _sfUser field.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &HeadTrackedStereoCameraDecoratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &HeadTrackedStereoCameraDecoratorBase::getType(void) const
{
    return _type;
}

UInt32 HeadTrackedStereoCameraDecoratorBase::getContainerSize(void) const
{
    return sizeof(HeadTrackedStereoCameraDecorator);
}

/*------------------------- decorator get ------------------------------*/


//! Get the HeadTrackedStereoCameraDecorator::_sfUser field.
const SFUnrecNodePtr *HeadTrackedStereoCameraDecoratorBase::getSFUser(void) const
{
    return &_sfUser;
}

SFUnrecNodePtr      *HeadTrackedStereoCameraDecoratorBase::editSFUser           (void)
{
    editSField(UserFieldMask);

    return &_sfUser;
}

//! Get the value of the HeadTrackedStereoCameraDecorator::_sfUser field.
Node * HeadTrackedStereoCameraDecoratorBase::getUser(void) const
{
    return _sfUser.getValue();
}

//! Set the value of the HeadTrackedStereoCameraDecorator::_sfUser field.
void HeadTrackedStereoCameraDecoratorBase::setUser(Node * const value)
{
    editSField(UserFieldMask);

    _sfUser.setValue(value);
}






/*------------------------------ access -----------------------------------*/

SizeT HeadTrackedStereoCameraDecoratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (UserFieldMask & whichField))
    {
        returnValue += _sfUser.getBinSize();
    }

    return returnValue;
}

void HeadTrackedStereoCameraDecoratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (UserFieldMask & whichField))
    {
        _sfUser.copyToBin(pMem);
    }
}

void HeadTrackedStereoCameraDecoratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (UserFieldMask & whichField))
    {
        editSField(UserFieldMask);
        _sfUser.copyFromBin(pMem);
    }
}

//! create a new instance of the class
HeadTrackedStereoCameraDecoratorTransitPtr HeadTrackedStereoCameraDecoratorBase::createLocal(BitVector bFlags)
{
    HeadTrackedStereoCameraDecoratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<HeadTrackedStereoCameraDecorator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
HeadTrackedStereoCameraDecoratorTransitPtr HeadTrackedStereoCameraDecoratorBase::createDependent(BitVector bFlags)
{
    HeadTrackedStereoCameraDecoratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<HeadTrackedStereoCameraDecorator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
HeadTrackedStereoCameraDecoratorTransitPtr HeadTrackedStereoCameraDecoratorBase::create(void)
{
    HeadTrackedStereoCameraDecoratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<HeadTrackedStereoCameraDecorator>(tmpPtr);
    }

    return fc;
}

HeadTrackedStereoCameraDecorator *HeadTrackedStereoCameraDecoratorBase::createEmptyLocal(BitVector bFlags)
{
    HeadTrackedStereoCameraDecorator *returnValue;

    newPtr<HeadTrackedStereoCameraDecorator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
HeadTrackedStereoCameraDecorator *HeadTrackedStereoCameraDecoratorBase::createEmpty(void)
{
    HeadTrackedStereoCameraDecorator *returnValue;

    newPtr<HeadTrackedStereoCameraDecorator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr HeadTrackedStereoCameraDecoratorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    HeadTrackedStereoCameraDecorator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const HeadTrackedStereoCameraDecorator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr HeadTrackedStereoCameraDecoratorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    HeadTrackedStereoCameraDecorator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const HeadTrackedStereoCameraDecorator *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr HeadTrackedStereoCameraDecoratorBase::shallowCopy(void) const
{
    HeadTrackedStereoCameraDecorator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const HeadTrackedStereoCameraDecorator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

HeadTrackedStereoCameraDecoratorBase::HeadTrackedStereoCameraDecoratorBase(void) :
    Inherited(),
    _sfUser                   (NULL)
{
}

HeadTrackedStereoCameraDecoratorBase::HeadTrackedStereoCameraDecoratorBase(const HeadTrackedStereoCameraDecoratorBase &source) :
    Inherited(source),
    _sfUser                   (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

HeadTrackedStereoCameraDecoratorBase::~HeadTrackedStereoCameraDecoratorBase(void)
{
}

void HeadTrackedStereoCameraDecoratorBase::onCreate(const HeadTrackedStereoCameraDecorator *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        HeadTrackedStereoCameraDecorator *pThis = static_cast<HeadTrackedStereoCameraDecorator *>(this);

        pThis->setUser(source->getUser());
    }
}

GetFieldHandlePtr HeadTrackedStereoCameraDecoratorBase::getHandleUser            (void) const
{
    SFUnrecNodePtr::GetHandlePtr returnValue(
        new  SFUnrecNodePtr::GetHandle(
             &_sfUser,
             this->getType().getFieldDesc(UserFieldId),
             const_cast<HeadTrackedStereoCameraDecoratorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr HeadTrackedStereoCameraDecoratorBase::editHandleUser           (void)
{
    SFUnrecNodePtr::EditHandlePtr returnValue(
        new  SFUnrecNodePtr::EditHandle(
             &_sfUser,
             this->getType().getFieldDesc(UserFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&HeadTrackedStereoCameraDecorator::setUser,
                    static_cast<HeadTrackedStereoCameraDecorator *>(this), _1));

    editSField(UserFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void HeadTrackedStereoCameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    HeadTrackedStereoCameraDecorator *pThis = static_cast<HeadTrackedStereoCameraDecorator *>(this);

    pThis->execSync(static_cast<HeadTrackedStereoCameraDecorator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *HeadTrackedStereoCameraDecoratorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    HeadTrackedStereoCameraDecorator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const HeadTrackedStereoCameraDecorator *>(pRefAspect),
                  dynamic_cast<const HeadTrackedStereoCameraDecorator *>(this));

    return returnValue;
}
#endif

void HeadTrackedStereoCameraDecoratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<HeadTrackedStereoCameraDecorator *>(this)->setUser(NULL);


}


OSG_END_NAMESPACE