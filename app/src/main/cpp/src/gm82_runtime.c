#define _POSIX_C_SOURCE 200809L
#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_events.h"
#include "gm82_actions.h"
#include "gm82_gml_eval.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "gm82_arena.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void gm82_runtime_init(gm82_runtime *rt) {
    memset(rt, 0, sizeof(*rt));
    gm82_gml_reset_globals(rt);
    rt->next_id = 100001;
    rt->room_speed = 30;
    rt->room_width = 640;
    rt->room_height = 480;
    rt->view_follow_object = -1;
    rt->view_border_h = 32;
    rt->view_border_v = 32;
    rt->view_hspeed = -1;
    rt->view_vspeed = -1;
    rt->render_alpha = 1.0;
    gm82_arena_init(&rt->room_arena, 4u * 1024u * 1024u);
    rt->destroy_queue_count = 0;
    rt->frame_phase = 0;
}

void gm82_runtime_cleanup(gm82_runtime *rt) {
    if (!rt) return;
    gm82_arena_free(&rt->room_arena);
    rt->instance_count = 0;
    rt->destroy_queue_count = 0;
}

void gm82_runtime_step_dt(gm82_runtime *rt, double dt) {
    if (!rt || !rt->running) return;
    if (isnan(dt) || isinf(dt) || dt <= 0.0) return;
    if (rt->step_room_speed != rt->room_speed) {
        rt->step_accumulator = 0.0;
        rt->step_room_speed = rt->room_speed;
    }
    double fixed_dt = (rt->room_speed > 0) ? (1.0 / (double)rt->room_speed) : (1.0 / 30.0);
    rt->step_accumulator += dt;
    int steps = 0;
    while (rt->step_accumulator >= fixed_dt && steps < 4) {
        gm82_runtime_step(rt);
        rt->step_accumulator -= fixed_dt;
        steps++;
    }
    if (steps >= 4) rt->step_accumulator = 0.0;
    double alpha = (fixed_dt > 0.0) ? (rt->step_accumulator / fixed_dt) : 1.0;
    if (alpha < 0.0) alpha = 0.0;
    if (alpha > 1.0) alpha = 1.0;
    rt->render_alpha = alpha;
}

int gm82_runtime_get_active_snapshot(gm82_runtime *rt, gm82_instance **out_ptrs) {
    if (!rt || !out_ptrs) return 0;
    int n = 0;
    for (int i = 0; i < rt->instance_count && n < GM82_MAX_INSTANCES; i++) {
        if (rt->instances[i].alive) out_ptrs[n++] = &rt->instances[i];
    }
    return n;
}

void gm82_runtime_bind_assets(gm82_runtime *rt,
    const gm82_decoded_object_list *objects,
    const gm82_decoded_sprite_list *sprites,
    const gm82_decoded_background_list *backgrounds,
    const gm82_decoded_room_list *rooms,
    const gm82_action_table *actions) {
    rt->objects = objects;
    rt->sprites = sprites;
    rt->backgrounds = backgrounds;
    rt->rooms = rooms;
    rt->actions = actions;
    rt->sprite_groups = NULL;
}

void gm82_runtime_bind_sprite_groups(gm82_runtime *rt, const gm82_sprite_group_list *groups) {
    rt->sprite_groups = groups;
}

void gm82_runtime_bind_scripts(gm82_runtime *rt, const gm82_script_list *scripts) {
    if (!rt) return;
    rt->scripts = scripts;
    if (scripts) gm82_scripts_bind((gm82_script_list *)scripts);
}

static void apply_object_defaults(gm82_runtime *rt, gm82_instance *inst, int32_t object_index) {
    inst->object_index = object_index;
    inst->sprite_index = -1;
    inst->solid = 0;
    inst->visible = 1;
    inst->depth = 0;
    inst->persistent = 0;
    inst->image_index = 0;
    inst->image_frac = 0.0;
    inst->image_xscale = 1.0;
    inst->image_yscale = 1.0;
    inst->image_angle = 0.0;
    inst->image_alpha = 1.0;
    inst->image_blend = 0xffffff;
    inst->image_speed = 1.0;
    if (rt->objects && object_index >= 0 && object_index < rt->objects->count) {
        const gm82_decoded_object *o = &rt->objects->items[object_index];
        inst->sprite_index = o->sprite_index;
        inst->solid = o->solid;
        inst->visible = o->visible ? 1 : 0;
        inst->depth = o->depth;
        inst->persistent = o->persistent ? 1 : 0;
    }
}

void gm82_runtime_compact_instances(gm82_runtime *rt) {
    if (!rt) return;
    int write_idx = 0;
    for (int read_idx = 0; read_idx < rt->instance_count; read_idx++) {
        if (rt->instances[read_idx].alive) {
            if (write_idx != read_idx) rt->instances[write_idx] = rt->instances[read_idx];
            write_idx++;
        }
    }
    rt->instance_count = write_idx;
}

