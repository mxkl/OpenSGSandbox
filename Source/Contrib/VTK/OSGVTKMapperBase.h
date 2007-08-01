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
 **     class VTKMapper
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGVTKMAPPERBASE_H_
#define _OSGVTKMAPPERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribVTKDef.h"

#include "OSGBaseTypes.h"

#include "OSGGroup.h" // Parent

#include "OSGNodeFields.h" // Root type
#include "OSGNodeFields.h" // GeoRoots type
#include "OSGGeometryFields.h" // Geometries type
#include "OSGChunkMaterialFields.h" // Materials type
#include "OSGMaterialChunkFields.h" // MaterialChunks type
#include "OSGGeoPnt3fPropertyFields.h" // Positions type
#include "OSGGeoUInt32PropertyFields.h" // Length type
#include "OSGGeoUInt8PropertyFields.h" // Types type
#include "OSGGeoColor4fPropertyFields.h" // Colors type
#include "OSGGeoVec3fPropertyFields.h" // Normals type

#include "OSGVTKMapperFields.h"

OSG_BEGIN_NAMESPACE

class VTKMapper;

//! \brief VTKMapper Base Class.

class OSG_CONTRIBVTK_DLLMAPPING VTKMapperBase : public Group
{
  public:

    typedef Group Inherited;
    typedef Group ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(VTKMapper);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RootFieldId = Inherited::NextFieldId,
        GeoRootsFieldId = RootFieldId + 1,
        GeometriesFieldId = GeoRootsFieldId + 1,
        MaterialsFieldId = GeometriesFieldId + 1,
        MaterialChunksFieldId = MaterialsFieldId + 1,
        PositionsFieldId = MaterialChunksFieldId + 1,
        LengthFieldId = PositionsFieldId + 1,
        TypesFieldId = LengthFieldId + 1,
        ColorsFieldId = TypesFieldId + 1,
        NormalsFieldId = ColorsFieldId + 1,
        NextFieldId = NormalsFieldId + 1
    };

    static const OSG::BitVector RootFieldMask =
        (TypeTraits<BitVector>::One << RootFieldId);
    static const OSG::BitVector GeoRootsFieldMask =
        (TypeTraits<BitVector>::One << GeoRootsFieldId);
    static const OSG::BitVector GeometriesFieldMask =
        (TypeTraits<BitVector>::One << GeometriesFieldId);
    static const OSG::BitVector MaterialsFieldMask =
        (TypeTraits<BitVector>::One << MaterialsFieldId);
    static const OSG::BitVector MaterialChunksFieldMask =
        (TypeTraits<BitVector>::One << MaterialChunksFieldId);
    static const OSG::BitVector PositionsFieldMask =
        (TypeTraits<BitVector>::One << PositionsFieldId);
    static const OSG::BitVector LengthFieldMask =
        (TypeTraits<BitVector>::One << LengthFieldId);
    static const OSG::BitVector TypesFieldMask =
        (TypeTraits<BitVector>::One << TypesFieldId);
    static const OSG::BitVector ColorsFieldMask =
        (TypeTraits<BitVector>::One << ColorsFieldId);
    static const OSG::BitVector NormalsFieldMask =
        (TypeTraits<BitVector>::One << NormalsFieldId);
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

            const SFNodePtr           *getSFRoot            (void) const;
            const MFNodePtr           *getMFGeoRoots        (void) const;
            const MFGeometryPtr       *getMFGeometries      (void) const;
            const MFChunkMaterialPtr  *getMFMaterials       (void) const;
            const MFMaterialChunkPtr  *getMFMaterialChunks  (void) const;
            const MFGeoPnt3fPropertyPtr *getMFPositions       (void) const;
            const MFGeoUInt32PropertyPtr *getMFLength          (void) const;
            const MFGeoUInt8PropertyPtr *getMFTypes           (void) const;
            const MFGeoColor4fPropertyPtr *getMFColors          (void) const;
            const MFGeoVec3fPropertyPtr *getMFNormals         (void) const;


                  NodePtrConst getRoot           (void) const;

                  NodePtrConst getGeoRoots       (const UInt32 index) const;
            const MFNodePtr           &getGeoRoots       (void) const;

                  GeometryPtrConst getGeometries     (const UInt32 index) const;
            const MFGeometryPtr       &getGeometries     (void) const;

                  ChunkMaterialPtrConst getMaterials      (const UInt32 index) const;
            const MFChunkMaterialPtr  &getMaterials      (void) const;

                  MaterialChunkPtrConst getMaterialChunks (const UInt32 index) const;
            const MFMaterialChunkPtr  &getMaterialChunks (void) const;

                  GeoPnt3fPropertyPtrConst getPositions      (const UInt32 index) const;
            const MFGeoPnt3fPropertyPtr &getPositions      (void) const;

                  GeoUInt32PropertyPtrConst getLength         (const UInt32 index) const;
            const MFGeoUInt32PropertyPtr &getLength         (void) const;

                  GeoUInt8PropertyPtrConst getTypes          (const UInt32 index) const;
            const MFGeoUInt8PropertyPtr &getTypes          (void) const;

                  GeoColor4fPropertyPtrConst getColors         (const UInt32 index) const;
            const MFGeoColor4fPropertyPtr &getColors         (void) const;

                  GeoVec3fPropertyPtrConst getNormals        (const UInt32 index) const;
            const MFGeoVec3fPropertyPtr &getNormals        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRoot           (NodePtrConstArg value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToGeoRoots            (NodePtrConstArg value   );
    void assignGeoRoots            (const MFNodePtr         &value);
    void insertIntoGeoRoots      (UInt32                uiIndex,
                                             NodePtrConstArg value   );
    void replaceInGeoRoots  (UInt32                uiIndex,
                                             NodePtrConstArg value   );
    void replaceInGeoRoots (NodePtrConstArg pOldElem,
                                             NodePtrConstArg pNewElem);
    void removeFromGeoRoots (UInt32                uiIndex );
    void removeFromGeoRoots(NodePtrConstArg value   );
    void clearGeoRoots              (void                          );


    void pushToGeometries           (GeometryPtrConstArg value   );
    void assignGeometries           (const MFGeometryPtr     &value);
    void insertIntoGeometries      (UInt32                uiIndex,
                                             GeometryPtrConstArg value   );
    void replaceInGeometries  (UInt32                uiIndex,
                                             GeometryPtrConstArg value   );
    void replaceInGeometries (GeometryPtrConstArg pOldElem,
                                             GeometryPtrConstArg pNewElem);
    void removeFromGeometries (UInt32                uiIndex );
    void removeFromGeometries(GeometryPtrConstArg value   );
    void clearGeometries            (void                          );


    void pushToMaterials           (ChunkMaterialPtrConstArg value   );
    void assignMaterials           (const MFChunkMaterialPtr &value);
    void insertIntoMaterials      (UInt32                uiIndex,
                                             ChunkMaterialPtrConstArg value   );
    void replaceInMaterials  (UInt32                uiIndex,
                                             ChunkMaterialPtrConstArg value   );
    void replaceInMaterials (ChunkMaterialPtrConstArg pOldElem,
                                             ChunkMaterialPtrConstArg pNewElem);
    void removeFromMaterials (UInt32                uiIndex );
    void removeFromMaterials(ChunkMaterialPtrConstArg value   );
    void clearMaterials             (void                          );


    void pushToMaterialChunks           (MaterialChunkPtrConstArg value   );
    void assignMaterialChunks           (const MFMaterialChunkPtr &value);
    void insertIntoMaterialChunks      (UInt32                uiIndex,
                                             MaterialChunkPtrConstArg value   );
    void replaceInMaterialChunks  (UInt32                uiIndex,
                                             MaterialChunkPtrConstArg value   );
    void replaceInMaterialChunks (MaterialChunkPtrConstArg pOldElem,
                                             MaterialChunkPtrConstArg pNewElem);
    void removeFromMaterialChunks (UInt32                uiIndex );
    void removeFromMaterialChunks(MaterialChunkPtrConstArg value   );
    void clearMaterialChunks            (void                          );


    void pushToPositions           (GeoPnt3fPropertyPtrConstArg value   );
    void assignPositions           (const MFGeoPnt3fPropertyPtr &value);
    void insertIntoPositions      (UInt32                uiIndex,
                                             GeoPnt3fPropertyPtrConstArg value   );
    void replaceInPositions  (UInt32                uiIndex,
                                             GeoPnt3fPropertyPtrConstArg value   );
    void replaceInPositions (GeoPnt3fPropertyPtrConstArg pOldElem,
                                             GeoPnt3fPropertyPtrConstArg pNewElem);
    void removeFromPositions (UInt32                uiIndex );
    void removeFromPositions(GeoPnt3fPropertyPtrConstArg value   );
    void clearPositions             (void                          );


    void pushToLength              (GeoUInt32PropertyPtrConstArg value   );
    void assignLength              (const MFGeoUInt32PropertyPtr &value);
    void insertIntoLength      (UInt32                uiIndex,
                                             GeoUInt32PropertyPtrConstArg value   );
    void replaceInLength  (UInt32                uiIndex,
                                             GeoUInt32PropertyPtrConstArg value   );
    void replaceInLength (GeoUInt32PropertyPtrConstArg pOldElem,
                                             GeoUInt32PropertyPtrConstArg pNewElem);
    void removeFromLength (UInt32                uiIndex );
    void removeFromLength(GeoUInt32PropertyPtrConstArg value   );
    void clearLength                (void                          );


    void pushToTypes               (GeoUInt8PropertyPtrConstArg value   );
    void assignTypes               (const MFGeoUInt8PropertyPtr &value);
    void insertIntoTypes      (UInt32                uiIndex,
                                             GeoUInt8PropertyPtrConstArg value   );
    void replaceInTypes   (UInt32                uiIndex,
                                             GeoUInt8PropertyPtrConstArg value   );
    void replaceInTypes  (GeoUInt8PropertyPtrConstArg pOldElem,
                                             GeoUInt8PropertyPtrConstArg pNewElem);
    void removeFromTypes (UInt32                uiIndex );
    void removeFromTypes(GeoUInt8PropertyPtrConstArg value   );
    void clearTypes                 (void                          );


    void pushToColors              (GeoColor4fPropertyPtrConstArg value   );
    void assignColors              (const MFGeoColor4fPropertyPtr &value);
    void insertIntoColors      (UInt32                uiIndex,
                                             GeoColor4fPropertyPtrConstArg value   );
    void replaceInColors  (UInt32                uiIndex,
                                             GeoColor4fPropertyPtrConstArg value   );
    void replaceInColors (GeoColor4fPropertyPtrConstArg pOldElem,
                                             GeoColor4fPropertyPtrConstArg pNewElem);
    void removeFromColors (UInt32                uiIndex );
    void removeFromColors(GeoColor4fPropertyPtrConstArg value   );
    void clearColors                (void                          );


    void pushToNormals             (GeoVec3fPropertyPtrConstArg value   );
    void assignNormals             (const MFGeoVec3fPropertyPtr &value);
    void insertIntoNormals      (UInt32                uiIndex,
                                             GeoVec3fPropertyPtrConstArg value   );
    void replaceInNormals  (UInt32                uiIndex,
                                             GeoVec3fPropertyPtrConstArg value   );
    void replaceInNormals (GeoVec3fPropertyPtrConstArg pOldElem,
                                             GeoVec3fPropertyPtrConstArg pNewElem);
    void removeFromNormals (UInt32                uiIndex );
    void removeFromNormals(GeoVec3fPropertyPtrConstArg value   );
    void clearNormals               (void                          );


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

    static  VTKMapperPtr create     (void);
    static  VTKMapperPtr createEmpty(void);

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

    SFNodePtr         _sfRoot;
    MFNodePtr         _mfGeoRoots;
    MFGeometryPtr     _mfGeometries;
    MFChunkMaterialPtr _mfMaterials;
    MFMaterialChunkPtr _mfMaterialChunks;
    MFGeoPnt3fPropertyPtr _mfPositions;
    MFGeoUInt32PropertyPtr _mfLength;
    MFGeoUInt8PropertyPtr _mfTypes;
    MFGeoColor4fPropertyPtr _mfColors;
    MFGeoVec3fPropertyPtr _mfNormals;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    VTKMapperBase(void);
    VTKMapperBase(const VTKMapperBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~VTKMapperBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const VTKMapper *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleRoot            (void) const;
    EditFieldHandlePtr editHandleRoot           (void);
    GetFieldHandlePtr  getHandleGeoRoots        (void) const;
    EditFieldHandlePtr editHandleGeoRoots       (void);
    GetFieldHandlePtr  getHandleGeometries      (void) const;
    EditFieldHandlePtr editHandleGeometries     (void);
    GetFieldHandlePtr  getHandleMaterials       (void) const;
    EditFieldHandlePtr editHandleMaterials      (void);
    GetFieldHandlePtr  getHandleMaterialChunks  (void) const;
    EditFieldHandlePtr editHandleMaterialChunks (void);
    GetFieldHandlePtr  getHandlePositions       (void) const;
    EditFieldHandlePtr editHandlePositions      (void);
    GetFieldHandlePtr  getHandleLength          (void) const;
    EditFieldHandlePtr editHandleLength         (void);
    GetFieldHandlePtr  getHandleTypes           (void) const;
    EditFieldHandlePtr editHandleTypes          (void);
    GetFieldHandlePtr  getHandleColors          (void) const;
    EditFieldHandlePtr editHandleColors         (void);
    GetFieldHandlePtr  getHandleNormals         (void) const;
    EditFieldHandlePtr editHandleNormals        (void);

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

            void execSync (      VTKMapperBase *pFrom,
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
    void operator =(const VTKMapperBase &source);
};

typedef VTKMapperBase *VTKMapperBaseP;

/** Type specific RefPtr type for VTKMapper. */
typedef RefPtr<VTKMapperPtr> VTKMapperRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<VTKMapperBase::isNodeCore>,
    CoredNodePtr<VTKMapper>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        VTKMapperNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGVTKMAPPERBASE_H_ */
