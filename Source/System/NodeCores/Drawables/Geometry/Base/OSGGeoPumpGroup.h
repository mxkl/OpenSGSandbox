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

#ifndef _OSGGEOPUMPGROUP_H_
#define _OSGGEOPUMPGROUP_H_
#ifdef __sgi
#pragma once
#endif

#include "utility"

#include "OSGBaseTypes.h"
#include "OSGBaseFunctions.h"
#include "OSGGeometry.h"

OSG_BEGIN_NAMESPACE

class Window;

/*! \brief A group of geometry pumps.
    \ingroup GrpDrawablesGeometryHelpers
 */

class OSG_DRAWABLE_DLLMAPPING GeoPumpGroup
{
    /*==========================  PUBLIC  =================================*/
  public:

    /*---------------------------------------------------------------------*/
    /*! \name         Property Characteristics Handling                    */
    /*! \{                                                                 */

    typedef UInt32 PropertyCharacteristics;
    
    enum
    {
        NonIndexed               = 0x00000001L,    
        SingleIndexed            = 0x00000002L,    
        MultiIndexed             = 0x00000004L,
        IndexMask                = 0x00000007L,

        NonTraditionalProperties = 0x00000008L,
        // this is actually set at render time dynamically
        UsesShader               = 0x00000010L,

        AllPropsVAO              = 0x00000100L,
        AllPropIdxVAO            = 0x00000200L, 
        AllVAOMask               = 0x00000300L
    };
    

    static std::string describePropertyCharacteristics(
                                        PropertyCharacteristics ac);

    static PropertyCharacteristics characterizeGeometry(Geometry *geo);
    
    static PropertyCharacteristics
        characterizeGeometry(const Geometry::MFPropertiesType  *prop,
                             const Geometry::MFPropIndicesType *propIdx);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Pump Types                                */
    /*! \{                                                                 */
    
    typedef void (*GeoPump)     (
              DrawEnv                     *pEnv,
        const GeoIntegralProperty         *lengths,
        const GeoIntegralProperty         *types,
        const Geometry::MFPropertiesType  *prop,
        const Geometry::MFPropIndicesType *propIdx,
              UInt32                       uiNumInst);

    typedef bool (*SetupGeoPump)(     
              DrawEnv                     *pEnv,
        const GeoIntegralProperty         *lengths,
        const GeoIntegralProperty         *types,
        const Geometry::MFPropertiesType  *prop,
        const Geometry::MFPropIndicesType *propIdx,
              bool                         withFallback);

    typedef bool (*ShutdownGeoPump)(     
              DrawEnv                     *pEnv,
        const GeoIntegralProperty         *lengths,
        const GeoIntegralProperty         *types,
        const Geometry::MFPropertiesType  *prop,
        const Geometry::MFPropIndicesType *propIdx);

    typedef void (*GeoDrawPump) (     
        DrawEnv                     *pEnv,
        const GeoIntegralProperty         *lengths,
        const GeoIntegralProperty         *types,
        const Geometry::MFPropertiesType  *prop,
        const Geometry::MFPropIndicesType *propIdx,
              UInt32                       uiNumInst);

    struct SplitGeoPump
    {
        SetupGeoPump    setupPump;
        GeoDrawPump     drawPump;
        ShutdownGeoPump shutdownPump;
    };

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Global Get                                */
    /*! \{                                                                 */

    static GeoPump      findGeoPump     (DrawEnv                 *pEnv,
                                         PropertyCharacteristics  acset);

    static SplitGeoPump findSplitGeoPump(DrawEnv                 *pEnv,
                                         PropertyCharacteristics  acset);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name               Pump Group Handling                            */
    /*! \{                                                                 */
    
    static inline std::vector<GeoPumpGroup*> &getActiveGroups(void);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    /*---------------------------------------------------------------------*/
    /*! \name               Single Group Get                               */
    /*! \{                                                                 */

    virtual GeoPump      getGeoPump     (DrawEnv                 *pEnv,
                                         PropertyCharacteristics  acset) = 0;

    virtual SplitGeoPump getSplitGeoPump(DrawEnv                 *pEnv,
                                         PropertyCharacteristics  acset);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    
    virtual ~GeoPumpGroup(void);

    /*==========================  PRIVATE  ================================*/

  private:
    
    static std::vector<GeoPumpGroup *> *_activeGroups;
    
    static InitFuncWrapper actInit;

    static bool initActiveGroups     (void);
    static bool terminateActiveGroups(void);
};

OSG_END_NAMESPACE

#include "OSGGeoPumpGroup.inl"

#endif /* _OSGGEOPUMPGROUP_H_ */
