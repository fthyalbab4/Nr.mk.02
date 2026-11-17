#ifndef GM82_PROJECT_IR_H
#define GM82_PROJECT_IR_H

#include "gm82_gmk_format.h"
#include "gm82_object_room_decode.h"
#include "gm82_sprite_decode.h"
#include "gm82_sound_decode.h"
#include "gm82_script.h"
#include "gm82_path.h"
#include "gm82_timeline.h"
#include "gm82_font_decode.h"
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GM82_IR_VERSION 6

typedef struct gm82_res_sprite {
    int32_t id;
    char   *name;
    int32_t width, height;
    int32_t origin_x, origin_y;
    int32_t bbox_left, bbox_right, bbox_top, bbox_bottom;
    int32_t bbox_mode;
    int32_t colcheck;
    int32_t smooth, preload;
    int32_t subimage_count;
    uint32_t *gl_textures;
    /* CPU pixel data after materialize (frame 0; full subimages stored in decoded_frames) */
    uint8_t  *rgba;
    size_t    rgba_size;
    gm82_resource_status status;
} gm82_res_sprite;

typedef struct gm82_res_background {
    int32_t id;
    char   *name;
    int32_t width, height;
    int32_t tile_width, tile_height;
    int32_t tile_hoffset, tile_voffset;
    int32_t tile_hsep, tile_vsep;
    bool    tileset;
    uint32_t gl_texture;
    uint8_t *rgba;
    size_t   rgba_size;
    gm82_resource_status status;
} gm82_res_background;

typedef struct gm82_room_instance {
    int32_t id;
    int32_t object_id;
    double  x, y;
    double  xscale, yscale;
    double  angle;
    int32_t blend;
    char   *creation_code;
    bool    locked;
} gm82_room_instance;

typedef struct gm82_room_tile {
    int32_t id;
    int32_t background_id;
    int32_t x, y;
    int32_t src_x, src_y;
    int32_t width, height;
    int32_t depth;
    bool    locked;
    double  xscale, yscale;
    int32_t blend;
} gm82_room_tile;

typedef struct gm82_room_view {
    bool    visible;
    int32_t view_x, view_y, view_w, view_h;
    int32_t port_x, port_y, port_w, port_h;
    int32_t border_h, border_v;
    int32_t hspeed, vspeed;
    int32_t object_following;
} gm82_room_view;

typedef struct gm82_res_room {
    int32_t id;
    char   *name;
    char   *caption;
    int32_t width, height;
    int32_t speed;
    bool    persistent;
    int32_t snap_x, snap_y;
    bool    isometric;
    int32_t background_color;
    bool    draw_background_color;
    char   *creation_code;
    int32_t background_count;
    int32_t *background_ids;
    bool    *background_visible;
    bool    *background_foreground;
    int32_t *background_x, *background_y;
    bool    *background_htiled, *background_vtiled;
    int32_t *background_hspeed, *background_vspeed;
    bool    *background_stretch;
    bool    views_enabled;
    int32_t view_count;
    gm82_room_view *views;
    int32_t instance_count;
    gm82_room_instance *instances;
    int32_t tile_count;
    gm82_room_tile *tiles;
    gm82_resource_status status;
} gm82_res_room;

/* GM82 settings/settings.txt — mirrors the official key names. */
typedef struct gm82_project_settings {
    bool    fullscreen;
    bool    interpolate_pixels;
    bool    dont_draw_border;
    bool    display_cursor;
    bool    allow_resize;
    bool    window_on_top;
    bool    set_resolution;
    bool    dont_show_buttons;
    bool    vsync;
    bool    swap_creation_events;
    bool    disable_screensaver;
    bool    f4_fullscreen_toggle;
    bool    f1_help_menu;
    bool    esc_close_game;
    bool    f5_save_f6_load;
    bool    f9_screenshot;
    bool    treat_close_as_esc;
    bool    freeze_on_lose_focus;
    bool    transparent;
    bool    scale_progress_bar;
    bool    custom_loader;
    bool    show_error_messages;
    bool    log_errors;
    bool    always_abort;
    bool    zero_uninitialized_vars;
    bool    error_on_uninitialized_args;
    int32_t scaling;
    int32_t clear_color;
    int32_t color_depth;
    int32_t resolution;
    int32_t frequency;
    int32_t priority;
    int32_t translucency;
    int32_t custom_bar;
    int32_t loaded_key_count;
} gm82_project_settings;

typedef struct gm82_res_constant {
    char *name;
    char *value;
} gm82_res_constant;

typedef struct gm82_res_included_file {
    char   *name;
    bool    stored_in_gmk;
    bool    free_memory;
    bool    overwrite_file;
    bool    remove_at_end;
    int32_t export_setting;
    char   *export_folder;
    char   *source_path;
    size_t  source_length;
} gm82_res_included_file;

typedef struct gm82_res_trigger {
    char   *name;
    char   *constant_name;
    int32_t kind;
    char   *condition;
} gm82_res_trigger;

typedef struct gm82_project_ir {
    int32_t ir_version;
    gm82_gmk_format_kind format;
    int32_t magic, version, app_id;
    size_t  source_bytes;
    char   *source_path;          /* optional path for re-materialize */
    uint8_t *source_data;         /* optional owned copy of GMK bytes */
    size_t   source_data_size;
    bool    complete;
    int32_t sprite_count;
    gm82_res_sprite *sprites;
    int32_t background_count;
    gm82_res_background *backgrounds;
    int32_t room_count;
    gm82_res_room *rooms;
    int32_t object_count;
    /* Resource names in declaration order (index.yyd), owned by the IR. */
    int32_t object_name_count;
    char  **object_names;
    int32_t background_name_count;
    char  **background_names;
    int32_t sprite_name_count;
    char  **sprite_names;
    int32_t sound_name_count;
    char  **sound_names;
    int32_t sound_count;
    int32_t script_count;
    gm82_project_settings settings;
    int32_t constant_count;
    gm82_res_constant *constants;
    int32_t included_file_count;
    gm82_res_included_file *included_files;
    int32_t trigger_count;
    gm82_res_trigger *triggers;

    /* Owned complete runtime decode data (populated by stream & text loaders) */
    gm82_decoded_sprite_list  decoded_frames;
    gm82_sprite_group_list    sprite_groups;
    gm82_decoded_object_list  decoded_objects;
    gm82_script_list          decoded_scripts;
    gm82_decoded_sound_list   decoded_sounds;
    gm82_path_list            decoded_paths;
    gm82_timeline_list        decoded_timelines;
    gm82_decoded_font_list    decoded_fonts;
    int32_t extension_count;
    char  **extension_names;
    int32_t dll_count;
    char  **dll_names;

    char   *error_message;
    int32_t partial_count;
} gm82_project_ir;

gm82_project_ir *gm82_project_ir_create(void);
void gm82_project_ir_free(gm82_project_ir *ir);
void gm82_project_ir_recompute_complete(gm82_project_ir *ir);
bool gm82_project_ir_is_playable(const gm82_project_ir *ir);

#ifdef __cplusplus
}
#endif

#endif
