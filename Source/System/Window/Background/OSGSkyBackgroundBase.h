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
 **     class SkyBackground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSKYBACKGROUNDBASE_H_
#define _OSGSKYBACKGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGBaseTypes.h"

#include "OSGBackground.h" // Parent

#include "OSGColor4fFields.h" // SkyColor type
#include "OSGReal32Fields.h" // SkyAngle type
#include "OSGColor4fFields.h" // GroundColor type
#include "OSGReal32Fields.h" // GroundAngle type
#include "OSGUInt32Fields.h" // SphereRes type
#include "OSGTextureBaseChunkFields.h" // BackTexture type
#include "OSGTextureBaseChunkFields.h" // BottomTexture type
#include "OSGTextureBaseChunkFields.h" // FrontTexture type
#include "OSGTextureBaseChunkFields.h" // LeftTexture type
#include "OSGTextureBaseChunkFields.h" // RightTexture type
#include "OSGTextureBaseChunkFields.h" // TopTexture type
#include "OSGBoolFields.h" // BoxInside type
#include "OSGVec3fFields.h" // TopTexCoord type
#include "OSGVec3fFields.h" // BottomTexCoord type
#include "OSGVec3fFields.h" // RightTexCoord type
#include "OSGVec3fFields.h" // LeftTexCoord type
#include "OSGVec3fFields.h" // FrontTexCoord type
#include "OSGVec3fFields.h" // BackTexCoord type
#include "OSGNodeFields.h" // Beacon type

#include "OSGSkyBackgroundFields.h"

OSG_BEGIN_NAMESPACE

class SkyBackground;

//! \brief SkyBackground Base Class.

class OSG_WINDOW_DLLMAPPING SkyBackgroundBase : public Background
{
  public:

    typedef Background Inherited;
    typedef Background ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<BackgroundPtr,
                              BackgroundConstPtr,
                              SkyBackground>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<BackgroundPtr,
                              BackgroundConstPtr,
                              SkyBackground>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<BackgroundPtr,
                              BackgroundConstPtr,
                              SkyBackground>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<BackgroundPtr,
                              BackgroundConstPtr,
                              SkyBackground>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<BackgroundPtr,
                              BackgroundConstPtr,
                              SkyBackground>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<BackgroundPtr,
                              BackgroundConstPtr,
                              SkyBackground>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        SkyColorFieldId = Inherited::NextFieldId,
        SkyAngleFieldId = SkyColorFieldId + 1,
        GroundColorFieldId = SkyAngleFieldId + 1,
        GroundAngleFieldId = GroundColorFieldId + 1,
        SphereResFieldId = GroundAngleFieldId + 1,
        BackTextureFieldId = SphereResFieldId + 1,
        BottomTextureFieldId = BackTextureFieldId + 1,
        FrontTextureFieldId = BottomTextureFieldId + 1,
        LeftTextureFieldId = FrontTextureFieldId + 1,
        RightTextureFieldId = LeftTextureFieldId + 1,
        TopTextureFieldId = RightTextureFieldId + 1,
        BoxInsideFieldId = TopTextureFieldId + 1,
        TopTexCoordFieldId = BoxInsideFieldId + 1,
        BottomTexCoordFieldId = TopTexCoordFieldId + 1,
        RightTexCoordFieldId = BottomTexCoordFieldId + 1,
        LeftTexCoordFieldId = RightTexCoordFieldId + 1,
        FrontTexCoordFieldId = LeftTexCoordFieldId + 1,
        BackTexCoordFieldId = FrontTexCoordFieldId + 1,
        BeaconFieldId = BackTexCoordFieldId + 1,
        NextFieldId = BeaconFieldId + 1
    };

    static const OSG::BitVector SkyColorFieldMask =
        (TypeTraits<BitVector>::One << SkyColorFieldId);
    static const OSG::BitVector SkyAngleFieldMask =
        (TypeTraits<BitVector>::One << SkyAngleFieldId);
    static const OSG::BitVector GroundColorFieldMask =
        (TypeTraits<BitVector>::One << GroundColorFieldId);
    static const OSG::BitVector GroundAngleFieldMask =
        (TypeTraits<BitVector>::One << GroundAngleFieldId);
    static const OSG::BitVector SphereResFieldMask =
        (TypeTraits<BitVector>::One << SphereResFieldId);
    static const OSG::BitVector BackTextureFieldMask =
        (TypeTraits<BitVector>::One << BackTextureFieldId);
    static const OSG::BitVector BottomTextureFieldMask =
        (TypeTraits<BitVector>::One << BottomTextureFieldId);
    static const OSG::BitVector FrontTextureFieldMask =
        (TypeTraits<BitVector>::One << FrontTextureFieldId);
    static const OSG::BitVector LeftTextureFieldMask =
        (TypeTraits<BitVector>::One << LeftTextureFieldId);
    static const OSG::BitVector RightTextureFieldMask =
        (TypeTraits<BitVector>::One << RightTextureFieldId);
    static const OSG::BitVector TopTextureFieldMask =
        (TypeTraits<BitVector>::One << TopTextureFieldId);
    static const OSG::BitVector BoxInsideFieldMask =
        (TypeTraits<BitVector>::One << BoxInsideFieldId);
    static const OSG::BitVector TopTexCoordFieldMask =
        (TypeTraits<BitVector>::One << TopTexCoordFieldId);
    static const OSG::BitVector BottomTexCoordFieldMask =
        (TypeTraits<BitVector>::One << BottomTexCoordFieldId);
    static const OSG::BitVector RightTexCoordFieldMask =
        (TypeTraits<BitVector>::One << RightTexCoordFieldId);
    static const OSG::BitVector LeftTexCoordFieldMask =
        (TypeTraits<BitVector>::One << LeftTexCoordFieldId);
    static const OSG::BitVector FrontTexCoordFieldMask =
        (TypeTraits<BitVector>::One << FrontTexCoordFieldId);
    static const OSG::BitVector BackTexCoordFieldMask =
        (TypeTraits<BitVector>::One << BackTexCoordFieldId);
    static const OSG::BitVector BeaconFieldMask =
        (TypeTraits<BitVector>::One << BeaconFieldId);
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


