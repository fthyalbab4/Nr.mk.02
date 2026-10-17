#define _GNU_SOURCE
#define _POSIX_C_SOURCE 200809L
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
    { "minimario",     beh_player_create, beh_player_step },
    { "obj_minimario", beh_player_create, beh_player_step },
    { "obj_mario",     beh_player_create, beh_player_step },
    { "mario",         beh_player_create, beh_player_step },
    { "objPlayer",     beh_player_create, beh_player_step },
    { "obj_player",    beh_player_create, beh_player_step },
    { "Player",        beh_player_create, beh_player_step },
    { "heroe",         beh_player_create, beh_player_step },
    { "fantasma",      beh_player_create, beh_player_step },
    { "obj_link",      beh_player_create, beh_player_step },
    { "link",          beh_player_create, beh_player_step },
    { "obj_enemigo",   NULL,              beh_enemy_step },
    { "enemigo",       NULL,              beh_enemy_step },
    { "objEnemigo",    NULL,              beh_enemy_step },
    { "oso",           NULL,              beh_enemy_step },
    { "obj_bloque",    beh_solid_create,  NULL },
    { "bloque",        beh_solid_create,  NULL },
    { "objBloque",     beh_solid_create,  NULL },
    { "obj_castillo",  beh_solid_create,  NULL },
    { "castillo",      beh_solid_create,  NULL },
    { "caja",          beh_solid_create,  NULL },
    { NULL, NULL, NULL }
};

void gm82_events_register_defaults(void) {
}

const gm82_behavior *gm82_events_find_behavior(gm82_runtime *rt, int32_t object_index) {
    if (!rt || !rt->objects || object_index < 0 || object_index >= rt->objects->count)
        return NULL;
    const char *name = rt->objects->items[object_index].name;
    if (!name || !name[0]) return NULL;
    if (strstr(name, "pierde") || strstr(name, "dead") || strstr(name, "lose") ||
        strstr(name, "muerte") || strstr(name, "die"))
        return NULL;
    const gm82_behavior *best = NULL;
    size_t best_len = 0;
    for (int i = 0; g_behaviors[i].object_name_prefix; i++) {
        const char *pre = g_behaviors[i].object_name_prefix;
        size_t pl = strlen(pre);
        if (pl == 0) continue;
        if ((strncmp(name, pre, pl) == 0 || strstr(name, pre) != NULL) && pl >= best_len) {
            best = &g_behaviors[i];
            best_len = pl;
        }
    }
    return best;
}

#define GM82_GML_BIND_MAX 16
typedef struct {
    char prefix[64];
    const char *code;
} gm82_gml_bind;

static gm82_gml_bind g_gml_step[GM82_GML_BIND_MAX];
static gm82_gml_bind g_gml_create[GM82_GML_BIND_MAX];
static int g_gml_step_n;
static int g_gml_create_n;

void gm82_events_clear_gml_bindings(void) {
    g_gml_step_n = 0;
    g_gml_create_n = 0;
    memset(g_gml_step, 0, sizeof(g_gml_step));
    memset(g_gml_create, 0, sizeof(g_gml_create));
}

bool gm82_events_bind_gml_step(const char *object_name_prefix, const char *code) {
    if (!object_name_prefix || !code || g_gml_step_n >= GM82_GML_BIND_MAX) return false;
    gm82_gml_bind *b = &g_gml_step[g_gml_step_n++];
    strncpy(b->prefix, object_name_prefix, sizeof(b->prefix)-1);
    b->code = code;
    return true;
}

bool gm82_events_bind_gml_create(const char *object_name_prefix, const char *code) {
    if (!object_name_prefix || !code || g_gml_create_n >= GM82_GML_BIND_MAX) return false;
    gm82_gml_bind *b = &g_gml_create[g_gml_create_n++];
    strncpy(b->prefix, object_name_prefix, sizeof(b->prefix)-1);
    b->code = code;
    return true;
}

static const char *find_gml(gm82_gml_bind *arr, int n, gm82_runtime *rt, int32_t object_index) {
    if (!rt || !rt->objects || object_index < 0 || object_index >= rt->objects->count) return NULL;
    const char *name = rt->objects->items[object_index].name;
    for (int i = 0; i < n; i++) {
        size_t L = strlen(arr[i].prefix);
        if (L > 0 && strncmp(name, arr[i].prefix, L) == 0) return arr[i].code;
    }
    return NULL;
}

