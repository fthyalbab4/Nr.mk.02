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

/* Autobind storage for extracted GML snippets */
static char g_autobind_code_store[16][1024];
static int g_autobind_store_n = 0;

bool gm82_events_bind_gml_step(const char *object_name, const char *code) {
    if (!object_name || !code) return false;
    /* For now we just accept the binding; full table wiring is later */
    (void)object_name; (void)code;
    return true;
}

int gm82_events_autobind_from_gmk_blob(const uint8_t *blob, size_t len) {
    if (!blob || len < 32) return 0;
    int bound = 0;
    /* Heuristic scan for printable GML-looking strings inside the blob */
    for (size_t i = 0; i + 64 < len && g_autobind_store_n < 16; i++) {
        /* Look for zlib-ish or plain text regions */
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
        for (size_t k = 0; k + 6 <= n; k++) if (memcmp(s + k, "image_", 6) == 0) { score += 1; break; }
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

/* ---- Event fire helpers ---- */

static bool gm82_instance_matches_object(gm82_runtime *rt, gm82_instance *inst, int32_t object_index) {
    if (!rt || !inst || !rt->objects) return false;
    if (inst->object_index == object_index) return true;
    /* Walk parent chain */
    int32_t oi = inst->object_index;
    int depth = 0;
    while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
        if (oi == object_index) return true;
        oi = rt->objects->items[oi].parent_index;
    }
    return false;
}

void gm82_events_fire_create_single(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst || !rt->objects) return;
    int32_t oi = inst->object_index;
    int depth = 0;
    gm82_gml_set_runtime(rt);
    while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
        const gm82_decoded_object *obj = &rt->objects->items[oi];
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            const gm82_decoded_event *ev = &obj->events[e];
            if (ev->main_type != GM82_EV_CREATE) continue;
            if (ev->action_name0[0])
                gm82_action_execute_named(rt, inst, ev->action_name0);
            if (ev->code_snippet && ev->code_snippet[0]) {
                gm82_gml_set_self(inst);
                gm82_gml_eval_block(rt, inst, ev->code_snippet);
            }
        }
        /* Built-in behaviors by name */
        for (const gm82_behavior *b = g_behaviors; b->name; b++) {
            if (obj->name[0] && strstr(obj->name, b->name) && b->create)
                b->create(rt, inst);
        }
        oi = obj->parent_index;
    }
}

void gm82_events_fire_begin_step_all(gm82_runtime *rt) {
    if (!rt || !rt->objects) return;
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        int32_t oi = inst->object_index;
        int depth = 0;
        while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type != GM82_EV_STEP || ev->event_numb != GM82_EV_STEP_BEGIN) continue;
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

void gm82_events_fire_alarm(gm82_runtime *rt, gm82_instance *inst, int alarm_index) {
    if (!rt || !inst || !rt->objects) return;
    int32_t oi = inst->object_index;
    int depth = 0;
    gm82_gml_set_runtime(rt);
    while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
        const gm82_decoded_object *obj = &rt->objects->items[oi];
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            const gm82_decoded_event *ev = &obj->events[e];
            if (ev->main_type != GM82_EV_ALARM || ev->event_numb != alarm_index) continue;
            if (ev->action_name0[0])
                gm82_action_execute_named(rt, inst, ev->action_name0);
            if (ev->code_snippet && ev->code_snippet[0]) {
                gm82_gml_set_self(inst);
                gm82_gml_eval_block(rt, inst, ev->code_snippet);
            }
        }
        oi = obj->parent_index;
    }
    /* Script hooks if any */
    gm82_alarm_fire_scripts(rt, inst, alarm_index);
}

void gm82_events_fire_step_all(gm82_runtime *rt) {
    if (!rt || !rt->objects) return;
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        int32_t oi = inst->object_index;
        int depth = 0;
        while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type != GM82_EV_STEP || ev->event_numb != GM82_EV_STEP_NORMAL) continue;
                if (ev->action_name0[0])
                    gm82_action_execute_named(rt, inst, ev->action_name0);
                if (ev->code_snippet && ev->code_snippet[0]) {
                    gm82_gml_set_self(inst);
                    gm82_gml_eval_block(rt, inst, ev->code_snippet);
                }
            }
            /* Built-in step behaviors */
            for (const gm82_behavior *b = g_behaviors; b->name; b++) {
                if (obj->name[0] && strstr(obj->name, b->name) && b->step)
                    b->step(rt, inst);
            }
            oi = obj->parent_index;
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
        if (fired) break; /* GM stops at first matching event in inheritance? keep simple */
        oi = obj->parent_index;
    }
}

void gm82_events_fire_end_step_all(gm82_runtime *rt) {
    if (!rt || !rt->objects) return;
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        int32_t oi = inst->object_index;
        int depth = 0;
        while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type != GM82_EV_STEP || ev->event_numb != GM82_EV_STEP_END) continue;
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

void gm82_events_fire_keyboard_all(gm82_runtime *rt) {
    if (!rt || !rt->objects) return;
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        int32_t oi = inst->object_index;
        int depth = 0;
        while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type != GM82_EV_KEYBOARD) continue;
                /* event_numb is the key code */
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

void gm82_events_fire_mouse_all(gm82_runtime *rt) {
    if (!rt || !rt->objects) return;
    gm82_gml_set_runtime(rt);
    /* Minimal: only left button press for now */
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        int32_t oi = inst->object_index;
        int depth = 0;
        while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type != GM82_EV_MOUSE) continue;
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

