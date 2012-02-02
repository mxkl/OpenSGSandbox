/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class CSMStatisticsForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &CSMStatisticsForegroundBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CSMStatisticsForegroundBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CSMStatisticsForegroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the CSMStatisticsForeground::_sfSize field.

inline
UInt32 &CSMStatisticsForegroundBase::editSize(void)
{
    editSField(SizeFieldMask);

    return _sfSize.getValue();
}

//! Get the value of the CSMStatisticsForeground::_sfSize field.
inline
      UInt32  CSMStatisticsForegroundBase::getSize(void) const
{
    return _sfSize.getValue();
}

//! Set the value of the CSMStatisticsForeground::_sfSize field.
inline
void CSMStatisticsForegroundBase::setSize(const UInt32 value)
{
    editSField(SizeFieldMask);

    _sfSize.setValue(value);
}
//! Get the value of the CSMStatisticsForeground::_sfColor field.

inline
Color4f &CSMStatisticsForegroundBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the CSMStatisticsForeground::_sfColor field.
inline
const Color4f &CSMStatisticsForegroundBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the CSMStatisticsForeground::_sfColor field.
inline
void CSMStatisticsForegroundBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}

//! Get the value of the \a index element the CSMStatisticsForeground::_mfElements field.
inline
const std::string &CSMStatisticsForegroundBase::getElements(const UInt32 index) const
{
    return _mfElements[index];
}

inline
std::string &CSMStatisticsForegroundBase::editElements(const UInt32 index)
{
    editMField(ElementsFieldMask, _mfElements);

    return _mfElements[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void CSMStatisticsForegroundBase::execSync (      CSMStatisticsForegroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pFrom->_sfSize);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pFrom->_sfColor);

    if(FieldBits::NoField != (ElementsFieldMask & whichField))
        _mfElements.syncWith(pFrom->_mfElements,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *CSMStatisticsForegroundBase::getClassname(void)
{
    return "CSMStatisticsForeground";
}
OSG_GEN_CONTAINERPTR(CSMStatisticsForeground);

OSG_END_NAMESPACE