static void fire_object_create_actions(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst || !rt->objects) return;
    int32_t oi = inst->object_index;
    if (oi < 0 || oi >= rt->objects->count) return;
    const gm82_decoded_object *obj = &rt->objects->items[oi];
    for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
        const gm82_decoded_event *ev = &obj->events[e];
        if (ev->main_type != 0) continue;
        if (ev->action_name0[0])
            gm82_action_execute_named(rt, inst, ev->action_name0);
    }
}

void gm82_events_fire_collision(gm82_runtime *rt, gm82_instance *inst, gm82_instance *other) {
    if (!rt || !inst || !rt->objects) return;
    int32_t oi = inst->object_index;
    if (oi < 0 || oi >= rt->objects->count) return;
    const gm82_decoded_object *obj = &rt->objects->items[oi];
    (void)other;
    for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
        const gm82_decoded_event *ev = &obj->events[e];
        if (ev->main_type != 4) continue;
        if (!ev->action_name0[0]) continue;
        gm82_action_execute_named(rt, inst, ev->action_name0);
    }
}

void gm82_events_fire_destroy(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst || !inst->alive || !rt->objects) return;
    int32_t oi = inst->object_index;
    if (oi < 0 || oi >= rt->objects->count) return;
    const gm82_decoded_object *obj = &rt->objects->items[oi];
    for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
        const gm82_decoded_event *ev = &obj->events[e];
        if (ev->main_type == 1) { /* GM82_EV_DESTROY */
            if (ev->code_snippet) {
                gm82_gml_set_self(inst);
                gm82_gml_eval_block(rt, inst, ev->code_snippet);
            } else if (ev->action_name0[0]) {
                gm82_action_execute_named(rt, inst, ev->action_name0);
            }
        }
    }
}

void gm82_events_fire_alarm(gm82_runtime *rt, gm82_instance *inst, int alarm_index) {
    if (!rt || !inst || !inst->alive || alarm_index < 0 || alarm_index >= 12) return;
    gm82_gml_set_runtime(rt);
    int32_t oi = inst->object_index;
    if (oi >= 0 && rt->objects && oi < rt->objects->count) {
        const gm82_decoded_object *obj = &rt->objects->items[oi];
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            const gm82_decoded_event *ev = &obj->events[e];
            if (ev->main_type == 2 && ev->event_numb == alarm_index) { /* GM82_EV_ALARM */
                if (ev->code_snippet) {
                    gm82_gml_set_self(inst);
                    gm82_gml_eval_block(rt, inst, ev->code_snippet);
                } else if (ev->action_name0[0]) {
                    gm82_action_execute_named(rt, inst, ev->action_name0);
                }
            }
        }
    }
    gm82_alarm_fire_scripts(rt, inst, alarm_index);
}

void gm82_events_fire_create_single(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst || !inst->alive) return;
    gm82_gml_set_runtime(rt);
    const char *gcode = find_gml(g_gml_create, g_gml_create_n, rt, inst->object_index);
    if (gcode) {
        gm82_gml_set_self(inst);
        gm82_gml_eval_block(rt, inst, gcode);
    } else {
        const gm82_behavior *b = gm82_events_find_behavior(rt, inst->object_index);
        if (b && b->on_create) {
            gm82_gml_set_self(inst);
            b->on_create(rt, inst);
        }
    }
    fire_object_create_actions(rt, inst);
    if (rt->actions)
        gm82_actions_fire_create(rt, inst, rt->actions);
}

void gm82_events_fire_create_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_instance *snapshot[GM82_MAX_INSTANCES];
    int count = gm82_runtime_get_active_snapshot(rt, snapshot);
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < count; i++) {
        gm82_instance *inst = snapshot[i];
        if (!inst || !inst->alive) continue;
        gm82_events_fire_create_single(rt, inst);
    }
}

static void fire_object_step_actions(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst || !rt->objects) return;
    int32_t oi = inst->object_index;
    if (oi < 0 || oi >= rt->objects->count) return;
    const gm82_decoded_object *obj = &rt->objects->items[oi];
    for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
        const gm82_decoded_event *ev = &obj->events[e];
        if (ev->main_type == 3 && (ev->event_numb == 0 || ev->event_numb == -1) && ev->action_name0[0])
            gm82_action_execute_named(rt, inst, ev->action_name0);
    }
}

void gm82_events_fire_begin_step_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_instance *snapshot[GM82_MAX_INSTANCES];
    int count = gm82_runtime_get_active_snapshot(rt, snapshot);
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < count; i++) {
        gm82_instance *inst = snapshot[i];
        if (!inst || !inst->alive) continue;
        int32_t oi = inst->object_index;
        if (oi >= 0 && rt->objects && oi < rt->objects->count) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type == 3 && ev->event_numb == 1) { /* Begin Step */
                    if (ev->code_snippet) {
                        gm82_gml_set_self(inst);
                        gm82_gml_eval_block(rt, inst, ev->code_snippet);
                    } else if (ev->action_name0[0]) {
                        gm82_action_execute_named(rt, inst, ev->action_name0);
                    }
                }
            }
        }
    }
}

void gm82_events_fire_end_step_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_instance *snapshot[GM82_MAX_INSTANCES];
    int count = gm82_runtime_get_active_snapshot(rt, snapshot);
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < count; i++) {
        gm82_instance *inst = snapshot[i];
        if (!inst || !inst->alive) continue;
        int32_t oi = inst->object_index;
        if (oi >= 0 && rt->objects && oi < rt->objects->count) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type == 3 && ev->event_numb == 2) { /* End Step */
                    if (ev->code_snippet) {
                        gm82_gml_set_self(inst);
                        gm82_gml_eval_block(rt, inst, ev->code_snippet);
                    } else if (ev->action_name0[0]) {
                        gm82_action_execute_named(rt, inst, ev->action_name0);
                    }
                }
            }
        }
    }
}

void gm82_events_fire_step_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_instance *snapshot[GM82_MAX_INSTANCES];
    int count = gm82_runtime_get_active_snapshot(rt, snapshot);
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < count; i++) {
        gm82_instance *inst = snapshot[i];
        if (!inst || !inst->alive) continue;
        const char *gcode = find_gml(g_gml_step, g_gml_step_n, rt, inst->object_index);
        if (gcode) {
            gm82_gml_set_self(inst);
            gm82_gml_eval_block(rt, inst, gcode);
        } else {
            const gm82_behavior *b = gm82_events_find_behavior(rt, inst->object_index);
            if (b && b->on_step) {
                gm82_gml_set_self(inst);
                b->on_step(rt, inst);
            }
        }
        fire_object_step_actions(rt, inst);
        if (rt->actions)
            gm82_actions_fire_step(rt, inst, rt->actions);
    }
}

void gm82_events_fire_pre_draw_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_instance *snapshot[GM82_MAX_INSTANCES];
    int count = gm82_runtime_get_active_snapshot(rt, snapshot);
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < count; i++) {
        gm82_instance *inst = snapshot[i];
        if (!inst || !inst->alive) continue;
        int32_t oi = inst->object_index;
        if (oi >= 0 && rt->objects && oi < rt->objects->count) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type == 8 && ev->event_numb == 72) { /* Pre-Draw */
                    if (ev->code_snippet) {
                        gm82_gml_set_self(inst);
                        gm82_gml_eval_block(rt, inst, ev->code_snippet);
                    } else if (ev->action_name0[0]) {
                        gm82_action_execute_named(rt, inst, ev->action_name0);
                    }
                }
            }
        }
    }
}

void gm82_events_fire_draw_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_instance *snapshot[GM82_MAX_INSTANCES];
    int count = gm82_runtime_get_active_snapshot(rt, snapshot);
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < count; i++) {
        gm82_instance *inst = snapshot[i];
        if (!inst || !inst->alive || !inst->visible) continue;
        int32_t oi = inst->object_index;
        if (oi >= 0 && rt->objects && oi < rt->objects->count) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type == 8 && (ev->event_numb == 0 || ev->event_numb == -1)) { /* Standard Draw */
                    if (ev->code_snippet) {
                        gm82_gml_set_self(inst);
                        gm82_gml_eval_block(rt, inst, ev->code_snippet);
                    } else if (ev->action_name0[0]) {
                        gm82_action_execute_named(rt, inst, ev->action_name0);
                    }
                }
            }
        }
    }
}

