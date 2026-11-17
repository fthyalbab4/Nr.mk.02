#define _GNU_SOURCE
#define _POSIX_C_SOURCE 200809L
#include "gm82_int_read.h"
#include "gm82_events.h"
#include "gm82_gml_builtins.h"
#include "gm82_input.h"
#include "gm82_actions.h"
#include "gm82_gml_eval.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <zlib.h>

static const gm82_behavior *g_behaviors = NULL;

static char g_autobind_code_store[16][1024];
static int g_autobind_store_n = 0;

bool gm82_events_bind_gml_step(const char *object_name, const char *code) {
    if (!object_name || !code) return false;
    (void)object_name; (void)code;
    return true;
}

bool gm82_events_bind_gml_create(const char *object_name, const char *code) {
    if (!object_name || !code) return false;
    (void)object_name; (void)code;
    return true;
}

void gm82_events_clear_gml_bindings(void) {
    g_autobind_store_n = 0;
}

const gm82_behavior *gm82_events_find_behavior(gm82_runtime *rt, int32_t object_index) {
    (void)rt; (void)object_index;
    return NULL;
}

void gm82_events_register_defaults(void) { }



#define GM82_EV_STACK_MAX 32
typedef struct {
    gm82_instance *inst;
    int32_t owner_oi;
    int main_type;
    int event_numb;
    gm82_instance *other_inst;
} gm82_ev_frame;

static gm82_ev_frame g_ev_stack[GM82_EV_STACK_MAX];
static int g_ev_stack_top = 0;

static bool fire_object_events_from(gm82_runtime *rt, gm82_instance *inst,
                                    int32_t start_oi, int main_type, int event_numb,
                                    int use_other, gm82_instance *other_inst) {
    if (!rt || !inst || !rt->objects) return false;
    int32_t oi = start_oi;
    int depth = 0;
    gm82_gml_set_runtime(rt);
    while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
        const gm82_decoded_object *obj = &rt->objects->items[oi];
        bool matched_obj = false;
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            const gm82_decoded_event *ev = &obj->events[e];
            if (ev->main_type != main_type) continue;
            if (event_numb >= 0 && ev->event_numb != event_numb) continue;
            matched_obj = true;
            if (g_ev_stack_top < GM82_EV_STACK_MAX) {
                g_ev_stack[g_ev_stack_top++] = (gm82_ev_frame){
                    inst, oi, main_type, ev->event_numb, use_other ? other_inst : NULL
                };
                gm82_events_execute_decoded_actions(rt, inst, ev, oi, main_type, ev->event_numb,
                                                    use_other ? other_inst : NULL);
                g_ev_stack_top--;
            } else {
                gm82_events_execute_decoded_actions(rt, inst, ev, oi, main_type, ev->event_numb,
                                                    use_other ? other_inst : NULL);
            }
        }
        if (matched_obj) return true;
        oi = obj->parent_index;
    }
    return false;
}

static void fire_object_events(gm82_runtime *rt, gm82_instance *inst,
                               int main_type, int event_numb,
                               int use_other, gm82_instance *other_inst) {
    if (!rt || !inst) return;
    fire_object_events_from(rt, inst, inst->object_index, main_type, event_numb, use_other, other_inst);
}

void gm82_events_fire_inherited(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst || !rt->objects || g_ev_stack_top <= 0) return;
    const gm82_ev_frame top = g_ev_stack[g_ev_stack_top - 1];
    if (top.owner_oi < 0 || top.owner_oi >= rt->objects->count) return;
    int32_t parent_oi = rt->objects->items[top.owner_oi].parent_index;
    if (parent_oi < 0 || parent_oi >= rt->objects->count) return;
    fire_object_events_from(rt, inst, parent_oi, top.main_type, top.event_numb,
                            top.other_inst != NULL, top.other_inst);
}

void gm82_events_fire_create_single(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst || inst->create_fired) return;
    inst->create_fired = 1;
    fire_object_events(rt, inst, GM82_EV_CREATE, -1, 0, NULL);
    const gm82_behavior *b = gm82_events_find_behavior(rt, inst->object_index);
    if (b && b->on_create) b->on_create(rt, inst);
}

void gm82_events_fire_create_all(gm82_runtime *rt) {
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        if (rt->instances[i].alive)
            gm82_events_fire_create_single(rt, &rt->instances[i]);
    }
}

void gm82_events_fire_destroy(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst) return;
    fire_object_events(rt, inst, GM82_EV_DESTROY, -1, 0, NULL);
}

void gm82_events_fire_alarm(gm82_runtime *rt, gm82_instance *inst, int alarm_index) {
    if (!rt || !inst) return;
    fire_object_events(rt, inst, GM82_EV_ALARM, alarm_index, 0, NULL);
    gm82_alarm_fire_scripts(rt, inst, alarm_index);
}

void gm82_events_fire_begin_step_all(gm82_runtime *rt) {
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        fire_object_events(rt, inst, GM82_EV_STEP, GM82_STEP_BEGIN, 0, NULL);
    }
}

void gm82_events_fire_step_all(gm82_runtime *rt) {
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        fire_object_events(rt, inst, GM82_EV_STEP, GM82_STEP_NORMAL, 0, NULL);
        const gm82_behavior *b = gm82_events_find_behavior(rt, inst->object_index);
        if (b && b->on_step) b->on_step(rt, inst);
    }
}

void gm82_events_fire_end_step_all(gm82_runtime *rt) {
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        fire_object_events(rt, inst, GM82_EV_STEP, GM82_STEP_END, 0, NULL);
    }
}

static void fire_key_events_all(gm82_runtime *rt, int main_type, double (*check_fn)(double)) {
    if (!rt || !rt->objects || !check_fn) return;
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        int32_t fired_keys[GM82_OBJ_EVENT_MAX];
        int fired_count = 0;
        int32_t oi = inst->object_index;
        int depth = 0;
        while (oi >= 0 && oi < rt->objects->count && depth++ < 32 && inst->alive) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type != main_type) continue;
                bool overridden = false;
                for (int f = 0; f < fired_count; f++) {
                    if (fired_keys[f] == ev->event_numb) { overridden = true; break; }
                }
                if (overridden) continue;
                if (fired_count < GM82_OBJ_EVENT_MAX) fired_keys[fired_count++] = ev->event_numb;
                if (ev->event_numb >= 0 && check_fn((double)ev->event_numb) == 0.0) continue;
                if (g_ev_stack_top < GM82_EV_STACK_MAX) {
                    g_ev_stack[g_ev_stack_top++] = (gm82_ev_frame){ inst, oi, main_type, ev->event_numb, NULL };
                    gm82_events_execute_decoded_actions(rt, inst, ev, oi, main_type, ev->event_numb, NULL);
                    g_ev_stack_top--;
                } else {
                    gm82_events_execute_decoded_actions(rt, inst, ev, oi, main_type, ev->event_numb, NULL);
                }
            }
            oi = obj->parent_index;
        }
    }
}

void gm82_events_fire_keyboard_all(gm82_runtime *rt) {
    fire_key_events_all(rt, GM82_EV_KEYBOARD, gml_keyboard_check);
}

void gm82_events_fire_keypress_all(gm82_runtime *rt) {
    fire_key_events_all(rt, GM82_EV_KEYPRESS, gml_keyboard_check_pressed);
}

void gm82_events_fire_keyrelease_all(gm82_runtime *rt) {
    fire_key_events_all(rt, GM82_EV_KEYRELEASE, gml_keyboard_check_released);
}

static bool point_in_instance_bbox(const gm82_runtime *rt, const gm82_instance *inst, double mx, double my) {
    if (!rt || !inst) return false;
    int32_t sw = 16, sh = 16, sox = 0, soy = 0;
    if (rt->sprites && inst->sprite_index >= 0 && inst->sprite_index < rt->sprites->count) {
        int fi = inst->sprite_index;
        if (rt->sprite_groups) {
            int rfi = gm82_sprite_resolve_frame(rt->sprite_groups, inst->sprite_index, inst->image_index);
            if (rfi >= 0 && rfi < rt->sprites->count) fi = rfi;
        }
        const gm82_decoded_frame *f = &rt->sprites->frames[fi];
        if (f->width > 0) sw = f->width;
        if (f->height > 0) sh = f->height;
        sox = f->origin_x;
        soy = f->origin_y;
    }
    double xs = inst->image_xscale != 0.0 ? fabs(inst->image_xscale) : 1.0;
    double ys = inst->image_yscale != 0.0 ? fabs(inst->image_yscale) : 1.0;
    double x1 = inst->x - sox * xs;
    double y1 = inst->y - soy * ys;
    double x2 = x1 + sw * xs;
    double y2 = y1 + sh * ys;
    return mx >= x1 && mx < x2 && my >= y1 && my < y2;
}

static bool mouse_subtype_matches(int32_t subtype, bool inside) {
    /* GM8 mouse event_numb mapping:
       0,1,2 = L/R/M held (local); 3 = no button held;
       4,5,6 = L/R/M pressed (local); 7,8,9 = L/R/M released (local);
       50..58 = global L/R/M held, pressed, released (50..52, 53..55, 56..58) */
    if (subtype >= 0 && subtype <= 2) return inside && gml_mouse_check_button((double)(subtype + 1)) != 0.0;
    if (subtype == 3) {
        return gml_mouse_check_button(1.0) == 0.0 &&
               gml_mouse_check_button(2.0) == 0.0 &&
               gml_mouse_check_button(3.0) == 0.0;
    }
    if (subtype >= 4 && subtype <= 6) return inside && gml_mouse_check_button_pressed((double)(subtype - 3)) != 0.0;
    if (subtype >= 7 && subtype <= 9) {
        extern double gml_mouse_check_button_released(double button);
        return inside && gml_mouse_check_button_released((double)(subtype - 6)) != 0.0;
    }
    if (subtype >= 50 && subtype <= 52) return gml_mouse_check_button((double)(subtype - 49)) != 0.0;
    if (subtype >= 53 && subtype <= 55) return gml_mouse_check_button_pressed((double)(subtype - 52)) != 0.0;
    if (subtype >= 56 && subtype <= 58) {
        extern double gml_mouse_check_button_released(double button);
        return gml_mouse_check_button_released((double)(subtype - 55)) != 0.0;
    }
    return false;
}

void gm82_events_fire_mouse_all(gm82_runtime *rt) {
    if (!rt || !rt->objects) return;
    double mx = gml_mouse_x();
    double my = gml_mouse_y();
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        bool inside = point_in_instance_bbox(rt, inst, mx, my);
        int32_t fired_sub[GM82_OBJ_EVENT_MAX];
        int fired_count = 0;
        int32_t oi = inst->object_index;
        int depth = 0;
        while (oi >= 0 && oi < rt->objects->count && depth++ < 32 && inst->alive) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type != GM82_EV_MOUSE) continue;
                bool overridden = false;
                for (int f = 0; f < fired_count; f++) {
                    if (fired_sub[f] == ev->event_numb) { overridden = true; break; }
                }
                if (overridden) continue;
                if (fired_count < GM82_OBJ_EVENT_MAX) fired_sub[fired_count++] = ev->event_numb;
                if (!mouse_subtype_matches(ev->event_numb, inside)) continue;
                if (g_ev_stack_top < GM82_EV_STACK_MAX) {
                    g_ev_stack[g_ev_stack_top++] = (gm82_ev_frame){ inst, oi, GM82_EV_MOUSE, ev->event_numb, NULL };
                    gm82_events_execute_decoded_actions(rt, inst, ev, oi, GM82_EV_MOUSE, ev->event_numb, NULL);
                    g_ev_stack_top--;
                } else {
                    gm82_events_execute_decoded_actions(rt, inst, ev, oi, GM82_EV_MOUSE, ev->event_numb, NULL);
                }
            }
            oi = obj->parent_index;
        }
    }
}

void gm82_events_fire_other(gm82_runtime *rt, gm82_instance *inst, int other_index) {
    if (!rt || !inst) return;
    fire_object_events(rt, inst, GM82_EV_OTHER, other_index, 0, NULL);
}

void gm82_events_fire_other_all(gm82_runtime *rt, int other_index) {
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        if (rt->instances[i].alive)
            gm82_events_fire_other(rt, &rt->instances[i], other_index);
    }
}

void gm82_events_fire_user(gm82_runtime *rt, gm82_instance *inst, int user_index) {
    if (user_index < 0 || user_index > 15) return;
    gm82_events_fire_other(rt, inst, GM82_OTHER_USER0 + user_index);
}

void gm82_events_fire_outside_all(gm82_runtime *rt) {
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        if (inst->x < 0 || inst->y < 0 ||
            inst->x > rt->room_width || inst->y > rt->room_height) {
            gm82_events_fire_other(rt, inst, GM82_OTHER_OUTSIDE);
        }
    }
}

void gm82_events_fire_boundary_all(gm82_runtime *rt) {
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        if (inst->x < 0 || inst->y < 0 ||
            inst->x > rt->room_width || inst->y > rt->room_height) {
            gm82_events_fire_other(rt, inst, GM82_OTHER_BOUNDARY);
        }
    }
}

void gm82_events_fire_animation_end_all(gm82_runtime *rt) {
    /* Handled accurately via fractional image_frac wrap inside gm82_runtime_step */
    (void)rt;
}

void gm82_events_fire_collision(gm82_runtime *rt, gm82_instance *inst, gm82_instance *other) {
    if (!rt || !inst || !rt->objects) return;
    int32_t oi = inst->object_index;
    int depth = 0;
    gm82_gml_set_runtime(rt);
    while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
        const gm82_decoded_object *obj = &rt->objects->items[oi];
        bool fired = false;
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            const gm82_decoded_event *ev = &obj->events[e];
            if (ev->main_type != GM82_EV_COLLISION) continue;
            if (other && ev->event_numb >= 0 && !gm82_instance_matches_object(rt, other, ev->event_numb))
                continue;
            fired = true;
            if (g_ev_stack_top < GM82_EV_STACK_MAX) {
                g_ev_stack[g_ev_stack_top++] = (gm82_ev_frame){
                    inst, oi, GM82_EV_COLLISION, ev->event_numb, other
                };
                gm82_events_execute_decoded_actions(rt, inst, ev, oi, GM82_EV_COLLISION, ev->event_numb, other);
                g_ev_stack_top--;
            } else {
                gm82_events_execute_decoded_actions(rt, inst, ev, oi, GM82_EV_COLLISION, ev->event_numb, other);
            }
        }
        if (fired) break;
        oi = obj->parent_index;
    }
}

void gm82_events_fire_pre_draw_all(gm82_runtime *rt) {
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive || !inst->visible) continue;
        fire_object_events(rt, inst, GM82_EV_DRAW, 0, 0, NULL);
    }
}

void gm82_events_fire_draw_single(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst || !inst->visible) return;
    fire_object_events(rt, inst, GM82_EV_DRAW, -1, 0, NULL);
}

bool gm82_events_has_draw_event(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst || !rt->objects) return false;
    int32_t oi = inst->object_index;
    int depth = 0;
    while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
        const gm82_decoded_object *obj = &rt->objects->items[oi];
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            if (obj->events[e].main_type == GM82_EV_DRAW) return true;
        }
        oi = obj->parent_index;
    }
    return false;
}

void gm82_events_fire_draw_all(gm82_runtime *rt) {
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive || !inst->visible) continue;
        gm82_events_fire_draw_single(rt, inst);
    }
}

void gm82_events_fire_post_draw_all(gm82_runtime *rt) {
    (void)rt;
}

int gm82_events_autobind_from_gmk_blob(const uint8_t *blob, size_t len) {
    if (!blob || len < 32) return 0;
    int bound = 0;
    for (size_t i = 0; i + 64 < len && g_autobind_store_n < 16; i++) {
        size_t j = i;
        while (j < len && (blob[j] < 32 || blob[j] >= 127) && blob[j] != 9 && blob[j] != 10) j++;
        if (j >= len) break;
        size_t start = j;
        while (j < len && j - start < 1000 && ((blob[j] >= 32 && blob[j] < 127) || blob[j] == 9 || blob[j] == 10 || blob[j] == 13)) j++;
        size_t n = j - start;
        if (n < 20) { i = j; continue; }
        const char *s = (const char *)(blob + start);
        int score = 0;
        for (size_t k = 0; k + 9 <= n; k++) if (memcmp(s + k, "keyboard_", 9) == 0) { score += 2; break; }
        for (size_t k = 0; k + 3 <= n; k++) if (memcmp(s + k, "if ", 3) == 0) { score += 1; break; }
        for (size_t k = 0; k + 6 <= n; k++) if (memcmp(s + k, "hspeed", 6) == 0) { score += 1; break; }
        if (score < 2) { i = j; continue; }
        int ncopy = n < 1023 ? (int)n : 1023;
        memcpy(g_autobind_code_store[g_autobind_store_n], s, (size_t)ncopy);
        g_autobind_code_store[g_autobind_store_n][ncopy] = 0;
        char namebuf[64];
        snprintf(namebuf, sizeof(namebuf), "auto_%d", g_autobind_store_n);
        if (gm82_events_bind_gml_step(namebuf, g_autobind_code_store[g_autobind_store_n])) {
            g_autobind_store_n++;
            bound++;
        }
        i = j;
    }
    return bound;
}

int gm82_events_autobind_gml_from_gmk(const uint8_t *data, size_t size) {
    return gm82_events_autobind_from_gmk_blob(data, size);
}

int gm82_events_autobind_scan_zlib_regions(const uint8_t *data, size_t len) {
    (void)data; (void)len;
    return 0;
}
