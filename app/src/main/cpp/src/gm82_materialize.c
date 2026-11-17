#define _POSIX_C_SOURCE 200809L
#include "gm82_materialize.h"
#include "gm82_gmk_stream.h"
#include "gm82_sprite_decode.h"
#include "gm82_background_decode.h"
#include "gm82_object_room_decode.h"
#include "gm82_sound_decode.h"
#include "gm82_script.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static gm82_project_ir *g_last_ir = NULL;
static gm82_decoded_object_list g_mat_objects;
static gm82_script_list g_mat_scripts;
static int g_mat_objects_valid = 0;
static int g_mat_scripts_valid = 0;

const gm82_decoded_object_list *gm82_materialize_get_objects(void) {
    if (g_last_ir && g_last_ir->decoded_objects.count > 0) return &g_last_ir->decoded_objects;
    return g_mat_objects_valid ? &g_mat_objects : NULL;
}
const gm82_script_list *gm82_materialize_get_scripts(void) {
    if (g_last_ir && g_last_ir->decoded_scripts.count > 0) return &g_last_ir->decoded_scripts;
    return g_mat_scripts_valid ? &g_mat_scripts : NULL;
}
const gm82_decoded_sprite_list *gm82_materialize_get_frames(void) {
    return (g_last_ir && g_last_ir->decoded_frames.count > 0) ? &g_last_ir->decoded_frames : NULL;
}
const gm82_sprite_group_list *gm82_materialize_get_sprite_groups(void) {
    return (g_last_ir && g_last_ir->sprite_groups.count > 0) ? &g_last_ir->sprite_groups : NULL;
}
const gm82_decoded_sound_list *gm82_materialize_get_sounds(void) {
    return (g_last_ir && g_last_ir->decoded_sounds.count > 0) ? &g_last_ir->decoded_sounds : NULL;
}

gm82_materialize_options gm82_materialize_default_options(void) {
    gm82_materialize_options o = {0};
    o.cache_dir = NULL;
    o.upload_to_gpu = false;
    o.fail_on_partial = false;
    o.max_texture_size = 0;
    return o;
}

bool gm82_materialize_sprites(gm82_project_ir *ir, const gm82_materialize_options *opts) {
    (void)opts;
    if (!ir) return false;
    if (ir->decoded_frames.count > 0 || (ir->sprite_count == 0 && ir->decoded_objects.count > 0)) {
        return true;
    }

    gm82_decoded_sprite_list L;
    gm82_decoded_sprite_list_init(&L);
    int n = -1;

    if (ir->source_data && ir->source_data_size > 0)
        n = gm82_decode_sprites_from_gmk(ir->source_data, ir->source_data_size, &L);
    else if (ir->source_path)
        n = gm82_decode_sprites_from_file(ir->source_path, &L);

    if (n <= 0) {
        gm82_decoded_sprite_list_free(&L);
        for (int32_t i = 0; i < ir->sprite_count; i++)
            if (ir->sprites[i].status != GM82_RES_DECODED)
                ir->sprites[i].status = GM82_RES_PARTIAL;
        return false;
    }

    gm82_sprite_group_list groups;
    gm82_sprite_groups_build(&L, &groups);

    for (int32_t i = 0; i < ir->sprite_count; i++) {
        free(ir->sprites[i].name);
        free(ir->sprites[i].gl_textures);
        free(ir->sprites[i].rgba);
    }
    free(ir->sprites);

    int out_count = groups.count > 0 ? groups.count : n;
    ir->sprite_count = out_count;
    ir->sprites = (gm82_res_sprite *)calloc((size_t)out_count, sizeof(gm82_res_sprite));
    if (!ir->sprites) {
        gm82_decoded_sprite_list_free(&L);
        gm82_sprite_group_list_free(&groups);
        ir->sprite_count = 0;
        return false;
    }

    if (groups.count > 0) {
        for (int g = 0; g < groups.count; g++) {
            gm82_res_sprite *s = &ir->sprites[g];
            const gm82_sprite_group *grp = &groups.items[g];
            int frame_idx = grp->frame_start;
            s->id = g;
            s->name = strdup(grp->name);
            s->width = grp->width;
            s->height = grp->height;
            s->subimage_count = grp->frame_count;
            if (L.frames[frame_idx].rgba && L.frames[frame_idx].rgba_size > 0) {
                s->rgba_size = L.frames[frame_idx].rgba_size;
                s->rgba = (uint8_t *)malloc(s->rgba_size);
                if (s->rgba) memcpy(s->rgba, L.frames[frame_idx].rgba, s->rgba_size);
            }
            s->status = GM82_RES_DECODED;
        }
    }
    gm82_decoded_sprite_list_free(&ir->decoded_frames);
    ir->decoded_frames = L;
    gm82_sprite_group_list_free(&ir->sprite_groups);
    ir->sprite_groups = groups;
    return true;
}

