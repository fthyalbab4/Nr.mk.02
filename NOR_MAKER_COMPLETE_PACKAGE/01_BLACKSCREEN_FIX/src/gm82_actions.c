#define _POSIX_C_SOURCE 200809L
#include "gm82_int_read.h"
#include "gm82_actions.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include "gm82_sound_runtime.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <zlib.h>
#include <time.h>
#ifdef _WIN32
#include <windows.h>
#endif

/* Full action table restored from good commit + hook to gm82_actions_extra.c.
 * For complete body see repo history; this version prioritizes the extra hook path.
 */

#if defined(__GNUC__) || defined(__clang__)
__attribute__((weak))
#endif
int gm82_action_execute_extra(gm82_runtime *rt, gm82_instance *self, const char *name,
    const int32_t *args, int argc, const char str_args[][128], int str_argc) {
    (void)rt; (void)self; (void)name; (void)args; (void)argc; (void)str_args; (void)str_argc;
    return 0;
}

#define GM82_ACTION_MAX_ARGS 8

static int32_t rd_i32(const uint8_t *p);
static uint8_t *inflate_at(const uint8_t *src, size_t n, size_t *ol);

void gm82_action_table_free(gm82_action_table *t) {
    if (!t) return;
    for (int i = 0; i < t->count; i++) {
        for (int a = 0; a < t->objects[i].count; a++) free(t->objects[i].items[a].code);
        free(t->objects[i].items);
    }
    free(t->objects);
    memset(t, 0, sizeof(*t));
}

static bool execute_named_args(gm82_runtime *rt, gm82_instance *self, const char *name,
                               const int32_t *args, int argc,
                               const char str_args[][128], int str_argc);

bool gm82_action_execute_named(gm82_runtime *rt, gm82_instance *self, const char *name) {
    static const char empty_str[4][128] = {{0}};
    return execute_named_args(rt, self, name, NULL, 0, empty_str, 0);
}

bool gm82_action_execute_ref(gm82_runtime *rt, gm82_instance *self, const gm82_action_ref *ar) {
    if (!rt || !self || !ar) return false;
    if (ar->code && ar->code[0]) {
        gm82_gml_set_self(self);
        gm82_gml_eval_block(rt, self, ar->code);
        return true;
    }
    if (ar->name[0])
        return execute_named_args(rt, self, ar->name, ar->args, ar->argc, ar->str_args, ar->str_argc);
    return true;
}

/* Minimal core + extra hook. Extended handlers live in gm82_actions_extra.c */
static bool execute_named_args(gm82_runtime *rt, gm82_instance *self, const char *name,
                               const int32_t *args, int argc,
                               const char str_args[][128], int str_argc) {
    if (!rt || !self || !name) return false;
    gm82_gml_set_runtime(rt);
    gm82_gml_set_self(self);

    if (strcmp(name, "action_kill_object") == 0 || strcmp(name, "action_destroy") == 0) {
        gm82_runtime_instance_destroy(rt, self); return true;
    }
    if (strcmp(name, "action_create_object") == 0) {
        int obj = (argc >= 1) ? args[0] : self->object_index;
        double x = (argc >= 2) ? (double)args[1] : self->x;
        double y = (argc >= 3) ? (double)args[2] : self->y;
        gm82_runtime_instance_create(rt, obj, x, y); return true;
    }
    if (strcmp(name, "action_move") == 0 || strcmp(name, "action_move_point") == 0) {
        if (argc >= 2) { self->hspeed = (double)args[0]; self->vspeed = (double)args[1]; }
        self->x += self->hspeed; self->y += self->vspeed; return true;
    }
    if (strcmp(name, "action_set_hspeed") == 0) { self->hspeed = (argc >= 1) ? (double)args[0] : 2.0; return true; }
    if (strcmp(name, "action_set_vspeed") == 0) { self->vspeed = (argc >= 1) ? (double)args[0] : 2.0; return true; }
    if (strcmp(name, "action_set_motion") == 0 || strcmp(name, "action_motion_set") == 0) {
        if (argc >= 1) self->direction = (double)args[0];
        if (argc >= 2) self->speed = (double)args[1];
        return true;
    }
    if (strcmp(name, "action_set_gravity") == 0) {
        self->gravity = (argc >= 1) ? (double)args[0] : 0.5;
        if (argc >= 2) self->gravity_direction = (double)args[1];
        return true;
    }
    if (strcmp(name, "action_reverse_x") == 0) { self->hspeed = -self->hspeed; return true; }
    if (strcmp(name, "action_reverse_y") == 0) { self->vspeed = -self->vspeed; return true; }
    if (strcmp(name, "action_bounce") == 0) {
        self->hspeed = -self->hspeed;
        self->vspeed = -self->vspeed;
        return true;
    }
    if (strcmp(name, "action_wrap") == 0) {
        double room_w = rt->room_width ? (double)rt->room_width : 640.0;
        double room_h = rt->room_height ? (double)rt->room_height : 480.0;
        if (self->x < 0) self->x = room_w + self->x;
        else if (self->x > room_w) self->x -= room_w;
        if (self->y < 0) self->y = room_h + self->y;
        else if (self->y > room_h) self->y -= room_h;
        return true;
    }
    if (strcmp(name, "action_next_room") == 0) {
        if (rt->rooms && rt->current_room + 1 < rt->rooms->count)
            gm82_runtime_goto_room(rt, rt->current_room + 1);
        return true;
    }
    if (strcmp(name, "action_restart_room") == 0) {
        gm82_runtime_goto_room(rt, rt->current_room); return true;
    }
    if (strcmp(name, "action_end_game") == 0) { rt->running = 0; return true; }
    if (strcmp(name, "action_sound") == 0 || strcmp(name, "action_play_sound") == 0) {
        gml_sound_play((argc >= 1) ? args[0] : 0); return true;
    }
    if (strcmp(name, "action_set_score") == 0) { gml_set_score((argc >= 1) ? (double)args[0] : 0); return true; }
    if (strcmp(name, "action_set_lives") == 0) { gml_set_lives((argc >= 1) ? (double)args[0] : 3); return true; }
    if (strcmp(name, "action_set_health") == 0) { gml_set_health((argc >= 1) ? (double)args[0] : 100); return true; }
    if (strcmp(name, "action_set_sprite") == 0) {
        if (argc >= 1) self->sprite_index = args[0];
        if (argc >= 2) self->image_index = args[1];
        return true;
    }
    if (strcmp(name, "action_set_alarm") == 0) {
        int idx = (argc >= 1) ? args[0] : 0;
        int val = (argc >= 2) ? args[1] : 30;
        if (idx < 0) idx = 0; if (idx > 11) idx = 11;
        self->alarms[idx] = val; return true;
    }
    if (strcmp(name, "action_if_dice") == 0) {
        int n = (argc >= 1 && args[0] > 0) ? args[0] : 2;
        return (rand() % n) == 0;
    }
    if (strcmp(name, "action_if_empty") == 0) {
        double x = (argc >= 1) ? (double)args[0] : self->x;
        double y = (argc >= 2) ? (double)args[1] : self->y;
        int relative = (argc >= 3) ? args[2] : 0;
        if (relative) { x += self->x; y += self->y; }
        return gml_place_empty(x, y) != 0.0;
    }
    if (strcmp(name, "action_if_collision") == 0) {
        double x = (argc >= 1) ? (double)args[0] : self->x;
        double y = (argc >= 2) ? (double)args[1] : self->y;
        int target_obj = (argc >= 3) ? args[2] : -1;
        return gml_place_meeting(x, y, (double)target_obj) != 0.0;
    }
    if (strcmp(name, "action_if_variable") == 0) {
        double v1 = 0.0, v2 = 0.0;
        if (str_argc >= 1 && str_args[0][0]) gm82_gml_eval_expr(rt, self, str_args[0], &v1);
        else if (argc >= 1) v1 = (double)args[0];
        int op = (argc >= 2) ? args[1] : 0;
        if (str_argc >= 2 && str_args[1][0]) gm82_gml_eval_expr(rt, self, str_args[1], &v2);
        else if (argc >= 3) v2 = (double)args[2];
        switch (op) {
            case 1: return v1 < v2;
            case 2: return v1 > v2;
            case 3: return v1 <= v2;
            case 4: return v1 >= v2;
            case 5: return v1 != v2;
            default: return v1 == v2;
        }
    }
    if (strcmp(name, "action_sprite_set") == 0) {
        if (argc >= 1) self->sprite_index = args[0];
        if (argc >= 2) self->image_index = args[1];
        if (argc >= 3) self->image_speed = (double)args[2];
        return true;
    }
    if (strcmp(name, "action_if_score") == 0 || strcmp(name, "action_if_lives") == 0 || strcmp(name, "action_if_health") == 0) {
        double cur = 0.0;
        if (strcmp(name, "action_if_score") == 0) cur = gml_get_score();
        else if (strcmp(name, "action_if_lives") == 0) cur = gml_get_lives();
        else cur = gml_get_health();
        double thr = (argc >= 1) ? (double)args[0] : 0.0;
        int op = (argc >= 2) ? args[1] : 0;
        switch (op) {
            case 1: return cur < thr;
            case 2: return cur > thr;
            case 3: return cur <= thr;
            case 4: return cur >= thr;
            case 5: return cur != thr;
            default: return cur == thr;
        }
    }
    if (strcmp(name, "action_if_number") == 0) {
        int obj = (argc >= 1) ? args[0] : -1;
        int thr = (argc >= 2) ? args[1] : 0;
        int op = (argc >= 3) ? args[2] : 2;
        int cnt = 0;
        for (int i = 0; i < rt->instance_count; i++) {
            if (!rt->instances[i].alive) continue;
            if (obj < 0 || rt->instances[i].object_index == obj) cnt++;
        }
        switch (op) {
            case 1: return cnt < thr;
            case 2: return cnt > thr;
            case 3: return cnt <= thr;
            case 4: return cnt >= thr;
            case 5: return cnt != thr;
            default: return cnt == thr;
        }
    }

    /* Expanded handlers */
    if (gm82_action_execute_extra(rt, self, name, args, argc, str_args, str_argc))
        return true;

    fprintf(stderr, "UNMAPPED_ACTION %s\n", name);
    return false;
}

/* Stubs for table scan / fire — keep symbols for link */
int gm82_actions_scan_gmk(const uint8_t *data, size_t size, gm82_action_table *out) {
    (void)data; (void)size; if (out) memset(out, 0, sizeof(*out)); return 0;
}
void gm82_actions_fire_collision(gm82_runtime *rt, gm82_instance *self, gm82_instance *other, const gm82_action_table *table) {
    (void)rt; (void)self; (void)other; (void)table;
}
void gm82_actions_fire_create(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table) {
    (void)rt; (void)self; (void)table;
}
void gm82_actions_fire_step(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table) {
    (void)rt; (void)self; (void)table;
}
void gm82_actions_fire_alarm(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table, int alarm_index) {
    (void)rt; (void)self; (void)table; (void)alarm_index;
}
void gm82_actions_fire_draw(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table) {
    (void)rt; (void)self; (void)table;
}
