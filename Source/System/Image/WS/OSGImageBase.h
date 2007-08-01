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
 **     class Image
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGIMAGEBASE_H_
#define _OSGIMAGEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGParentFieldContainerFields.h" // Parents type
#include "OSGInt32Fields.h" // Dimension type
#include "OSGInt32Fields.h" // Width type
#include "OSGInt32Fields.h" // Height type
#include "OSGInt32Fields.h" // Depth type
#include "OSGInt32Fields.h" // Bpp type
#include "OSGInt32Fields.h" // MipMapCount type
#include "OSGInt32Fields.h" // FrameCount type
#include "OSGTimeFields.h" // FrameDelay type
#include "OSGUInt32Fields.h" // PixelFormat type
#include "OSGUInt8Fields.h" // Pixel type
#include "OSGInt32Fields.h" // FrameSize type
#include "OSGStringFields.h" // Name type
#include "OSGInt32Fields.h" // DataType type
#include "OSGInt32Fields.h" // ComponentSize type
#include "OSGInt32Fields.h" // SideCount type
#include "OSGInt32Fields.h" // SideSize type
#include "OSGBoolFields.h" // ForceCompressedData type
#include "OSGBoolFields.h" // ForceAlphaChannel type
#include "OSGBoolFields.h" // ForceColorChannel type
#include "OSGBoolFields.h" // ForceAlphaBinary type
#include "OSGReal32Fields.h" // ResX type
#include "OSGReal32Fields.h" // ResY type
#include "OSGUInt16Fields.h" // ResUnit type

#include "OSGImageFields.h"

OSG_BEGIN_NAMESPACE

class Image;

//! \brief Image Base Class.

class OSG_SYSTEM_DLLMAPPING ImageBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Image);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ParentsFieldId = Inherited::NextFieldId,
        DimensionFieldId = ParentsFieldId + 1,
        WidthFieldId = DimensionFieldId + 1,
        HeightFieldId = WidthFieldId + 1,
        DepthFieldId = HeightFieldId + 1,
        BppFieldId = DepthFieldId + 1,
        MipMapCountFieldId = BppFieldId + 1,
        FrameCountFieldId = MipMapCountFieldId + 1,
        FrameDelayFieldId = FrameCountFieldId + 1,
        PixelFormatFieldId = FrameDelayFieldId + 1,
        PixelFieldId = PixelFormatFieldId + 1,
        FrameSizeFieldId = PixelFieldId + 1,
        NameFieldId = FrameSizeFieldId + 1,
        DataTypeFieldId = NameFieldId + 1,
        ComponentSizeFieldId = DataTypeFieldId + 1,
        SideCountFieldId = ComponentSizeFieldId + 1,
        SideSizeFieldId = SideCountFieldId + 1,
        ForceCompressedDataFieldId = SideSizeFieldId + 1,
        ForceAlphaChannelFieldId = ForceCompressedDataFieldId + 1,
        ForceColorChannelFieldId = ForceAlphaChannelFieldId + 1,
        ForceAlphaBinaryFieldId = ForceColorChannelFieldId + 1,
        ResXFieldId = ForceAlphaBinaryFieldId + 1,
        ResYFieldId = ResXFieldId + 1,
        ResUnitFieldId = ResYFieldId + 1,
        NextFieldId = ResUnitFieldId + 1
    };

    static const OSG::BitVector ParentsFieldMask =
        (TypeTraits<BitVector>::One << ParentsFieldId);
    static const OSG::BitVector DimensionFieldMask =
        (TypeTraits<BitVector>::One << DimensionFieldId);
    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask =
        (TypeTraits<BitVector>::One << HeightFieldId);
    static const OSG::BitVector DepthFieldMask =
        (TypeTraits<BitVector>::One << DepthFieldId);
    static const OSG::BitVector BppFieldMask =
        (TypeTraits<BitVector>::One << BppFieldId);
    static const OSG::BitVector MipMapCountFieldMask =
        (TypeTraits<BitVector>::One << MipMapCountFieldId);
    static const OSG::BitVector FrameCountFieldMask =
        (TypeTraits<BitVector>::One << FrameCountFieldId);
    static const OSG::BitVector FrameDelayFieldMask =
        (TypeTraits<BitVector>::One << FrameDelayFieldId);
    static const OSG::BitVector PixelFormatFieldMask =
        (TypeTraits<BitVector>::One << PixelFormatFieldId);
    static const OSG::BitVector PixelFieldMask =
        (TypeTraits<BitVector>::One << PixelFieldId);
    static const OSG::BitVector FrameSizeFieldMask =
        (TypeTraits<BitVector>::One << FrameSizeFieldId);
    static const OSG::BitVector NameFieldMask =
        (TypeTraits<BitVector>::One << NameFieldId);
    static const OSG::BitVector DataTypeFieldMask =
        (TypeTraits<BitVector>::One << DataTypeFieldId);
    static const OSG::BitVector ComponentSizeFieldMask =
        (TypeTraits<BitVector>::One << ComponentSizeFieldId);
    static const OSG::BitVector SideCountFieldMask =
        (TypeTraits<BitVector>::One << SideCountFieldId);
    static const OSG::BitVector SideSizeFieldMask =
        (TypeTraits<BitVector>::One << SideSizeFieldId);
    static const OSG::BitVector ForceCompressedDataFieldMask =
        (TypeTraits<BitVector>::One << ForceCompressedDataFieldId);
    static const OSG::BitVector ForceAlphaChannelFieldMask =
        (TypeTraits<BitVector>::One << ForceAlphaChannelFieldId);
    static const OSG::BitVector ForceColorChannelFieldMask =
        (TypeTraits<BitVector>::One << ForceColorChannelFieldId);
    static const OSG::BitVector ForceAlphaBinaryFieldMask =
        (TypeTraits<BitVector>::One << ForceAlphaBinaryFieldId);
    static const OSG::BitVector ResXFieldMask =
        (TypeTraits<BitVector>::One << ResXFieldId);
    static const OSG::BitVector ResYFieldMask =
        (TypeTraits<BitVector>::One << ResYFieldId);
    static const OSG::BitVector ResUnitFieldMask =
        (TypeTraits<BitVector>::One << ResUnitFieldId);
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
                  SFInt32             *getSFDimension       (void);