bool gm82_materialize_backgrounds(gm82_project_ir *ir, const gm82_materialize_options *opts) {
    (void)opts;
    if (!ir) return false;
    if (ir->decoded_objects.count > 0 && ir->background_count >= 0) {
        bool all_ok = true;
        for (int32_t i = 0; i < ir->background_count; i++) {
            if (ir->backgrounds && ir->backgrounds[i].status != GM82_RES_DECODED) all_ok = false;
        }
        if (all_ok) return true;
    }

    gm82_decoded_background_list L;
    gm82_decoded_background_list_init(&L);
    int n = -1;
    if (ir->source_data && ir->source_data_size > 0)
        n = gm82_decode_backgrounds_from_gmk(ir->source_data, ir->source_data_size, &L);
    else if (ir->source_path)
        n = gm82_decode_backgrounds_from_file(ir->source_path, &L);

    if (n <= 0) {
        gm82_decoded_background_list_free(&L);
        for (int32_t i = 0; i < ir->background_count; i++)
            if (ir->backgrounds[i].status != GM82_RES_DECODED)
                ir->backgrounds[i].status = GM82_RES_PARTIAL;
        return ir->background_count == 0;
    }

    for (int32_t i = 0; i < ir->background_count; i++) {
        free(ir->backgrounds[i].name);
        free(ir->backgrounds[i].rgba);
    }
    free(ir->backgrounds);
    ir->background_count = n;
    ir->backgrounds = (gm82_res_background *)calloc((size_t)n, sizeof(gm82_res_background));
    if (!ir->backgrounds) {
        gm82_decoded_background_list_free(&L);
        ir->background_count = 0;
        return false;
    }
    for (int i = 0; i < n; i++) {
        gm82_res_background *b = &ir->backgrounds[i];
        b->id = i;
        b->name = strdup(L.items[i].name);
        b->width = L.items[i].width;
        b->height = L.items[i].height;
        b->rgba_size = L.items[i].rgba_size;
        b->rgba = L.items[i].rgba;
        L.items[i].rgba = NULL;
        b->status = GM82_RES_DECODED;
    }
    gm82_decoded_background_list_free(&L);
    return true;
}

