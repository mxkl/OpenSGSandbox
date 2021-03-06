/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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
 **     class CSMMultiWinOptions!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &CSMMultiWinOptionsBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CSMMultiWinOptionsBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CSMMultiWinOptionsBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the CSMMultiWinOptions::_sfXOverlap field.

inline
Int32 &CSMMultiWinOptionsBase::editXOverlap(void)
{
    editSField(XOverlapFieldMask);

    return _sfXOverlap.getValue();
}

//! Get the value of the CSMMultiWinOptions::_sfXOverlap field.
inline
      Int32  CSMMultiWinOptionsBase::getXOverlap(void) const
{
    return _sfXOverlap.getValue();
}

//! Set the value of the CSMMultiWinOptions::_sfXOverlap field.
inline
void CSMMultiWinOptionsBase::setXOverlap(const Int32 value)
{
    editSField(XOverlapFieldMask);

    _sfXOverlap.setValue(value);
}
//! Get the value of the CSMMultiWinOptions::_sfYOverlap field.

inline
Int32 &CSMMultiWinOptionsBase::editYOverlap(void)
{
    editSField(YOverlapFieldMask);

    return _sfYOverlap.getValue();
}

//! Get the value of the CSMMultiWinOptions::_sfYOverlap field.
inline
      Int32  CSMMultiWinOptionsBase::getYOverlap(void) const
{
    return _sfYOverlap.getValue();
}

//! Set the value of the CSMMultiWinOptions::_sfYOverlap field.
inline
void CSMMultiWinOptionsBase::setYOverlap(const Int32 value)
{
    editSField(YOverlapFieldMask);

    _sfYOverlap.setValue(value);
}
//! Get the value of the CSMMultiWinOptions::_sfManageClientViewports field.

inline
bool &CSMMultiWinOptionsBase::editManageClientViewports(void)
{
    editSField(ManageClientViewportsFieldMask);

    return _sfManageClientViewports.getValue();
}

//! Get the value of the CSMMultiWinOptions::_sfManageClientViewports field.
inline
      bool  CSMMultiWinOptionsBase::getManageClientViewports(void) const
{
    return _sfManageClientViewports.getValue();
}

//! Set the value of the CSMMultiWinOptions::_sfManageClientViewports field.
inline
void CSMMultiWinOptionsBase::setManageClientViewports(const bool value)
{
    editSField(ManageClientViewportsFieldMask);

    _sfManageClientViewports.setValue(value);
}
//! Get the value of the CSMMultiWinOptions::_sfBalance field.

inline
bool &CSMMultiWinOptionsBase::editBalance(void)
{
    editSField(BalanceFieldMask);

    return _sfBalance.getValue();
}

//! Get the value of the CSMMultiWinOptions::_sfBalance field.
inline
      bool  CSMMultiWinOptionsBase::getBalance(void) const
{
    return _sfBalance.getValue();
}

//! Set the value of the CSMMultiWinOptions::_sfBalance field.
inline
void CSMMultiWinOptionsBase::setBalance(const bool value)
{
    editSField(BalanceFieldMask);

    _sfBalance.setValue(value);
}
//! Get the value of the CSMMultiWinOptions::_sfBestCut field.

inline
bool &CSMMultiWinOptionsBase::editBestCut(void)
{
    editSField(BestCutFieldMask);

    return _sfBestCut.getValue();
}

//! Get the value of the CSMMultiWinOptions::_sfBestCut field.
inline
      bool  CSMMultiWinOptionsBase::getBestCut(void) const
{
    return _sfBestCut.getValue();
}

//! Set the value of the CSMMultiWinOptions::_sfBestCut field.
inline
void CSMMultiWinOptionsBase::setBestCut(const bool value)
{
    editSField(BestCutFieldMask);

    _sfBestCut.setValue(value);
}
//! Get the value of the CSMMultiWinOptions::_sfShowBalancing field.

inline
bool &CSMMultiWinOptionsBase::editShowBalancing(void)
{
    editSField(ShowBalancingFieldMask);

    return _sfShowBalancing.getValue();
}

//! Get the value of the CSMMultiWinOptions::_sfShowBalancing field.
inline
      bool  CSMMultiWinOptionsBase::getShowBalancing(void) const
{
    return _sfShowBalancing.getValue();
}

//! Set the value of the CSMMultiWinOptions::_sfShowBalancing field.
inline
void CSMMultiWinOptionsBase::setShowBalancing(const bool value)
{
    editSField(ShowBalancingFieldMask);

    _sfShowBalancing.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void CSMMultiWinOptionsBase::execSync (      CSMMultiWinOptionsBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (XOverlapFieldMask & whichField))
        _sfXOverlap.syncWith(pFrom->_sfXOverlap);

    if(FieldBits::NoField != (YOverlapFieldMask & whichField))
        _sfYOverlap.syncWith(pFrom->_sfYOverlap);

    if(FieldBits::NoField != (ManageClientViewportsFieldMask & whichField))
        _sfManageClientViewports.syncWith(pFrom->_sfManageClientViewports);

    if(FieldBits::NoField != (BalanceFieldMask & whichField))
        _sfBalance.syncWith(pFrom->_sfBalance);

    if(FieldBits::NoField != (BestCutFieldMask & whichField))
        _sfBestCut.syncWith(pFrom->_sfBestCut);

    if(FieldBits::NoField != (ShowBalancingFieldMask & whichField))
        _sfShowBalancing.syncWith(pFrom->_sfShowBalancing);
}
#endif


inline
const Char8 *CSMMultiWinOptionsBase::getClassname(void)
{
    return "CSMMultiWinOptions";
}
OSG_GEN_CONTAINERPTR(CSMMultiWinOptions);

OSG_END_NAMESPACE

