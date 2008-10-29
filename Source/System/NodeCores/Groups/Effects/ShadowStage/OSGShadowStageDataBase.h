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
 **     class ShadowStageData
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADOWSTAGEDATABASE_H_
#define _OSGSHADOWSTAGEDATABASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

#include "OSGBaseTypes.h"

#include "OSGStageData.h" // Parent

#include "OSGChunkMaterialFields.h" // ToneMappingMaterial type
#include "OSGFrameBufferObjectFields.h" // BlurRenderTarget type
#include "OSGChunkMaterialFields.h" // BlurMaterial type
#include "OSGSHLChunkFields.h" // HBlurShader type
#include "OSGSHLChunkFields.h" // VBlurShader type
#include "OSGUInt32Fields.h" // Width type
#include "OSGUInt32Fields.h" // Height type
#include "OSGFrameBufferObjectFields.h" // ShrinkRenderTarget type
#include "OSGChunkMaterialFields.h" // ShrinkMaterial type

#include "OSGShadowStageDataFields.h"

OSG_BEGIN_NAMESPACE

class ShadowStageData;

//! \brief ShadowStageData Base Class.

class OSG_EFFECTGROUPS_DLLMAPPING ShadowStageDataBase : public StageData
{
  public:

    typedef StageData Inherited;
    typedef StageData ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ShadowStageData);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ToneMappingMaterialFieldId = Inherited::NextFieldId,
        BlurRenderTargetFieldId = ToneMappingMaterialFieldId + 1,
        BlurMaterialFieldId = BlurRenderTargetFieldId + 1,
        HBlurShaderFieldId = BlurMaterialFieldId + 1,
        VBlurShaderFieldId = HBlurShaderFieldId + 1,
        WidthFieldId = VBlurShaderFieldId + 1,
        HeightFieldId = WidthFieldId + 1,
        ShrinkRenderTargetFieldId = HeightFieldId + 1,
        ShrinkMaterialFieldId = ShrinkRenderTargetFieldId + 1,
        NextFieldId = ShrinkMaterialFieldId + 1
    };

    static const OSG::BitVector ToneMappingMaterialFieldMask =
        (TypeTraits<BitVector>::One << ToneMappingMaterialFieldId);
    static const OSG::BitVector BlurRenderTargetFieldMask =
        (TypeTraits<BitVector>::One << BlurRenderTargetFieldId);
    static const OSG::BitVector BlurMaterialFieldMask =
        (TypeTraits<BitVector>::One << BlurMaterialFieldId);
    static const OSG::BitVector HBlurShaderFieldMask =
        (TypeTraits<BitVector>::One << HBlurShaderFieldId);
    static const OSG::BitVector VBlurShaderFieldMask =
        (TypeTraits<BitVector>::One << VBlurShaderFieldId);
    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask =
        (TypeTraits<BitVector>::One << HeightFieldId);
    static const OSG::BitVector ShrinkRenderTargetFieldMask =
        (TypeTraits<BitVector>::One << ShrinkRenderTargetFieldId);
    static const OSG::BitVector ShrinkMaterialFieldMask =
        (TypeTraits<BitVector>::One << ShrinkMaterialFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecChunkMaterialPtr SFToneMappingMaterialType;
    typedef SFUnrecFrameBufferObjectPtr SFBlurRenderTargetType;
    typedef SFUnrecChunkMaterialPtr SFBlurMaterialType;
    typedef SFUnrecSHLChunkPtr SFHBlurShaderType;
    typedef SFUnrecSHLChunkPtr SFVBlurShaderType;
    typedef SFUInt32          SFWidthType;
    typedef SFUInt32          SFHeightType;
    typedef SFUnrecFrameBufferObjectPtr SFShrinkRenderTargetType;
    typedef SFUnrecChunkMaterialPtr SFShrinkMaterialType;

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

            const SFUnrecChunkMaterialPtr *getSFToneMappingMaterial(void) const;
                  SFUnrecChunkMaterialPtr *editSFToneMappingMaterial(void);
            const SFUnrecFrameBufferObjectPtr *getSFBlurRenderTarget(void) const;
                  SFUnrecFrameBufferObjectPtr *editSFBlurRenderTarget(void);
            const SFUnrecChunkMaterialPtr *getSFBlurMaterial   (void) const;
                  SFUnrecChunkMaterialPtr *editSFBlurMaterial   (void);
            const SFUnrecSHLChunkPtr  *getSFHBlurShader    (void) const;
                  SFUnrecSHLChunkPtr  *editSFHBlurShader    (void);
            const SFUnrecSHLChunkPtr  *getSFVBlurShader    (void) const;
                  SFUnrecSHLChunkPtr  *editSFVBlurShader    (void);

                  SFUInt32            *editSFWidth          (void);
            const SFUInt32            *getSFWidth           (void) const;

                  SFUInt32            *editSFHeight         (void);
            const SFUInt32            *getSFHeight          (void) const;
            const SFUnrecFrameBufferObjectPtr *getSFShrinkRenderTarget(void) const;
                  SFUnrecFrameBufferObjectPtr *editSFShrinkRenderTarget(void);
            const SFUnrecChunkMaterialPtr *getSFShrinkMaterial (void) const;
                  SFUnrecChunkMaterialPtr *editSFShrinkMaterial (void);


                  ChunkMaterial * getToneMappingMaterial(void) const;

                  FrameBufferObject * getBlurRenderTarget(void) const;

                  ChunkMaterial * getBlurMaterial   (void) const;

                  SHLChunk * getHBlurShader    (void) const;

                  SHLChunk * getVBlurShader    (void) const;

                  UInt32              &editWidth          (void);
                  UInt32               getWidth           (void) const;

                  UInt32              &editHeight         (void);
                  UInt32               getHeight          (void) const;

                  FrameBufferObject * getShrinkRenderTarget(void) const;

                  ChunkMaterial * getShrinkMaterial (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setToneMappingMaterial(ChunkMaterial * const value);
            void setBlurRenderTarget(FrameBufferObject * const value);
            void setBlurMaterial   (ChunkMaterial * const value);
            void setHBlurShader    (SHLChunk * const value);
            void setVBlurShader    (SHLChunk * const value);
            void setWidth          (const UInt32 value);
            void setHeight         (const UInt32 value);
            void setShrinkRenderTarget(FrameBufferObject * const value);
            void setShrinkMaterial (ChunkMaterial * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

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

    static  ShadowStageDataTransitPtr  create          (void);
    static  ShadowStageData           *createEmpty     (void);

    static  ShadowStageDataTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ShadowStageData            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ShadowStageDataTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecChunkMaterialPtr _sfToneMappingMaterial;
    SFUnrecFrameBufferObjectPtr _sfBlurRenderTarget;
    SFUnrecChunkMaterialPtr _sfBlurMaterial;
    SFUnrecSHLChunkPtr _sfHBlurShader;
    SFUnrecSHLChunkPtr _sfVBlurShader;
    SFUInt32          _sfWidth;
    SFUInt32          _sfHeight;
    SFUnrecFrameBufferObjectPtr _sfShrinkRenderTarget;
    SFUnrecChunkMaterialPtr _sfShrinkMaterial;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ShadowStageDataBase(void);
    ShadowStageDataBase(const ShadowStageDataBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ShadowStageDataBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ShadowStageData *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleToneMappingMaterial (void) const;
    EditFieldHandlePtr editHandleToneMappingMaterial(void);
    GetFieldHandlePtr  getHandleBlurRenderTarget (void) const;
    EditFieldHandlePtr editHandleBlurRenderTarget(void);
    GetFieldHandlePtr  getHandleBlurMaterial    (void) const;
    EditFieldHandlePtr editHandleBlurMaterial   (void);
    GetFieldHandlePtr  getHandleHBlurShader     (void) const;
    EditFieldHandlePtr editHandleHBlurShader    (void);
    GetFieldHandlePtr  getHandleVBlurShader     (void) const;
    EditFieldHandlePtr editHandleVBlurShader    (void);
    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);
    GetFieldHandlePtr  getHandleHeight          (void) const;
    EditFieldHandlePtr editHandleHeight         (void);
    GetFieldHandlePtr  getHandleShrinkRenderTarget (void) const;
    EditFieldHandlePtr editHandleShrinkRenderTarget(void);
    GetFieldHandlePtr  getHandleShrinkMaterial  (void) const;
    EditFieldHandlePtr editHandleShrinkMaterial (void);

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

            void execSync (      ShadowStageDataBase *pFrom,
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
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
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
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ShadowStageDataBase &source);
};

typedef ShadowStageDataBase *ShadowStageDataBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSHADOWSTAGEDATABASE_H_ */