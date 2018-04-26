// Cyphesis Online RPG Server and AI Engine
// Copyright (C) 2000-2004 Alistair Riddoch
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA


#ifndef COMMON_INHERITANCE_H
#define COMMON_INHERITANCE_H

#include "Singleton.h"

#include <Atlas/Objects/ObjectsFwd.h>
#include <Atlas/Objects/Root.h>
#include <Atlas/Objects/SmartPtr.h>

#include <sigc++/signal.h>

class PropertyBase;
class TypeNode;

typedef std::map<std::string, PropertyBase *> PropertyDict;
typedef std::map<std::string, TypeNode *> TypeNodeDict;

/// \brief Class to manage the inheritance tree for in-game entity types
class Inheritance : public Singleton<Inheritance> {
  protected:
    const Atlas::Objects::Root noClass;
    TypeNodeDict atlasObjects;


  public:

    Inheritance();

    ~Inheritance() override;

    const TypeNodeDict & getAllObjects() const {
        return atlasObjects;
    }

    const Atlas::Objects::Root & getClass(const std::string & parent);
    int updateClass(const std::string & name,
                    const Atlas::Objects::Root & obj);
    const TypeNode * getType(const std::string & parent);
    bool hasClass(const std::string & parent);
    TypeNode * addChild(const Atlas::Objects::Root & obj);
    bool isTypeOf(const std::string & instance,
                  const std::string & base_type) const;
    bool isTypeOf(const TypeNode * instance,
                  const std::string & base_type) const;
    bool isTypeOf(const TypeNode * instance,
                  const TypeNode * base_type) const;
    void flush();

    /**
     * Emitted when a type has been changed.
     */
    sigc::signal<void, TypeNode*> typeUpdated;
};

Atlas::Objects::Root atlasOpDefinition(const std::string & name,
                                       const std::string & parent);
Atlas::Objects::Root atlasClass(const std::string & name,
                                const std::string & parent);
Atlas::Objects::Root atlasType(const std::string & name,
                               const std::string & parent,
                               bool abstract = false);

void installStandardObjects(Inheritance & i);
void installCustomOperations(Inheritance & i);
void installCustomEntities(Inheritance & i);
#endif // COMMON_INHERITANCE_H
