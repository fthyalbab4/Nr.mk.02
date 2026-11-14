#define _POSIX_C_SOURCE 200809L
#include "gm82_runtime.h"
#include "gm82_events.h"
#include "gm82_actions.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "gm82_arena.h"
#include "gm82_sprite_decode.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#ifdef _WIN32
#include <windows.h>
static uint64_t perf_now_ns(void) {
    LARGE_INTEGER counter;
    LARGE_INTEGER frequency;
    if (!QueryPerformanceCounter(&counter) || !QueryPerformanceFrequency(&frequency) || frequency.QuadPart <= 0)
        return 0;
    return (uint64_t)((counter.QuadPart * UINT64_C(1000000000)) / (uint64_t)frequency.QuadPart);
}
#else
static uint64_t perf_now_ns(void) {
    struct timespec ts;
    if (clock_gettime(CLOCK_MONOTONIC, &ts) != 0) return 0;
    return (uint64_t)ts.tv_sec * UINT64_C(1000000000) + (uint64_t)ts.tv_nsec;
}
#endif

static void perf_set_phase(gm82_runtime *rt, int phase) {
    if (!rt) return;
    if (rt->perf_enabled) {
        uint64_t now = perf_now_ns();
        if (rt->perf_active_phase >= 0 && rt->perf_active_phase < 10 && now >= rt->perf_last_ns)
            rt->perf.phase_ns[rt->perf_active_phase] += now - rt->perf_last_ns;
        rt->perf_last_ns = now;
        rt->perf_active_phase = phase;
    }
    rt->frame_phase = phase;
}

void gm82_runtime_perf_enable(gm82_runtime *rt, bool enabled) {
    if (!rt) return;
    rt->perf_enabled = enabled ? 1 : 0;
    rt->perf_active_phase = GM82_PHASE_IDLE;
    rt->perf_last_ns = enabled ? perf_now_ns() : 0;
}

void gm82_runtime_perf_reset(gm82_runtime *rt) {
    if (!rt) return;
    memset(&rt->perf, 0, sizeof(rt->perf));
    rt->perf_active_phase = GM82_PHASE_IDLE;
    rt->perf_last_ns = rt->perf_enabled ? perf_now_ns() : 0;
}

void gm82_runtime_perf_snapshot(const gm82_runtime *rt, gm82_perf_stats *out) {
    if (!rt || !out) return;
    *out = rt->perf;
    if (rt->perf_enabled && rt->perf_active_phase >= 0 && rt->perf_active_phase < 10) {
        uint64_t now = perf_now_ns();
        if (now >= rt->perf_last_ns)
            out->phase_ns[rt->perf_active_phase] += now - rt->perf_last_ns;
    }
}

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
    rt->frame_phase = GM82_PHASE_IDLE;
    rt->perf_active_phase = GM82_PHASE_IDLE;
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

void gm82_runtime_bind_resources(gm82_runtime *rt,
    const gm82_decoded_sound_list *sounds,
    const gm82_decoded_font_list *fonts) {
    if (!rt) return;
    rt->sounds = sounds;
    rt->fonts = fonts;
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
    /* GameMaker defers instance destruction until the current event phase is
       complete.  This is important for Step/Draw: event code may destroy an
       instance while the active snapshot is still being traversed. */
    if (rt && rt->frame_phase >= GM82_PHASE_BEGIN_STEP &&
        rt->frame_phase <= GM82_PHASE_POST_DRAW) {
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
        /* Assign the room instance ID before Create event dispatch. Create
         * handlers may queue instance_destroy(); queuing the generated ID and
         * replacing it afterward leaves the room instance alive indefinitely. */
        int32_t saved_next_id = rt->next_id;
        if (src->id > 0) rt->next_id = src->id;
        gm82_instance *inst = gm82_runtime_instance_create(rt, src->object_index, (double)src->x, (double)src->y);
        rt->next_id = saved_next_id;

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

typedef struct {
    double left, top, right, bottom;
} gm82_collision_box;

static gm82_collision_box instance_collision_box(const gm82_runtime *rt,
                                                  const gm82_instance *inst) {
    gm82_collision_box box = {inst->x, inst->y, inst->x + 16.0, inst->y + 16.0};
    int32_t w = 16, h = 16, ox = 0, oy = 0;
    if (rt && rt->sprites && inst->sprite_index >= 0 &&
        inst->sprite_index < rt->sprites->count) {
        const gm82_decoded_frame *frame = &rt->sprites->frames[inst->sprite_index];
        w = frame->width; h = frame->height;
        ox = frame->origin_x; oy = frame->origin_y;
    }
    double sx = inst->image_xscale != 0.0 ? inst->image_xscale : 1.0;
    double sy = inst->image_yscale != 0.0 ? inst->image_yscale : 1.0;
    w = (int32_t)(w * sx); h = (int32_t)(h * sy);
    ox = (int32_t)(ox * sx); oy = (int32_t)(oy * sy);
    if (w < 1) w = 1;
    if (h < 1) h = 1;
    box.left = inst->x - ox; box.top = inst->y - oy;
    box.right = box.left + w; box.bottom = box.top + h;
    return box;
}

static int swept_solid_crossing(const gm82_runtime *rt,
                                const gm82_instance *moving,
                                const gm82_instance *solid) {
    if (!rt || !moving || !solid) return 0;
    gm82_collision_box now = instance_collision_box(rt, moving);
    gm82_collision_box wall = instance_collision_box(rt, solid);
    gm82_instance old_instance = *moving;
    old_instance.x = moving->xprevious;
    old_instance.y = moving->yprevious;
    gm82_collision_box old = instance_collision_box(rt, &old_instance);

    double dx = now.left - old.left;
    double dy = now.top - old.top;
    if (dy > 0.0 && old.bottom <= wall.top && now.bottom > wall.top) {
        double t = (wall.top - old.bottom) / dy;
        double left = old.left + (now.left - old.left) * t;
        double right = old.right + (now.right - old.right) * t;
        if (t >= 0.0 && t <= 1.0 && right > wall.left && left < wall.right) return 1;
    }
    if (dy < 0.0 && old.top >= wall.bottom && now.top < wall.bottom) {
        double t = (wall.bottom - old.top) / dy;
        double left = old.left + (now.left - old.left) * t;
        double right = old.right + (now.right - old.right) * t;
        if (t >= 0.0 && t <= 1.0 && right > wall.left && left < wall.right) return 1;
    }
    if (dx > 0.0 && old.right <= wall.left && now.right > wall.left) {
        double t = (wall.left - old.right) / dx;
        double top = old.top + (now.top - old.top) * t;
        double bottom = old.bottom + (now.bottom - old.bottom) * t;
        if (t >= 0.0 && t <= 1.0 && bottom > wall.top && top < wall.bottom) return 1;
    }
    if (dx < 0.0 && old.left >= wall.right && now.left < wall.right) {
        double t = (wall.right - old.left) / dx;
        double top = old.top + (now.top - old.top) * t;
        double bottom = old.bottom + (now.bottom - old.bottom) * t;
        if (t >= 0.0 && t <= 1.0 && bottom > wall.top && top < wall.bottom) return 1;
    }
    return 0;
}

/* GM8 collision dispatch uses the sprite mask when one is available.  Keep
   the AABB path as the compatibility fallback for decoded/projected sprites
   that have no pixel data (text fixtures and partially decoded GMKs). */
static bool precise_instance_overlap(const gm82_runtime *rt,
                                     const gm82_instance *a,
                                     const gm82_instance *b) {
    if (!rt || !rt->sprites || !a || !b) return true;
    if (a->sprite_index < 0 || a->sprite_index >= rt->sprites->count ||
        b->sprite_index < 0 || b->sprite_index >= rt->sprites->count) return true;
    const gm82_decoded_frame *fa = &rt->sprites->frames[a->sprite_index];
    const gm82_decoded_frame *fb = &rt->sprites->frames[b->sprite_index];
    if (!fa->bitmask || !fb->bitmask || fa->bitmask_size == 0 || fb->bitmask_size == 0)
        return true;
    double xs1 = a->image_xscale != 0.0 ? a->image_xscale : 1.0;
    double ys1 = a->image_yscale != 0.0 ? a->image_yscale : 1.0;
    double xs2 = b->image_xscale != 0.0 ? b->image_xscale : 1.0;
    double ys2 = b->image_yscale != 0.0 ? b->image_yscale : 1.0;
    double ax = a->x - fa->origin_x * fabs(xs1);
    double ay = a->y - fa->origin_y * fabs(ys1);
    double bx = b->x - fb->origin_x * fabs(xs2);
    double by = b->y - fb->origin_y * fabs(ys2);
    double ar = ax + fa->width * fabs(xs1), ab = ay + fa->height * fabs(ys1);
    double br = bx + fb->width * fabs(xs2), bb = by + fb->height * fabs(ys2);
    int left = (int)ceil(fmax(ax, bx)), top = (int)ceil(fmax(ay, by));
    int right = (int)floor(fmin(ar, br)), bottom = (int)floor(fmin(ab, bb));
    for (int py = top; py < bottom; py++) {
        for (int px = left; px < right; px++) {
            int a_x = (int)((px - ax) / fabs(xs1));
            int a_y = (int)((py - ay) / fabs(ys1));
            int b_x = (int)((px - bx) / fabs(xs2));
            int b_y = (int)((py - by) / fabs(ys2));
            if (xs1 < 0) a_x = fa->width - 1 - a_x;
            if (ys1 < 0) a_y = fa->height - 1 - a_y;
            if (xs2 < 0) b_x = fb->width - 1 - b_x;
            if (ys2 < 0) b_y = fb->height - 1 - b_y;
            if (gm82_frame_test_pixel(fa, a_x, a_y) &&
                gm82_frame_test_pixel(fb, b_x, b_y)) return true;
        }
    }
    return false;
}

static void resolve_solid_contact(gm82_runtime *rt, gm82_instance *moving,
                                  const gm82_instance *solid) {
    if (!rt || !moving || !solid || !moving->alive || !solid->alive) return;
    gm82_collision_box now = instance_collision_box(rt, moving);
    gm82_collision_box old = now;
    double old_x = moving->xprevious, old_y = moving->yprevious;
    double saved_x = moving->x, saved_y = moving->y;
    moving->x = old_x; moving->y = old_y;
    old = instance_collision_box(rt, moving);
    moving->x = saved_x; moving->y = saved_y;
    gm82_collision_box wall = instance_collision_box(rt, solid);
    int vertical = 0;
    if (old.bottom <= wall.top && now.bottom > wall.top && moving->vspeed >= 0.0) {
        moving->y += wall.top - now.bottom;
        moving->vspeed = 0.0;
        moving->on_ground = 1;
        vertical = 1;
    } else if (old.top >= wall.bottom && now.top < wall.bottom && moving->vspeed <= 0.0) {
        moving->y += wall.bottom - now.top;
        moving->vspeed = 0.0;
        moving->on_ceiling = 1;
        vertical = 1;
    }
    if (vertical) return;
    if (old.right <= wall.left && now.right > wall.left && moving->hspeed >= 0.0) {
        moving->x += wall.left - now.right;
        moving->hspeed = 0.0;
        moving->hit_right = 1;
    } else if (old.left >= wall.right && now.left < wall.right && moving->hspeed <= 0.0) {
        moving->x += wall.right - now.left;
        moving->hspeed = 0.0;
        moving->hit_left = 1;
    } else {
        /* Corner/teleport fallback: constrain the smaller penetration axis,
           rather than rewinding both coordinates and losing valid motion. */
        double px = fmin(fabs(now.right - wall.left), fabs(wall.right - now.left));
        double py = fmin(fabs(now.bottom - wall.top), fabs(wall.bottom - now.top));
        if (py <= px) {
            moving->y = moving->yprevious;
            moving->vspeed = 0.0;
            if (moving->y <= wall.top) moving->on_ground = 1;
            else moving->on_ceiling = 1;
        } else {
            moving->x = moving->xprevious;
            moving->hspeed = 0.0;
        }
    }
}

void gm82_runtime_step(gm82_runtime *rt) {
    if (!rt || !rt->running) return;
    if (rt->perf_enabled) {
        rt->perf.frames++;
        rt->perf_active_phase = GM82_PHASE_IDLE;
        rt->perf_last_ns = perf_now_ns();
    }
    rt->frame++;
    perf_set_phase(rt, GM82_PHASE_IDLE);
    {
        double sec = (rt->room_speed > 0) ? (1.0 / (double)rt->room_speed) : (1.0/30.0);
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

    perf_set_phase(rt, GM82_PHASE_BEGIN_STEP);
    gm82_events_fire_begin_step_all(rt);

    perf_set_phase(rt, GM82_PHASE_ALARM);
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
                    if (rt->current_room != room_before) {
                        /* A room transition aborts the rest of this frame,
                           but must not leave the runtime stuck in Alarm. */
                        perf_set_phase(rt, GM82_PHASE_IDLE);
                        return;
                    }
                }
            }
        }
    }

    perf_set_phase(rt, GM82_PHASE_INPUT);
    gm82_events_fire_keyboard_all(rt);
    gm82_events_fire_keypress_all(rt);
    gm82_events_fire_keyrelease_all(rt);
    gm82_events_fire_mouse_all(rt);
    perf_set_phase(rt, GM82_PHASE_STEP);
    gm82_events_fire_step_all(rt);

    perf_set_phase(rt, GM82_PHASE_MOTION_COLLISION);
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
        typedef struct {
            double left, top, right, bottom;
            int valid;
        } collision_box;
        int16_t head[HASH];
        int16_t next_i[GM82_MAX_INSTANCES];
        collision_box boxes[GM82_MAX_INSTANCES];
        memset(boxes, 0, sizeof(boxes));
        for (int i = 0; i < HASH; i++) head[i] = -1;
        const int n_col = rt->instance_count < GM82_MAX_INSTANCES ?
                          rt->instance_count : GM82_MAX_INSTANCES;
        for (int i = 0; i < n_col && i < GM82_MAX_INSTANCES; i++) {
            next_i[i] = -1;
            gm82_instance *inst = &rt->instances[i];
            if (!inst->alive) continue;
            int32_t sw = 16, sh = 16, sox = 0, soy = 0;
            if (rt->sprites && inst->sprite_index >= 0 && inst->sprite_index < rt->sprites->count) {
                const gm82_decoded_frame *frame = &rt->sprites->frames[inst->sprite_index];
                sw = frame->width; sh = frame->height;
                sox = frame->origin_x; soy = frame->origin_y;
            }
            double xs = inst->image_xscale != 0.0 ? inst->image_xscale : 1.0;
            double ys = inst->image_yscale != 0.0 ? inst->image_yscale : 1.0;
            sw = (int32_t)(sw * xs); sh = (int32_t)(sh * ys);
            sox = (int32_t)(sox * xs); soy = (int32_t)(soy * ys);
            if (sw < 1) sw = 1;
            if (sh < 1) sh = 1;
            boxes[i].left = inst->x - sox;
            boxes[i].top = inst->y - soy;
            boxes[i].right = boxes[i].left + sw;
            boxes[i].bottom = boxes[i].top + sh;
            boxes[i].valid = 1;
            int cx = (int)(inst->x / CELL), cy = (int)(inst->y / CELL);
            unsigned h = (unsigned)((cx * 73856093) ^ (cy * 19349663)) & (HASH - 1);
            next_i[i] = head[h];
            head[h] = (int16_t)i;
        }
        for (int i = 0; i < n_col; i++) {
            gm82_instance *inst = &rt->instances[i];
            if (!inst->alive || !boxes[i].valid) continue;
            double ax1 = boxes[i].left, ay1 = boxes[i].top;
            double ax2 = boxes[i].right, ay2 = boxes[i].bottom;
            int cx0 = (int)(ax1 / CELL) - 1, cy0 = (int)(ay1 / CELL) - 1;
            int cx1 = (int)(ax2 / CELL) + 1, cy1 = (int)(ay2 / CELL) + 1;
            for (int cy = cy0; cy <= cy1; cy++) {
                for (int cx = cx0; cx <= cx1; cx++) {
                    unsigned h = (unsigned)((cx * 73856093) ^ (cy * 19349663)) & (HASH - 1);
                        for (int j = head[h]; j >= 0; j = next_i[j]) {
                            if (j <= i) continue;
                            gm82_instance *other = &rt->instances[j];
                            if (!other->alive || !boxes[j].valid) continue;
                            if (rt->perf_enabled) rt->perf.collision_candidates++;
                            double bx1 = boxes[j].left, by1 = boxes[j].top;
                            double bx2 = boxes[j].right, by2 = boxes[j].bottom;
                            if (ax2 <= bx1 || bx2 <= ax1 || ay2 <= by1 || by2 <= ay1) continue;
                            if (rt->perf_enabled) rt->perf.collision_overlaps++;
                        /* Rotation remains on the AABB fallback until the
                           renderer supplies a rotated mask. */
                        if (inst->image_angle == 0.0 && other->image_angle == 0.0 &&
                            !precise_instance_overlap(rt, inst, other)) continue;
                        gm82_events_fire_collision(rt, inst, other);
                        if (inst->alive && other->alive) gm82_events_fire_collision(rt, other, inst);
                        if (other->solid) resolve_solid_contact(rt, inst, other);
                        if (inst->solid && !other->solid) resolve_solid_contact(rt, other, inst);
                    }
                }
            }
        }
    }

    /* The hashed broad phase indexes only the final position. If an instance
       travels across several cells in one frame, its crossed solid may never
       become a candidate. Sweep only these exceptional fast movers against
       solid instances; ordinary movement stays on the spatial-hash path. */
    for (int i = 0; i < rt->instance_count && i < GM82_MAX_INSTANCES; i++) {
        gm82_instance *moving = &rt->instances[i];
        if (!moving->alive || moving->solid) continue;
        if (fabs(moving->x - moving->xprevious) <= 64.0 &&
            fabs(moving->y - moving->yprevious) <= 64.0) continue;
        for (int j = 0; j < rt->instance_count && j < GM82_MAX_INSTANCES; j++) {
            gm82_instance *solid = &rt->instances[j];
            if (i == j || !solid->alive || !solid->solid) continue;
            if (!swept_solid_crossing(rt, moving, solid)) continue;
            gm82_events_fire_collision(rt, moving, solid);
            if (moving->alive && solid->alive)
                gm82_events_fire_collision(rt, solid, moving);
            if (moving->alive && solid->alive)
                resolve_solid_contact(rt, moving, solid);
        }
    }

    if (rt->view_enabled && rt->view_w > 0) {
        gm82_instance *follow_inst = NULL;
        for (int i = 0; i < rt->instance_count; i++) {
            if (rt->instances[i].alive) {
                if (rt->view_follow_object >= 0 && rt->instances[i].object_index == rt->view_follow_object) {
                    follow_inst = &rt->instances[i];
                    break;
                }
                if (!follow_inst) follow_inst = &rt->instances[i];
            }
        }
        if (follow_inst) {
            double hborder = rt->view_w * 0.4;
            double left = rt->view_x + hborder;
            double right = rt->view_x + rt->view_w - hborder;
            if (follow_inst->x < left) rt->view_x -= (left - follow_inst->x);
            if (follow_inst->x > right) rt->view_x += (follow_inst->x - right);
            if (rt->view_x < 0) rt->view_x = 0;
            if (rt->room_width > rt->view_w && rt->view_x + rt->view_w > rt->room_width)
                rt->view_x = rt->room_width - rt->view_w;
        }
    }

    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        if (inst->image_speed != 0.0) {
            double next_image_index = inst->image_index + inst->image_speed;
            bool animation_wrapped = false;
            if (rt->sprite_groups && inst->sprite_index >= 0) {
                int gi = gm82_sprite_group_index_for_frame(rt->sprite_groups, inst->sprite_index);
                if (gi >= 0) {
                    int fc = rt->sprite_groups->items[gi].frame_count;
                    if (fc > 0 && isfinite(next_image_index)) {
                        double raw_image_index = next_image_index;
                        next_image_index = fmod(next_image_index, (double)fc);
                        if (next_image_index < 0.0) next_image_index += fc;
                        animation_wrapped = (next_image_index != raw_image_index);
                    }
                }
            }
            inst->image_index = next_image_index;
            if (animation_wrapped && inst->alive)
                gm82_events_fire_other(rt, inst, GM82_OTHER_ANIMATION_END);
        }
    }

    perf_set_phase(rt, GM82_PHASE_END_STEP);
    gm82_events_fire_end_step_all(rt);
    gm82_events_fire_outside_all(rt);
    gm82_events_fire_boundary_all(rt);
    gm82_runtime_flush_destroy_queue(rt);
    perf_set_phase(rt, GM82_PHASE_IDLE);
}

