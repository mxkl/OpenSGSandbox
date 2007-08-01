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
 **     class TiledQuadTreeTerrain
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTILEDQUADTREETERRAINBASE_H_
#define _OSGTILEDQUADTREETERRAINBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGBaseTypes.h"

#include "OSGMaterialGroup.h" // Parent

#include "OSGImageFields.h" // HeightTiles type
#include "OSGMaterialFields.h" // HeightTextures type
#include "OSGUInt32Fields.h" // SizeX type
#include "OSGUInt32Fields.h" // SizeY type
#include "OSGReal32Fields.h" // HeightScale type
#include "OSGReal32Fields.h" // VertexSpacing type
#include "OSGBoolFields.h" // GeoMorphing type
#include "OSGReal32Fields.h" // Detail type
#include "OSGInt32Fields.h" // CurrentX type
#include "OSGInt32Fields.h" // CurrentY type
#include "OSGInt32Fields.h" // SizeROI type
#include "OSGBoolFields.h" // Update type
#include "OSGBoolFields.h" // UpdateTerrain type
#include "OSGBoolFields.h" // PerPixelLighting type

#include "OSGTiledQuadTreeTerrainFields.h"

OSG_BEGIN_NAMESPACE

class TiledQuadTreeTerrain;

//! \brief TiledQuadTreeTerrain Base Class.

class OSG_DRAWABLE_DLLMAPPING TiledQuadTreeTerrainBase : public MaterialGroup
{
  public:

