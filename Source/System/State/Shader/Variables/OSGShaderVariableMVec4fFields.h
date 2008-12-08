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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADERVARIABLEMVEC4FFIELDS_H_
#define _OSGSHADERVARIABLEMVEC4FFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ShaderVariableMVec4f;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ShaderVariableMVec4fPtr

OSG_GEN_CONTAINERPTR(ShaderVariableMVec4f);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ShaderVariableMVec4f *> :
    public FieldTraitsFCPtrBase<ShaderVariableMVec4f *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ShaderVariableMVec4f *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFShaderVariableMVec4fPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFShaderVariableMVec4fPtr"; }
};

template<> inline
const Char8 *FieldTraits<ShaderVariableMVec4f *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderVariableMVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMVec4f *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderVariableMVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMVec4f *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderVariableMVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMVec4f *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderVariableMVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMVec4f *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderVariableMVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMVec4f *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderVariableMVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMVec4f *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderVariableMVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMVec4f *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderVariableMVec4fPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ShaderVariableMVec4fPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef PointerSField<ShaderVariableMVec4f *,
                      RecordedRefCountPolicy  > SFRecShaderVariableMVec4fPtr;
typedef PointerSField<ShaderVariableMVec4f *,
                      UnrecordedRefCountPolicy> SFUnrecShaderVariableMVec4fPtr;
typedef PointerSField<ShaderVariableMVec4f *,
                      WeakRefCountPolicy      > SFWeakShaderVariableMVec4fPtr;
typedef PointerSField<ShaderVariableMVec4f *,
                      NoRefCountPolicy        > SFUncountedShaderVariableMVec4fPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef PointerMField<ShaderVariableMVec4f *,
                      RecordedRefCountPolicy  > MFRecShaderVariableMVec4fPtr;
typedef PointerMField<ShaderVariableMVec4f *,
                      UnrecordedRefCountPolicy> MFUnrecShaderVariableMVec4fPtr;
typedef PointerMField<ShaderVariableMVec4f *,
                      WeakRefCountPolicy      > MFWeakShaderVariableMVec4fPtr;
typedef PointerMField<ShaderVariableMVec4f *,
                      NoRefCountPolicy        > MFUncountedShaderVariableMVec4fPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGSHADERVARIABLEMVEC4FFIELDS_H_ */