static void blend_rgba(uint8_t *dst, const uint8_t *src) {
    unsigned sa = src[3], da = dst[3], inv = 255u - sa;
    unsigned out_a = sa + (da * inv + 127u) / 255u;
    if (!out_a) { dst[0] = dst[1] = dst[2] = dst[3] = 0; return; }
    for (int c = 0; c < 3; c++) {
        unsigned premul = (unsigned)src[c] * sa * 255u + (unsigned)dst[c] * da * inv;
        dst[c] = (uint8_t)((premul + out_a * 127u) / (out_a * 255u));
    }
    dst[3] = (uint8_t)out_a;
}

static void blit(uint8_t *dst, int dw, int dh, const uint8_t *src, int sw, int sh, int dx, int dy) {
    if (!dst || !src || dw <= 0 || dh <= 0 || sw <= 0 || sh <= 0) return;
    for (int y = 0; y < sh; y++) {
        int yy = dy + y;
        if (yy < 0 || yy >= dh) continue;
        for (int x = 0; x < sw; x++) {
            int xx = dx + x;
            if (xx < 0 || xx >= dw) continue;
            const uint8_t *s = src + ((size_t)y * (size_t)sw + (size_t)x) * 4u;
            if (s[3] == 0) continue;
            uint8_t *d = dst + ((size_t)yy * (size_t)dw + (size_t)xx) * 4u;
            blend_rgba(d, s);
        }
    }
}

bool gm82_runtime_draw(gm82_runtime *rt, uint8_t *rgba, int32_t buf_w, int32_t buf_h) {
    if (!rt || !rgba || buf_w <= 0 || buf_h <= 0) return false;
    if (rt->perf_enabled) {
        rt->perf.draw_frames++;
        rt->perf_active_phase = GM82_PHASE_IDLE;
        rt->perf_last_ns = perf_now_ns();
    }
    if ((size_t)buf_w > (size_t)-1 / (size_t)buf_h) return false;
    size_t pixels = (size_t)buf_w * (size_t)buf_h;
    if (pixels > (size_t)-1 / 4u) return false;

    gm82_draw_set_target(rgba, buf_w, buf_h);
    for (size_t i = 0; i < pixels; i++) {
        rgba[i * 4u + 0u] = 20;
        rgba[i * 4u + 1u] = 20;
        rgba[i * 4u + 2u] = 40;
        rgba[i * 4u + 3u] = 255;
    }

    if (rt->backgrounds && rt->backgrounds->count > 0 && rt->backgrounds->items[0].rgba) {
        const gm82_decoded_background *bg = &rt->backgrounds->items[0];
        int has_tiles = (rt->rooms && rt->current_room >= 0 && rt->current_room < rt->rooms->count
                         && rt->rooms->items[rt->current_room].tile_count > 0);
        if (!has_tiles)
            blit(rgba, buf_w, buf_h, bg->rgba, bg->width, bg->height, -(int)rt->view_x, -(int)rt->view_y);
    }

    if (rt->rooms && rt->backgrounds && rt->current_room >= 0 && rt->current_room < rt->rooms->count) {
        const gm82_decoded_room *room = &rt->rooms->items[rt->current_room];
        for (int ti = 0; ti < room->tile_count; ti++) {
            const gm82_decoded_tile *tile = &room->tiles[ti];
            if (tile->background_index < 0 || tile->background_index >= rt->backgrounds->count)
                continue;
            const gm82_decoded_background *bg = &rt->backgrounds->items[tile->background_index];
            if (!bg->rgba || bg->width <= 0 || bg->height <= 0 || tile->width <= 0 || tile->height <= 0) continue;
            int tw = tile->width, th = tile->height;
            for (int y = 0; y < th; y++) {
                int sy = tile->yo + y, dy = tile->y + y - (int)rt->view_y;
                if (sy < 0 || sy >= bg->height || dy < 0 || dy >= buf_h) continue;
                for (int x = 0; x < tw; x++) {
                    int sx = tile->xo + x, dx = tile->x + x - (int)rt->view_x;
                    if (sx < 0 || sx >= bg->width || dx < 0 || dx >= buf_w) continue;
                    const uint8_t *s = bg->rgba + ((size_t)sy * (size_t)bg->width + (size_t)sx) * 4;
                    if (s[3] == 0) continue;
                    uint8_t *d = rgba + ((size_t)dy * (size_t)buf_w + (size_t)dx) * 4u;
                    blend_rgba(d, s);
                }
            }
        }
    }

    perf_set_phase(rt, GM82_PHASE_PRE_DRAW);
    gm82_events_fire_pre_draw_all(rt);
    perf_set_phase(rt, GM82_PHASE_DRAW);

    int order[GM82_MAX_INSTANCES];
    int n = 0;
    for (int i = 0; i < rt->instance_count && n < GM82_MAX_INSTANCES; i++)
        if (rt->instances[i].alive && rt->instances[i].visible)
            order[n++] = i;
    for (int i = 1; i < n; i++) {
        int key = order[i];
        int j = i - 1;
        while (j >= 0 && rt->instances[order[j]].depth < rt->instances[key].depth) {
            order[j+1] = order[j];
            j--;
        }
        order[j+1] = key;
    }

    for (int k = 0; k < n; k++) {
        gm82_instance *inst = &rt->instances[order[k]];
        if (!inst->alive || !inst->visible) continue;
        gm82_gml_set_self(inst);
        if (gm82_events_has_draw_event(rt, inst)) {
            gm82_events_fire_draw_single(rt, inst);
        } else if (inst->sprite_index >= 0) {
            double dx = inst->x - rt->view_x;
            double dy = inst->y - rt->view_y;
            gml_draw_sprite_ext((double)inst->sprite_index, (double)inst->image_index,
                                dx, dy,
                                inst->image_xscale,
                                inst->image_yscale,
                                inst->image_angle,
                                (double)inst->image_blend,
                                inst->image_alpha);
        }
    }
    perf_set_phase(rt, GM82_PHASE_POST_DRAW);
    gm82_events_fire_post_draw_all(rt);
    gm82_runtime_flush_destroy_queue(rt);
    perf_set_phase(rt, GM82_PHASE_IDLE);
    return true;
}

void gm82_runtime_event_user(gm82_runtime *rt, int user_event_index) {
    if (!rt || user_event_index < 0 || user_event_index > 15) return;
    gm82_instance *self = gm82_gml_get_self();
    if (self && self->alive) {
        gm82_events_fire_user(rt, self, user_event_index);
        return;
    }
    gm82_instance *snapshot[GM82_MAX_INSTANCES];
    int count = gm82_runtime_get_active_snapshot(rt, snapshot);
    for (int i = 0; i < count; i++)
        if (snapshot[i] && snapshot[i]->alive)
            gm82_events_fire_user(rt, snapshot[i], user_event_index);
}
