#define _POSIX_C_SOURCE 200809L
#include "gm82_text_materialize.h"
#include "gm82_png.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>
#include <dirent.h>

/* Reads <group>/index.yyd into a freshly allocated name array. */
static int read_index_names(const char *root, const char *group, char ***out_names) {
    char path[1024];
    char line[1024];
    char **names = NULL;
    int count = 0, cap = 0;
    *out_names = NULL;
    snprintf(path, sizeof(path), "%s/%s/index.yyd", root, group);
    FILE *f = fopen(path, "r");
    if (!f) return 0;
    while (fgets(line, sizeof(line), f)) {
        size_t n = strlen(line);
        while (n && (line[n - 1] == '\n' || line[n - 1] == '\r' || line[n - 1] == ' ')) line[--n] = '\0';
        char *start = line;
        while (*start == ' ' || *start == '\t') ++start;
        if (!*start || *start == '#') continue;
        if (count == cap) {
            int next = cap ? cap * 2 : 16;
            char **grown = (char **)realloc(names, (size_t)next * sizeof(*names));
            if (!grown) break;
            names = grown; cap = next;
        }
        names[count++] = strdup(start);
    }
    fclose(f);
    *out_names = names;
    return count;
}

static void free_names(char **names, int count) {
    if (!names) return;
    for (int i = 0; i < count; ++i) free(names[i]);
    free(names);
}

static int file_exists(const char *path) {
    struct stat st;
    return stat(path, &st) == 0 && S_ISREG(st.st_mode);
}

/* Reads sprite.txt into the IR sprite fields. */
static void read_sprite_txt(const char *path, gm82_res_sprite *s) {
    char line[1024];
    FILE *f = fopen(path, "r");
    if (!f) return;
    while (fgets(line, sizeof(line), f)) {
        char *p = strchr(line, '=');
        if (!p) continue;
        *p++ = '\0';
        char *key = line;
        char *value = p;
        size_t n = strlen(key);
        while (n && (key[n - 1] == ' ' || key[n - 1] == '\t')) key[--n] = '\0';
        while (*value == ' ' || *value == '\t') ++value;
        n = strlen(value);
        while (n && (value[n - 1] == '\n' || value[n - 1] == '\r' || value[n - 1] == ' ')) value[--n] = '\0';
        if (!strcmp(key, "frames")) s->subimage_count = (int32_t)strtol(value, NULL, 10);
        else if (!strcmp(key, "origin_x")) s->origin_x = (int32_t)strtol(value, NULL, 10);
        else if (!strcmp(key, "origin_y")) s->origin_y = (int32_t)strtol(value, NULL, 10);
        else if (!strcmp(key, "collision_shape")) s->colcheck = (int32_t)strtol(value, NULL, 10);
        else if (!strcmp(key, "bbox_left")) s->bbox_left = (int32_t)strtol(value, NULL, 10);
        else if (!strcmp(key, "bbox_right")) s->bbox_right = (int32_t)strtol(value, NULL, 10);
        else if (!strcmp(key, "bbox_top")) s->bbox_top = (int32_t)strtol(value, NULL, 10);
        else if (!strcmp(key, "bbox_bottom")) s->bbox_bottom = (int32_t)strtol(value, NULL, 10);
        else if (!strcmp(key, "bbox_type")) s->bbox_mode = (int32_t)strtol(value, NULL, 10);
    }
    fclose(f);
}

static void read_background_txt(const char *path, gm82_res_background *b) {
    char line[1024];
    FILE *f = fopen(path, "r");
    if (!f) return;
    while (fgets(line, sizeof(line), f)) {
        char *p = strchr(line, '=');
        if (!p) continue;
        *p++ = '\0';
        char *key = line;
        char *value = p;
        size_t n = strlen(key);
        while (n && (key[n - 1] == ' ' || key[n - 1] == '\t')) key[--n] = '\0';
        while (*value == ' ' || *value == '\t') ++value;
        n = strlen(value);
        while (n && (value[n - 1] == '\n' || value[n - 1] == '\r' || value[n - 1] == ' ')) value[--n] = '\0';
        if (!strcmp(key, "tileset")) b->tileset = strtol(value, NULL, 10) != 0;
        else if (!strcmp(key, "tile_width")) b->tile_width = (int32_t)strtol(value, NULL, 10);
        else if (!strcmp(key, "tile_height")) b->tile_height = (int32_t)strtol(value, NULL, 10);
        else if (!strcmp(key, "tile_hoffset")) b->tile_hoffset = (int32_t)strtol(value, NULL, 10);
        else if (!strcmp(key, "tile_voffset")) b->tile_voffset = (int32_t)strtol(value, NULL, 10);
        else if (!strcmp(key, "tile_hsep")) b->tile_hsep = (int32_t)strtol(value, NULL, 10);
        else if (!strcmp(key, "tile_vsep")) b->tile_vsep = (int32_t)strtol(value, NULL, 10);
    }
    fclose(f);
}