void gm82_events_fire_post_draw_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_instance *snapshot[GM82_MAX_INSTANCES];
    int count = gm82_runtime_get_active_snapshot(rt, snapshot);
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < count; i++) {
        gm82_instance *inst = snapshot[i];
        if (!inst || !inst->alive) continue;
        int32_t oi = inst->object_index;
        if (oi >= 0 && rt->objects && oi < rt->objects->count) {
            const gm82_decoded_object *obj = &rt->objects->items[oi];
            for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const gm82_decoded_event *ev = &obj->events[e];
                if (ev->main_type == 8 && (ev->event_numb == 73 || ev->event_numb == 64)) { /* Post-Draw / Draw GUI */
                    if (ev->code_snippet) {
                        gm82_gml_set_self(inst);
                        gm82_gml_eval_block(rt, inst, ev->code_snippet);
                    } else if (ev->action_name0[0]) {
                        gm82_action_execute_named(rt, inst, ev->action_name0);
                    }
                }
            }
        }
    }
}

static int32_t ev_rd_i32(const uint8_t *p) {
    return (int32_t)(p[0]|p[1]<<8|p[2]<<16|p[3]<<24);
}

static uint8_t *ev_inflate(const uint8_t *src, size_t n, size_t *ol) {
    *ol = 0;
    z_stream strm; memset(&strm, 0, sizeof(strm));
    if (inflateInit2(&strm, 15) != Z_OK) return NULL;
    size_t cap = n * 8 + 256;
    uint8_t *dst = (uint8_t *)malloc(cap);
    if (!dst) { inflateEnd(&strm); return NULL; }
    strm.next_in = (Bytef *)src; strm.avail_in = (uInt)n;
    strm.next_out = dst; strm.avail_out = (uInt)cap;
    int ret;
    while ((ret = inflate(&strm, Z_NO_FLUSH)) == Z_OK) {
        if (strm.avail_out == 0) {
            size_t used = cap; cap *= 2;
            uint8_t *nd = (uint8_t *)realloc(dst, cap);
            if (!nd) { free(dst); inflateEnd(&strm); return NULL; }
            dst = nd; strm.next_out = dst + used; strm.avail_out = (uInt)(cap - used);
        }
    }
    if (ret != Z_STREAM_END) { free(dst); inflateEnd(&strm); return NULL; }
    *ol = strm.total_out; inflateEnd(&strm); return dst;
}

static char g_autobind_code_store[16][1024];
static int g_autobind_store_n;

int gm82_events_autobind_gml_from_gmk(const uint8_t *data, size_t size) {
    if (!data || size < 12) return -1;
    int bound = 0;
    g_autobind_store_n = 0;
    for (size_t i = 12; i + 2 < size; i++) {
        if (!(data[i]==0x78 && (data[i+1]==0x9c||data[i+1]==0xda||data[i+1]==0x01||data[i+1]==0x5e)))
            continue;
        size_t ol = 0;
        uint8_t *d = ev_inflate(data + i, size - i, &ol);
        i += 16;
        if (!d || ol < 40) { free(d); continue; }
        if (ev_rd_i32(d) != 1) { free(d); continue; }
        int32_t slen = ev_rd_i32(d + 4);
        if (slen < 3 || slen > 48 || 8 + (size_t)slen > ol) { free(d); continue; }
        char name[64];
        memcpy(name, d + 8, (size_t)slen); name[slen] = 0;
        int ok = 1;
        for (int k = 0; k < slen; k++) if (name[k] < 32 || name[k] > 126) ok = 0;
        if (!ok) { free(d); continue; }
        int name_ok = (strncmp(name, "obj", 3) == 0) || strstr(name, "mario") ||
                      strstr(name, "player") || strstr(name, "link") || strstr(name, "fantasma");
        if (!name_ok) { free(d); continue; }

        const char *best = NULL; int best_n = 0;
        for (size_t j = 0; j + 8 < ol; j++) {
            int32_t n = ev_rd_i32(d + j);
            if (n < 16 || n > 1000 || j + 4 + (size_t)n > ol) continue;
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
            if (gm82_events_bind_gml_step(name, g_autobind_code_store[g_autobind_store_n])) {
                g_autobind_store_n++;
                bound++;
            }
        }
        free(d);
    }
    return bound;
}