gm82_instance *gm82_runtime_instance_create(gm82_runtime *rt, int32_t object_index, double x, double y) {
    if (!rt) return NULL;
    if (rt->instance_count >= GM82_MAX_INSTANCES) {
        gm82_runtime_compact_instances(rt);
        if (rt->instance_count >= GM82_MAX_INSTANCES) return NULL;
    }
    gm82_instance *inst = &rt->instances[rt->instance_count++];
    memset(inst, 0, sizeof(*inst));
    inst->id = rt->next_id++;
    inst->x = x; inst->y = y;
    inst->xstart = x; inst->ystart = y;
    inst->xprevious = x; inst->yprevious = y;
    inst->image_xscale = 1.0; inst->image_yscale = 1.0;
    inst->image_angle = 0.0; inst->image_alpha = 1.0;
    inst->image_blend = 0xffffff;
    inst->path_index = -1;
    inst->timeline_index = -1;
    inst->alive = 1;
    for (int i = 0; i < 12; i++) inst->alarms[i] = -1;
    apply_object_defaults(rt, inst, object_index);
    if (!rt->room_loading) {
        gm82_events_fire_create_single(rt, inst);
    }
    return inst;
}

void gm82_runtime_flush_destroy_queue(gm82_runtime *rt) {
    if (!rt || rt->destroy_queue_count <= 0) return;
    int n = rt->destroy_queue_count;
    rt->destroy_queue_count = 0;
    for (int q = 0; q < n; q++) {
        int32_t id = rt->destroy_queue[q];
        for (int i = 0; i < rt->instance_count; i++) {
            gm82_instance *inst = &rt->instances[i];
            if (!inst->alive || inst->id != id) continue;
            gm82_events_fire_destroy(rt, inst);
            inst->alive = 0;
            break;
        }
    }
}

void gm82_runtime_instance_destroy(gm82_runtime *rt, gm82_instance *inst) {
    if (!inst || !inst->alive) return;
    if (rt && rt->frame_phase >= 1 && rt->frame_phase <= 7) {
        if (rt->destroy_queue_count < GM82_MAX_INSTANCES) {
            int dup = 0;
            for (int i = 0; i < rt->destroy_queue_count; i++)
                if (rt->destroy_queue[i] == inst->id) { dup = 1; break; }
            if (!dup) rt->destroy_queue[rt->destroy_queue_count++] = inst->id;
        }
        return;
    }
    if (rt) gm82_events_fire_destroy(rt, inst);
    inst->alive = 0;
}

bool gm82_runtime_goto_room(gm82_runtime *rt, int room_index) {
    if (!rt || !rt->rooms || room_index < 0 || room_index >= rt->rooms->count) return false;
    static int s_room_transition_depth = 0;
    if (s_room_transition_depth > 3) return false;
    s_room_transition_depth++;

    if (rt->running) {
        gm82_events_fire_other_all(rt, GM82_OTHER_ROOM_END);
    }
    gm82_runtime_flush_destroy_queue(rt);
    if (rt->room_arena.base) gm82_arena_reset(&rt->room_arena);
    else gm82_arena_init(&rt->room_arena, 4u * 1024u * 1024u);
    rt->destroy_queue_count = 0;

    const gm82_decoded_room *room = &rt->rooms->items[room_index];
    rt->current_room = room_index;
    rt->room_width = room->width > 0 ? room->width : 640;
    rt->room_height = room->height > 0 ? room->height : 480;
    rt->room_speed = room->speed > 0 ? room->speed : 30;
    rt->room_persistent = room->persistent ? 1 : 0;

    if (room->views_enabled && room->views[0].visible &&
        room->views[0].view_w > 0 && room->views[0].view_h > 0) {
        const gm82_decoded_room_view *v = &room->views[0];
        rt->view_enabled = 1;
        rt->view_x = (double)v->view_x;
        rt->view_y = (double)v->view_y;
        rt->view_w = (double)v->view_w;
        rt->view_h = (double)v->view_h;
        rt->view_follow_object = v->object_following;
        rt->view_border_h = v->border_h;
        rt->view_border_v = v->border_v;
        rt->view_hspeed = v->hspeed;
        rt->view_vspeed = v->vspeed;
    } else {
        rt->view_enabled = 0;
        rt->view_x = 0.0;
        rt->view_y = 0.0;
        rt->view_w = (double)rt->room_width;
        rt->view_h = (double)rt->room_height;
        rt->view_follow_object = -1;
        rt->view_border_h = 32;
        rt->view_border_v = 32;
        rt->view_hspeed = -1;
        rt->view_vspeed = -1;
    }
    rt->prev_view_x = rt->view_x;
    rt->prev_view_y = rt->view_y;
    for (int bi = 0; bi < 8; bi++) {
        rt->bg_offset_x[bi] = 0.0;
        rt->bg_offset_y[bi] = 0.0;
    }

    int w = 0;
    for (int i = 0; i < rt->instance_count; i++) {
        if (rt->instances[i].alive && rt->instances[i].persistent) {
            if (w != i) rt->instances[w] = rt->instances[i];
            w++;
        }
    }
    rt->instance_count = w;

    /* Populate all room instances first so cross-instance IDs exist during Create */
    rt->room_loading = 1;
    int first_spawned = rt->instance_count;
    for (int i = 0; i < room->instance_count; i++) {
        const gm82_decoded_instance *src = &room->instances[i];
        if (rt->objects && src->object_index >= 0 && src->object_index < rt->objects->count) {
            const char *on = rt->objects->items[src->object_index].name;
            if (!on || !on[0]) continue;
        }
        gm82_instance *inst = gm82_runtime_instance_create(rt, src->object_index, (double)src->x, (double)src->y);
        if (inst) {
            if (src->id > 0) inst->id = src->id;
            if (src->xscale != 0.0) inst->image_xscale = src->xscale;
            if (src->yscale != 0.0) inst->image_yscale = src->yscale;
            inst->image_angle = src->angle;
            if (src->blend != 0) inst->image_blend = src->blend;
        }
    }
    rt->room_loading = 0;

    /* Run per-instance creation code + Create event (matched to spawned array indices) */
    for (int i = 0; i < room->instance_count; i++) {
        int idx = first_spawned + i;
        if (idx >= rt->instance_count) break;
        const gm82_decoded_instance *src = &room->instances[i];
        gm82_instance *inst = &rt->instances[idx];
        if (!inst->alive) continue;
        if (!inst->create_fired) {
            gm82_events_fire_create_single(rt, inst);
        }
        if (inst->alive && src->creation_code && src->creation_code[0]) {
            gm82_gml_set_runtime(rt);
            gm82_gml_set_self(inst);
            gm82_gml_eval_block(rt, inst, src->creation_code);
        }
    }

    if (room->creation_code && room->creation_code[0]) {
        gm82_gml_set_runtime(rt);
        gm82_gml_set_self(rt->instance_count > 0 ? &rt->instances[0] : NULL);
        gm82_gml_eval_block(rt, rt->instance_count > 0 ? &rt->instances[0] : NULL, room->creation_code);
    }

    rt->running = 1;
    rt->frame = 0;
    rt->step_accumulator = 0.0;
    rt->render_alpha = 1.0;
    rt->step_room_speed = rt->room_speed;

    if (!rt->game_started) {
        rt->game_started = 1;
        gm82_events_fire_other_all(rt, GM82_OTHER_GAME_START);
    }
    gm82_events_fire_other_all(rt, GM82_OTHER_ROOM_START);

    s_room_transition_depth--;
    return true;
}

static void update_speed_from_dir(gm82_instance *inst) {
    double rad = inst->direction * M_PI / 180.0;
    inst->hspeed = cos(rad) * inst->speed;
    inst->vspeed = -sin(rad) * inst->speed;
}

static void resolve_frame_bounds(const gm82_runtime *rt, const gm82_instance *inst,
                                 int32_t *out_w, int32_t *out_h,
                                 int32_t *out_ox, int32_t *out_oy) {
    int32_t w = 16, h = 16, ox = 0, oy = 0;
    if (rt->sprites && inst->sprite_index >= 0) {
        int fi = inst->sprite_index;
        if (rt->sprite_groups) {
            int rfi = gm82_sprite_resolve_frame(rt->sprite_groups, inst->sprite_index, inst->image_index);
            if (rfi >= 0 && rfi < rt->sprites->count) fi = rfi;
        }
        if (fi >= 0 && fi < rt->sprites->count) {
            const gm82_decoded_frame *f = &rt->sprites->frames[fi];
            if (f->width > 0) w = f->width;
            if (f->height > 0) h = f->height;
            ox = f->origin_x;
            oy = f->origin_y;
        }
    }
    *out_w = w; *out_h = h; *out_ox = ox; *out_oy = oy;
}

static void instance_aabb(const gm82_runtime *rt, const gm82_instance *inst,
                          double cx, double cy,
                          double *l, double *t, double *r, double *b) {
    int32_t sw = 16, sh = 16, sox = 0, soy = 0;
    resolve_frame_bounds(rt, inst, &sw, &sh, &sox, &soy);
    double xs = inst->image_xscale != 0.0 ? fabs(inst->image_xscale) : 1.0;
    double ys = inst->image_yscale != 0.0 ? fabs(inst->image_yscale) : 1.0;
    double bw = (double)sw * xs; if (bw < 1.0) bw = 1.0;
    double bh = (double)sh * ys; if (bh < 1.0) bh = 1.0;
    double ox = (double)sox * xs;
    double oy = (double)soy * ys;
    *l = cx - ox;
    *t = cy - oy;
    *r = *l + bw;
    *b = *t + bh;
}

