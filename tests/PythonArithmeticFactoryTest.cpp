// Cyphesis Online RPG Server and AI Engine
// Copyright (C) 2009 Alistair Riddoch
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


#ifdef NDEBUG
#undef NDEBUG
#endif
#ifndef DEBUG
#define DEBUG
#endif

#include <Python.h>

#include "python_testers.h"

#include "rulesets/Entity.h"
#include "rulesets/PythonArithmeticFactory.h"
#include "rulesets/PythonArithmeticScript.h"
#include "rulesets/Python_API.h"
#include "rulesets/Script.h"

#include "common/log.h"
#include "common/compose.hpp"

#include <Atlas/Objects/SmartPtr.h>
#include <Atlas/Objects/Root.h>

#include <cassert>

static PyMethodDef no_methods[] = {
    {nullptr,          nullptr}                       /* Sentinel */
};

static bool stub_wrapEntity_fail = false;

int main()
{
    Py_Initialize();

    PyObject * testmod = Py_InitModule("testmod", no_methods);

    assert(testmod != 0);

    run_python_string("import testmod");
    run_python_string("class TestArithmeticScript(object):\n"
                      " def __init__(self,entity=None):\n"
                      "  self.foo=1\n"
                      "  self.bar=1.1\n"
                      "  self.baz=None\n"
                      "  self.qux='1'\n"
                     );
    run_python_string("class FailArithmeticScript(object):\n"
                      " def __init__(self):\n"
                      "  raise AssertionError, 'deliberate'\n"
                     );
    run_python_string("testmod.TestArithmeticScript=TestArithmeticScript");
    run_python_string("testmod.FailArithmeticScript=FailArithmeticScript");

    {
        PythonArithmeticFactory paf("badmod", "TestArithmeticScript");
        assert(paf.setup() != 0);

        ArithmeticScript * as = paf.newScript(0);
        assert(as == 0);
    }

    {
        PythonArithmeticFactory paf("testmod", "BadArithmeticScriptClass");
        assert(paf.setup() != 0);

        ArithmeticScript * as = paf.newScript(0);
        assert(as == 0);
    }

    {
        PythonArithmeticFactory paf("testmod", "FailArithmeticScript");
        assert(paf.setup() == 0);

        ArithmeticScript * as = paf.newScript(0);
        assert(as != 0);
    }


    PythonArithmeticFactory paf("testmod", "TestArithmeticScript");
    assert(paf.setup() == 0);

    ArithmeticScript * as = paf.newScript(0);
    assert(as != 0);
    
    Entity * e = new Entity("1", 1);

    as = paf.newScript(e);
    assert(as != 0);
    
    stub_wrapEntity_fail = true;
    as = paf.newScript(e);
    assert(as == 0);

    Py_Finalize();
    return 0;
}

// stubs

ArithmeticKit::~ArithmeticKit()
{
}

ArithmeticScript::~ArithmeticScript()
{
}

PythonArithmeticScript::PythonArithmeticScript(PyObject * script) :
                                               m_script(script)
{
}

PythonArithmeticScript::~PythonArithmeticScript()
{
}

int PythonArithmeticScript::attribute(const std::string & name, float & val)
{
    return 0;
}

void PythonArithmeticScript::set(const std::string & name, const float & val)
{
}

PyObject * wrapEntity(LocatedEntity * le)
{
    if (stub_wrapEntity_fail) {
        return 0;
    } else {
        return PyInt_FromLong(1L);
    }
}
#include "stubs/rulesets/stubScript.h"
#include "stubs/modules/stubLocation.h"
#include "stubs/rulesets/stubEntity.h"


#define STUB_LocatedEntity_makeContainer
void LocatedEntity::makeContainer()
{
    if (m_contains == 0) {
        m_contains = new LocatedEntitySet;
    }
}

#define STUB_LocatedEntity_changeContainer
void LocatedEntity::changeContainer(LocatedEntity * new_loc)
{
    assert(m_location.m_loc != 0);
    assert(m_location.m_loc->m_contains != 0);
    m_location.m_loc->m_contains->erase(this);
    if (m_location.m_loc->m_contains->empty()) {
        m_location.m_loc->onUpdated();
    }
    new_loc->makeContainer();
    bool was_empty = new_loc->m_contains->empty();
    new_loc->m_contains->insert(this);
    if (was_empty) {
        new_loc->onUpdated();
    }
    assert(m_location.m_loc->checkRef() > 0);
    LocatedEntity* oldLoc = m_location.m_loc;
    m_location.m_loc = new_loc;
    m_location.m_loc->incRef();
    assert(m_location.m_loc->checkRef() > 0);

    onContainered(oldLoc);
    oldLoc->decRef();
}

#include "stubs/rulesets/stubLocatedEntity.h"

#include "stubs/common/stubRouter.h"

void log(LogLevel lvl, const std::string & msg)
{
}

PyObject * Get_PyClass(PyObject * module,
                       const std::string & package,
                       const std::string & type)
{
    PyObject * py_class = PyObject_GetAttrString(module, (char *)type.c_str());
    if (py_class == nullptr) {
        log(ERROR, String::compose("Could not find python class \"%1.%2\"",
                                   package, type));
        PyErr_Print();
        return nullptr;
    }
    if (PyCallable_Check(py_class) == 0) {
        log(ERROR, String::compose("Could not instance python class \"%1.%2\"",
                                   package, type));
        Py_DECREF(py_class);
        return nullptr;
    }
    if (PyType_Check(py_class) == 0) {
        log(ERROR, String::compose("PyCallable_Check returned true, "
                                   "but PyType_Check returned false \"%1.%2\"",
                                   package, type));
        Py_DECREF(py_class);
        return nullptr;
    }
    return py_class;
}

PyObject * Get_PyModule(const std::string & package)
{
    PyObject * package_name = PyString_FromString((char *)package.c_str());
    PyObject * module = PyImport_Import(package_name);
    Py_DECREF(package_name);
    if (module == nullptr) {
        log(ERROR, String::compose("Missing python module \"%1\"", package));
        PyErr_Print();
    }
    return module;
}