#ifdef OSG_1_COMPAT
                  MFColor4f           *getMFSkyColor        (void);
#endif
                  MFColor4f           *editMFSkyColor       (void);
            const MFColor4f           *getMFSkyColor        (void) const;

#ifdef OSG_1_COMPAT
                  MFReal32            *getMFSkyAngle        (void);
#endif
                  MFReal32            *editMFSkyAngle       (void);
            const MFReal32            *getMFSkyAngle        (void) const;

#ifdef OSG_1_COMPAT
                  MFColor4f           *getMFGroundColor     (void);
#endif
                  MFColor4f           *editMFGroundColor    (void);
            const MFColor4f           *getMFGroundColor     (void) const;

#ifdef OSG_1_COMPAT
                  MFReal32            *getMFGroundAngle     (void);
#endif
                  MFReal32            *editMFGroundAngle    (void);
            const MFReal32            *getMFGroundAngle     (void) const;

#ifdef OSG_1_COMPAT
                  SFUInt32            *getSFSphereRes       (void);
#endif
                  SFUInt32            *editSFSphereRes      (void);
            const SFUInt32            *getSFSphereRes       (void) const;
            const SFTextureBaseChunkPtr *getSFBackTexture     (void) const;
            const SFTextureBaseChunkPtr *getSFBottomTexture   (void) const;
            const SFTextureBaseChunkPtr *getSFFrontTexture    (void) const;
            const SFTextureBaseChunkPtr *getSFLeftTexture     (void) const;
            const SFTextureBaseChunkPtr *getSFRightTexture    (void) const;
            const SFTextureBaseChunkPtr *getSFTopTexture      (void) const;

#ifdef OSG_1_COMPAT
                  SFBool              *getSFBoxInside       (void);
#endif
                  SFBool              *editSFBoxInside      (void);
            const SFBool              *getSFBoxInside       (void) const;

#ifdef OSG_1_COMPAT
                  MFVec3f             *getMFTopTexCoord     (void);
#endif
                  MFVec3f             *editMFTopTexCoord    (void);
            const MFVec3f             *getMFTopTexCoord     (void) const;

#ifdef OSG_1_COMPAT
                  MFVec3f             *getMFBottomTexCoord  (void);
#endif
                  MFVec3f             *editMFBottomTexCoord (void);
            const MFVec3f             *getMFBottomTexCoord  (void) const;

#ifdef OSG_1_COMPAT
                  MFVec3f             *getMFRightTexCoord   (void);
#endif
                  MFVec3f             *editMFRightTexCoord  (void);
            const MFVec3f             *getMFRightTexCoord   (void) const;

#ifdef OSG_1_COMPAT
                  MFVec3f             *getMFLeftTexCoord    (void);
#endif
                  MFVec3f             *editMFLeftTexCoord   (void);
            const MFVec3f             *getMFLeftTexCoord    (void) const;

