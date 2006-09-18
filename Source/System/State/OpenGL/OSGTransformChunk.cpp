/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#include "OSGConfig.h"

#include <OSGGL.h>

#include "OSGTransformChunk.h"

OSG_USING_NAMESPACE


/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TransformChunk
    \ingroup GrpSystemState

See \ref PageSystemTransformChunk for a description.

This chunk wraps glMultMatrix() for the GL_MODELVIEW matrix mode.

*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

StateChunkClass TransformChunk::_class("Transform", 1, 200);

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TransformChunk::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

TransformChunk::TransformChunk(void) :
    Inherited()
{
}

TransformChunk::TransformChunk(const TransformChunk &source) :
    Inherited(source)
{
}

TransformChunk::~TransformChunk(void)
{
}

/*------------------------- Chunk Class Access ---------------------------*/

const StateChunkClass *TransformChunk::getClass(void) const
{
    return &_class;
}

/*------------------------------- Sync -----------------------------------*/

void TransformChunk::changed(ConstFieldMaskArg whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

/*------------------------------ Output ----------------------------------*/

void TransformChunk::dump(      UInt32    OSG_CHECK_ARG(uiIndent),
                          const BitVector OSG_CHECK_ARG(bvFlags )) const
{
    SLOG << "Dump TransformChunk NI" << std::endl;
}


/*------------------------------ State ------------------------------------*/

void TransformChunk::activate(DrawEnv *,  UInt32)
{
    glPushMatrix();
    glMultMatrixf( getMatrix().getValues() );
}

void TransformChunk::changeFrom(DrawEnv *,  StateChunk *old, UInt32)
{
    // change from me to me?
    // this assumes I haven't changed in the meantime. 
    // is that a valid assumption?

    if(old == this)
        return;

    glPopMatrix();
    glPushMatrix();
    glMultMatrixf( getMatrix().getValues() );
}

void TransformChunk::deactivate(DrawEnv *,  UInt32)
{
    glPopMatrix();
}

/*-------------------------- Comparison -----------------------------------*/

Real32 TransformChunk::switchCost(StateChunk *OSG_CHECK_ARG(chunk))
{
    return 0;
}

bool TransformChunk::operator < (const StateChunk &other) const
{
    return this < &other;
}

bool TransformChunk::operator == (const StateChunk &other) const
{
    TransformChunk const *tother = dynamic_cast<TransformChunk const*>(&other);

    if ( !tother )
        return false;

    if(tother == this)
        return true;

    return getMatrix().equals( tother->getMatrix(), Eps );
}

bool TransformChunk::operator != (const StateChunk &other) const
{
    return ! (*this == other);
}

/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id$";
    static Char8 cvsid_hpp       [] = OSGTRANSFORMCHUNK_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTRANSFORMCHUNK_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTRANSFORMCHUNKFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif


