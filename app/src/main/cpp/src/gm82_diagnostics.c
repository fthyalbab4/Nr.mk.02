#define _POSIX_C_SOURCE 200809L
#include "gm82_diagnostics.h"
#include <stdio.h>
#include <string.h>

static gm82_diag_entry g_entries[GM82_DIAG_MAX_ENTRIES];
static int g_entry_count = 0;
static int g_entry_cursor = 0;
static int g_unmapped_gml_total = 0;
static int g_unmapped_action_total = 0;
static char g_last_stage[64] = "idle";
static char g_last_error[256] = "";

static void json_escape(const char *src, char *dst, size_t dst_cap) {
    if (!dst || dst_cap == 0) return;
    if (!src) {
        dst[0] = '\0';
        return;
    }
    size_t w = 0;
    for (size_t i = 0; src[i] != '\0' && w + 2 < dst_cap; i++) {
        unsigned char c = (unsigned char)src[i];
        if (c == '"' || c == '\\') {
            if (w + 3 >= dst_cap) break;
            dst[w++] = '\\';
            dst[w++] = (char)c;
        } else if (c == '\n') {
            if (w + 3 >= dst_cap) break;
            dst[w++] = '\\';
            dst[w++] = 'n';
        } else if (c == '\r' || c == '\t') {
            dst[w++] = ' ';
        } else if (c >= 32) {
            dst[w++] = (char)c;
        }
    }
    dst[w] = '\0';
}

void gm82_diag_reset(void) {
    memset(g_entries, 0, sizeof(g_entries));
    g_entry_count = 0;
    g_entry_cursor = 0;
    g_unmapped_gml_total = 0;
    g_unmapped_action_total = 0;
    snprintf(g_last_stage, sizeof(g_last_stage), "ready");
    g_last_error[0] = '\0';
}

void gm82_diag_clear_unmapped(void) {
    memset(g_entries, 0, sizeof(g_entries));
    g_entry_count = 0;
    g_entry_cursor = 0;
    g_unmapped_gml_total = 0;
    g_unmapped_action_total = 0;
    g_last_error[0] = '\0';
}

void gm82_diag_set_error(const char *stage, const char *message) {
    if (stage && stage[0]) {
        snprintf(g_last_stage, sizeof(g_last_stage), "%s", stage);
    }
    if (message) {
        snprintf(g_last_error, sizeof(g_last_error), "%s", message);
    } else {
        g_last_error[0] = '\0';
    }
}

void gm82_diag_record_unmapped(const char *kind, const char *name) {
    if (!kind || !name || !name[0]) return;
    if (strcmp(kind, "gml") == 0) g_unmapped_gml_total++;
    else if (strcmp(kind, "action") == 0) g_unmapped_action_total++;

    for (int i = 0; i < g_entry_count; i++) {
        if (strcmp(g_entries[i].kind, kind) == 0 && strcmp(g_entries[i].name, name) == 0) {
            g_entries[i].count++;
            return;
        }
    }

    int slot = g_entry_count < GM82_DIAG_MAX_ENTRIES ? g_entry_count++ : g_entry_cursor;
    if (g_entry_count >= GM82_DIAG_MAX_ENTRIES) {
        g_entry_cursor = (g_entry_cursor + 1) % GM82_DIAG_MAX_ENTRIES;
    }
    snprintf(g_entries[slot].kind, sizeof(g_entries[slot].kind), "%s", kind);
    snprintf(g_entries[slot].name, sizeof(g_entries[slot].name), "%s", name);
    g_entries[slot].count = 1;
}

int gm82_diag_unmapped_gml_total(void) { return g_unmapped_gml_total; }
int gm82_diag_unmapped_action_total(void) { return g_unmapped_action_total; }
const char *gm82_diag_last_error(void) { return g_last_error; }
const char *gm82_diag_last_stage(void) { return g_last_stage; }

int gm82_diag_build_json(
    char *out, size_t cap,
    const char *backend,
    int opensles_active,
    int soundpool_count,
    int room_id, int room_w, int room_h,
    int instance_count, int sprite_count,
    int object_count, int bg_count,
    int sound_count, int frame_count,
    int fps) {
    if (!out || cap < 64) return 0;

    char esc_backend[32];
    char esc_stage[96];
    char esc_err[320];
    json_escape(backend ? backend : "GLES2", esc_backend, sizeof(esc_backend));
    json_escape(g_last_stage, esc_stage, sizeof(esc_stage));
    json_escape(g_last_error, esc_err, sizeof(esc_err));

    int pos = snprintf(out, cap,
        "{\"backend\":\"%s\",\"openslesActive\":%s,\"soundpoolLoaded\":%d,"
        "\"roomId\":%d,\"roomWidth\":%d,\"roomHeight\":%d,"
        "\"instances\":%d,\"sprites\":%d,\"objects\":%d,\"backgrounds\":%d,"
        "\"sounds\":%d,\"frames\":%d,\"fps\":%d,"
        "\"stage\":\"%s\",\"lastError\":\"%s\","
        "\"unmappedGmlTotal\":%d,\"unmappedActionTotal\":%d,\"unmapped\":[",
        esc_backend,
        opensles_active ? "true" : "false",
        soundpool_count,
        room_id, room_w, room_h,
        instance_count, sprite_count, object_count, bg_count,
        sound_count, frame_count, fps,
        esc_stage, esc_err,
        g_unmapped_gml_total, g_unmapped_action_total);

    if (pos < 0 || (size_t)pos >= cap) return 0;

    for (int i = 0; i < g_entry_count && (size_t)pos + 160 < cap; i++) {
        char ek[32], en[96];
        json_escape(g_entries[i].kind, ek, sizeof(ek));
        json_escape(g_entries[i].name, en, sizeof(en));
        int w = snprintf(out + pos, cap - (size_t)pos,
            "%s{\"kind\":\"%s\",\"name\":\"%s\",\"count\":%d}",
            (i > 0) ? "," : "", ek, en, g_entries[i].count);
        if (w > 0 && (size_t)(pos + w) < cap - 8) pos += w;
        else break;
    }
    int tail = snprintf(out + pos, cap - (size_t)pos, "]}");
    if (tail > 0) pos += tail;
    return pos;
}
