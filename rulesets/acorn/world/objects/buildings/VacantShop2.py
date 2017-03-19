#This file is distributed under the terms of the GNU General Public license.
#Copyright (C) 2001 Al Riddoch (See the file COPYING for details).

from Vector3D import Vector3D
from atlas import *
from cyphesis.Thing import Thing


# bbox = 5,4,2.5
# bmedian = 4.5,4.5,2.5
# offset = SW corner = -0.5,0.5,0

class Shop_vacant_deco_2_se(Thing):
    def setup_operation(self, op):
        ret = Oplist()
        # South wall with door
	loc = Location(self, Vector3D(-0.5,0.5,0))
        loc.bbox = Vector3D(6,0.5,5)
        ret.append(Operation("create",Entity(name='wall',parents=['wall'],location=loc),to=self))
	loc = Location(self, Vector3D(7.5,0.5,0))
        loc.bbox = Vector3D(2,0.5,5)
        ret.append(Operation("create",Entity(name='wall',parents=['wall'],location=loc),to=self))
        # West wall
	loc = Location(self, Vector3D(-0.5,0.5,0))
        loc.bbox = Vector3D(0.5,8,5)
        ret.append(Operation("create",Entity(name='wall',parents=['wall'],location=loc),to=self))
        # North wall
	loc = Location(self, Vector3D(-0.5,8,0))
        loc.bbox = Vector3D(10,0.5,5)
        ret.append(Operation("create",Entity(name='wall',parents=['wall'],location=loc),to=self))
        # East wall
	loc = Location(self, Vector3D(9,0.5,0))
        loc.bbox = Vector3D(0.5,8,5)
        ret.append(Operation("create",Entity(name='wall',parents=['wall'],location=loc),to=self))
        return ret
