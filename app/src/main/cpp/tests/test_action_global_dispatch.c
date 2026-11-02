#include "gm82_actions.h"
#include "gm82_runtime.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;

    gm82_decoded_object_list objects;
    gm82_decoded_object_list_init(&objects);
    objects.count = 1;
    objects.items = (gm82_decoded_object *)calloc(1, sizeof(*objects.items));
    assert(objects.items != NULL);
    snprintf(objects.items[0].name, sizeof(objects.items[0].name), "obj_player");
    gm82_runtime_bind_assets(&rt, &objects, NULL, NULL, NULL, NULL);

    gm82_instance *player = gm82_runtime_instance_create(&rt, 0, 12.0, 34.0);
    assert(player != NULL);

    /* gm82_actions_scan_gmk() stores fallback actions under this pseudo-object
       name and tags them event_type=-1 because it cannot recover event context. */
    gm82_action_ref fallback_action;
    memset(&fallback_action, 0, sizeof(fallback_action));
    fallback_action.event_type = -1;
    snprintf(fallback_action.name, sizeof(fallback_action.name), "action_set_hspeed");
    fallback_action.argc = 1;
    fallback_action.args[0] = 9;

    gm82_object_actions global_bucket;
    memset(&global_bucket, 0, sizeof(global_bucket));
    snprintf(global_bucket.object_name, sizeof(global_bucket.object_name), "_global_actions");
    global_bucket.items = &fallback_action;
    global_bucket.count = 1;
    global_bucket.capacity = 1;

    gm82_action_table table = {&global_bucket, 1};

    gm82_actions_fire_step(&rt, player, &table);
    assert(player->hspeed == 9.0);

    player->hspeed = 0.0;
    gm82_actions_fire_draw(&rt, player, &table);
    assert(player->hspeed == 9.0);

    gm82_runtime_cleanup(&rt);
    gm82_decoded_object_list_free(&objects);
    puts("GLOBAL_ACTION_DISPATCH_PASS");
    return 0;
}
