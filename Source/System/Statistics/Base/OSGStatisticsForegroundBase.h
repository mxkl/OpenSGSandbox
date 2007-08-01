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
 **     class StatisticsForeground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSTATISTICSFOREGROUNDBASE_H_
#define _OSGSTATISTICSFOREGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGForeground.h" // Parent

#include "OSGInt32Fields.h" // ElementIDs type
#include "OSGStatCollectorPFields.h" // Collector type

#include "OSGStatisticsForegroundFields.h"

OSG_BEGIN_NAMESPACE

class StatisticsForeground;

//! \brief StatisticsForeground Base Class.

class OSG_SYSTEM_DLLMAPPING StatisticsForegroundBase : public Foreground
{
  public:

    typedef Foreground Inherited;
    typedef Foreground ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(StatisticsForeground);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ElementIDsFieldId = Inherited::NextFieldId,
        CollectorFieldId = ElementIDsFieldId + 1,
        NextFieldId = CollectorFieldId + 1
    };

    static const OSG::BitVector ElementIDsFieldMask =
        (TypeTraits<BitVector>::One << ElementIDsFieldId);
    static const OSG::BitVector CollectorFieldMask =
        (TypeTraits<BitVector>::One << CollectorFieldId);
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
                  MFInt32             *getMFElementIDs      (void);
#endif
                  MFInt32             *editMFElementIDs     (void);
            const MFInt32             *getMFElementIDs      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFStatCollectorP    *getSFCollector       (void);
#endif
                  SFStatCollectorP    *editSFCollector      (void);
            const SFStatCollectorP    *getSFCollector       (void) const;


#ifdef OSG_1_GET_COMPAT
                  Int32               &getElementIDs      (const UInt32 index);
                  MFInt32             &getElementIDs     (void);
#endif
                  Int32               &editElementIDs     (const UInt32 index);
            const Int32               &getElementIDs      (const UInt32 index) const;
                  MFInt32             &editElementIDs     (void);
            const MFInt32             &getElementIDs     (void) const;

#ifdef OSG_1_GET_COMPAT
                  StatCollectorP      &getCollector       (void);
#endif
                  StatCollectorP      &editCollector      (void);
            const StatCollectorP      &getCollector       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setCollector      (const StatCollectorP &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */


    void pushToElementIDs                  (const Int32     &value   );
    void insertIntoElementIDs              (      UInt32     uiIndex,
                                            const Int32     &value   );
    void replaceInElementIDs               (      UInt32     uiIndex,
                                            const Int32     &value   );
    void replaceInElementIDs               (const Int32     &pOldElem,
                                            const Int32     &pNewElem);
    void removeFromElementIDs              (      UInt32     uiIndex );
    void removeFromElementIDs              (const Int32     &value   );
    void clearElementIDs                   (      void               );


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
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFInt32           _mfElementIDs;
    SFStatCollectorP  _sfCollector;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    StatisticsForegroundBase(void);
    StatisticsForegroundBase(const StatisticsForegroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~StatisticsForegroundBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleElementIDs      (void) const;
    EditFieldHandlePtr editHandleElementIDs     (void);
    GetFieldHandlePtr  getHandleCollector       (void) const;
    EditFieldHandlePtr editHandleCollector      (void);

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

            void execSync (      StatisticsForegroundBase *pFrom,
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
    void operator =(const StatisticsForegroundBase &source);
};

typedef StatisticsForegroundBase *StatisticsForegroundBaseP;

/** Type specific RefPtr type for StatisticsForeground. */
typedef RefPtr<StatisticsForegroundPtr> StatisticsForegroundRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<StatisticsForegroundBase::isNodeCore>,
    CoredNodePtr<StatisticsForeground>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        StatisticsForegroundNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGSTATISTICSFOREGROUNDBASE_H_ */
