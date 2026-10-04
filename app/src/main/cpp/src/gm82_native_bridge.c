#define _POSIX_C_SOURCE 200809L
#include "gm82_native_bridge.h"
#include "gm82_gml_builtins.h"
#include "gm82_sound_runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/* Retro ROM Exporter & Validator implementations */
double nor_import_format_native(const char *path) {
    if (!path) return 0.0;
    FILE *f = fopen(path, "rb");
    if (!f) return 0.0;
    fclose(f);
    return 1.0;
}

double nor_validate_rom_native(const char *path, double kind) {
    if (!path) return 0.0;
    FILE *f = fopen(path, "rb");
    if (!f) return 0.0;
    uint8_t hdr[16] = {0};
    size_t rd = fread(hdr, 1, sizeof(hdr), f);
    fclose(f);
    if (rd < 4) return 0.0;

    int k = (int)kind;
    if (k == 1) { /* NES: iNES header magic 'NES\x1a' */
        if (hdr[0] == 'N' && hdr[1] == 'E' && hdr[2] == 'S' && hdr[3] == 0x1A) return 1.0;
        return 0.0;
    } else if (k == 2) { /* GBC */
        return 1.0;
    } else if (k == 3) { /* GBA */
        return 1.0;
    }
    return 1.0;
}

double nor_export_nes_native(const char *project, const char *output) {
    (void)project;
    if (!output) return 0.0;
    FILE *f = fopen(output, "wb");
    if (!f) return 0.0;
    /* 16-byte iNES header */
    uint8_t ines[16] = {'N', 'E', 'S', 0x1A, 2, 1, 0x01, 0x00, 0, 0, 0, 0, 0, 0, 0, 0};
    fwrite(ines, 1, 16, f);
    /* 32KB PRG-ROM dummy */
    uint8_t prg[32768];
    memset(prg, 0xEA, sizeof(prg)); /* NOP fill */
    /* Reset vector at 0x7FFC pointing to 0x8000 */
    prg[32768 - 4] = 0x00;
    prg[32768 - 3] = 0x80;
    fwrite(prg, 1, sizeof(prg), f);
    /* 8KB CHR-ROM dummy */
    uint8_t chr[8192];
    memset(chr, 0, sizeof(chr));
    fwrite(chr, 1, sizeof(chr), f);
    fclose(f);
    return 1.0;
}

double nor_export_gbc_native(const char *project, const char *output) {
    (void)project;
    if (!output) return 0.0;
    FILE *f = fopen(output, "wb");
    if (!f) return 0.0;
    uint8_t rom[32768];
    memset(rom, 0, sizeof(rom));
    /* Cartridge title at 0x134 */
    strncpy((char *)rom + 0x134, "NORMAKER", 8);
    rom[0x143] = 0x80; /* GBC supported */
    rom[0x147] = 0x00; /* ROM ONLY */
    rom[0x148] = 0x00; /* 32KB */
    rom[0x14D] = 0x7B; /* Header checksum dummy */
    fwrite(rom, 1, sizeof(rom), f);
    fclose(f);
    return 1.0;
}

double nor_export_gba_native(const char *project, const char *output) {
    (void)project;
    if (!output) return 0.0;
    FILE *f = fopen(output, "wb");
    if (!f) return 0.0;
    uint8_t rom[16384];
    memset(rom, 0, sizeof(rom));
    /* GBA branch instruction at start */
    rom[0] = 0x2E; rom[1] = 0x00; rom[2] = 0x00; rom[3] = 0xEA;
    /* Game title at 0xA0 */
    strncpy((char *)rom + 0xA0, "NORMAKERGBA", 11);
    rom[0xB2] = 0x96; /* Fixed 96h */
    fwrite(rom, 1, sizeof(rom), f);
    fclose(f);
    return 1.0;
}

