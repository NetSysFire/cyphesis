// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubExternalMind_custom.h file.

#ifndef STUB_RULES_SIMULATION_EXTERNALMIND_H
#define STUB_RULES_SIMULATION_EXTERNALMIND_H

#include "rules/simulation/ExternalMind.h"
#include "stubExternalMind_custom.h"

#ifndef STUB_ExternalMind_deleteEntity
//#define STUB_ExternalMind_deleteEntity
  void ExternalMind::deleteEntity(const std::string& id, bool forceDelete)
  {
    
  }
#endif //STUB_ExternalMind_deleteEntity

#ifndef STUB_ExternalMind_purgeEntity
//#define STUB_ExternalMind_purgeEntity
  void ExternalMind::purgeEntity(const LocatedEntity& ent, bool forceDelete )
  {
    
  }
#endif //STUB_ExternalMind_purgeEntity

#ifndef STUB_ExternalMind_RelayOperation
//#define STUB_ExternalMind_RelayOperation
  void ExternalMind::RelayOperation(const Operation& op, OpVector& res)
  {
    
  }
#endif //STUB_ExternalMind_RelayOperation

#ifndef STUB_ExternalMind_externalRelayedOperation
//#define STUB_ExternalMind_externalRelayedOperation
  void ExternalMind::externalRelayedOperation(const Operation& op)
  {
    
  }
#endif //STUB_ExternalMind_externalRelayedOperation

#ifndef STUB_ExternalMind_ExternalMind
//#define STUB_ExternalMind_ExternalMind
   ExternalMind::ExternalMind(RouterId id, Ref<LocatedEntity> entity)
    : Router(id, entity)
    , m_link(nullptr)
  {
    
  }
#endif //STUB_ExternalMind_ExternalMind

#ifndef STUB_ExternalMind_ExternalMind_DTOR
//#define STUB_ExternalMind_ExternalMind_DTOR
   ExternalMind::~ExternalMind()
  {
    
  }
#endif //STUB_ExternalMind_ExternalMind_DTOR

#ifndef STUB_ExternalMind_externalOperation
//#define STUB_ExternalMind_externalOperation
  void ExternalMind::externalOperation(const Operation& op, Link&)
  {
    
  }
#endif //STUB_ExternalMind_externalOperation

#ifndef STUB_ExternalMind_operation
//#define STUB_ExternalMind_operation
  void ExternalMind::operation(const Operation&, OpVector&)
  {
    
  }
#endif //STUB_ExternalMind_operation

#ifndef STUB_ExternalMind_getEntity
//#define STUB_ExternalMind_getEntity
  const Ref<LocatedEntity>& ExternalMind::getEntity() const
  {
    return *static_cast<const Ref<LocatedEntity>*>(nullptr);
  }
#endif //STUB_ExternalMind_getEntity

#ifndef STUB_ExternalMind_connectionId
//#define STUB_ExternalMind_connectionId
  const std::string& ExternalMind::connectionId()
  {
    static std::string instance; return instance;
  }
#endif //STUB_ExternalMind_connectionId

#ifndef STUB_ExternalMind_linkUp
//#define STUB_ExternalMind_linkUp
  void ExternalMind::linkUp(Link* c)
  {
    
  }
#endif //STUB_ExternalMind_linkUp

#ifndef STUB_ExternalMind_addToEntity
//#define STUB_ExternalMind_addToEntity
  void ExternalMind::addToEntity(const Atlas::Objects::Entity::RootEntity&) const
  {
    
  }
#endif //STUB_ExternalMind_addToEntity

#ifndef STUB_ExternalMind_GetOperation
//#define STUB_ExternalMind_GetOperation
  void ExternalMind::GetOperation(const Operation& smartPtr, OpVector& res)
  {
    
  }
#endif //STUB_ExternalMind_GetOperation


#endif