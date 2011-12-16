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

// $Id$

#ifdef NDEBUG
#undef NDEBUG
#endif
#ifndef DEBUG
#define DEBUG
#endif

#include <Python.h>

#include "python_testers.h"

#include "rulesets/Python_API.h"
#include "rulesets/MindFactory.h"
#include "rulesets/MindProperty.h"

#include <cassert>

using Atlas::Message::MapType;

static PyMethodDef no_methods[] = {
    {NULL,          NULL}                       /* Sentinel */
};

int main()
{
    init_python_api();

    Py_InitModule("testmod", no_methods);

    run_python_string("import server");
    run_python_string("import testmod");
    run_python_string("from atlas import Operation");
    run_python_string("class settlerMind(server.Mind):\n"
                      " def look_operation(self, op): pass\n"
                      " def delete_operation(self, op):\n"
                      "  return Operation('sight') + Operation('move')\n"
                      " def test_hook(self, ent): pass\n"
                     );
    run_python_string("testmod.settlerMind=settlerMind");

    MindProperty * mp = new MindProperty;

    MapType mind_descr;

    mind_descr["language"] = "python";
    mind_descr["name"] = "testmod.settlerMind";

    mp->set(mind_descr);

    MindKit * mk = mp->factory();
    assert(mk != 0);

    assert(mk->m_scriptFactory != 0);

    shutdown_python_api();
    return 0;
}
