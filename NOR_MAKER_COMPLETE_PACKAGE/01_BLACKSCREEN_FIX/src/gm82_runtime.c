#define _POSIX_C_SOURCE 200809L
#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_events.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void gm82_runtime_init(gm82_runtime *rt) {
    memset(rt, 0, sizeof(*rt));
    rt->next_id = 100001;
    rt->room_speed = 30;
    rt->room_width = 640;
    rt->room_height = 480;
}

void gm82_runtime_set_room_speed(gm82_runtime *rt, int speed) {
    if (!rt) return;
    if (speed < 1) speed = 30;
    if (speed > 240) speed = 240;
    rt->room_speed = speed;
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

int gm82_runtime_get_active_snapshot(gm82_runtime *rt, gm82_instance **out_ptrs) {
    if (!rt || !out_ptrs) return 0;
    int count = 0;
    for (int i = 0; i < rt->instance_count && count < GM82_MAX_INSTANCES; i++) {
        if (rt->instances[i].alive) {
            out_ptrs[count++] = &rt->instances[i];
        }
    }
    return count;
}

void gm82_runtime_compact_instances(gm82_runtime *rt) {
    if (!rt) return;
    int w = 0;
    for (int i = 0; i < rt->instance_count; i++) {
        if (rt->instances[i].alive) {
            if (w != i) rt->instances[w] = rt->instances[i];
            w++;
        }
    }
    rt->instance_count = w;
}

gm82_instance *gm82_runtime_instance_find_by_id(gm82_runtime *rt, int32_t id) {
    if (!rt || id <= 0) return NULL;
    for (int i = 0; i < rt->instance_count; i++) {
        if (rt->instances[i].alive && rt->instances[i].id == id) {
            return &rt->instances[i];
        }
    }
    return NULL;
}

gm82_instance *gm82_runtime_instance_create(gm82_runtime *rt, int32_t object_index, double x, double y) {
    if (!rt || rt->instance_count >= GM82_MAX_INSTANCES) return NULL;
    gm82_instance *inst = &rt->instances[rt->instance_count++];
    memset(inst, 0, sizeof(*inst));
    inst->id = rt->next_id++;
    inst->x = x; inst->y = y;
    inst->xprevious = x; inst->yprevious = y;
    inst->image_xscale = 1.0; inst->image_yscale = 1.0;
    inst->alive = 1;
    for (int i = 0; i < 12; i++) inst->alarms[i] = -1;
    apply_object_defaults(rt, inst, object_index);
    gm82_events_fire_create_single(rt, inst);
    return inst;
}

void gm82_runtime_instance_destroy(gm82_runtime *rt, gm82_instance *inst) {
    if (!inst || !inst->alive) return;
    gm82_events_fire_destroy(rt, inst);
    inst->alive = 0;
}

bool gm82_runtime_goto_room(gm82_runtime *rt, int room_index) {
    if (!rt || !rt->rooms || room_index < 0 || room_index >= rt->rooms->count)
        return false;

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
        gm82_instance *inst = gm82_runtime_instance_create(rt, src->object_index, (double)src->x, (double)src->y);
        if (inst && src->id > 0) inst->id = src->id;
    }
    rt->running = 1;
    rt->frame = 0;
    gm82_events_fire_create_all(rt);
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
    {
        double sec = (rt->room_speed > 0) ? (1.0 / (double)rt->room_speed) : (1.0/30.0);
        gm82_gml_set_frame_time(sec);
    }

    /* Update xprevious / yprevious for all active instances */
    {
        gm82_instance *snapshot[GM82_MAX_INSTANCES];
        int count = gm82_runtime_get_active_snapshot(rt, snapshot);
        for (int i = 0; i < count; i++) {
            gm82_instance *inst = snapshot[i];
            if (!inst->alive) continue;
            inst->xprevious = inst->x;
            inst->yprevious = inst->y;
        }
    }

    /* 1. Begin Step */
    gm82_events_fire_begin_step_all(rt);

    /* 2. Alarm Events */
    {
        gm82_instance *snapshot[GM82_MAX_INSTANCES];
        int count = gm82_runtime_get_active_snapshot(rt, snapshot);
        for (int i = 0; i < count; i++) {
            gm82_instance *inst = snapshot[i];
            if (!inst->alive) continue;
            for (int a = 0; a < 12; a++) {
                if (inst->alarms[a] > 0) {
                    inst->alarms[a]--;
                    if (inst->alarms[a] == 0) {
                        gm82_events_fire_alarm(rt, inst, a);
                        inst->alarms[a] = -1;
                    }
                }
            }
        }
    }

    /* 3. Path & Movement Updates */
    {
        gm82_instance *snapshot[GM82_MAX_INSTANCES];
        int count = gm82_runtime_get_active_snapshot(rt, snapshot);
        for (int i = 0; i < count; i++) {
            gm82_instance *inst = snapshot[i];
            if (!inst->alive) continue;

            if (inst->speed != 0.0)
                update_speed_from_dir(inst);

            if (inst->path_index >= 0 && inst->path_speed != 0.0)
                gm82_path_step_instance(inst);
            if (inst->timeline_running)
                gm82_timeline_step_instance(rt, inst);

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
                else if (inst->vspeed < 0) { inst->vspeed += f; if (inst->vspeed < 0) inst->vspeed = 0; }
            }

            inst->x += inst->hspeed;
            inst->y += inst->vspeed;
        }
    }

    /* 4. Collision Detection */
    {
        gm82_instance *snapshot[GM82_MAX_INSTANCES];
        int count = gm82_runtime_get_active_snapshot(rt, snapshot);
        for (int i = 0; i < count; i++) {
            gm82_instance *inst = snapshot[i];
            if (!inst->alive) continue;

            /* Room boundary verification after movement */
            if (inst->x < -2048.0 || inst->x > rt->room_width + 2048.0 ||
                inst->y < -2048.0 || inst->y > rt->room_height + 2048.0) {
                /* Outside room boundary safety check */
                (void)0;
            }

            double sw = 16.0, sh = 16.0, ox = 0.0, oy = 0.0;
            if (rt->sprites && inst->sprite_index >= 0 && inst->sprite_index < rt->sprites->count) {
                const gm82_decoded_frame *fr = &rt->sprites->frames[inst->sprite_index];
                sw = (double)fr->width;
                sh = (double)fr->height;
                ox = (double)fr->origin_x;
                oy = (double)fr->origin_y;
            }
            double xs = inst->image_xscale != 0.0 ? inst->image_xscale : 1.0;
            double ys = inst->image_yscale != 0.0 ? inst->image_yscale : 1.0;

            double left1 = inst->x - ox * xs;
            double right1 = inst->x + (sw - ox) * xs;
            double top1 = inst->y - oy * ys;
            double bottom1 = inst->y + (sh - oy) * ys;

            double ax1 = left1 < right1 ? left1 : right1;
            double ax2 = left1 > right1 ? left1 : right1;
            double ay1 = top1 < bottom1 ? top1 : bottom1;
            double ay2 = top1 > bottom1 ? top1 : bottom1;

            for (int j = 0; j < count; j++) {
                if (i == j) continue;
                gm82_instance *other = snapshot[j];
                if (!other->alive || !inst->alive) continue;

                double ow = 16.0, oh = 16.0, oox = 0.0, ooy = 0.0;
                if (rt->sprites && other->sprite_index >= 0 && other->sprite_index < rt->sprites->count) {
                    const gm82_decoded_frame *fr = &rt->sprites->frames[other->sprite_index];
                    ow = (double)fr->width;
                    oh = (double)fr->height;
                    oox = (double)fr->origin_x;
                    ooy = (double)fr->origin_y;
                }
                double oxs = other->image_xscale != 0.0 ? other->image_xscale : 1.0;
                double oys = other->image_yscale != 0.0 ? other->image_yscale : 1.0;

                double left2 = other->x - oox * oxs;
                double right2 = other->x + (ow - oox) * oxs;
                double top2 = other->y - ooy * oys;
                double bottom2 = other->y + (oh - ooy) * oys;

                double bx1 = left2 < right2 ? left2 : right2;
                double bx2 = left2 > right2 ? left2 : right2;
                double by1 = top2 < bottom2 ? top2 : bottom2;
                double by2 = top2 > bottom2 ? top2 : bottom2;

                if (!(ax1 < bx2 && ax2 > bx1 && ay1 < by2 && ay2 > by1))
                    continue;

                gm82_events_fire_collision(rt, inst, other);
                if (other->solid && inst->alive) {
                    double overlap_x = (ax2 < bx2 ? ax2 : bx2) - (ax1 > bx1 ? ax1 : bx1);
                    double overlap_y = (ay2 < by2 ? ay2 : by2) - (ay1 > by1 ? ay1 : by1);
                    if (overlap_y <= overlap_x) {
                        if ((ay1 + ay2) * 0.5 < (by1 + by2) * 0.5) {
                            inst->y = by1 - (sh - oy) * (ys > 0 ? ys : -ys);
                            if (inst->vspeed > 0) inst->vspeed = 0;
                        } else {
                            inst->y = by2 + oy * (ys > 0 ? ys : -ys);
                            if (inst->vspeed < 0) inst->vspeed = 0;
                        }
                    } else {
                        if ((ax1 + ax2) * 0.5 < (bx1 + bx2) * 0.5) {
                            inst->x = bx1 - (sw - ox) * (xs > 0 ? xs : -xs);
                            if (inst->hspeed > 0) inst->hspeed = 0;
                        } else {
                            inst->x = bx2 + ox * (xs > 0 ? xs : -xs);
                            if (inst->hspeed < 0) inst->hspeed = 0;
                        }
                    }
                }
            }
        }
    }

    /* 5. Main Step */
    gm82_events_fire_step_all(rt);

    /* 6. End Step */
    gm82_events_fire_end_step_all(rt);

    /* Camera view updates */
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

    /* Update animation frame index */
    {
        gm82_instance *snapshot[GM82_MAX_INSTANCES];
        int count = gm82_runtime_get_active_snapshot(rt, snapshot);
        for (int i = 0; i < count; i++) {
            gm82_instance *inst = snapshot[i];
            if (!inst->alive) continue;
            if (inst->image_speed != 0.0)
                inst->image_index += (int32_t)(inst->image_speed > 0 ? 1 : -1);
        }
    }

    /* End-of-step pool compaction */
    gm82_runtime_compact_instances(rt);
}

