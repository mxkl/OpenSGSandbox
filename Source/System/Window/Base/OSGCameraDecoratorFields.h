/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCAMERADECORATORFIELDS_H_
#define _OSGCAMERADECORATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class CameraDecorator;

OSG_GEN_CONTAINERPTR(CameraDecorator);
/*! \ingroup GrpSystemWindowFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<CameraDecorator *, nsOSG> :
    public FieldTraitsFCPtrBase<CameraDecorator *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<CameraDecorator *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<CameraDecorator *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CameraDecorator *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CameraDecorator *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CameraDecorator *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CameraDecorator *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CameraDecorator *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CameraDecorator *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CameraDecorator *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCameraDecoratorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<CameraDecorator *,
                      RecordedRefCountPolicy, nsOSG  > SFRecCameraDecoratorPtr;
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<CameraDecorator *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecCameraDecoratorPtr;
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<CameraDecorator *,
                      WeakRefCountPolicy, nsOSG      > SFWeakCameraDecoratorPtr;
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<CameraDecorator *,
                      NoRefCountPolicy, nsOSG        > SFUncountedCameraDecoratorPtr;


/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<CameraDecorator *,
                      RecordedRefCountPolicy, nsOSG  > MFRecCameraDecoratorPtr;
/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<CameraDecorator *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecCameraDecoratorPtr;
/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<CameraDecorator *,
                      WeakRefCountPolicy, nsOSG      > MFWeakCameraDecoratorPtr;
/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<CameraDecorator *,
                      NoRefCountPolicy, nsOSG        > MFUncountedCameraDecoratorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecCameraDecoratorPtr : 
    public PointerSField<CameraDecorator *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecCameraDecoratorPtr : 
    public PointerSField<CameraDecorator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakCameraDecoratorPtr :
    public PointerSField<CameraDecorator *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedCameraDecoratorPtr :
    public PointerSField<CameraDecorator *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecCameraDecoratorPtr :
    public PointerMField<CameraDecorator *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecCameraDecoratorPtr :
    public PointerMField<CameraDecorator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakCameraDecoratorPtr :
    public PointerMField<CameraDecorator *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedCameraDecoratorPtr :
    public PointerMField<CameraDecorator *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCAMERADECORATORFIELDS_H_ */
