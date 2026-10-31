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
    gm82_gml_set_runtime(rt);
    rt->next_id = 100001;
    rt->room_speed = 30;
    rt->room_width = 640;
    rt->room_height = 480;
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
        inst->visible = o->visible ? 1 : 1;
        inst->depth = o->depth;
        if (o->name[0]) {
            if (strstr(o->name, "bloque") || strstr(o->name, "Bloque") ||
                strstr(o->name, "castillo") || strstr(o->name, "solid") ||
                strstr(o->name, "Solid") || strstr(o->name, "wall") ||
                strstr(o->name, "Wall") || strstr(o->name, "ground"))
                inst->solid = 1;
        }
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
    inst->alive = 1;
    for (int i = 0; i < 12; i++) inst->alarms[i] = -1;
    apply_object_defaults(rt, inst, object_index);
    gm82_events_fire_create_single(rt, inst);
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
            if (rt->objects && inst->object_index >= 0 && inst->object_index < rt->objects->count) {
                const gm82_decoded_object *obj = &rt->objects->items[inst->object_index];
                for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                    const gm82_decoded_event *ev = &obj->events[e];
                    if (ev->main_type != 1) continue;
                    if (ev->action_name0[0]) gm82_action_execute_named(rt, inst, ev->action_name0);
                    if (ev->code_snippet && ev->code_snippet[0]) {
                        gm82_gml_set_self(inst);
                        gm82_gml_eval_block(rt, inst, ev->code_snippet);
                    }
                }
            }
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
    if (rt && rt->objects && inst->object_index >= 0 && inst->object_index < rt->objects->count) {
        const gm82_decoded_object *obj = &rt->objects->items[inst->object_index];
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            const gm82_decoded_event *ev = &obj->events[e];
            if (ev->main_type != 1) continue;
            if (ev->action_name0[0]) gm82_action_execute_named(rt, inst, ev->action_name0);
            if (ev->code_snippet && ev->code_snippet[0]) {
                gm82_gml_set_self(inst);
                gm82_gml_eval_block(rt, inst, ev->code_snippet);
            }
        }
    }
    inst->alive = 0;
}

bool gm82_runtime_goto_room(gm82_runtime *rt, int room_index) {
    if (!rt || !rt->rooms || room_index < 0 || room_index >= rt->rooms->count) return false;
    static int s_room_transition_depth = 0;
    if (s_room_transition_depth > 3) return false;
    s_room_transition_depth++;

    gm82_runtime_flush_destroy_queue(rt);
    if (rt->room_arena.base) gm82_arena_reset(&rt->room_arena);
    else gm82_arena_init(&rt->room_arena, 4u * 1024u * 1024u);
    rt->destroy_queue_count = 0;

    const gm82_decoded_room *room = &rt->rooms->items[room_index];
    rt->current_room = room_index;
    rt->room_width = room->width;
    rt->room_height = room->height;
    rt->room_speed = room->speed > 0 ? room->speed : 30;
    rt->view_enabled = 1;
    rt->view_x = 0; rt->view_y = 0;
    rt->view_w = room->width > 640 ? 320.0 : (double)room->width;
    rt->view_h = room->height > 480 ? 240.0 : (double)room->height;
    if (rt->view_w > room->width) rt->view_w = room->width;
    if (rt->view_h > room->height) rt->view_h = room->height;
    rt->view_follow_object = 0;

    int w = 0;
    for (int i = 0; i < rt->instance_count; i++) {
        if (rt->instances[i].alive && rt->instances[i].persistent) {
            if (w != i) rt->instances[w] = rt->instances[i];
            w++;
        }
    }
    rt->instance_count = w;

    for (int i = 0; i < room->instance_count; i++) {
        const gm82_decoded_instance *src = &room->instances[i];
        if (rt->objects && src->object_index >= 0 && src->object_index < rt->objects->count) {
            const char *on = rt->objects->items[src->object_index].name;
            if (!on || !on[0]) continue;
        }
        gm82_instance *inst = gm82_runtime_instance_create(rt, src->object_index, (double)src->x, (double)src->y);
        if (inst && src->id > 0) inst->id = src->id;
        /* Instance Creation Code from room (after Create event) */
        if (inst && src->creation_code && src->creation_code[0]) {
            gm82_gml_set_runtime(rt);
            gm82_gml_set_self(inst);
            gm82_gml_eval_block(rt, inst, src->creation_code);
        }
    }
    rt->running = 1;
    rt->frame = 0;
    rt->step_accumulator = 0.0;
    rt->step_room_speed = rt->room_speed;
    {
        int has_player = 0;
        for (int i = 0; i < rt->instance_count; i++) {
            if (!rt->instances[i].alive || !rt->objects) continue;
            int32_t oi = rt->instances[i].object_index;
            if (oi < 0 || oi >= rt->objects->count) continue;
            const char *n = rt->objects->items[oi].name;
            if (!n) continue;
            if (strstr(n, "player") || strstr(n, "Player") || strstr(n, "mario") ||
                strstr(n, "link") || strstr(n, "fantasma") || strstr(n, "heroe")) {
                has_player = 1; rt->view_follow_object = oi; break;
            }
        }
        if (!has_player && rt->objects) {
            for (int oi = 0; oi < rt->objects->count; oi++) {
                const char *n = rt->objects->items[oi].name;
                if (!n) continue;
                if (strstr(n, "link") || strstr(n, "fantasma") || strstr(n, "player") ||
                    strstr(n, "mario") || strstr(n, "Player")) {
                    double sx = rt->room_width > 80 ? rt->room_width * 0.35 : 64;
                    double sy = rt->room_height > 80 ? rt->room_height * 0.35 : 64;
                    gm82_runtime_instance_create(rt, oi, sx, sy);
                    rt->view_follow_object = oi; break;
                }
            }
        }
    }
    s_room_transition_depth--;
    return true;
}

static void update_speed_from_dir(gm82_instance *inst) {
    double rad = inst->direction * M_PI / 180.0;
    inst->hspeed = cos(rad) * inst->speed;
    inst->vspeed = -sin(rad) * inst->speed;
}

void gm82_runtime_step(gm82_runtime *rt) {
    if (!rt || !rt->running) return;
    rt->frame++;
    rt->frame_phase = 1;
    {
        double sec = (rt->room_speed > 0) ? (1.0 / (double)rt->room_speed) : (1.0/30.0);
        gm82_gml_set_frame_time(sec);
    }
    for (int i = 0; i < rt->instance_count; i++) {
        if (!rt->instances[i].alive) continue;
        rt->instances[i].xprevious = rt->instances[i].x;
        rt->instances[i].yprevious = rt->instances[i].y;
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
            double rad = inst->gravity_direction * 3.141592653589793 / 180.0;
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

    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        if (rt->room_width > 0) {
            if (inst->x < 0) { inst->x = 0; if (inst->hspeed < 0) inst->hspeed = 0; }
            if (inst->x > rt->room_width) { inst->x = (double)rt->room_width; if (inst->hspeed > 0) inst->hspeed = 0; }
        }
        if (rt->room_height > 0) {
            if (inst->y < 0) { inst->y = 0; if (inst->vspeed < 0) inst->vspeed = 0; }
            if (inst->y > rt->room_height) { inst->y = (double)rt->room_height; if (inst->vspeed > 0) inst->vspeed = 0; }
        }
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
            const gm82_decoded_frame *fa = NULL;
            if (rt->sprites && inst->sprite_index >= 0 && inst->sprite_index < rt->sprites->count) {
                fa = &rt->sprites->frames[inst->sprite_index];
                sw = fa->width; sh = fa->height; sox = fa->origin_x; soy = fa->origin_y;
            }
            double xs = inst->image_xscale != 0.0 ? inst->image_xscale : 1.0;
            double ys = inst->image_yscale != 0.0 ? inst->image_yscale : 1.0;
            sw = (int32_t)(sw * xs); sh = (int32_t)(sh * ys);
            sox = (int32_t)(sox * xs); soy = (int32_t)(soy * ys);
            if (sw < 1) sw = 1; if (sh < 1) sh = 1;
            double ax1 = inst->x - sox, ay1 = inst->y - soy, ax2 = ax1 + sw, ay2 = ay1 + sh;
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
                        const gm82_decoded_frame *fb = NULL;
                        if (rt->sprites && other->sprite_index >= 0 && other->sprite_index < rt->sprites->count) {
                            fb = &rt->sprites->frames[other->sprite_index];
                            ow = fb->width; oh = fb->height; oox = fb->origin_x; ooy = fb->origin_y;
                        }
                        double oxs = other->image_xscale != 0.0 ? other->image_xscale : 1.0;
                        double oys = other->image_yscale != 0.0 ? other->image_yscale : 1.0;
                        ow = (int32_t)(ow * oxs); oh = (int32_t)(oh * oys);
                        oox = (int32_t)(oox * oxs); ooy = (int32_t)(ooy * oys);
                        if (ow < 1) ow = 1; if (oh < 1) oh = 1;
                        double bx1 = other->x - oox, by1 = other->y - ooy, bx2 = bx1 + ow, by2 = by1 + oh;
                        if (ax2 <= bx1 || bx2 <= ax1 || ay2 <= by1 || by2 <= ay1) continue;
                        gm82_events_fire_collision(rt, inst, other);
                        if (inst->alive && other->alive) gm82_events_fire_collision(rt, other, inst);
                        if (other->solid) {
                            inst->x = inst->xprevious; inst->y = inst->yprevious;
                            if (inst->hspeed != 0) inst->hspeed = 0;
                            if (inst->vspeed != 0) inst->vspeed = 0;
                        }
                        if (inst->solid && !other->solid) {
                            other->x = other->xprevious; other->y = other->yprevious;
                        }
                    }
                }
            }
        }
    }

    gm82_events_fire_end_step_all(rt);
    gm82_events_fire_outside_all(rt);
    gm82_events_fire_boundary_all(rt);
    gm82_events_fire_animation_end_all(rt);
    gm82_runtime_flush_destroy_queue(rt);
    rt->frame_phase = 0;
}

bool gm82_runtime_draw(gm82_runtime *rt, uint8_t *rgba, int32_t buf_w, int32_t buf_h) {
    if (!rt || !rgba || buf_w <= 0 || buf_h <= 0) return false;
    rt->frame_phase = GM82_PHASE_PRE_DRAW;
    gm82_events_fire_pre_draw_all(rt);
    size_t n = (size_t)buf_w * (size_t)buf_h * 4;
    memset(rgba, 0, n);
    rt->frame_phase = GM82_PHASE_DRAW;
    gm82_events_fire_draw_all(rt);
    if (rt->sprites) {
        for (int i = 0; i < rt->instance_count; i++) {
            gm82_instance *inst = &rt->instances[i];
            if (!inst->alive || !inst->visible) continue;
            if (inst->sprite_index < 0 || inst->sprite_index >= rt->sprites->count) continue;
            const gm82_decoded_frame *fr = &rt->sprites->frames[inst->sprite_index];
            int sw = fr->width > 0 ? fr->width : 16;
            int sh = fr->height > 0 ? fr->height : 16;
            int ox = fr->origin_x, oy = fr->origin_y;
            int dx = (int)(inst->x - ox - rt->view_x);
            int dy = (int)(inst->y - oy - rt->view_y);
            for (int y = 0; y < sh; y++) {
                int py = dy + y;
                if (py < 0 || py >= buf_h) continue;
                for (int x = 0; x < sw; x++) {
                    int px = dx + x;
                    if (px < 0 || px >= buf_w) continue;
                    size_t idx = ((size_t)py * (size_t)buf_w + (size_t)px) * 4;
                    rgba[idx+0]=180; rgba[idx+1]=180; rgba[idx+2]=200; rgba[idx+3]=255;
                }
            }
        }
    }
    rt->frame_phase = GM82_PHASE_POST_DRAW;
    gm82_events_fire_post_draw_all(rt);
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
