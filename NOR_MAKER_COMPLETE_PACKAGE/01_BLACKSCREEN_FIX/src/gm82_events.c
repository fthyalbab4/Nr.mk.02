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

/* NOTE: This is the P0-critical subset (create/destroy/alarm/collision with gml_set_other).
 * Full file (step/keyboard/mouse/other/draw/...) is ~33KB — see tools/RESTORE_FULL_EVENTS.md
 */

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
    { "obj_guy",       beh_player_create, beh_player_step },
    { "guy",           beh_player_create, beh_player_step },
    { "obj_ship",      beh_player_create, beh_player_step },
    { "ship",          beh_player_create, beh_player_step },
    { "jugador",       beh_player_create, beh_player_step },
    { "obj_jugador",   beh_player_create, beh_player_step },
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

void gm82_events_register_defaults(void) {}

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
    int depth = 0;
    while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
        const gm82_decoded_object *obj = &rt->objects->items[oi];
        bool fired = false;
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            const gm82_decoded_event *ev = &obj->events[e];
            if (ev->main_type != GM82_EV_CREATE) continue;
            fired = true;
            if (ev->action_name0[0])
                gm82_action_execute_named(rt, inst, ev->action_name0);
            if (ev->code_snippet && ev->code_snippet[0]) {
                gm82_gml_set_self(inst);
                gm82_gml_eval_block(rt, inst, ev->code_snippet);
            }
        }
        if (fired) break;
        int parent_i = obj->parent_index;
        if (parent_i < 0 || parent_i == oi) break;
        oi = parent_i;
    }
}

void gm82_events_fire_create_single(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst || !inst->alive || inst->create_fired) return;
    inst->create_fired = 1;
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

void gm82_events_fire_destroy(gm82_runtime *rt, gm82_instance *inst) {
    if (!rt || !inst || !rt->objects) return;
    int32_t oi = inst->object_index;
    int depth = 0;
    gm82_gml_set_runtime(rt);
    while (oi >= 0 && oi < rt->objects->count && depth++ < 32) {
        const gm82_decoded_object *obj = &rt->objects->items[oi];
        bool fired = false;
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            const gm82_decoded_event *ev = &obj->events[e];
            if (ev->main_type == GM82_EV_DESTROY) {
                fired = true;
                if (ev->action_name0[0])
                    gm82_action_execute_named(rt, inst, ev->action_name0);
                if (ev->code_snippet && ev->code_snippet[0]) {
                    gm82_gml_set_self(inst);
                    gm82_gml_eval_block(rt, inst, ev->code_snippet);
                }
            }
        }
        if (fired) break;
        int parent_i = obj->parent_index;
        if (parent_i < 0 || parent_i == oi) break;
        oi = parent_i;
    }
}

void gm82_events_fire_alarm(gm82_runtime *rt, gm82_instance *inst, int alarm_index) {
    if (!rt || !inst || !inst->alive || alarm_index < 0 || alarm_index >= 12) return;
    gm82_gml_set_runtime(rt);
    int32_t oi = inst->object_index;
    int depth = 0;
    while (oi >= 0 && rt->objects && oi < rt->objects->count && depth++ < 32) {
        const gm82_decoded_object *obj = &rt->objects->items[oi];
        bool fired = false;
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            const gm82_decoded_event *ev = &obj->events[e];
            if (ev->main_type == GM82_EV_ALARM && ev->event_numb == alarm_index) {
                fired = true;
                if (ev->action_name0[0])
                    gm82_action_execute_named(rt, inst, ev->action_name0);
                if (ev->code_snippet && ev->code_snippet[0]) {
                    gm82_gml_set_self(inst);
                    gm82_gml_eval_block(rt, inst, ev->code_snippet);
                }
            }
        }
        if (fired) break;
        int parent_i = obj->parent_index;
        if (parent_i < 0 || parent_i == oi) break;
        oi = parent_i;
    }
    gm82_alarm_fire_scripts(rt, inst, alarm_index);
}

/* GM82_EV_COLLISION = 4 — P0 critical: sets other */
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
            if (ev->action_name0[0]) {
                if (other) gm82_gml_set_other(other);
                gm82_action_execute_named(rt, inst, ev->action_name0);
                gm82_gml_set_other(NULL);
            }
            if (ev->code_snippet && ev->code_snippet[0]) {
                gm82_gml_set_self(inst);
                if (other) gm82_gml_set_other(other);
                gm82_gml_eval_block(rt, inst, ev->code_snippet);
                gm82_gml_set_other(NULL);
            }
        }
        if (fired) break;
        int parent_i = obj->parent_index;
        if (parent_i < 0 || parent_i == oi) break;
        oi = parent_i;
    }
    if (rt->actions) gm82_actions_fire_collision(rt, inst, other, rt->actions);
    if (other && other->alive && rt->objects && !rt->actions) {
        int32_t oj = other->object_index;
        if (oj >= 0 && oj < rt->objects->count) {
            const gm82_decoded_object *o2 = &rt->objects->items[oj];
            const char *n = o2->name;
            int is_pick = n && (strstr(n, "moneda") || strstr(n, "coin") || strstr(n, "bonus") ||
                               strstr(n, "estrella") || strstr(n, "item"));
            for (int e = 0; e < o2->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const char *cs = o2->events[e].code_snippet;
                if (cs && strstr(cs, "instance_destroy")) { is_pick = 1; break; }
            }
            if (is_pick && !other->solid) {
                gm82_runtime_instance_destroy(rt, other);
            }
        }
    }
}