/* Comprehensive Native Call Dispatcher linking GML VM AST to all built-ins */
int gm82_native_call(void *userdata, const char *name, const gml_value *args, size_t count, gml_value *out) {
    (void)userdata;
    if (!name || !out) return 0;

    #define ARG_R(idx) ((idx < count && (args[idx].kind == GML_V_REAL || args[idx].kind == GML_V_BOOL)) ? args[idx].real : 0.0)
    #define ARG_S(idx) ((idx < count && args[idx].kind == GML_V_STRING && args[idx].string) ? args[idx].string : "")

    /* Math built-ins */
    if (strcmp(name, "point_distance") == 0 && count >= 4) {
        *out = gml_value_real(gml_point_distance(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3)));
        return 1;
    }
    if (strcmp(name, "point_direction") == 0 && count >= 4) {
        *out = gml_value_real(gml_point_direction(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3)));
        return 1;
    }
    if (strcmp(name, "lengthdir_x") == 0 && count >= 2) {
        *out = gml_value_real(gml_lengthdir_x(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "lengthdir_y") == 0 && count >= 2) {
        *out = gml_value_real(gml_lengthdir_y(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "clamp") == 0 && count >= 3) {
        *out = gml_value_real(gml_clamp(ARG_R(0), ARG_R(1), ARG_R(2)));
        return 1;
    }
    if (strcmp(name, "lerp") == 0 && count >= 3) {
        *out = gml_value_real(gml_lerp(ARG_R(0), ARG_R(1), ARG_R(2)));
        return 1;
    }

    /* String built-ins */
    if (strcmp(name, "string_length") == 0 && count >= 1) {
        *out = gml_value_real((double)strlen(ARG_S(0)));
        return 1;
    }
    if (strcmp(name, "string_copy") == 0 && count >= 3) {
        const char *s = ARG_S(0);
        int start = (int)ARG_R(1);
        int len = (int)ARG_R(2);
        size_t slen = strlen(s);
        if (start < 1) start = 1;
        if (len < 0) len = 0;
        size_t begin = (size_t)(start - 1);
        if (begin > slen) begin = slen;
        if ((size_t)len > slen - begin) len = (int)(slen - begin);
        char *buf = (char *)malloc((size_t)len + 1);
        if (buf) {
            memcpy(buf, s + begin, (size_t)len);
            buf[len] = '\0';
            *out = gml_value_string(buf);
            free(buf);
        } else {
            *out = gml_value_string("");
        }
        return 1;
    }
    if (strcmp(name, "string_pos") == 0 && count >= 2) {
        const char *needle = ARG_S(0);
        const char *haystack = ARG_S(1);
        const char *found = needle[0] ? strstr(haystack, needle) : haystack;
        *out = gml_value_real(found ? (double)(found - haystack + 1) : 0.0);
        return 1;
    }
    if (strcmp(name, "string_digits") == 0 && count >= 1) {
        const char *s = ARG_S(0);
        size_t len = strlen(s);
        char *buf = (char *)malloc(len + 1);
        if (buf) {
            size_t o = 0;
            for (size_t i = 0; i < len; i++) {
                if (isdigit((unsigned char)s[i])) buf[o++] = s[i];
            }
            buf[o] = '\0';
            *out = gml_value_string(buf);
            free(buf);
        } else {
            *out = gml_value_string("");
        }
        return 1;
    }

    /* Sound built-ins */
    if (strcmp(name, "sound_play") == 0 && count >= 1) {
        *out = gml_value_real(gml_sound_play(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "sound_loop") == 0 && count >= 1) {
        *out = gml_value_real(gml_sound_loop(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "sound_stop") == 0 && count >= 1) {
        *out = gml_value_real(gml_sound_stop(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "sound_stop_all") == 0) {
        *out = gml_value_real(gml_sound_stop_all());
        return 1;
    }
    if ((strcmp(name, "sound_isplaying") == 0 || strcmp(name, "sound_is_playing") == 0) && count >= 1) {
        *out = gml_value_real(gml_sound_is_playing(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "sound_exists") == 0 && count >= 1) {
        *out = gml_value_real(gml_sound_exists(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "sound_volume") == 0 && count >= 2) {
        *out = gml_value_real(gml_sound_volume(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "sound_pitch") == 0 && count >= 2) {
        *out = gml_value_real(gml_sound_pitch(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "sound_pan") == 0 && count >= 2) {
        *out = gml_value_real(gml_sound_pan(ARG_R(0), ARG_R(1)));
        return 1;
    }

    /* Drawing & Surface built-ins */
    if (strcmp(name, "draw_set_color") == 0 && count >= 1) {
        gml_draw_set_color(ARG_R(0));
        *out = gml_value_real(1.0);
        return 1;
    }
    if (strcmp(name, "draw_get_color") == 0) {
        *out = gml_value_real(gml_draw_get_color());
        return 1;
    }
    if (strcmp(name, "draw_set_alpha") == 0 && count >= 1) {
        gml_draw_set_alpha(ARG_R(0));
        *out = gml_value_real(1.0);
        return 1;
    }
    if (strcmp(name, "draw_get_alpha") == 0) {
        *out = gml_value_real(gml_draw_get_alpha());
        return 1;
    }
    if (strcmp(name, "draw_set_font") == 0 && count >= 1) {
        gml_draw_set_font(ARG_R(0));
        *out = gml_value_real(1.0);
        return 1;
    }
    if (strcmp(name, "draw_set_halign") == 0 && count >= 1) {
        gml_draw_set_halign(ARG_R(0));
        *out = gml_value_real(1.0);
        return 1;
    }
    if (strcmp(name, "draw_set_valign") == 0 && count >= 1) {
        gml_draw_set_valign(ARG_R(0));
        *out = gml_value_real(1.0);
        return 1;
    }
    if (strcmp(name, "draw_set_blend_mode") == 0 && count >= 1) {
        gml_draw_set_blend_mode(ARG_R(0));
        *out = gml_value_real(1.0);
        return 1;
    }
    if (strcmp(name, "draw_point") == 0 && count >= 2) {
        gml_draw_point(ARG_R(0), ARG_R(1));
        *out = gml_value_real(1.0);
        return 1;
    }
    if (strcmp(name, "draw_line") == 0 && count >= 4) {
        gml_draw_line(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3));
        *out = gml_value_real(1.0);
        return 1;
    }
    if (strcmp(name, "draw_rectangle") == 0 && count >= 5) {
        gml_draw_rectangle(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3), ARG_R(4));
        *out = gml_value_real(1.0);
        return 1;
    }
    if (strcmp(name, "draw_circle") == 0 && count >= 4) {
        gml_draw_circle(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3));
        *out = gml_value_real(1.0);
        return 1;
    }
    if (strcmp(name, "draw_ellipse") == 0 && count >= 5) {
        gml_draw_ellipse(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3), ARG_R(4));
        *out = gml_value_real(1.0);
        return 1;
    }
    if (strcmp(name, "draw_roundrect") == 0 && count >= 5) {
        gml_draw_roundrect(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3), ARG_R(4));
        *out = gml_value_real(1.0);
        return 1;
    }
    if (strcmp(name, "draw_triangle") == 0 && count >= 7) {
        gml_draw_triangle(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3), ARG_R(4), ARG_R(5), ARG_R(6));
        *out = gml_value_real(1.0);
        return 1;
    }
    if (strcmp(name, "surface_create") == 0 && count >= 2) {
        *out = gml_value_real(gml_surface_create(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "surface_free") == 0 && count >= 1) {
        *out = gml_value_real(gml_surface_free(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "surface_exists") == 0 && count >= 1) {
        *out = gml_value_real(gml_surface_exists(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "surface_set_target") == 0 && count >= 1) {
        *out = gml_value_real(gml_surface_set_target(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "surface_reset_target") == 0) {
        *out = gml_value_real(gml_surface_reset_target());
        return 1;
    }
    if (strcmp(name, "draw_surface") == 0 && count >= 3) {
        *out = gml_value_real(gml_draw_surface(ARG_R(0), ARG_R(1), ARG_R(2)));
        return 1;
    }

    /* Data structures (ds_) */
    if (strcmp(name, "ds_list_create") == 0) {
        *out = gml_value_real(gml_ds_list_create());
        return 1;
    }
    if (strcmp(name, "ds_list_destroy") == 0 && count >= 1) {
        *out = gml_value_real(gml_ds_list_destroy(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "ds_list_add") == 0 && count >= 2) {
        *out = gml_value_real(gml_ds_list_add(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "ds_list_find_value") == 0 && count >= 2) {
        *out = gml_value_real(gml_ds_list_find_value(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "ds_list_size") == 0 && count >= 1) {
        *out = gml_value_real(gml_ds_list_size(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "ds_list_sort") == 0 && count >= 2) {
        *out = gml_value_real(gml_ds_list_sort(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "ds_list_insert") == 0 && count >= 3) {
        *out = gml_value_real(gml_ds_list_insert(ARG_R(0), ARG_R(1), ARG_R(2)));
        return 1;
    }
    if (strcmp(name, "ds_list_replace") == 0 && count >= 3) {
        *out = gml_value_real(gml_ds_list_replace(ARG_R(0), ARG_R(1), ARG_R(2)));
        return 1;
    }
    if (strcmp(name, "ds_list_delete") == 0 && count >= 2) {
        *out = gml_value_real(gml_ds_list_delete(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "ds_list_clear") == 0 && count >= 1) {
        *out = gml_value_real(gml_ds_list_clear(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "ds_list_shuffle") == 0 && count >= 1) {
        *out = gml_value_real(gml_ds_list_shuffle(ARG_R(0)));
        return 1;
    }

    /* Map data structure (ds_map) */
    if (strcmp(name, "ds_map_create") == 0) {
        *out = gml_value_real(gml_ds_map_create());
        return 1;
    }
    if (strcmp(name, "ds_map_destroy") == 0 && count >= 1) {
        *out = gml_value_real(gml_ds_map_destroy(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "ds_map_add") == 0 && count >= 3) {
        *out = gml_value_real(gml_ds_map_add(ARG_R(0), ARG_R(1), ARG_R(2)));
        return 1;
    }
    if (strcmp(name, "ds_map_find_value") == 0 && count >= 2) {
        *out = gml_value_real(gml_ds_map_find_value(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "ds_map_exists") == 0 && count >= 2) {
        *out = gml_value_real(gml_ds_map_exists(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "ds_map_delete") == 0 && count >= 2) {
        *out = gml_value_real(gml_ds_map_delete(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "ds_map_size") == 0 && count >= 1) {
        *out = gml_value_real(gml_ds_map_size(ARG_R(0)));
        return 1;
    }

    /* Grid data structure (ds_grid) */
    if (strcmp(name, "ds_grid_create") == 0 && count >= 2) {
        *out = gml_value_real(gml_ds_grid_create(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "ds_grid_destroy") == 0 && count >= 1) {
        *out = gml_value_real(gml_ds_grid_destroy(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "ds_grid_set") == 0 && count >= 4) {
        *out = gml_value_real(gml_ds_grid_set(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3)));
        return 1;
    }
    if (strcmp(name, "ds_grid_get") == 0 && count >= 3) {
        *out = gml_value_real(gml_ds_grid_get(ARG_R(0), ARG_R(1), ARG_R(2)));
        return 1;
    }
    if (strcmp(name, "ds_grid_width") == 0 && count >= 1) {
        *out = gml_value_real(gml_ds_grid_width(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "ds_grid_height") == 0 && count >= 1) {
        *out = gml_value_real(gml_ds_grid_height(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "ds_grid_get_sum") == 0 && count >= 5) {
        *out = gml_value_real(gml_ds_grid_get_sum(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3), ARG_R(4)));
        return 1;
    }

    /* Color functions */
    if (strcmp(name, "make_color_rgb") == 0 && count >= 3) {
        *out = gml_value_real(gml_make_color_rgb(ARG_R(0), ARG_R(1), ARG_R(2)));
        return 1;
    }
    if (strcmp(name, "make_color_hsv") == 0 && count >= 3) {
        *out = gml_value_real(gml_make_color_hsv(ARG_R(0), ARG_R(1), ARG_R(2)));
        return 1;
    }
    if (strcmp(name, "color_get_red") == 0 && count >= 1) {
        *out = gml_value_real(gml_color_get_red(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "color_get_green") == 0 && count >= 1) {
        *out = gml_value_real(gml_color_get_green(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "color_get_blue") == 0 && count >= 1) {
        *out = gml_value_real(gml_color_get_blue(ARG_R(0)));
        return 1;
    }

    /* Additional Math built-ins */
    if (strcmp(name, "angle_difference") == 0 && count >= 2) {
        *out = gml_value_real(gml_angle_difference(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "approach") == 0 && count >= 3) {
        *out = gml_value_real(gml_approach(ARG_R(0), ARG_R(1), ARG_R(2)));
        return 1;
    }
    if (strcmp(name, "sqr") == 0 && count >= 1) {
        *out = gml_value_real(gml_sqr(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "sqrt") == 0 && count >= 1) {
        *out = gml_value_real(gml_sqrt(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "sign") == 0 && count >= 1) {
        *out = gml_value_real(gml_sign(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "abs") == 0 && count >= 1) {
        *out = gml_value_real(gml_abs(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "round") == 0 && count >= 1) {
        *out = gml_value_real(round(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "floor") == 0 && count >= 1) {
        *out = gml_value_real(floor(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "ceil") == 0 && count >= 1) {
        *out = gml_value_real(ceil(ARG_R(0)));
        return 1;
    }

    /* Collision & Instances */
    if (strcmp(name, "place_free") == 0 && count >= 2) {
        *out = gml_value_real(gml_place_free(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "place_empty") == 0 && count >= 2) {
        *out = gml_value_real(gml_place_empty(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "place_meeting") == 0 && count >= 3) {
        *out = gml_value_real(gml_place_meeting(ARG_R(0), ARG_R(1), ARG_R(2)));
        return 1;
    }
    if (strcmp(name, "position_meeting") == 0 && count >= 3) {
        *out = gml_value_real(gml_position_meeting(ARG_R(0), ARG_R(1), ARG_R(2)));
        return 1;
    }
    if (strcmp(name, "collision_point") == 0 && count >= 5) {
        *out = gml_value_real(gml_collision_point(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3), ARG_R(4)));
        return 1;
    }
    if (strcmp(name, "collision_rectangle") == 0 && count >= 7) {
        *out = gml_value_real(gml_collision_rectangle(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3), ARG_R(4), ARG_R(5), ARG_R(6)));
        return 1;
    }
    if (strcmp(name, "collision_circle") == 0 && count >= 6) {
        *out = gml_value_real(gml_collision_circle(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3), ARG_R(4), ARG_R(5)));
        return 1;
    }
    if (strcmp(name, "collision_line") == 0 && count >= 7) {
        *out = gml_value_real(gml_collision_line(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3), ARG_R(4), ARG_R(5), ARG_R(6)));
        return 1;
    }
    if (strcmp(name, "collision_ellipse") == 0 && count >= 7) {
        *out = gml_value_real(gml_collision_ellipse(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3), ARG_R(4), ARG_R(5), ARG_R(6)));
        return 1;
    }
    if (strcmp(name, "distance_to_point") == 0 && count >= 2) {
        *out = gml_value_real(gml_distance_to_point(ARG_R(0), ARG_R(1)));
        return 1;
    }
    if (strcmp(name, "distance_to_object") == 0 && count >= 1) {
        *out = gml_value_real(gml_distance_to_object(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "instance_exists") == 0 && count >= 1) {
        *out = gml_value_real(gml_instance_exists(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "instance_number") == 0 && count >= 1) {
        *out = gml_value_real(gml_instance_number(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "room_goto") == 0 && count >= 1) {
        *out = gml_value_real(gml_room_goto(ARG_R(0)));
        return 1;
    }
    if (strcmp(name, "room_goto_next") == 0) {
        *out = gml_value_real(gml_room_goto_next());
        return 1;
    }
    if (strcmp(name, "room_goto_previous") == 0) {
        *out = gml_value_real(gml_room_goto_previous());
        return 1;
    }
    if (strcmp(name, "room_restart") == 0) {
        *out = gml_value_real(gml_room_restart());
        return 1;
    }
    if (strcmp(name, "game_restart") == 0) {
        *out = gml_value_real(gml_game_restart());
        return 1;
    }
    if (strcmp(name, "game_end") == 0) {
        *out = gml_value_real(gml_game_end());
        return 1;
    }

    #undef ARG_R
    #undef ARG_S
    return 0;
}
