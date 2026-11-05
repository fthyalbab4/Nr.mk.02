/* with() edge cases: all/self/noone + destroy mid-with snapshot safety */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include "gm82_object_room_decode.h"
#include "gm82_actions.h"

int main(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_decoded_object_list objs;
    memset(&objs, 0, sizeof(objs));
    objs.count = 2;
    objs.items = calloc(2, sizeof(gm82_decoded_object));
    strncpy(objs.items[0].name, "obj_a", sizeof(objs.items[0].name) - 1);
    objs.items[0].parent_index = -1;
    strncpy(objs.items[1].name, "obj_b", sizeof(objs.items[1].name) - 1);
    objs.items[1].parent_index = -1;
    gm82_decoded_sprite_list sprites; memset(&sprites, 0, sizeof(sprites));
    gm82_decoded_background_list bgs; memset(&bgs, 0, sizeof(bgs));
    gm82_decoded_room_list rooms; memset(&rooms, 0, sizeof(rooms));
    gm82_action_table *actions = NULL;
    gm82_runtime_bind_assets(&rt, &objs, &sprites, &bgs, &rooms, actions);
    rt.running = 1;
    rt.room_width = 320;
    rt.room_height = 240;

    for (int i = 0; i < 3; i++) {
        if (!gm82_runtime_instance_create(&rt, 0, 10.0 * i, 0)) {
            fprintf(stderr, "create a fail\n");
            return 1;
        }
    }
    if (!gm82_runtime_instance_create(&rt, 1, 100, 0)) {
        fprintf(stderr, "create b fail\n");
        return 1;
    }

    gm82_instance *self = &rt.instances[0];
    gm82_gml_set_runtime(&rt);
    gm82_gml_set_self(self);

    gm82_gml_eval_block(&rt, self, "with (all) { hspeed = 3; }");
    int moved = 0;
    for (int i = 0; i < rt.instance_count; i++)
        if (rt.instances[i].alive && rt.instances[i].hspeed == 3) moved++;
    if (moved < 4) {
        fprintf(stderr, "with(all) expected >=4 got %d\n", moved);
        return 2;
    }

    gm82_gml_eval_block(&rt, self, "with (noone) { hspeed = 9; }");
    int n9 = 0;
    for (int i = 0; i < rt.instance_count; i++)
        if (rt.instances[i].alive && rt.instances[i].hspeed == 9) n9++;
    if (n9 != 0) {
        fprintf(stderr, "with(noone) leaked %d\n", n9);
        return 3;
    }

    self->hspeed = 0;
    gm82_gml_eval_block(&rt, self, "with (self) { hspeed = 7; }");
    if (self->hspeed != 7) {
        fprintf(stderr, "with(self) failed hspeed=%g\n", self->hspeed);
        return 4;
    }

    gm82_gml_eval_block(&rt, self, "with (all) { instance_destroy(); }");
    free(objs.items);
    printf("with_edges PASS\n");
    return 0;
}