void gm82_events_fire_other(gm82_runtime *rt, gm82_instance *inst, int other_index) {
    if (!rt || !inst || !rt->objects) return;
    int32_t oi = inst->object_index;
    int depth = 0;
    gm82_gml_set_runtime(rt);
    while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
        const gm82_decoded_object *obj = &rt->objects->items[oi];
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            const gm82_decoded_event *ev = &obj->events[e];
            if (ev->main_type != GM82_EV_OTHER) continue;
            if (other_index >= 0 && ev->event_numb != other_index) continue;
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

void gm82_events_fire_pre_draw_all(gm82_runtime *rt) {
    if (!rt || !rt->objects) return;
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive || !inst->visible) continue;
        int32_t oi = inst->object_index;
        int depth = 0;
        while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type != GM82_EV_DRAW || ev->event_numb != 0 /* pre? */) continue;
                /* Currently treat as draw; refine later */
                (void)ev;
            }
            oi = obj->parent_index;
        }
    }
}

void gm82_events_fire_draw_single(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst || !rt->objects || !inst->visible) return;
    int32_t oi = inst->object_index;
    int depth = 0;
    gm82_gml_set_runtime(rt);
    gm82_gml_set_self(inst);
    while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
        const gm82_decoded_object *obj = &rt->objects->items[oi];
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            const gm82_decoded_event *ev = &obj->events[e];
            if (ev->main_type != GM82_EV_DRAW) continue;
            if (ev->action_name0[0])
                gm82_action_execute_named(rt, inst, ev->action_name0);
            if (ev->code_snippet && ev->code_snippet[0]) {
                gm82_gml_eval_block(rt, inst, ev->code_snippet);
            }
        }
        oi = obj->parent_index;
    }
}

void gm82_events_fire_draw_all(gm82_runtime *rt) {
    if (!rt) return;
    /* Simple depth sort later; for now just iterate */
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive || !inst->visible) continue;
        gm82_events_fire_draw_single(rt, inst);
    }
}

void gm82_events_fire_post_draw_all(gm82_runtime *rt) {
    (void)rt;
    /* Placeholder for post-draw GUI etc */
}

int gm82_events_autobind_scan_zlib_regions(const uint8_t *data, size_t len) {
    if (!data || len < 16) return 0;
    int bound = 0;
    for (size_t i = 0; i + 8 < len && g_autobind_store_n < 16; i++) {
        /* Look for zlib header 78 9C / 78 01 / 78 DA */
        if (data[i] != 0x78) continue;
        if (!(data[i+1] == 0x9c || data[i+1] == 0x01 || data[i+1] == 0xda || data[i+1] == 0x5e)) continue;
        /* Try inflate */
        z_stream strm;
        memset(&strm, 0, sizeof(strm));
        if (inflateInit(&strm) != Z_OK) continue;
        uint8_t *out = (uint8_t *)malloc(65536);
        if (!out) { inflateEnd(&strm); continue; }
        strm.next_in = (Bytef *)(data + i);
        strm.avail_in = (uInt)(len - i > 60000 ? 60000 : len - i);
        strm.next_out = out;
        strm.avail_out = 65536;
        int ret = inflate(&strm, Z_FINISH);
        size_t ol = 65536 - strm.avail_out;
        inflateEnd(&strm);
        if (ret != Z_STREAM_END && ret != Z_OK) { free(out); continue; }
        /* Scan decompressed for GML-ish */
        const uint8_t *d = out;
        const char *best = NULL;
        int best_n = 0;
        char name[64] = {0};
        for (size_t j = 0; j + 20 < ol; j++) {
            int32_t n = 0;
            /* Try length-prefixed or just printable run */
            if (j + 4 < ol) {
                n = (int32_t)(d[j] | (d[j+1]<<8) | (d[j+2]<<16) | (d[j+3]<<24));
                if (n < 16 || n > 1000 || j + 4 + (size_t)n > ol) n = 0;
            }
            if (n <= 0) continue;
            const uint8_t *s = d + j + 4;
            int good = 1;
            for (int k = 0; k < n; k++) {
                unsigned char c = s[k];
                if (!(c >= 32 && c < 127) && c != 9 && c != 10 && c != 13) { good = 0; break; }
            }
            if (!good) continue;
            int score = 0;
            for (int k = 0; k <= n - 9; k++) if (memcmp(s + k, "keyboard_", 9) == 0) { score += 2; break; }
            for (int k = 0; k <= n - 3; k++) if (memcmp(s + k, "if ", 3) == 0) { score += 1; break; }
            for (int k = 0; k <= n - 6; k++) if (memcmp(s + k, "hspeed", 6) == 0) { score += 1; break; }
            for (int k = 0; k <= n - 6; k++) if (memcmp(s + k, "image_", 6) == 0) { score += 1; break; }
            if (score < 2) continue;
            if (n > best_n) { best_n = n; best = (const char *)s; }
        }
        if (best && g_autobind_store_n < 16) {
            int ncopy = best_n < 1023 ? best_n : 1023;
            memcpy(g_autobind_code_store[g_autobind_store_n], best, (size_t)ncopy);
            g_autobind_code_store[g_autobind_store_n][ncopy] = 0;
            snprintf(name, sizeof(name), "auto_z_%d", g_autobind_store_n);
            if (gm82_events_bind_gml_step(name, g_autobind_code_store[g_autobind_store_n])) {
                g_autobind_store_n++;
                bound++;
            }
        }
        free(out);
        i += 8; /* skip ahead a bit */
    }
    return bound;
}
