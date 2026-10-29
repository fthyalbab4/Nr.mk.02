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
            }
        }
        if (room_names) { for (int i = 0; i < room_cnt; ++i) free(room_names[i]); free(room_names); }
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
