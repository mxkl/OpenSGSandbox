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
 **     class SkeletonOgreJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGSkeletonOgreJointBase.h"
#include "OSGSkeletonOgreJoint.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SkeletonOgreJoint
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec3f           SkeletonOgreJointBase::_sfTranslate
    
*/

/*! \var Quaternion      SkeletonOgreJointBase::_sfRotate
    
*/

/*! \var Vec3f           SkeletonOgreJointBase::_sfScale
    
*/

/*! \var Vec3f           SkeletonOgreJointBase::_sfInvBindTranslate
    
*/

/*! \var Quaternion      SkeletonOgreJointBase::_sfInvBindRotate
    
*/

/*! \var Vec3f           SkeletonOgreJointBase::_sfInvBindScale
    
*/

/*! \var Vec3f           SkeletonOgreJointBase::_sfOffsetTranslate
    
*/

/*! \var Quaternion      SkeletonOgreJointBase::_sfOffsetRotate
    
*/

/*! \var Vec3f           SkeletonOgreJointBase::_sfOffsetScale
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SkeletonOgreJoint *>::_type("SkeletonOgreJointPtr", "BaseSkeletonJointPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SkeletonOgreJoint *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SkeletonOgreJoint *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SkeletonOgreJoint *,
                           0);

DataType &FieldTraits< SkeletonOgreJoint *, 1 >::getType(void)
{
    return FieldTraits<SkeletonOgreJoint *, 0>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      SkeletonOgreJoint *,
                      UnrecordedRefCountPolicy,
                      1);


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      SkeletonOgreJoint *,
                      UnrecordedRefCountPolicy,
                      1);


DataType &FieldTraits<SkeletonOgreJoint *, 2 >::getType(void)
{
    return FieldTraits<SkeletonOgreJoint *, 0>::getType();
}


OSG_SFIELDTYPE_INST(ParentPointerSField,
                    SkeletonOgreJoint *,
                    NoRefCountPolicy,
                    2);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerSField,
                         SkeletonOgreJoint *,
                         NoRefCountPolicy,
                         2);


OSG_MFIELDTYPE_INST(ParentPointerMField,
                    SkeletonOgreJoint *,
                    NoRefCountPolicy,
                    2);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerMField,
                         SkeletonOgreJoint *,
                         NoRefCountPolicy,
                         2);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SkeletonOgreJointBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "translate",
        "",
        TranslateFieldId, TranslateFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonOgreJoint::editHandleTranslate),
        static_cast<FieldGetMethodSig >(&SkeletonOgreJoint::getHandleTranslate));

    oType.addInitialDesc(pDesc);

    pDesc = new SFQuaternion::Description(
        SFQuaternion::getClassType(),
        "rotate",
        "",
        RotateFieldId, RotateFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonOgreJoint::editHandleRotate),
        static_cast<FieldGetMethodSig >(&SkeletonOgreJoint::getHandleRotate));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "scale",
        "",
        ScaleFieldId, ScaleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonOgreJoint::editHandleScale),
        static_cast<FieldGetMethodSig >(&SkeletonOgreJoint::getHandleScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "invBindTranslate",
        "",
        InvBindTranslateFieldId, InvBindTranslateFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonOgreJoint::editHandleInvBindTranslate),
        static_cast<FieldGetMethodSig >(&SkeletonOgreJoint::getHandleInvBindTranslate));

    oType.addInitialDesc(pDesc);

    pDesc = new SFQuaternion::Description(
        SFQuaternion::getClassType(),
        "invBindRotate",
        "",
        InvBindRotateFieldId, InvBindRotateFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonOgreJoint::editHandleInvBindRotate),
        static_cast<FieldGetMethodSig >(&SkeletonOgreJoint::getHandleInvBindRotate));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "invBindScale",
        "",
        InvBindScaleFieldId, InvBindScaleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonOgreJoint::editHandleInvBindScale),
        static_cast<FieldGetMethodSig >(&SkeletonOgreJoint::getHandleInvBindScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "offsetTranslate",
        "",
        OffsetTranslateFieldId, OffsetTranslateFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonOgreJoint::editHandleOffsetTranslate),
        static_cast<FieldGetMethodSig >(&SkeletonOgreJoint::getHandleOffsetTranslate));

    oType.addInitialDesc(pDesc);

    pDesc = new SFQuaternion::Description(
        SFQuaternion::getClassType(),
        "offsetRotate",
        "",
        OffsetRotateFieldId, OffsetRotateFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonOgreJoint::editHandleOffsetRotate),
        static_cast<FieldGetMethodSig >(&SkeletonOgreJoint::getHandleOffsetRotate));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "offsetScale",
        "",
        OffsetScaleFieldId, OffsetScaleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonOgreJoint::editHandleOffsetScale),
        static_cast<FieldGetMethodSig >(&SkeletonOgreJoint::getHandleOffsetScale));

    oType.addInitialDesc(pDesc);
}


SkeletonOgreJointBase::TypeObject SkeletonOgreJointBase::_type(
    SkeletonOgreJointBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SkeletonOgreJointBase::createEmptyLocal),
    SkeletonOgreJoint::initMethod,
    SkeletonOgreJoint::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SkeletonOgreJoint::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"SkeletonOgreJoint\"\n"
    "   parent=\"BaseSkeletonJoint\"\n"
    "   library=\"Dynamics\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   isNodeCore=\"false\"\n"
    "   childFields=\"both\"\n"
    "   parentFields=\"both\"\n"
    ">\n"
    "  <Field\n"
    "      name=\"translate\"\n"
    "      type=\"Vec3f\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "  >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"rotate\"\n"
    "      type=\"Quaternion\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "  >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"scale\"\n"
    "      type=\"Vec3f\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"1.f, 1.f, 1.f\"\n"
    "  >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "      name=\"invBindTranslate\"\n"
    "      type=\"Vec3f\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "  >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"invBindRotate\"\n"
    "      type=\"Quaternion\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "  >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"invBindScale\"\n"
    "      type=\"Vec3f\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"1.f, 1.f, 1.f\"\n"
    "  >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "      name=\"offsetTranslate\"\n"
    "      type=\"Vec3f\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "  >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"offsetRotate\"\n"
    "      type=\"Quaternion\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "  >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"offsetScale\"\n"
    "      type=\"Vec3f\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"1.f, 1.f, 1.f\"\n"
    "  >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SkeletonOgreJointBase::getType(void)
{
    return _type;
}

const FieldContainerType &SkeletonOgreJointBase::getType(void) const
{
    return _type;
}

UInt32 SkeletonOgreJointBase::getContainerSize(void) const
{
    return sizeof(SkeletonOgreJoint);
}

/*------------------------- decorator get ------------------------------*/


