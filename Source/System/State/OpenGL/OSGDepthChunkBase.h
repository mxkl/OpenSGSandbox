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
 **     class DepthChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDEPTHCHUNKBASE_H_
#define _OSGDEPTHCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGBoolFields.h" // Enable type
#include "OSGGLenumFields.h" // Func type
#include "OSGReal32Fields.h" // Near type
#include "OSGReal32Fields.h" // Far type
#include "OSGBoolFields.h" // ReadOnly type

#include "OSGDepthChunkFields.h"

OSG_BEGIN_NAMESPACE

class DepthChunk;

//! \brief DepthChunk Base Class.

class OSG_STATE_DLLMAPPING DepthChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(DepthChunk);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        EnableFieldId = Inherited::NextFieldId,
        FuncFieldId = EnableFieldId + 1,
        NearFieldId = FuncFieldId + 1,
        FarFieldId = NearFieldId + 1,
        ReadOnlyFieldId = FarFieldId + 1,
        NextFieldId = ReadOnlyFieldId + 1
    };

    static const OSG::BitVector EnableFieldMask =
        (TypeTraits<BitVector>::One << EnableFieldId);
    static const OSG::BitVector FuncFieldMask =
        (TypeTraits<BitVector>::One << FuncFieldId);
    static const OSG::BitVector NearFieldMask =
        (TypeTraits<BitVector>::One << NearFieldId);
    static const OSG::BitVector FarFieldMask =
        (TypeTraits<BitVector>::One << FarFieldId);
    static const OSG::BitVector ReadOnlyFieldMask =
        (TypeTraits<BitVector>::One << ReadOnlyFieldId);
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
                  SFBool              *getSFEnable          (void);
#endif
                  SFBool              *editSFEnable         (void);
            const SFBool              *getSFEnable          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFFunc            (void);
#endif
                  SFGLenum            *editSFFunc           (void);
            const SFGLenum            *getSFFunc            (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFNear            (void);
#endif
                  SFReal32            *editSFNear           (void);
            const SFReal32            *getSFNear            (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFFar             (void);
#endif
                  SFReal32            *editSFFar            (void);
            const SFReal32            *getSFFar             (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFReadOnly        (void);
#endif
                  SFBool              *editSFReadOnly       (void);
            const SFBool              *getSFReadOnly        (void) const;


#ifdef OSG_1_GET_COMPAT
                  bool                &getEnable          (void);
#endif
                  bool                &editEnable         (void);
            const bool                &getEnable          (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getFunc            (void);
#endif
                  GLenum              &editFunc           (void);
            const GLenum              &getFunc            (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getNear            (void);
#endif
                  Real32              &editNear           (void);
            const Real32              &getNear            (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getFar             (void);
#endif
                  Real32              &editFar            (void);
            const Real32              &getFar             (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getReadOnly        (void);
#endif
                  bool                &editReadOnly       (void);
            const bool                &getReadOnly        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setEnable         (const bool &value);
            void setFunc           (const GLenum &value);
            void setNear           (const Real32 &value);
            void setFar            (const Real32 &value);
            void setReadOnly       (const bool &value);

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

    static  DepthChunkPtr create     (void);
    static  DepthChunkPtr createEmpty(void);

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

    SFBool            _sfEnable;
    SFGLenum          _sfFunc;
    SFReal32          _sfNear;
    SFReal32          _sfFar;
    SFBool            _sfReadOnly;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DepthChunkBase(void);
    DepthChunkBase(const DepthChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DepthChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleEnable          (void) const;
    EditFieldHandlePtr editHandleEnable         (void);
    GetFieldHandlePtr  getHandleFunc            (void) const;
    EditFieldHandlePtr editHandleFunc           (void);
    GetFieldHandlePtr  getHandleNear            (void) const;
    EditFieldHandlePtr editHandleNear           (void);
    GetFieldHandlePtr  getHandleFar             (void) const;
    EditFieldHandlePtr editHandleFar            (void);
    GetFieldHandlePtr  getHandleReadOnly        (void) const;
    EditFieldHandlePtr editHandleReadOnly       (void);

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

            void execSync (      DepthChunkBase *pFrom,
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
    void operator =(const DepthChunkBase &source);
};

typedef DepthChunkBase *DepthChunkBaseP;

/** Type specific RefPtr type for DepthChunk. */
typedef RefPtr<DepthChunkPtr> DepthChunkRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<DepthChunkBase::isNodeCore>,
    CoredNodePtr<DepthChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        DepthChunkNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGDEPTHCHUNKBASE_H_ */
