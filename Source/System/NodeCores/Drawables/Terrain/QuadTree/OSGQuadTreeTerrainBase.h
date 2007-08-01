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
 **     class QuadTreeTerrain
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGQUADTREETERRAINBASE_H_
#define _OSGQUADTREETERRAINBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGBaseTypes.h"

#include "OSGGeometry.h" // Parent

#include "OSGImageFields.h" // HeightData type
#include "OSGReal32Fields.h" // HeightScale type
#include "OSGReal32Fields.h" // HeightError type
#include "OSGReal32Fields.h" // HeightQuad type
#include "OSGUInt32Fields.h" // Width type
#include "OSGUInt32Fields.h" // Level type
#include "OSGReal32Fields.h" // Detail type
#include "OSGInt32Fields.h" // BorderDetail type
#include "OSGReal32Fields.h" // VertexSpacing type
#include "OSGGeoVectorPropertyFields.h" // HeightVertices type
#include "OSGBoolFields.h" // GeoMorphing type
#include "OSGPnt3fFields.h" // BoundMin type
#include "OSGPnt3fFields.h" // BoundMax type
#include "OSGPnt3fFields.h" // EyePoint type
#include "OSGReal32Fields.h" // EyeHeight type
#include "OSGBoolFields.h" // EyePointValid type
#include "OSGReal32Fields.h" // OriginX type
#include "OSGReal32Fields.h" // OriginY type
#include "OSGReal32Fields.h" // OriginTexX type
#include "OSGReal32Fields.h" // OriginTexY type
#include "OSGReal32Fields.h" // TexSpacing type
#include "OSGReal32Fields.h" // TexYSpacing type
#include "OSGBoolFields.h" // UpdateTerrain type
#include "OSGBoolFields.h" // PerPixelLighting type

#include "OSGQuadTreeTerrainFields.h"

OSG_BEGIN_NAMESPACE

class QuadTreeTerrain;

//! \brief QuadTreeTerrain Base Class.

class OSG_DRAWABLE_DLLMAPPING QuadTreeTerrainBase : public Geometry
{
  public:

