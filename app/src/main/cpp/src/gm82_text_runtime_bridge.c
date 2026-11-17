#define _POSIX_C_SOURCE 200809L
#include "gm82_text_runtime_bridge.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void free_name_table(char **names, int count) {
    if (!names) return;
    for (int i = 0; i < count; ++i) free(names[i]);
    free(names);
}

/* Copies an IR name into a fixed-size char array field. */
static void copy_name(char *dst, size_t dst_size, const char *src) {
    if (!dst || dst_size == 0) return;
    if (!src) { dst[0] = '\0'; return; }
    strncpy(dst, src, dst_size - 1);
    dst[dst_size - 1] = '\0';
}

static bool build_sprites(const gm82_project_ir *ir, gm82_text_runtime_bundle *b) {
    gm82_decoded_sprite_list *L = &b->sprites;
    gm82_decoded_sprite_list_init(L);

    if (ir->sprite_count > 0) {
        b->sprite_names = (char **)calloc((size_t)ir->sprite_count, sizeof(char *));
        if (!b->sprite_names) return false;
        b->sprite_name_count = ir->sprite_count;
        for (int32_t i = 0; i < ir->sprite_count; ++i) {
            b->sprite_names[i] = strdup(ir->sprites[i].name ? ir->sprites[i].name : "");
        }
    }

    if (ir->decoded_frames.count > 0) {
        int nf = ir->decoded_frames.count;
        L->frames = (gm82_decoded_frame *)calloc((size_t)nf, sizeof(*L->frames));
        if (!L->frames) return false;
        L->capacity = nf;
        L->count = nf;
        for (int i = 0; i < nf; ++i) {
            L->frames[i] = ir->decoded_frames.frames[i];
            L->frames[i].bitmask = NULL;
            L->frames[i].bitmask_size = 0;
            gm82_frame_build_bitmask(&L->frames[i], 16);
        }
        if (ir->sprite_groups.count > 0 && ir->sprite_groups.items) {
            b->sprite_groups.items = (gm82_sprite_group *)malloc((size_t)ir->sprite_groups.count * sizeof(gm82_sprite_group));
            if (b->sprite_groups.items) {
                memcpy(b->sprite_groups.items, ir->sprite_groups.items, (size_t)ir->sprite_groups.count * sizeof(gm82_sprite_group));
                b->sprite_groups.count = ir->sprite_groups.count;
            }
        }
        return true;
    }

    if (ir->sprite_count <= 0) return true;
    L->frames = (gm82_decoded_frame *)calloc((size_t)ir->sprite_count, sizeof(*L->frames));
    if (!L->frames) return false;
    L->capacity = ir->sprite_count;
    L->count = ir->sprite_count;
    for (int32_t i = 0; i < ir->sprite_count; ++i) {
        const gm82_res_sprite *s = &ir->sprites[i];
        gm82_decoded_frame *f = &L->frames[i];
        copy_name(f->name, sizeof(f->name), s->name);
        f->width = s->width;
        f->height = s->height;
        f->origin_x = s->origin_x;
        f->origin_y = s->origin_y;
        f->rgba = s->rgba;
        f->rgba_size = s->rgba_size;
        gm82_frame_build_bitmask(f, 16);
    }
    return true;
}

static bool build_backgrounds(const gm82_project_ir *ir, gm82_text_runtime_bundle *b) {
    gm82_decoded_background_list *L = &b->backgrounds;
    gm82_decoded_background_list_init(L);
    if (ir->background_count <= 0) return true;

    L->items = (gm82_decoded_background *)calloc((size_t)ir->background_count, sizeof(*L->items));
    if (!L->items) return false;
    L->capacity = ir->background_count;
    L->count = ir->background_count;

    b->background_names = (char **)calloc((size_t)ir->background_count, sizeof(char *));
    if (!b->background_names) return false;
    b->background_name_count = ir->background_count;

    for (int32_t i = 0; i < ir->background_count; ++i) {
        const gm82_res_background *bg = &ir->backgrounds[i];
        gm82_decoded_background *d = &L->items[i];
        copy_name(d->name, sizeof(d->name), bg->name);
        d->width = bg->width;
        d->height = bg->height;
        d->rgba = bg->rgba;
        d->rgba_size = bg->rgba_size;
        b->background_names[i] = strdup(bg->name ? bg->name : "");
    }
    return true;
}

static bool clone_event(const gm82_decoded_event *src, gm82_decoded_event *dst) {
    *dst = *src;
    dst->code_snippet = src->code_snippet ? strdup(src->code_snippet) : NULL;
    dst->actions = NULL;
    dst->action_cap = 0;
    if (src->action_count > 0 && src->actions) {
        dst->actions = (gm82_decoded_action *)calloc((size_t)src->action_count, sizeof(gm82_decoded_action));
        if (!dst->actions) return false;
        dst->action_cap = src->action_count;
        for (int i = 0; i < src->action_count; i++) {
            dst->actions[i] = src->actions[i];
            dst->actions[i].fn_code = src->actions[i].fn_code ? strdup(src->actions[i].fn_code) : NULL;
            for (int k = 0; k < 8; k++) {
                dst->actions[i].arg_strs[k] = src->actions[i].arg_strs[k] ? strdup(src->actions[i].arg_strs[k]) : NULL;
            }
        }
    }
    return true;
}

static bool build_objects(const gm82_project_ir *ir, gm82_text_runtime_bundle *b) {
    gm82_decoded_object_list *L = &b->objects;
    gm82_decoded_object_list_init(L);

    int obj_cnt = ir->decoded_objects.count > 0 ? ir->decoded_objects.count : ir->object_count;
    if (obj_cnt <= 0) return true;

    L->items = (gm82_decoded_object *)calloc((size_t)obj_cnt, sizeof(*L->items));
    if (!L->items) return false;
    L->count = obj_cnt;

    b->object_names = (char **)calloc((size_t)obj_cnt, sizeof(char *));
    if (!b->object_names) return false;
    b->object_name_count = obj_cnt;

    for (int32_t i = 0; i < obj_cnt; ++i) {
        gm82_decoded_object *o = &L->items[i];
        if (i < ir->decoded_objects.count && ir->decoded_objects.items) {
            const gm82_decoded_object *src = &ir->decoded_objects.items[i];
            *o = *src;
            for (int e = 0; e < src->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                clone_event(&src->events[e], &o->events[e]);
            }
            b->object_names[i] = strdup(o->name);
        } else {
            const char *name = (ir->object_names && i < ir->object_name_count && ir->object_names[i])
                             ? ir->object_names[i] : NULL;
            char tmp[32];
            if (!name) { snprintf(tmp, sizeof(tmp), "object%d", i); name = tmp; }
            copy_name(o->name, sizeof(o->name), name);
            o->sprite_index = -1;
            o->parent_index = -1;
            o->mask_index = -1;
            o->visible = 1;
            b->object_names[i] = strdup(name);
        }
    }
    return true;
}

static bool build_rooms(const gm82_project_ir *ir, gm82_text_runtime_bundle *b) {
    gm82_decoded_room_list *L = &b->rooms;
    gm82_decoded_room_list_init(L);
    if (ir->room_count <= 0) return true;

    L->items = (gm82_decoded_room *)calloc((size_t)ir->room_count, sizeof(*L->items));
    if (!L->items) return false;
    L->count = ir->room_count;

    for (int32_t i = 0; i < ir->room_count; ++i) {
        const gm82_res_room *r = &ir->rooms[i];
        gm82_decoded_room *d = &L->items[i];
        copy_name(d->name, sizeof(d->name), r->name);
        d->width = r->width;
        d->height = r->height;
        d->speed = r->speed;
        d->persistent = r->persistent ? 1 : 0;
        d->background_color = r->background_color;
        d->draw_background_color = r->draw_background_color ? 1 : 0;
        d->creation_code = r->creation_code ? strdup(r->creation_code) : NULL;
        d->views_enabled = r->views_enabled ? 1 : 0;

        for (int bi = 0; bi < 8 && bi < r->background_count; bi++) {
            d->backgrounds[bi].bg_index = r->background_ids ? r->background_ids[bi] : -1;
            d->backgrounds[bi].visible = r->background_visible ? (r->background_visible[bi] ? 1 : 0) : 0;
            d->backgrounds[bi].foreground = r->background_foreground ? (r->background_foreground[bi] ? 1 : 0) : 0;
            d->backgrounds[bi].x = r->background_x ? r->background_x[bi] : 0;
            d->backgrounds[bi].y = r->background_y ? r->background_y[bi] : 0;
            d->backgrounds[bi].htiled = r->background_htiled ? (r->background_htiled[bi] ? 1 : 0) : 0;
            d->backgrounds[bi].vtiled = r->background_vtiled ? (r->background_vtiled[bi] ? 1 : 0) : 0;
            d->backgrounds[bi].hspeed = r->background_hspeed ? r->background_hspeed[bi] : 0;
            d->backgrounds[bi].vspeed = r->background_vspeed ? r->background_vspeed[bi] : 0;
            d->backgrounds[bi].stretch = r->background_stretch ? (r->background_stretch[bi] ? 1 : 0) : 0;
        }
        for (int vi = 0; vi < 8 && vi < r->view_count && r->views; vi++) {
            d->views[vi].visible = r->views[vi].visible ? 1 : 0;
            d->views[vi].view_x = r->views[vi].view_x;
            d->views[vi].view_y = r->views[vi].view_y;
            d->views[vi].view_w = r->views[vi].view_w;
            d->views[vi].view_h = r->views[vi].view_h;
            d->views[vi].port_x = r->views[vi].port_x;
            d->views[vi].port_y = r->views[vi].port_y;
            d->views[vi].port_w = r->views[vi].port_w;
            d->views[vi].port_h = r->views[vi].port_h;
            d->views[vi].border_h = r->views[vi].border_h;
            d->views[vi].border_v = r->views[vi].border_v;
            d->views[vi].hspeed = r->views[vi].hspeed;
            d->views[vi].vspeed = r->views[vi].vspeed;
            d->views[vi].object_following = r->views[vi].object_following;
        }

        if (r->instance_count > 0 && r->instances) {
            d->instances = (gm82_decoded_instance *)calloc((size_t)r->instance_count, sizeof(*d->instances));
            if (!d->instances) return false;
            d->instance_count = r->instance_count;
            for (int32_t j = 0; j < r->instance_count; ++j) {
                d->instances[j].x = (int32_t)r->instances[j].x;
                d->instances[j].y = (int32_t)r->instances[j].y;
                d->instances[j].object_index = r->instances[j].object_id;
                d->instances[j].id = r->instances[j].id;
                d->instances[j].xscale = r->instances[j].xscale != 0.0 ? r->instances[j].xscale : 1.0;
                d->instances[j].yscale = r->instances[j].yscale != 0.0 ? r->instances[j].yscale : 1.0;
                d->instances[j].angle = r->instances[j].angle;
                d->instances[j].blend = r->instances[j].blend;
                d->instances[j].creation_code = r->instances[j].creation_code ? strdup(r->instances[j].creation_code) : NULL;
            }
        }

        if (r->tile_count > 0 && r->tiles) {
            d->tiles = (gm82_decoded_tile *)calloc((size_t)r->tile_count, sizeof(*d->tiles));
            if (!d->tiles) return false;
            d->tile_count = r->tile_count;
            for (int32_t j = 0; j < r->tile_count; ++j) {
                const gm82_room_tile *t = &r->tiles[j];
                d->tiles[j].x = t->x;
                d->tiles[j].y = t->y;
                d->tiles[j].background_index = t->background_id;
                d->tiles[j].xo = t->src_x;
                d->tiles[j].yo = t->src_y;
                d->tiles[j].width = t->width;
                d->tiles[j].height = t->height;
                d->tiles[j].depth = t->depth;
                d->tiles[j].id = t->id;
                d->tiles[j].xscale = t->xscale != 0.0 ? t->xscale : 1.0;
                d->tiles[j].yscale = t->yscale != 0.0 ? t->yscale : 1.0;
                d->tiles[j].blend = t->blend;
            }
        }
    }
    return true;
}

