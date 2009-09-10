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


#ifndef _OSGGLOBALSATTACHMENTFIELDS_H_
#define _OSGGLOBALSATTACHMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGBaseDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class GlobalsAttachment;

OSG_GEN_CONTAINERPTR(GlobalsAttachment);

/*! \ingroup GrpBaseFieldTraits
    \ingroup GrpLibOSGBase
 */
template <>
struct FieldTraits<GlobalsAttachment *> :
    public FieldTraitsFCPtrBase<GlobalsAttachment *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GlobalsAttachment *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_BASE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGlobalsAttachmentPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGlobalsAttachmentPtr"; }
};

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGlobalsAttachmentPtr"; 
}


/*! \ingroup GrpBaseFieldTraits
 */
template <>
struct FieldTraits<GlobalsAttachment *, 1> :
    public FieldTraitsFCPtrBase<GlobalsAttachment *, 1>
{
  private:

  public:
    typedef FieldTraits<GlobalsAttachment *, 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_BASE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildGlobalsAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlobalsAttachment *, 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildGlobalsAttachmentPtr"; 
}


/*! \ingroup GrpBaseFieldTraits
 */
template <>
struct FieldTraits<GlobalsAttachment *, 2> : 
    public FieldTraitsFCPtrBase<GlobalsAttachment *, 2>
{
  private:

    static  DataType                                _type;

  public:

    static const bool bIsPointerField = true;

    typedef FieldTraits<GlobalsAttachment *, 2>        Self;


    enum             { Convertible = Self::NotConvertible };
    
    static OSG_BASE_DLLMAPPING
                 DataType &getType (void);

    static const Char8    *getSName(void) 
    {
        return "SFParentGlobalsAttachmentPtr"; 
    }

    static const Char8    *getMName(void) 
    { 
        return "MFParentGlobalsAttachmentPtr"; 
    }
};

#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpBaseFieldSFields */
typedef PointerSField<GlobalsAttachment *,
                      RecordedRefCountPolicy  > SFRecGlobalsAttachmentPtr;
/*! \ingroup GrpBaseFieldSFields */
typedef PointerSField<GlobalsAttachment *,
                      UnrecordedRefCountPolicy> SFUnrecGlobalsAttachmentPtr;
/*! \ingroup GrpBaseFieldSFields */
typedef PointerSField<GlobalsAttachment *,
                      WeakRefCountPolicy      > SFWeakGlobalsAttachmentPtr;
/*! \ingroup GrpBaseFieldSFields */
typedef PointerSField<GlobalsAttachment *,
                      NoRefCountPolicy        > SFUncountedGlobalsAttachmentPtr;


/*! \ingroup GrpBaseFieldMFields */
typedef PointerMField<GlobalsAttachment *,
                      RecordedRefCountPolicy  > MFRecGlobalsAttachmentPtr;
/*! \ingroup GrpBaseFieldMFields */
typedef PointerMField<GlobalsAttachment *,
                      UnrecordedRefCountPolicy> MFUnrecGlobalsAttachmentPtr;
/*! \ingroup GrpBaseFieldMFields */
typedef PointerMField<GlobalsAttachment *,
                      WeakRefCountPolicy      > MFWeakGlobalsAttachmentPtr;
/*! \ingroup GrpBaseFieldMFields */
typedef PointerMField<GlobalsAttachment *,
                      NoRefCountPolicy        > MFUncountedGlobalsAttachmentPtr;



/*! \ingroup GrpBaseFieldSFields */
typedef ChildPointerSField<
          GlobalsAttachment *, 
          UnrecordedRefCountPolicy,
          1             > SFUnrecChildGlobalsAttachmentPtr;


/*! \ingroup GrpBaseFieldMFields */
typedef ChildPointerMField<
          GlobalsAttachment *, 
          UnrecordedRefCountPolicy,
          1             > MFUnrecChildGlobalsAttachmentPtr;


/*! \ingroup GrpBaseFieldSFields */
typedef ParentPointerSField<
          GlobalsAttachment *, 
          NoRefCountPolicy,
          2    > SFParentGlobalsAttachmentPtr;

/*! \ingroup GrpBaseFieldMFields */
typedef ParentPointerMField<
          GlobalsAttachment *, 
          NoRefCountPolicy,
          2    > MFParentGlobalsAttachmentPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpBaseFieldSFields \ingroup GrpLibOSGBase */
struct SFRecGlobalsAttachmentPtr : 
    public PointerSField<GlobalsAttachment *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpBaseFieldSFields \ingroup GrpLibOSGBase */
struct SFUnrecGlobalsAttachmentPtr : 
    public PointerSField<GlobalsAttachment *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpBaseFieldSFields \ingroup GrpLibOSGBase */
struct SFWeakGlobalsAttachmentPtr :
    public PointerSField<GlobalsAttachment *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpBaseFieldSFields \ingroup GrpLibOSGBase */
struct SFUncountedGlobalsAttachmentPtr :
    public PointerSField<GlobalsAttachment *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpBaseFieldMFields \ingroup GrpLibOSGBase */
struct MFRecGlobalsAttachmentPtr :
    public PointerMField<GlobalsAttachment *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpBaseFieldMFields \ingroup GrpLibOSGBase */
struct MFUnrecGlobalsAttachmentPtr :
    public PointerMField<GlobalsAttachment *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpBaseFieldMFields \ingroup GrpLibOSGBase */
struct MFWeakGlobalsAttachmentPtr :
    public PointerMField<GlobalsAttachment *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpBaseFieldMFields \ingroup GrpLibOSGBase */
struct MFUncountedGlobalsAttachmentPtr :
    public PointerMField<GlobalsAttachment *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpBaseFieldSFields \ingroup GrpLibOSGBase */
struct SFUnrecChildGlobalsAttachmentPtr :
    public ChildPointerSField<
        GlobalsAttachment *, 
        UnrecordedRefCountPolicy,
        1             > {};


/*! \ingroup GrpBaseFieldMFields \ingroup GrpLibOSGBase */
struct MFUnrecChildGlobalsAttachmentPtr :
    public ChildPointerMField<
        GlobalsAttachment *, 
        UnrecordedRefCountPolicy,
        1             > {};


/*! \ingroup GrpBaseFieldSFields \ingroup GrpLibOSGBase */
struct SFParentGlobalsAttachmentPtr :
    public ParentPointerSField<
        GlobalsAttachment *, 
        NoRefCountPolicy,
        2    > {};

/*! \ingroup GrpBaseFieldMFields \ingroup GrpLibOSGBase */
struct MFParentGlobalsAttachmentPtr :
    public  ParentPointerMField<
        GlobalsAttachment *, 
        NoRefCountPolicy,
        2    > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGLOBALSATTACHMENTFIELDS_H_ */