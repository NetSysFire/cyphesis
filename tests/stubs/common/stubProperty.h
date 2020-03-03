// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubProperty_custom.h file.

#ifndef STUB_COMMON_PROPERTY_H
#define STUB_COMMON_PROPERTY_H

#include "common/Property.h"
#include "stubProperty_custom.h"

#ifndef STUB_PropertyBase_PropertyBase
//#define STUB_PropertyBase_PropertyBase
   PropertyBase::PropertyBase(std::uint32_t flags )
    : OperationsListener(flags)
  {
    
  }
#endif //STUB_PropertyBase_PropertyBase

#ifndef STUB_PropertyBase_install
//#define STUB_PropertyBase_install
  void PropertyBase::install(LocatedEntity *, const std::string &)
  {
    
  }
#endif //STUB_PropertyBase_install

#ifndef STUB_PropertyBase_install
//#define STUB_PropertyBase_install
  void PropertyBase::install(TypeNode *, const std::string &)
  {
    
  }
#endif //STUB_PropertyBase_install

#ifndef STUB_PropertyBase_remove
//#define STUB_PropertyBase_remove
  void PropertyBase::remove(LocatedEntity *, const std::string & name)
  {
    
  }
#endif //STUB_PropertyBase_remove

#ifndef STUB_PropertyBase_apply
//#define STUB_PropertyBase_apply
  void PropertyBase::apply(LocatedEntity *)
  {
    
  }
#endif //STUB_PropertyBase_apply

#ifndef STUB_PropertyBase_get
//#define STUB_PropertyBase_get
  int PropertyBase::get(Atlas::Message::Element & val) const
  {
    return 0;
  }
#endif //STUB_PropertyBase_get

#ifndef STUB_PropertyBase_set
//#define STUB_PropertyBase_set
  void PropertyBase::set(const Atlas::Message::Element & val)
  {
    
  }
#endif //STUB_PropertyBase_set

#ifndef STUB_PropertyBase_add
//#define STUB_PropertyBase_add
  void PropertyBase::add(const std::string & key, Atlas::Message::MapType & map) const
  {
    
  }
#endif //STUB_PropertyBase_add

#ifndef STUB_PropertyBase_add
//#define STUB_PropertyBase_add
  void PropertyBase::add(const std::string & key, const Atlas::Objects::Entity::RootEntity & ent) const
  {
    
  }
#endif //STUB_PropertyBase_add

#ifndef STUB_PropertyBase_operation
//#define STUB_PropertyBase_operation
  HandlerResult PropertyBase::operation(LocatedEntity *, const Operation &, OpVector &)
  {
    return *static_cast<HandlerResult*>(nullptr);
  }
#endif //STUB_PropertyBase_operation

#ifndef STUB_PropertyBase_copy
//#define STUB_PropertyBase_copy
  PropertyBase* PropertyBase::copy() const
  {
    return nullptr;
  }
#endif //STUB_PropertyBase_copy

#ifndef STUB_PropertyBase_flagsForPropertyName
//#define STUB_PropertyBase_flagsForPropertyName
   std::uint32_t PropertyBase::flagsForPropertyName(const std::string& name)
  {
    return 0;
  }
#endif //STUB_PropertyBase_flagsForPropertyName

#ifndef STUB_PropertyBase_isValidName
//#define STUB_PropertyBase_isValidName
   bool PropertyBase::isValidName(const std::string& name)
  {
    return false;
  }
#endif //STUB_PropertyBase_isValidName

#ifndef STUB_PropertyBase_operator_EQUALS
//#define STUB_PropertyBase_operator_EQUALS
  bool PropertyBase::operator==(const PropertyBase& rhs) const
  {
    return false;
  }
#endif //STUB_PropertyBase_operator_EQUALS


#ifndef STUB_Property_Property
//#define STUB_Property_Property
  template <typename T>
   Property<T>::Property(unsigned int flags )
    : PropertyBase(flags)
  {
    
  }
#endif //STUB_Property_Property

#ifndef STUB_Property_get
//#define STUB_Property_get
  template <typename T>
  int Property<T>::get(Atlas::Message::Element & val) const
  {
    return 0;
  }
#endif //STUB_Property_get

#ifndef STUB_Property_set
//#define STUB_Property_set
  template <typename T>
  void Property<T>::set(const Atlas::Message::Element &)
  {
    
  }
#endif //STUB_Property_set

#ifndef STUB_Property_add
//#define STUB_Property_add
  template <typename T>
  void Property<T>::add(const std::string & key, Atlas::Message::MapType & map) const
  {
    
  }
#endif //STUB_Property_add

#ifndef STUB_Property_add
//#define STUB_Property_add
  template <typename T>
  void Property<T>::add(const std::string & key, const Atlas::Objects::Entity::RootEntity & ent) const
  {
    
  }
#endif //STUB_Property_add

#ifndef STUB_Property_copy
//#define STUB_Property_copy
  template <typename T>
  Property<T>* Property<T>::copy() const
  {
    return nullptr;
  }
#endif //STUB_Property_copy


#ifndef STUB_SoftProperty_SoftProperty
//#define STUB_SoftProperty_SoftProperty
   SoftProperty::SoftProperty(Atlas::Message::Element  data)
    : PropertyBase(data)
  {
    
  }
#endif //STUB_SoftProperty_SoftProperty

#ifndef STUB_SoftProperty_get
//#define STUB_SoftProperty_get
  int SoftProperty::get(Atlas::Message::Element & val) const
  {
    return 0;
  }
#endif //STUB_SoftProperty_get

#ifndef STUB_SoftProperty_set
//#define STUB_SoftProperty_set
  void SoftProperty::set(const Atlas::Message::Element & val)
  {
    
  }
#endif //STUB_SoftProperty_set

#ifndef STUB_SoftProperty_copy
//#define STUB_SoftProperty_copy
  SoftProperty* SoftProperty::copy() const
  {
    return nullptr;
  }
#endif //STUB_SoftProperty_copy

#ifndef STUB_SoftProperty_data
//#define STUB_SoftProperty_data
  Atlas::Message::Element& SoftProperty::data()
  {
    return *static_cast<Atlas::Message::Element*>(nullptr);
  }
#endif //STUB_SoftProperty_data

#ifndef STUB_SoftProperty_data
//#define STUB_SoftProperty_data
  const Atlas::Message::Element& SoftProperty::data() const
  {
    return *static_cast<const Atlas::Message::Element*>(nullptr);
  }
#endif //STUB_SoftProperty_data


#ifndef STUB_BoolProperty_get
//#define STUB_BoolProperty_get
  int BoolProperty::get(Atlas::Message::Element & val) const
  {
    return 0;
  }
#endif //STUB_BoolProperty_get

#ifndef STUB_BoolProperty_set
//#define STUB_BoolProperty_set
  void BoolProperty::set(const Atlas::Message::Element & val)
  {
    
  }
#endif //STUB_BoolProperty_set

#ifndef STUB_BoolProperty_copy
//#define STUB_BoolProperty_copy
  BoolProperty* BoolProperty::copy() const
  {
    return nullptr;
  }
#endif //STUB_BoolProperty_copy

#ifndef STUB_BoolProperty_isTrue
//#define STUB_BoolProperty_isTrue
  bool BoolProperty::isTrue() const
  {
    return false;
  }
#endif //STUB_BoolProperty_isTrue


#endif