#ifdef OSG_1_COMPAT
                  MFVec3f             *getMFFrontTexCoord   (void);
#endif
                  MFVec3f             *editMFFrontTexCoord  (void);
            const MFVec3f             *getMFFrontTexCoord   (void) const;

#ifdef OSG_1_COMPAT
                  MFVec3f             *getMFBackTexCoord    (void);
#endif
                  MFVec3f             *editMFBackTexCoord   (void);
            const MFVec3f             *getMFBackTexCoord    (void) const;
            const SFNodePtr           *getSFBeacon          (void) const;


#ifdef OSG_1_COMPAT
                  Color4f             &getSkyColor        (const UInt32 index);
                  MFColor4f           &getSkyColor       (void);
#endif
                  Color4f             &editSkyColor       (const UInt32 index);
            const Color4f             &getSkyColor        (const UInt32 index) const;
                  MFColor4f           &editSkyColor       (void);
            const MFColor4f           &getSkyColor       (void) const;

#ifdef OSG_1_COMPAT
                  Real32              &getSkyAngle        (const UInt32 index);
                  MFReal32            &getSkyAngle       (void);
#endif
                  Real32              &editSkyAngle       (const UInt32 index);
            const Real32              &getSkyAngle        (const UInt32 index) const;
                  MFReal32            &editSkyAngle       (void);
            const MFReal32            &getSkyAngle       (void) const;

#ifdef OSG_1_COMPAT
                  Color4f             &getGroundColor     (const UInt32 index);
                  MFColor4f           &getGroundColor    (void);
#endif
                  Color4f             &editGroundColor    (const UInt32 index);
            const Color4f             &getGroundColor     (const UInt32 index) const;
                  MFColor4f           &editGroundColor    (void);
            const MFColor4f           &getGroundColor    (void) const;

#ifdef OSG_1_COMPAT
                  Real32              &getGroundAngle     (const UInt32 index);
                  MFReal32            &getGroundAngle    (void);
#endif
                  Real32              &editGroundAngle    (const UInt32 index);
            const Real32              &getGroundAngle     (const UInt32 index) const;
                  MFReal32            &editGroundAngle    (void);
            const MFReal32            &getGroundAngle    (void) const;

#ifdef OSG_1_COMPAT
                  UInt32              &getSphereRes       (void);
#endif
                  UInt32              &editSphereRes      (void);
            const UInt32              &getSphereRes       (void) const;

                  TextureBaseChunkPtrConst getBackTexture    (void) const;

                  TextureBaseChunkPtrConst getBottomTexture  (void) const;

                  TextureBaseChunkPtrConst getFrontTexture   (void) const;

                  TextureBaseChunkPtrConst getLeftTexture    (void) const;

                  TextureBaseChunkPtrConst getRightTexture   (void) const;

                  TextureBaseChunkPtrConst getTopTexture     (void) const;

#ifdef OSG_1_COMPAT
                  bool                &getBoxInside       (void);
#endif
                  bool                &editBoxInside      (void);
            const bool                &getBoxInside       (void) const;

#ifdef OSG_1_COMPAT
                  Vec3f               &getTopTexCoord     (const UInt32 index);
                  MFVec3f             &getTopTexCoord    (void);
#endif
                  Vec3f               &editTopTexCoord    (const UInt32 index);
            const Vec3f               &getTopTexCoord     (const UInt32 index) const;
                  MFVec3f             &editTopTexCoord    (void);
            const MFVec3f             &getTopTexCoord    (void) const;

#ifdef OSG_1_COMPAT
                  Vec3f               &getBottomTexCoord  (const UInt32 index);
                  MFVec3f             &getBottomTexCoord (void);
#endif
                  Vec3f               &editBottomTexCoord (const UInt32 index);
            const Vec3f               &getBottomTexCoord  (const UInt32 index) const;
                  MFVec3f             &editBottomTexCoord (void);
            const MFVec3f             &getBottomTexCoord (void) const;

#ifdef OSG_1_COMPAT
                  Vec3f               &getRightTexCoord   (const UInt32 index);
                  MFVec3f             &getRightTexCoord  (void);
#endif
                  Vec3f               &editRightTexCoord  (const UInt32 index);
            const Vec3f               &getRightTexCoord   (const UInt32 index) const;
                  MFVec3f             &editRightTexCoord  (void);
            const MFVec3f             &getRightTexCoord  (void) const;

#ifdef OSG_1_COMPAT
                  Vec3f               &getLeftTexCoord    (const UInt32 index);
                  MFVec3f             &getLeftTexCoord   (void);