static void resolve_solid_contact(gm82_runtime *rt, gm82_instance *moving,
                                  const gm82_instance *solid) {
    if (!rt || !moving || !solid || !moving->alive || !solid->alive) return;
    double nl, nt, nr, nb;
    double ol, ot, or_, ob;
    double wl, wt, wr, wb;
    instance_aabb(rt, moving, moving->x, moving->y, &nl, &nt, &nr, &nb);
    instance_aabb(rt, moving, moving->xprevious, moving->yprevious, &ol, &ot, &or_, &ob);
    instance_aabb(rt, solid, solid->x, solid->y, &wl, &wt, &wr, &wb);

    int vertical = 0;
    if (ob <= wt && nb > wt && moving->vspeed >= 0.0) {
        moving->y += wt - nb;
        moving->vspeed = 0.0;
        moving->on_ground = 1;
        vertical = 1;
    } else if (ot >= wb && nt < wb && moving->vspeed <= 0.0) {
        moving->y += wb - nt;
        moving->vspeed = 0.0;
        moving->on_ceiling = 1;
        vertical = 1;
    }
    if (vertical) return;

    if (or_ <= wl && nr > wl && moving->hspeed >= 0.0) {
        moving->x += wl - nr;
        moving->hspeed = 0.0;
        moving->hit_right = 1;
    } else if (ol >= wr && nl < wr && moving->hspeed <= 0.0) {
        moving->x += wr - nl;
        moving->hspeed = 0.0;
        moving->hit_left = 1;
    } else {
        double px = fmin(fabs(nr - wl), fabs(wr - nl));
        double py = fmin(fabs(nb - wt), fabs(wb - nt));
        if (py <= px) {
            moving->y = moving->yprevious;
            moving->vspeed = 0.0;
            if (moving->y <= wt) moving->on_ground = 1;
            else moving->on_ceiling = 1;
        } else {
            moving->x = moving->xprevious;
            moving->hspeed = 0.0;
            if (moving->x <= wl) moving->hit_right = 1;
            else moving->hit_left = 1;
        }
    }
}

static void update_camera_follow(gm82_runtime *rt) {
    if (!rt || !rt->view_enabled || rt->view_follow_object < 0) return;
    const gm82_instance *target = NULL;
    for (int i = 0; i < rt->instance_count; i++) {
        const gm82_instance *cand = &rt->instances[i];
        if (!cand->alive) continue;
        if (gm82_instance_matches_object(rt, cand, rt->view_follow_object)) {
            target = cand;
            break;
        }
    }
    if (!target) return;

    double desire_x = rt->view_x;
    double desire_y = rt->view_y;
    double bh = rt->view_border_h >= 0 ? (double)rt->view_border_h : 0.0;
    double bv = rt->view_border_v >= 0 ? (double)rt->view_border_v : 0.0;
    if (bh > rt->view_w * 0.5) bh = rt->view_w * 0.5;
    if (bv > rt->view_h * 0.5) bv = rt->view_h * 0.5;

    if (target->x < rt->view_x + bh) desire_x = target->x - bh;
    else if (target->x > rt->view_x + rt->view_w - bh) desire_x = target->x - (rt->view_w - bh);

    if (target->y < rt->view_y + bv) desire_y = target->y - bv;
    else if (target->y > rt->view_y + rt->view_h - bv) desire_y = target->y - (rt->view_h - bv);

    if (rt->view_hspeed >= 0) {
        double dx = desire_x - rt->view_x;
        double max_dx = (double)rt->view_hspeed;
        if (dx > max_dx) desire_x = rt->view_x + max_dx;
        else if (dx < -max_dx) desire_x = rt->view_x - max_dx;
    }
    if (rt->view_vspeed >= 0) {
        double dy = desire_y - rt->view_y;
        double max_dy = (double)rt->view_vspeed;
        if (dy > max_dy) desire_y = rt->view_y + max_dy;
        else if (dy < -max_dy) desire_y = rt->view_y - max_dy;
    }

    double max_vx = (double)rt->room_width - rt->view_w;
    double max_vy = (double)rt->room_height - rt->view_h;
    if (max_vx < 0.0) max_vx = 0.0;
    if (max_vy < 0.0) max_vy = 0.0;
    if (desire_x < 0.0) desire_x = 0.0;
    if (desire_x > max_vx) desire_x = max_vx;
    if (desire_y < 0.0) desire_y = 0.0;
    if (desire_y > max_vy) desire_y = max_vy;

    rt->view_x = desire_x;
    rt->view_y = desire_y;
}

void gm82_runtime_step(gm82_runtime *rt) {
    if (!rt || !rt->running) return;
    rt->frame++;
    rt->frame_phase = 1;
    rt->prev_view_x = rt->view_x;
    rt->prev_view_y = rt->view_y;
    {
        double sec = (rt->room_speed > 0) ? (1.0 / (double)rt->room_speed) : (1.0 / 30.0);
        gm82_gml_set_frame_time(sec);
    }
    for (int i = 0; i < rt->instance_count; i++) {
        if (!rt->instances[i].alive) continue;
        rt->instances[i].xprevious = rt->instances[i].x;
        rt->instances[i].yprevious = rt->instances[i].y;
        rt->instances[i].on_ground = 0;
        rt->instances[i].on_ceiling = 0;
        rt->instances[i].hit_left = 0;
        rt->instances[i].hit_right = 0;
    }

    rt->frame_phase = 1;
    gm82_events_fire_begin_step_all(rt);
    rt->frame_phase = 2;

    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        for (int a = 0; a < 12; a++) {
            if (inst->alarms[a] > 0) {
                inst->alarms[a]--;
                if (inst->alarms[a] == 0) {
                    int room_before = rt->current_room;
                    inst->alarms[a] = -1;
                    gm82_events_fire_alarm(rt, inst, a);
                    if (rt->actions && inst->alive)
                        gm82_actions_fire_alarm(rt, inst, rt->actions, a);
                    if (rt->current_room != room_before) return;
                }
            }
        }
    }

    gm82_events_fire_keyboard_all(rt);
    gm82_events_fire_keypress_all(rt);
    gm82_events_fire_keyrelease_all(rt);
    gm82_events_fire_mouse_all(rt);
    rt->frame_phase = 3;
    gm82_events_fire_step_all(rt);

    const int n_move = rt->instance_count;
    for (int i = 0; i < n_move; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        if (inst->speed != 0.0) update_speed_from_dir(inst);
        if (inst->path_index >= 0 && inst->path_speed != 0.0) gm82_path_step_instance(inst);
        if (inst->timeline_running) gm82_timeline_step_instance(rt, inst);
        if (inst->gravity != 0.0) {
            double rad = inst->gravity_direction * M_PI / 180.0;
            inst->hspeed += cos(rad) * inst->gravity;
            inst->vspeed -= sin(rad) * inst->gravity;
        }
        if (inst->friction != 0.0) {
            double f = inst->friction;
            if (inst->hspeed > 0) { inst->hspeed -= f; if (inst->hspeed < 0) inst->hspeed = 0; }
            else if (inst->hspeed < 0) { inst->hspeed += f; if (inst->hspeed > 0) inst->hspeed = 0; }
            if (inst->vspeed > 0) { inst->vspeed -= f; if (inst->vspeed < 0) inst->vspeed = 0; }
            else if (inst->vspeed < 0) { inst->vspeed += f; if (inst->vspeed > 0) inst->vspeed = 0; }
        }
        inst->x += inst->hspeed;
        inst->y += inst->vspeed;
    }

    {
        enum { CELL = 64, HASH = 256 };
        int16_t head[HASH];
        int16_t next_i[GM82_MAX_INSTANCES];
        for (int i = 0; i < HASH; i++) head[i] = -1;
        const int n_col = rt->instance_count;
        for (int i = 0; i < n_col && i < GM82_MAX_INSTANCES; i++) {
            next_i[i] = -1;
            gm82_instance *inst = &rt->instances[i];
            if (!inst->alive) continue;
            int cx = (int)(inst->x / CELL), cy = (int)(inst->y / CELL);
            unsigned h = (unsigned)((cx * 73856093) ^ (cy * 19349663)) & (HASH - 1);
            next_i[i] = head[h];
            head[h] = (int16_t)i;
        }
        for (int i = 0; i < n_col; i++) {
            gm82_instance *inst = &rt->instances[i];
            if (!inst->alive) continue;
            int32_t sw = 16, sh = 16, sox = 0, soy = 0;
            resolve_frame_bounds(rt, inst, &sw, &sh, &sox, &soy);
            double xs = inst->image_xscale != 0.0 ? fabs(inst->image_xscale) : 1.0;
            double ys = inst->image_yscale != 0.0 ? fabs(inst->image_yscale) : 1.0;
            int32_t bsw = (int32_t)(sw * xs), bsh = (int32_t)(sh * ys);
            int32_t bsox = (int32_t)(sox * xs), bsoy = (int32_t)(soy * ys);
            if (bsw < 1) bsw = 1;
            if (bsh < 1) bsh = 1;
            double ax1 = inst->x - bsox, ay1 = inst->y - bsoy, ax2 = ax1 + bsw, ay2 = ay1 + bsh;
            int cx0 = (int)(ax1 / CELL) - 1, cy0 = (int)(ay1 / CELL) - 1;
            int cx1 = (int)(ax2 / CELL) + 1, cy1 = (int)(ay2 / CELL) + 1;
            for (int cy = cy0; cy <= cy1; cy++) {
                for (int cx = cx0; cx <= cx1; cx++) {
                    unsigned h = (unsigned)((cx * 73856093) ^ (cy * 19349663)) & (HASH - 1);
                    for (int j = head[h]; j >= 0; j = next_i[j]) {
                        if (j <= i) continue;
                        gm82_instance *other = &rt->instances[j];
                        if (!other->alive) continue;
                        int32_t ow = 16, oh = 16, oox = 0, ooy = 0;
                        resolve_frame_bounds(rt, other, &ow, &oh, &oox, &ooy);
                        double oxs = other->image_xscale != 0.0 ? fabs(other->image_xscale) : 1.0;
                        double oys = other->image_yscale != 0.0 ? fabs(other->image_yscale) : 1.0;
                        int32_t bow = (int32_t)(ow * oxs), boh = (int32_t)(oh * oys);
                        int32_t boox = (int32_t)(oox * oxs), booy = (int32_t)(ooy * oys);
                        if (bow < 1) bow = 1;
                        if (boh < 1) boh = 1;
                        double bx1 = other->x - boox, by1 = other->y - booy, bx2 = bx1 + bow, by2 = by1 + boh;
                        if (ax2 <= bx1 || bx2 <= ax1 || ay2 <= by1 || by2 <= ay1) continue;
                        int room_before = rt->current_room;
                        gm82_events_fire_collision(rt, inst, other);
                        if (rt->current_room != room_before) return;
                        if (inst->alive && other->alive) {
                            gm82_events_fire_collision(rt, other, inst);
                            if (rt->current_room != room_before) return;
                        }
                        if (other->solid && !inst->solid) {
                            resolve_solid_contact(rt, inst, other);
                        } else if (inst->solid && !other->solid) {
                            resolve_solid_contact(rt, other, inst);
                        } else if (other->solid && inst->solid) {
                            inst->x = inst->xprevious; inst->y = inst->yprevious;
                            if (inst->hspeed != 0) inst->hspeed = 0;
                            if (inst->vspeed != 0) inst->vspeed = 0;
                        }
                    }
                }
            }
        }
    }

    gm82_events_fire_end_step_all(rt);
    gm82_events_fire_outside_all(rt);
    gm82_events_fire_boundary_all(rt);

    /* Advance image animation via image_frac and fire ANIMATION_END on wrap */
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive || inst->image_speed == 0.0) continue;
        int nframes = 1;
        if (rt->sprite_groups && inst->sprite_index >= 0 && inst->sprite_index < rt->sprite_groups->count) {
            int fc = rt->sprite_groups->items[inst->sprite_index].frame_count;
            if (fc > 0) nframes = fc;
        }
        inst->image_frac += inst->image_speed;
        if (nframes <= 1) {
            if (inst->image_frac >= 1.0 || inst->image_frac < 0.0) {
                inst->image_frac = 0.0;
                inst->image_index = 0;
                gm82_events_fire_other(rt, inst, GM82_OTHER_ANIMATION_END);
            }
        } else {
            bool wrapped = false;
            while (inst->image_frac >= (double)nframes) {
                inst->image_frac -= (double)nframes;
                wrapped = true;
            }
            while (inst->image_frac < 0.0) {
                inst->image_frac += (double)nframes;
                wrapped = true;
            }
            inst->image_index = (int32_t)inst->image_frac;
            if (wrapped) gm82_events_fire_other(rt, inst, GM82_OTHER_ANIMATION_END);
        }
    }

    /* Scroll room backgrounds */
    if (rt->rooms && rt->current_room >= 0 && rt->current_room < rt->rooms->count) {
        const gm82_decoded_room *room = &rt->rooms->items[rt->current_room];
        for (int bi = 0; bi < 8; bi++) {
            rt->bg_offset_x[bi] += (double)room->backgrounds[bi].hspeed;
            rt->bg_offset_y[bi] += (double)room->backgrounds[bi].vspeed;
        }
    }

    update_camera_follow(rt);
    gm82_runtime_flush_destroy_queue(rt);
    rt->frame_phase = 0;
}

typedef struct {
    int kind; /* 0 = instance, 1 = tile */
    int32_t depth;
    int32_t tie_id;
    int32_t index;
} gm82_draw_item;

static int cmp_draw_item_desc(const void *a, const void *b) {
    const gm82_draw_item *da = (const gm82_draw_item *)a;
    const gm82_draw_item *db = (const gm82_draw_item *)b;
    if (da->depth > db->depth) return -1;
    if (da->depth < db->depth) return 1;
    if (da->kind != db->kind) return (da->kind == 1) ? -1 : 1; /* tiles behind same-depth instances */
    return (da->tie_id < db->tie_id) ? -1 : (da->tie_id > db->tie_id ? 1 : 0);
}

static void draw_room_background_layer(const gm82_runtime *rt, const gm82_decoded_room *room,
                                       uint8_t *rgba, int32_t buf_w, int32_t buf_h, int foreground_pass) {
    if (!rt->backgrounds || !room) return;
    double vx = rt->view_enabled ? rt->view_x : 0.0;
    double vy = rt->view_enabled ? rt->view_y : 0.0;
    for (int bi = 0; bi < 8; bi++) {
        const gm82_decoded_room_bg *rbg = &room->backgrounds[bi];
        if (!rbg->visible || (rbg->foreground ? 1 : 0) != foreground_pass) continue;
        if (rbg->bg_index < 0 || rbg->bg_index >= rt->backgrounds->count) continue;
        const gm82_decoded_background *bg = &rt->backgrounds->items[rbg->bg_index];
        if (!bg->rgba || bg->width <= 0 || bg->height <= 0) continue;

        double bx = (double)rbg->x + rt->bg_offset_x[bi] - vx;
        double by = (double)rbg->y + rt->bg_offset_y[bi] - vy;
        if (rbg->stretch) {
            for (int py = 0; py < buf_h; py++) {
                int sy = (int)((double)py * bg->height / (double)buf_h);
                if (sy >= bg->height) sy = bg->height - 1;
                for (int px = 0; px < buf_w; px++) {
                    int sx = (int)((double)px * bg->width / (double)buf_w);
                    if (sx >= bg->width) sx = bg->width - 1;
                    const uint8_t *src = bg->rgba + ((size_t)sy * (size_t)bg->width + (size_t)sx) * 4u;
                    if (src[3] == 0) continue;
                    uint8_t *dst = rgba + ((size_t)py * (size_t)buf_w + (size_t)px) * 4u;
                    uint32_t a = src[3], ia = 255u - a;
                    dst[0] = (uint8_t)((src[0] * a + dst[0] * ia) / 255u);
                    dst[1] = (uint8_t)((src[1] * a + dst[1] * ia) / 255u);
                    dst[2] = (uint8_t)((src[2] * a + dst[2] * ia) / 255u);
                    dst[3] = 255;
                }
            }
            continue;
        }

        int start_tx = 0, end_tx = 1, start_ty = 0, end_ty = 1;
        int ix = (int)floor(bx), iy = (int)floor(by);
        if (rbg->htiled) {
            int ox = ix % bg->width;
            if (ox > 0) ox -= bg->width;
            start_tx = ox;
            end_tx = buf_w;
        } else {
            start_tx = ix;
            end_tx = ix + 1;
        }
        if (rbg->vtiled) {
            int oy = iy % bg->height;
            if (oy > 0) oy -= bg->height;
            start_ty = oy;
            end_ty = buf_h;
        } else {
            start_ty = iy;
            end_ty = iy + 1;
        }

        int step_x = rbg->htiled ? bg->width : (buf_w + bg->width + 1);
        int step_y = rbg->vtiled ? bg->height : (buf_h + bg->height + 1);
        for (int ty = start_ty; ty < end_ty; ty += step_y) {
            for (int y = 0; y < bg->height; y++) {
                int py = ty + y;
                if (py < 0 || py >= buf_h) continue;
                for (int tx = start_tx; tx < end_tx; tx += step_x) {
                    for (int x = 0; x < bg->width; x++) {
                        int px = tx + x;
                        if (px < 0 || px >= buf_w) continue;
                        const uint8_t *src = bg->rgba + ((size_t)y * (size_t)bg->width + (size_t)x) * 4u;
                        uint8_t a = src[3];
                        if (a == 0) continue;
                        uint8_t *dst = rgba + ((size_t)py * (size_t)buf_w + (size_t)px) * 4u;
                        if (a >= 250) {
                            dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = 255;
                        } else {
                            uint32_t ia = 255u - a;
                            dst[0] = (uint8_t)((src[0] * a + dst[0] * ia) / 255u);
                            dst[1] = (uint8_t)((src[1] * a + dst[1] * ia) / 255u);
                            dst[2] = (uint8_t)((src[2] * a + dst[2] * ia) / 255u);
                            dst[3] = 255;
                        }
                    }
                }
            }
        }
    }
}

bool gm82_runtime_draw(gm82_runtime *rt, uint8_t *rgba, int32_t buf_w, int32_t buf_h) {
    if (!rt || !rgba || buf_w <= 0 || buf_h <= 0) return false;
    gm82_draw_set_target(rgba, buf_w, buf_h);
    rt->frame_phase = GM82_PHASE_PRE_DRAW;
    gm82_events_fire_pre_draw_all(rt);

    const gm82_decoded_room *room = (rt->rooms && rt->current_room >= 0 && rt->current_room < rt->rooms->count)
                                    ? &rt->rooms->items[rt->current_room] : NULL;

    size_t total_px = (size_t)buf_w * (size_t)buf_h;
    if (room && room->draw_background_color) {
        uint32_t col = (uint32_t)room->background_color;
        uint8_t r = (uint8_t)(col & 0xFF);
        uint8_t g = (uint8_t)((col >> 8) & 0xFF);
        uint8_t b = (uint8_t)((col >> 16) & 0xFF);
        for (size_t i = 0; i < total_px; i++) {
            rgba[i * 4 + 0] = r;
            rgba[i * 4 + 1] = g;
            rgba[i * 4 + 2] = b;
            rgba[i * 4 + 3] = 255;
        }
    } else {
        for (size_t i = 0; i < total_px; i++) {
            rgba[i * 4 + 0] = 20;
            rgba[i * 4 + 1] = 20;
            rgba[i * 4 + 2] = 40;
            rgba[i * 4 + 3] = 255;
        }
    }

    draw_room_background_layer(rt, room, rgba, buf_w, buf_h, 0);

    rt->frame_phase = GM82_PHASE_DRAW;
    double vx = rt->view_enabled ? rt->view_x : 0.0;
    double vy = rt->view_enabled ? rt->view_y : 0.0;

    int max_items = rt->instance_count + (room ? room->tile_count : 0);
    if (max_items > 0) {
        gm82_draw_item *items = (gm82_draw_item *)malloc((size_t)max_items * sizeof(gm82_draw_item));
        int item_n = 0;
        if (items) {
            for (int i = 0; i < rt->instance_count; i++) {
                gm82_instance *inst = &rt->instances[i];
                if (!inst->alive || !inst->visible) continue;
                items[item_n++] = (gm82_draw_item){ 0, inst->depth, inst->id, i };
            }
            if (room && room->tiles && rt->backgrounds) {
                for (int t = 0; t < room->tile_count; t++) {
                    items[item_n++] = (gm82_draw_item){ 1, room->tiles[t].depth, room->tiles[t].id, t };
                }
            }
            if (item_n > 1) qsort(items, (size_t)item_n, sizeof(items[0]), cmp_draw_item_desc);

            for (int k = 0; k < item_n; k++) {
                if (items[k].kind == 1) {
                    const gm82_decoded_tile *tl = &room->tiles[items[k].index];
                    if (tl->background_index < 0 || tl->background_index >= rt->backgrounds->count) continue;
                    const gm82_decoded_background *bg = &rt->backgrounds->items[tl->background_index];
                    if (!bg->rgba || bg->width <= 0 || bg->height <= 0) continue;
                    int dx0 = (int)(tl->x - vx), dy0 = (int)(tl->y - vy);
                    int tw = tl->width > 0 ? tl->width : bg->width;
                    int th = tl->height > 0 ? tl->height : bg->height;
                    for (int y = 0; y < th; y++) {
                        int sy = tl->yo + y;
                        int py = dy0 + y;
                        if (sy < 0 || sy >= bg->height || py < 0 || py >= buf_h) continue;
                        for (int x = 0; x < tw; x++) {
                            int sx = tl->xo + x;
                            int px = dx0 + x;
                            if (sx < 0 || sx >= bg->width || px < 0 || px >= buf_w) continue;
                            const uint8_t *src = bg->rgba + ((size_t)sy * (size_t)bg->width + (size_t)sx) * 4u;
                            uint8_t a = src[3];
                            if (a == 0) continue;
                            uint8_t *dst = rgba + ((size_t)py * (size_t)buf_w + (size_t)px) * 4u;
                            if (a >= 250) {
                                dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = 255;
                            } else {
                                uint32_t ia = 255u - a;
                                dst[0] = (uint8_t)((src[0] * a + dst[0] * ia) / 255u);
                                dst[1] = (uint8_t)((src[1] * a + dst[1] * ia) / 255u);
                                dst[2] = (uint8_t)((src[2] * a + dst[2] * ia) / 255u);
                                dst[3] = 255;
                            }
                        }
                    }
                    continue;
                }

                gm82_instance *inst = &rt->instances[items[k].index];
                if (!inst->alive || !inst->visible) continue;
                if (gm82_events_has_draw_event(rt, inst)) {
                    gm82_events_fire_draw_single(rt, inst);
                    continue;
                }
                if (!rt->sprites || inst->sprite_index < 0 || inst->sprite_index >= rt->sprites->count) continue;
                int frame_idx = inst->sprite_index;
                if (rt->sprite_groups) {
                    int rfi = gm82_sprite_resolve_frame(rt->sprite_groups, inst->sprite_index, inst->image_index);
                    if (rfi >= 0 && rfi < rt->sprites->count) frame_idx = rfi;
                }
                gml_draw_sprite_ext((double)inst->sprite_index, (double)inst->image_index,
                                    inst->x, inst->y,
                                    inst->image_xscale != 0.0 ? inst->image_xscale : 1.0,
                                    inst->image_yscale != 0.0 ? inst->image_yscale : 1.0,
                                    inst->image_angle,
                                    (double)(inst->image_blend ? inst->image_blend : 0xFFFFFF),
                                    inst->image_alpha > 0.0 ? inst->image_alpha : 1.0);
                (void)frame_idx;
            }
            free(items);
        }
    }

    draw_room_background_layer(rt, room, rgba, buf_w, buf_h, 1);

    rt->frame_phase = GM82_PHASE_POST_DRAW;
    gm82_events_fire_post_draw_all(rt);
    gm82_draw_set_target(NULL, 0, 0);
    rt->frame_phase = GM82_PHASE_IDLE;
    return true;
}

void gm82_runtime_event_user(gm82_runtime *rt, int user_event_index) {
    if (!rt || user_event_index < 0 || user_event_index > 15) return;
    for (int i = 0; i < rt->instance_count; i++) {
        if (rt->instances[i].alive)
            gm82_events_fire_user(rt, &rt->instances[i], user_event_index);
    }
}
