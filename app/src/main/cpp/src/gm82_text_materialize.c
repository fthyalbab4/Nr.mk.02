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

static bool push_text_frame(gm82_decoded_sprite_list *L, const char *name, const gm82_png_image *img, int32_t ox, int32_t oy) {
    if (!L || !img || !img->rgba) return false;
    if (L->count >= L->capacity) {
        int nc = L->capacity ? L->capacity * 2 : 32;
        gm82_decoded_frame *nf = (gm82_decoded_frame *)realloc(L->frames, (size_t)nc * sizeof(*nf));
        if (!nf) return false;
        L->frames = nf;
        L->capacity = nc;
    }
    gm82_decoded_frame *f = &L->frames[L->count++];
    memset(f, 0, sizeof(*f));
    snprintf(f->name, sizeof(f->name), "%s", name ? name : "");
    f->width = img->width;
    f->height = img->height;
    f->origin_x = ox;
    f->origin_y = oy;
    f->rgba_size = img->rgba_size;
    f->rgba = img->rgba;
    gm82_frame_build_bitmask(f, 16);
    return true;
}

static bool materialize_one_sprite(const char *root, const char *name, gm82_res_sprite *s,
                                   gm82_decoded_sprite_list *frames, gm82_sprite_group *grp) {
    char dir[1200], meta[1400], frame_path[1500];
    snprintf(dir, sizeof(dir), "%s/sprites/%s", root, name);
    snprintf(meta, sizeof(meta), "%s/sprite.txt", dir);
    read_sprite_txt(meta, s);

    int frames_n = s->subimage_count > 0 ? s->subimage_count : 1;
    int32_t start = frames->count;
    int32_t loaded_cnt = 0;
    for (int i = 0; i < frames_n; ++i) {
        snprintf(frame_path, sizeof(frame_path), "%s/%d.png", dir, i);
        if (!file_exists(frame_path)) continue;
        gm82_png_image img = {0};
        if (gm82_png_decode_file(frame_path, &img)) {
            if (loaded_cnt == 0) {
                s->width = img.width;
                s->height = img.height;
                s->rgba_size = img.rgba_size;
                s->rgba = (uint8_t *)malloc(img.rgba_size);
                if (s->rgba) memcpy(s->rgba, img.rgba, img.rgba_size);
                if (s->bbox_right == 0 && s->bbox_bottom == 0) {
                    s->bbox_right = img.width - 1;
                    s->bbox_bottom = img.height - 1;
                }
            }
            push_text_frame(frames, name, &img, s->origin_x, s->origin_y);
            loaded_cnt++;
        }
    }
    if (grp) {
        memset(grp, 0, sizeof(*grp));
        snprintf(grp->name, sizeof(grp->name), "%s", name ? name : "");
        grp->frame_start = start;
        grp->frame_count = loaded_cnt;
        grp->width = s->width;
        grp->height = s->height;
    }
    if (loaded_cnt == 0) {
        /* Keep index parity with an empty slot if sprite has 0 frames */
        return s->subimage_count == 0;
    }
    if (s->subimage_count <= 0) s->subimage_count = loaded_cnt;
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
        gm82_decoded_sprite_list_free(&ir->decoded_frames);
        gm82_sprite_group_list_free(&ir->sprite_groups);
        ir->sprites = (gm82_res_sprite *)calloc((size_t)sprite_n, sizeof(gm82_res_sprite));
        ir->sprite_groups.items = (gm82_sprite_group *)calloc((size_t)sprite_n, sizeof(gm82_sprite_group));
        ir->sprite_groups.count = ir->sprite_groups.items ? sprite_n : 0;
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
                gm82_sprite_group *grp = (ir->sprite_groups.items && i < ir->sprite_groups.count) ? &ir->sprite_groups.items[i] : NULL;
                if (materialize_one_sprite(root, sprite_names[i], s, &ir->decoded_frames, grp)) {
                    s->status = GM82_RES_DECODED;
                    r.sprites_decoded++;
                } else {
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
