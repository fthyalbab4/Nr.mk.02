#include "gm82_actions.h"
#include "gm82_runtime.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static gm82_action_ref action(const char *name) {
    gm82_action_ref ref;
    memset(&ref, 0, sizeof(ref));
    strncpy(ref.name, name, sizeof(ref.name) - 1);
    return ref;
}

int main(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *self = gm82_runtime_instance_create(&rt, 0, 0.0, 0.0);
    assert(self != NULL);

    gm82_decoded_room_list rooms;
    gm82_decoded_room_list_init(&rooms);
    rooms.count = 3;
    rooms.items = (gm82_decoded_room *)calloc((size_t)rooms.count, sizeof(*rooms.items));
    assert(rooms.items != NULL);
    rt.rooms = &rooms;

    gm82_action_ref next = action("action_if_next_room");
    gm82_action_ref previous = action("action_if_previous_room");

    rt.current_room = 0;
    assert(gm82_action_execute_ref(&rt, self, &next) == true);
    assert(gm82_action_execute_ref(&rt, self, &previous) == false);

    rt.current_room = 1;
    assert(gm82_action_execute_ref(&rt, self, &next) == true);
    assert(gm82_action_execute_ref(&rt, self, &previous) == true);

    rt.current_room = 2;
    assert(gm82_action_execute_ref(&rt, self, &next) == false);
    assert(gm82_action_execute_ref(&rt, self, &previous) == true);

    rt.current_room = -1;
    assert(gm82_action_execute_ref(&rt, self, &next) == false);
    assert(gm82_action_execute_ref(&rt, self, &previous) == false);

    free(rooms.items);
    gm82_runtime_cleanup(&rt);
    puts("GMK8_ACTION_ROOM_CONDITIONS_PASS");
    return 0;
}