#endif
                  Vec3f               &editLeftTexCoord   (const UInt32 index);
            const Vec3f               &getLeftTexCoord    (const UInt32 index) const;
                  MFVec3f             &editLeftTexCoord   (void);
            const MFVec3f             &getLeftTexCoord   (void) const;

#ifdef OSG_1_COMPAT
                  Vec3f               &getFrontTexCoord   (const UInt32 index);
                  MFVec3f             &getFrontTexCoord  (void);
#endif
                  Vec3f               &editFrontTexCoord  (const UInt32 index);
            const Vec3f               &getFrontTexCoord   (const UInt32 index) const;
                  MFVec3f             &editFrontTexCoord  (void);
            const MFVec3f             &getFrontTexCoord  (void) const;

#ifdef OSG_1_COMPAT
                  Vec3f               &getBackTexCoord    (const UInt32 index);
                  MFVec3f             &getBackTexCoord   (void);
#endif
                  Vec3f               &editBackTexCoord   (const UInt32 index);
            const Vec3f               &getBackTexCoord    (const UInt32 index) const;
                  MFVec3f             &editBackTexCoord   (void);
            const MFVec3f             &getBackTexCoord   (void) const;

                  NodePtrConst getBeacon         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSphereRes      (const UInt32 &value);
            void setBackTexture    (TextureBaseChunkPtrConstArg value);
            void setBottomTexture  (TextureBaseChunkPtrConstArg value);
            void setFrontTexture   (TextureBaseChunkPtrConstArg value);
            void setLeftTexture    (TextureBaseChunkPtrConstArg value);
            void setRightTexture   (TextureBaseChunkPtrConstArg value);
            void setTopTexture     (TextureBaseChunkPtrConstArg value);
            void setBoxInside      (const bool &value);
            void setBeacon         (NodePtrConstArg value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    virtual void pushToField     (      FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void insertIntoMField(const UInt32                    uiIndex,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (const UInt32                    uiIndex,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void removeFromMField(const UInt32                    uiIndex,
                                  const UInt32                    uiFieldId  );

    virtual void removeFromMField(      FieldContainerPtrConstArg pElement,
                                  const UInt32                    uiFieldId  );

    virtual void clearField      (const UInt32                    uiFieldId  );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */


    void pushToSkyColor                    (const Color4f   &value   );
    void insertIntoSkyColor                (      UInt32     uiIndex,
                                            const Color4f   &value   );
    void replaceInSkyColor                 (      UInt32     uiIndex,
                                            const Color4f   &value   );
    void replaceInSkyColor                 (const Color4f   &pOldElem,
                                            const Color4f   &pNewElem);
    void removeFromSkyColor                (      UInt32     uiIndex );
    void removeFromSkyColor                (const Color4f   &value   );
    void clearSkyColor                     (      void               );



    void pushToSkyAngle                    (const Real32    &value   );
    void insertIntoSkyAngle                (      UInt32     uiIndex,
                                            const Real32    &value   );
    void replaceInSkyAngle                 (      UInt32     uiIndex,
                                            const Real32    &value   );
    void replaceInSkyAngle                 (const Real32    &pOldElem,
                                            const Real32    &pNewElem);
    void removeFromSkyAngle                (      UInt32     uiIndex );
    void removeFromSkyAngle                (const Real32    &value   );
    void clearSkyAngle                     (      void               );



    void pushToGroundColor                 (const Color4f   &value   );
    void insertIntoGroundColor             (      UInt32     uiIndex,
                                            const Color4f   &value   );
    void replaceInGroundColor              (      UInt32     uiIndex,
                                            const Color4f   &value   );
    void replaceInGroundColor              (const Color4f   &pOldElem,
                                            const Color4f   &pNewElem);
    void removeFromGroundColor             (      UInt32     uiIndex );
    void removeFromGroundColor             (const Color4f   &value   );
    void clearGroundColor                  (      void               );



    void pushToGroundAngle                 (const Real32    &value   );
    void insertIntoGroundAngle             (      UInt32     uiIndex,
                                            const Real32    &value   );
    void replaceInGroundAngle              (      UInt32     uiIndex,
                                            const Real32    &value   );
    void replaceInGroundAngle              (const Real32    &pOldElem,
                                            const Real32    &pNewElem);
    void removeFromGroundAngle             (      UInt32     uiIndex );
    void removeFromGroundAngle             (const Real32    &value   );
    void clearGroundAngle                  (      void               );



    void pushToTopTexCoord                 (const Vec3f     &value   );
    void insertIntoTopTexCoord             (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInTopTexCoord              (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInTopTexCoord              (const Vec3f     &pOldElem,
                                            const Vec3f     &pNewElem);
    void removeFromTopTexCoord             (      UInt32     uiIndex );
    void removeFromTopTexCoord             (const Vec3f     &value   );
    void clearTopTexCoord                  (      void               );



    void pushToBottomTexCoord              (const Vec3f     &value   );
    void insertIntoBottomTexCoord          (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInBottomTexCoord           (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInBottomTexCoord           (const Vec3f     &pOldElem,
                                            const Vec3f     &pNewElem);
    void removeFromBottomTexCoord          (      UInt32     uiIndex );
    void removeFromBottomTexCoord          (const Vec3f     &value   );
    void clearBottomTexCoord               (      void               );



    void pushToRightTexCoord               (const Vec3f     &value   );
    void insertIntoRightTexCoord           (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInRightTexCoord            (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInRightTexCoord            (const Vec3f     &pOldElem,
                                            const Vec3f     &pNewElem);
    void removeFromRightTexCoord           (      UInt32     uiIndex );
    void removeFromRightTexCoord           (const Vec3f     &value   );
    void clearRightTexCoord                (      void               );



    void pushToLeftTexCoord                (const Vec3f     &value   );
    void insertIntoLeftTexCoord            (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInLeftTexCoord             (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInLeftTexCoord             (const Vec3f     &pOldElem,
                                            const Vec3f     &pNewElem);
    void removeFromLeftTexCoord            (      UInt32     uiIndex );
    void removeFromLeftTexCoord            (const Vec3f     &value   );
    void clearLeftTexCoord                 (      void               );



    void pushToFrontTexCoord               (const Vec3f     &value   );
    void insertIntoFrontTexCoord           (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInFrontTexCoord            (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInFrontTexCoord            (const Vec3f     &pOldElem,
                                            const Vec3f     &pNewElem);
    void removeFromFrontTexCoord           (      UInt32     uiIndex );
    void removeFromFrontTexCoord           (const Vec3f     &value   );
    void clearFrontTexCoord                (      void               );



    void pushToBackTexCoord                (const Vec3f     &value   );
    void insertIntoBackTexCoord            (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInBackTexCoord             (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInBackTexCoord             (const Vec3f     &pOldElem,
                                            const Vec3f     &pNewElem);
    void removeFromBackTexCoord            (      UInt32     uiIndex );
    void removeFromBackTexCoord            (const Vec3f     &value   );
    void clearBackTexCoord                 (      void               );


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

    static  SkyBackgroundPtr create     (void);
    static  SkyBackgroundPtr createEmpty(void);

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

    MFColor4f         _mfSkyColor;
    MFReal32          _mfSkyAngle;
    MFColor4f         _mfGroundColor;
    MFReal32          _mfGroundAngle;
    SFUInt32          _sfSphereRes;
    SFTextureBaseChunkPtr _sfBackTexture;
    SFTextureBaseChunkPtr _sfBottomTexture;
    SFTextureBaseChunkPtr _sfFrontTexture;
    SFTextureBaseChunkPtr _sfLeftTexture;
    SFTextureBaseChunkPtr _sfRightTexture;
    SFTextureBaseChunkPtr _sfTopTexture;
    SFBool            _sfBoxInside;
    MFVec3f           _mfTopTexCoord;
    MFVec3f           _mfBottomTexCoord;
    MFVec3f           _mfRightTexCoord;
    MFVec3f           _mfLeftTexCoord;
    MFVec3f           _mfFrontTexCoord;
    MFVec3f           _mfBackTexCoord;
    SFNodePtr         _sfBeacon;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SkyBackgroundBase(void);
    SkyBackgroundBase(const SkyBackgroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SkyBackgroundBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const SkyBackground *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_FIELDCONTAINERPTR
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);

            void execSync (      SkyBackgroundBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      SkyBackgroundBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

#if 0
    virtual void execBeginEditV(ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);

            void execBeginEdit (ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);
#endif

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
    void operator =(const SkyBackgroundBase &source);
};

typedef SkyBackgroundBase *SkyBackgroundBaseP;

/** Type specific RefPtr type for SkyBackground. */
typedef RefPtr<SkyBackgroundPtr> SkyBackgroundRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<SkyBackgroundBase::isNodeCore>,
    CoredNodePtr<SkyBackground>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        SkyBackgroundNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGSKYBACKGROUNDBASE_H_ */
