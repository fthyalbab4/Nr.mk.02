#define _POSIX_C_SOURCE 200809L
#include "gm82_text_reader.h"
#include "gm82_script.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>
#include <dirent.h>
#include <errno.h>

/*
 * GM82 text-project loader. The official gm82save format stores resource
 * ordering in <group>/index.yyd and room metadata in rooms/<name>/room.txt.
 * This loader intentionally keeps binary GMK decoding separate, but imports
 * the portable text metadata needed by the Android runtime.
 */

static int is_dir(const char *path) {
    struct stat st;
    return stat(path, &st) == 0 && S_ISDIR(st.st_mode);
}

static char *trim_line(char *s) {
    size_t n;
    while (*s == ' ' || *s == '\t' || *s == '\r' || *s == '\n') ++s;
    n = strlen(s);
    while (n && (s[n - 1] == ' ' || s[n - 1] == '\t' || s[n - 1] == '\r' || s[n - 1] == '\n')) s[--n] = '\0';
    return s;
}

static int parse_i32(const char *s, int32_t fallback) {
    char *end = NULL;
    long v = strtol(s ? s : "", &end, 10);
    return (!s || end == s) ? fallback : (int32_t)v;
}

static int parse_bool(const char *s, int fallback) {
    if (!s) return fallback;
    if (!strcasecmp(s, "true") || !strcmp(s, "1")) return 1;
    if (!strcasecmp(s, "false") || !strcmp(s, "0")) return 0;
    return fallback;
}

static int read_index_names(const char *root, const char *group, char ***out_names) {
    char path[1024];
    FILE *f;
    char line[1024];
    char **names = NULL;
    int count = 0, cap = 0;
    snprintf(path, sizeof(path), "%s/%s/index.yyd", root, group);
    f = fopen(path, "r");
    if (!f) { *out_names = NULL; return 0; }
    while (fgets(line, sizeof(line), f)) {
        char *name = trim_line(line);
        if (!*name || *name == '#') continue;
        if (count == cap) {
            int next = cap ? cap * 2 : 16;
            char **grown = (char **)realloc(names, (size_t)next * sizeof(*names));
            if (!grown) break;
            names = grown; cap = next;
        }
        names[count++] = strdup(name);
    }
    fclose(f);
    *out_names = names;
    return count;
}

static int count_asset_dirs(const char *root, const char *group) {
    char path[1024];
    DIR *d;
    struct dirent *ent;
    int count = 0;
    snprintf(path, sizeof(path), "%s/%s", root, group);
    d = opendir(path);
    if (!d) return 0;
    while ((ent = readdir(d)) != NULL) {
        char child[1200];
        if (ent->d_name[0] == '.') continue;
        snprintf(child, sizeof(child), "%s/%s", path, ent->d_name);
        if (is_dir(child)) ++count;
    }
    closedir(d);
    return count;
}

static int count_assets(const char *root, const char *group) {
    char **names = NULL;
    int count = read_index_names(root, group, &names);
    if (names) {
        for (int i = 0; i < count; ++i) free(names[i]);
        free(names);
    }
    return count ? count : count_asset_dirs(root, group);
}

static int find_name_id(char **names, int count, const char *name) {
    if (!name || !*name) return -1;
    for (int i = 0; i < count; ++i) if (names[i] && !strcmp(names[i], name)) return i;
    return -1;
}

static char *read_code_file(const char *path) {
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    char *buf = (char *)calloc(GM82_SCRIPT_CODE_MAX, 1);
    if (!buf) { fclose(f); return NULL; }
    size_t n = fread(buf, 1, GM82_SCRIPT_CODE_MAX - 1, f);
    buf[n] = '\0';
    fclose(f);
    return buf;
}

static void load_settings_txt(const char *root, gm82_project_settings *s) {
    char path[1200], line[2048];
    snprintf(path, sizeof(path), "%s/settings/settings.txt", root);
    FILE *f = fopen(path, "r");
    if (!f) return;
    while (fgets(line, sizeof(line), f)) {
        char *p = strchr(line, '=');
        if (!p) continue;
        *p++ = '\0';
        char *key = trim_line(line), *value = trim_line(p);
        ++s->loaded_key_count;
        if (!strcmp(key, "fullscreen")) s->fullscreen = parse_bool(value, 0);
        else if (!strcmp(key, "interpolate_pixels")) s->interpolate_pixels = parse_bool(value, 0);
        else if (!strcmp(key, "dont_draw_border")) s->dont_draw_border = parse_bool(value, 0);
        else if (!strcmp(key, "display_cursor")) s->display_cursor = parse_bool(value, 0);
        else if (!strcmp(key, "allow_resize")) s->allow_resize = parse_bool(value, 0);
        else if (!strcmp(key, "window_on_top")) s->window_on_top = parse_bool(value, 0);
        else if (!strcmp(key, "set_resolution")) s->set_resolution = parse_bool(value, 0);
        else if (!strcmp(key, "dont_show_buttons")) s->dont_show_buttons = parse_bool(value, 0);
        else if (!strcmp(key, "vsync")) s->vsync = parse_bool(value, 0);
        else if (!strcmp(key, "swap_creation_events")) s->swap_creation_events = parse_bool(value, 0);
        else if (!strcmp(key, "disable_screensaver")) s->disable_screensaver = parse_bool(value, 0);
        else if (!strcmp(key, "f4_fullscreen_toggle")) s->f4_fullscreen_toggle = parse_bool(value, 0);
        else if (!strcmp(key, "f1_help_menu")) s->f1_help_menu = parse_bool(value, 0);
        else if (!strcmp(key, "esc_close_game")) s->esc_close_game = parse_bool(value, 0);
        else if (!strcmp(key, "f5_save_f6_load")) s->f5_save_f6_load = parse_bool(value, 0);
        else if (!strcmp(key, "f9_screenshot")) s->f9_screenshot = parse_bool(value, 0);
        else if (!strcmp(key, "treat_close_as_esc")) s->treat_close_as_esc = parse_bool(value, 0);
        else if (!strcmp(key, "freeze_on_lose_focus")) s->freeze_on_lose_focus = parse_bool(value, 0);
        else if (!strcmp(key, "transparent")) s->transparent = parse_bool(value, 0);
        else if (!strcmp(key, "scale_progress_bar")) s->scale_progress_bar = parse_bool(value, 0);
        else if (!strcmp(key, "custom_loader")) s->custom_loader = parse_bool(value, 0);
        else if (!strcmp(key, "show_error_messages")) s->show_error_messages = parse_bool(value, 0);
        else if (!strcmp(key, "log_errors")) s->log_errors = parse_bool(value, 0);
        else if (!strcmp(key, "always_abort")) s->always_abort = parse_bool(value, 0);
        else if (!strcmp(key, "zero_uninitialized_vars")) s->zero_uninitialized_vars = parse_bool(value, 0);
        else if (!strcmp(key, "error_on_uninitialized_args")) s->error_on_uninitialized_args = parse_bool(value, 0);
        else if (!strcmp(key, "scaling")) s->scaling = parse_i32(value, s->scaling);
        else if (!strcmp(key, "clear_color")) s->clear_color = parse_i32(value, s->clear_color);
        else if (!strcmp(key, "color_depth")) s->color_depth = parse_i32(value, s->color_depth);
        else if (!strcmp(key, "resolution")) s->resolution = parse_i32(value, s->resolution);
        else if (!strcmp(key, "frequency")) s->frequency = parse_i32(value, s->frequency);
        else if (!strcmp(key, "priority")) s->priority = parse_i32(value, s->priority);
        else if (!strcmp(key, "translucency")) s->translucency = parse_i32(value, s->translucency);
        else if (!strcmp(key, "custom_bar")) s->custom_bar = parse_i32(value, s->custom_bar);
    }
    fclose(f);
}

static void load_constants_txt(const char *root, gm82_project_ir *ir) {
    char path[1200], line[2048];
    snprintf(path, sizeof(path), "%s/settings/constants.txt", root);
    FILE *f = fopen(path, "r");
    if (!f) return;
    int cap = 0;
    while (fgets(line, sizeof(line), f)) {
        char *p = strchr(line, '=');
        if (!p) continue;
        *p++ = '\0';
        char *name = trim_line(line), *value = trim_line(p);
        if (!*name) continue;
        if (ir->constant_count == cap) {
            int next = cap ? cap * 2 : 32;
            gm82_res_constant *grown = (gm82_res_constant *)realloc(ir->constants, (size_t)next * sizeof(*grown));
            if (!grown) break;
            ir->constants = grown; cap = next;
        }
        ir->constants[ir->constant_count].name = strdup(name);
        ir->constants[ir->constant_count].value = strdup(value);
        ++ir->constant_count;
    }
    fclose(f);
}

static void load_datafiles(const char *root, gm82_project_ir *ir) {
    char **names = NULL;
    int count = read_index_names(root, "datafiles", &names);
    if (!count || !names) { if (names) free(names); return; }
    ir->included_files = (gm82_res_included_file *)calloc((size_t)count, sizeof(*ir->included_files));
    if (!ir->included_files) { for (int i = 0; i < count; ++i) free(names[i]); free(names); return; }
    int kept = 0;
    for (int i = 0; i < count; ++i) {
        gm82_res_included_file *inc = &ir->included_files[kept];
        memset(inc, 0, sizeof(*inc));
        inc->name = strdup(names[i]);
        char meta[1400], line[2048];
        snprintf(meta, sizeof(meta), "%s/datafiles/%s.txt", root, names[i]);
        FILE *f = fopen(meta, "r");
        if (f) {
            while (fgets(line, sizeof(line), f)) {
                char *p = strchr(line, '=');
                if (!p) continue;
                *p++ = '\0';
                char *key = trim_line(line), *value = trim_line(p);
                if (!strcmp(key, "store")) inc->stored_in_gmk = parse_bool(value, 0);
                else if (!strcmp(key, "free")) inc->free_memory = parse_bool(value, 0);
                else if (!strcmp(key, "overwrite")) inc->overwrite_file = parse_bool(value, 0);
                else if (!strcmp(key, "remove")) inc->remove_at_end = parse_bool(value, 0);
                else if (!strcmp(key, "export")) inc->export_setting = parse_i32(value, 0);
                else if (!strcmp(key, "export_folder")) inc->export_folder = strdup(value);
            }
            fclose(f);
        }
        snprintf(meta, sizeof(meta), "%s/datafiles/include/%s", root, names[i]);
        struct stat st;
        if (stat(meta, &st) == 0 && S_ISREG(st.st_mode)) {
            inc->source_path = strdup(meta);
            inc->source_length = (size_t)st.st_size;
        }
        ++kept;
    }
    ir->included_file_count = kept;
    for (int i = 0; i < count; ++i) free(names[i]);
    free(names);
}

static void load_triggers_dir(const char *root, gm82_project_ir *ir) {
    char **names = NULL;
    int count = read_index_names(root, "triggers", &names);
    if (!count || !names) { if (names) free(names); return; }
    ir->triggers = (gm82_res_trigger *)calloc((size_t)count, sizeof(*ir->triggers));
    if (!ir->triggers) { for (int i = 0; i < count; ++i) free(names[i]); free(names); return; }
    int kept = 0;
    for (int i = 0; i < count; ++i) {
        gm82_res_trigger *trig = &ir->triggers[kept];
        memset(trig, 0, sizeof(*trig));
        trig->name = strdup(names[i]);
        char meta[1400], line[2048];
        snprintf(meta, sizeof(meta), "%s/triggers/%s.txt", root, names[i]);
        FILE *f = fopen(meta, "r");
        if (f) {
            while (fgets(line, sizeof(line), f)) {
                char *p = strchr(line, '=');
                if (!p) continue;
                *p++ = '\0';
                char *key = trim_line(line), *value = trim_line(p);
                if (!strcmp(key, "constant")) trig->constant_name = strdup(value);
                else if (!strcmp(key, "kind")) trig->kind = parse_i32(value, 0);
            }
            fclose(f);
        }
        snprintf(meta, sizeof(meta), "%s/triggers/%s.gml", root, names[i]);
        trig->condition = read_code_file(meta);
        ++kept;
    }
    ir->trigger_count = kept;
    for (int i = 0; i < count; ++i) free(names[i]);
    free(names);
}

static void load_scripts_from_dir(const char *root, gm82_script_list *list) {
    char subpath[512];
    snprintf(subpath, sizeof(subpath), "%s/scripts", root);
    DIR *d = opendir(subpath);
    if (!d) return;
    struct dirent *ent;
    while ((ent = readdir(d)) != NULL) {
        if (ent->d_name[0] == '.' || !strstr(ent->d_name, ".gml")) continue;
        char fpath[1024];
        snprintf(fpath, sizeof(fpath), "%s/%s", subpath, ent->d_name);
        FILE *f = fopen(fpath, "r");
        if (!f) continue;
        char code_buf[GM82_SCRIPT_CODE_MAX] = {0};
        size_t rd = fread(code_buf, 1, sizeof(code_buf) - 1, f);
        code_buf[rd] = '\0';
        fclose(f);
        char sname[64];
        strncpy(sname, ent->d_name, sizeof(sname) - 1);
        sname[sizeof(sname) - 1] = '\0';
        char *dot = strstr(sname, ".gml");
        if (dot) *dot = '\0';
        gm82_script_add(list, sname, code_buf);
    }
    closedir(d);
}

static void init_room_defaults(gm82_res_room *room, int id, const char *name) {
    memset(room, 0, sizeof(*room));
    room->id = id;
    room->name = strdup(name ? name : "room");
    room->width = 640;
    room->height = 480;
    room->speed = 30;
    room->snap_x = 16;
    room->snap_y = 16;
    room->view_count = 8;
    room->views = (gm82_room_view *)calloc(8, sizeof(*room->views));
    room->background_count = 8;
    room->background_ids = (int32_t *)malloc(8 * sizeof(*room->background_ids));
    room->background_visible = (bool *)calloc(8, sizeof(*room->background_visible));
    room->background_foreground = (bool *)calloc(8, sizeof(*room->background_foreground));
    room->background_x = (int32_t *)calloc(8, sizeof(*room->background_x));
    room->background_y = (int32_t *)calloc(8, sizeof(*room->background_y));
    if (room->background_ids) for (int i = 0; i < 8; ++i) room->background_ids[i] = -1;
    room->status = GM82_RES_DECODED;
}

static void load_room_txt(const char *root, const char *name, gm82_res_room *room) {
    char path[1200], line[2048];
    snprintf(path, sizeof(path), "%s/rooms/%s/room.txt", root, name);
    FILE *f = fopen(path, "r");
    if (!f) return;
    while (fgets(line, sizeof(line), f)) {
        char *p = strchr(line, '=');
        if (!p) continue;
        *p++ = '\0';
        char *key = trim_line(line), *value = trim_line(p);
        if (!strcmp(key, "caption")) room->caption = strdup(value);
        else if (!strcmp(key, "width")) room->width = parse_i32(value, room->width);
        else if (!strcmp(key, "height")) room->height = parse_i32(value, room->height);
        else if (!strcmp(key, "roomspeed")) room->speed = parse_i32(value, room->speed);
        else if (!strcmp(key, "roompersistent")) room->persistent = parse_bool(value, room->persistent);
        else if (!strcmp(key, "snap_x")) room->snap_x = parse_i32(value, room->snap_x);
        else if (!strcmp(key, "snap_y")) room->snap_y = parse_i32(value, room->snap_y);
        else if (!strcmp(key, "isometric")) room->isometric = parse_bool(value, room->isometric);
        else if (!strncmp(key, "bg_visible", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->background_visible[i] = parse_bool(value, 0); }
        else if (!strncmp(key, "bg_is_foreground", 17)) { int i = parse_i32(key + 17, -1); if (i >= 0 && i < 8) room->background_foreground[i] = parse_bool(value, 0); }
        else if (!strncmp(key, "bg_xoffset", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->background_x[i] = parse_i32(value, 0); }
        else if (!strncmp(key, "bg_yoffset", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->background_y[i] = parse_i32(value, 0); }
        else if (!strcmp(key, "views_enabled")) { if (!parse_bool(value, 0)) room->view_count = 1; }
        else if (!strncmp(key, "view_visible", 12)) { int i = parse_i32(key + 12, -1); if (i >= 0 && i < 8) room->views[i].visible = parse_bool(value, 0); }
        else if (!strncmp(key, "view_xview", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].view_x = parse_i32(value, 0); }
        else if (!strncmp(key, "view_yview", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].view_y = parse_i32(value, 0); }
        else if (!strncmp(key, "view_wview", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].view_w = parse_i32(value, room->width); }
        else if (!strncmp(key, "view_hview", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].view_h = parse_i32(value, room->height); }
        else if (!strncmp(key, "view_xport", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].port_x = parse_i32(value, 0); }
        else if (!strncmp(key, "view_yport", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].port_y = parse_i32(value, 0); }
        else if (!strncmp(key, "view_wport", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].port_w = parse_i32(value, room->width); }
        else if (!strncmp(key, "view_hport", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].port_h = parse_i32(value, room->height); }
        else if (!strncmp(key, "view_fol_hbord", 14)) { int i = parse_i32(key + 14, -1); if (i >= 0 && i < 8) room->views[i].border_h = parse_i32(value, 0); }
        else if (!strncmp(key, "view_fol_vbord", 14)) { int i = parse_i32(key + 14, -1); if (i >= 0 && i < 8) room->views[i].border_v = parse_i32(value, 0); }
        else if (!strncmp(key, "view_fol_hspeed", 15)) { int i = parse_i32(key + 15, -1); if (i >= 0 && i < 8) room->views[i].hspeed = parse_i32(value, -1); }
        else if (!strncmp(key, "view_fol_vspeed", 15)) { int i = parse_i32(key + 15, -1); if (i >= 0 && i < 8) room->views[i].vspeed = parse_i32(value, -1); }
    }
    fclose(f);
}

static void load_room_instances(const char *root, const char *room_name,
                                gm82_res_room *room, char **object_names, int object_count) {
    char path[1200], line[4096];
    snprintf(path, sizeof(path), "%s/rooms/%s/instances.txt", root, room_name);
    FILE *f = fopen(path, "r");
    if (!f) return;
    int cap = 0;
    while (fgets(line, sizeof(line), f)) {
        char *p = trim_line(line);
        if (!*p) continue;
        if (room->instance_count == cap) {
            int next = cap ? cap * 2 : 16;
            gm82_room_instance *grown = (gm82_room_instance *)realloc(room->instances, (size_t)next * sizeof(*grown));
            if (!grown) break;
            room->instances = grown; cap = next;
        }
        gm82_room_instance *inst = &room->instances[room->instance_count];
        memset(inst, 0, sizeof(*inst));
        inst->id = room->instance_count;
        inst->xscale = 1.0; inst->yscale = 1.0;
        char *fields[12] = {0};
        int nf = 0;
        for (char *tok = strtok(p, ","); tok && nf < 12; tok = strtok(NULL, ",")) fields[nf++] = tok;
        if (nf < 4) continue;
        inst->object_id = find_name_id(object_names, object_count, fields[0]);
        inst->x = strtod(fields[1], NULL);
        inst->y = strtod(fields[2], NULL);
        inst->locked = nf > 4 ? parse_bool(fields[4], 0) : 0;
        if (nf > 5) inst->xscale = strtod(fields[5], NULL);
        if (nf > 6) inst->yscale = strtod(fields[6], NULL);
        if (nf > 7) inst->blend = parse_i32(fields[7], 0);
        if (nf > 8) inst->angle = strtod(fields[8], NULL);
        if (nf > 9 && parse_bool(fields[9], 0) && fields[3][0]) {
            char code_path[1400];
            snprintf(code_path, sizeof(code_path), "%s/rooms/%s/%s.gml", root, room_name, fields[3]);
            inst->creation_code = read_code_file(code_path);
        }
        ++room->instance_count;
    }
    fclose(f);
}

static void load_room_tiles(const char *root, const char *room_name,
                            gm82_res_room *room, char **background_names, int background_count) {
    char layers_path[1200], line[4096];
    snprintf(layers_path, sizeof(layers_path), "%s/rooms/%s/layers.txt", root, room_name);
    FILE *layers = fopen(layers_path, "r");
    if (!layers) return;
    int cap = 0;
    while (fgets(line, sizeof(line), layers)) {
        char *depth_name = trim_line(line);
        if (!*depth_name) continue;
        char tile_path[1400];
        snprintf(tile_path, sizeof(tile_path), "%s/rooms/%s/%s.txt", root, room_name, depth_name);
        FILE *tf = fopen(tile_path, "r");
        if (!tf) continue;
        char tile_line[4096];
        while (fgets(tile_line, sizeof(tile_line), tf)) {
            char *p = trim_line(tile_line);
            if (!*p) continue;
            if (room->tile_count == cap) {
                int next = cap ? cap * 2 : 32;
                gm82_room_tile *grown = (gm82_room_tile *)realloc(room->tiles, (size_t)next * sizeof(*grown));
                if (!grown) break;
                room->tiles = grown; cap = next;
            }
            gm82_room_tile *tile = &room->tiles[room->tile_count];
            memset(tile, 0, sizeof(*tile));
            tile->id = room->tile_count;
            tile->depth = parse_i32(depth_name, 0);
            char *fields[12] = {0}; int nf = 0;
            for (char *tok = strtok(p, ","); tok && nf < 12; tok = strtok(NULL, ",")) fields[nf++] = tok;
            if (nf < 8) continue;
            tile->background_id = find_name_id(background_names, background_count, fields[0]);
            tile->x = parse_i32(fields[1], 0); tile->y = parse_i32(fields[2], 0);
            tile->src_x = parse_i32(fields[3], 0); tile->src_y = parse_i32(fields[4], 0);
            tile->width = parse_i32(fields[5], 0); tile->height = parse_i32(fields[6], 0);
            tile->locked = parse_bool(fields[7], 0);
            tile->xscale = nf > 8 ? strtod(fields[8], NULL) : 1.0;
            tile->yscale = nf > 9 ? strtod(fields[9], NULL) : 1.0;
            tile->blend = nf > 10 ? parse_i32(fields[10], 0) : 0;
            ++room->tile_count;
        }
        fclose(tf);
    }
    fclose(layers);
}

gm82_text_load_result gm82_text_load_project(const char *path) {
    gm82_text_load_result r;
    memset(&r, 0, sizeof(r));
    if (!path) { snprintf(r.error, sizeof(r.error), "null path"); return r; }
    gm82_project_ir *ir = gm82_project_ir_create();
    if (!ir) { snprintf(r.error, sizeof(r.error), "out of memory"); return r; }
    ir->format = GM82_GMK_FORMAT_GM82;
    ir->version = 82;
    ir->complete = false;
    ir->source_path = strdup(path);
    if (is_dir(path)) {
        ir->script_count = count_assets(path, "scripts");
        ir->object_count = count_assets(path, "objects");
        ir->background_count = count_assets(path, "backgrounds");
        ir->sprite_count = count_assets(path, "sprites");
        ir->sound_count = count_assets(path, "sounds");
        char **object_names = NULL, **background_names = NULL;
        int object_name_count = read_index_names(path, "objects", &object_names);
        int background_name_count = read_index_names(path, "backgrounds", &background_names);
        char **room_names = NULL;
        int room_cnt = read_index_names(path, "rooms", &room_names);
        if (!room_cnt) room_cnt = count_asset_dirs(path, "rooms");
        if (!room_cnt) room_cnt = 1;
        ir->room_count = room_cnt;
        ir->rooms = (gm82_res_room *)calloc((size_t)room_cnt, sizeof(*ir->rooms));
        if (ir->rooms) {
            for (int i = 0; i < room_cnt; ++i) {
                char fallback[32];
                snprintf(fallback, sizeof(fallback), "room%d", i);
                const char *name = room_names && i < room_cnt ? room_names[i] : fallback;
                init_room_defaults(&ir->rooms[i], i, name);
                load_room_txt(path, name, &ir->rooms[i]);
                load_room_instances(path, name, &ir->rooms[i], object_names, object_name_count);
                load_room_tiles(path, name, &ir->rooms[i], background_names, background_name_count);
            }
        }
        if (room_names) { for (int i = 0; i < room_cnt; ++i) free(room_names[i]); free(room_names); }
        if (object_names) { for (int i = 0; i < object_name_count; ++i) free(object_names[i]); free(object_names); }
        if (background_names) { for (int i = 0; i < background_name_count; ++i) free(background_names[i]); free(background_names); }
        load_settings_txt(path, &ir->settings);
        load_constants_txt(path, ir);
        load_datafiles(path, ir);
        load_triggers_dir(path, ir);
        gm82_script_list scripts;
        gm82_script_list_init(&scripts);
        load_scripts_from_dir(path, &scripts);
        snprintf(r.error, sizeof(r.error), "GM82 text project loaded (rooms=%d, objs=%d, scripts=%d)", room_cnt, ir->object_count, scripts.count);
    } else {
        ir->room_count = 1;
        ir->rooms = (gm82_res_room *)calloc(1, sizeof(*ir->rooms));
        if (ir->rooms) { init_room_defaults(&ir->rooms[0], 0, "room0"); ir->rooms[0].status = GM82_RES_DECODED; }
        snprintf(r.error, sizeof(r.error), "GM82 index file loaded");
    }
    gm82_project_ir_recompute_complete(ir);
    r.ir = ir;
    r.ok = true;
    return r;
}
