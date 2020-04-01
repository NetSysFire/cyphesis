// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubMindsProperty_custom.h file.

#ifndef STUB_RULES_SIMULATION_MINDSPROPERTY_H
#define STUB_RULES_SIMULATION_MINDSPROPERTY_H

#include "rules/simulation/MindsProperty.h"
#include "stubMindsProperty_custom.h"

#ifndef STUB_MindsProperty_MindsProperty
//#define STUB_MindsProperty_MindsProperty
   MindsProperty::MindsProperty()
    : PropertyBase()
  {
    
  }
#endif //STUB_MindsProperty_MindsProperty

#ifndef STUB_MindsProperty_MindsProperty_DTOR
//#define STUB_MindsProperty_MindsProperty_DTOR
   MindsProperty::~MindsProperty()
  {
    
  }
#endif //STUB_MindsProperty_MindsProperty_DTOR

#ifndef STUB_MindsProperty_get
//#define STUB_MindsProperty_get
  int MindsProperty::get(Atlas::Message::Element& val) const
  {
    return 0;
  }
#endif //STUB_MindsProperty_get

#ifndef STUB_MindsProperty_set
//#define STUB_MindsProperty_set
  void MindsProperty::set(const Atlas::Message::Element& val)
  {
    
  }
#endif //STUB_MindsProperty_set

#ifndef STUB_MindsProperty_add
//#define STUB_MindsProperty_add
  void MindsProperty::add(const std::string& val, Atlas::Message::MapType& map) const
  {
    
  }
#endif //STUB_MindsProperty_add

#ifndef STUB_MindsProperty_add
//#define STUB_MindsProperty_add
  void MindsProperty::add(const std::string& val, const Atlas::Objects::Entity::RootEntity& ent) const
  {
    
  }
#endif //STUB_MindsProperty_add

#ifndef STUB_MindsProperty_copy
//#define STUB_MindsProperty_copy
  MindsProperty* MindsProperty::copy() const
  {
    return nullptr;
  }
#endif //STUB_MindsProperty_copy

#ifndef STUB_MindsProperty_install
//#define STUB_MindsProperty_install
  void MindsProperty::install(LocatedEntity*, const std::string& name)
  {
    
  }
#endif //STUB_MindsProperty_install

#ifndef STUB_MindsProperty_remove
//#define STUB_MindsProperty_remove
  void MindsProperty::remove(LocatedEntity*, const std::string& name)
  {
    
  }
#endif //STUB_MindsProperty_remove

#ifndef STUB_MindsProperty_addMind
//#define STUB_MindsProperty_addMind
  void MindsProperty::addMind(Router* mind)
  {
    
  }
#endif //STUB_MindsProperty_addMind

#ifndef STUB_MindsProperty_removeMind
//#define STUB_MindsProperty_removeMind
  void MindsProperty::removeMind(Router* mind, LocatedEntity* entity)
  {
    
  }
#endif //STUB_MindsProperty_removeMind

#ifndef STUB_MindsProperty_getMinds
//#define STUB_MindsProperty_getMinds
  const std::vector<Router*>& MindsProperty::getMinds() const
  {
    static std::vector<Router*> instance; return instance;
  }
#endif //STUB_MindsProperty_getMinds

#ifndef STUB_MindsProperty_operation
//#define STUB_MindsProperty_operation
  HandlerResult MindsProperty::operation(LocatedEntity*, const Operation&, OpVector&)
  {
    return *static_cast<HandlerResult*>(nullptr);
  }
#endif //STUB_MindsProperty_operation

#ifndef STUB_MindsProperty_sendToMinds
//#define STUB_MindsProperty_sendToMinds
  void MindsProperty::sendToMinds(const Operation& op, OpVector& res) const
  {
    
  }
#endif //STUB_MindsProperty_sendToMinds

#ifndef STUB_MindsProperty_world2mind
//#define STUB_MindsProperty_world2mind
  bool MindsProperty::world2mind(const Operation& op) const
  {
    return false;
  }
#endif //STUB_MindsProperty_world2mind