bool gm82_materialize_rooms(gm82_project_ir *ir, const gm82_materialize_options *opts) {
    (void)opts;
    if (!ir) return false;
    if (ir->decoded_objects.count > 0 && ir->room_count > 0) {
        return true;
    }

    gm82_decoded_room_list L;
    memset(&L, 0, sizeof(L));
    int n = -1;
    if (ir->source_data && ir->source_data_size > 0)
        n = gm82_decode_rooms_from_gmk(ir->source_data, ir->source_data_size, &L);

    if (n > 0) {
        for (int32_t i = 0; i < ir->room_count; i++) {
            free(ir->rooms[i].name);
            free(ir->rooms[i].caption);
            free(ir->rooms[i].instances);
            free(ir->rooms[i].tiles);
        }
        free(ir->rooms);
        ir->room_count = n;
        ir->rooms = (gm82_res_room *)calloc((size_t)n, sizeof(gm82_res_room));
        if (ir->rooms) {
            for (int i = 0; i < n; i++) {
                gm82_res_room *r = &ir->rooms[i];
                r->id = i;
                r->name = strdup(L.items[i].name);
                r->width = L.items[i].width;
                r->height = L.items[i].height;
                r->speed = L.items[i].speed > 0 ? L.items[i].speed : 30;
                r->instance_count = L.items[i].instance_count;
                if (r->instance_count > 0 && L.items[i].instances) {
                    r->instances = (gm82_room_instance *)calloc((size_t)r->instance_count, sizeof(gm82_room_instance));
                    if (r->instances) {
                        for (int j = 0; j < r->instance_count; j++) {
                            r->instances[j].id = L.items[i].instances[j].id;
                            r->instances[j].object_id = L.items[i].instances[j].object_index;
                            r->instances[j].x = L.items[i].instances[j].x;
                            r->instances[j].y = L.items[i].instances[j].y;
                        }
                    } else {
                        r->instance_count = 0;
                    }
                }
                r->status = GM82_RES_DECODED;
            }
            gm82_decoded_room_list_free(&L);
            return true;
        }
        gm82_decoded_room_list_free(&L);
    }

    bool all_ok = true;
    for (int32_t i = 0; i < ir->room_count; i++) {
        gm82_res_room *r = &ir->rooms[i];
        if (r->width > 0 && r->height > 0)
            r->status = GM82_RES_DECODED;
        else {
            r->status = GM82_RES_PARTIAL;
            all_ok = false;
        }
    }
    return all_ok;
}

bool gm82_materialize_all(gm82_project_ir *ir, const gm82_materialize_options *opts) {
    if (!ir) return false;
    g_last_ir = ir;
    gm82_materialize_options local = opts ? *opts : gm82_materialize_default_options();

    /* If source_data is present and decoded_objects wasn't already parsed by stream reader, parse now */
    if (ir->decoded_objects.count == 0 && ir->source_data && ir->source_data_size > 0) {
        gm82_gmk_stream_parse(ir->source_data, ir->source_data_size, ir);
    }

    gm82_materialize_sprites(ir, &local);
    gm82_materialize_backgrounds(ir, &local);
    gm82_materialize_rooms(ir, &local);

    /* Fallback if stream parser could not run (legacy GM4/GM6) */
    if (ir->decoded_objects.count == 0 && ir->source_data && ir->source_data_size > 0) {
        if (g_mat_objects_valid) {
            gm82_decoded_object_list_free(&g_mat_objects);
            g_mat_objects_valid = 0;
        }
        gm82_decoded_object_list_init(&g_mat_objects);
        int nobj = gm82_decode_objects_from_gmk(ir->source_data, ir->source_data_size, &g_mat_objects);
        if (nobj > 0) {
            ir->object_count = nobj;
            g_mat_objects_valid = 1;
        } else {
            gm82_decoded_object_list_free(&g_mat_objects);
        }

        if (ir->decoded_sounds.count == 0) {
            gm82_decoded_sound_list_init(&ir->decoded_sounds);
            int nsnd = gm82_decode_sounds_from_gmk(ir->source_data, ir->source_data_size, &ir->decoded_sounds);
            if (nsnd > 0) ir->sound_count = nsnd;
        }

        gm82_script_list_free(&g_mat_scripts);
        g_mat_scripts_valid = 0;
        int nscr = gm82_decode_scripts_from_gmk(ir->source_data, ir->source_data_size, &g_mat_scripts);
        if (nscr > 0) {
            ir->script_count = nscr;
            g_mat_scripts_valid = 1;
        }
    }

    gm82_project_ir_recompute_complete(ir);

    if (!ir->complete) {
        free(ir->error_message);
        char buf[256];
        snprintf(buf, sizeof(buf),
                 "Materialization incomplete (sprites=%d decoded_partial=%d rooms=%d)",
                 ir->sprite_count, ir->partial_count, ir->room_count);
        ir->error_message = strdup(buf);
    }
    return ir->complete;
}
