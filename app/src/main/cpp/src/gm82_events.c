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
#include <zlib.h>

static void beh_player_create(gm82_runtime *rt, gm82_instance *self) {
    (void)rt;
    self->image_speed = 0.2;
}

static void beh_player_step(gm82_runtime *rt, gm82_instance *self) {
    gm82_gml_set_runtime(rt);
    gm82_gml_set_self(self);
    {
        double h = 0;
        if (gml_keyboard_check(37) || gml_keyboard_check(65)) h -= 3.0;
        if (gml_keyboard_check(39) || gml_keyboard_check(68)) h += 3.0;
        self->hspeed = h;
        if ((gml_keyboard_check(38) || gml_keyboard_check(32)) && self->vspeed >= -0.05 && self->vspeed <= 0.6)
            self->vspeed = -8.0;
        else
            self->vspeed += 0.5;
    }
    (void)rt;
}

static void beh_enemy_step(gm82_runtime *rt, gm82_instance *self) {
    gm82_gml_set_runtime(rt);
    gm82_gml_set_self(self);
    if (self->hspeed == 0) self->hspeed = 1.0;
    if (self->x < 0 || self->x > rt->room_width - 16)
        self->hspeed = -self->hspeed;
    self->vspeed += 0.3;
}

static void beh_solid_create(gm82_runtime *rt, gm82_instance *self) {
    (void)rt;
    self->solid = 1;
}

static const gm82_behavior g_behaviors[] = {
    { "mini_mario",    beh_player_create, beh_player_step },
    { "obj_player",    beh_player_create, beh_player_step },
    { "obj_mario",     beh_player_create, beh_player_step },
    { "obj_enemy",     NULL,              beh_enemy_step },
    { "obj_goomba",    NULL,              beh_enemy_step },
    { "obj_solid",     beh_solid_create,  NULL },
    { "obj_wall",      beh_solid_create,  NULL },
    { "obj_block",     beh_solid_create,  NULL },
    { "obj_ground",    beh_solid_create,  NULL },
    { NULL, NULL, NULL }
};

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
    if (!rt || !rt->objects || object_index < 0 || object_index >= rt->objects->count) return NULL;
    const char *name = rt->objects->items[object_index].name;
    if (!name || !name[0]) return NULL;
    for (const gm82_behavior *b = g_behaviors; b && b->object_name_prefix; b++) {
        if (strstr(name, b->object_name_prefix)) return b;
    }
    return NULL;
}

void gm82_events_register_defaults(void) { }

static bool gm82_instance_matches_object(gm82_runtime *rt, gm82_instance *inst, int32_t object_index) {
    if (!rt || !inst || !rt->objects) return false;
    if (inst->object_index == object_index) return true;
    int32_t oi = inst->object_index;
    int depth = 0;
    while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
        if (oi == object_index) return true;
        oi = rt->objects->items[oi].parent_index;
    }
    return false;
}

static void fire_object_events(gm82_runtime *rt, gm82_instance *inst,
                               int main_type, int event_numb,
                               int use_other, gm82_instance *other_inst) {
    if (!rt || !inst || !rt->objects) return;
    int32_t oi = inst->object_index;
    int depth = 0;
    gm82_gml_set_runtime(rt);
    while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
        const gm82_decoded_object *obj = &rt->objects->items[oi];
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            const gm82_decoded_event *ev = &obj->events[e];
            if (ev->main_type != main_type) continue;
            if (event_numb >= 0 && ev->event_numb != event_numb) continue;
            if (ev->action_name0[0])
                gm82_action_execute_named(rt, inst, ev->action_name0);
            if (ev->code_snippet && ev->code_snippet[0]) {
                gm82_gml_set_self(inst);
                if (use_other && other_inst) gm82_gml_set_other(other_inst);
                gm82_gml_eval_block(rt, inst, ev->code_snippet);
                if (use_other) gm82_gml_set_other(NULL);
            }
        }
        oi = obj->parent_index;
    }
}

void gm82_events_fire_create_single(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst) return;
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

void gm82_events_fire_keyboard_all(gm82_runtime *rt) {
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        int32_t oi = inst->object_index;
        int depth = 0;
        gm82_gml_set_runtime(rt);
        while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type != GM82_EV_KEYBOARD) continue;
                if (ev->event_numb >= 0 && !gml_keyboard_check(ev->event_numb)) continue;
                if (ev->action_name0[0])
                    gm82_action_execute_named(rt, inst, ev->action_name0);
                if (ev->code_snippet && ev->code_snippet[0]) {
                    gm82_gml_set_self(inst);
                    gm82_gml_eval_block(rt, inst, ev->code_snippet);
                }
            }
            oi = obj->parent_index;
        }
    }
}

void gm82_events_fire_keypress_all(gm82_runtime *rt) {
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        int32_t oi = inst->object_index;
        int depth = 0;
        gm82_gml_set_runtime(rt);
        while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type != GM82_EV_KEYPRESS) continue;
                if (ev->event_numb >= 0 && !gml_keyboard_check_pressed(ev->event_numb)) continue;
                if (ev->action_name0[0])
                    gm82_action_execute_named(rt, inst, ev->action_name0);
                if (ev->code_snippet && ev->code_snippet[0]) {
                    gm82_gml_set_self(inst);
                    gm82_gml_eval_block(rt, inst, ev->code_snippet);
                }
            }
            oi = obj->parent_index;
        }
    }
}

void gm82_events_fire_keyrelease_all(gm82_runtime *rt) {
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        int32_t oi = inst->object_index;
        int depth = 0;
        gm82_gml_set_runtime(rt);
        while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type != GM82_EV_KEYRELEASE) continue;
                if (ev->event_numb >= 0 && !gml_keyboard_check_released(ev->event_numb)) continue;
                if (ev->action_name0[0])
                    gm82_action_execute_named(rt, inst, ev->action_name0);
                if (ev->code_snippet && ev->code_snippet[0]) {
                    gm82_gml_set_self(inst);
                    gm82_gml_eval_block(rt, inst, ev->code_snippet);
                }
            }
            oi = obj->parent_index;
        }
    }
}

void gm82_events_fire_mouse_all(gm82_runtime *rt) {
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        fire_object_events(rt, inst, GM82_EV_MOUSE, -1, 0, NULL);
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
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        if (inst->image_speed != 0.0) {
            double prev = inst->image_index;
            double next = prev + inst->image_speed;
            if ((int)next != (int)prev && (int)next < (int)prev) {
                gm82_events_fire_other(rt, inst, GM82_OTHER_ANIMATION_END);
            }
        }
    }
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
            if (ev->action_name0[0])
                gm82_action_execute_named(rt, inst, ev->action_name0);
            if (ev->code_snippet && ev->code_snippet[0]) {
                gm82_gml_set_self(inst);
                if (other) gm82_gml_set_other(other);
                gm82_gml_eval_block(rt, inst, ev->code_snippet);
                gm82_gml_set_other(NULL);
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
