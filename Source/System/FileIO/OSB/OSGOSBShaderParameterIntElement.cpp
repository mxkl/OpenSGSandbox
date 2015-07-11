/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                   Copyright (C) 2013 by the OpenSG Forum                  *
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

#include "OSGOSBShaderParameterIntElement.h"

#include "OSGOSBRootElement.h"

OSG_BEGIN_NAMESPACE

/*-------------------------------------------------------------------------*/
/* OSBShaderParameterIntElement                                             */
/*-------------------------------------------------------------------------*/

/*! Reads the ShaderParameterInt from OpenSG 1.x and stores it's value
    so OSBSHLChunkElement can add it as a uniform, see
    OSBSHLChunkElement::postRead().
 */

/*-------------------------------------------------------------------------*/
/* Static members                                                          */

OSBElementRegistrationHelper<OSBShaderParameterIntElement>
    OSBShaderParameterIntElement::_regHelper =
        OSBElementRegistrationHelper<OSBShaderParameterIntElement>(
            "ShaderParameterInt");

/*-------------------------------------------------------------------------*/
/* Constructor                                                             */

OSBShaderParameterIntElement::OSBShaderParameterIntElement(
    OSBRootElement *root) : 

     Inherited(root, OSGOSBHeaderVersion200),
    _value    (0                           )
{
}

/*-------------------------------------------------------------------------*/
/* Destructor                                                              */

OSBShaderParameterIntElement::~OSBShaderParameterIntElement(void)
{
}

/*-------------------------------------------------------------------------*/
/* Reading                                                                 */

void
OSBShaderParameterIntElement::read(const std::string &typeName)
{
    OSG_OSB_LOG(("OSBShaderParameterIntElement::read: [%s]\n",
                 typeName.c_str()));

    BinaryReadHandler *rh = editRoot()->getReadHandler();

    UInt8  ptrTypeId;
    UInt16 version;

    rh->getValue(ptrTypeId);
    rh->getValue(version  );

    OSG_OSB_LOG(("OSBShaderParameterIntElement::read: version: [%u]\n",
                 version));

    std::string    fieldName;
    std::string    fieldTypeName;
    UInt32         fieldSize;
    PtrFieldListIt ptrFieldIt;

    while(readFieldHeader("", fieldName, fieldTypeName, fieldSize))
    {
        if(fieldName == "name")
        {
            _name.copyFromBin(*rh);
        }
        else if(fieldName == "value")
        {
            _value.copyFromBin(*rh);
        }
        else
        {
            OSG_OSB_LOG(("Skipping [%d] bytes for field [%s]\n",
                         fieldSize, fieldName.c_str()));
            rh->skip(fieldSize);
        }
    }

    // no container is created for this element, which means the root does
    // not automatically insert it into the IdElemMap - do it manually
    editRoot()->editIdElemMap().insert(
        OSBRootElement::IdElemMap::value_type(getFCIdFile(), this));
}

void
OSBShaderParameterIntElement::postRead(void)
{
    OSG_OSB_LOG(("OSBShaderParameterIntElement::postRead:\n"));
}

/*-------------------------------------------------------------------------*/
/* Writing                                                                 */

void
OSBShaderParameterIntElement::preWrite(FieldContainer * const)
{
    // This can not be called, ShaderParameterInt does not exist
    OSG_ASSERT(false);
}

void
OSBShaderParameterIntElement::write(void)
{
    // This can not be called, ShaderParameterInt does not exist
    OSG_ASSERT(false);
}

/*-------------------------------------------------------------------------*/
/* Access                                                                  */

Int32
OSBShaderParameterIntElement::getValue(void) const
{
    return _value.getValue();
}

OSG_END_NAMESPACE
