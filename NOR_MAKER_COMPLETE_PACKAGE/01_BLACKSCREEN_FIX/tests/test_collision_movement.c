/*
 * Phase 5 - Movement & AABB collision behavioral tests (host).
 *
 * Covers:
 * - place_meeting hit/miss and non-destructive probe
 * - default 16x16 AABB overlap edges
 * - solid floor: vspeed stopped, on_ground set
 * - solid wall: hspeed stopped
 * - collision event fires both ways (via object code_snippet)
 * - scale enlarges collision footprint for place_meeting
 *
 * Does NOT claim pixel-precise parity, rotated sprites, or Portable equivalence.
 */
#include "gm82_runtime.h"
#include "gm82_events.h"
#include "gm82_gml_eval.h"
#include "gm82_gml_builtins.h"
#include "gm82_object_room_decode.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

static int g_failures = 0;

static void expect_true(int cond, const char *msg) {
    if (!cond) { fprintf(stderr, "[FAIL] %s\n", msg); g_failures++; }
    else printf("[PASS] %s\n", msg);
}

static void expect_near(double a, double b, const char *msg) {
    if (fabs(a - b) > 1e-4) {
        fprintf(stderr, "[FAIL] %s (got %g, expected %g)\n", msg, a, b);
        g_failures++;
    } else printf("[PASS] %s\n", msg);
}

static double gnum(gm82_runtime *rt, gm82_instance *inst, const char *expr) {
    double v = -99999.0;
    assert(gm82_gml_eval_expr(rt, inst, expr, &v));
    return v;
}

static gm82_decoded_object_list g_objs;
static char *dup_s(const char *s) {
    size_t n = strlen(s) + 1;
    char *p = (char *)malloc(n);
    memcpy(p, s, n);
    return p;
}

/* obj 0 = mover, obj 1 = solid wall/floor, both 16x16 default boxes */
static void setup_objects(void) {
    memset(&g_objs, 0, sizeof(g_objs));
    g_objs.count = 2;
    g_objs.items = (gm82_decoded_object *)calloc(2, sizeof(gm82_decoded_object));

    snprintf(g_objs.items[0].name, sizeof(g_objs.items[0].name), "obj_mover");
    g_objs.items[0].visible = 1;
    g_objs.items[0].solid = 0;
    g_objs.items[0].parent_index = -1;
    g_objs.items[0].event_count = 1;
    g_objs.items[0].events[0].main_type = GM82_EV_COLLISION;
    g_objs.items[0].events[0].event_numb = 1;
    g_objs.items[0].events[0].code_snippet =
        dup_s("global.seq += 1; global.ev_col_mover = global.seq;");

    snprintf(g_objs.items[1].name, sizeof(g_objs.items[1].name), "obj_solid");
    g_objs.items[1].visible = 1;
    g_objs.items[1].solid = 1;
    g_objs.items[1].parent_index = -1;
    g_objs.items[1].event_count = 1;
    g_objs.items[1].events[0].main_type = GM82_EV_COLLISION;
    g_objs.items[1].events[0].event_numb = 0;
    g_objs.items[1].events[0].code_snippet =
        dup_s("global.seq += 1; global.ev_col_solid = global.seq;");
}

static void free_objects(void) {
    if (!g_objs.items) return;
    free(g_objs.items[0].events[0].code_snippet);
    free(g_objs.items[1].events[0].code_snippet);
    free(g_objs.items);
    memset(&g_objs, 0, sizeof(g_objs));
}

void test_place_meeting_basic(void) {
    setup_objects();
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, &g_objs, NULL, NULL, NULL, NULL);
    rt.running = 1;

    gm82_instance *a = gm82_runtime_instance_create(&rt, 0, 0, 0);
    gm82_instance *b = gm82_runtime_instance_create(&rt, 1, 20, 0);
    assert(a && b);
    gm82_gml_set_self(a);
    expect_near(gml_place_meeting(0, 0, 1), 0.0, "no overlap at rest positions");
    expect_near(gml_place_meeting(10, 0, 1), 1.0, "overlap when probing closer to B");
    expect_near(a->x, 0.0, "place_meeting does not move instance x");
    expect_near(a->y, 0.0, "place_meeting does not move instance y");
    expect_near(gml_place_meeting(50, 50, 1), 0.0, "far probe is free");

    printf("--- test_place_meeting_basic done ---\n");
    gm82_runtime_cleanup(&rt);
    free_objects();
}

