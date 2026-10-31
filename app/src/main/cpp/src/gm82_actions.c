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

/* Full action table + hook to gm82_actions_extra.c + real table fire/scan. */

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
    if (strcmp(name, "action_effect") == 0) {
        /* effect type args: type, x, y, size, color, relative */
        gml_part_particles_create(0, self->x, self->y, 0, (argc >= 4 && args[3] > 0) ? args[3] * 4 : 8);
        return true;
    }
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
    if (strcmp(name, "action_set_sprite") == 0 || strcmp(name, "action_sprite_set") == 0) {
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
        return gml_place_empty(x, y) != 0.0;
    }
    if (strcmp(name, "action_if_collision") == 0) {
        double x = (argc >= 1) ? (double)args[0] : self->x;
        double y = (argc >= 2) ? (double)args[1] : self->y;
        int obj = (argc >= 3) ? args[2] : -1;
        return gml_place_meeting(x, y, (double)obj) != 0.0;
    }
    if (strcmp(name, "action_if_variable") == 0) {
        double val = (argc >= 1) ? (double)args[0] : 0.0;
        int op = (argc >= 2) ? args[1] : 0;
        double cmp = (argc >= 3) ? (double)args[2] : 0.0;
        switch (op) {
            case 1: return val < cmp;
            case 2: return val > cmp;
            case 3: return val <= cmp;
            case 4: return val >= cmp;
            case 5: return val != cmp;
            default: return val == cmp;
        }
    }

    if (gm82_action_execute_extra(rt, self, name, args, argc, str_args, str_argc))
        return true;

    fprintf(stderr, "UNMAPPED_ACTION %s\n", name);
    return false;
}

int gm82_actions_scan_gmk(const uint8_t *data, size_t size, gm82_action_table *out) {
    if (!out) return 0;
    return gm82_actions_parse_gmk8(data, size, out);
}

static const gm82_object_actions *gm82_actions_find_object(const gm82_action_table *table,
                                                          gm82_runtime *rt, gm82_instance *self) {
    if (!table || !table->objects || table->count <= 0 || !rt || !self || !rt->objects)
        return NULL;
    int oi = self->object_index;
    if (oi < 0 || oi >= rt->objects->count) return NULL;
    const char *name = rt->objects->items[oi].name;
    if (!name || !name[0]) return NULL;
    if (oi < table->count && table->objects[oi].object_name[0] &&
        strcmp(table->objects[oi].object_name, name) == 0)
        return &table->objects[oi];
    for (int i = 0; i < table->count; i++) {
        if (strcmp(table->objects[i].object_name, name) == 0)
            return &table->objects[i];
    }
    return NULL;
}

static void gm82_actions_fire_event(gm82_runtime *rt, gm82_instance *self,
                                    const gm82_action_table *table,
                                    int event_type, int event_numb, int match_numb) {
    const gm82_object_actions *oa = gm82_actions_find_object(table, rt, self);
    if (!oa || !oa->items) return;
    for (int i = 0; i < oa->count; i++) {
        const gm82_action_ref *ar = &oa->items[i];
        if (ar->event_type != event_type) continue;
        if (match_numb && ar->event_numb != event_numb) continue;
        if (ar->is_condition) {
            (void)gm82_action_execute_ref(rt, self, ar);
            continue;
        }
        gm82_action_execute_ref(rt, self, ar);
    }
}

void gm82_actions_fire_collision(gm82_runtime *rt, gm82_instance *self, gm82_instance *other,
                                 const gm82_action_table *table) {
    if (!rt || !self || !table) return;
    const gm82_object_actions *oa = gm82_actions_find_object(table, rt, self);
    if (!oa || !oa->items) return;
    int other_obj = (other && other->alive) ? other->object_index : -1;
    if (other) gm82_gml_set_other(other);
    for (int i = 0; i < oa->count; i++) {
        const gm82_action_ref *ar = &oa->items[i];
        if (ar->event_type != 4) continue;
        if (ar->event_numb >= 0 && other_obj >= 0 && ar->event_numb != other_obj) continue;
        if (ar->is_condition) {
            (void)gm82_action_execute_ref(rt, self, ar);
            continue;
        }
        gm82_action_execute_ref(rt, self, ar);
    }
    gm82_gml_set_other(NULL);
}

void gm82_actions_fire_create(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table) {
    gm82_actions_fire_event(rt, self, table, 0, 0, 0);
}

void gm82_actions_fire_step(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table) {
    gm82_actions_fire_event(rt, self, table, 3, 0, 1);
}

void gm82_actions_fire_alarm(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table, int alarm_index) {
    gm82_actions_fire_event(rt, self, table, 2, alarm_index, 1);
}

void gm82_actions_fire_draw(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table) {
    gm82_actions_fire_event(rt, self, table, 8, 0, 1);
}
