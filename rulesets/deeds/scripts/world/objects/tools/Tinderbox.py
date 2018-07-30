# This file is distributed under the terms of the GNU General Public license.
# Copyright (C) 2005 Al Riddoch (See the file COPYING for details).

from atlas import *

import server

def ignite(tool, actor, op, targets, consumed):
    target = targets[0]
    if target.entity.is_reachable_for_other_entity(actor, target.pos, 0):
        return (server.OPERATION_BLOCKED, Operation("create", Entity(parent='fire', status=0.05, location=Location(target.entity, target.pos)), to=target.entity))
    else:
        print("Too far away.")
        return (server.OPERATION_BLOCKED)