// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubEntityBuilder_custom.h file.

#ifndef STUB_SERVER_ENTITYBUILDER_H
#define STUB_SERVER_ENTITYBUILDER_H

#include "server/EntityBuilder.h"
#include "stubEntityBuilder_custom.h"

#ifndef STUB_EntityBuilder_EntityBuilder
//#define STUB_EntityBuilder_EntityBuilder
   EntityBuilder::EntityBuilder()
    : EntityCreator()
  {
    
  }
#endif //STUB_EntityBuilder_EntityBuilder

#ifndef STUB_EntityBuilder_EntityBuilder_DTOR
//#define STUB_EntityBuilder_EntityBuilder_DTOR
   EntityBuilder::~EntityBuilder()
  {
    
  }
#endif //STUB_EntityBuilder_EntityBuilder_DTOR

#ifndef STUB_EntityBuilder_installFactory
//#define STUB_EntityBuilder_installFactory
  int EntityBuilder::installFactory(const std::string & class_name, const Atlas::Objects::Root & class_desc, std::unique_ptr<EntityKit> factory)
  {
    return 0;
  }
#endif //STUB_EntityBuilder_installFactory

#ifndef STUB_EntityBuilder_getClassFactory
//#define STUB_EntityBuilder_getClassFactory
  EntityKit* EntityBuilder::getClassFactory(const std::string & class_name) const
  {
    return nullptr;
  }
#endif //STUB_EntityBuilder_getClassFactory

#ifndef STUB_EntityBuilder_newEntity
//#define STUB_EntityBuilder_newEntity
  Ref<Entity> EntityBuilder::newEntity(RouterId id, const std::string & type, const Atlas::Objects::Entity::RootEntity & attrs) const
  {
    return *static_cast<Ref<Entity>*>(nullptr);
  }
#endif //STUB_EntityBuilder_newEntity

#ifndef STUB_EntityBuilder_newChildEntity
//#define STUB_EntityBuilder_newChildEntity
  Ref<Entity> EntityBuilder::newChildEntity(RouterId id, const std::string & type, const Atlas::Objects::Entity::RootEntity & attrs) const
  {
    return *static_cast<Ref<Entity>*>(nullptr);
  }
#endif //STUB_EntityBuilder_newChildEntity

#ifndef STUB_EntityBuilder_installBaseFactory
//#define STUB_EntityBuilder_installBaseFactory
  void EntityBuilder::installBaseFactory(const std::string & class_name, const std::string & parent, std::unique_ptr<EntityKit> factory)
  {
    
  }
#endif //STUB_EntityBuilder_installBaseFactory

#ifndef STUB_EntityBuilder_flushFactories
//#define STUB_EntityBuilder_flushFactories
  void EntityBuilder::flushFactories()
  {
    
  }
#endif //STUB_EntityBuilder_flushFactories


#endif