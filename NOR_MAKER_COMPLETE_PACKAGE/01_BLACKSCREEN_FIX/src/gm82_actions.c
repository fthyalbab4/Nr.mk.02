#define _POSIX_C_SOURCE 200809L
#include "gm82_actions.h"
#include "gm82_gml_builtins.h"
#include "gm82_sound_runtime.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <zlib.h>

#define GM82_ACTION_MAX_ARGS 8

static int32_t rd_i32(const uint8_t *p) {
    return (int32_t)(p[0]|(p[1]<<8)|(p[2]<<16)|(p[3]<<24));
}

static uint8_t *inflate_at(const uint8_t *src, size_t n, size_t *ol) {
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

void gm82_action_table_free(gm82_action_table *t) {
    if (!t) return;
    for (int i = 0; i < t->count; i++) free(t->objects[i].items);
    free(t->objects);
    memset(t, 0, sizeof(*t));
}

static void add_action(gm82_object_actions *oa, int etype, int enumb, const char *name,
                       int aid, int kind, const int32_t *args, int argc,
                       const char str_args[][64], int str_argc) {
    if (oa->count >= oa->capacity) {
        int nc = oa->capacity ? oa->capacity * 2 : 8;
        gm82_action_ref *n = (gm82_action_ref *)realloc(oa->items, (size_t)nc * sizeof(*n));
        if (!n) return;
        oa->items = n; oa->capacity = nc;
    }
    gm82_action_ref *a = &oa->items[oa->count++];
    memset(a, 0, sizeof(*a));
    a->event_type = etype;
    a->event_numb = enumb;
    if (argc > 0) a->action_id = args[0];
    else a->action_id = aid;
    if (argc > 1) a->kind = args[1];
    else a->kind = kind;
    a->argc = 0;
    a->str_argc = 0;
    if (args && argc > 0) {
        int n = argc > GM82_ACTION_MAX_ARGS ? GM82_ACTION_MAX_ARGS : argc;
        for (int i = 0; i < n; i++) a->args[i] = args[i];
        a->argc = n;
    }
    if (str_args && str_argc > 0) {
        int n = str_argc > 4 ? 4 : str_argc;
        for (int i = 0; i < n; i++)
            strncpy(a->str_args[i], str_args[i], sizeof(a->str_args[i]) - 1);
        a->str_argc = n;
    }
    if (name) strncpy(a->name, name, sizeof(a->name) - 1);
}

int gm82_actions_scan_gmk(const uint8_t *data, size_t size, gm82_action_table *out) {
    if (!data || !out || size < 16) return 0;
    memset(out, 0, sizeof(*out));
    gm82_object_actions tmp[128];
    memset(tmp, 0, sizeof(tmp));
    int nobj = 0;
    gm82_object_actions global_bucket;
    memset(&global_bucket, 0, sizeof(global_bucket));
    strncpy(global_bucket.object_name, "_global_actions", sizeof(global_bucket.object_name) - 1);
    for (size_t i = 12; i + 2 < size; i++) {
        if (!(data[i] == 0x78 && (data[i + 1] == 0x9c || data[i + 1] == 0xda ||
                                  data[i + 1] == 0x01 || data[i + 1] == 0x5e)))
            continue;
        size_t ol = 0;
        uint8_t *d = inflate_at(data + i, size - i, &ol);
        i += 16;
        if (!d || ol < 16) { free(d); continue; }
        for (size_t o = 0; o + 8 < ol; o++) {
            int32_t n = rd_i32(d + o);
            if (n < 8 || n > 48 || o + 4 + (size_t)n > ol) continue;
            const uint8_t *s = d + o + 4;
            if (memcmp(s, "action_", 7) != 0) continue;
            int good = 1;
            for (int k = 0; k < n; k++)
                if (s[k] < 32 || s[k] > 126) { good = 0; break; }
            if (!good) continue;
            char aname[64];
            memcpy(aname, s, (size_t)n);
            aname[n] = 0;
            int dup = 0;
            for (int ai = 0; ai < global_bucket.count; ai++)
                if (strcmp(global_bucket.items[ai].name, aname) == 0) { dup = 1; break; }
            if (dup) { o += 4 + (size_t)n; continue; }
            int32_t args[GM82_ACTION_MAX_ARGS];
            int argc = 0;
            char str_args[4][64];
            int str_argc = 0;
            memset(str_args, 0, sizeof(str_args));
            size_t ao = o + 4 + (size_t)n;
            while (argc < GM82_ACTION_MAX_ARGS && ao + 4 <= ol) {
                int32_t v = rd_i32(d + ao);
                if (v >= 8 && v <= 48 && ao + 4 + (size_t)v <= ol) {
                    const uint8_t *p = d + ao + 4;
                    if (memcmp(p, "action_", 7) == 0) break;
                    if (str_argc < 4 && v >= 1 && v <= 63) {
                        int ok = 1;
                        for (int k = 0; k < v; k++) {
                            unsigned char c = p[k];
                            if (c < 32 || c > 126) { ok = 0; break; }
                        }
                        if (ok) {
                            memcpy(str_args[str_argc], p, (size_t)v);
                            str_args[str_argc][v] = 0;
                            str_argc++;
                            ao += 4 + (size_t)v;
                            continue;
                        }
                    }
                }
                if (v == 400) break;
                args[argc++] = v;
                ao += 4;
            }
            add_action(&global_bucket, -1, 0, aname, 0, 0, args, argc, str_args, str_argc);
            o += 4 + (size_t)n;
        }
        free(d);
    }
    if (global_bucket.count > 0 && nobj < 128)
        tmp[nobj++] = global_bucket;
    else
        free(global_bucket.items);
    out->count = nobj;
    if (nobj > 0) {
        out->objects = (gm82_object_actions *)malloc((size_t)nobj * sizeof(*out->objects));
        if (out->objects)
            memcpy(out->objects, tmp, (size_t)nobj * sizeof(*tmp));
        else
            out->count = 0;
    }
    return out->count;
}

static bool execute_named_args(gm82_runtime *rt, gm82_instance *self, const char *name,
                               const int32_t *args, int argc,
                               const char str_args[][64], int str_argc) {
    if (!rt || !self || !name) return false;
    gm82_gml_set_runtime(rt);
    gm82_gml_set_self(self);

    if (strcmp(name, "action_kill_object") == 0 || strcmp(name, "action_destroy") == 0) {
        gm82_runtime_instance_destroy(rt, self);
        return true;
    }
    if (strcmp(name, "action_create_object") == 0) {
        int obj = (argc >= 1) ? args[0] : self->object_index;
        double x = (argc >= 2) ? (double)args[1] : self->x;
        double y = (argc >= 3) ? (double)args[2] : self->y;
        gm82_runtime_instance_create(rt, obj, x, y);
        return true;
    }
    if (strcmp(name, "action_change_object") == 0) {
        int target_oi = (argc >= 1) ? args[0] : self->object_index;
        if (rt && rt->objects && target_oi >= 0 && target_oi < rt->objects->count) {
            self->object_index = target_oi;
            self->sprite_index = rt->objects->items[target_oi].sprite_index;
            self->solid = rt->objects->items[target_oi].solid;
            self->visible = rt->objects->items[target_oi].visible;
            self->depth = rt->objects->items[target_oi].depth;
        }
        return true;
    }
    if (strcmp(name, "action_move") == 0 || strcmp(name, "action_move_point") == 0) {
        if (argc >= 2) {
            self->hspeed = (double)args[0];
            self->vspeed = (double)args[1];
        }
        self->x += self->hspeed;
        self->y += self->vspeed;
        return true;
    }
    if (strcmp(name, "action_move_start") == 0) {
        self->x = self->xstart;
        self->y = self->ystart;
        return true;
    }
    if (strcmp(name, "action_move_to") == 0) {
        if (argc >= 2) {
            self->x = (double)args[0];
            self->y = (double)args[1];
        } else {
            self->x = self->xstart;
            self->y = self->ystart;
        }
        return true;
    }
    if (strcmp(name, "action_potential_step") == 0) {
        self->x += self->hspeed;
        self->y += self->vspeed;
        return true;
    }
    if (strcmp(name, "action_set_hspeed") == 0 || strcmp(name, "action_speed_horizontal") == 0) {
        self->hspeed = (argc >= 1) ? (double)args[0] : 2.0;
        return true;
    }
    if (strcmp(name, "action_set_vspeed") == 0 || strcmp(name, "action_speed_vertical") == 0) {
        self->vspeed = (argc >= 1) ? (double)args[0] : 2.0;
        return true;
    }
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
    if (strcmp(name, "action_set_friction") == 0) {
        self->friction = (argc >= 1) ? (double)args[0] : 0.1;
        return true;
    }
    if (strcmp(name, "action_snap") == 0) {
        int sx = (argc >= 1 && args[0] > 0) ? args[0] : 16;
        int sy = (argc >= 2 && args[1] > 0) ? args[1] : 16;
        self->x = (double)(((int)self->x / sx) * sx);
        self->y = (double)(((int)self->y / sy) * sy);
        return true;
    }
    if (strcmp(name, "action_reverse_x") == 0 || strcmp(name, "action_reverse_xdir") == 0) { self->hspeed = -self->hspeed; return true; }
    if (strcmp(name, "action_reverse_y") == 0 || strcmp(name, "action_reverse_ydir") == 0) { self->vspeed = -self->vspeed; return true; }
    if (strcmp(name, "action_bounce") == 0) {
        if (self->x < 0 || self->x > (rt->room_width ? rt->room_width : 640))
            self->hspeed = -self->hspeed;
        if (self->y < 0 || self->y > (rt->room_height ? rt->room_height : 480))
            self->vspeed = -self->vspeed;
        if (self->hspeed == 0.0 && self->vspeed == 0.0) return true;
        if (self->x >= 0 && self->x <= (rt->room_width ? rt->room_width : 640) &&
            self->y >= 0 && self->y <= (rt->room_height ? rt->room_height : 480)) {
            if (fabs(self->vspeed) >= fabs(self->hspeed)) self->vspeed = -self->vspeed;
            else self->hspeed = -self->hspeed;
        }
        return true;
    }
    if (strcmp(name, "action_wrap") == 0) {
        int rw = (rt && rt->room_width > 0) ? rt->room_width : 640;
        int rh = (rt && rt->room_height > 0) ? rt->room_height : 480;
        if (self->x < 0) self->x += rw;
        else if (self->x > rw) self->x -= rw;
        if (self->y < 0) self->y += rh;
        else if (self->y > rh) self->y -= rh;
        return true;
    }
    if (strcmp(name, "action_next_room") == 0) {
        if (rt->rooms && rt->current_room + 1 < rt->rooms->count)
            gm82_runtime_goto_room(rt, rt->current_room + 1);
        return true;
    }
    if (strcmp(name, "action_previous_room") == 0) {
        if (rt->rooms && rt->current_room > 0)
            gm82_runtime_goto_room(rt, rt->current_room - 1);
        return true;
    }
    if (strcmp(name, "action_restart_room") == 0 || strcmp(name, "action_current_room") == 0) {
        gm82_runtime_goto_room(rt, rt->current_room);
        return true;
    }
    if (strcmp(name, "action_end_game") == 0 || strcmp(name, "action_restart_game") == 0) {
        rt->running = 0;
        return true;
    }
    if (strcmp(name, "action_sound") == 0 || strcmp(name, "action_play_sound") == 0) {
        gml_sound_play((argc >= 1) ? args[0] : 0);
        return true;
    }
    if (strcmp(name, "action_end_sound") == 0) { gml_sound_stop_all(); return true; }
    if (strcmp(name, "action_set_score") == 0) {
        gml_set_score((argc >= 1) ? (double)args[0] : 0.0);
        return true;
    }
    if (strcmp(name, "action_set_lives") == 0) {
        gml_set_lives((argc >= 1) ? (double)args[0] : 3.0);
        return true;
    }
    if (strcmp(name, "action_set_health") == 0) {
        gml_set_health((argc >= 1) ? (double)args[0] : 100.0);
        return true;
    }
    if (strcmp(name, "action_set_alarm") == 0) {
        int idx = (argc >= 1) ? args[0] : 0;
        int val = (argc >= 2) ? args[1] : 30;
        if (idx < 0) idx = 0;
        if (idx > 11) idx = 11;
        self->alarms[idx] = val;
        return true;
    }
    if (strcmp(name, "action_sprite_set") == 0) {
        if (argc >= 1) self->sprite_index = args[0];
        if (argc >= 2) self->image_index = args[1];
        if (argc >= 3) self->image_speed = (double)args[2];
        return true;
    }
    if (strcmp(name, "action_draw_sprite") == 0) {
        int sp = (argc >= 1) ? args[0] : self->sprite_index;
        double x = (argc >= 2) ? (double)args[1] : self->x;
        double y = (argc >= 3) ? (double)args[2] : self->y;
        if (sp >= 0) gml_draw_sprite((double)sp, x, y);
        return true;
    }
    if (strcmp(name, "action_draw_variable") == 0) {
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", self->x);
        gml_draw_text(self->x, self->y, buf);
        return true;
    }
    if (strcmp(name, "action_effect") == 0) {
        gml_part_particles_create(0, self->x, self->y, 0, 8);
        return true;
    }
    if (strcmp(name, "action_save_game") == 0) {
        const char *path = (str_argc >= 1 && str_args[0][0]) ? str_args[0] : "nor_save.dat";
        return gml_game_save(path) > 0;
    }
    if (strcmp(name, "action_load_game") == 0) {
        const char *path = (str_argc >= 1 && str_args[0][0]) ? str_args[0] : "nor_save.dat";
        return gml_game_load(path) > 0;
    }
    return false;
}

bool gm82_action_execute_named(gm82_runtime *rt, gm82_instance *self, const char *name) {
    static const char empty_str[4][64] = {{0}};
    return execute_named_args(rt, self, name, NULL, 0, empty_str, 0);
}

bool gm82_action_execute_ref(gm82_runtime *rt, gm82_instance *self, const gm82_action_ref *ar) {
    if (!rt || !self || !ar) return false;
    if (ar->name[0])
        return execute_named_args(rt, self, ar->name, ar->args, ar->argc, ar->str_args, ar->str_argc);
    if (ar->argc >= 2) {
        self->hspeed = (double)ar->args[0];
        self->vspeed = (double)ar->args[1];
        return true;
    }
    if (ar->argc >= 1 && ar->kind == 1) {
        self->sprite_index = ar->args[0];
        return true;
    }
    return true;
}

void gm82_actions_fire_create(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table) {
    if (!rt || !self || !self->alive || !table || !rt->objects) return;
    if (self->object_index < 0 || self->object_index >= rt->objects->count) return;
    const char *oname = rt->objects->items[self->object_index].name;
    for (int i = 0; i < table->count; i++) {
        if (strcmp(table->objects[i].object_name, oname) != 0) continue;
        for (int a = 0; a < table->objects[i].count; a++) {
            if (!self->alive) break;
            gm82_action_ref *ar = &table->objects[i].items[a];
            if (ar->event_type != 0) continue;
            if (strcmp(ar->name, "action_next_room") == 0 ||
                strcmp(ar->name, "action_if_next_room") == 0 ||
                strcmp(ar->name, "action_previous_room") == 0 ||
                strcmp(ar->name, "action_restart_room") == 0 ||
                strcmp(ar->name, "action_another_room") == 0)
                continue;
            gm82_action_execute_ref(rt, self, ar);
            if (!self->alive) break;
        }
        break;
    }
}

void gm82_actions_fire_step(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table) {
    if (!rt || !self || !self->alive || !table || !rt->objects) return;
    if (self->object_index < 0 || self->object_index >= rt->objects->count) return;
    const char *oname = rt->objects->items[self->object_index].name;
    for (int i = 0; i < table->count; i++) {
        if (strcmp(table->objects[i].object_name, oname) != 0 &&
            strcmp(table->objects[i].object_name, "_global_actions") != 0)
            continue;
        for (int a = 0; a < table->objects[i].count; a++) {
            if (!self->alive) break;
            gm82_action_ref *ar = &table->objects[i].items[a];
            if (ar->event_type == 3 || ar->event_type == -1) {
                if (strcmp(ar->name, "action_set_hspeed") == 0 ||
                    strcmp(ar->name, "action_speed_horizontal") == 0 ||
                    strcmp(ar->name, "action_reverse_xdir") == 0 ||
                    strcmp(ar->name, "action_reverse_x") == 0 ||
                    strcmp(ar->name, "action_move") == 0) {
                    gm82_action_execute_ref(rt, self, ar);
                    if (!self->alive) break;
                }
            }
        }
    }
}