static void blit(uint8_t *dst, int dw, int dh, const uint8_t *src, int sw, int sh, int dx, int dy) {
    for (int y = 0; y < sh; y++) {
        int yy = dy + y;
        if (yy < 0 || yy >= dh) continue;
        for (int x = 0; x < sw; x++) {
            int xx = dx + x;
            if (xx < 0 || xx >= dw) continue;
            const uint8_t *s = src + (y * sw + x) * 4;
            if (s[3] == 0) continue;
            uint8_t *d = dst + (yy * dw + xx) * 4;
            d[0]=s[0]; d[1]=s[1]; d[2]=s[2]; d[3]=255;
        }
    }
}

bool gm82_runtime_draw(gm82_runtime *rt, uint8_t *rgba, int32_t buf_w, int32_t buf_h) {
    if (!rt || !rgba || buf_w <= 0 || buf_h <= 0) return false;

    /* 7. Pre-Draw: Surface Clear & Buffer Setup */
    for (int i = 0; i < buf_w * buf_h; i++) {
        rgba[i*4+0]=20; rgba[i*4+1]=20; rgba[i*4+2]=40; rgba[i*4+3]=255;
    }
    gm82_events_fire_pre_draw_all(rt);

    /* 8. Draw Pipeline: Background, Tile layers & Instances */
    if (rt->backgrounds && rt->backgrounds->count > 0 && rt->backgrounds->items[0].rgba) {
        const gm82_decoded_background *bg = &rt->backgrounds->items[0];
        int has_tiles = (rt->rooms && rt->current_room >= 0 && rt->current_room < rt->rooms->count
                         && rt->rooms->items[rt->current_room].tile_count > 0);
        if (!has_tiles)
            blit(rgba, buf_w, buf_h, bg->rgba, bg->width, bg->height, 0, 0);
    }

    if (rt->rooms && rt->backgrounds && rt->current_room >= 0 && rt->current_room < rt->rooms->count) {
        const gm82_decoded_room *room = &rt->rooms->items[rt->current_room];
        int tile_order[2048];
        int tc = room->tile_count < 2048 ? room->tile_count : 2048;
        for (int i = 0; i < tc; i++) tile_order[i] = i;
        for (int i = 1; i < tc; i++) {
            int key = tile_order[i];
            int j = i - 1;
            while (j >= 0 && room->tiles[tile_order[j]].depth < room->tiles[key].depth) {
                tile_order[j+1] = tile_order[j];
                j--;
            }
            tile_order[j+1] = key;
        }

        for (int k = 0; k < tc; k++) {
            const gm82_decoded_tile *tile = &room->tiles[tile_order[k]];
            if (tile->background_index < 0 || tile->background_index >= rt->backgrounds->count)
                continue;
            const gm82_decoded_background *bg = &rt->backgrounds->items[tile->background_index];
            if (!bg->rgba) continue;
            int tw = tile->width, th = tile->height;
            for (int y = 0; y < th; y++) {
                int sy = tile->yo + y, dy = tile->y + y - (int)rt->view_y;
                if (sy < 0 || sy >= bg->height || dy < 0 || dy >= buf_h) continue;
                for (int x = 0; x < tw; x++) {
                    int sx = tile->xo + x, dx = tile->x + x - (int)rt->view_x;
                    if (sx < 0 || sx >= bg->width || dx < 0 || dx >= buf_w) continue;
                    const uint8_t *s = bg->rgba + ((size_t)sy * (size_t)bg->width + (size_t)sx) * 4;
                    if (s[3] == 0) continue;
                    uint8_t *d = rgba + ((size_t)dy * (size_t)buf_w + (size_t)dx) * 4;
                    d[0]=s[0]; d[1]=s[1]; d[2]=s[2]; d[3]=255;
                }
            }
        }
    }

    gm82_events_fire_draw_all(rt);

    gm82_instance *snapshot[GM82_MAX_INSTANCES];
    int count = gm82_runtime_get_active_snapshot(rt, snapshot);
    int order[GM82_MAX_INSTANCES];
    int n = 0;
    for (int i = 0; i < count; i++) {
        if (snapshot[i]->alive && snapshot[i]->visible)
            order[n++] = i;
    }
    for (int i = 1; i < n; i++) {
        int key = order[i];
        int j = i - 1;
        while (j >= 0 && snapshot[order[j]]->depth < snapshot[key]->depth) {
            order[j+1] = order[j];
            j--;
        }
        order[j+1] = key;
    }

    for (int k = 0; k < n; k++) {
        gm82_instance *inst = snapshot[order[k]];
        if (!inst->alive || !inst->visible) continue;
        int si = inst->sprite_index;
        if (rt->sprite_groups)
            si = gm82_sprite_resolve_frame(rt->sprite_groups, inst->sprite_index, inst->image_index);
        if (!rt->sprites || si < 0 || si >= rt->sprites->count)
            continue;
        const gm82_decoded_frame *fr = &rt->sprites->frames[si];
        if (!fr->rgba) continue;
        {
            int dx = (int)inst->x - (int)rt->view_x;
            int dy = (int)inst->y - (int)rt->view_y;
            blit(rgba, buf_w, buf_h, fr->rgba, fr->width, fr->height, dx, dy);
        }
    }

    /* 9. Post-Draw / Draw GUI */
    gm82_events_fire_post_draw_all(rt);

    return true;
}

void gm82_runtime_event_user(gm82_runtime *rt, int user_event_index) {
    if (!rt || user_event_index < 0 || user_event_index > 11) return;
    (void)user_event_index;
}