#ifndef STUB_MindsProperty_ThoughtOperation
//#define STUB_MindsProperty_ThoughtOperation
  HandlerResult MindsProperty::ThoughtOperation(LocatedEntity* ent, const Operation& op, OpVector& res) const
  {
    return *static_cast<HandlerResult*>(nullptr);
  }
#endif //STUB_MindsProperty_ThoughtOperation

#ifndef STUB_MindsProperty_RelayOperation
//#define STUB_MindsProperty_RelayOperation
  HandlerResult MindsProperty::RelayOperation(LocatedEntity* ent, const Operation& op, OpVector& res)
  {
    return *static_cast<HandlerResult*>(nullptr);
  }
#endif //STUB_MindsProperty_RelayOperation

#ifndef STUB_MindsProperty_mindCreateOperation
//#define STUB_MindsProperty_mindCreateOperation
  void MindsProperty::mindCreateOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindCreateOperation

#ifndef STUB_MindsProperty_mindDeleteOperation
//#define STUB_MindsProperty_mindDeleteOperation
  void MindsProperty::mindDeleteOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindDeleteOperation

#ifndef STUB_MindsProperty_mindGoalInfoOperation
//#define STUB_MindsProperty_mindGoalInfoOperation
  void MindsProperty::mindGoalInfoOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindGoalInfoOperation

#ifndef STUB_MindsProperty_mindImaginaryOperation
//#define STUB_MindsProperty_mindImaginaryOperation
  void MindsProperty::mindImaginaryOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindImaginaryOperation

#ifndef STUB_MindsProperty_mindLookOperation
//#define STUB_MindsProperty_mindLookOperation
  void MindsProperty::mindLookOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindLookOperation

#ifndef STUB_MindsProperty_mindMoveOperation
//#define STUB_MindsProperty_mindMoveOperation
  void MindsProperty::mindMoveOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindMoveOperation

#ifndef STUB_MindsProperty_mindSetOperation
//#define STUB_MindsProperty_mindSetOperation
  void MindsProperty::mindSetOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindSetOperation

#ifndef STUB_MindsProperty_mindTalkOperation
//#define STUB_MindsProperty_mindTalkOperation
  void MindsProperty::mindTalkOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindTalkOperation

#ifndef STUB_MindsProperty_mindThoughtOperation
//#define STUB_MindsProperty_mindThoughtOperation
  void MindsProperty::mindThoughtOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindThoughtOperation

#ifndef STUB_MindsProperty_mindThinkOperation
//#define STUB_MindsProperty_mindThinkOperation
  void MindsProperty::mindThinkOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindThinkOperation

#ifndef STUB_MindsProperty_mindTickOperation
//#define STUB_MindsProperty_mindTickOperation
  void MindsProperty::mindTickOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindTickOperation

#ifndef STUB_MindsProperty_mindTouchOperation
//#define STUB_MindsProperty_mindTouchOperation
  void MindsProperty::mindTouchOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindTouchOperation

#ifndef STUB_MindsProperty_mindUpdateOperation
//#define STUB_MindsProperty_mindUpdateOperation
  void MindsProperty::mindUpdateOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindUpdateOperation

#ifndef STUB_MindsProperty_mindUseOperation
//#define STUB_MindsProperty_mindUseOperation
  void MindsProperty::mindUseOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindUseOperation

#ifndef STUB_MindsProperty_mindWieldOperation
//#define STUB_MindsProperty_mindWieldOperation
  void MindsProperty::mindWieldOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindWieldOperation

#ifndef STUB_MindsProperty_mindOtherOperation
//#define STUB_MindsProperty_mindOtherOperation
  void MindsProperty::mindOtherOperation(LocatedEntity*, const Operation&, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mindOtherOperation

#ifndef STUB_MindsProperty_mind2body
//#define STUB_MindsProperty_mind2body
  void MindsProperty::mind2body(LocatedEntity*, const Operation& op, OpVector&) const
  {
    
  }
#endif //STUB_MindsProperty_mind2body


#endif