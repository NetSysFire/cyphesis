// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2000 Alistair Riddoch

#ifndef RULESETS_PY_MAP_H
#define RULESETS_PY_MAP_H

#include <Python.h>

class MemMap;

typedef struct {
    PyObject_HEAD
    MemMap * m_map;
} PyMap;

extern PyTypeObject PyMap_Type;

#define PyMap_Check(_o) ((PyTypeObject*)PyObject_Type((PyObject*)_o)==&PyMap_Type)

PyMap * newPyMap();

#endif // RULESETS_PY_MAP_H