#endif
                  SFInt32             *editSFDimension      (void);
            const SFInt32             *getSFDimension       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFWidth           (void);
#endif
                  SFInt32             *editSFWidth          (void);
            const SFInt32             *getSFWidth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFHeight          (void);
#endif
                  SFInt32             *editSFHeight         (void);
            const SFInt32             *getSFHeight          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFDepth           (void);
#endif
                  SFInt32             *editSFDepth          (void);
            const SFInt32             *getSFDepth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFBpp             (void);
#endif
                  SFInt32             *editSFBpp            (void);
            const SFInt32             *getSFBpp             (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFMipMapCount     (void);
#endif
                  SFInt32             *editSFMipMapCount    (void);
            const SFInt32             *getSFMipMapCount     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFFrameCount      (void);
#endif
                  SFInt32             *editSFFrameCount     (void);
            const SFInt32             *getSFFrameCount      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFTime              *getSFFrameDelay      (void);
#endif
                  SFTime              *editSFFrameDelay     (void);
            const SFTime              *getSFFrameDelay      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFPixelFormat     (void);
#endif
                  SFUInt32            *editSFPixelFormat    (void);
            const SFUInt32            *getSFPixelFormat     (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFUInt8             *getMFPixel           (void);
#endif
                  MFUInt8             *editMFPixel          (void);
            const MFUInt8             *getMFPixel           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFFrameSize       (void);
#endif
                  SFInt32             *editSFFrameSize      (void);
            const SFInt32             *getSFFrameSize       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFString            *getSFName            (void);
#endif
                  SFString            *editSFName           (void);
            const SFString            *getSFName            (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFDataType        (void);
#endif
                  SFInt32             *editSFDataType       (void);
            const SFInt32             *getSFDataType        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFSideCount       (void);
#endif
                  SFInt32             *editSFSideCount      (void);
            const SFInt32             *getSFSideCount       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFSideSize        (void);
#endif
                  SFInt32             *editSFSideSize       (void);
            const SFInt32             *getSFSideSize        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFForceCompressedData (void);
#endif
                  SFBool              *editSFForceCompressedData(void);
            const SFBool              *getSFForceCompressedData (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFForceAlphaChannel (void);
#endif
                  SFBool              *editSFForceAlphaChannel(void);
            const SFBool              *getSFForceAlphaChannel (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFForceColorChannel (void);
#endif
                  SFBool              *editSFForceColorChannel(void);
            const SFBool              *getSFForceColorChannel (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFForceAlphaBinary (void);
#endif
                  SFBool              *editSFForceAlphaBinary(void);
            const SFBool              *getSFForceAlphaBinary (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFResX            (void);
#endif
                  SFReal32            *editSFResX           (void);
            const SFReal32            *getSFResX            (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFResY            (void);
#endif
                  SFReal32            *editSFResY           (void);
            const SFReal32            *getSFResY            (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt16            *getSFResUnit         (void);
#endif
                  SFUInt16            *editSFResUnit        (void);
            const SFUInt16            *getSFResUnit         (void) const;


#ifdef OSG_1_GET_COMPAT
                  Int32               &getDimension       (void);
#endif
                  Int32               &editDimension      (void);
            const Int32               &getDimension       (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getWidth           (void);
#endif
                  Int32               &editWidth          (void);
            const Int32               &getWidth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getHeight          (void);
#endif
                  Int32               &editHeight         (void);
            const Int32               &getHeight          (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getDepth           (void);
#endif
                  Int32               &editDepth          (void);
            const Int32               &getDepth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getBpp             (void);
#endif
                  Int32               &editBpp            (void);
            const Int32               &getBpp             (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getMipMapCount     (void);
#endif
                  Int32               &editMipMapCount    (void);
            const Int32               &getMipMapCount     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getFrameCount      (void);
#endif
                  Int32               &editFrameCount     (void);
            const Int32               &getFrameCount      (void) const;

#ifdef OSG_1_GET_COMPAT
                  Time                &getFrameDelay      (void);
#endif
                  Time                &editFrameDelay     (void);
            const Time                &getFrameDelay      (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getPixelFormat     (void);
#endif
                  UInt32              &editPixelFormat    (void);
            const UInt32              &getPixelFormat     (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt8               &getPixel           (const UInt32 index);
                  MFUInt8             &getPixel          (void);
#endif
                  UInt8               &editPixel          (const UInt32 index);
            const UInt8               &getPixel           (const UInt32 index) const;
                  MFUInt8             &editPixel          (void);
            const MFUInt8             &getPixel          (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getFrameSize       (void);
#endif
                  Int32               &editFrameSize      (void);
            const Int32               &getFrameSize       (void) const;

#ifdef OSG_1_GET_COMPAT
                  std::string         &getName            (void);
#endif
                  std::string         &editName           (void);
            const std::string         &getName            (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getDataType        (void);
#endif
                  Int32               &editDataType       (void);
            const Int32               &getDataType        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getSideCount       (void);
#endif
                  Int32               &editSideCount      (void);
            const Int32               &getSideCount       (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getSideSize        (void);
#endif
                  Int32               &editSideSize       (void);
            const Int32               &getSideSize        (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getForceCompressedData (void);
#endif
                  bool                &editForceCompressedData(void);
            const bool                &getForceCompressedData (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getForceAlphaChannel (void);
#endif
                  bool                &editForceAlphaChannel(void);
            const bool                &getForceAlphaChannel (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getForceColorChannel (void);
#endif
                  bool                &editForceColorChannel(void);
            const bool                &getForceColorChannel (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getForceAlphaBinary (void);
#endif
                  bool                &editForceAlphaBinary(void);
            const bool                &getForceAlphaBinary (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getResX            (void);
#endif
                  Real32              &editResX           (void);
            const Real32              &getResX            (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getResY            (void);
#endif
                  Real32              &editResY           (void);
            const Real32              &getResY            (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt16              &getResUnit         (void);
#endif
                  UInt16              &editResUnit        (void);
            const UInt16              &getResUnit         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDimension      (const Int32 &value);
            void setWidth          (const Int32 &value);
            void setHeight         (const Int32 &value);
            void setDepth          (const Int32 &value);
            void setBpp            (const Int32 &value);
            void setMipMapCount    (const Int32 &value);
            void setFrameCount     (const Int32 &value);
            void setFrameDelay     (const Time &value);
            void setPixelFormat    (const UInt32 &value);
            void setFrameSize      (const Int32 &value);
            void setName           (const std::string &value);
            void setDataType       (const Int32 &value);
            void setSideCount      (const Int32 &value);
            void setSideSize       (const Int32 &value);
            void setForceCompressedData(const bool &value);
            void setForceAlphaChannel(const bool &value);
            void setForceColorChannel(const bool &value);
            void setForceAlphaBinary(const bool &value);
            void setResX           (const Real32 &value);
            void setResY           (const Real32 &value);
            void setResUnit        (const UInt16 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */



    void pushToPixel                       (const UInt8     &value   );
    void insertIntoPixel                   (      UInt32     uiIndex,
                                            const UInt8     &value   );
    void replaceInPixel                    (      UInt32     uiIndex,
                                            const UInt8     &value   );
    void replaceInPixel                    (const UInt8     &pOldElem,
                                            const UInt8     &pNewElem);
    void removeFromPixel                   (      UInt32     uiIndex );
    void removeFromPixel                   (const UInt8     &value   );
    void clearPixel                        (      void               );


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

    static  ImagePtr create     (void);
    static  ImagePtr createEmpty(void);

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

    MFParentFieldContainerPtr _mfParents;
    SFInt32           _sfDimension;
    SFInt32           _sfWidth;
    SFInt32           _sfHeight;
    SFInt32           _sfDepth;
    SFInt32           _sfBpp;
    SFInt32           _sfMipMapCount;
    SFInt32           _sfFrameCount;
    SFTime            _sfFrameDelay;
    SFUInt32          _sfPixelFormat;
    MFUInt8           _mfPixel;
    SFInt32           _sfFrameSize;
    SFString          _sfName;
    SFInt32           _sfDataType;
    SFInt32           _sfComponentSize;
    SFInt32           _sfSideCount;
    SFInt32           _sfSideSize;
    SFBool            _sfForceCompressedData;
    SFBool            _sfForceAlphaChannel;
    SFBool            _sfForceColorChannel;
    SFBool            _sfForceAlphaBinary;
    SFReal32          _sfResX;
    SFReal32          _sfResY;
    SFUInt16          _sfResUnit;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ImageBase(void);
    ImageBase(const ImageBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ImageBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Image *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleParents         (void) const;
    EditFieldHandlePtr editHandleParents        (void);
    GetFieldHandlePtr  getHandleDimension       (void) const;
    EditFieldHandlePtr editHandleDimension      (void);
    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);
    GetFieldHandlePtr  getHandleHeight          (void) const;
    EditFieldHandlePtr editHandleHeight         (void);
    GetFieldHandlePtr  getHandleDepth           (void) const;
    EditFieldHandlePtr editHandleDepth          (void);
    GetFieldHandlePtr  getHandleBpp             (void) const;
    EditFieldHandlePtr editHandleBpp            (void);
    GetFieldHandlePtr  getHandleMipMapCount     (void) const;
    EditFieldHandlePtr editHandleMipMapCount    (void);
    GetFieldHandlePtr  getHandleFrameCount      (void) const;
    EditFieldHandlePtr editHandleFrameCount     (void);
    GetFieldHandlePtr  getHandleFrameDelay      (void) const;
    EditFieldHandlePtr editHandleFrameDelay     (void);
    GetFieldHandlePtr  getHandlePixelFormat     (void) const;
    EditFieldHandlePtr editHandlePixelFormat    (void);
    GetFieldHandlePtr  getHandlePixel           (void) const;
    EditFieldHandlePtr editHandlePixel          (void);
    GetFieldHandlePtr  getHandleFrameSize       (void) const;
    EditFieldHandlePtr editHandleFrameSize      (void);
    GetFieldHandlePtr  getHandleName            (void) const;
    EditFieldHandlePtr editHandleName           (void);
    GetFieldHandlePtr  getHandleDataType        (void) const;
    EditFieldHandlePtr editHandleDataType       (void);
    GetFieldHandlePtr  getHandleComponentSize   (void) const;
    EditFieldHandlePtr editHandleComponentSize  (void);
    GetFieldHandlePtr  getHandleSideCount       (void) const;
    EditFieldHandlePtr editHandleSideCount      (void);
    GetFieldHandlePtr  getHandleSideSize        (void) const;
    EditFieldHandlePtr editHandleSideSize       (void);
    GetFieldHandlePtr  getHandleForceCompressedData (void) const;
    EditFieldHandlePtr editHandleForceCompressedData(void);
    GetFieldHandlePtr  getHandleForceAlphaChannel (void) const;
    EditFieldHandlePtr editHandleForceAlphaChannel(void);
    GetFieldHandlePtr  getHandleForceColorChannel (void) const;
    EditFieldHandlePtr editHandleForceColorChannel(void);
    GetFieldHandlePtr  getHandleForceAlphaBinary (void) const;
    EditFieldHandlePtr editHandleForceAlphaBinary(void);
    GetFieldHandlePtr  getHandleResX            (void) const;
    EditFieldHandlePtr editHandleResX           (void);
    GetFieldHandlePtr  getHandleResY            (void) const;
    EditFieldHandlePtr editHandleResY           (void);
    GetFieldHandlePtr  getHandleResUnit         (void) const;
    EditFieldHandlePtr editHandleResUnit        (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFComponentSize   (void);
#endif
                  SFInt32             *editSFComponentSize  (void);
            const SFInt32             *getSFComponentSize   (void) const;


#ifdef OSG_1_GET_COMPAT
                  Int32               &getComponentSize   (void);
#endif
                  Int32               &editComponentSize  (void);
            const Int32               &getComponentSize   (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setComponentSize  (const Int32 &value);

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

            void execSync (      ImageBase *pFrom,
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
    void operator =(const ImageBase &source);
};

typedef ImageBase *ImageBaseP;

/** Type specific RefPtr type for Image. */
typedef RefPtr<ImagePtr> ImageRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<ImageBase::isNodeCore>,
    CoredNodePtr<Image>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        ImageNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGIMAGEBASE_H_ */
