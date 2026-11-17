#define _POSIX_C_SOURCE 200809L
#include "gm82_int_read.h"
#include "gm82_actions.h"
#include "gm82_events.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include "gm82_sound_runtime.h"
#include "gm82_diagnostics.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <zlib.h>
#include <time.h>
#include <ctype.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define GM82_ACTION_MAX_ARGS 8
#define GM82_UI_QUEUE_CAP 32
#define GM82_MAX_PART_TYPES 32
#define GM82_MAX_PART_EMITTERS 32
#define GM82_MAX_HIGHSCORES 10

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

/* ---- Standard 129+ GameMaker Portable Lib Actions & Aliases Catalog ---- */
static const char *const k_gm82_standard_129_actions[] = {
    /* move.lib (22) */
    "action_move",
    "action_move_point",
    "action_set_motion",
    "action_motion_set",
    "action_set_hspeed",
    "action_set_vspeed",
    "action_set_gravity",
    "action_reverse_xdir",
    "action_reverse_ydir",
    "action_set_friction",
    "action_move_to",
    "action_move_start",
    "action_move_random",
    "action_snap",
    "action_wrap",
    "action_move_contact",
    "action_bounce",
    "action_path",
    "action_path_end",
    "action_path_position",
    "action_path_speed",
    "action_linear_step",
    /* potential_step + main1.lib (20) */
    "action_potential_step",
    "action_create_object",
    "action_create_object_motion",
    "action_create_object_random",
    "action_change_object",
    "action_kill_object",
    "action_kill_position",
    "action_sprite_set",
    "action_sprite_transform",
    "action_sprite_color",
    "action_sound",
    "action_end_sound",
    "action_if_sound",
    "action_previous_room",
    "action_next_room",
    "action_current_room",
    "action_another_room",
    "action_if_previous_room",
    "action_if_next_room",
    "action_restart_room",
    /* main2.lib (32) */
    "action_set_alarm",
    "action_sleep",
    "action_timeline_set",
    "action_timeline_start",
    "action_timeline_pause",
    "action_timeline_stop",
    "action_timeline_clear",
    "action_timeline_speed",
    "action_message",
    "action_show_message",
    "action_show_info",
    "action_show_video",
    "action_splash_text",
    "action_splash_image",
    "action_splash_web",
    "action_splash_video",
    "action_splash_settings",
    "action_webpage",
    "action_restart_game",
    "action_end_game",
    "action_save_game",
    "action_load_game",
    "action_replace_sprite",
    "action_replace_sound",
    "action_replace_background",
    "action_set_cursor",
    "action_fullscreen",
    "action_snapshot",
    "action_cd_play",
    "action_cd_stop",
    "action_cd_pause",
    "action_cd_resume",
    /* control.lib (23) */
    "action_cd_present",
    "action_cd_playing",
    "action_if_empty",
    "action_if_collision",
    "action_if_object",
    "action_if_number",
    "action_if_dice",
    "action_if_question",
    "action_if",
    "action_if_mouse",
    "action_if_aligned",
    "action_else",
    "action_exit",
    "action_repeat",
    "action_block_begin",
    "action_block_end",
    "action_inherited",
    "action_execute_code",
    "action_execute_script",
    "action_comment",
    "action_set_variable",
    "action_if_variable",
    "action_draw_variable",
    /* score.lib (14) */
    "action_set_score",
    "action_if_score",
    "action_draw_score",
    "action_highscore_show",
    "action_highscore_clear",
    "action_set_life",
    "action_set_lives",
    "action_if_life",
    "action_if_lives",
    "action_draw_life",
    "action_draw_lives",
    "action_draw_life_images",
    "action_set_health",
    "action_if_health",
    /* health draw + caption + extra.lib (15) */
    "action_draw_health",
    "action_set_caption",
    "action_partsyst_create",
    "action_partsyst_destroy",
    "action_partsyst_clear",
    "action_parttype_create",
    "action_parttype_color",
    "action_parttype_life",
    "action_parttype_speed",
    "action_parttype_gravity",
    "action_parttype_secondary",
    "action_partemit_create",
    "action_partemit_destroy",
    "action_partemit_burst",
    "action_partemit_stream",
    /* effect + draw.lib (13 -> total 129!) */
    "action_effect",
    "action_draw_sprite",
    "action_draw_background",
    "action_draw_text",
    "action_draw_text_transformed",
    "action_draw_rectangle",
    "action_draw_gradient_hor",
    "action_draw_gradient_vert",
    "action_draw_ellipse",
    "action_draw_ellipse_gradient",
    "action_draw_line",
    "action_draw_arrow",
    "action_color"
};

int gm82_action_standard_count(void) {
    return (int)(sizeof(k_gm82_standard_129_actions) / sizeof(k_gm82_standard_129_actions[0]));
}

const char *gm82_action_standard_name(int index) {
    if (index < 0 || index >= gm82_action_standard_count()) return NULL;
    return k_gm82_standard_129_actions[index];
}

/* ---- Android UI Queue & Virtual Desktop Hardware State ---- */
typedef struct {
    int kind;
    char title[128];
    char payload[512];
    int flag;
} gm82_ui_event_item;

static gm82_ui_event_item g_ui_queue[GM82_UI_QUEUE_CAP];
static int g_ui_head = 0;
static int g_ui_tail = 0;
static int g_ui_count = 0;
static int g_question_answer = 1;

static int g_cd_present = 1;
static int g_cd_playing = 0;
static int g_cd_paused = 0;
static int g_cd_door_open = 0;
static int g_cd_track_first = 1;
static int g_cd_track_last = 1;

static int g_fullscreen = 0;
static int g_cursor_sprite = -1;
static int g_cursor_visible = 1;
static int g_dnd_relative = 0;
static int g_dnd_exit_requested = 0;

static char g_splash_caption[128] = "NOR Maker";
static int g_splash_w = 640;
static int g_splash_h = 480;
static int g_splash_flags = 0;
static char g_last_snapshot_path[256] = "";

static int g_caption_show_score = 1;
static int g_caption_show_lives = 1;
static int g_caption_show_health = 1;
static char g_caption_score[64] = "Score: ";
static char g_caption_lives[64] = "Lives: ";
static char g_caption_health[64] = "Health: ";

typedef struct {
    char name[64];
    double score;
} gm82_highscore_entry;

static gm82_highscore_entry g_highscores[GM82_MAX_HIGHSCORES];
static int g_highscore_count = 0;

typedef struct {
    int used;
    int shape;
    int sprite;
    double size_min, size_max, size_incr;
    int32_t col1, col2;
    double alpha1, alpha2;
    int life_min, life_max;
    double spd_min, spd_max, dir_min, dir_max, friction;
    double grav_amt, grav_dir;
    int step_type, step_cnt, death_type, death_cnt;
} gm82_dnd_part_type;

typedef struct {
    int used;
    int shape;
    double xmin, xmax, ymin, ymax;
    int stream_type, stream_count;
} gm82_dnd_part_emitter;

static int g_dnd_part_system_id = 0;
static gm82_dnd_part_type g_dnd_part_types[GM82_MAX_PART_TYPES];
static gm82_dnd_part_emitter g_dnd_part_emitters[GM82_MAX_PART_EMITTERS];

static void json_escape_str(const char *src, char *dst, size_t cap) {
    if (!dst || cap == 0) return;
    if (!src) { dst[0] = '\0'; return; }
    size_t w = 0;
    for (size_t i = 0; src[i] != '\0' && w + 2 < cap; i++) {
        unsigned char c = (unsigned char)src[i];
        if (c == '"' || c == '\\') {
            if (w + 3 >= cap) break;
            dst[w++] = '\\';
            dst[w++] = (char)c;
        } else if (c == '\n') {
            if (w + 3 >= cap) break;
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

static void ui_event_push(gm82_ui_event_kind kind, const char *title, const char *payload, int flag) {
    if (g_ui_count >= GM82_UI_QUEUE_CAP) {
        g_ui_head = (g_ui_head + 1) % GM82_UI_QUEUE_CAP;
        g_ui_count--;
    }
    gm82_ui_event_item *it = &g_ui_queue[g_ui_tail];
    memset(it, 0, sizeof(*it));
    it->kind = (int)kind;
    snprintf(it->title, sizeof(it->title), "%s", title ? title : "");
    snprintf(it->payload, sizeof(it->payload), "%s", payload ? payload : "");
    it->flag = flag;
    g_ui_tail = (g_ui_tail + 1) % GM82_UI_QUEUE_CAP;
    g_ui_count++;
}

int gm82_ui_event_pending_count(void) {
    return g_ui_count;
}

int gm82_ui_event_pop_json(char *out, size_t cap) {
    if (!out || cap < 16 || g_ui_count <= 0) return 0;
    gm82_ui_event_item it = g_ui_queue[g_ui_head];
    g_ui_head = (g_ui_head + 1) % GM82_UI_QUEUE_CAP;
    g_ui_count--;
    char esc_title[256], esc_payload[1024];
    json_escape_str(it.title, esc_title, sizeof(esc_title));
    json_escape_str(it.payload, esc_payload, sizeof(esc_payload));
    int n = snprintf(out, cap, "{\"kind\":%d,\"title\":\"%s\",\"payload\":\"%s\",\"flag\":%d}",
                     it.kind, esc_title, esc_payload, it.flag);
    return (n > 0 && (size_t)n < cap) ? 1 : 0;
}

void gm82_ui_event_clear(void) {
    memset(g_ui_queue, 0, sizeof(g_ui_queue));
    g_ui_head = 0;
    g_ui_tail = 0;
    g_ui_count = 0;
}

void gm82_ui_event_set_question_answer(int answer) {
    g_question_answer = answer ? 1 : 0;
}

int gm82_ui_event_get_question_answer(void) {
    return g_question_answer;
}

void gm82_action_cd_state(int *present, int *playing, int *paused, int *track_first, int *track_last) {
    if (present) *present = g_cd_present;
    if (playing) *playing = g_cd_playing;
    if (paused) *paused = g_cd_paused;
    if (track_first) *track_first = g_cd_track_first;
    if (track_last) *track_last = g_cd_track_last;
}

void gm82_highscore_clear(void) {
    memset(g_highscores, 0, sizeof(g_highscores));
    g_highscore_count = 0;
}

void gm82_highscore_add(const char *name, double score) {
    const char *n = (name && name[0]) ? name : "Player";
    int pos = g_highscore_count;
    for (int i = 0; i < g_highscore_count; i++) {
        if (score > g_highscores[i].score) {
            pos = i;
            break;
        }
    }
    if (pos >= GM82_MAX_HIGHSCORES) return;
    int limit = g_highscore_count < GM82_MAX_HIGHSCORES ? g_highscore_count : GM82_MAX_HIGHSCORES - 1;
    for (int i = limit; i > pos; i--) {
        g_highscores[i] = g_highscores[i - 1];
    }
    snprintf(g_highscores[pos].name, sizeof(g_highscores[pos].name), "%s", n);
    g_highscores[pos].score = score;
    if (g_highscore_count < GM82_MAX_HIGHSCORES) g_highscore_count++;
}

int gm82_highscore_count(void) {
    return g_highscore_count;
}

int gm82_action_get_fullscreen(void) {
    return g_fullscreen;
}

/* Fallback static runtime so standalone native calls never crash when rt==NULL */
static gm82_runtime *ensure_rt(gm82_runtime *rt) {
    if (rt) return rt;
    gm82_runtime *g = gm82_gml_get_runtime();
    if (g) return g;
    static gm82_runtime s_fallback_rt;
    static int s_init = 0;
    if (!s_init) {
        gm82_runtime_init(&s_fallback_rt);
        s_fallback_rt.running = 1;
        s_fallback_rt.room_width = 640;
        s_fallback_rt.room_height = 480;
        s_init = 1;
    }
    return &s_fallback_rt;
}

static gm82_instance *ensure_self(gm82_runtime *rt, gm82_instance *self) {
    if (self) return self;
    gm82_instance *gs = gm82_gml_get_self();
    if (gs) return gs;
    static gm82_instance s_fallback_self;
    static int s_self_init = 0;
    if (!s_self_init) {
        memset(&s_fallback_self, 0, sizeof(s_fallback_self));
        s_fallback_self.id = 100000;
        s_fallback_self.alive = 1;
        s_fallback_self.visible = 1;
        s_fallback_self.image_xscale = 1.0;
        s_fallback_self.image_yscale = 1.0;
        s_fallback_self.image_alpha = 1.0;
        s_fallback_self.image_blend = 0xFFFFFF;
        s_fallback_self.timeline_index = -1;
        s_fallback_self.path_index = -1;
        s_fallback_self.path_scale = 1.0;
        s_self_init = 1;
    }
    (void)rt;
    return &s_fallback_self;
}

/* ---- Original GMK binary/text action scanners ---- */
static int32_t rd_i32(const uint8_t *p) {
    return gm82_read_i32le(p);
}

static uint8_t *inflate_at(const uint8_t *src, size_t n, size_t *ol) {
    *ol = 0;
    z_stream strm; memset(&strm, 0, sizeof(strm));
    if (inflateInit2(&strm, 15) != Z_OK) return NULL;
    size_t cap = n * 8 + 256;
    uint8_t *dst = (uint8_t *)malloc(cap);
    if (!dst) { inflateEnd(&strm); return NULL; }
    strm.next_in = (Bytef *)src; strm.avail_in = (uInt)n;
    strm.next_out = dst; strm.avail_out = (uInt)cap;
    int ret;
    while ((ret = inflate(&strm, Z_NO_FLUSH)) == Z_OK) {
        if (strm.avail_out == 0) {
            size_t used = cap; cap *= 2;
            uint8_t *nd = (uint8_t *)realloc(dst, cap);
            if (!nd) { free(dst); inflateEnd(&strm); return NULL; }
            dst = nd; strm.next_out = dst + used; strm.avail_out = (uInt)(cap - used);
        }
    }
    if (ret != Z_STREAM_END) { free(dst); inflateEnd(&strm); return NULL; }
    *ol = strm.total_out; inflateEnd(&strm); return dst;
}

void gm82_action_table_free(gm82_action_table *t) {
    if (!t) return;
    for (int i = 0; i < t->count; i++) {
        for (int a = 0; a < t->objects[i].count; a++) free(t->objects[i].items[a].code);
        free(t->objects[i].items);
    }
    free(t->objects);
    memset(t, 0, sizeof(*t));
}

static void add_action(gm82_object_actions *oa, int etype, int enumb, const char *name,
                       int aid, int kind, const int32_t *args, int argc,
                       const char str_args[][128], int str_argc) {
    if (oa->count >= oa->capacity) {
        int nc = oa->capacity ? oa->capacity * 2 : 8;
        gm82_action_ref *n = (gm82_action_ref *)realloc(oa->items, (size_t)nc * sizeof(*n));
        if (!n) return;
        oa->items = n; oa->capacity = nc;
    }
    gm82_action_ref *a = &oa->items[oa->count++];
    memset(a, 0, sizeof(*a));
    a->event_type = etype;
    a->event_numb = enumb;
    if (argc > 0) a->action_id = args[0];
    else a->action_id = aid;
    if (argc > 1) a->kind = args[1];
    else a->kind = kind;
    a->argc = 0;
    a->str_argc = 0;
    if (args && argc > 0) {
        int n = argc > GM82_ACTION_MAX_ARGS ? GM82_ACTION_MAX_ARGS : argc;
        for (int i = 0; i < n; i++) a->args[i] = args[i];
        a->argc = n;
    }
    if (str_args && str_argc > 0) {
        int n = str_argc > 4 ? 4 : str_argc;
        for (int i = 0; i < n; i++) {
            memcpy(a->str_args[i], str_args[i], 127);
            a->str_args[i][127] = '\0';
        }
        a->str_argc = n;
    }
    if (name) {
        snprintf(a->name, sizeof(a->name), "%s", name);
    }
}

int gm82_actions_scan_gmk(const uint8_t *data, size_t size, gm82_action_table *out) {
    if (!data || !out || size < 16) return 0;
    memset(out, 0, sizeof(*out));
    gm82_object_actions tmp[128];
    memset(tmp, 0, sizeof(tmp));
    int nobj = 0;
    gm82_object_actions global_bucket;
    memset(&global_bucket, 0, sizeof(global_bucket));
    strncpy(global_bucket.object_name, "_global_actions", sizeof(global_bucket.object_name) - 1);
    for (size_t i = 12; i + 2 < size; i++) {
        if (!(data[i] == 0x78 && (data[i + 1] == 0x9c || data[i + 1] == 0xda ||
                                  data[i + 1] == 0x01 || data[i + 1] == 0x5e)))
            continue;
        size_t ol = 0;
        uint8_t *d = inflate_at(data + i, size - i, &ol);
        i += 16;
        if (!d || ol < 16) { free(d); continue; }
        for (size_t o = 0; o + 8 < ol; o++) {
            int32_t n = rd_i32(d + o);
            if (n < 8 || n > 48 || o + 4 + (size_t)n > ol) continue;
            const uint8_t *s = d + o + 4;
            if (memcmp(s, "action_", 7) != 0) continue;
            int good = 1;
            for (int k = 0; k < n; k++)
                if (s[k] < 32 || s[k] > 126) { good = 0; break; }
            if (!good) continue;
            char aname[64];
            memcpy(aname, s, (size_t)n);
            aname[n] = 0;
            int dup = 0;
            for (int ai = 0; ai < global_bucket.count; ai++)
                if (strcmp(global_bucket.items[ai].name, aname) == 0) { dup = 1; break; }
            if (dup) { o += 4 + (size_t)n; continue; }
            int32_t args[GM82_ACTION_MAX_ARGS];
            int argc = 0;
            char str_args[4][128];
            int str_argc = 0;
            memset(str_args, 0, sizeof(str_args));
            size_t ao = o + 4 + (size_t)n;
            while (argc < GM82_ACTION_MAX_ARGS && ao + 4 <= ol) {
                int32_t v = rd_i32(d + ao);
                if (v >= 8 && v <= 48 && ao + 4 + (size_t)v <= ol) {
                    const uint8_t *p = d + ao + 4;
                    if (memcmp(p, "action_", 7) == 0) break;
                    if (str_argc < 4 && v >= 1 && v <= 63) {
                        int ok = 1;
                        for (int k = 0; k < v; k++) {
                            unsigned char c = p[k];
                            if (c < 32 || c > 126) { ok = 0; break; }
                        }
                        if (ok) {
                            memcpy(str_args[str_argc], p, (size_t)v);
                            str_args[str_argc][v] = 0;
                            str_argc++;
                            ao += 4 + (size_t)v;
                            continue;
                        }
                    }
                }
                if (v == 400) break;
                args[argc++] = v;
                ao += 4;
            }
            add_action(&global_bucket, -1, 0, aname, 0, 0, args, argc, str_args, str_argc);
            o += 4 + (size_t)n;
        }
        free(d);
    }
    if (global_bucket.count > 0 && nobj < 128)
        tmp[nobj++] = global_bucket;
    else
        free(global_bucket.items);
    out->count = nobj;
    if (nobj > 0) {
        out->objects = (gm82_object_actions *)malloc((size_t)nobj * sizeof(*out->objects));
        if (out->objects)
            memcpy(out->objects, tmp, (size_t)nobj * sizeof(*tmp));
        else
            out->count = 0;
    }
    return out->count;
}

/* Helpers for action argument extraction */
static double a_num(const gm82_action_arg *args, int argc, int idx, double defv) {
    if (!args || idx < 0 || idx >= argc) return defv;
    if (args[idx].is_string && args[idx].str[0]) {
        char *end = NULL;
        double v = strtod(args[idx].str, &end);
        if (end && end != args[idx].str && *end == '\0') return v;
    }
    return args[idx].num;
}

static const char *a_str(const gm82_action_arg *args, int argc, int idx, const char *defv) {
    if (!args || idx < 0 || idx >= argc) return defv;
    if (args[idx].is_string && args[idx].str[0]) return args[idx].str;
    return defv;
}

static int compare_op(double cur, int op, double thr) {
    switch (op) {
        case 1: return cur < thr;
        case 2: return cur > thr;
        case 3: return cur <= thr;
        case 4: return cur >= thr;
        case 5: return cur != thr;
        default: return cur == thr;
    }
}

static void sync_speed_dir_from_hv(gm82_instance *self) {
    self->speed = hypot(self->hspeed, self->vspeed);
    if (self->speed > 1e-9) {
        double deg = atan2(-self->vspeed, self->hspeed) * (180.0 / M_PI);
        if (deg < 0.0) deg += 360.0;
        self->direction = deg;
    }
}

static void sync_hv_from_speed_dir(gm82_instance *self) {
    double rad = self->direction * (M_PI / 180.0);
    self->hspeed = self->speed * cos(rad);
    self->vspeed = -self->speed * sin(rad);
}

static double get_instance_or_global_var(gm82_runtime *rt, gm82_instance *self, const char *vname) {
    if (!vname || !vname[0]) return 0.0;
    if (strcmp(vname, "x") == 0) return self ? self->x : 0.0;
    if (strcmp(vname, "y") == 0) return self ? self->y : 0.0;
    if (strcmp(vname, "hspeed") == 0) return self ? self->hspeed : 0.0;
    if (strcmp(vname, "vspeed") == 0) return self ? self->vspeed : 0.0;
    if (strcmp(vname, "speed") == 0) return self ? self->speed : 0.0;
    if (strcmp(vname, "direction") == 0) return self ? self->direction : 0.0;
    if (strcmp(vname, "sprite_index") == 0) return self ? (double)self->sprite_index : -1.0;
    if (strcmp(vname, "image_index") == 0) return self ? (double)self->image_index : 0.0;
    if (strcmp(vname, "image_speed") == 0) return self ? self->image_speed : 1.0;
    if (strcmp(vname, "visible") == 0) return self ? (double)self->visible : 1.0;
    if (strcmp(vname, "solid") == 0) return self ? (double)self->solid : 0.0;
    if (strcmp(vname, "depth") == 0) return self ? (double)self->depth : 0.0;
    if (strcmp(vname, "score") == 0) return gml_get_score();
    if (strcmp(vname, "lives") == 0) return gml_get_lives();
    if (strcmp(vname, "health") == 0) return gml_get_health();
    double cur = 0.0;
    if (gm82_gml_eval_expr(rt, self, vname, &cur)) return cur;
    return 0.0;
}

static void set_instance_or_global_var(gm82_runtime *rt, gm82_instance *self, const char *vname, double val) {
    if (!vname || !vname[0]) return;
    if (strcmp(vname, "x") == 0) { self->x = val; return; }
    if (strcmp(vname, "y") == 0) { self->y = val; return; }
    if (strcmp(vname, "hspeed") == 0) { self->hspeed = val; sync_speed_dir_from_hv(self); return; }
    if (strcmp(vname, "vspeed") == 0) { self->vspeed = val; sync_speed_dir_from_hv(self); return; }
    if (strcmp(vname, "speed") == 0) { self->speed = val; sync_hv_from_speed_dir(self); return; }
    if (strcmp(vname, "direction") == 0) { self->direction = val; sync_hv_from_speed_dir(self); return; }
    if (strcmp(vname, "sprite_index") == 0) { self->sprite_index = (int32_t)val; return; }
    if (strcmp(vname, "image_index") == 0) { self->image_index = (int32_t)val; return; }
    if (strcmp(vname, "image_speed") == 0) { self->image_speed = val; return; }
    if (strcmp(vname, "visible") == 0) { self->visible = (val != 0.0); return; }
    if (strcmp(vname, "solid") == 0) { self->solid = (val != 0.0); return; }
    if (strcmp(vname, "depth") == 0) { self->depth = (int32_t)val; return; }
    if (strcmp(vname, "score") == 0) { gml_set_score(val); return; }
    if (strcmp(vname, "lives") == 0) { gml_set_lives(val); return; }
    if (strcmp(vname, "health") == 0) { gml_set_health(val); return; }
    char stmt[640];
    snprintf(stmt, sizeof(stmt), "%s = %.15g;", vname, val);
    gm82_gml_eval_stmt(rt, self, stmt);
}

/* ---- Unified 129+ Lib Action Dispatcher ---- */
bool gm82_action_call_args(gm82_runtime *rt_in, gm82_instance *self_in, const char *name,
                           const gm82_action_arg *args, int argc, double *out_val) {
    if (!name || !name[0]) return false;
    gm82_runtime *rt = ensure_rt(rt_in);
    gm82_instance *self = ensure_self(rt, self_in);
    double res = 1.0;

    gm82_gml_set_runtime(rt);
    gm82_gml_set_self(self);

    /* ==================== MOVE LIB ==================== */
    if (strcmp(name, "action_move") == 0 || strcmp(name, "action_move_fixed") == 0) {
        const char *mask = a_str(args, argc, 0, "");
        double spd = a_num(args, argc, 1, 0.0);
        if (mask && strlen(mask) == 9 && (mask[0] == '0' || mask[0] == '1')) {
            /* GM 9-slot numpad layout: 0=DL(225) 1=D(270) 2=DR(315) 3=L(180) 4=STOP 5=R(0) 6=UL(135) 7=U(90) 8=UR(45) */
            static const double k_dirs[9] = { 225.0, 270.0, 315.0, 180.0, -1.0, 0.0, 135.0, 90.0, 45.0 };
            int choices[9], cn = 0;
            for (int k = 0; k < 9; k++) if (mask[k] == '1') choices[cn++] = k;
            if (cn > 0) {
                int pick = choices[rand() % cn];
                if (k_dirs[pick] < 0.0) {
                    self->speed = 0.0; self->hspeed = 0.0; self->vspeed = 0.0;
                } else {
                    self->direction = k_dirs[pick];
                    self->speed = spd;
                    sync_hv_from_speed_dir(self);
                }
            }
        } else if (argc >= 2) {
            self->hspeed = a_num(args, argc, 0, self->hspeed);
            self->vspeed = a_num(args, argc, 1, self->vspeed);
            sync_speed_dir_from_hv(self);
            self->x += self->hspeed;
            self->y += self->vspeed;
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_set_motion") == 0 || strcmp(name, "action_motion_set") == 0 ||
        strcmp(name, "action_move_free") == 0) {
        self->direction = a_num(args, argc, 0, self->direction);
        self->speed = a_num(args, argc, 1, self->speed);
        sync_hv_from_speed_dir(self);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_move_point") == 0) {
        double tx = a_num(args, argc, 0, self->x);
        double ty = a_num(args, argc, 1, self->y);
        double sp = a_num(args, argc, 2, 1.0);
        gml_move_towards_point(tx, ty, sp);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_set_hspeed") == 0 || strcmp(name, "action_speed_horizontal") == 0) {
        double v = a_num(args, argc, 0, 2.0);
        if (g_dnd_relative) self->hspeed += v;
        else self->hspeed = v;
        sync_speed_dir_from_hv(self);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_set_vspeed") == 0 || strcmp(name, "action_speed_vertical") == 0) {
        double v = a_num(args, argc, 0, 2.0);
        if (g_dnd_relative) self->vspeed += v;
        else self->vspeed = v;
        sync_speed_dir_from_hv(self);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_set_gravity") == 0) {
        self->gravity = a_num(args, argc, 0, 0.5);
        if (argc >= 2) self->gravity_direction = a_num(args, argc, 1, 270.0);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_reverse_xdir") == 0 || strcmp(name, "action_reverse_x") == 0) {
        self->hspeed = -self->hspeed;
        sync_speed_dir_from_hv(self);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_reverse_ydir") == 0 || strcmp(name, "action_reverse_y") == 0) {
        self->vspeed = -self->vspeed;
        sync_speed_dir_from_hv(self);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_set_friction") == 0) {
        self->friction = a_num(args, argc, 0, 0.1);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_move_to") == 0) {
        if (argc >= 2) {
            double nx = a_num(args, argc, 0, g_dnd_relative ? 0.0 : self->x);
            double ny = a_num(args, argc, 1, g_dnd_relative ? 0.0 : self->y);
            if (g_dnd_relative) {
                self->x += nx;
                self->y += ny;
            } else {
                self->x = nx;
                self->y = ny;
            }
        } else {
            self->x = self->xstart;
            self->y = self->ystart;
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_move_start") == 0) {
        self->x = self->xstart;
        self->y = self->ystart;
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_move_random") == 0) {
        int rw = (rt->room_width > 0) ? rt->room_width : 640;
        int rh = (rt->room_height > 0) ? rt->room_height : 480;
        int sx = (int)a_num(args, argc, 0, 1.0);
        int sy = (int)a_num(args, argc, 1, 1.0);
        if (sx <= 0) sx = 1;
        if (sy <= 0) sy = 1;
        self->x = (double)(((rand() % rw) / sx) * sx);
        self->y = (double)(((rand() % rh) / sy) * sy);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_snap") == 0) {
        int sx = (int)a_num(args, argc, 0, 16.0);
        int sy = (int)a_num(args, argc, 1, 16.0);
        if (sx <= 0) sx = 16;
        if (sy <= 0) sy = 16;
        self->x = (double)(((int)self->x / sx) * sx);
        self->y = (double)(((int)self->y / sy) * sy);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_wrap") == 0) {
        int rw = (rt->room_width > 0) ? rt->room_width : 640;
        int rh = (rt->room_height > 0) ? rt->room_height : 480;
        int hor = (argc >= 1) ? (int)a_num(args, argc, 0, 1.0) : 1;
        int vert = (argc >= 2) ? (int)a_num(args, argc, 1, 1.0) : 1;
        if (argc == 1) { /* GM8 DnD: 0=hor, 1=vert, 2=both */
            int mode = hor;
            hor = (mode == 0 || mode == 2) ? 1 : 0;
            vert = (mode == 1 || mode == 2) ? 1 : 0;
        }
        if (hor) {
            if (self->x < 0) self->x += rw;
            else if (self->x > rw) self->x -= rw;
        }
        if (vert) {
            if (self->y < 0) self->y += rh;
            else if (self->y > rh) self->y -= rh;
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_move_contact") == 0) {
        double dir = a_num(args, argc, 0, self->direction);
        double maxdist = a_num(args, argc, 1, -1.0);
        int against = (int)a_num(args, argc, 2, 0.0);
        if (against == 0) res = gml_move_contact_solid(dir, maxdist);
        else res = gml_move_contact_all(dir, maxdist);
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_bounce") == 0) {
        int rw = rt->room_width ? rt->room_width : 640;
        int rh = rt->room_height ? rt->room_height : 480;
        if (self->x < 0 || self->x > rw) self->hspeed = -self->hspeed;
        if (self->y < 0 || self->y > rh) self->vspeed = -self->vspeed;
        if (self->hspeed != 0.0 || self->vspeed != 0.0) {
            if (self->x >= 0 && self->x <= rw && self->y >= 0 && self->y <= rh) {
                if (fabs(self->vspeed) >= fabs(self->hspeed)) self->vspeed = -self->vspeed;
                else self->hspeed = -self->hspeed;
            }
            sync_speed_dir_from_hv(self);
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_path") == 0) {
        double path = a_num(args, argc, 0, 0.0);
        double spd = a_num(args, argc, 1, 1.0);
        double endact = a_num(args, argc, 2, 0.0);
        double abs_val = a_num(args, argc, 3, 1.0);
        res = gml_path_start(path, spd, endact, abs_val);
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_path_end") == 0) {
        res = gml_path_end();
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_path_position") == 0) {
        self->path_positionprevious = self->path_position;
        self->path_position = a_num(args, argc, 0, 0.0);
        if (out_val) *out_val = self->path_position;
        return true;
    }
    if (strcmp(name, "action_path_speed") == 0) {
        self->path_speed = a_num(args, argc, 0, 0.0);
        if (out_val) *out_val = self->path_speed;
        return true;
    }
    if (strcmp(name, "action_linear_step") == 0) {
        double tx = a_num(args, argc, 0, self->x);
        double ty = a_num(args, argc, 1, self->y);
        double sp = a_num(args, argc, 2, 1.0);
        gml_move_towards_point(tx, ty, sp);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_potential_step") == 0) {
        double tx = a_num(args, argc, 0, self->x);
        double ty = a_num(args, argc, 1, self->y);
        double sp = a_num(args, argc, 2, 1.0);
        if (argc >= 2) gml_move_towards_point(tx, ty, sp);
        self->x += self->hspeed;
        self->y += self->vspeed;
        if (out_val) *out_val = 1.0;
        return true;
    }

    /* ==================== MAIN1 LIB ==================== */
    if (strcmp(name, "action_create_object") == 0) {
        int obj = (int)a_num(args, argc, 0, (double)self->object_index);
        double x = a_num(args, argc, 1, g_dnd_relative ? 0.0 : self->x);
        double y = a_num(args, argc, 2, g_dnd_relative ? 0.0 : self->y);
        if (g_dnd_relative) { x += self->x; y += self->y; }
        gm82_instance *c = gm82_runtime_instance_create(rt, obj, x, y);
        if (out_val) *out_val = c ? (double)c->id : -4.0;
        return true;
    }
    if (strcmp(name, "action_create_object_motion") == 0) {
        int obj = (int)a_num(args, argc, 0, (double)self->object_index);
        double x = a_num(args, argc, 1, g_dnd_relative ? 0.0 : self->x);
        double y = a_num(args, argc, 2, g_dnd_relative ? 0.0 : self->y);
        if (g_dnd_relative) { x += self->x; y += self->y; }
        double sp = a_num(args, argc, 3, 0.0);
        double dir = a_num(args, argc, 4, 0.0);
        gm82_instance *c = gm82_runtime_instance_create(rt, obj, x, y);
        if (c) {
            c->speed = sp;
            c->direction = dir;
            sync_hv_from_speed_dir(c);
        }
        if (out_val) *out_val = c ? (double)c->id : -4.0;
        return true;
    }
    if (strcmp(name, "action_create_object_random") == 0) {
        int cands[4]; int cn = 0;
        for (int k = 0; k < 4; k++) {
            int o = (int)a_num(args, argc, k, -1.0);
            if (o >= 0) cands[cn++] = o;
        }
        int chosen = (cn > 0) ? cands[rand() % cn] : self->object_index;
        double x = a_num(args, argc, 4, self->x);
        double y = a_num(args, argc, 5, self->y);
        gm82_instance *c = gm82_runtime_instance_create(rt, chosen, x, y);
        if (out_val) *out_val = c ? (double)c->id : -4.0;
        return true;
    }
    if (strcmp(name, "action_change_object") == 0) {
        int target_oi = (int)a_num(args, argc, 0, (double)self->object_index);
        if (rt->objects && target_oi >= 0 && target_oi < rt->objects->count) {
            self->object_index = target_oi;
            self->sprite_index = rt->objects->items[target_oi].sprite_index;
            self->solid = rt->objects->items[target_oi].solid;
            self->visible = rt->objects->items[target_oi].visible;
            self->depth = rt->objects->items[target_oi].depth;
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_kill_object") == 0 || strcmp(name, "action_destroy") == 0) {
        gm82_runtime_instance_destroy(rt, self);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_kill_position") == 0) {
        double px = a_num(args, argc, 0, self->x);
        double py = a_num(args, argc, 1, self->y);
        int killed = 0;
        for (int i = 0; i < rt->instance_count; i++) {
            gm82_instance *o = &rt->instances[i];
            if (!o->alive) continue;
            double dx = o->x - px, dy = o->y - py;
            if (dx * dx + dy * dy <= 256.0) {
                gm82_runtime_instance_destroy(rt, o);
                killed++;
            }
        }
        if (out_val) *out_val = (double)killed;
        return true;
    }
    if (strcmp(name, "action_sprite_set") == 0 || strcmp(name, "action_set_sprite") == 0) {
        if (argc >= 1) self->sprite_index = (int32_t)a_num(args, argc, 0, (double)self->sprite_index);
        if (argc >= 2) {
            self->image_index = (int32_t)a_num(args, argc, 1, (double)self->image_index);
            self->image_frac = (double)self->image_index;
        }
        if (argc >= 3) self->image_speed = a_num(args, argc, 2, self->image_speed);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_sprite_transform") == 0) {
        double xs = a_num(args, argc, 0, 1.0);
        double ys = a_num(args, argc, 1, 1.0);
        int mirror = (int)a_num(args, argc, 3, 0.0);
        self->image_xscale = (xs != 0.0 ? xs : 1.0) * ((mirror == 1 || mirror == 3) ? -1.0 : 1.0);
        self->image_yscale = (ys != 0.0 ? ys : 1.0) * ((mirror == 2 || mirror == 3) ? -1.0 : 1.0);
        if (argc >= 3) self->image_angle = a_num(args, argc, 2, self->image_angle);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_sprite_color") == 0) {
        if (argc >= 1) self->image_blend = (int32_t)a_num(args, argc, 0, (double)self->image_blend);
        if (argc >= 2) {
            double a = a_num(args, argc, 1, 1.0);
            self->image_alpha = (a > 1.0) ? (a / 255.0) : a;
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_sound") == 0 || strcmp(name, "action_play_sound") == 0) {
        double sid = a_num(args, argc, 0, 0.0);
        int loop = (int)a_num(args, argc, 1, 0.0);
        res = loop ? gml_sound_loop(sid) : gml_sound_play(sid);
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_end_sound") == 0) {
        if (argc >= 1 && a_num(args, argc, 0, -1.0) >= 0.0)
            res = gml_sound_stop(a_num(args, argc, 0, 0.0));
        else
            res = gml_sound_stop_all();
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_if_sound") == 0) {
        int sid = (int)a_num(args, argc, 0, -1.0);
        res = (sid >= 0 && gml_sound_isplaying((double)sid) != 0.0) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_sound_volume") == 0) {
        res = gml_sound_volume(a_num(args, argc, 0, 0.0), a_num(args, argc, 1, 1.0));
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_sound_fade") == 0) {
        res = gml_sound_volume(a_num(args, argc, 0, 0.0), a_num(args, argc, 1, 0.0));
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_previous_room") == 0) {
        if (rt->rooms && rt->current_room > 0) gm82_runtime_goto_room(rt, rt->current_room - 1);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_next_room") == 0) {
        if (rt->rooms && rt->current_room + 1 < rt->rooms->count) gm82_runtime_goto_room(rt, rt->current_room + 1);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_current_room") == 0 || strcmp(name, "action_restart_room") == 0) {
        gm82_runtime_goto_room(rt, rt->current_room);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_another_room") == 0 || strcmp(name, "action_different_room") == 0) {
        gm82_runtime_goto_room(rt, (int)a_num(args, argc, 0, 0.0));
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_if_previous_room") == 0) {
        res = (rt->current_room > 0) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_if_next_room") == 0) {
        int n = rt->rooms ? rt->rooms->count : 0;
        res = (rt->current_room + 1 < n) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }

    /* ==================== MAIN2 LIB ==================== */
    if (strcmp(name, "action_set_alarm") == 0) {
        int val = (int)a_num(args, argc, 0, 30.0);
        int idx = (int)a_num(args, argc, 1, 0.0);
        if (idx < 0 || idx > 11) {
            /* Backward compatibility with callers passing (idx, val) */
            int alt_idx = (int)a_num(args, argc, 0, 0.0);
            if (alt_idx >= 0 && alt_idx <= 11 && argc >= 2) {
                idx = alt_idx;
                val = (int)a_num(args, argc, 1, 30.0);
            }
        }
        if (idx < 0) idx = 0;
        if (idx > 11) idx = 11;
        if (g_dnd_relative) self->alarms[idx] = (self->alarms[idx] > 0 ? self->alarms[idx] : 0) + val;
        else self->alarms[idx] = val;
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_sleep") == 0 || strcmp(name, "action_wait") == 0) {
        int ms = (int)a_num(args, argc, 0, 0.0);
        if (ms > 0) {
            if (ms > 2000) ms = 2000;
#ifdef _WIN32
            Sleep((DWORD)ms);
#else
            struct timespec ts;
            ts.tv_sec = ms / 1000;
            ts.tv_nsec = (long)(ms % 1000) * 1000000L;
            nanosleep(&ts, NULL);
#endif
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_timeline_set") == 0) {
        self->timeline_index = (int32_t)a_num(args, argc, 0, 0.0);
        self->timeline_position = a_num(args, argc, 1, 0.0);
        self->timeline_running = (argc >= 3) ? (a_num(args, argc, 2, 1.0) != 0.0 ? 1 : 0) : 1;
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_timeline_start") == 0) {
        self->timeline_running = 1;
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_timeline_pause") == 0) {
        self->timeline_running = 0;
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_timeline_stop") == 0 || strcmp(name, "action_timeline_clear") == 0) {
        self->timeline_index = -1;
        self->timeline_position = 0.0;
        self->timeline_running = 0;
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_timeline_speed") == 0) {
        self->timeline_speed = a_num(args, argc, 0, 1.0);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_message") == 0 || strcmp(name, "action_show_message") == 0) {
        const char *txt = a_str(args, argc, 0, "Message");
        gml_show_debug_message(txt);
        gml_draw_text(self->x, self->y, txt);
        ui_event_push(GM82_UI_EVENT_MESSAGE, g_splash_caption, txt, 0);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_show_info") == 0 || strcmp(name, "action_load_info") == 0) {
        ui_event_push(GM82_UI_EVENT_SHOW_INFO, "Game Information", "GameMaker 8.2 / NOR Maker Runtime", 0);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_show_video") == 0 || strcmp(name, "action_splash_video") == 0) {
        const char *fn = a_str(args, argc, 0, "");
        int loop = (int)a_num(args, argc, 1, 0.0);
        ui_event_push(GM82_UI_EVENT_SPLASH_VIDEO, g_splash_caption, fn, loop);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_splash_text") == 0) {
        const char *fn = a_str(args, argc, 0, "");
        ui_event_push(GM82_UI_EVENT_SPLASH_TEXT, g_splash_caption, fn, g_splash_flags);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_splash_image") == 0) {
        const char *fn = a_str(args, argc, 0, "");
        ui_event_push(GM82_UI_EVENT_SPLASH_IMAGE, g_splash_caption, fn, g_splash_flags);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_splash_web") == 0) {
        const char *url = a_str(args, argc, 0, "");
        int delay = (int)a_num(args, argc, 1, 0.0);
        ui_event_push(GM82_UI_EVENT_SPLASH_WEB, g_splash_caption, url, delay);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_splash_settings") == 0) {
        const char *cap = a_str(args, argc, 0, "");
        if (cap[0]) snprintf(g_splash_caption, sizeof(g_splash_caption), "%s", cap);
        int w = (int)a_num(args, argc, 1, (double)g_splash_w);
        int h = (int)a_num(args, argc, 2, (double)g_splash_h);
        if (w > 0) g_splash_w = w;
        if (h > 0) g_splash_h = h;
        g_splash_flags = (int)a_num(args, argc, 3, (double)g_splash_flags);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_webpage") == 0) {
        const char *url = a_str(args, argc, 0, "");
        res = gml_url_open(url);
        ui_event_push(GM82_UI_EVENT_WEBPAGE, "Open URL", url, 0);
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_restart_game") == 0) {
        res = gml_game_restart();
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_end_game") == 0) {
        res = gml_game_end();
        rt->running = 0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_save_game") == 0) {
        const char *path = a_str(args, argc, 0, "nor_save.dat");
        res = gml_game_save(path);
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_load_game") == 0) {
        const char *path = a_str(args, argc, 0, "nor_save.dat");
        res = gml_game_load(path);
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_replace_sprite") == 0 ||
        strcmp(name, "action_replace_sound") == 0 ||
        strcmp(name, "action_replace_background") == 0) {
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_set_cursor") == 0) {
        g_cursor_sprite = (int)a_num(args, argc, 0, -1.0);
        g_cursor_visible = (int)a_num(args, argc, 1, 1.0);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_fullscreen") == 0) {
        int mode = (int)a_num(args, argc, 0, 0.0);
        if (mode == 0) g_fullscreen = !g_fullscreen;
        else if (mode == 1) g_fullscreen = 0;
        else g_fullscreen = 1;
        if (out_val) *out_val = (double)g_fullscreen;
        return true;
    }
    if (strcmp(name, "action_snapshot") == 0) {
        const char *path = a_str(args, argc, 0, "snapshot.bmp");
        snprintf(g_last_snapshot_path, sizeof(g_last_snapshot_path), "%s", path);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_cd_play") == 0) {
        g_cd_track_first = (int)a_num(args, argc, 0, 1.0);
        g_cd_track_last = (int)a_num(args, argc, 1, (double)g_cd_track_first);
        g_cd_playing = g_cd_present ? 1 : 0;
        g_cd_paused = 0;
        if (out_val) *out_val = (double)g_cd_playing;
        return true;
    }
    if (strcmp(name, "action_cd_stop") == 0) {
        g_cd_playing = 0;
        g_cd_paused = 0;
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_cd_pause") == 0) {
        if (g_cd_playing) g_cd_paused = 1;
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_cd_resume") == 0) {
        if (g_cd_present && g_cd_paused) {
            g_cd_paused = 0;
            g_cd_playing = 1;
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_cd_present") == 0) {
        res = g_cd_present ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_cd_playing") == 0) {
        res = (g_cd_playing && !g_cd_paused) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_cd_open_door") == 0 || strcmp(name, "action_cd_close_door") == 0) {
        g_cd_door_open = (strcmp(name, "action_cd_open_door") == 0) ? 1 : 0;
        if (g_cd_door_open) { g_cd_playing = 0; g_cd_paused = 0; }
        if (out_val) *out_val = 1.0;
        return true;
    }

    /* ==================== CONTROL LIB ==================== */
    if (strcmp(name, "action_if_empty") == 0) {
        double x = a_num(args, argc, 0, self->x);
        double y = a_num(args, argc, 1, self->y);
        int obj = (int)a_num(args, argc, 2, -4.0);
        res = 1.0;
        for (int i = 0; i < rt->instance_count; i++) {
            gm82_instance *o = &rt->instances[i];
            if (!o->alive || o == self) continue;
            if (!gm82_instance_matches_object(rt, o, obj)) continue;
            double dx = o->x - x, dy = o->y - y;
            if (dx * dx + dy * dy < 16.0) { res = 0.0; break; }
        }
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_if_collision") == 0) {
        double x = a_num(args, argc, 0, self->x);
        double y = a_num(args, argc, 1, self->y);
        int obj = (int)a_num(args, argc, 2, -1.0);
        res = 0.0;
        for (int i = 0; i < rt->instance_count; i++) {
            gm82_instance *o = &rt->instances[i];
            if (!o->alive || o == self) continue;
            if (!gm82_instance_matches_object(rt, o, obj)) continue;
            double dx = o->x - x, dy = o->y - y;
            if (dx * dx + dy * dy < 256.0) { res = 1.0; break; }
        }
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_if_object") == 0) {
        int obj = (int)a_num(args, argc, 0, -1.0);
        double x = a_num(args, argc, 1, self->x);
        double y = a_num(args, argc, 2, self->y);
        res = 0.0;
        for (int i = 0; i < rt->instance_count; i++) {
            gm82_instance *o = &rt->instances[i];
            if (!o->alive) continue;
            if (!gm82_instance_matches_object(rt, o, obj)) continue;
            double dx = o->x - x, dy = o->y - y;
            if (dx * dx + dy * dy < 256.0) { res = 1.0; break; }
        }
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_if_number") == 0) {
        int obj = (int)a_num(args, argc, 0, -1.0);
        int thr = (int)a_num(args, argc, 1, 0.0);
        int op = (int)a_num(args, argc, 2, 2.0);
        int cnt = 0;
        for (int i = 0; i < rt->instance_count; i++) {
            if (gm82_instance_matches_object(rt, &rt->instances[i], obj)) cnt++;
        }
        res = compare_op((double)cnt, op, (double)thr) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_if_dice") == 0) {
        int n = (int)a_num(args, argc, 0, 2.0);
        if (n <= 0) n = 2;
        res = ((rand() % n) == 0) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_if_question") == 0) {
        const char *q = a_str(args, argc, 0, "Continue?");
        ui_event_push(GM82_UI_EVENT_QUESTION, g_splash_caption, q, 0);
        res = g_question_answer ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_if") == 0) {
        double v = a_num(args, argc, 0, 0.0);
        const char *s = a_str(args, argc, 0, "");
        if (s[0]) gm82_gml_eval_expr(rt, self, s, &v);
        res = (v != 0.0) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_if_mouse") == 0) {
        int btn = (int)a_num(args, argc, 0, 0.0);
        res = (gml_mouse_check_button((double)(btn + 1)) != 0.0) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_if_aligned") == 0) {
        double hs = a_num(args, argc, 0, 16.0);
        double vs = a_num(args, argc, 1, 16.0);
        if (hs <= 0.0) hs = 16.0;
        if (vs <= 0.0) vs = 16.0;
        res = (fmod(self->x, hs) == 0.0 && fmod(self->y, vs) == 0.0) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_else") == 0 || strcmp(name, "action_block_end") == 0 ||
        strcmp(name, "action_block_begin") == 0 || strcmp(name, "action_repeat") == 0 ||
        strcmp(name, "action_comment") == 0) {
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_exit") == 0 || strcmp(name, "action_draw_exit") == 0) {
        g_dnd_exit_requested = 1;
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_inherited") == 0) {
        gm82_events_fire_inherited(rt, self);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_execute_code") == 0 || strcmp(name, "action_code") == 0) {
        const char *code = a_str(args, argc, 0, "");
        if (code[0]) gm82_gml_eval_block(rt, self, code);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_execute_script") == 0 || strcmp(name, "action_script") == 0) {
        double scr = a_num(args, argc, 0, -1.0);
        if (scr >= 0.0) {
            double sargs[5] = {0};
            int sn = (argc > 1) ? (argc - 1) : 0;
            if (sn > 5) sn = 5;
            for (int k = 0; k < sn; k++) sargs[k] = a_num(args, argc, k + 1, 0.0);
            if (sn > 0) gm82_gml_set_script_args(sargs, sn);
            res = gml_script_execute(scr);
        }
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_set_variable") == 0) {
        const char *vname = a_str(args, argc, 0, "");
        double val = a_num(args, argc, 1, 0.0);
        const char *vexpr = a_str(args, argc, 1, "");
        if (vexpr[0]) {
            gm82_gml_eval_expr(rt, self, vexpr, &val);
        }
        if (vname[0]) {
            if (g_dnd_relative) {
                val = get_instance_or_global_var(rt, self, vname) + val;
            }
            set_instance_or_global_var(rt, self, vname, val);
        }
        if (out_val) *out_val = val;
        return true;
    }
    if (strcmp(name, "action_if_variable") == 0) {
        const char *s0 = a_str(args, argc, 0, "");
        const char *s1 = a_str(args, argc, 1, "");
        double cur = a_num(args, argc, 0, 0.0);
        double thr = 0.0;
        int op = 0;
        if (!s0[0] && !s1[0] && argc >= 3 && !args[0].is_string && !args[1].is_string) {
            op = (int)a_num(args, argc, 1, 0.0);
            thr = a_num(args, argc, 2, 0.0);
        } else {
            thr = a_num(args, argc, 1, 0.0);
            op = (int)a_num(args, argc, 2, 0.0);
            if (s0[0]) gm82_gml_eval_expr(rt, self, s0, &cur);
            if (s1[0]) gm82_gml_eval_expr(rt, self, s1, &thr);
        }
        res = compare_op(cur, op, thr) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_draw_variable") == 0) {
        const char *vname = a_str(args, argc, 0, "");
        double x = a_num(args, argc, 1, self->x);
        double y = a_num(args, argc, 2, self->y);
        double val = vname[0] ? get_instance_or_global_var(rt, self, vname) : 0.0;
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", val);
        gml_draw_text(x, y, buf);
        if (out_val) *out_val = 1.0;
        return true;
    }

    /* ==================== SCORE / LIVES / HEALTH LIB ==================== */
    if (strcmp(name, "action_set_score") == 0) {
        double v = a_num(args, argc, 0, 0.0);
        int rel = ((int)a_num(args, argc, 1, 0.0) != 0) || g_dnd_relative;
        gml_set_score(rel ? (gml_get_score() + v) : v);
        if (out_val) *out_val = gml_get_score();
        return true;
    }
    if (strcmp(name, "action_set_score_relative") == 0 || strcmp(name, "action_score") == 0) {
        gml_set_score(gml_get_score() + a_num(args, argc, 0, 1.0));
        if (out_val) *out_val = gml_get_score();
        return true;
    }
    if (strcmp(name, "action_if_score") == 0) {
        res = compare_op(gml_get_score(), (int)a_num(args, argc, 1, 0.0), a_num(args, argc, 0, 0.0)) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_draw_score") == 0) {
        double x = a_num(args, argc, 0, self->x);
        double y = a_num(args, argc, 1, self->y);
        const char *cap = a_str(args, argc, 2, g_caption_score);
        char buf[96];
        snprintf(buf, sizeof(buf), "%s%g", cap, gml_get_score());
        gml_draw_text(x, y, buf);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_highscore_show") == 0) {
        char buf[512];
        int pos = snprintf(buf, sizeof(buf), "Score: %g\n", gml_get_score());
        for (int i = 0; i < g_highscore_count && (size_t)pos + 64 < sizeof(buf); i++) {
            pos += snprintf(buf + pos, sizeof(buf) - (size_t)pos, "%d. %s - %g\n",
                            i + 1, g_highscores[i].name, g_highscores[i].score);
        }
        ui_event_push(GM82_UI_EVENT_HIGHSCORE, "Highscores", buf, g_highscore_count);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_highscore_clear") == 0) {
        gm82_highscore_clear();
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_set_life") == 0 || strcmp(name, "action_set_lives") == 0) {
        double v = a_num(args, argc, 0, 3.0);
        int rel = ((int)a_num(args, argc, 1, 0.0) != 0) || g_dnd_relative;
        gml_set_lives(rel ? (gml_get_lives() + v) : v);
        if (out_val) *out_val = gml_get_lives();
        return true;
    }
    if (strcmp(name, "action_set_lives_relative") == 0) {
        gml_set_lives(gml_get_lives() + a_num(args, argc, 0, 1.0));
        if (out_val) *out_val = gml_get_lives();
        return true;
    }
    if (strcmp(name, "action_if_life") == 0 || strcmp(name, "action_if_lives") == 0) {
        res = compare_op(gml_get_lives(), (int)a_num(args, argc, 1, 0.0), a_num(args, argc, 0, 0.0)) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_draw_life") == 0 || strcmp(name, "action_draw_lives") == 0) {
        double x = a_num(args, argc, 0, self->x);
        double y = a_num(args, argc, 1, self->y);
        const char *cap = a_str(args, argc, 2, g_caption_lives);
        char buf[96];
        snprintf(buf, sizeof(buf), "%s%g", cap, gml_get_lives());
        gml_draw_text(x, y, buf);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_draw_life_images") == 0) {
        double x = a_num(args, argc, 0, 16.0);
        double y = a_num(args, argc, 1, 16.0);
        double spr = a_num(args, argc, 2, (double)self->sprite_index);
        int n = (int)gml_get_lives();
        if (n < 0) n = 0;
        if (n > 20) n = 20;
        double sw = (spr >= 0) ? gml_sprite_get_width(spr) : 16.0;
        if (sw <= 0.0) sw = 16.0;
        for (int i = 0; i < n; i++) {
            if (spr >= 0) gml_draw_sprite(spr, x + i * sw, y);
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_set_health") == 0) {
        double v = a_num(args, argc, 0, 100.0);
        int rel = ((int)a_num(args, argc, 1, 0.0) != 0) || g_dnd_relative;
        gml_set_health(rel ? (gml_get_health() + v) : v);
        if (out_val) *out_val = gml_get_health();
        return true;
    }
    if (strcmp(name, "action_set_health_relative") == 0) {
        gml_set_health(gml_get_health() + a_num(args, argc, 0, 1.0));
        if (out_val) *out_val = gml_get_health();
        return true;
    }
    if (strcmp(name, "action_if_health") == 0) {
        res = compare_op(gml_get_health(), (int)a_num(args, argc, 1, 0.0), a_num(args, argc, 0, 0.0)) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_draw_health") == 0) {
        double x1 = a_num(args, argc, 0, self->x);
        double y1 = a_num(args, argc, 1, self->y);
        double x2 = a_num(args, argc, 2, x1 + 64.0);
        double y2 = a_num(args, argc, 3, y1 + 10.0);
        double hp = gml_clamp(gml_get_health(), 0.0, 100.0) / 100.0;
        gml_draw_rectangle(x1, y1, x2, y2, 1.0);
        if (hp > 0.0) gml_draw_rectangle(x1, y1, x1 + (x2 - x1) * hp, y2, 0.0);
        char buf[64];
        snprintf(buf, sizeof(buf), "HP: %g", gml_get_health());
        gml_draw_text(x1, y1, buf);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_set_caption") == 0) {
        g_caption_show_score = (int)a_num(args, argc, 0, (double)g_caption_show_score);
        const char *cs = a_str(args, argc, 1, "");
        if (cs[0]) snprintf(g_caption_score, sizeof(g_caption_score), "%s", cs);
        g_caption_show_lives = (int)a_num(args, argc, 2, (double)g_caption_show_lives);
        const char *cl = a_str(args, argc, 3, "");
        if (cl[0]) snprintf(g_caption_lives, sizeof(g_caption_lives), "%s", cl);
        g_caption_show_health = (int)a_num(args, argc, 4, (double)g_caption_show_health);
        const char *ch = a_str(args, argc, 5, "");
        if (ch[0]) snprintf(g_caption_health, sizeof(g_caption_health), "%s", ch);
        if (out_val) *out_val = 1.0;
        return true;
    }

    /* ==================== EXTRA LIB (PARTICLES & EFFECTS) ==================== */
    if (strcmp(name, "action_partsyst_create") == 0) {
        g_dnd_part_system_id = (int)gml_part_system_create();
        if (out_val) *out_val = (double)g_dnd_part_system_id;
        return true;
    }
    if (strcmp(name, "action_partsyst_destroy") == 0) {
        gml_part_system_destroy((double)g_dnd_part_system_id);
        g_dnd_part_system_id = 0;
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_partsyst_clear") == 0) {
        memset(g_dnd_part_types, 0, sizeof(g_dnd_part_types));
        memset(g_dnd_part_emitters, 0, sizeof(g_dnd_part_emitters));
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_parttype_create") == 0) {
        int tid = (int)a_num(args, argc, 0, 0.0);
        if (tid < 0 || tid >= GM82_MAX_PART_TYPES) tid = 0;
        gm82_dnd_part_type *pt = &g_dnd_part_types[tid];
        memset(pt, 0, sizeof(*pt));
        pt->used = 1;
        pt->shape = (int)a_num(args, argc, 1, 0.0);
        pt->sprite = (int)a_num(args, argc, 2, -1.0);
        pt->size_min = a_num(args, argc, 3, 1.0);
        pt->size_max = a_num(args, argc, 4, 1.0);
        pt->size_incr = a_num(args, argc, 5, 0.0);
        double real_tid = gml_part_type_create();
        (void)real_tid;
        if (out_val) *out_val = (double)tid;
        return true;
    }
    if (strcmp(name, "action_parttype_color") == 0) {
        int tid = (int)a_num(args, argc, 0, 0.0);
        if (tid >= 0 && tid < GM82_MAX_PART_TYPES) {
            g_dnd_part_types[tid].used = 1;
            g_dnd_part_types[tid].col1 = (int32_t)a_num(args, argc, 2, 0xFFFFFF);
            g_dnd_part_types[tid].col2 = (int32_t)a_num(args, argc, 3, 0xFFFFFF);
            g_dnd_part_types[tid].alpha1 = a_num(args, argc, 4, 1.0);
            g_dnd_part_types[tid].alpha2 = a_num(args, argc, 5, 1.0);
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_parttype_life") == 0) {
        int tid = (int)a_num(args, argc, 0, 0.0);
        if (tid >= 0 && tid < GM82_MAX_PART_TYPES) {
            g_dnd_part_types[tid].used = 1;
            g_dnd_part_types[tid].life_min = (int)a_num(args, argc, 1, 30.0);
            g_dnd_part_types[tid].life_max = (int)a_num(args, argc, 2, 60.0);
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_parttype_speed") == 0) {
        int tid = (int)a_num(args, argc, 0, 0.0);
        if (tid >= 0 && tid < GM82_MAX_PART_TYPES) {
            g_dnd_part_types[tid].used = 1;
            g_dnd_part_types[tid].spd_min = a_num(args, argc, 1, 1.0);
            g_dnd_part_types[tid].spd_max = a_num(args, argc, 2, 4.0);
            g_dnd_part_types[tid].dir_min = a_num(args, argc, 3, 0.0);
            g_dnd_part_types[tid].dir_max = a_num(args, argc, 4, 360.0);
            g_dnd_part_types[tid].friction = a_num(args, argc, 5, 0.0);
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_parttype_gravity") == 0) {
        int tid = (int)a_num(args, argc, 0, 0.0);
        if (tid >= 0 && tid < GM82_MAX_PART_TYPES) {
            g_dnd_part_types[tid].used = 1;
            g_dnd_part_types[tid].grav_amt = a_num(args, argc, 1, 0.0);
            g_dnd_part_types[tid].grav_dir = a_num(args, argc, 2, 270.0);
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_parttype_secondary") == 0) {
        int tid = (int)a_num(args, argc, 0, 0.0);
        if (tid >= 0 && tid < GM82_MAX_PART_TYPES) {
            g_dnd_part_types[tid].used = 1;
            g_dnd_part_types[tid].step_type = (int)a_num(args, argc, 1, -1.0);
            g_dnd_part_types[tid].step_cnt = (int)a_num(args, argc, 2, 0.0);
            g_dnd_part_types[tid].death_type = (int)a_num(args, argc, 3, -1.0);
            g_dnd_part_types[tid].death_cnt = (int)a_num(args, argc, 4, 0.0);
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_partemit_create") == 0) {
        int eid = (int)a_num(args, argc, 0, 0.0);
        if (eid < 0 || eid >= GM82_MAX_PART_EMITTERS) eid = 0;
        gm82_dnd_part_emitter *em = &g_dnd_part_emitters[eid];
        memset(em, 0, sizeof(*em));
        em->used = 1;
        em->shape = (int)a_num(args, argc, 1, 0.0);
        em->xmin = a_num(args, argc, 2, self->x);
        em->xmax = a_num(args, argc, 3, self->x);
        em->ymin = a_num(args, argc, 4, self->y);
        em->ymax = a_num(args, argc, 5, self->y);
        if (out_val) *out_val = (double)eid;
        return true;
    }
    if (strcmp(name, "action_partemit_destroy") == 0) {
        int eid = (int)a_num(args, argc, 0, 0.0);
        if (eid >= 0 && eid < GM82_MAX_PART_EMITTERS) g_dnd_part_emitters[eid].used = 0;
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_partemit_burst") == 0) {
        int eid = (int)a_num(args, argc, 0, 0.0);
        double tid = a_num(args, argc, 1, 0.0);
        double cnt = a_num(args, argc, 2, 8.0);
        double px = self->x, py = self->y;
        if (eid >= 0 && eid < GM82_MAX_PART_EMITTERS && g_dnd_part_emitters[eid].used) {
            px = 0.5 * (g_dnd_part_emitters[eid].xmin + g_dnd_part_emitters[eid].xmax);
            py = 0.5 * (g_dnd_part_emitters[eid].ymin + g_dnd_part_emitters[eid].ymax);
        }
        gml_part_particles_create((double)g_dnd_part_system_id, px, py, tid, cnt);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_partemit_stream") == 0) {
        int eid = (int)a_num(args, argc, 0, 0.0);
        int tid = (int)a_num(args, argc, 1, 0.0);
        int cnt = (int)a_num(args, argc, 2, 1.0);
        if (eid >= 0 && eid < GM82_MAX_PART_EMITTERS) {
            g_dnd_part_emitters[eid].used = 1;
            g_dnd_part_emitters[eid].stream_type = tid;
            g_dnd_part_emitters[eid].stream_count = cnt;
            gml_part_particles_create((double)g_dnd_part_system_id, self->x, self->y, (double)tid, (double)cnt);
        }
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_effect") == 0) {
        double kind = a_num(args, argc, 0, 0.0);
        double x = a_num(args, argc, 1, self->x);
        double y = a_num(args, argc, 2, self->y);
        gml_part_particles_create((double)g_dnd_part_system_id, x, y, kind, 8.0);
        if (out_val) *out_val = 1.0;
        return true;
    }

    /* ==================== DRAW LIB ==================== */
    if (strcmp(name, "action_draw_sprite") == 0) {
        int sp = (int)a_num(args, argc, 0, (double)self->sprite_index);
        double x = a_num(args, argc, 1, self->x);
        double y = a_num(args, argc, 2, self->y);
        if (sp >= 0) gml_draw_sprite((double)sp, x, y);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_draw_background") == 0) {
        double bg = a_num(args, argc, 0, 0.0);
        double x = a_num(args, argc, 1, 0.0);
        double y = a_num(args, argc, 2, 0.0);
        int tiled = (int)a_num(args, argc, 3, 0.0);
        if (tiled) gml_draw_background_tiled(bg, x, y);
        else gml_draw_background(bg, x, y);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_draw_text") == 0) {
        const char *txt = a_str(args, argc, 0, "");
        double x = (argc >= 2) ? a_num(args, argc, 1, self->x) : self->x;
        double y = (argc >= 3) ? a_num(args, argc, 2, self->y) : self->y;
        /* Preserve older callers that passed x,y as args[0..1] when string was in str_args[0] */
        if (argc >= 2 && (!args[0].is_string) && args[0].num != 0.0 && !args[1].is_string) {
            x = a_num(args, argc, 0, self->x);
            y = a_num(args, argc, 1, self->y);
        }
        gml_draw_text(x, y, txt);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_draw_text_transformed") == 0) {
        const char *txt = a_str(args, argc, 0, "");
        double x = a_num(args, argc, 1, self->x);
        double y = a_num(args, argc, 2, self->y);
        gml_draw_text(x, y, txt);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_draw_rectangle") == 0) {
        double x1 = a_num(args, argc, 0, 0.0);
        double y1 = a_num(args, argc, 1, 0.0);
        double x2 = a_num(args, argc, 2, 0.0);
        double y2 = a_num(args, argc, 3, 0.0);
        double outline = a_num(args, argc, 4, 0.0);
        gml_draw_rectangle(x1, y1, x2, y2, outline);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_draw_gradient_hor") == 0 || strcmp(name, "action_draw_gradient_vert") == 0) {
        double x1 = a_num(args, argc, 0, 0.0);
        double y1 = a_num(args, argc, 1, 0.0);
        double x2 = a_num(args, argc, 2, 0.0);
        double y2 = a_num(args, argc, 3, 0.0);
        if (argc >= 5) gml_draw_set_color(a_num(args, argc, 4, 0xFFFFFF));
        gml_draw_rectangle(x1, y1, x2, y2, 0.0);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_draw_ellipse") == 0) {
        double x1 = a_num(args, argc, 0, 0.0);
        double y1 = a_num(args, argc, 1, 0.0);
        double x2 = a_num(args, argc, 2, 0.0);
        double y2 = a_num(args, argc, 3, 0.0);
        double outline = a_num(args, argc, 4, 0.0);
        gml_draw_ellipse(x1, y1, x2, y2, outline);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_draw_ellipse_gradient") == 0) {
        double x1 = a_num(args, argc, 0, 0.0);
        double y1 = a_num(args, argc, 1, 0.0);
        double x2 = a_num(args, argc, 2, 0.0);
        double y2 = a_num(args, argc, 3, 0.0);
        if (argc >= 5) gml_draw_set_color(a_num(args, argc, 4, 0xFFFFFF));
        gml_draw_ellipse(x1, y1, x2, y2, 0.0);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_draw_line") == 0) {
        double x1 = a_num(args, argc, 0, 0.0);
        double y1 = a_num(args, argc, 1, 0.0);
        double x2 = a_num(args, argc, 2, 0.0);
        double y2 = a_num(args, argc, 3, 0.0);
        gml_draw_line(x1, y1, x2, y2);
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_draw_arrow") == 0) {
        double x1 = a_num(args, argc, 0, 0.0);
        double y1 = a_num(args, argc, 1, 0.0);
        double x2 = a_num(args, argc, 2, 0.0);
        double y2 = a_num(args, argc, 3, 0.0);
        double tip = a_num(args, argc, 4, 8.0);
        gml_draw_line(x1, y1, x2, y2);
        double ang = atan2(y2 - y1, x2 - x1);
        gml_draw_line(x2, y2, x2 - tip * cos(ang - 0.5), y2 - tip * sin(ang - 0.5));
        gml_draw_line(x2, y2, x2 - tip * cos(ang + 0.5), y2 - tip * sin(ang + 0.5));
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_color") == 0 || strcmp(name, "action_set_color") == 0 ||
        strcmp(name, "action_draw_set_color") == 0) {
        if (argc >= 1) gml_draw_set_color(a_num(args, argc, 0, 0.0));
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_font") == 0 || strcmp(name, "action_set_font") == 0) {
        if (argc >= 1) gml_draw_set_font(a_num(args, argc, 0, 0.0));
        if (argc >= 2) gml_draw_set_halign(a_num(args, argc, 1, 0.0));
        if (out_val) *out_val = 1.0;
        return true;
    }
    if (strcmp(name, "action_set_relative") == 0) {
        g_dnd_relative = (int)a_num(args, argc, 0, 0.0);
        if (out_val) *out_val = (double)g_dnd_relative;
        return true;
    }
    if (strcmp(name, "action_if_key") == 0 || strcmp(name, "action_if_keyboard") == 0) {
        double key = a_num(args, argc, 0, 0.0);
        int not_flag = (int)a_num(args, argc, 1, 0.0);
        int down = gml_keyboard_check(key) != 0.0;
        res = (not_flag ? !down : down) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_if_key_pressed") == 0) {
        double key = a_num(args, argc, 0, 0.0);
        res = (gml_keyboard_check_pressed(key) != 0.0) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_if_key_released") == 0) {
        double key = a_num(args, argc, 0, 0.0);
        res = (gml_keyboard_check_released(key) != 0.0) ? 1.0 : 0.0;
        if (out_val) *out_val = res;
        return true;
    }
    if (strcmp(name, "action_draw_healthbar") == 0) {
        double x1 = a_num(args, argc, 0, self->x - 16.0);
        double y1 = a_num(args, argc, 1, self->y - 20.0);
        double x2 = a_num(args, argc, 2, x1 + 48.0);
        double y2 = a_num(args, argc, 3, y1 + 8.0);
        double hp = gml_clamp(gml_get_health(), 0.0, 100.0) / 100.0;
        gml_draw_rectangle(x1, y1, x2, y2, 1.0);
        if (hp > 0.0) gml_draw_rectangle(x1, y1, x1 + (x2 - x1) * hp, y2, 0.0);
        if (out_val) *out_val = 1.0;
        return true;
    }

    fprintf(stderr, "UNMAPPED_ACTION %s\n", name);
    gm82_diag_record_unmapped("action", name);
    if (out_val) *out_val = 0.0;
    return false;
}

static bool execute_named_args(gm82_runtime *rt, gm82_instance *self, const char *name,
                               const int32_t *args, int argc,
                               const char str_args[][128], int str_argc) {
    if (!rt || !self || !name) return false;
    gm82_action_arg conv[GM82_ACTION_MAX_ARGS];
    memset(conv, 0, sizeof(conv));
    int n = argc > str_argc ? argc : str_argc;
    if (n > GM82_ACTION_MAX_ARGS) n = GM82_ACTION_MAX_ARGS;
    for (int i = 0; i < n; i++) {
        if (args && i < argc) conv[i].num = (double)args[i];
        if (str_args && i < str_argc && str_args[i][0]) {
            snprintf(conv[i].str, sizeof(conv[i].str), "%s", str_args[i]);
            conv[i].is_string = 1;
        }
    }
    double val = 0.0;
    bool handled = gm82_action_call_args(rt, self, name, conv, n, &val);
    if (!handled) return false;
    if (strncmp(name, "action_if", 9) == 0 ||
        strcmp(name, "action_cd_present") == 0 ||
        strcmp(name, "action_cd_playing") == 0) {
        return val != 0.0;
    }
    if (strcmp(name, "action_save_game") == 0 || strcmp(name, "action_load_game") == 0) {
        return val > 0.0;
    }
    return true;
}

bool gm82_action_execute_named(gm82_runtime *rt, gm82_instance *self, const char *name) {
    static const char empty_str[4][128] = {{0}};
    return execute_named_args(rt, self, name, NULL, 0, empty_str, 0);
}

bool gm82_action_execute_ref(gm82_runtime *rt, gm82_instance *self, const gm82_action_ref *ar) {
    if (!rt || !self || !ar) return false;
    if (ar->code && ar->code[0]) {
        /* "Execute code" action: run the authored GML in this instance's scope. */
        gm82_gml_set_self(self);
        gm82_gml_eval_block(rt, self, ar->code);
        return true;
    }
    if (ar->name[0])
        return execute_named_args(rt, self, ar->name, ar->args, ar->argc, ar->str_args, ar->str_argc);
    if (ar->argc >= 2) {
        self->hspeed = (double)ar->args[0];
        self->vspeed = (double)ar->args[1];
        return true;
    }
    if (ar->argc >= 1 && ar->kind == 1) {
        self->sprite_index = ar->args[0];
        return true;
    }
    return true;
}

void gm82_actions_fire_create(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table) {
    if (!rt || !self || !self->alive || !table || !rt->objects) return;
    if (self->object_index < 0 || self->object_index >= rt->objects->count) return;
    const char *oname = rt->objects->items[self->object_index].name;
    for (int i = 0; i < table->count; i++) {
        if (strcmp(table->objects[i].object_name, oname) != 0) continue;
        for (int a = 0; a < table->objects[i].count; a++) {
            if (!self->alive) break;
            gm82_action_ref *ar = &table->objects[i].items[a];
            if (ar->event_type != 0) continue;
            if (strcmp(ar->name, "action_next_room") == 0 ||
                strcmp(ar->name, "action_if_next_room") == 0 ||
                strcmp(ar->name, "action_previous_room") == 0 ||
                strcmp(ar->name, "action_restart_room") == 0 ||
                strcmp(ar->name, "action_another_room") == 0)
                continue;
            gm82_action_execute_ref(rt, self, ar);
            if (!self->alive) break;
        }
        break;
    }
}

/* Phase 4: nested if/else/block runner for event_type filter */
static void gm82_actions_fire_event(gm82_runtime *rt, gm82_instance *self,
                                    const gm82_action_table *table, int event_type,
                                    int event_numb) {
    if (!rt || !self || !self->alive || !table || !rt->objects) return;
    if (self->object_index < 0 || self->object_index >= rt->objects->count) return;
    const char *oname = rt->objects->items[self->object_index].name;
    g_dnd_exit_requested = 0;
    for (int i = 0; i < table->count; i++) {
        if (strcmp(table->objects[i].object_name, oname) != 0 &&
            strcmp(table->objects[i].object_name, "_global_actions") != 0)
            continue;
        /* skip_depth: >0 means skipping until matching block_end / else handling */
        int skip_depth = 0;
        int else_skip = 0; /* after taken if-branch, skip else */
        for (int a = 0; a < table->objects[i].count; a++) {
            if (!self->alive || g_dnd_exit_requested) break;
            gm82_action_ref *ar = &table->objects[i].items[a];
            if (event_type >= 0) {
                if (!(ar->event_type == event_type || ar->event_type == -1)) continue;
            }
            if (event_numb >= 0 && ar->event_type == event_type &&
                ar->event_numb != event_numb) continue;
            const char *nm = ar->name;
            int is_if = (strncmp(nm, "action_if", 9) == 0);
            int is_else = (strcmp(nm, "action_else") == 0);
            int is_begin = (strcmp(nm, "action_block_begin") == 0);
            int is_end = (strcmp(nm, "action_block_end") == 0);

            if (skip_depth > 0) {
                if (is_begin) skip_depth++;
                else if (is_end) {
                    skip_depth--;
                    if (skip_depth == 0 && else_skip) {
                        else_skip = 0;
                    }
                } else if (is_else && skip_depth == 1) {
                    skip_depth = 0;
                    else_skip = 0;
                    continue;
                }
                continue;
            }

            if (is_else) {
                skip_depth = 1;
                else_skip = 1;
                continue;
            }
            if (is_begin || is_end) continue;

            bool ok = gm82_action_execute_ref(rt, self, ar);
            if (!self->alive || g_dnd_exit_requested) break;
            if (is_if && !ok) {
                skip_depth = 1;
                else_skip = 0;
            } else if (is_if && ok) {
                else_skip = 1;
            }
        }
    }
}

void gm82_actions_fire_step(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table) {
    gm82_actions_fire_event(rt, self, table, 3, -1);
}
void gm82_actions_fire_alarm(gm82_runtime *rt, gm82_instance *self,
                             const gm82_action_table *table, int alarm_index) {
    gm82_actions_fire_event(rt, self, table, 2, alarm_index);
}
void gm82_actions_fire_collision(gm82_runtime *rt, gm82_instance *self,
                                 gm82_instance *other, const gm82_action_table *table) {
    if (!rt || !self || !self->alive || !table || !rt->objects) return;
    if (self->object_index < 0 || self->object_index >= rt->objects->count) return;
    const char *oname = rt->objects->items[self->object_index].name;
    for (int i = 0; i < table->count; i++) {
        if (strcmp(table->objects[i].object_name, oname) != 0) continue;
        for (int a = 0; a < table->objects[i].count; a++) {
            if (!self->alive) return;
            gm82_action_ref *ar = &table->objects[i].items[a];
            if (ar->event_type != 4) continue;
            if (other && ar->event_numb >= 0 && !gm82_instance_matches_object(rt, other, ar->event_numb)) continue;
            gm82_action_execute_ref(rt, self, ar);
        }
        return;
    }
}

void gm82_actions_fire_draw(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table) {
    gm82_actions_fire_event(rt, self, table, 8, -1);
}

const char *gm82_action_name_for_id(int32_t lib_id, int32_t action_id) {
    if (lib_id != 1 && lib_id != 0) return NULL;
    switch (action_id) {
        case 101: return "action_move";
        case 102: return "action_move_point";
        case 103: return "action_set_hspeed";
        case 104: return "action_set_vspeed";
        case 105: return "action_set_gravity";
        case 106: return "action_reverse_xdir";
        case 107: return "action_reverse_ydir";
        case 108: return "action_set_friction";
        case 109: return "action_move_to";
        case 110: return "action_move_start";
        case 111: return "action_move_random";
        case 112: return "action_snap";
        case 113: return "action_wrap";
        case 114: case 116: return "action_move_contact";
        case 115: return "action_bounce";
        case 117: return "action_move";
        case 119: return "action_path";
        case 120: return "action_path_end";
        case 121: return "action_path_position";
        case 122: return "action_path_speed";
        case 123: return "action_linear_step";
        case 124: return "action_potential_step";
        case 201: return "action_create_object";
        case 202: return "action_change_object";
        case 203: return "action_kill_object";
        case 204: return "action_kill_position";
        case 205: return "action_sprite_set";
        case 206: return "action_create_object_motion";
        case 207: return "action_create_object_random";
        case 211: return "action_sound";
        case 212: return "action_end_sound";
        case 213: return "action_if_sound";
        case 221: return "action_previous_room";
        case 222: return "action_next_room";
        case 223: return "action_current_room";
        case 224: return "action_another_room";
        case 225: return "action_if_previous_room";
        case 226: return "action_if_next_room";
        case 301: return "action_set_alarm";
        case 302: return "action_sleep";
        case 303: return "action_timeline_set";
        case 304: return "action_timeline_start";
        case 305: return "action_timeline_pause";
        case 306: return "action_timeline_stop";
        case 321: return "action_message";
        case 322: return "action_show_info";
        case 323: return "action_show_video";
        case 324: return "action_splash_text";
        case 325: return "action_splash_image";
        case 326: return "action_splash_web";
        case 327: return "action_splash_settings";
        case 331: return "action_restart_game";
        case 332: return "action_end_game";
        case 333: return "action_save_game";
        case 334: return "action_load_game";
        case 401: return "action_if_empty";
        case 402: return "action_if_collision";
        case 403: return "action_if_object";
        case 404: return "action_if_number";
        case 405: return "action_if_dice";
        case 407: return "action_if_question";
        case 408: return "action_if";
        case 409: return "action_if_mouse";
        case 410: return "action_if_aligned";
        case 421: return "action_else";
        case 422: return "action_block_begin";
        case 423: return "action_repeat";
        case 424: return "action_block_end";
        case 425: return "action_exit";
        case 501: return "action_draw_sprite";
        case 502: return "action_draw_background";
        case 511: return "action_draw_rectangle";
        case 512: return "action_draw_ellipse";
        case 513: return "action_draw_line";
        case 514: return "action_draw_text";
        case 515: return "action_draw_arrow";
        case 524: return "action_color";
        case 526: return "action_font";
        case 531: return "action_fullscreen";
        case 532: return "action_effect";
        case 541: return "action_sprite_set";
        case 542: return "action_sprite_transform";
        case 543: return "action_sprite_color";
        case 601: return "action_execute_script";
        case 603: return "action_execute_code";
        case 604: return "action_inherited";
        case 605: return "action_comment";
        case 611: return "action_set_variable";
        case 612: return "action_if_variable";
        case 613: return "action_draw_variable";
        case 701: return "action_set_score";
        case 702: return "action_if_score";
        case 703: return "action_draw_score";
        case 709: return "action_highscore_clear";
        case 711: return "action_set_life";
        case 712: return "action_if_life";
        case 713: return "action_draw_life";
        case 714: return "action_draw_life_images";
        case 721: return "action_set_health";
        case 722: return "action_if_health";
        case 723: return "action_draw_health";
        case 731: return "action_set_caption";
        case 801: return "action_splash_image";
        case 802: return "action_replace_sprite";
        case 803: return "action_replace_sound";
        case 804: return "action_replace_background";
        default: return NULL;
    }
}

static const char *resolve_decoded_action_name(const gm82_decoded_action *a) {
    if (!a) return NULL;
    if (a->fn_name[0]) return a->fn_name;
    return gm82_action_name_for_id(a->lib_id, a->action_id);
}

static bool execute_single_decoded_action(gm82_runtime *rt, gm82_instance *target,
                                          const gm82_decoded_action *a, bool *out_cond_true) {
    if (!rt || !target || !target->alive || !a) return false;
    if (out_cond_true) *out_cond_true = true;

    /* GML code execution block (kind == 7, action_id == 603, or exec_type == 2) */
    if (a->kind == 7 || a->action_id == 603 || a->exec_type == 2) {
        const char *code = (a->arg_strs[0] && a->arg_strs[0][0]) ? a->arg_strs[0]
                         : (a->fn_code && a->fn_code[0] ? a->fn_code : NULL);
        if (code) {
            gm82_gml_set_self(target);
            gm82_gml_eval_block(rt, target, code);
        }
        return true;
    }

    const char *name = resolve_decoded_action_name(a);
    if (!name || !name[0]) return false;

    gm82_action_arg conv[GM82_ACTION_MAX_ARGS];
    memset(conv, 0, sizeof(conv));
    int n = a->arg_count;
    if (n < 0) n = 0;
    if (n > GM82_ACTION_MAX_ARGS) n = GM82_ACTION_MAX_ARGS;
    int lhs_skip = (strcmp(name, "action_set_variable") == 0 ||
                    strcmp(name, "action_draw_variable") == 0 ||
                    strcmp(name, "action_if_variable") == 0 ||
                    strcmp(name, "action_if") == 0) ? 1 : 0;

    for (int k = 0; k < n; k++) {
        const char *s = a->arg_strs[k];
        if (s && s[0]) {
            snprintf(conv[k].str, sizeof(conv[k].str), "%s", s);
            conv[k].is_string = 1;
            char *ep = NULL;
            double v = strtod(s, &ep);
            if (ep && ep != s) {
                while (*ep && isspace((unsigned char)*ep)) ep++;
                if (*ep == '\0') {
                    conv[k].num = v;
                    continue;
                }
            }
            if (!(k == 0 && lhs_skip) && !(k == 1 && strcmp(name, "action_if_variable") == 0)) {
                if (a->arg_types[k] != 1) {
                    double ev_v = 0.0;
                    if (gm82_gml_eval_expr(rt, target, s, &ev_v)) conv[k].num = ev_v;
                }
            }
        }
    }

    int prev_rel = g_dnd_relative;
    if (a->is_relative) g_dnd_relative = 1;
    double val = 0.0;
    bool ok = gm82_action_call_args(rt, target, name, conv, n, &val);
    g_dnd_relative = prev_rel;
    if (out_cond_true) *out_cond_true = (val != 0.0);
    return ok;
}

static int find_matching_stmt_end(const gm82_decoded_action *acts, int count, int start) {
    if (start >= count) return count;
    if (acts[start].kind == 1 || acts[start].action_id == 422) {
        int depth = 1;
        for (int i = start + 1; i < count; i++) {
            if (acts[i].kind == 1 || acts[i].action_id == 422) depth++;
            else if (acts[i].kind == 2 || acts[i].action_id == 424) {
                depth--;
                if (depth == 0) return i + 1;
            }
        }
        return count;
    }
    return start + 1;
}

static void execute_decoded_range(gm82_runtime *rt, gm82_instance *self,
                                  const gm82_decoded_action *acts, int start, int end,
                                  gm82_instance *other_inst) {
    int i = start;
    while (i < end && self->alive && !g_dnd_exit_requested) {
        const gm82_decoded_action *a = &acts[i];
        /* Exit action */
        if (a->kind == 4 || a->action_id == 425) {
            g_dnd_exit_requested = 1;
            break;
        }
        /* Stray begin/end or local var declaration */
        if (a->kind == 1 || a->kind == 2 || a->kind == 6 ||
            a->action_id == 422 || a->action_id == 424) {
            i++;
            continue;
        }
        /* Stray else without preceding conditional */
        if (a->kind == 3 || a->action_id == 421) {
            int skip_end = find_matching_stmt_end(acts, end, i + 1);
            i = skip_end;
            continue;
        }
        /* Repeat block / statement */
        if (a->kind == 5 || a->action_id == 423) {
            int times = 1;
            if (a->arg_strs[0] && a->arg_strs[0][0]) {
                double tv = 0.0;
                if (gm82_gml_eval_expr(rt, self, a->arg_strs[0], &tv)) times = (int)tv;
                else times = atoi(a->arg_strs[0]);
            }
            if (times < 0) times = 0;
            if (times > 4096) times = 4096;
            int body_start = i + 1;
            int body_end = find_matching_stmt_end(acts, end, body_start);
            for (int r = 0; r < times && self->alive && !g_dnd_exit_requested; r++) {
                execute_decoded_range(rt, self, acts, body_start, body_end, other_inst);
            }
            i = body_end;
            continue;
        }

        /* Execute action (handling applies_to: -1=self, -2=other, >=0 object) */
        bool cond_res = true;
        if (a->applies_to == -2) {
            if (other_inst && other_inst->alive) {
                gm82_instance *prev_other = gm82_gml_get_other();
                gm82_gml_set_other(self);
                execute_single_decoded_action(rt, other_inst, a, &cond_res);
                gm82_gml_set_other(prev_other);
            } else {
                cond_res = false;
            }
        } else if (a->applies_to >= 0) {
            bool any_true = false;
            int n_inst = rt->instance_count;
            for (int k = 0; k < n_inst; k++) {
                gm82_instance *cand = &rt->instances[k];
                if (!cand->alive) continue;
                if (!gm82_instance_matches_object(rt, cand, a->applies_to)) continue;
                bool cr = false;
                gm82_instance *prev_other = gm82_gml_get_other();
                gm82_gml_set_other(self);
                execute_single_decoded_action(rt, cand, a, &cr);
                gm82_gml_set_other(prev_other);
                if (cr) any_true = true;
                if (g_dnd_exit_requested) break;
            }
            cond_res = any_true;
        } else {
            execute_single_decoded_action(rt, self, a, &cond_res);
        }

        const char *aname = resolve_decoded_action_name(a);
        bool is_cond = (a->is_condition != 0) ||
                       (aname && strncmp(aname, "action_if", 9) == 0);
        if (is_cond) {
            if (a->is_not) cond_res = !cond_res;
            int then_start = i + 1;
            int then_end = find_matching_stmt_end(acts, end, then_start);
            bool has_else = (then_end < end &&
                             (acts[then_end].kind == 3 || acts[then_end].action_id == 421));
            int else_start = has_else ? (then_end + 1) : then_end;
            int else_end = has_else ? find_matching_stmt_end(acts, end, else_start) : then_end;

            if (cond_res) {
                execute_decoded_range(rt, self, acts, then_start, then_end, other_inst);
            } else if (has_else) {
                execute_decoded_range(rt, self, acts, else_start, else_end, other_inst);
            }
            i = else_end;
            continue;
        }
        i++;
    }
}

void gm82_events_execute_decoded_actions(gm82_runtime *rt, gm82_instance *self,
                                          const gm82_decoded_event *ev,
                                          int32_t owner_obj_index,
                                          int main_type, int event_numb,
                                          gm82_instance *other_inst) {
    (void)owner_obj_index; (void)main_type; (void)event_numb;
    if (!rt || !self || !ev) return;

    int saved_rel = g_dnd_relative;
    int saved_exit = g_dnd_exit_requested;
    gm82_instance *saved_self = gm82_gml_get_self();
    gm82_instance *saved_other = gm82_gml_get_other();

    g_dnd_relative = 0;
    g_dnd_exit_requested = 0;
    gm82_gml_set_runtime(rt);
    gm82_gml_set_self(self);
    if (other_inst) gm82_gml_set_other(other_inst);

    if (ev->action_count > 0 && ev->actions) {
        execute_decoded_range(rt, self, ev->actions, 0, ev->action_count, other_inst);
    } else {
        if (ev->action_name0[0])
            gm82_action_execute_named(rt, self, ev->action_name0);
        if (ev->code_snippet && ev->code_snippet[0] && self->alive) {
            gm82_gml_set_self(self);
            gm82_gml_eval_block(rt, self, ev->code_snippet);
        }
    }

    g_dnd_relative = saved_rel;
    g_dnd_exit_requested = saved_exit;
    gm82_gml_set_self(saved_self);
    gm82_gml_set_other(saved_other);
}