    typedef Geometry Inherited;
    typedef Geometry ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(QuadTreeTerrain);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        HeightDataFieldId = Inherited::NextFieldId,
        HeightScaleFieldId = HeightDataFieldId + 1,
        HeightErrorFieldId = HeightScaleFieldId + 1,
        HeightQuadFieldId = HeightErrorFieldId + 1,
        WidthFieldId = HeightQuadFieldId + 1,
        LevelFieldId = WidthFieldId + 1,
        DetailFieldId = LevelFieldId + 1,
        BorderDetailFieldId = DetailFieldId + 1,
        VertexSpacingFieldId = BorderDetailFieldId + 1,
        HeightVerticesFieldId = VertexSpacingFieldId + 1,
        GeoMorphingFieldId = HeightVerticesFieldId + 1,
        BoundMinFieldId = GeoMorphingFieldId + 1,
        BoundMaxFieldId = BoundMinFieldId + 1,
        EyePointFieldId = BoundMaxFieldId + 1,
        EyeHeightFieldId = EyePointFieldId + 1,
        EyePointValidFieldId = EyeHeightFieldId + 1,
        OriginXFieldId = EyePointValidFieldId + 1,
        OriginYFieldId = OriginXFieldId + 1,
        OriginTexXFieldId = OriginYFieldId + 1,
        OriginTexYFieldId = OriginTexXFieldId + 1,
        TexSpacingFieldId = OriginTexYFieldId + 1,
        TexYSpacingFieldId = TexSpacingFieldId + 1,
        UpdateTerrainFieldId = TexYSpacingFieldId + 1,
        PerPixelLightingFieldId = UpdateTerrainFieldId + 1,
        NextFieldId = PerPixelLightingFieldId + 1
    };

    static const OSG::BitVector HeightDataFieldMask =
        (TypeTraits<BitVector>::One << HeightDataFieldId);
    static const OSG::BitVector HeightScaleFieldMask =
        (TypeTraits<BitVector>::One << HeightScaleFieldId);
    static const OSG::BitVector HeightErrorFieldMask =
        (TypeTraits<BitVector>::One << HeightErrorFieldId);
    static const OSG::BitVector HeightQuadFieldMask =
        (TypeTraits<BitVector>::One << HeightQuadFieldId);
    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector LevelFieldMask =
        (TypeTraits<BitVector>::One << LevelFieldId);
    static const OSG::BitVector DetailFieldMask =
        (TypeTraits<BitVector>::One << DetailFieldId);
    static const OSG::BitVector BorderDetailFieldMask =
        (TypeTraits<BitVector>::One << BorderDetailFieldId);
    static const OSG::BitVector VertexSpacingFieldMask =
        (TypeTraits<BitVector>::One << VertexSpacingFieldId);
    static const OSG::BitVector HeightVerticesFieldMask =
        (TypeTraits<BitVector>::One << HeightVerticesFieldId);
    static const OSG::BitVector GeoMorphingFieldMask =
        (TypeTraits<BitVector>::One << GeoMorphingFieldId);
    static const OSG::BitVector BoundMinFieldMask =
        (TypeTraits<BitVector>::One << BoundMinFieldId);
    static const OSG::BitVector BoundMaxFieldMask =
        (TypeTraits<BitVector>::One << BoundMaxFieldId);
    static const OSG::BitVector EyePointFieldMask =
        (TypeTraits<BitVector>::One << EyePointFieldId);
    static const OSG::BitVector EyeHeightFieldMask =
        (TypeTraits<BitVector>::One << EyeHeightFieldId);
    static const OSG::BitVector EyePointValidFieldMask =
        (TypeTraits<BitVector>::One << EyePointValidFieldId);
    static const OSG::BitVector OriginXFieldMask =
        (TypeTraits<BitVector>::One << OriginXFieldId);
    static const OSG::BitVector OriginYFieldMask =
        (TypeTraits<BitVector>::One << OriginYFieldId);
    static const OSG::BitVector OriginTexXFieldMask =
        (TypeTraits<BitVector>::One << OriginTexXFieldId);
    static const OSG::BitVector OriginTexYFieldMask =
        (TypeTraits<BitVector>::One << OriginTexYFieldId);
    static const OSG::BitVector TexSpacingFieldMask =
        (TypeTraits<BitVector>::One << TexSpacingFieldId);
    static const OSG::BitVector TexYSpacingFieldMask =
        (TypeTraits<BitVector>::One << TexYSpacingFieldId);
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

            const SFImagePtr          *getSFHeightData      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFHeightScale     (void);
