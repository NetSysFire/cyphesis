/*
 Copyright (C) 2020 Erik Ogenvik

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef CYPHESIS_CONTAINERACCESSPROPERTY_H
#define CYPHESIS_CONTAINERACCESSPROPERTY_H

#include "common/Property.h"
#include "rules/LocatedEntity.h"
#include <vector>

class ContainerDomain;

class ContainerAccessProperty : public PropertyBase
{
    public:


        static constexpr const char* property_name = "__container_access";
        static constexpr const char* property_atlastype = "list";

        explicit ContainerAccessProperty(ContainerDomain& container);

        int get(Atlas::Message::Element&) const override;

        void set(const Atlas::Message::Element&) override;

        ContainerAccessProperty* copy() const override;


    protected:

        ContainerDomain& m_container;
};


#endif //CYPHESIS_CONTAINERACCESSPROPERTY_H
