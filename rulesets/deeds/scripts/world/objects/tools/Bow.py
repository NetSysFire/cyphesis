# This file is distributed under the terms of the GNU General Public license.
# Copyright (C) 1999 Aloril (See the file COPYING for details).
# return Operation("create",Entity(name='wood',type=['lumber'],location=self.location.parent.location.copy()),to=self)

from atlas import Operation, Entity, Oplist

from physics import Vector3D, Point3D
from rules import Location

import server


class Bow(server.Thing):
    """This is base class for bows, this one just ordinary bow"""

    def shoot_operation(self, op):
        ammo = op[0].id
        to_ = op[1].id
        target = server.world.get_object(to_)
        vel = target.location.pos - self.location.parent.location.pos
        time = vel.mag() / 5
        vel = vel.unit_vector() * 5
        loc1 = Location(self.location.parent.location.parent, self.location.parent.location.pos)
        loc1.velocity = vel
        loc2 = Location(target.location.parent, Point3D(0, 0, 0))
        loc2.velocity = Vector3D(0, 0, 0)
        m1 = Operation("move", Entity(ammo, location=loc1), to=ammo)
        m2 = Operation("move", Entity(ammo, location=loc2), to=ammo)
        m2.set_future_seconds(time)
        t = Operation("set", Entity(to_, status=-1), to=to_)
        t.set_future_seconds(time)
        return Oplist(m1, m2, t)
