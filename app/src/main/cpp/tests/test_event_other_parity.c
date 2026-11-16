#include "gm82_runtime.h"
#include "gm82_events.h"
#include "gm82_gml_eval.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void set_code(gm82_decoded_event *event, const char *code) {
    event->code_snippet = (char *)malloc(strlen(code) + 1);
    assert(event->code_snippet != NULL);
    strcpy(event->code_snippet, code);
}

static void test_user_events_and_bounds(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;
    rt.room_width = 100;
    rt.room_height = 80;

    gm82_decoded_object_list objects;
    gm82_decoded_object_list_init(&objects);
    objects.count = 1;
    objects.items = (gm82_decoded_object *)calloc(1, sizeof(*objects.items));
    assert(objects.items != NULL);
    snprintf(objects.items[0].name, sizeof(objects.items[0].name), "obj_event_probe");
    objects.items[0].event_count = 4;
    objects.items[0].events[0].main_type = GM82_EV_OTHER;
    objects.items[0].events[0].event_numb = GM82_OTHER_USER0;
    set_code(&objects.items[0].events[0], "user0_hits += 1;");
    objects.items[0].events[1].main_type = GM82_EV_OTHER;
    objects.items[0].events[1].event_numb = GM82_OTHER_OUTSIDE;
    set_code(&objects.items[0].events[1], "outside_hits += 1;");
    objects.items[0].events[2].main_type = GM82_EV_OTHER;
    objects.items[0].events[2].event_numb = GM82_OTHER_BOUNDARY;
    set_code(&objects.items[0].events[2], "boundary_hits += 1;");
    objects.items[0].events[3].main_type = GM82_EV_OTHER;
    objects.items[0].events[3].event_numb = GM82_OTHER_ANIMATION_END;
    set_code(&objects.items[0].events[3], "animation_hits += 1;");
    gm82_runtime_bind_assets(&rt, &objects, NULL, NULL, NULL, NULL);

    gm82_instance *inst = gm82_runtime_instance_create(&rt, 0, 50, 40);
    assert(inst != NULL);
    gm82_gml_set_self(inst);
    assert(gm82_gml_eval_stmt(&rt, inst,
        "user0_hits = 0; outside_hits = 0; boundary_hits = 0; animation_hits = 0;") == true);

    gm82_runtime_event_user(&rt, 0);
    double value = 0;
    assert(gm82_gml_eval_expr(&rt, inst, "user0_hits", &value) && value == 1.0);
    gm82_runtime_event_user(&rt, 15);
    assert(gm82_gml_eval_expr(&rt, inst, "user0_hits", &value) && value == 1.0);
    gm82_runtime_event_user(&rt, -1);
    gm82_runtime_event_user(&rt, 16);
    assert(gm82_gml_eval_expr(&rt, inst, "user0_hits", &value) && value == 1.0);

    inst->x = -1;
    inst->y = 40;
    gm82_events_fire_outside_all(&rt);
    assert(gm82_gml_eval_expr(&rt, inst, "outside_hits", &value));
    assert(value == 2.0);

    inst->x = 100;
    inst->y = 40;
    gm82_events_fire_boundary_all(&rt);
    assert(gm82_gml_eval_expr(&rt, inst, "boundary_hits", &value) && value == 0.0);
    inst->x = 101;
    gm82_events_fire_boundary_all(&rt);
    assert(gm82_gml_eval_expr(&rt, inst, "boundary_hits", &value) && value == 1.0);

    for (int i = 0; i < objects.items[0].event_count; ++i)
        free(objects.items[0].events[i].code_snippet);
    free(objects.items);
    gm82_runtime_cleanup(&rt);
}

static void test_animation_end_on_group_wrap(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;
    rt.room_width = 100;
    rt.room_height = 80;

    gm82_decoded_object_list objects;
    gm82_decoded_object_list_init(&objects);
    objects.count = 1;
    objects.items = (gm82_decoded_object *)calloc(1, sizeof(*objects.items));
    assert(objects.items != NULL);
    snprintf(objects.items[0].name, sizeof(objects.items[0].name), "obj_anim_probe");
    objects.items[0].event_count = 1;
    objects.items[0].events[0].main_type = GM82_EV_OTHER;
    objects.items[0].events[0].event_numb = GM82_OTHER_ANIMATION_END;
    set_code(&objects.items[0].events[0], "animation_hits += 1;");

    gm82_decoded_sprite_list sprites;
    gm82_decoded_sprite_list_init(&sprites);
    sprites.count = 3;
    sprites.capacity = 3;
    sprites.frames = (gm82_decoded_frame *)calloc(3, sizeof(*sprites.frames));
    assert(sprites.frames != NULL);
    for (int i = 0; i < 3; ++i) {
        sprites.frames[i].width = 1;
        sprites.frames[i].height = 1;
        snprintf(sprites.frames[i].name, sizeof(sprites.frames[i].name), "anim");
    }
    gm82_sprite_group group = {0};
    snprintf(group.name, sizeof(group.name), "anim");
    group.frame_start = 0;
    group.frame_count = 3;
    group.width = 1;
    group.height = 1;
    gm82_sprite_group_list groups = {&group, 1};

    gm82_runtime_bind_assets(&rt, &objects, &sprites, NULL, NULL, NULL);
    gm82_runtime_bind_sprite_groups(&rt, &groups);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 0, 20, 20);
    assert(inst != NULL);
    inst->sprite_index = 0;
    inst->image_index = 2.8;
    inst->image_speed = 0.5;
    gm82_gml_set_self(inst);

    gm82_runtime_step(&rt);
    double value = 0;
    assert(inst->image_index > 0.0 && inst->image_index < 1.0);
    assert(gm82_gml_eval_expr(&rt, inst, "animation_hits", &value) && value == 1.0);

    free(objects.items[0].events[0].code_snippet);
    free(objects.items);
    free(sprites.frames);
    gm82_runtime_cleanup(&rt);
}

int main(void) {
    test_user_events_and_bounds();
    test_animation_end_on_group_wrap();
    puts("EVENT_OTHER_PARITY_TEST_PASS");
    return 0;
}