SFVec3f *SkeletonOgreJointBase::editSFTranslate(void)
{
    editSField(TranslateFieldMask);

    return &_sfTranslate;
}

const SFVec3f *SkeletonOgreJointBase::getSFTranslate(void) const
{
    return &_sfTranslate;
}


SFQuaternion *SkeletonOgreJointBase::editSFRotate(void)
{
    editSField(RotateFieldMask);

    return &_sfRotate;
}

const SFQuaternion *SkeletonOgreJointBase::getSFRotate(void) const
{
    return &_sfRotate;
}


SFVec3f *SkeletonOgreJointBase::editSFScale(void)
{
    editSField(ScaleFieldMask);

    return &_sfScale;
}

const SFVec3f *SkeletonOgreJointBase::getSFScale(void) const
{
    return &_sfScale;
}


SFVec3f *SkeletonOgreJointBase::editSFInvBindTranslate(void)
{
    editSField(InvBindTranslateFieldMask);

    return &_sfInvBindTranslate;
}

const SFVec3f *SkeletonOgreJointBase::getSFInvBindTranslate(void) const
{
    return &_sfInvBindTranslate;
}


SFQuaternion *SkeletonOgreJointBase::editSFInvBindRotate(void)
{
    editSField(InvBindRotateFieldMask);

    return &_sfInvBindRotate;
}