static bool materialize_one_sprite(const char *root, const char *name, gm82_res_sprite *s) {
    char dir[1200], meta[1400], frame_path[1500];
    snprintf(dir, sizeof(dir), "%s/sprites/%s", root, name);
    snprintf(meta, sizeof(meta), "%s/sprite.txt", dir);
    read_sprite_txt(meta, s);

    int frames = s->subimage_count > 0 ? s->subimage_count : 1;
    /* Prefer frame 0; fall back to the first available frame index. */
    gm82_png_image img = {0};
    bool loaded = false;
    for (int i = 0; i < frames && !loaded; ++i) {
        snprintf(frame_path, sizeof(frame_path), "%s/%d.png", dir, i);
        if (!file_exists(frame_path)) continue;
        if (gm82_png_decode_file(frame_path, &img)) loaded = true;
    }
    if (!loaded) {
        /* Some projects only keep a single unnamed frame. */
        snprintf(frame_path, sizeof(frame_path), "%s/0.png", dir);
        loaded = gm82_png_decode_file(frame_path, &img);
    }
    if (!loaded) return false;

    s->width = img.width;
    s->height = img.height;
    s->rgba = img.rgba;
    s->rgba_size = img.rgba_size;
    if (s->subimage_count <= 0) s->subimage_count = 1;
    if (s->bbox_right == 0 && s->bbox_bottom == 0) {
        s->bbox_right = img.width - 1;
        s->bbox_bottom = img.height - 1;
    }
    s->status = GM82_RES_DECODED;
    return true;
}

static bool materialize_one_background(const char *root, const char *name, gm82_res_background *b) {
    char img_path[1400], meta[1400];
    snprintf(img_path, sizeof(img_path), "%s/backgrounds/%s.png", root, name);
    snprintf(meta, sizeof(meta), "%s/backgrounds/%s.txt", root, name);
    read_background_txt(meta, b);

    gm82_png_image img = {0};
    if (!gm82_png_decode_file(img_path, &img)) return false;
    b->width = img.width;
    b->height = img.height;
    b->rgba = img.rgba;
    b->rgba_size = img.rgba_size;
    b->status = GM82_RES_DECODED;
    return true;
}

gm82_text_materialize_result gm82_text_materialize_assets(gm82_project_ir *ir) {
    gm82_text_materialize_result r;
    memset(&r, 0, sizeof(r));
    if (!ir || !ir->source_path) return r;

    const char *root = ir->source_path;

    /* ---- sprites ---- */
    char **sprite_names = NULL;
    int sprite_n = read_index_names(root, "sprites", &sprite_names);
    if (sprite_n > 0) {
        for (int32_t i = 0; ir->sprites && i < ir->sprite_count; ++i) {
            free(ir->sprites[i].name);
            free(ir->sprites[i].rgba);
            free(ir->sprites[i].gl_textures);
        }
        free(ir->sprites);
        ir->sprites = (gm82_res_sprite *)calloc((size_t)sprite_n, sizeof(gm82_res_sprite));
        if (!ir->sprites) {
            ir->sprite_count = 0;
            r.sprites_failed = sprite_n;
        } else {
            ir->sprite_count = sprite_n;
            for (int i = 0; i < sprite_n; ++i) {
                gm82_res_sprite *s = &ir->sprites[i];
                s->id = i;
                s->name = strdup(sprite_names[i]);
                s->subimage_count = 1;
                if (materialize_one_sprite(root, sprite_names[i], s)) r.sprites_decoded++;
                else {
                    s->status = GM82_RES_PARTIAL;
                    r.sprites_failed++;
                }
            }
        }
        free_names(sprite_names, sprite_n);
    }

    /* ---- backgrounds ---- */
    char **bg_names = NULL;
    int bg_n = read_index_names(root, "backgrounds", &bg_names);
    if (bg_n > 0) {
        for (int32_t i = 0; ir->backgrounds && i < ir->background_count; ++i) {
            free(ir->backgrounds[i].name);
            free(ir->backgrounds[i].rgba);
        }
        free(ir->backgrounds);
        ir->backgrounds = (gm82_res_background *)calloc((size_t)bg_n, sizeof(gm82_res_background));
        if (!ir->backgrounds) {
            ir->background_count = 0;
            r.backgrounds_failed = bg_n;
        } else {
            ir->background_count = bg_n;
            for (int i = 0; i < bg_n; ++i) {
                gm82_res_background *b = &ir->backgrounds[i];
                b->id = i;
                b->name = strdup(bg_names[i]);
                if (materialize_one_background(root, bg_names[i], b)) r.backgrounds_decoded++;
                else {
                    b->status = GM82_RES_PARTIAL;
                    r.backgrounds_failed++;
                }
            }
        }
        free_names(bg_names, bg_n);
    }

    gm82_project_ir_recompute_complete(ir);
    r.ok = (r.sprites_failed == 0 && r.backgrounds_failed == 0);
    return r;
}
