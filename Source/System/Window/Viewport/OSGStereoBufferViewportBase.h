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
 **     class StereoBufferViewport
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSTEREOBUFFERVIEWPORTBASE_H_
#define _OSGSTEREOBUFFERVIEWPORTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGBaseTypes.h"

#include "OSGViewport.h" // Parent

#include "OSGBoolFields.h" // LeftBuffer type
#include "OSGBoolFields.h" // RightBuffer type

#include "OSGStereoBufferViewportFields.h"

OSG_BEGIN_NAMESPACE

class StereoBufferViewport;

//! \brief StereoBufferViewport Base Class.

class OSG_WINDOW_DLLMAPPING StereoBufferViewportBase : public Viewport
{
  public:

    typedef Viewport Inherited;
    typedef Viewport ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(StereoBufferViewport);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        LeftBufferFieldId = Inherited::NextFieldId,
        RightBufferFieldId = LeftBufferFieldId + 1,
        NextFieldId = RightBufferFieldId + 1
    };

    static const OSG::BitVector LeftBufferFieldMask =
        (TypeTraits<BitVector>::One << LeftBufferFieldId);
    static const OSG::BitVector RightBufferFieldMask =
        (TypeTraits<BitVector>::One << RightBufferFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFLeftBuffer      (void);
#endif
                  SFBool              *editSFLeftBuffer     (void);
            const SFBool              *getSFLeftBuffer      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFRightBuffer     (void);
#endif
                  SFBool              *editSFRightBuffer    (void);
            const SFBool              *getSFRightBuffer     (void) const;


#ifdef OSG_1_GET_COMPAT
                  bool                &getLeftBuffer      (void);
#endif
                  bool                &editLeftBuffer     (void);
            const bool                &getLeftBuffer      (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getRightBuffer     (void);
#endif
                  bool                &editRightBuffer    (void);
            const bool                &getRightBuffer     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setLeftBuffer     (const bool &value);
            void setRightBuffer    (const bool &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  StereoBufferViewportPtr create     (void);
    static  StereoBufferViewportPtr createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFBool            _sfLeftBuffer;
    SFBool            _sfRightBuffer;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    StereoBufferViewportBase(void);
    StereoBufferViewportBase(const StereoBufferViewportBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~StereoBufferViewportBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleLeftBuffer      (void) const;
    EditFieldHandlePtr editHandleLeftBuffer     (void);
    GetFieldHandlePtr  getHandleRightBuffer     (void) const;
    EditFieldHandlePtr editHandleRightBuffer    (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      StereoBufferViewportBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainerPtr createAspectCopy(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const StereoBufferViewportBase &source);
};

typedef StereoBufferViewportBase *StereoBufferViewportBaseP;

/** Type specific RefPtr type for StereoBufferViewport. */
typedef RefPtr<StereoBufferViewportPtr> StereoBufferViewportRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<StereoBufferViewportBase::isNodeCore>,
    CoredNodePtr<StereoBufferViewport>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        StereoBufferViewportNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGSTEREOBUFFERVIEWPORTBASE_H_ */
