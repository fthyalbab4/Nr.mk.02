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

extern int gm82_action_execute_extra(gm82_runtime *rt, gm82_instance *self, const char *name,
    const int32_t *args, int argc, const char str_args[][128], int str_argc);

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
        if (self->x < 0 || self->x > (rt->room_width ? rt->room_width : 640)) self->hspeed = -self->hspeed;
        if (self->y < 0 || self->y > (rt->room_height ? rt->room_height : 480)) self->vspeed = -self->vspeed;
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
