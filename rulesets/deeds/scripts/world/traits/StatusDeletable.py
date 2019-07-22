from atlas import Operation, Entity, Oplist
import server


# When status is set to <= 0 the entity is deleted
class StatusDeletable(server.Thing):

    def update_operation(self, op):
        status_prop = self.props.status
        if status_prop and status_prop <= 0:
            return server.OPERATION_HANDLED, Operation("delete", Entity(self.id), to=self)

        return server.OPERATION_HANDLED