    typedef MaterialGroup Inherited;
    typedef MaterialGroup ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TiledQuadTreeTerrain);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        HeightTilesFieldId = Inherited::NextFieldId,
        HeightTexturesFieldId = HeightTilesFieldId + 1,
        SizeXFieldId = HeightTexturesFieldId + 1,
        SizeYFieldId = SizeXFieldId + 1,
        HeightScaleFieldId = SizeYFieldId + 1,
        VertexSpacingFieldId = HeightScaleFieldId + 1,
        GeoMorphingFieldId = VertexSpacingFieldId + 1,
        DetailFieldId = GeoMorphingFieldId + 1,
        CurrentXFieldId = DetailFieldId + 1,
        CurrentYFieldId = CurrentXFieldId + 1,
        SizeROIFieldId = CurrentYFieldId + 1,
        UpdateFieldId = SizeROIFieldId + 1,
        UpdateTerrainFieldId = UpdateFieldId + 1,
        PerPixelLightingFieldId = UpdateTerrainFieldId + 1,
        NextFieldId = PerPixelLightingFieldId + 1
    };

    static const OSG::BitVector HeightTilesFieldMask =
        (TypeTraits<BitVector>::One << HeightTilesFieldId);
    static const OSG::BitVector HeightTexturesFieldMask =
        (TypeTraits<BitVector>::One << HeightTexturesFieldId);
    static const OSG::BitVector SizeXFieldMask =
        (TypeTraits<BitVector>::One << SizeXFieldId);
    static const OSG::BitVector SizeYFieldMask =
        (TypeTraits<BitVector>::One << SizeYFieldId);
    static const OSG::BitVector HeightScaleFieldMask =
        (TypeTraits<BitVector>::One << HeightScaleFieldId);
    static const OSG::BitVector VertexSpacingFieldMask =
        (TypeTraits<BitVector>::One << VertexSpacingFieldId);
    static const OSG::BitVector GeoMorphingFieldMask =
        (TypeTraits<BitVector>::One << GeoMorphingFieldId);
    static const OSG::BitVector DetailFieldMask =
        (TypeTraits<BitVector>::One << DetailFieldId);
    static const OSG::BitVector CurrentXFieldMask =
        (TypeTraits<BitVector>::One << CurrentXFieldId);
    static const OSG::BitVector CurrentYFieldMask =
        (TypeTraits<BitVector>::One << CurrentYFieldId);
    static const OSG::BitVector SizeROIFieldMask =
        (TypeTraits<BitVector>::One << SizeROIFieldId);
    static const OSG::BitVector UpdateFieldMask =
        (TypeTraits<BitVector>::One << UpdateFieldId);
    static const OSG::BitVector UpdateTerrainFieldMask =
        (TypeTraits<BitVector>::One << UpdateTerrainFieldId);
    static const OSG::BitVector PerPixelLightingFieldMask =
        (TypeTraits<BitVector>::One << PerPixelLightingFieldId);
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

            const MFImagePtr          *getMFHeightTiles     (void) const;
            const MFMaterialPtr       *getMFHeightTextures  (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFSizeX           (void);
#endif
                  SFUInt32            *editSFSizeX          (void);
            const SFUInt32            *getSFSizeX           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFSizeY           (void);
#endif
                  SFUInt32            *editSFSizeY          (void);
            const SFUInt32            *getSFSizeY           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFHeightScale     (void);
#endif
                  SFReal32            *editSFHeightScale    (void);
            const SFReal32            *getSFHeightScale     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFVertexSpacing   (void);
#endif
                  SFReal32            *editSFVertexSpacing  (void);
            const SFReal32            *getSFVertexSpacing   (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFGeoMorphing     (void);
#endif
                  SFBool              *editSFGeoMorphing    (void);
            const SFBool              *getSFGeoMorphing     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFDetail          (void);
#endif
                  SFReal32            *editSFDetail         (void);
            const SFReal32            *getSFDetail          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFCurrentX        (void);
#endif
                  SFInt32             *editSFCurrentX       (void);
            const SFInt32             *getSFCurrentX        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFCurrentY        (void);
#endif
                  SFInt32             *editSFCurrentY       (void);
            const SFInt32             *getSFCurrentY        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFSizeROI         (void);
#endif
                  SFInt32             *editSFSizeROI        (void);
            const SFInt32             *getSFSizeROI         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFUpdate          (void);
#endif
                  SFBool              *editSFUpdate         (void);
            const SFBool              *getSFUpdate          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFUpdateTerrain   (void);
#endif
                  SFBool              *editSFUpdateTerrain  (void);
            const SFBool              *getSFUpdateTerrain   (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFPerPixelLighting (void);
#endif
                  SFBool              *editSFPerPixelLighting(void);
            const SFBool              *getSFPerPixelLighting (void) const;


                  ImagePtrConst getHeightTiles    (const UInt32 index) const;
            const MFImagePtr          &getHeightTiles    (void) const;

                  MaterialPtrConst getHeightTextures (const UInt32 index) const;
            const MFMaterialPtr       &getHeightTextures (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getSizeX           (void);
#endif
                  UInt32              &editSizeX          (void);
            const UInt32              &getSizeX           (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getSizeY           (void);
#endif
                  UInt32              &editSizeY          (void);
            const UInt32              &getSizeY           (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getHeightScale     (void);
#endif
                  Real32              &editHeightScale    (void);
            const Real32              &getHeightScale     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getVertexSpacing   (void);
#endif
                  Real32              &editVertexSpacing  (void);
            const Real32              &getVertexSpacing   (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getGeoMorphing     (void);
#endif
                  bool                &editGeoMorphing    (void);
            const bool                &getGeoMorphing     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getDetail          (void);
#endif
                  Real32              &editDetail         (void);
            const Real32              &getDetail          (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getCurrentX        (void);
#endif
                  Int32               &editCurrentX       (void);
            const Int32               &getCurrentX        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getCurrentY        (void);
#endif
                  Int32               &editCurrentY       (void);
            const Int32               &getCurrentY        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getSizeROI         (void);
#endif
                  Int32               &editSizeROI        (void);
            const Int32               &getSizeROI         (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getUpdate          (void);
#endif
                  bool                &editUpdate         (void);
            const bool                &getUpdate          (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getUpdateTerrain   (void);
#endif
                  bool                &editUpdateTerrain  (void);
            const bool                &getUpdateTerrain   (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getPerPixelLighting (void);
#endif
                  bool                &editPerPixelLighting(void);
            const bool                &getPerPixelLighting (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSizeX          (const UInt32 &value);
            void setSizeY          (const UInt32 &value);
            void setHeightScale    (const Real32 &value);
            void setVertexSpacing  (const Real32 &value);
            void setGeoMorphing    (const bool &value);
            void setDetail         (const Real32 &value);
            void setCurrentX       (const Int32 &value);
            void setCurrentY       (const Int32 &value);
            void setSizeROI        (const Int32 &value);
            void setUpdate         (const bool &value);
            void setUpdateTerrain  (const bool &value);
            void setPerPixelLighting(const bool &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToHeightTiles           (ImagePtrConstArg value   );
    void assignHeightTiles           (const MFImagePtr        &value);
    void insertIntoHeightTiles      (UInt32                uiIndex,
                                             ImagePtrConstArg value   );
    void replaceInHeightTiles  (UInt32                uiIndex,
                                             ImagePtrConstArg value   );
    void replaceInHeightTiles (ImagePtrConstArg pOldElem,
                                             ImagePtrConstArg pNewElem);
    void removeFromHeightTiles (UInt32                uiIndex );
    void removeFromHeightTiles(ImagePtrConstArg value   );
    void clearHeightTiles            (void                          );


    void pushToHeightTextures           (MaterialPtrConstArg value   );
    void assignHeightTextures           (const MFMaterialPtr     &value);
    void insertIntoHeightTextures      (UInt32                uiIndex,
                                             MaterialPtrConstArg value   );
    void replaceInHeightTextures  (UInt32                uiIndex,
                                             MaterialPtrConstArg value   );
    void replaceInHeightTextures (MaterialPtrConstArg pOldElem,
                                             MaterialPtrConstArg pNewElem);
    void removeFromHeightTextures (UInt32                uiIndex );
    void removeFromHeightTextures(MaterialPtrConstArg value   );
    void clearHeightTextures            (void                          );


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

    static  TiledQuadTreeTerrainPtr create     (void);
    static  TiledQuadTreeTerrainPtr createEmpty(void);

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

    MFImagePtr        _mfHeightTiles;
    MFMaterialPtr     _mfHeightTextures;
    SFUInt32          _sfSizeX;
    SFUInt32          _sfSizeY;
    SFReal32          _sfHeightScale;
    SFReal32          _sfVertexSpacing;
    SFBool            _sfGeoMorphing;
    SFReal32          _sfDetail;
    SFInt32           _sfCurrentX;
    SFInt32           _sfCurrentY;
    SFInt32           _sfSizeROI;
    SFBool            _sfUpdate;
    SFBool            _sfUpdateTerrain;
    SFBool            _sfPerPixelLighting;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TiledQuadTreeTerrainBase(void);
    TiledQuadTreeTerrainBase(const TiledQuadTreeTerrainBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TiledQuadTreeTerrainBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TiledQuadTreeTerrain *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleHeightTiles     (void) const;
    EditFieldHandlePtr editHandleHeightTiles    (void);
    GetFieldHandlePtr  getHandleHeightTextures  (void) const;
    EditFieldHandlePtr editHandleHeightTextures (void);
    GetFieldHandlePtr  getHandleSizeX           (void) const;
    EditFieldHandlePtr editHandleSizeX          (void);
    GetFieldHandlePtr  getHandleSizeY           (void) const;
    EditFieldHandlePtr editHandleSizeY          (void);
    GetFieldHandlePtr  getHandleHeightScale     (void) const;
    EditFieldHandlePtr editHandleHeightScale    (void);
    GetFieldHandlePtr  getHandleVertexSpacing   (void) const;
    EditFieldHandlePtr editHandleVertexSpacing  (void);
    GetFieldHandlePtr  getHandleGeoMorphing     (void) const;
    EditFieldHandlePtr editHandleGeoMorphing    (void);
    GetFieldHandlePtr  getHandleDetail          (void) const;
    EditFieldHandlePtr editHandleDetail         (void);
    GetFieldHandlePtr  getHandleCurrentX        (void) const;
    EditFieldHandlePtr editHandleCurrentX       (void);
    GetFieldHandlePtr  getHandleCurrentY        (void) const;
    EditFieldHandlePtr editHandleCurrentY       (void);
    GetFieldHandlePtr  getHandleSizeROI         (void) const;
    EditFieldHandlePtr editHandleSizeROI        (void);
    GetFieldHandlePtr  getHandleUpdate          (void) const;
    EditFieldHandlePtr editHandleUpdate         (void);
    GetFieldHandlePtr  getHandleUpdateTerrain   (void) const;
    EditFieldHandlePtr editHandleUpdateTerrain  (void);
    GetFieldHandlePtr  getHandlePerPixelLighting (void) const;
    EditFieldHandlePtr editHandlePerPixelLighting(void);

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

            void execSync (      TiledQuadTreeTerrainBase *pFrom,
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
    void operator =(const TiledQuadTreeTerrainBase &source);
};

typedef TiledQuadTreeTerrainBase *TiledQuadTreeTerrainBaseP;

/** Type specific RefPtr type for TiledQuadTreeTerrain. */
typedef RefPtr<TiledQuadTreeTerrainPtr> TiledQuadTreeTerrainRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<TiledQuadTreeTerrainBase::isNodeCore>,
    CoredNodePtr<TiledQuadTreeTerrain>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        TiledQuadTreeTerrainNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGTILEDQUADTREETERRAINBASE_H_ */