const SFQuaternion *SkeletonOgreJointBase::getSFInvBindRotate(void) const
{
    return &_sfInvBindRotate;
}


SFVec3f *SkeletonOgreJointBase::editSFInvBindScale(void)
{
    editSField(InvBindScaleFieldMask);

    return &_sfInvBindScale;
}

const SFVec3f *SkeletonOgreJointBase::getSFInvBindScale(void) const
{
    return &_sfInvBindScale;
}


SFVec3f *SkeletonOgreJointBase::editSFOffsetTranslate(void)
{
    editSField(OffsetTranslateFieldMask);

    return &_sfOffsetTranslate;
}

const SFVec3f *SkeletonOgreJointBase::getSFOffsetTranslate(void) const
{
    return &_sfOffsetTranslate;
}


SFQuaternion *SkeletonOgreJointBase::editSFOffsetRotate(void)
{
    editSField(OffsetRotateFieldMask);

    return &_sfOffsetRotate;
}

const SFQuaternion *SkeletonOgreJointBase::getSFOffsetRotate(void) const
{
    return &_sfOffsetRotate;
}


SFVec3f *SkeletonOgreJointBase::editSFOffsetScale(void)
{
    editSField(OffsetScaleFieldMask);

    return &_sfOffsetScale;
}

const SFVec3f *SkeletonOgreJointBase::getSFOffsetScale(void) const
{
    return &_sfOffsetScale;
}






/*------------------------------ access -----------------------------------*/

UInt32 SkeletonOgreJointBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TranslateFieldMask & whichField))
    {
        returnValue += _sfTranslate.getBinSize();
    }
    if(FieldBits::NoField != (RotateFieldMask & whichField))
    {
        returnValue += _sfRotate.getBinSize();
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        returnValue += _sfScale.getBinSize();
    }
    if(FieldBits::NoField != (InvBindTranslateFieldMask & whichField))
    {
        returnValue += _sfInvBindTranslate.getBinSize();
    }
    if(FieldBits::NoField != (InvBindRotateFieldMask & whichField))
    {
        returnValue += _sfInvBindRotate.getBinSize();
    }
    if(FieldBits::NoField != (InvBindScaleFieldMask & whichField))
    {
        returnValue += _sfInvBindScale.getBinSize();
    }
    if(FieldBits::NoField != (OffsetTranslateFieldMask & whichField))
    {
        returnValue += _sfOffsetTranslate.getBinSize();
    }
    if(FieldBits::NoField != (OffsetRotateFieldMask & whichField))
    {
        returnValue += _sfOffsetRotate.getBinSize();
    }
    if(FieldBits::NoField != (OffsetScaleFieldMask & whichField))
    {
        returnValue += _sfOffsetScale.getBinSize();
    }

    return returnValue;
}

void SkeletonOgreJointBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TranslateFieldMask & whichField))
    {
        _sfTranslate.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RotateFieldMask & whichField))
    {
        _sfRotate.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InvBindTranslateFieldMask & whichField))
    {
        _sfInvBindTranslate.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InvBindRotateFieldMask & whichField))
    {
        _sfInvBindRotate.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InvBindScaleFieldMask & whichField))
    {
        _sfInvBindScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetTranslateFieldMask & whichField))
    {
        _sfOffsetTranslate.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetRotateFieldMask & whichField))
    {
        _sfOffsetRotate.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetScaleFieldMask & whichField))
    {
        _sfOffsetScale.copyToBin(pMem);
    }
}

void SkeletonOgreJointBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TranslateFieldMask & whichField))
    {
        editSField(TranslateFieldMask);
        _sfTranslate.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RotateFieldMask & whichField))
    {
        editSField(RotateFieldMask);
        _sfRotate.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        editSField(ScaleFieldMask);
        _sfScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InvBindTranslateFieldMask & whichField))
    {
        editSField(InvBindTranslateFieldMask);
        _sfInvBindTranslate.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InvBindRotateFieldMask & whichField))
    {
        editSField(InvBindRotateFieldMask);
        _sfInvBindRotate.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InvBindScaleFieldMask & whichField))
    {
        editSField(InvBindScaleFieldMask);
        _sfInvBindScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetTranslateFieldMask & whichField))
    {
        editSField(OffsetTranslateFieldMask);
        _sfOffsetTranslate.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetRotateFieldMask & whichField))
    {
        editSField(OffsetRotateFieldMask);
        _sfOffsetRotate.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetScaleFieldMask & whichField))
    {
        editSField(OffsetScaleFieldMask);
        _sfOffsetScale.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SkeletonOgreJointTransitPtr SkeletonOgreJointBase::createLocal(BitVector bFlags)
{
    SkeletonOgreJointTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SkeletonOgreJoint>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SkeletonOgreJointTransitPtr SkeletonOgreJointBase::createDependent(BitVector bFlags)
{
    SkeletonOgreJointTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SkeletonOgreJoint>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SkeletonOgreJointTransitPtr SkeletonOgreJointBase::create(void)
{
    SkeletonOgreJointTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SkeletonOgreJoint>(tmpPtr);
    }

    return fc;
}

SkeletonOgreJoint *SkeletonOgreJointBase::createEmptyLocal(BitVector bFlags)
{
    SkeletonOgreJoint *returnValue;

    newPtr<SkeletonOgreJoint>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SkeletonOgreJoint *SkeletonOgreJointBase::createEmpty(void)
{
    SkeletonOgreJoint *returnValue;

    newPtr<SkeletonOgreJoint>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SkeletonOgreJointBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SkeletonOgreJoint *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SkeletonOgreJoint *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkeletonOgreJointBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SkeletonOgreJoint *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SkeletonOgreJoint *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkeletonOgreJointBase::shallowCopy(void) const
{
    SkeletonOgreJoint *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SkeletonOgreJoint *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SkeletonOgreJointBase::SkeletonOgreJointBase(void) :
    Inherited(),
    _sfTranslate              (),
    _sfRotate                 (),
    _sfScale                  (Vec3f(1.f, 1.f, 1.f)),
    _sfInvBindTranslate       (),
    _sfInvBindRotate          (),
    _sfInvBindScale           (Vec3f(1.f, 1.f, 1.f)),
    _sfOffsetTranslate        (),
    _sfOffsetRotate           (),
    _sfOffsetScale            (Vec3f(1.f, 1.f, 1.f))
{
}

SkeletonOgreJointBase::SkeletonOgreJointBase(const SkeletonOgreJointBase &source) :
    Inherited(source),
    _sfTranslate              (source._sfTranslate              ),
    _sfRotate                 (source._sfRotate                 ),
    _sfScale                  (source._sfScale                  ),
    _sfInvBindTranslate       (source._sfInvBindTranslate       ),
    _sfInvBindRotate          (source._sfInvBindRotate          ),
    _sfInvBindScale           (source._sfInvBindScale           ),
    _sfOffsetTranslate        (source._sfOffsetTranslate        ),
    _sfOffsetRotate           (source._sfOffsetRotate           ),
    _sfOffsetScale            (source._sfOffsetScale            )
{
}


/*-------------------------- destructors ----------------------------------*/

SkeletonOgreJointBase::~SkeletonOgreJointBase(void)
{
}


GetFieldHandlePtr SkeletonOgreJointBase::getHandleTranslate       (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfTranslate,
             this->getType().getFieldDesc(TranslateFieldId),
             const_cast<SkeletonOgreJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonOgreJointBase::editHandleTranslate      (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfTranslate,
             this->getType().getFieldDesc(TranslateFieldId),
             this));


    editSField(TranslateFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkeletonOgreJointBase::getHandleRotate          (void) const
{
    SFQuaternion::GetHandlePtr returnValue(
        new  SFQuaternion::GetHandle(
             &_sfRotate,
             this->getType().getFieldDesc(RotateFieldId),
             const_cast<SkeletonOgreJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonOgreJointBase::editHandleRotate         (void)
{
    SFQuaternion::EditHandlePtr returnValue(
        new  SFQuaternion::EditHandle(
             &_sfRotate,
             this->getType().getFieldDesc(RotateFieldId),
             this));


    editSField(RotateFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkeletonOgreJointBase::getHandleScale           (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfScale,
             this->getType().getFieldDesc(ScaleFieldId),
             const_cast<SkeletonOgreJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonOgreJointBase::editHandleScale          (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfScale,
             this->getType().getFieldDesc(ScaleFieldId),
             this));


    editSField(ScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkeletonOgreJointBase::getHandleInvBindTranslate (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfInvBindTranslate,
             this->getType().getFieldDesc(InvBindTranslateFieldId),
             const_cast<SkeletonOgreJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonOgreJointBase::editHandleInvBindTranslate(void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfInvBindTranslate,
             this->getType().getFieldDesc(InvBindTranslateFieldId),
             this));


    editSField(InvBindTranslateFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkeletonOgreJointBase::getHandleInvBindRotate   (void) const
{
    SFQuaternion::GetHandlePtr returnValue(
        new  SFQuaternion::GetHandle(
             &_sfInvBindRotate,
             this->getType().getFieldDesc(InvBindRotateFieldId),
             const_cast<SkeletonOgreJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonOgreJointBase::editHandleInvBindRotate  (void)
{
    SFQuaternion::EditHandlePtr returnValue(
        new  SFQuaternion::EditHandle(
             &_sfInvBindRotate,
             this->getType().getFieldDesc(InvBindRotateFieldId),
             this));


    editSField(InvBindRotateFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkeletonOgreJointBase::getHandleInvBindScale    (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfInvBindScale,
             this->getType().getFieldDesc(InvBindScaleFieldId),
             const_cast<SkeletonOgreJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonOgreJointBase::editHandleInvBindScale   (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfInvBindScale,
             this->getType().getFieldDesc(InvBindScaleFieldId),
             this));


    editSField(InvBindScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkeletonOgreJointBase::getHandleOffsetTranslate (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfOffsetTranslate,
             this->getType().getFieldDesc(OffsetTranslateFieldId),
             const_cast<SkeletonOgreJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonOgreJointBase::editHandleOffsetTranslate(void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfOffsetTranslate,
             this->getType().getFieldDesc(OffsetTranslateFieldId),
             this));


    editSField(OffsetTranslateFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkeletonOgreJointBase::getHandleOffsetRotate    (void) const
{
    SFQuaternion::GetHandlePtr returnValue(
        new  SFQuaternion::GetHandle(
             &_sfOffsetRotate,
             this->getType().getFieldDesc(OffsetRotateFieldId),
             const_cast<SkeletonOgreJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonOgreJointBase::editHandleOffsetRotate   (void)
{
    SFQuaternion::EditHandlePtr returnValue(
        new  SFQuaternion::EditHandle(
             &_sfOffsetRotate,
             this->getType().getFieldDesc(OffsetRotateFieldId),
             this));


    editSField(OffsetRotateFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkeletonOgreJointBase::getHandleOffsetScale     (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfOffsetScale,
             this->getType().getFieldDesc(OffsetScaleFieldId),
             const_cast<SkeletonOgreJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonOgreJointBase::editHandleOffsetScale    (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfOffsetScale,
             this->getType().getFieldDesc(OffsetScaleFieldId),
             this));


    editSField(OffsetScaleFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SkeletonOgreJointBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SkeletonOgreJoint *pThis = static_cast<SkeletonOgreJoint *>(this);

    pThis->execSync(static_cast<SkeletonOgreJoint *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SkeletonOgreJointBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SkeletonOgreJoint *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SkeletonOgreJoint *>(pRefAspect),
                  dynamic_cast<const SkeletonOgreJoint *>(this));

    return returnValue;
}
#endif

void SkeletonOgreJointBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE