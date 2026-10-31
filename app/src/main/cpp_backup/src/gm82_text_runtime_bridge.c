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
    if (ir->sprite_count <= 0) return true;

    L->frames = (gm82_decoded_frame *)calloc((size_t)ir->sprite_count, sizeof(*L->frames));
    if (!L->frames) return false;
    L->capacity = ir->sprite_count;
    L->count = ir->sprite_count;

    b->sprite_names = (char **)calloc((size_t)ir->sprite_count, sizeof(char *));
    if (!b->sprite_names) return false;
    b->sprite_name_count = ir->sprite_count;

    for (int32_t i = 0; i < ir->sprite_count; ++i) {
        const gm82_res_sprite *s = &ir->sprites[i];
        gm82_decoded_frame *f = &L->frames[i];
        copy_name(f->name, sizeof(f->name), s->name);
        f->width = s->width;
        f->height = s->height;
        f->origin_x = s->origin_x;
        f->origin_y = s->origin_y;
        /* Pixels stay owned by the IR; the frame only borrows them. */
        f->rgba = s->rgba;
        f->rgba_size = s->rgba_size;
        b->sprite_names[i] = strdup(s->name ? s->name : "");
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

static bool build_objects(const gm82_project_ir *ir, gm82_text_runtime_bundle *b) {
    gm82_decoded_object_list *L = &b->objects;
    gm82_decoded_object_list_init(L);
    if (ir->object_count <= 0) return true;

    L->items = (gm82_decoded_object *)calloc((size_t)ir->object_count, sizeof(*L->items));
    if (!L->items) return false;
    L->count = ir->object_count;

    b->object_names = (char **)calloc((size_t)ir->object_count, sizeof(char *));
    if (!b->object_names) return false;
    b->object_name_count = ir->object_count;

    /* Names come from objects/index.yyd. The room loader resolved instance rows
     * to these same indices, so the order must be preserved exactly. */
    for (int32_t i = 0; i < ir->object_count; ++i) {
        gm82_decoded_object *o = &L->items[i];
        const char *name = (ir->object_names && i < ir->object_name_count && ir->object_names[i])
                         ? ir->object_names[i] : NULL;
        char tmp[32];
        if (!name) {
            snprintf(tmp, sizeof(tmp), "object%d", i);
            name = tmp;
        }
        copy_name(o->name, sizeof(o->name), name);
        o->sprite_index = -1;
        o->parent_index = -1;
        o->visible = 1;
        o->event_count = 0;
        b->object_names[i] = strdup(name);
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

        if (r->instance_count > 0 && r->instances) {
            d->instances = (gm82_decoded_instance *)calloc((size_t)r->instance_count, sizeof(*d->instances));
            if (!d->instances) return false;
            d->instance_count = r->instance_count;
            for (int32_t j = 0; j < r->instance_count; ++j) {
                d->instances[j].x = (int32_t)r->instances[j].x;
                d->instances[j].y = (int32_t)r->instances[j].y;
                d->instances[j].object_index = r->instances[j].object_id;
                d->instances[j].id = r->instances[j].id;
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
    out->valid = true;
    return true;

fail:
    gm82_text_runtime_bundle_free(out);
    return false;
}

void gm82_text_runtime_bundle_free(gm82_text_runtime_bundle *b) {
    if (!b) return;

    /* Frames/backgrounds borrow IR pixels, so only the container is released. */
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

    free(b->backgrounds.items);
    b->backgrounds.items = NULL;
    b->backgrounds.count = 0;
    b->backgrounds.capacity = 0;

    if (b->objects.items) {
        for (int i = 0; i < b->objects.count; ++i) {
            for (int e = 0; e < b->objects.items[i].event_count; ++e)
                free(b->objects.items[i].events[e].code_snippet);
        }
    }
    free(b->objects.items);
    b->objects.items = NULL;
    b->objects.count = 0;

    if (b->rooms.items) {
        for (int i = 0; i < b->rooms.count; ++i) {
            free(b->rooms.items[i].instances);
            free(b->rooms.items[i].tiles);
        }
    }
    free(b->rooms.items);
    b->rooms.items = NULL;
    b->rooms.count = 0;

    free_name_table(b->object_names, b->object_name_count);
    free_name_table(b->sprite_names, b->sprite_name_count);
    free_name_table(b->background_names, b->background_name_count);
    b->object_names = b->sprite_names = b->background_names = NULL;
    b->object_name_count = b->sprite_name_count = b->background_name_count = 0;

    b->valid = false;
}

int gm82_text_object_index(const gm82_text_runtime_bundle *b, const char *name) {
    if (!b || !name) return -1;
    for (int i = 0; i < b->object_name_count; ++i)
        if (b->object_names[i] && strcmp(b->object_names[i], name) == 0) return i;
    return -1;
}