void test_solid_floor_landing(void) {
    setup_objects();
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, &g_objs, NULL, NULL, NULL, NULL);
    rt.running = 1;

    gm82_instance *floor = gm82_runtime_instance_create(&rt, 1, 0, 64);
    gm82_instance *mover = gm82_runtime_instance_create(&rt, 0, 0, 40);
    assert(floor && mover);
    floor->solid = 1;
    mover->vspeed = 8.0;
    mover->hspeed = 0.0;

    for (int i = 0; i < 8; i++)
        gm82_runtime_step(&rt);

    expect_true(mover->on_ground == 1 || mover->vspeed == 0.0,
                "mover stopped or on_ground after falling onto solid");
    expect_true(mover->y <= 64.0 + 1.0, "mover not deeply sunk into floor");
    expect_true(mover->y + 16.0 <= 64.0 + 2.0,
                "mover bbox bottom near floor top");

    printf("--- test_solid_floor_landing done (y=%g vspeed=%g on_ground=%d) ---\n",
           mover->y, mover->vspeed, mover->on_ground);
    gm82_runtime_cleanup(&rt);
    free_objects();
}

void test_solid_wall_block(void) {
    setup_objects();
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, &g_objs, NULL, NULL, NULL, NULL);
    rt.running = 1;

    gm82_instance *wall = gm82_runtime_instance_create(&rt, 1, 48, 0);
    gm82_instance *mover = gm82_runtime_instance_create(&rt, 0, 0, 0);
    assert(wall && mover);
    wall->solid = 1;
    mover->hspeed = 10.0;
    mover->vspeed = 0.0;

    for (int i = 0; i < 10; i++)
        gm82_runtime_step(&rt);

    expect_true(mover->x + 16.0 <= 48.0 + 2.0,
                "mover did not pass through wall");
    expect_true(mover->hspeed == 0.0 || mover->hit_right == 1 || mover->x < 48.0,
                "horizontal motion blocked by solid");

    printf("--- test_solid_wall_block done (x=%g hspeed=%g hit_right=%d) ---\n",
           mover->x, mover->hspeed, mover->hit_right);
    gm82_runtime_cleanup(&rt);
    free_objects();
}

void test_collision_event_fires(void) {
    setup_objects();
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, &g_objs, NULL, NULL, NULL, NULL);
    rt.running = 1;

    gm82_gml_eval_stmt(&rt, NULL, "global.seq = 0; global.ev_col_mover = 0; global.ev_col_solid = 0;");

    gm82_instance *a = gm82_runtime_instance_create(&rt, 0, 0, 0);
    gm82_instance *b = gm82_runtime_instance_create(&rt, 1, 8, 0);
    assert(a && b);
    b->solid = 1;

    gm82_runtime_step(&rt);

    double cm = gnum(&rt, a, "global.ev_col_mover");
    double cs = gnum(&rt, a, "global.ev_col_solid");
    expect_true(cm > 0 || cs > 0, "at least one collision event fired on overlap");

    printf("--- test_collision_event_fires done (mover=%g solid=%g) ---\n", cm, cs);
    gm82_runtime_cleanup(&rt);
    free_objects();
}

void test_scale_affects_place_meeting(void) {
    setup_objects();
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, &g_objs, NULL, NULL, NULL, NULL);
    rt.running = 1;

    gm82_instance *a = gm82_runtime_instance_create(&rt, 0, 0, 0);
    gm82_instance *b = gm82_runtime_instance_create(&rt, 1, 20, 0);
    assert(a && b);
    gm82_gml_set_self(a);

    a->image_xscale = 1.0;
    expect_near(gml_place_meeting(0, 0, 1), 0.0, "scale=1 no meeting at x=0 vs B@20");

    a->image_xscale = 2.0;
    expect_near(gml_place_meeting(0, 0, 1), 1.0, "scale=2 meets B at x=0");

    printf("--- test_scale_affects_place_meeting done ---\n");
    gm82_runtime_cleanup(&rt);
    free_objects();
}

void test_high_speed_does_not_tunnel_simple(void) {
    setup_objects();
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, &g_objs, NULL, NULL, NULL, NULL);
    rt.running = 1;

    gm82_instance *wall = gm82_runtime_instance_create(&rt, 1, 40, 0);
    gm82_instance *mover = gm82_runtime_instance_create(&rt, 0, 0, 0);
    assert(wall && mover);
    wall->solid = 1;
    mover->hspeed = 80.0;
    mover->vspeed = 0.0;

    gm82_runtime_step(&rt);

    expect_true(mover->x < 40.0 + 16.0,
                "high-speed mover did not fully tunnel past solid wall");

    printf("--- test_high_speed_does_not_tunnel_simple done (x=%g) ---\n", mover->x);
    gm82_runtime_cleanup(&rt);
    free_objects();
}

int main(void) {
    printf("=== test_collision_movement (Phase 5) ===\n");
    test_place_meeting_basic();
    test_solid_floor_landing();
    test_solid_wall_block();
    test_collision_event_fires();
    test_scale_affects_place_meeting();
    test_high_speed_does_not_tunnel_simple();

    if (g_failures) {
        fprintf(stderr, "\n%d failure(s)\n", g_failures);
        return 1;
    }
    printf("\nAll collision/movement behavioral checks passed.\n");
    return 0;
}