#endif
                  SFReal32            *editSFHeightScale    (void);
            const SFReal32            *getSFHeightScale     (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFReal32            *getMFHeightError     (void);
#endif
                  MFReal32            *editMFHeightError    (void);
            const MFReal32            *getMFHeightError     (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFReal32            *getMFHeightQuad      (void);
#endif
                  MFReal32            *editMFHeightQuad     (void);
            const MFReal32            *getMFHeightQuad      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFDetail          (void);
#endif
                  SFReal32            *editSFDetail         (void);
            const SFReal32            *getSFDetail          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFBorderDetail    (void);
#endif
                  SFInt32             *editSFBorderDetail   (void);
            const SFInt32             *getSFBorderDetail    (void) const;

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
                  SFPnt3f             *getSFEyePoint        (void);
#endif
                  SFPnt3f             *editSFEyePoint       (void);
            const SFPnt3f             *getSFEyePoint        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFEyePointValid   (void);
#endif
                  SFBool              *editSFEyePointValid  (void);
            const SFBool              *getSFEyePointValid   (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFOriginX         (void);
#endif
                  SFReal32            *editSFOriginX        (void);
            const SFReal32            *getSFOriginX         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFOriginY         (void);
#endif
                  SFReal32            *editSFOriginY        (void);
            const SFReal32            *getSFOriginY         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFOriginTexX      (void);
#endif
                  SFReal32            *editSFOriginTexX     (void);
            const SFReal32            *getSFOriginTexX      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFOriginTexY      (void);
#endif
                  SFReal32            *editSFOriginTexY     (void);
            const SFReal32            *getSFOriginTexY      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFTexSpacing      (void);
#endif
                  SFReal32            *editSFTexSpacing     (void);
            const SFReal32            *getSFTexSpacing      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFTexYSpacing     (void);
#endif
                  SFReal32            *editSFTexYSpacing    (void);
            const SFReal32            *getSFTexYSpacing     (void) const;

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


                  ImagePtrConst getHeightData     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getHeightScale     (void);
#endif
                  Real32              &editHeightScale    (void);
            const Real32              &getHeightScale     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getHeightError     (const UInt32 index);
                  MFReal32            &getHeightError    (void);
#endif
                  Real32              &editHeightError    (const UInt32 index);
            const Real32              &getHeightError     (const UInt32 index) const;
                  MFReal32            &editHeightError    (void);
            const MFReal32            &getHeightError    (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getHeightQuad      (const UInt32 index);
                  MFReal32            &getHeightQuad     (void);
#endif
                  Real32              &editHeightQuad     (const UInt32 index);
            const Real32              &getHeightQuad      (const UInt32 index) const;
                  MFReal32            &editHeightQuad     (void);
            const MFReal32            &getHeightQuad     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getDetail          (void);
#endif
                  Real32              &editDetail         (void);
            const Real32              &getDetail          (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getBorderDetail    (void);
#endif
                  Int32               &editBorderDetail   (void);
            const Int32               &getBorderDetail    (void) const;

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
                  Pnt3f               &getEyePoint        (void);
#endif
                  Pnt3f               &editEyePoint       (void);
            const Pnt3f               &getEyePoint        (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getEyePointValid   (void);
#endif
                  bool                &editEyePointValid  (void);
            const bool                &getEyePointValid   (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getOriginX         (void);
#endif
                  Real32              &editOriginX        (void);
            const Real32              &getOriginX         (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getOriginY         (void);
#endif
                  Real32              &editOriginY        (void);
            const Real32              &getOriginY         (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getOriginTexX      (void);
#endif
                  Real32              &editOriginTexX     (void);
            const Real32              &getOriginTexX      (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getOriginTexY      (void);
#endif
                  Real32              &editOriginTexY     (void);
            const Real32              &getOriginTexY      (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getTexSpacing      (void);
#endif
                  Real32              &editTexSpacing     (void);
            const Real32              &getTexSpacing      (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getTexYSpacing     (void);
#endif
                  Real32              &editTexYSpacing    (void);
            const Real32              &getTexYSpacing     (void) const;

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

            void setHeightData     (ImagePtrConstArg value);
            void setHeightScale    (const Real32 &value);
            void setDetail         (const Real32 &value);
            void setBorderDetail   (const Int32 &value);
            void setVertexSpacing  (const Real32 &value);
            void setGeoMorphing    (const bool &value);
            void setEyePoint       (const Pnt3f &value);
            void setEyePointValid  (const bool &value);
            void setOriginX        (const Real32 &value);
            void setOriginY        (const Real32 &value);
            void setOriginTexX     (const Real32 &value);
            void setOriginTexY     (const Real32 &value);
            void setTexSpacing     (const Real32 &value);
            void setTexYSpacing    (const Real32 &value);
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


    void pushToHeightError                 (const Real32    &value   );
    void insertIntoHeightError             (      UInt32     uiIndex,
                                            const Real32    &value   );
    void replaceInHeightError              (      UInt32     uiIndex,
                                            const Real32    &value   );
    void replaceInHeightError              (const Real32    &pOldElem,
                                            const Real32    &pNewElem);
    void removeFromHeightError             (      UInt32     uiIndex );
    void removeFromHeightError             (const Real32    &value   );
    void clearHeightError                  (      void               );



    void pushToHeightQuad                  (const Real32    &value   );
    void insertIntoHeightQuad              (      UInt32     uiIndex,
                                            const Real32    &value   );
    void replaceInHeightQuad               (      UInt32     uiIndex,
                                            const Real32    &value   );
    void replaceInHeightQuad               (const Real32    &pOldElem,
                                            const Real32    &pNewElem);
    void removeFromHeightQuad              (      UInt32     uiIndex );
    void removeFromHeightQuad              (const Real32    &value   );
    void clearHeightQuad                   (      void               );


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

    static  QuadTreeTerrainPtr create     (void);
    static  QuadTreeTerrainPtr createEmpty(void);

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

    SFImagePtr        _sfHeightData;
    SFReal32          _sfHeightScale;
    MFReal32          _mfHeightError;
    MFReal32          _mfHeightQuad;
    SFUInt32          _sfWidth;
    SFUInt32          _sfLevel;
    SFReal32          _sfDetail;
    SFInt32           _sfBorderDetail;
    SFReal32          _sfVertexSpacing;
    SFGeoVectorPropertyPtr _sfHeightVertices;
    SFBool            _sfGeoMorphing;
    SFPnt3f           _sfBoundMin;
    SFPnt3f           _sfBoundMax;
    SFPnt3f           _sfEyePoint;
    SFReal32          _sfEyeHeight;
    SFBool            _sfEyePointValid;
    SFReal32          _sfOriginX;
    SFReal32          _sfOriginY;
    SFReal32          _sfOriginTexX;
    SFReal32          _sfOriginTexY;
    SFReal32          _sfTexSpacing;
    SFReal32          _sfTexYSpacing;
    SFBool            _sfUpdateTerrain;
    SFBool            _sfPerPixelLighting;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    QuadTreeTerrainBase(void);
    QuadTreeTerrainBase(const QuadTreeTerrainBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~QuadTreeTerrainBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const QuadTreeTerrain *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleHeightData      (void) const;
    EditFieldHandlePtr editHandleHeightData     (void);
    GetFieldHandlePtr  getHandleHeightScale     (void) const;
    EditFieldHandlePtr editHandleHeightScale    (void);
    GetFieldHandlePtr  getHandleHeightError     (void) const;
    EditFieldHandlePtr editHandleHeightError    (void);
    GetFieldHandlePtr  getHandleHeightQuad      (void) const;
    EditFieldHandlePtr editHandleHeightQuad     (void);
    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);
    GetFieldHandlePtr  getHandleLevel           (void) const;
    EditFieldHandlePtr editHandleLevel          (void);
    GetFieldHandlePtr  getHandleDetail          (void) const;
    EditFieldHandlePtr editHandleDetail         (void);
    GetFieldHandlePtr  getHandleBorderDetail    (void) const;
    EditFieldHandlePtr editHandleBorderDetail   (void);
    GetFieldHandlePtr  getHandleVertexSpacing   (void) const;
    EditFieldHandlePtr editHandleVertexSpacing  (void);
    GetFieldHandlePtr  getHandleHeightVertices  (void) const;
    EditFieldHandlePtr editHandleHeightVertices (void);
    GetFieldHandlePtr  getHandleGeoMorphing     (void) const;
    EditFieldHandlePtr editHandleGeoMorphing    (void);
    GetFieldHandlePtr  getHandleBoundMin        (void) const;
    EditFieldHandlePtr editHandleBoundMin       (void);
    GetFieldHandlePtr  getHandleBoundMax        (void) const;
    EditFieldHandlePtr editHandleBoundMax       (void);
    GetFieldHandlePtr  getHandleEyePoint        (void) const;
    EditFieldHandlePtr editHandleEyePoint       (void);
    GetFieldHandlePtr  getHandleEyeHeight       (void) const;
    EditFieldHandlePtr editHandleEyeHeight      (void);
    GetFieldHandlePtr  getHandleEyePointValid   (void) const;
    EditFieldHandlePtr editHandleEyePointValid  (void);
    GetFieldHandlePtr  getHandleOriginX         (void) const;
    EditFieldHandlePtr editHandleOriginX        (void);
    GetFieldHandlePtr  getHandleOriginY         (void) const;
    EditFieldHandlePtr editHandleOriginY        (void);
    GetFieldHandlePtr  getHandleOriginTexX      (void) const;
    EditFieldHandlePtr editHandleOriginTexX     (void);
    GetFieldHandlePtr  getHandleOriginTexY      (void) const;
    EditFieldHandlePtr editHandleOriginTexY     (void);
    GetFieldHandlePtr  getHandleTexSpacing      (void) const;
    EditFieldHandlePtr editHandleTexSpacing     (void);
    GetFieldHandlePtr  getHandleTexYSpacing     (void) const;
    EditFieldHandlePtr editHandleTexYSpacing    (void);
    GetFieldHandlePtr  getHandleUpdateTerrain   (void) const;
    EditFieldHandlePtr editHandleUpdateTerrain  (void);
    GetFieldHandlePtr  getHandlePerPixelLighting (void) const;
    EditFieldHandlePtr editHandlePerPixelLighting(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFWidth           (void);
#endif
                  SFUInt32            *editSFWidth          (void);
            const SFUInt32            *getSFWidth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFLevel           (void);
#endif
                  SFUInt32            *editSFLevel          (void);
            const SFUInt32            *getSFLevel           (void) const;
            const SFGeoVectorPropertyPtr *getSFHeightVertices  (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFPnt3f             *getSFBoundMin        (void);
#endif
                  SFPnt3f             *editSFBoundMin       (void);
            const SFPnt3f             *getSFBoundMin        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFPnt3f             *getSFBoundMax        (void);
#endif
                  SFPnt3f             *editSFBoundMax       (void);
            const SFPnt3f             *getSFBoundMax        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFEyeHeight       (void);
#endif
                  SFReal32            *editSFEyeHeight      (void);
            const SFReal32            *getSFEyeHeight       (void) const;


#ifdef OSG_1_GET_COMPAT
                  UInt32              &getWidth           (void);
#endif
                  UInt32              &editWidth          (void);
            const UInt32              &getWidth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getLevel           (void);
#endif
                  UInt32              &editLevel          (void);
            const UInt32              &getLevel           (void) const;

                  GeoVectorPropertyPtrConst getHeightVertices (void) const;

#ifdef OSG_1_GET_COMPAT
                  Pnt3f               &getBoundMin        (void);
#endif
                  Pnt3f               &editBoundMin       (void);
            const Pnt3f               &getBoundMin        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Pnt3f               &getBoundMax        (void);
#endif
                  Pnt3f               &editBoundMax       (void);
            const Pnt3f               &getBoundMax        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getEyeHeight       (void);
#endif
                  Real32              &editEyeHeight      (void);
            const Real32              &getEyeHeight       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setWidth          (const UInt32 &value);
            void setLevel          (const UInt32 &value);
            void setHeightVertices (GeoVectorPropertyPtrConstArg value);
            void setBoundMin       (const Pnt3f &value);
            void setBoundMax       (const Pnt3f &value);
            void setEyeHeight      (const Real32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */




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

            void execSync (      QuadTreeTerrainBase *pFrom,
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
    void operator =(const QuadTreeTerrainBase &source);
};

typedef QuadTreeTerrainBase *QuadTreeTerrainBaseP;

/** Type specific RefPtr type for QuadTreeTerrain. */
typedef RefPtr<QuadTreeTerrainPtr> QuadTreeTerrainRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<QuadTreeTerrainBase::isNodeCore>,
    CoredNodePtr<QuadTreeTerrain>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        QuadTreeTerrainNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGQUADTREETERRAINBASE_H_ */
