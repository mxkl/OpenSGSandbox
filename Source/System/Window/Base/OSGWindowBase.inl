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
 **     class Window!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &WindowBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 WindowBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 WindowBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the Window::_sfWidth field.

inline
UInt16 &WindowBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the Window::_sfWidth field.
inline
      UInt16  WindowBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the Window::_sfWidth field.
inline
void WindowBase::setWidth(const UInt16 value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the Window::_sfHeight field.

inline
UInt16 &WindowBase::editHeight(void)
{
    editSField(HeightFieldMask);

    return _sfHeight.getValue();
}

//! Get the value of the Window::_sfHeight field.
inline
      UInt16  WindowBase::getHeight(void) const
{
    return _sfHeight.getValue();
}

//! Set the value of the Window::_sfHeight field.
inline
void WindowBase::setHeight(const UInt16 value)
{
    editSField(HeightFieldMask);

    _sfHeight.setValue(value);
}
//! Get the value of the Window::_sfGlObjectEventCounter field.

inline
UInt32 &WindowBase::editGlObjectEventCounter(void)
{
    editSField(GlObjectEventCounterFieldMask);

    return _sfGlObjectEventCounter.getValue();
}

//! Get the value of the Window::_sfGlObjectEventCounter field.
inline
      UInt32  WindowBase::getGlObjectEventCounter(void) const
{
    return _sfGlObjectEventCounter.getValue();
}

//! Set the value of the Window::_sfGlObjectEventCounter field.
inline
void WindowBase::setGlObjectEventCounter(const UInt32 value)
{
    editSField(GlObjectEventCounterFieldMask);

    _sfGlObjectEventCounter.setValue(value);
}
//! Get the value of the Window::_sfDrawerId field.

inline
Int32 &WindowBase::editDrawerId(void)
{
    editSField(DrawerIdFieldMask);

    return _sfDrawerId.getValue();
}

//! Get the value of the Window::_sfDrawerId field.
inline
      Int32  WindowBase::getDrawerId(void) const
{
    return _sfDrawerId.getValue();
}

//! Set the value of the Window::_sfDrawerId field.
inline
void WindowBase::setDrawerId(const Int32 value)
{
    editSField(DrawerIdFieldMask);

    _sfDrawerId.setValue(value);
}
//! Get the value of the Window::_sfRequestMajor field.

inline
Int32 &WindowBase::editRequestMajor(void)
{
    editSField(RequestMajorFieldMask);

    return _sfRequestMajor.getValue();
}

//! Get the value of the Window::_sfRequestMajor field.
inline
      Int32  WindowBase::getRequestMajor(void) const
{
    return _sfRequestMajor.getValue();
}

//! Set the value of the Window::_sfRequestMajor field.
inline
void WindowBase::setRequestMajor(const Int32 value)
{
    editSField(RequestMajorFieldMask);

    _sfRequestMajor.setValue(value);
}
//! Get the value of the Window::_sfRequestMinor field.

inline
Int32 &WindowBase::editRequestMinor(void)
{
    editSField(RequestMinorFieldMask);

    return _sfRequestMinor.getValue();
}

//! Get the value of the Window::_sfRequestMinor field.
inline
      Int32  WindowBase::getRequestMinor(void) const
{
    return _sfRequestMinor.getValue();
}

//! Set the value of the Window::_sfRequestMinor field.
inline
void WindowBase::setRequestMinor(const Int32 value)
{
    editSField(RequestMinorFieldMask);

    _sfRequestMinor.setValue(value);
}
//! Get the value of the Window::_sfContextFlags field.

inline
Int32 &WindowBase::editContextFlags(void)
{
    editSField(ContextFlagsFieldMask);

    return _sfContextFlags.getValue();
}

//! Get the value of the Window::_sfContextFlags field.
inline
      Int32  WindowBase::getContextFlags(void) const
{
    return _sfContextFlags.getValue();
}

//! Set the value of the Window::_sfContextFlags field.
inline
void WindowBase::setContextFlags(const Int32 value)
{
    editSField(ContextFlagsFieldMask);

    _sfContextFlags.setValue(value);
}

//! Get the value of the Window::_sfRenderOptions field.
inline
RenderOptions * WindowBase::getRenderOptions(void) const
{
    return _sfRenderOptions.getValue();
}

//! Set the value of the Window::_sfRenderOptions field.
inline
void WindowBase::setRenderOptions(RenderOptions * const value)
{
    editSField(RenderOptionsFieldMask);

    _sfRenderOptions.setValue(value);
}
//! Get the value of the Window::_sfDrawMode field.

inline
UInt32 &WindowBase::editDrawMode(void)
{
    editSField(DrawModeFieldMask);

    return _sfDrawMode.getValue();
}

//! Get the value of the Window::_sfDrawMode field.
inline
      UInt32  WindowBase::getDrawMode(void) const
{
    return _sfDrawMode.getValue();
}

//! Set the value of the Window::_sfDrawMode field.
inline
void WindowBase::setDrawMode(const UInt32 value)
{
    editSField(DrawModeFieldMask);

    _sfDrawMode.setValue(value);
}
//! Get the value of the Window::_sfRendererInfo field.

inline
std::string &WindowBase::editRendererInfo(void)
{
    editSField(RendererInfoFieldMask);

    return _sfRendererInfo.getValue();
}

//! Get the value of the Window::_sfRendererInfo field.
inline
const std::string &WindowBase::getRendererInfo(void) const
{
    return _sfRendererInfo.getValue();
}

//! Set the value of the Window::_sfRendererInfo field.
inline
void WindowBase::setRendererInfo(const std::string &value)
{
    editSField(RendererInfoFieldMask);

    _sfRendererInfo.setValue(value);
}

//! Get the value of the \a index element the Window::_mfPort field.
inline
Viewport * WindowBase::getPort(const UInt32 index) const
{
    return _mfPort[index];
}

//! Get the value of the \a index element the Window::_mfGlObjectLastRefresh field.
inline
      UInt32  WindowBase::getGlObjectLastRefresh(const UInt32 index) const
{
    return _mfGlObjectLastRefresh[index];
}

inline
UInt32 &WindowBase::editGlObjectLastRefresh(const UInt32 index)
{
    editMField(GlObjectLastRefreshFieldMask, _mfGlObjectLastRefresh);

    return _mfGlObjectLastRefresh[index];
}


//! Get the value of the \a index element the Window::_mfGlObjectLastReinitialize field.
inline
      UInt32  WindowBase::getGlObjectLastReinitialize(const UInt32 index) const
{
    return _mfGlObjectLastReinitialize[index];
}

inline
UInt32 &WindowBase::editGlObjectLastReinitialize(const UInt32 index)
{
    editMField(GlObjectLastReinitializeFieldMask, _mfGlObjectLastReinitialize);

    return _mfGlObjectLastReinitialize[index];
}


//! Get the value of the \a index element the Window::_mfDrawTasks field.
inline
DrawTask * WindowBase::getDrawTasks(const UInt32 index) const
{
    return _mfDrawTasks[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void WindowBase::execSync (      WindowBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pFrom->_sfHeight);

    if(FieldBits::NoField != (PortFieldMask & whichField))
        _mfPort.syncWith(pFrom->_mfPort,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (GlObjectEventCounterFieldMask & whichField))
        _sfGlObjectEventCounter.syncWith(pFrom->_sfGlObjectEventCounter);

    if(FieldBits::NoField != (GlObjectLastRefreshFieldMask & whichField))
        _mfGlObjectLastRefresh.syncWith(pFrom->_mfGlObjectLastRefresh,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (GlObjectLastReinitializeFieldMask & whichField))
        _mfGlObjectLastReinitialize.syncWith(pFrom->_mfGlObjectLastReinitialize,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (DrawerIdFieldMask & whichField))
        _sfDrawerId.syncWith(pFrom->_sfDrawerId);

    if(FieldBits::NoField != (RequestMajorFieldMask & whichField))
        _sfRequestMajor.syncWith(pFrom->_sfRequestMajor);

    if(FieldBits::NoField != (RequestMinorFieldMask & whichField))
        _sfRequestMinor.syncWith(pFrom->_sfRequestMinor);

    if(FieldBits::NoField != (ContextFlagsFieldMask & whichField))
        _sfContextFlags.syncWith(pFrom->_sfContextFlags);

    if(FieldBits::NoField != (RenderOptionsFieldMask & whichField))
        _sfRenderOptions.syncWith(pFrom->_sfRenderOptions);

    if(FieldBits::NoField != (DrawModeFieldMask & whichField))
        _sfDrawMode.syncWith(pFrom->_sfDrawMode);

    if(FieldBits::NoField != (RendererInfoFieldMask & whichField))
        _sfRendererInfo.syncWith(pFrom->_sfRendererInfo);

    if(FieldBits::NoField != (DrawTasksFieldMask & whichField))
        _mfDrawTasks.syncWith(pFrom->_mfDrawTasks,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *WindowBase::getClassname(void)
{
    return "Window";
}
OSG_GEN_CONTAINERPTR(Window);

OSG_END_NAMESPACE

