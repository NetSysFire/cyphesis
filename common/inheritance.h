// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2000-2004 Alistair Riddoch

#ifndef COMMON_INHERITANCE_H
#define COMMON_INHERITANCE_H

#include "types.h"

#include <iostream>

namespace Atlas {
  namespace Objects {
    class Root;
  }
}

void installStandardObjects();
void installCustomOperations();
void installCustomEntities();

/// \brief Exception class for exceptions thrown when a child is added to
/// to Inheritance with a parent that is currently unknown
class InheritanceException {
  private:
    const std::string parent;
  public:
    InheritanceException(const std::string & p) : parent(p) { }
    const std::string & getParent() { return parent; }
};

/// \brief Base class for factories to create Operation instances
class OpFactoryBase {
  public:
    virtual ~OpFactoryBase();

    virtual Atlas::Objects::Operation::RootOperation * newOperation() = 0;
    virtual void newOperation(Atlas::Objects::Operation::RootOperation &) = 0;
};

/// \brief Class template for factories to create Operation instances of
/// the given Operation class.
template <class OpClass>
class OpFactory : public OpFactoryBase {
  public:
    virtual Atlas::Objects::Operation::RootOperation * newOperation();
    virtual void newOperation(Atlas::Objects::Operation::RootOperation &);
};

/// \brief Class for factories to create Operation instance with no hard coded
/// class using the Generic Operation class.
class GenericOpFactory : public OpFactoryBase {
  private:
    std::string m_opType;
  public:
    explicit GenericOpFactory(const std::string & opType);

    virtual Atlas::Objects::Operation::RootOperation * newOperation();
    virtual void newOperation(Atlas::Objects::Operation::RootOperation &);
};

typedef std::map<std::string, OpFactoryBase *> OpFactoryDict;
typedef std::map<std::string, Atlas::Objects::Root *> RootDict;

/// \brief Class to manage the inheritance tree for in-game entity types
class Inheritance {
  protected:
    RootDict atlasObjects;
    OpNoDict opLookup;
    OpFactoryDict opFactories;

    static Inheritance * m_instance;

    Inheritance();

    void flush();
  public:
    static Inheritance & instance();
    static void clear();

    void opInstall(const std::string & op, OpNo no, OpFactoryBase * f) {
        opLookup[op] = no;
        opFactories[op] = f;
    }

    OpNo opEnumerate(const std::string & parent) const;
    OpNo opEnumerate(const Atlas::Objects::Operation::RootOperation &) const;
    Atlas::Objects::Root * get(const std::string & parent);
    int addChild(Atlas::Objects::Root * obj);
    Atlas::Objects::Operation::RootOperation * newOperation(const std::string &);
    int newOperation(const std::string &, Atlas::Objects::Operation::RootOperation &);
};

#endif // COMMON_INHERITANCE_H
