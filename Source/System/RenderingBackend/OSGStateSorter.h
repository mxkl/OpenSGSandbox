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

#ifndef _OSGSTATESORTER_H_
#define _OSGSTATESORTER_H_
#ifdef __sgi
#pragma once
#endif

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <map>

#include "OSGRenderingBackendFwd.h"
#include "OSGBaseTypes.h"

#include "OSGHashSorter.h"

OSG_BEGIN_NAMESPACE

//---------------------------------------------------------------------------
//  Forward References
//---------------------------------------------------------------------------

class State;

//---------------------------------------------------------------------------
//   Types
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//  Class
//---------------------------------------------------------------------------


/*! \brief StateSorter class
    \ingroup GrpSystemRenderingBackendBase
    \ingroup GrpLibOSGSystem
 */

class OSG_SYSTEM_DLLMAPPING StateSorter
{
  public:

    //-----------------------------------------------------------------------
    //   constants                                                             
    //-----------------------------------------------------------------------
   
    //-----------------------------------------------------------------------
    //   enums                                                               
    //-----------------------------------------------------------------------

    enum SortMode
    {
        StateKey  = 0x0001,
        ScalarKey = 0x0002
    };

    //-----------------------------------------------------------------------
    //   types                                                               
    //-----------------------------------------------------------------------

    typedef HashSorter                                    Sorter;

    typedef std::map<UInt32 , RenderTreeNode *>           MapSorter;
    typedef std::map<UInt32 , RenderTreeNode *>::iterator MapSorterIt;

    //-----------------------------------------------------------------------
    //   class functions                                                     
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   class functions                                                     
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   instance functions                                                  
    //-----------------------------------------------------------------------

    /*------------------------- your_category -------------------------------*/

    /*------------------------- your_operators ------------------------------*/

    /*------------------------- assignment ----------------------------------*/
    
    void setNodePool(RenderTreeNodePool *pNodePool);
    void setSortMode(SortMode            eMode    );

    /*------------------------- comparison ----------------------------------*/

    void reset(void);

    /*------------------------- comparison ----------------------------------*/

    void add(RenderTreeNode *pNode,
             State          *pState,
             StateOverride  *pStateOverride,
             UInt32          uiKeyGen      );

    /*-------------------------- comparison ---------------------------------*/

    RenderTreeNode *getRoot(void);

    /*-------------------------- comparison ---------------------------------*/

  protected:

    //-----------------------------------------------------------------------
    //   enums                                                               
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   types                                                               
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   class variables                                                     
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   class functions                                                     
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   instance variables                                                  
    //-----------------------------------------------------------------------

    RenderTreeNodePool *_pNodePool;
    UInt32              _uiNodePoolIdx;
    RenderTreeNode     *_pRoot;

    Sorter              _oSorter;

    SortMode            _eSortMode;
    MapSorter           _mFallbackSorter;

    //-----------------------------------------------------------------------
    //   instance functions                                                  
    //-----------------------------------------------------------------------

    StateSorter(void);
    ~StateSorter(void);

  private:

    //-----------------------------------------------------------------------
    //   enums                                                               
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   types                                                               
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   friend classes                                                      
    //-----------------------------------------------------------------------

    friend class SimplePool<StateSorter>;

    //-----------------------------------------------------------------------
    //   friend functions                                                    
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   class variables                                                     
    //-----------------------------------------------------------------------
   
    //-----------------------------------------------------------------------
    //   class functions                                                     
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   instance variables                                                  
    //-----------------------------------------------------------------------
    
    //-----------------------------------------------------------------------
    //   instance functions                                                  
    //-----------------------------------------------------------------------

    /*!\brief prohibit default function (move to 'public' if needed) */
    StateSorter(const StateSorter &other);
    void operator =(const StateSorter &source);    
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

OSG_END_NAMESPACE

#include "OSGStateSorter.inl"

#endif /* _OSGSTATESORTER_H_ */


