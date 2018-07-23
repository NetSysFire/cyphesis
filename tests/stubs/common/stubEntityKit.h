// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubEntityKit_custom.h file.

#ifndef STUB_COMMON_ENTITYKIT_H
#define STUB_COMMON_ENTITYKIT_H

#include "common/EntityKit.h"
#include "stubEntityKit_custom.h"

#ifndef STUB_EntityKit_EntityKit
//#define STUB_EntityKit_EntityKit
   EntityKit::EntityKit()
    : m_type(nullptr)
  {
    
  }
#endif //STUB_EntityKit_EntityKit

#ifndef STUB_EntityKit_newEntity
//#define STUB_EntityKit_newEntity
  Ref<LocatedEntity> EntityKit::newEntity(const std::string & id, long intId, const Atlas::Objects::Entity::RootEntity & attributes, LocatedEntity* location)
  {
    return *static_cast<Ref<LocatedEntity>*>(nullptr);
  }
#endif //STUB_EntityKit_newEntity

#ifndef STUB_EntityKit_addProperties
//#define STUB_EntityKit_addProperties
  void EntityKit::addProperties()
  {
    
  }
#endif //STUB_EntityKit_addProperties

#ifndef STUB_EntityKit_updateProperties
//#define STUB_EntityKit_updateProperties
  void EntityKit::updateProperties(std::map<const TypeNode*, TypeNode::PropertiesUpdate>& changes)
  {
    
  }
#endif //STUB_EntityKit_updateProperties


#endif