bool gm82_text_build_runtime_bundle(const gm82_project_ir *ir, gm82_text_runtime_bundle *out) {
    if (!ir || !out) return false;
    memset(out, 0, sizeof(*out));

    if (!build_sprites(ir, out)) goto fail;
    if (!build_backgrounds(ir, out)) goto fail;
    if (!build_objects(ir, out)) goto fail;
    if (!build_rooms(ir, out)) goto fail;

    gm82_script_list_init(&out->scripts);
    for (int i = 0; i < ir->decoded_scripts.count; i++) {
        gm82_script_add(&out->scripts, ir->decoded_scripts.items[i].name, ir->decoded_scripts.items[i].code);
    }

    gm82_decoded_sound_list_init(&out->sounds);
    if (ir->decoded_sounds.count > 0 && ir->decoded_sounds.items) {
        out->sounds.items = (gm82_decoded_sound *)calloc((size_t)ir->decoded_sounds.count, sizeof(gm82_decoded_sound));
        if (out->sounds.items) {
            out->sounds.count = ir->decoded_sounds.count;
            out->sounds.capacity = ir->decoded_sounds.count;
            out->sound_names = (char **)calloc((size_t)ir->decoded_sounds.count, sizeof(char *));
            out->sound_name_count = out->sound_names ? ir->decoded_sounds.count : 0;
            for (int i = 0; i < ir->decoded_sounds.count; i++) {
                out->sounds.items[i] = ir->decoded_sounds.items[i];
                out->sounds.items[i].raw_data = NULL;
                out->sounds.items[i].pcm = NULL;
                if (ir->decoded_sounds.items[i].pcm && ir->decoded_sounds.items[i].pcm_frames > 0) {
                    size_t sz = ir->decoded_sounds.items[i].pcm_frames *
                                (size_t)(ir->decoded_sounds.items[i].channels > 0 ? ir->decoded_sounds.items[i].channels : 1) *
                                sizeof(int16_t);
                    out->sounds.items[i].pcm = (int16_t *)malloc(sz);
                    if (out->sounds.items[i].pcm) memcpy(out->sounds.items[i].pcm, ir->decoded_sounds.items[i].pcm, sz);
                }
                if (out->sound_names) out->sound_names[i] = strdup(ir->decoded_sounds.items[i].name);
            }
        }
    }

    out->valid = true;
    return true;

fail:
    gm82_text_runtime_bundle_free(out);
    return false;
}

void gm82_text_runtime_bundle_free(gm82_text_runtime_bundle *b) {
    if (!b) return;

    if (b->sprites.frames) {
        for (int i = 0; i < b->sprites.count; ++i) {
            free(b->sprites.frames[i].bitmask);
            b->sprites.frames[i].bitmask = NULL;
        }
    }
    free(b->sprites.frames);
    b->sprites.frames = NULL;
    b->sprites.count = 0;
    b->sprites.capacity = 0;
    gm82_sprite_group_list_free(&b->sprite_groups);

    free(b->backgrounds.items);
    b->backgrounds.items = NULL;
    b->backgrounds.count = 0;
    b->backgrounds.capacity = 0;

    gm82_decoded_object_list_free(&b->objects);
    gm82_decoded_room_list_free(&b->rooms);
    gm82_script_list_free(&b->scripts);
    gm82_decoded_sound_list_free(&b->sounds);

    free_name_table(b->object_names, b->object_name_count);
    free_name_table(b->sprite_names, b->sprite_name_count);
    free_name_table(b->background_names, b->background_name_count);
    free_name_table(b->sound_names, b->sound_name_count);
    b->object_names = b->sprite_names = b->background_names = b->sound_names = NULL;
    b->object_name_count = b->sprite_name_count = b->background_name_count = b->sound_name_count = 0;

    b->valid = false;
}

int gm82_text_object_index(const gm82_text_runtime_bundle *b, const char *name) {
    if (!b || !name) return -1;
    for (int i = 0; i < b->object_name_count; ++i)
        if (b->object_names[i] && strcmp(b->object_names[i], name) == 0) return i;
    return -1;
}
