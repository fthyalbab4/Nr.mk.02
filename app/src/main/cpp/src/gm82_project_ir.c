#include "gm82_project_ir.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

gm82_project_ir *gm82_project_ir_create(void) {
    gm82_project_ir *ir = (gm82_project_ir *)calloc(1, sizeof(gm82_project_ir));
    if (!ir) return NULL;
    ir->ir_version = GM82_IR_VERSION;
    ir->complete = false;
    gm82_decoded_sprite_list_init(&ir->decoded_frames);
    gm82_decoded_object_list_init(&ir->decoded_objects);
    gm82_script_list_init(&ir->decoded_scripts);
    gm82_decoded_sound_list_init(&ir->decoded_sounds);
    gm82_path_list_init(&ir->decoded_paths);
    gm82_timeline_list_init(&ir->decoded_timelines);
    return ir;
}

static void free_sprite(gm82_res_sprite *s) {
    if (!s) return;
    free(s->name);
    free(s->gl_textures);
    free(s->rgba);
    memset(s, 0, sizeof(*s));
}

static void free_background(gm82_res_background *b) {
    if (!b) return;
    free(b->name);
    free(b->rgba);
    memset(b, 0, sizeof(*b));
}

static void free_room(gm82_res_room *r) {
    if (!r) return;
    free(r->name);
    free(r->caption);
    free(r->creation_code);
    free(r->background_ids);
    free(r->background_visible);
    free(r->background_foreground);
    free(r->background_x);
    free(r->background_y);
    free(r->background_htiled);
    free(r->background_vtiled);
    free(r->background_hspeed);
    free(r->background_vspeed);
    free(r->background_stretch);
    free(r->views);
    if (r->instances) {
        for (int32_t i = 0; i < r->instance_count; i++)
            free(r->instances[i].creation_code);
        free(r->instances);
    }
    free(r->tiles);
    memset(r, 0, sizeof(*r));
}

static void free_str_arr(char **arr, int32_t count) {
    if (!arr) return;
    for (int32_t i = 0; i < count; i++) free(arr[i]);
    free(arr);
}

void gm82_project_ir_free(gm82_project_ir *ir) {
    if (!ir) return;
    for (int32_t i = 0; ir->sprites && i < ir->sprite_count; i++) free_sprite(&ir->sprites[i]);
    free(ir->sprites);
    for (int32_t i = 0; ir->backgrounds && i < ir->background_count; i++) free_background(&ir->backgrounds[i]);
    free(ir->backgrounds);
    for (int32_t i = 0; ir->rooms && i < ir->room_count; i++) free_room(&ir->rooms[i]);
    free(ir->rooms);
    for (int32_t i = 0; ir->constants && i < ir->constant_count; i++) {
        free(ir->constants[i].name);
        free(ir->constants[i].value);
    }
    free(ir->constants);
    for (int32_t i = 0; ir->included_files && i < ir->included_file_count; i++) {
        free(ir->included_files[i].name);
        free(ir->included_files[i].export_folder);
        free(ir->included_files[i].source_path);
    }
    free(ir->included_files);
    for (int32_t i = 0; ir->triggers && i < ir->trigger_count; i++) {
        free(ir->triggers[i].name);
        free(ir->triggers[i].constant_name);
        free(ir->triggers[i].condition);
    }
    free(ir->triggers);
    free_str_arr(ir->object_names, ir->object_name_count);
    free_str_arr(ir->background_names, ir->background_name_count);
    free_str_arr(ir->sprite_names, ir->sprite_name_count);
    free_str_arr(ir->sound_names, ir->sound_name_count);
    free_str_arr(ir->extension_names, ir->extension_count);
    free_str_arr(ir->dll_names, ir->dll_count);
    gm82_decoded_sprite_list_free(&ir->decoded_frames);
    gm82_sprite_group_list_free(&ir->sprite_groups);
    gm82_decoded_object_list_free(&ir->decoded_objects);
    gm82_script_list_free(&ir->decoded_scripts);
    gm82_decoded_sound_list_free(&ir->decoded_sounds);
    gm82_decoded_font_list_free(&ir->decoded_fonts);
    free(ir->source_path);
    free(ir->source_data);
    free(ir->error_message);
    free(ir);
}

void gm82_project_ir_recompute_complete(gm82_project_ir *ir) {
    if (!ir) return;
    int32_t partial = 0;
    for (int32_t i = 0; ir->sprites && i < ir->sprite_count; i++)
        if (ir->sprites[i].status != GM82_RES_DECODED) partial++;
    for (int32_t i = 0; ir->backgrounds && i < ir->background_count; i++)
        if (ir->backgrounds[i].status != GM82_RES_DECODED) partial++;
    for (int32_t i = 0; ir->rooms && i < ir->room_count; i++)
        if (ir->rooms[i].status != GM82_RES_DECODED) partial++;
    ir->partial_count = partial;
    bool has_pixels = (ir->decoded_frames.count > 0);
    for (int32_t i = 0; !has_pixels && ir->sprites && i < ir->sprite_count; i++)
        if (ir->sprites[i].status == GM82_RES_DECODED && ir->sprites[i].rgba) has_pixels = true;
    for (int32_t i = 0; !has_pixels && ir->backgrounds && i < ir->background_count; i++)
        if (ir->backgrounds[i].status == GM82_RES_DECODED && ir->backgrounds[i].rgba) has_pixels = true;
    /* complete when no partial resources, has a room, and either has pixel assets or zero sprites/bgs with decoded objects */
    ir->complete = (partial == 0) && (ir->room_count > 0) &&
                   (has_pixels || (ir->sprite_count == 0 && ir->background_count == 0));
}

bool gm82_project_ir_is_playable(const gm82_project_ir *ir) {
    if (!ir) return false;
    return ir->complete && ir->room_count > 0;
}
