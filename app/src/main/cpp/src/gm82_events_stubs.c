/* Stubs / minimal impl for fire_* not yet in the truncated gm82_events.c
 * Full versions live in the 33KB file (tools/RESTORE_FULL_EVENTS.md).
 * step_all is real enough to drive default behaviors (mario/link movement).
 */
#include "gm82_events.h"
#include "gm82_gml_builtins.h"
#include "gm82_actions.h"
#include "gm82_gml_eval.h"
#include <string.h>

extern const gm82_behavior *gm82_events_find_behavior(gm82_runtime *rt, int32_t object_index);

void gm82_events_fire_begin_step_all(gm82_runtime *rt) {
    (void)rt;
}

void gm82_events_fire_step_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_instance *snapshot[GM82_MAX_INSTANCES];
    int count = gm82_runtime_get_active_snapshot(rt, snapshot);
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < count; i++) {
        gm82_instance *inst = snapshot[i];
        if (!inst || !inst->alive) continue;
        const gm82_behavior *b = gm82_events_find_behavior(rt, inst->object_index);
        if (b && b->on_step) {
            gm82_gml_set_self(inst);
            b->on_step(rt, inst);
        }
        if (rt->actions)
            gm82_actions_fire_step(rt, inst, rt->actions);
    }
}

void gm82_events_fire_end_step_all(gm82_runtime *rt) { (void)rt; }
void gm82_events_fire_keyboard_all(gm82_runtime *rt) { (void)rt; }
void gm82_events_fire_keypress_all(gm82_runtime *rt) { (void)rt; }
void gm82_events_fire_keyrelease_all(gm82_runtime *rt) { (void)rt; }
void gm82_events_fire_mouse_all(gm82_runtime *rt) { (void)rt; }

void gm82_events_fire_other(gm82_runtime *rt, gm82_instance *inst, int other_index) {
    (void)rt; (void)inst; (void)other_index;
}
void gm82_events_fire_other_all(gm82_runtime *rt, int other_index) {
    (void)rt; (void)other_index;
}
void gm82_events_fire_user(gm82_runtime *rt, gm82_instance *inst, int user_index) {
    (void)rt; (void)inst; (void)user_index;
}
void gm82_events_fire_outside_all(gm82_runtime *rt) { (void)rt; }
void gm82_events_fire_boundary_all(gm82_runtime *rt) { (void)rt; }
void gm82_events_fire_animation_end_all(gm82_runtime *rt) { (void)rt; }
void gm82_events_fire_pre_draw_all(gm82_runtime *rt) { (void)rt; }

void gm82_events_fire_draw_single(gm82_runtime *rt, gm82_instance *inst) {
    (void)rt; (void)inst;
}
void gm82_events_fire_draw_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_instance *snapshot[GM82_MAX_INSTANCES];
    int count = gm82_runtime_get_active_snapshot(rt, snapshot);
    for (int i = 0; i < count; i++) {
        if (snapshot[i] && snapshot[i]->alive)
            gm82_events_fire_draw_single(rt, snapshot[i]);
    }
}
bool gm82_events_has_draw_event(gm82_runtime *rt, gm82_instance *inst) {
    (void)rt; (void)inst;
    return false;
}
void gm82_events_fire_post_draw_all(gm82_runtime *rt) { (void)rt; }

int gm82_events_autobind_gml_from_gmk(const uint8_t *data, size_t size) {
    (void)data; (void)size;
    return 0;
}
