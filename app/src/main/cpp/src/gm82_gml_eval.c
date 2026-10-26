#define _POSIX_C_SOURCE 200809L
#include "gm82_gml_eval.h"
#include "gm82_portable_compat.h"
#include "gm82_gml_builtins.h"
#include "gm82_sound_runtime.h"
#include "gm82_input.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

typedef struct {
    const char *s;
    size_t i, n;
    gm82_runtime *rt;
    gm82_instance *self;
    char err[128];
    char str_args[8][256];
    int str_mask;
} gml_parser;

static void skip_ws(gml_parser *p) {
    while (p->i < p->n && isspace((unsigned char)p->s[p->i])) p->i++;
}

static int peek(gml_parser *p) {
    skip_ws(p);
    return p->i < p->n ? (unsigned char)p->s[p->i] : 0;
}

static int getc_(gml_parser *p) {
    skip_ws(p);
    return p->i < p->n ? (unsigned char)p->s[p->i++] : 0;
}

static bool match(gml_parser *p, char c) {
    if (peek(p) == c) { p->i++; return true; }
    return false;
}

static bool parse_expr(gml_parser *p, double *out);

static bool parse_ident(gml_parser *p, char *buf, size_t buflen) {
    skip_ws(p);
    if (p->i >= p->n || !isalpha((unsigned char)p->s[p->i])) return false;
    size_t j = 0;
    while (p->i < p->n && (isalnum((unsigned char)p->s[p->i]) || p->s[p->i]=='_')) {
        if (j + 1 < buflen) buf[j++] = p->s[p->i];
        p->i++;
    }
    buf[j] = 0;
    return j > 0;
}

static double g_script_args[16] = {0};
static int g_script_arg_count = 0;

void gm82_gml_set_script_args(const double *args, int count) {
    g_script_arg_count = count > 16 ? 16 : (count < 0 ? 0 : count);
    for (int i = 0; i < 16; i++) {
        g_script_args[i] = (i < g_script_arg_count && args) ? args[i] : 0.0;
    }
}

double gm82_gml_get_script_arg(int index) {
    if (index < 0 || index >= 16) return 0.0;
    return g_script_args[index];
}

static bool get_var(gml_parser *p, const char *name, double *out) {
    gm82_instance *s = p->self;
    if (strncmp(name, "global.", 7) == 0) {
        return get_var(p, name + 7, out);
    }
    if (strncmp(name, "self.", 5) == 0) {
        return get_var(p, name + 5, out);
    }
    if (strncmp(name, "argument", 8) == 0 && isdigit((unsigned char)name[8])) {
        int idx = atoi(name + 8);
        if (idx >= 0 && idx < 16) {
            *out = g_script_args[idx];
            return true;
        }
    }
    if (strncmp(name, "arg", 3) == 0 && isdigit((unsigned char)name[3])) {
        int idx = atoi(name + 3);
        if (idx >= 0 && idx < 16) {
            *out = g_script_args[idx];
            return true;
        }
    }
    if (strcmp(name, "x") == 0) { *out = s ? s->x : 0; return true; }
    if (strcmp(name, "y") == 0) { *out = s ? s->y : 0; return true; }
    if (strcmp(name, "xprevious") == 0) { *out = s ? s->xprevious : 0; return true; }
    if (strcmp(name, "yprevious") == 0) { *out = s ? s->yprevious : 0; return true; }
    if (strcmp(name, "bbox_left") == 0) { *out = gml_get_bbox_left(); return true; }
    if (strcmp(name, "bbox_right") == 0) { *out = gml_get_bbox_right(); return true; }
    if (strcmp(name, "bbox_top") == 0) { *out = gml_get_bbox_top(); return true; }
    if (strcmp(name, "bbox_bottom") == 0) { *out = gml_get_bbox_bottom(); return true; }
    if (strcmp(name, "hspeed") == 0) { *out = s ? s->hspeed : 0; return true; }
    if (strcmp(name, "vspeed") == 0) { *out = s ? s->vspeed : 0; return true; }
    if (strcmp(name, "speed") == 0) { *out = s ? s->speed : 0; return true; }
    if (strcmp(name, "direction") == 0) { *out = s ? s->direction : 0; return true; }
    if (strcmp(name, "image_index") == 0) { *out = s ? (double)s->image_index : 0; return true; }
    if (strcmp(name, "image_speed") == 0) { *out = s ? s->image_speed : 0; return true; }
    if (strcmp(name, "image_xscale") == 0) { *out = s ? s->image_xscale : 1; return true; }
    if (strcmp(name, "image_yscale") == 0) { *out = s ? s->image_yscale : 1; return true; }
    if (strcmp(name, "sprite_index") == 0) { *out = s ? (double)s->sprite_index : 0; return true; }
    if (strcmp(name, "sprite_width") == 0) {
        int sw = 16;
        if (p->rt && p->rt->sprites && s && s->sprite_index >= 0 && s->sprite_index < p->rt->sprites->count)
            sw = p->rt->sprites->frames[s->sprite_index].width;
        *out = (double)sw; return true;
    }
    if (strcmp(name, "sprite_height") == 0) {
        int sh = 16;
        if (p->rt && p->rt->sprites && s && s->sprite_index >= 0 && s->sprite_index < p->rt->sprites->count)
            sh = p->rt->sprites->frames[s->sprite_index].height;
        *out = (double)sh; return true;
    }
    if (strcmp(name, "sprite_xoffset") == 0) {
        int ox = 0;
        if (p->rt && p->rt->sprites && s && s->sprite_index >= 0 && s->sprite_index < p->rt->sprites->count)
            ox = p->rt->sprites->frames[s->sprite_index].origin_x;
        *out = (double)ox; return true;
    }
    if (strcmp(name, "sprite_yoffset") == 0) {
        int oy = 0;
        if (p->rt && p->rt->sprites && s && s->sprite_index >= 0 && s->sprite_index < p->rt->sprites->count)
            oy = p->rt->sprites->frames[s->sprite_index].origin_y;
        *out = (double)oy; return true;
    }
    if (strcmp(name, "path_index") == 0) { *out = s ? (double)s->path_index : -1; return true; }
    if (strcmp(name, "path_position") == 0) { *out = s ? s->path_position : 0; return true; }
    if (strcmp(name, "path_positionprevious") == 0) { *out = s ? s->path_positionprevious : 0; return true; }
    if (strcmp(name, "path_speed") == 0) { *out = s ? s->path_speed : 0; return true; }
    if (strcmp(name, "path_scale") == 0) { *out = s ? (s->path_scale != 0 ? s->path_scale : 1) : 1; return true; }
    if (strcmp(name, "path_orientation") == 0) { *out = s ? s->path_orientation : 0; return true; }
    if (strcmp(name, "timeline_index") == 0) { *out = s ? (double)s->timeline_index : -1; return true; }
    if (strcmp(name, "timeline_position") == 0) { *out = s ? s->timeline_position : 0; return true; }
    if (strcmp(name, "timeline_speed") == 0) { *out = s ? s->timeline_speed : 0; return true; }
    if (strcmp(name, "timeline_running") == 0) { *out = s ? (double)s->timeline_running : 0; return true; }
    if (strcmp(name, "path_endaction") == 0) { *out = s ? (double)s->path_endaction : 0; return true; }
    if (strcmp(name, "instance_id") == 0) { *out = s ? (double)s->id : 0; return true; }
    if (strcmp(name, "instance_count") == 0) {
        int n = 0;
        if (p->rt) {
            for (int i = 0; i < p->rt->instance_count; i++)
                if (p->rt->instances[i].alive) n++;
        }
        *out = (double)n; return true;
    }
    if (strcmp(name, "room") == 0) { *out = p->rt ? (double)p->rt->current_room : 0; return true; }
    if (strcmp(name, "room_width") == 0) { *out = p->rt ? (double)p->rt->room_width : 0; return true; }
    if (strcmp(name, "room_height") == 0) { *out = p->rt ? (double)p->rt->room_height : 0; return true; }
    if (strcmp(name, "room_speed") == 0) { *out = p->rt ? (double)p->rt->room_speed : 30; return true; }
    if (strcmp(name, "room_first") == 0) { *out = 0; return true; }
    if (strcmp(name, "room_last") == 0) {
        *out = (p->rt && p->rt->rooms && p->rt->rooms->count > 0) ? (double)(p->rt->rooms->count - 1) : 0;
        return true;
    }
    if (strcmp(name, "room_persistent") == 0) { *out = 0; return true; }
    if (strcmp(name, "room_caption") == 0) { *out = 0; return true; }
    if (strcmp(name, "keyboard_key") == 0 || strcmp(name, "keyboard_lastkey") == 0) {
        *out = gml_keyboard_key(); return true;
    }
    if (strcmp(name, "keyboard_string") == 0) {
        snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", gml_keyboard_string());
        p->str_mask |= 1;
        gm82_gml_set_last_string(p->str_args[0]);
        *out = (double)strlen(gml_keyboard_string());
        return true;
    }
    if (strcmp(name, "mouse_button") == 0) { *out = gml_mouse_button_code(); return true; }
    if (strcmp(name, "mouse_lastbutton") == 0) { *out = gml_mouse_lastbutton(); return true; }

    if (strcmp(name, "solid") == 0) { *out = s && s->solid ? 1 : 0; return true; }
    if (strcmp(name, "id") == 0) { *out = s ? (double)s->id : 0; return true; }
    /* Phase 6: GM8 special values */
    if (strcmp(name, "self") == 0) { *out = s ? (double)s->id : -1; return true; }
    if (strcmp(name, "other") == 0) {
        extern gm82_instance *gm82_gml_get_other(void);
        gm82_instance *o = gm82_gml_get_other();
        *out = o ? (double)o->id : -2;
        return true;
    }
    if (strcmp(name, "all") == 0) { *out = -3; return true; }
    if (strcmp(name, "noone") == 0) { *out = -4; return true; }
    if (strcmp(name, "object_index") == 0) { *out = s ? (double)s->object_index : 0; return true; }
    if (strcmp(name, "score") == 0) { *out = gml_get_score(); return true; }
    if (strcmp(name, "lives") == 0) { *out = gml_get_lives(); return true; }
    if (strcmp(name, "health") == 0) { *out = gml_get_health(); return true; }
    if (strcmp(name, "room") == 0) { *out = p->rt ? (double)p->rt->current_room : 0; return true; }
    if (strcmp(name, "room_width") == 0) { *out = p->rt ? (double)p->rt->room_width : 0; return true; }
    if (strcmp(name, "room_height") == 0) { *out = p->rt ? (double)p->rt->room_height : 0; return true; }
    if (strcmp(name, "room_speed") == 0) { *out = p->rt ? (double)p->rt->room_speed : 30; return true; }
    if (strcmp(name, "mouse_x") == 0) { *out = gml_mouse_x(); return true; }
    if (strcmp(name, "mouse_y") == 0) { *out = gml_mouse_y(); return true; }
    if (strcmp(name, "gravity") == 0) { *out = s ? s->gravity : 0; return true; }
    if (strcmp(name, "gravity_direction") == 0) { *out = s ? s->gravity_direction : 270; return true; }
    if (strcmp(name, "friction") == 0) { *out = s ? s->friction : 0; return true; }
    if (strcmp(name, "depth") == 0) { *out = s ? (double)s->depth : 0; return true; }
    if (strcmp(name, "visible") == 0) { *out = s ? (double)s->visible : 1; return true; }
    if (strcmp(name, "persistent") == 0) { *out = s ? (double)s->persistent : 0; return true; }
    if (strcmp(name, "view_xview") == 0) { *out = p->rt ? (double)p->rt->view_x : 0; return true; }
    if (strcmp(name, "view_yview") == 0) { *out = p->rt ? (double)p->rt->view_y : 0; return true; }
    if (strcmp(name, "view_wview") == 0) { *out = p->rt ? (double)p->rt->view_w : 640; return true; }
    if (strcmp(name, "view_hview") == 0) { *out = p->rt ? (double)p->rt->view_h : 480; return true; }
    if (strcmp(name, "delta_time") == 0) { *out = gml_delta_time(); return true; }
    if (strcmp(name, "current_time") == 0) { *out = gml_current_time(); return true; }
    if (strcmp(name, "current_year") == 0) { *out = gml_current_year(); return true; }
    if (strcmp(name, "current_month") == 0) { *out = gml_current_month(); return true; }
    if (strcmp(name, "current_day") == 0) { *out = gml_current_day(); return true; }
    /* vk_ constants (GM key codes) */
    if (strcmp(name, "vk_left") == 0) { *out = 37; return true; }
    if (strcmp(name, "vk_right") == 0) { *out = 39; return true; }
    if (strcmp(name, "vk_up") == 0) { *out = 38; return true; }
    if (strcmp(name, "vk_down") == 0) { *out = 40; return true; }
    if (strcmp(name, "vk_enter") == 0) { *out = 13; return true; }
    if (strcmp(name, "vk_space") == 0) { *out = 32; return true; }
    if (strcmp(name, "vk_shift") == 0) { *out = 16; return true; }
    if (strcmp(name, "vk_control") == 0) { *out = 17; return true; }
    if (strcmp(name, "vk_escape") == 0) { *out = 27; return true; }
    if (strcmp(name, "vk_nokey") == 0) { *out = 0; return true; }
    if (strcmp(name, "vk_anykey") == 0) { *out = 1; return true; }

    /* Boolean & special constants */
    if (strcmp(name, "true") == 0) { *out = 1; return true; }
    if (strcmp(name, "false") == 0) { *out = 0; return true; }
    if (strcmp(name, "noone") == 0) { *out = -4; return true; }
    if (strcmp(name, "all") == 0) { *out = -1; return true; }
    if (strcmp(name, "other") == 0) { *out = -2; return true; }
    if (strcmp(name, "self") == 0) { *out = -3; return true; }
    if (strcmp(name, "pi") == 0) { *out = 3.14159265358979323846; return true; }

    /* Standard GM colors */
    if (strcmp(name, "c_black") == 0) { *out = 0; return true; }
    if (strcmp(name, "c_white") == 0) { *out = 16777215; return true; }
    if (strcmp(name, "c_red") == 0) { *out = 255; return true; }
    if (strcmp(name, "c_green") == 0) { *out = 32768; return true; }
    if (strcmp(name, "c_blue") == 0) { *out = 16711680; return true; }
    if (strcmp(name, "c_yellow") == 0) { *out = 65535; return true; }
    if (strcmp(name, "c_aqua") == 0) { *out = 16776960; return true; }
    if (strcmp(name, "c_fuchsia") == 0) { *out = 16711935; return true; }
    if (strcmp(name, "c_purple") == 0) { *out = 8388736; return true; }
    if (strcmp(name, "c_gray") == 0) { *out = 8421504; return true; }
    if (strcmp(name, "c_dkgray") == 0) { *out = 4210752; return true; }
    if (strcmp(name, "c_ltgray") == 0) { *out = 12632256; return true; }
    if (strcmp(name, "c_lime") == 0) { *out = 65280; return true; }
    if (strcmp(name, "c_orange") == 0) { *out = 4235519; return true; }
    if (strcmp(name, "c_navy") == 0) { *out = 8388608; return true; }
    if (strcmp(name, "c_teal") == 0) { *out = 8421376; return true; }
    if (strcmp(name, "c_maroon") == 0) { *out = 128; return true; }
    if (strcmp(name, "c_olive") == 0) { *out = 32896; return true; }
    /* Resource name → index (GM style: sprite_index = mini_mario) */
    if (p->rt) {
        if (p->rt->sprite_groups) {
            for (int i = 0; i < p->rt->sprite_groups->count; i++) {
                if (strcmp(p->rt->sprite_groups->items[i].name, name) == 0) {
                    *out = (double)i; return true;
                }
            }
        }
        if (p->rt->sprites) {
            for (int i = 0; i < p->rt->sprites->count; i++) {
                if (p->rt->sprites->frames[i].name[0] &&
                    strcmp(p->rt->sprites->frames[i].name, name) == 0) {
                    *out = (double)i; return true;
                }
            }
        }
        if (p->rt->objects) {
            for (int i = 0; i < p->rt->objects->count; i++) {
                if (strcmp(p->rt->objects->items[i].name, name) == 0) {
                    *out = (double)i; return true;
                }
            }
        }
    }
    /* Check custom instance variables */
    if (s) {
        for (int k = 0; k < s->var_count; k++) {
            if (strcmp(s->vars[k].name, name) == 0) {
                *out = s->vars[k].value;
                return true;
            }
        }
    }

    /* unknown identifier: default 0 */
    *out = 0;
    return true;
}

static bool set_var(gml_parser *p, const char *name, double v) {
    gm82_instance *s = p->self;
    if (strncmp(name, "global.", 7) == 0) {
        return set_var(p, name + 7, v);
    }
    if (strncmp(name, "self.", 5) == 0) {
        return set_var(p, name + 5, v);
    }
    if (!s && !(strcmp(name,"score")==0 || strcmp(name,"lives")==0 || strcmp(name,"health")==0 || strcmp(name,"keyboard_string")==0))
        return false;
    if (strcmp(name, "x") == 0) { s->x = v; return true; }
    if (strcmp(name, "y") == 0) { s->y = v; return true; }
    if (strcmp(name, "hspeed") == 0) { s->hspeed = v; return true; }
    if (strcmp(name, "vspeed") == 0) { s->vspeed = v; return true; }
    if (strcmp(name, "speed") == 0) { s->speed = v; return true; }
    if (strcmp(name, "direction") == 0) { s->direction = v; return true; }
    if (strcmp(name, "image_index") == 0) { s->image_index = (int32_t)v; return true; }
    if (strcmp(name, "image_speed") == 0) { s->image_speed = v; return true; }
    if (strcmp(name, "image_xscale") == 0) { s->image_xscale = v; return true; }
    if (strcmp(name, "image_yscale") == 0) { s->image_yscale = v; return true; }
    if (strcmp(name, "sprite_index") == 0) { s->sprite_index = (int32_t)v; return true; }
    if (strcmp(name, "solid") == 0) { s->solid = v != 0; return true; }
    if (strcmp(name, "depth") == 0) { s->depth = (int32_t)v; return true; }
    if (strcmp(name, "visible") == 0) { s->visible = (v != 0); return true; }
    if (strcmp(name, "persistent") == 0) { s->persistent = (v != 0); return true; }
    if (strcmp(name, "gravity") == 0) { s->gravity = v; return true; }
    if (strcmp(name, "gravity_direction") == 0) { s->gravity_direction = v; return true; }
    if (strcmp(name, "friction") == 0) { s->friction = v; return true; }
    if (strcmp(name, "path_index") == 0) { s->path_index = (int32_t)v; return true; }
    if (strcmp(name, "path_position") == 0) { s->path_positionprevious = s->path_position; s->path_position = v; return true; }
    if (strcmp(name, "path_speed") == 0) { s->path_speed = v; return true; }
    if (strcmp(name, "path_scale") == 0) { s->path_scale = v; return true; }
    if (strcmp(name, "path_orientation") == 0) { s->path_orientation = v; return true; }
    if (strcmp(name, "path_endaction") == 0) { s->path_endaction = (int32_t)v; return true; }

    if (strcmp(name, "keyboard_string") == 0) {
        gml_keyboard_string_clear();
        return true;
    }
    if (strcmp(name, "view_xview") == 0) { if (p->rt) p->rt->view_x = (int32_t)v; return true; }
    if (strcmp(name, "view_yview") == 0) { if (p->rt) p->rt->view_y = (int32_t)v; return true; }
    if (strcmp(name, "view_wview") == 0) { if (p->rt) p->rt->view_w = (int32_t)v; return true; }
    if (strcmp(name, "view_hview") == 0) { if (p->rt) p->rt->view_h = (int32_t)v; return true; }
    if (strcmp(name, "score") == 0) { gml_set_score(v); return true; }
    if (strcmp(name, "lives") == 0) { gml_set_lives(v); return true; }
    if (strcmp(name, "health") == 0) { gml_set_health(v); return true; }

    /* Set custom instance variable */
    if (s) {
        for (int k = 0; k < s->var_count; k++) {
            if (strcmp(s->vars[k].name, name) == 0) {
                s->vars[k].value = v;
                return true;
            }
        }
        if (s->var_count < 32) {
            snprintf(s->vars[s->var_count].name, sizeof(s->vars[s->var_count].name), "%.31s", name);
            s->vars[s->var_count].value = v;
            s->var_count++;
            return true;
        }
    }

    snprintf(p->err, sizeof(p->err), "cannot set %s", name);
    return false;
}

static bool parse_primary(gml_parser *p, double *out) {
    skip_ws(p);
    if (p->i >= p->n) return false;
    char c = p->s[p->i];
    if (c == '"' || c == '\'') {
        char quote = c;
        p->i++;
        /* Phase 3: capture string literal into last_string */
        char buf[512];
        size_t j = 0;
        while (p->i < p->n && p->s[p->i] != quote && j + 1 < sizeof(buf)) {
            buf[j++] = p->s[p->i++];
        }
        buf[j] = 0;
        if (p->i < p->n && p->s[p->i] == quote) p->i++;
        gm82_gml_set_last_string(buf);
        *out = 0;
        return true;
    }
    if (c == '(') {
        p->i++;
        if (!parse_expr(p, out)) return false;
        if (!match(p, ')')) return false;
        return true;
    }
    if (isdigit((unsigned char)c) || (c == '.' && p->i+1 < p->n && isdigit((unsigned char)p->s[p->i+1]))) {
        char *end = NULL;
        *out = strtod(p->s + p->i, &end);
        if (end == p->s + p->i) return false;
        p->i = (size_t)(end - p->s);
        return true;
    }
    if (c == '-' || c == '+') {
        p->i++;
        double v;
        if (!parse_primary(p, &v)) return false;
        *out = (c == '-') ? -v : v;
        return true;
    }
    if (c == '!') {
        p->i++;
        double v;
        if (!parse_primary(p, &v)) return false;
        *out = (v == 0) ? 1 : 0;
        return true;
    }
    char id[64];
    if (!parse_ident(p, id, sizeof(id))) return false;
    if (strcmp(id, "not") == 0) {
        double v;
        if (!parse_primary(p, &v)) return false;
        *out = (v == 0) ? 1 : 0;
        return true;
    }
    /* array indexing: alarm[0], etc. */
    if (match(p, '[')) {
        double idx = 0;
        if (!parse_expr(p, &idx)) return false;
        if (!match(p, ']')) return false;
        int i = (int)idx;
        if (strcmp(id, "alarm") == 0) {
            gm82_instance *s = p->self;
            if (s && i >= 0 && i < 12) *out = (double)s->alarms[i];
            else *out = -1;
            return true;
        }
        *out = 0;
        return true;
    }
    /* function call? collect up to 8 args */
    if (match(p, '(')) {
        double args[8] = {0,0,0,0,0,0,0,0};
        int nargs = 0;
        p->str_mask = 0;
        memset(p->str_args, 0, sizeof(p->str_args));
        if (peek(p) != ')') {
            for (;;) {
                if (nargs >= 8) return false;
                skip_ws(p);
                if (peek(p) == '"' || peek(p) == '\'') {
                    char quote = (char)peek(p);
                    getc_(p);
                    size_t j = 0;
                    while (p->i < p->n && p->s[p->i] != quote && j + 1 < sizeof(p->str_args[0])) {
                        if (p->s[p->i] == '\\' && p->i + 1 < p->n) {
                            p->i++;
                            p->str_args[nargs][j++] = p->s[p->i++];
                        } else {
                            p->str_args[nargs][j++] = p->s[p->i++];
                        }
                    }
                    p->str_args[nargs][j] = 0;
                    if (p->i < p->n && p->s[p->i] == quote) p->i++;
                    args[nargs] = 0;
                    p->str_mask |= (1 << nargs);
                } else {
                    if (!parse_expr(p, &args[nargs])) return false;
                }
                nargs++;
                if (peek(p) != ',') break;
                getc_(p);
            }
        }
        if (!match(p, ')')) return false;
        double arg = args[0];
        if (strcmp(id, "abs") == 0) { *out = fabs(arg); return true; }
        if (strcmp(id, "sign") == 0) { *out = arg > 0 ? 1 : (arg < 0 ? -1 : 0); return true; }
        if (strcmp(id, "irandom") == 0) { *out = (double)(rand() % ((int)arg + 1)); return true; }
        if (strcmp(id, "floor") == 0) { *out = floor(arg); return true; }
        if (strcmp(id, "ceil") == 0) { *out = ceil(arg); return true; }
        if (strcmp(id, "round") == 0) { *out = round(arg); return true; }
        if (strcmp(id, "sqr") == 0) { *out = gml_sqr(arg); return true; }
        if (strcmp(id, "sqrt") == 0) { *out = gml_sqrt(arg); return true; }
        if (strcmp(id, "power") == 0) { *out = gml_power(arg, nargs >= 2 ? args[1] : 1); return true; }
        if (strcmp(id, "log10") == 0) { *out = gml_log10(arg); return true; }
        if (strcmp(id, "log2") == 0) { *out = gml_log2(arg); return true; }
        if (strcmp(id, "exp") == 0) { *out = gml_exp(arg); return true; }
        if (strcmp(id, "frac") == 0) { *out = gml_frac(arg); return true; }
        if (strcmp(id, "dot_product") == 0) { *out = gml_dot_product(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0, nargs >= 4 ? args[3] : 0); return true; }
        if (strcmp(id, "min") == 0) {
            double m = nargs > 0 ? args[0] : 0;
            for (int k = 1; k < nargs; k++) { if (args[k] < m) m = args[k]; }
            *out = m; return true;
        }
        if (strcmp(id, "max") == 0) {
            double m = nargs > 0 ? args[0] : 0;
            for (int k = 1; k < nargs; k++) { if (args[k] > m) m = args[k]; }
            *out = m; return true;
        }
        if (strcmp(id, "clamp") == 0) {
            double lo = (nargs >= 2) ? args[1] : 0;
            double hi = (nargs >= 3) ? args[2] : 0;
            *out = gml_clamp(arg, lo, hi); return true;
        }
        if (strcmp(id, "lerp") == 0) {
            *out = gml_lerp(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "arctan2") == 0) {
            *out = gml_arctan2(arg, nargs >= 2 ? args[1] : 1); return true;
        }
        if (strcmp(id, "degtorad") == 0) {
            *out = gml_deg_to_rad(arg); return true;
        }
        if (strcmp(id, "radtodeg") == 0) {
            *out = gml_rad_to_deg(arg); return true;
        }
        if (strcmp(id, "median") == 0) {
            double b = (nargs >= 2) ? args[1] : 0;
            double c = (nargs >= 3) ? args[2] : 0;
            *out = gml_median(arg, b, c); return true;
        }
        if (strcmp(id, "mean") == 0) {
            if (nargs == 0) { *out = 0; return true; }
            double sum = 0;
            for (int k = 0; k < nargs; k++) sum += args[k];
            *out = sum / nargs; return true;
        }
        if (strcmp(id, "point_distance") == 0) {
            double x1 = args[0], y1 = args[1], x2 = args[2], y2 = args[3];
            *out = gml_point_distance(x1, y1, x2, y2); return true;
        }
        if (strcmp(id, "point_direction") == 0) {
            double x1 = args[0], y1 = args[1], x2 = args[2], y2 = args[3];
            *out = gml_point_direction(x1, y1, x2, y2); return true;
        }
        if (strcmp(id, "lengthdir_x") == 0) {
            *out = gml_lengthdir_x(args[0], args[1]); return true;
        }
        if (strcmp(id, "lengthdir_y") == 0) {
            *out = gml_lengthdir_y(args[0], args[1]); return true;
        }
        if (strcmp(id, "angle_difference") == 0) {
            *out = gml_angle_difference(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "modwrap") == 0) {
            *out = gml_modwrap(arg, nargs >= 2 ? args[1] : 1.0); return true;
        }
        if (strcmp(id, "smoothstep") == 0) {
            *out = gml_smoothstep(arg, nargs >= 2 ? args[1] : 1.0, nargs >= 3 ? args[2] : 0.0); return true;
        }
        if (strcmp(id, "lerproach") == 0) {
            *out = gml_lerproach(arg, nargs >= 2 ? args[1] : 0.0, nargs >= 3 ? args[2] : 0.0); return true;
        }

        if (strcmp(id, "hypot") == 0) {
            *out = gml_hypot(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "clamp_angle") == 0) {
            *out = gml_clamp_angle(arg); return true;
        }
        if (strcmp(id, "lerp_angle") == 0) {
            *out = gml_lerp_angle(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "power_next") == 0) {
            *out = gml_power_next(arg); return true;
        }
        if (strcmp(id, "math_set_epsilon") == 0) {
            *out = gml_math_set_epsilon(arg); return true;
        }
        if (strcmp(id, "math_get_epsilon") == 0) {
            *out = gml_math_get_epsilon(); return true;
        }
        if (strcmp(id, "angle_abs") == 0) {
            *out = gml_angle_abs(arg); return true;
        }
        if (strcmp(id, "angle_mean") == 0) {
            *out = gml_angle_mean(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "approach") == 0) {
            *out = gml_approach(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "approach_angle") == 0) {
            *out = gml_approach_angle(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "box_distance") == 0) {
            *out = gml_box_distance(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "circle_in_circle") == 0) {
            *out = gml_circle_in_circle(args[0], args[1], args[2], args[3], args[4], args[5]); return true;
        }
        if (strcmp(id, "clerp2") == 0) {
            *out = gml_clerp2(args[0], args[1], args[2], args[3], args[4]); return true;
        }
        if (strcmp(id, "cosine") == 0) {
            *out = gml_cosine(args[0], nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "darccos") == 0) {
            *out = gml_darccos(arg); return true;
        }
        if (strcmp(id, "darcsin") == 0) {
            *out = gml_darcsin(arg); return true;
        }
        if (strcmp(id, "darctan") == 0) {
            *out = gml_darctan(arg); return true;
        }
        if (strcmp(id, "darctan2") == 0) {
            *out = gml_darctan2(args[0], nargs >= 2 ? args[1] : 1); return true;
        }
        if (strcmp(id, "dcos") == 0) {
            *out = gml_dcos(arg); return true;
        }
        if (strcmp(id, "dsin") == 0) {
            *out = gml_dsin(arg); return true;
        }
        if (strcmp(id, "dtan") == 0) {
            *out = gml_dtan(arg); return true;
        }
        if (strcmp(id, "dsecant") == 0) {
            *out = gml_dsecant(arg); return true;
        }
        if (strcmp(id, "dot_product_normalized") == 0) {
            *out = gml_dot_product_normalized(args[0], args[1], args[2], args[3]); return true;
        }
        if (strcmp(id, "dot_product_3d") == 0) {
            *out = gml_dot_product_3d(args[0], args[1], args[2], args[3], args[4], args[5]); return true;
        }
        if (strcmp(id, "dot_product_3d_normalized") == 0) {
            *out = gml_dot_product_3d_normalized(args[0], args[1], args[2], args[3], args[4], args[5]); return true;
        }
        if (strcmp(id, "dot_product_normal") == 0 && nargs == 4) {
            *out = gml_dot_product_normal(args[0], args[1], args[2], args[3]); return true;
        }
        if (strcmp(id, "dot_product_3d_normal") == 0 && nargs == 6) {
            *out = gml_dot_product_3d_normal(args[0], args[1], args[2], args[3], args[4], args[5]); return true;
        }
        if (strcmp(id, "color_inverse") == 0) {
            *out = gml_color_inverse(arg); return true;
        }
        if (strcmp(id, "color_reverse") == 0) {
            *out = gml_color_reverse(arg); return true;
        }
        if (strcmp(id, "ds_grid_multiply") == 0) {
            *out = gml_ds_grid_multiply(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0, nargs >= 4 ? args[3] : 1); return true;
        }
        if (strcmp(id, "ds_grid_add") == 0) {
            *out = gml_ds_grid_add(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0, nargs >= 4 ? args[3] : 0); return true;
        }
        if (strcmp(id, "ds_grid_copy") == 0) {
            *out = gml_ds_grid_copy(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_list_shuffle") == 0) {
            *out = gml_ds_list_shuffle(arg); return true;
        }
        if (strcmp(id, "ds_list_sort") == 0) {
            *out = gml_ds_list_sort(arg, nargs >= 2 ? args[1] : 1); return true;
        }
        if (strcmp(id, "ds_list_add_many") == 0) {
            *out = gml_ds_list_add_many(arg, nargs > 1 ? &args[1] : NULL, nargs > 1 ? nargs - 1 : 0); return true;
        }
        if (strcmp(id, "ds_list_contains") == 0 && nargs >= 2) {
            *out = gml_ds_list_contains(arg, args[1]); return true;
        }
        if (strcmp(id, "ds_list_find_first") == 0 && nargs >= 2) {
            *out = gml_ds_list_find_first(arg, args[1]); return true;
        }
        if (strcmp(id, "ds_list_find_last") == 0 && nargs >= 2) {
            *out = gml_ds_list_find_last(arg, args[1]); return true;
        }
        if (strcmp(id, "ds_list_pop") == 0) {
            *out = gml_ds_list_pop(arg); return true;
        }
        if (strcmp(id, "ds_list_reverse") == 0) {
            *out = gml_ds_list_reverse(arg); return true;
        }
        if (strcmp(id, "ds_list_unique") == 0) {
            *out = gml_ds_list_unique(arg); return true;
        }
        if (strcmp(id, "point_in_rectangle") == 0) {
            *out = gml_point_in_rectangle(args[0], args[1], args[2], args[3], args[4], args[5]); return true;
        }
        if (strcmp(id, "point_in_circle") == 0) {
            *out = gml_point_in_circle(args[0], args[1], args[2], args[3], args[4]); return true;
        }
        if (strcmp(id, "point_in_triangle") == 0) {
            *out = gml_point_in_triangle(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]); return true;
        }
        if (strcmp(id, "rectangle_in_circle") == 0 && nargs >= 7) {
            *out = gml_rectangle_in_circle(args[0], args[1], args[2], args[3], args[4], args[5], args[6]); return true;
        }
        if (strcmp(id, "rectangle_in_rectangle") == 0 && nargs >= 8) {
            *out = gml_rectangle_in_rectangle(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]); return true;
        }
        if (strcmp(id, "triangle_is_clockwise") == 0 && nargs >= 6) {
            *out = gml_triangle_is_clockwise(args[0], args[1], args[2], args[3], args[4], args[5]); return true;
        }
        if (strcmp(id, "point_direction_3d") == 0) {
            *out = gml_point_direction_3d(args[0], args[1], args[2], args[3], args[4], args[5]); return true;
        }
        if (strcmp(id, "hex_to_color") == 0) {
            *out = gml_hex_to_color((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
        if (strcmp(id, "collision_rectangle") == 0) {
            *out = gml_collision_rectangle(args[0], args[1], args[2], args[3], args[4], args[5], args[6]); return true;
        }
        if (strcmp(id, "collision_circle") == 0) {
            *out = gml_collision_circle(args[0], args[1], args[2], args[3], args[4], args[5]); return true;
        }
        if (strcmp(id, "collision_ellipse") == 0) {
            *out = gml_collision_ellipse(args[0], args[1], args[2], args[3], args[4], args[5], args[6]); return true;
        }
        if (strcmp(id, "collision_line") == 0) {
            *out = gml_collision_line(args[0], args[1], args[2], args[3], args[4], args[5], args[6]); return true;
        }
        if (strcmp(id, "collision_point") == 0) {
            *out = gml_collision_point(args[0], args[1], args[2], args[3], args[4]); return true;
        }
        if (strcmp(id, "keyboard_check") == 0) {
            *out = gml_keyboard_check(arg); return true;
        }
        if (strcmp(id, "mouse_check_button") == 0) {
            *out = gml_mouse_check_button(arg); return true;
        }
        if (strcmp(id, "keyboard_check_pressed") == 0) {
            *out = gml_keyboard_check_pressed(arg); return true;
        }
        if (strcmp(id, "keyboard_check_released") == 0) {
            *out = gml_keyboard_check_released(arg); return true;
        }
        if (strcmp(id, "place_free") == 0) {
            double yarg = (nargs >= 2) ? args[1] : (p->self ? p->self->y : 0);
            *out = gml_place_free(arg, yarg); return true;
        }
        if (strcmp(id, "place_meeting") == 0) {
            double yarg = (nargs >= 2) ? args[1] : 0;
            double oarg = (nargs >= 3) ? args[2] : -1;
            *out = gml_place_meeting(arg, yarg, oarg); return true;
        }
        if (strcmp(id, "place_meeting_precise") == 0) {
            double yarg = (nargs >= 2) ? args[1] : 0;
            double oarg = (nargs >= 3) ? args[2] : -1;
            *out = gml_place_meeting_precise(arg, yarg, oarg); return true;
        }
        if (strcmp(id, "ds_grid_create") == 0) {
            *out = gml_ds_grid_create(arg, (nargs >= 2) ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_grid_destroy") == 0) {
            *out = gml_ds_grid_destroy(arg); return true;
        }
        if (strcmp(id, "ds_grid_width") == 0) {
            *out = gml_ds_grid_width(arg); return true;
        }
        if (strcmp(id, "ds_grid_height") == 0) {
            *out = gml_ds_grid_height(arg); return true;
        }
        if (strcmp(id, "ds_grid_set") == 0) {
            *out = gml_ds_grid_set(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0, (nargs >= 4) ? args[3] : 0); return true;
        }
        if (strcmp(id, "ds_grid_get") == 0) {
            *out = gml_ds_grid_get(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0); return true;
        }
        if (strcmp(id, "ds_grid_clear") == 0) {
            *out = gml_ds_grid_clear(arg, (nargs >= 2) ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_grid_resize") == 0) {
            *out = gml_ds_grid_resize(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0); return true;
        }
        if (strcmp(id, "ds_list_create") == 0) {
            *out = gml_ds_list_create(); return true;
        }
        if (strcmp(id, "ds_list_destroy") == 0) {
            *out = gml_ds_list_destroy(arg); return true;
        }
        if (strcmp(id, "ds_list_add") == 0) {
            *out = gml_ds_list_add(arg, (nargs >= 2) ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_list_insert") == 0) {
            *out = gml_ds_list_insert(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0); return true;
        }
        if (strcmp(id, "ds_list_replace") == 0) {
            *out = gml_ds_list_replace(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0); return true;
        }
        if (strcmp(id, "ds_list_find_value") == 0) {
            *out = gml_ds_list_find_value(arg, (nargs >= 2) ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_list_size") == 0) {
            *out = gml_ds_list_size(arg); return true;
        }
        if (strcmp(id, "ds_map_create") == 0) {
            *out = gml_ds_map_create(); return true;
        }
        if (strcmp(id, "ds_map_destroy") == 0) {
            *out = gml_ds_map_destroy(arg); return true;
        }
        if (strcmp(id, "ds_map_add") == 0) {
            *out = gml_ds_map_add(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0); return true;
        }
        if (strcmp(id, "ds_map_replace") == 0) {
            *out = gml_ds_map_replace(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0); return true;
        }
        if (strcmp(id, "ds_map_get") == 0) {
            *out = gml_ds_map_get(arg, (nargs >= 2) ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_map_search") == 0) {
            *out = gml_ds_map_search(arg, (nargs >= 2) ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_map_add_copy") == 0) {
            *out = gml_ds_map_add_copy(arg, (nargs >= 2) ? args[1] : -1); return true;
        }
        if (strcmp(id, "ds_map_empty") == 0) {
            *out = gml_ds_map_empty(arg); return true;
        }
        if (strcmp(id, "ds_priority_create") == 0) {
            *out = gml_ds_priority_create(); return true;
        }
        if (strcmp(id, "ds_priority_destroy") == 0) {
            *out = gml_ds_priority_destroy(arg); return true;
        }
        if (strcmp(id, "ds_priority_add") == 0) {
            *out = gml_ds_priority_add(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0); return true;
        }
        if (strcmp(id, "ds_priority_find_max") == 0) {
            *out = gml_ds_priority_find_max(arg); return true;
        }
        if (strcmp(id, "ds_priority_delete_max") == 0) {
            *out = gml_ds_priority_delete_max(arg); return true;
        }
        if (strcmp(id, "ds_priority_find_min") == 0) {
            *out = gml_ds_priority_find_min(arg); return true;
        }
        if (strcmp(id, "ds_priority_delete_min") == 0) {
            *out = gml_ds_priority_delete_min(arg); return true;
        }
        if (strcmp(id, "ds_priority_change_priority") == 0) {
            *out = gml_ds_priority_change_priority(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0); return true;
        }
        if (strcmp(id, "ds_priority_size") == 0) {
            *out = gml_ds_priority_size(arg); return true;
        }
        if (strcmp(id, "ds_priority_empty") == 0) {
            *out = gml_ds_priority_empty(arg); return true;
        }
        if (strcmp(id, "ds_grid_set_disk") == 0) {
            *out = gml_ds_grid_set_disk(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0, (nargs >= 4) ? args[3] : 0, (nargs >= 5) ? args[4] : 0); return true;
        }
        if (strcmp(id, "ds_grid_fill") == 0) {
            *out = gml_ds_grid_fill(arg, (nargs >= 2) ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_grid_value_exists") == 0) {
            *out = gml_ds_grid_value_exists(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0, (nargs >= 4) ? args[3] : 0, (nargs >= 5) ? args[4] : 0, (nargs >= 6) ? args[5] : 0); return true;
        }
        if (strcmp(id, "ds_grid_value_x") == 0) {
            *out = gml_ds_grid_value_x(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0, (nargs >= 4) ? args[3] : 0, (nargs >= 5) ? args[4] : 0, (nargs >= 6) ? args[5] : 0); return true;
        }
        if (strcmp(id, "ds_grid_value_y") == 0) {
            *out = gml_ds_grid_value_y(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0, (nargs >= 4) ? args[3] : 0, (nargs >= 5) ? args[4] : 0, (nargs >= 6) ? args[5] : 0); return true;
        }
        if (strcmp(id, "ds_grid_multiply") == 0) {
            *out = gml_ds_grid_multiply(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0, (nargs >= 4) ? args[3] : 1); return true;
        }
        if (strcmp(id, "ds_grid_add") == 0) {
            *out = gml_ds_grid_add(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0, (nargs >= 4) ? args[3] : 0); return true;
        }
        if (strcmp(id, "ds_grid_copy") == 0) {
            *out = gml_ds_grid_copy(arg, (nargs >= 2) ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_list_shuffle") == 0) {
            *out = gml_ds_list_shuffle(arg); return true;
        }
        if (strcmp(id, "tile_add") == 0) {
            *out = gml_tile_add(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0, (nargs >= 4) ? args[3] : 0, (nargs >= 5) ? args[4] : 0, (nargs >= 6) ? args[5] : 0, (nargs >= 7) ? args[6] : 0, (nargs >= 8) ? args[7] : 0); return true;
        }
        if (strcmp(id, "tile_delete") == 0) {
            *out = gml_tile_delete(arg); return true;
        }
        if (strcmp(id, "tile_find") == 0) {
            *out = gml_tile_find(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0); return true;
        }
        if (strcmp(id, "tile_exists") == 0) {
            *out = gml_tile_exists(arg); return true;
        }
        if (strcmp(id, "tile_get_x") == 0) {
            *out = gml_tile_get_x(arg); return true;
        }
        if (strcmp(id, "tile_get_y") == 0) {
            *out = gml_tile_get_y(arg); return true;
        }
        if (strcmp(id, "tile_get_width") == 0) {
            *out = gml_tile_get_width(arg); return true;
        }
        if (strcmp(id, "tile_get_height") == 0) {
            *out = gml_tile_get_height(arg); return true;
        }
        if (strcmp(id, "tile_get_background") == 0) {
            *out = gml_tile_get_background(arg); return true;
        }
        if (strcmp(id, "tile_set_position") == 0) {
            *out = gml_tile_set_position(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0); return true;
        }
        if (strcmp(id, "tile_set_region") == 0) {
            *out = gml_tile_set_region(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0, (nargs >= 4) ? args[3] : 0, (nargs >= 5) ? args[4] : 0); return true;
        }
        if (strcmp(id, "window_get_width") == 0) {
            *out = gml_window_get_width(); return true;
        }
        if (strcmp(id, "window_get_height") == 0) {
            *out = gml_window_get_height(); return true;
        }
        if (strcmp(id, "window_set_size") == 0) {
            *out = gml_window_set_size(arg, (nargs >= 2) ? args[1] : 0); return true;
        }
        if (strcmp(id, "window_center") == 0) {
            *out = gml_window_center(); return true;
        }
        if (strcmp(id, "get_timer") == 0) {
            *out = gml_get_timer(); return true;
        }
        if (strcmp(id, "delta_time") == 0) {
            *out = gml_delta_time(); return true;
        }
        if (strcmp(id, "ds_list_find_value") == 0) {
            *out = gml_ds_list_find_value(arg, (nargs >= 2) ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_list_size") == 0) {
            *out = gml_ds_list_size(arg); return true;
        }
        if (strcmp(id, "ds_stack_create") == 0) {
            *out = gml_ds_stack_create(); return true;
        }
        if (strcmp(id, "ds_stack_destroy") == 0) {
            *out = gml_ds_stack_destroy(arg); return true;
        }
        if (strcmp(id, "ds_stack_push") == 0) {
            *out = gml_ds_stack_push(arg, (nargs >= 2) ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_stack_push_many") == 0) {
            *out = gml_ds_stack_push_many(arg, nargs > 1 ? &args[1] : NULL, nargs > 1 ? nargs - 1 : 0); return true;
        }
        if (strcmp(id, "ds_stack_pop") == 0) {
            *out = gml_ds_stack_pop(arg); return true;
        }
        if (strcmp(id, "ds_queue_create") == 0) {
            *out = gml_ds_queue_create(); return true;
        }
        if (strcmp(id, "ds_queue_destroy") == 0) {
            *out = gml_ds_queue_destroy(arg); return true;
        }
        if (strcmp(id, "ds_queue_enqueue") == 0) {
            *out = gml_ds_queue_enqueue(arg, (nargs >= 2) ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_queue_enqueue_many") == 0) {
            *out = gml_ds_queue_enqueue_many(arg, nargs > 1 ? &args[1] : NULL, nargs > 1 ? nargs - 1 : 0); return true;
        }
        if (strcmp(id, "ds_queue_dequeue") == 0) {
            *out = gml_ds_queue_dequeue(arg); return true;
        }
        if (strcmp(id, "place_empty") == 0) {
            double yarg = (nargs >= 2) ? args[1] : (p->self ? p->self->y : 0);
            *out = gml_place_empty(arg, yarg); return true;
        }
        if (strcmp(id, "position_empty") == 0) {
            *out = gml_place_empty(args[0], nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "instance_number") == 0) {
            *out = gml_instance_number(arg); return true;
        }
        if (strcmp(id, "instance_exists") == 0) {
            *out = gml_instance_exists(arg); return true;
        }

        /* GM82Project/gm82core instances.gml (open source) — clean reimpl */
        if (strcmp(id, "instance_create_depth") == 0) {
            double ox = nargs >= 1 ? args[0] : 0, oy = nargs >= 2 ? args[1] : 0;
            double dep = nargs >= 3 ? args[2] : 0, oi = nargs >= 4 ? args[3] : 0;
            double idv = gml_instance_create(ox, oy, oi);
            if (idv >= 0 && p->rt) {
                for (int i = 0; i < p->rt->instance_count; i++) {
                    if (p->rt->instances[i].alive && (double)p->rt->instances[i].id == idv) {
                        p->rt->instances[i].depth = (int32_t)dep; break;
                    }
                }
            }
            *out = idv; return true;
        }
        if (strcmp(id, "instance_create_moving") == 0 && nargs >= 5) {
            *out = gml_instance_create_moving(args[0], args[1], args[2], args[3], args[4]); return true;
        }
        if (strcmp(id, "instance_create_depth_moving") == 0 && nargs >= 6) {
            *out = gml_instance_create_depth_moving(args[0], args[1], args[2], args[3], args[4], args[5]); return true;
        }
        if (strcmp(id, "direction_to_object") == 0) {
            *out = 0;
            if (p->rt && p->self) {
                int32_t oi = (int32_t)arg; double best = 1e300; int found = 0;
                double bx = 0, by = 0;
                for (int i = 0; i < p->rt->instance_count; i++) {
                    gm82_instance *o = &p->rt->instances[i];
                    if (!o->alive || o->object_index != oi) continue;
                    double dx = o->x - p->self->x, dy = o->y - p->self->y;
                    double d = dx*dx + dy*dy;
                    if (!found || d < best) { best = d; bx = o->x; by = o->y; found = 1; }
                }
                if (found) *out = gml_point_direction(p->self->x, p->self->y, bx, by);
            }
            return true;
        }
        if (strcmp(id, "distance_to_center") == 0) {
            *out = -1;
            if (p->rt && p->self) {
                int32_t oi = (int32_t)arg; double best = 1e300; int found = 0;
                for (int i = 0; i < p->rt->instance_count; i++) {
                    gm82_instance *o = &p->rt->instances[i];
                    if (!o->alive || o == p->self) continue;
                    if (oi < 100000 && o->object_index != oi) continue;
                    if (oi >= 100000 && o->id != oi) continue;
                    double dx = o->x - p->self->x, dy = o->y - p->self->y;
                    double d = sqrt(dx*dx + dy*dy);
                    if (!found || d < best) { best = d; found = 1; }
                }
                if (found) *out = best;
            }
            return true;
        }

        /* GML Math Builtins */
        if (strcmp(id, "dsin") == 0) {
            *out = gml_dsin(arg); return true;
        }
        if (strcmp(id, "dcos") == 0) {
            *out = gml_dcos(arg); return true;
        }
        if (strcmp(id, "clamp") == 0) {
            double v = arg;
            double lo = nargs >= 2 ? args[1] : 0;
            double hi = nargs >= 3 ? args[2] : 0;
            *out = gml_clamp(v, lo, hi); return true;
        }
        if (strcmp(id, "lerp") == 0) {
            double a = arg;
            double b = nargs >= 2 ? args[1] : 0;
            double t = nargs >= 3 ? args[2] : 0;
            *out = gml_lerp(a, b, t); return true;
        }
        if (strcmp(id, "point_distance_3d") == 0) {
            double x1 = arg, y1 = nargs >= 2 ? args[1] : 0, z1 = nargs >= 3 ? args[2] : 0;
            double x2 = nargs >= 4 ? args[3] : 0, y2 = nargs >= 5 ? args[4] : 0, z2 = nargs >= 6 ? args[5] : 0;
            *out = gml_point_distance_3d(x1, y1, z1, x2, y2, z2); return true;
        }
        if (strcmp(id, "dot_product") == 0) {
            double x1 = arg, y1 = nargs >= 2 ? args[1] : 0;
            double x2 = nargs >= 3 ? args[2] : 0, y2 = nargs >= 4 ? args[3] : 0;
            *out = gml_dot_product(x1, y1, x2, y2); return true;
        }
        if (strcmp(id, "move_towards_fixed") == 0) {
            double tx = nargs >= 1 ? args[0] : 0, ty = nargs >= 2 ? args[1] : 0;
            double sp = nargs >= 3 ? args[2] : 0;
            if (p->self) {
                double dist = gml_point_distance(p->self->x, p->self->y, tx, ty);
                double use = sp < dist ? sp : dist;
                gml_move_towards_point(tx, ty, use);
            }
            *out = 0; return true;
        }

        if (strcmp(id, "instance_create") == 0) {
            double xarg = arg;
            double yarg = (nargs >= 2) ? args[1] : 0;
            double oarg = (nargs >= 3) ? args[2] : 0;
            *out = gml_instance_create(xarg, yarg, oarg); return true;
        }
        if (strcmp(id, "draw_self") == 0) {
            if (p->self) gml_draw_sprite((double)p->self->sprite_index, p->self->x, p->self->y);
            *out = 1; return true;
        }
        if (strcmp(id, "sound_loop") == 0) {
            *out = gml_sound_loop(arg); return true;
        }
        if (strcmp(id, "sound_volume") == 0) {
            *out = gml_sound_volume(arg, nargs >= 2 ? args[1] : 1.0); return true;
        }
        if (strcmp(id, "sound_pitch") == 0) {
            *out = gml_sound_pitch(arg, nargs >= 2 ? args[1] : 1.0); return true;
        }
        if (strcmp(id, "sound_pan") == 0) {
            *out = gml_sound_pan(arg, nargs >= 2 ? args[1] : 0.0); return true;
        }
        if (strcmp(id, "draw_text") == 0) {
            gml_draw_text(args[0], nargs >= 2 ? args[1] : 0, (p->str_mask & 4) ? p->str_args[2] : ""); *out = 1; return true;
        }
        if (strcmp(id, "draw_text_color") == 0) {
            gml_draw_text_color(args[0], nargs >= 2 ? args[1] : 0, (p->str_mask & 4) ? p->str_args[2] : "", nargs >= 4 ? args[3] : 0, nargs >= 5 ? args[4] : 0, nargs >= 6 ? args[5] : 0, nargs >= 7 ? args[6] : 0); *out = 1; return true;
        }
        if (strcmp(id, "draw_text_ext") == 0) {
            gml_draw_text_ext(args[0], nargs >= 2 ? args[1] : 0, (p->str_mask & 4) ? p->str_args[2] : "", nargs >= 4 ? args[3] : -1, nargs >= 5 ? args[4] : -1); *out = 1; return true;
        }
        if (strcmp(id, "draw_set_color") == 0) {
            gml_draw_set_color(arg); *out = 1; return true;
        }
        if (strcmp(id, "draw_set_alpha") == 0 || strcmp(id, "draw_seta") == 0) {
            gml_draw_set_alpha(arg); *out = 1; return true;
        }
        if (strcmp(id, "draw_reset") == 0) {
            gml_draw_reset(); *out = 1; return true;
        }
        if (strcmp(id, "draw_set_rgba") == 0) {
            gml_draw_set_rgba(args[0], nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0, nargs >= 4 ? args[3] : 1.0);
            *out = 1; return true;
        }
        if (strcmp(id, "instance_destroy_id") == 0) {
            *out = gml_instance_destroy_id(arg); return true;
        }
        if (strcmp(id, "instance_nearest_notme") == 0) {
            *out = gml_instance_nearest_notme(args[0], nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : -1); return true;
        }
        if (strcmp(id, "string_ends_with") == 0) {
            *out = gml_string_ends_with((p->str_mask & 1) ? p->str_args[0] : "", (p->str_mask & 2) ? p->str_args[1] : ""); return true;
        }
        if (strcmp(id, "draw_get_color") == 0) {
            *out = gml_draw_get_color(); return true;
        }
        if (strcmp(id, "draw_get_alpha") == 0) {
            *out = gml_draw_get_alpha(); return true;
        }
        if (strcmp(id, "draw_line") == 0) {
            gml_draw_line(args[0], args[1], args[2], args[3]); *out = 1; return true;
        }
        if (strcmp(id, "draw_rectangle") == 0) {
            gml_draw_rectangle(args[0], args[1], args[2], args[3], nargs >= 5 ? args[4] : 0); *out = 1; return true;
        }
        if (strcmp(id, "draw_circle") == 0) {
            gml_draw_circle(args[0], args[1], args[2], nargs >= 4 ? args[3] : 0); *out = 1; return true;
        }
        if (strcmp(id, "draw_sprite") == 0) {
            gml_draw_sprite(args[0], nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); *out = 1; return true;
        }
        if (strcmp(id, "draw_sprite_ext") == 0) {
            gml_draw_sprite_ext(args[0], nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0, nargs >= 4 ? args[3] : 0,
                                nargs >= 5 ? args[4] : 1, nargs >= 6 ? args[5] : 1, nargs >= 7 ? args[6] : 0,
                                nargs >= 8 ? args[7] : 0xFFFFFF, 1.0);
            *out = 1; return true;
        }
        if (strcmp(id, "draw_surface") == 0) {
            *out = gml_draw_surface(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "draw_surface_ext") == 0) {
            *out = gml_draw_surface_ext(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0,
                                        nargs >= 4 ? args[3] : 1, nargs >= 5 ? args[4] : 1,
                                        nargs >= 6 ? args[5] : 0, nargs >= 7 ? args[6] : 0xFFFFFF,
                                        nargs >= 8 ? args[7] : 1.0); return true;
        }
        if (strcmp(id, "draw_point") == 0) {
            gml_draw_point(arg, nargs >= 2 ? args[1] : 0); *out = 1; return true;
        }
        if (strcmp(id, "draw_ellipse") == 0) {
            gml_draw_ellipse(args[0], args[1], args[2], args[3], nargs >= 5 ? args[4] : 0); *out = 1; return true;
        }
        if (strcmp(id, "draw_roundrect") == 0) {
            gml_draw_roundrect(args[0], args[1], args[2], args[3], nargs >= 5 ? args[4] : 0); *out = 1; return true;
        }
        if (strcmp(id, "draw_triangle") == 0) {
            gml_draw_triangle(args[0], args[1], args[2], args[3], args[4], args[5], nargs >= 7 ? args[6] : 0); *out = 1; return true;
        }
        if (strcmp(id, "draw_set_halign") == 0) {
            gml_draw_set_halign(arg); *out = 0; return true;
        }
        if (strcmp(id, "draw_set_valign") == 0) {
            gml_draw_set_valign(arg); *out = 0; return true;
        }
        if (strcmp(id, "draw_set_font") == 0) {
            gml_draw_set_font(arg); *out = 0; return true;
        }
        if (strcmp(id, "draw_set_blend_mode") == 0) {
            gml_draw_set_blend_mode(arg); *out = 0; return true;
        }
        if (strcmp(id, "draw_background") == 0) {
            *out = gml_draw_background(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "draw_background_ext") == 0) {
            *out = gml_draw_background_ext(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0,
                                           nargs >= 4 ? args[3] : 1, nargs >= 5 ? args[4] : 1,
                                           nargs >= 6 ? args[5] : 0, nargs >= 7 ? args[6] : 0xFFFFFF,
                                           nargs >= 8 ? args[7] : 1.0); return true;
        }
        if (strcmp(id, "draw_background_tiled") == 0) {
            *out = gml_draw_background_tiled(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (p->rt && p->rt->scripts) {
            int sidx = gm82_script_find(p->rt->scripts, id);
            if (sidx >= 0) {
                gm82_gml_set_script_args(args, nargs);
                const char *code = p->rt->scripts->items[sidx].code;
                if (code && code[0]) {
                    *out = (double)gm82_gml_eval_block(p->rt, p->self, code);
                    return true;
                }
            }
        }
        if (strcmp(id, "gravedad") == 0) {
            /* user script in mario sample – apply simple gravity */
            if (p->self) { p->self->gravity = 0.4; p->self->gravity_direction = 270; }
            *out = 0; return true;
        }
        if (strcmp(id, "instance_destroy") == 0) {
            gml_instance_destroy(); *out = 0; return true;
        }
        if (strcmp(id, "instance_destroy_other") == 0) {
            *out = gml_instance_destroy_other(); return true;
        }
        if (strcmp(id, "instance_nearest") == 0) {
            *out = gml_instance_nearest(args[0], args[1], args[2]); return true;
        }
        if (strcmp(id, "instance_find") == 0) {
            *out = gml_instance_find(args[0], args[1]); return true;
        }
        if (strcmp(id, "distance_to_object") == 0) {
            *out = gml_distance_to_object(arg); return true;
        }
        if (strcmp(id, "position_meeting") == 0) {
            *out = gml_position_meeting(args[0], args[1], args[2]); return true;
        }
        if (strcmp(id, "instance_place") == 0) {
            *out = gml_instance_place(args[0], args[1], args[2]); return true;
        }
        if (strcmp(id, "instance_position") == 0) {
            *out = gml_instance_position(args[0], args[1], args[2]); return true;
        }
        if (strcmp(id, "move_contact_solid") == 0) {
            *out = gml_move_contact_solid(arg, nargs >= 2 ? args[1] : 1000); return true;
        }
        if (strcmp(id, "move_contact_all") == 0) {
            *out = gml_move_contact_all(arg, nargs >= 2 ? args[1] : 1000); return true;
        }
        if (strcmp(id, "move_outside_solid") == 0) {
            *out = gml_move_outside_solid(arg, nargs >= 2 ? args[1] : 1000); return true;
        }
        if (strcmp(id, "move_outside_all") == 0) {
            *out = gml_move_outside_all(arg, nargs >= 2 ? args[1] : 1000); return true;
        }
        if (strcmp(id, "move_bounce_solid") == 0) {
            *out = gml_move_bounce_solid(nargs >= 1 ? arg : 0); return true;
        }
        if (strcmp(id, "move_bounce_all") == 0) {
            *out = gml_move_bounce_all(nargs >= 1 ? arg : 0); return true;
        }
        if (strcmp(id, "distance_to_point") == 0) {
            *out = gml_distance_to_point(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "motion_set") == 0) {
            gml_motion_set(arg, nargs >= 2 ? args[1] : 0); *out = 0; return true;
        }
        if (strcmp(id, "motion_add") == 0) {
            gml_motion_add(arg, nargs >= 2 ? args[1] : 0); *out = 0; return true;
        }

        /* DnD action_* aliases (ported from NM.Maker.0..1.0) */
        if (strcmp(id, "action_move_to") == 0) {
            if (p->self) { p->self->x = nargs >= 1 ? args[0] : p->self->x;
                           p->self->y = nargs >= 2 ? args[1] : p->self->y; }
            *out = 1; return true;
        }
        if (strcmp(id, "action_move_start") == 0) {
            double xs = p->self ? p->self->xprevious : 0;
            double ys = p->self ? p->self->yprevious : 0;
            (void)get_var(p, "xstart", &xs);
            (void)get_var(p, "ystart", &ys);
            if (p->self) { p->self->x = xs; p->self->y = ys; }
            *out = 1; return true;
        }
        if (strcmp(id, "action_set_hspeed") == 0) {
            if (p->self) p->self->hspeed = arg;
            *out = 1;
            return true;
        }
        if (strcmp(id, "action_set_vspeed") == 0) {
            if (p->self) p->self->vspeed = arg;
            *out = 1;
            return true;
        }
        if (strcmp(id, "action_set_gravity") == 0) {
            if (p->self) {
                p->self->gravity = arg;
                if (nargs >= 2) p->self->gravity_direction = args[1];
            }
            *out = 1;
            return true;
        }
        if (strcmp(id, "action_set_friction") == 0) {
            if (p->self) p->self->friction = arg;
            *out = 1;
            return true;
        }
        if (strcmp(id, "action_set_motion") == 0) {
            if (p->self && nargs >= 2) {
                double dir = args[0], sp = args[1];
                p->self->direction = dir; p->self->speed = sp;
                p->self->hspeed = sp * cos(dir * 3.14159265358979323846 / 180.0);
                p->self->vspeed = -sp * sin(dir * 3.14159265358979323846 / 180.0);
            }
            *out = 1; return true;
        }
        if (strcmp(id, "action_kill_object") == 0) {
            gml_instance_destroy(); *out = 1; return true;
        }
        if (strcmp(id, "action_create_object") == 0) {
            double oi = arg;
            double ox = nargs >= 2 ? args[1] : (p->self ? p->self->x : 0);
            double oy = nargs >= 3 ? args[2] : (p->self ? p->self->y : 0);
            *out = gml_instance_create(ox, oy, oi); return true;
        }
        if (strcmp(id, "action_sprite_set") == 0) {
            if (p->self) p->self->sprite_index = (int32_t)arg;
            *out = 1;
            return true;
        }
        if (strcmp(id, "action_sound") == 0) { *out = 1; return true; }
        if (strcmp(id, "action_restart_game") == 0 || strcmp(id, "action_current_room") == 0) {
            if (p->rt) gm82_runtime_goto_room(p->rt, p->rt->current_room);
            *out = 1; return true;
        }
        if (strcmp(id, "action_next_room") == 0) {
            if (p->rt) gm82_runtime_goto_room(p->rt, p->rt->current_room + 1);
            *out = 1; return true;
        }
        if (strcmp(id, "action_previous_room") == 0) {
            if (p->rt && p->rt->current_room > 0) gm82_runtime_goto_room(p->rt, p->rt->current_room - 1);
            *out = 1; return true;
        }
        if (strcmp(id, "action_another_room") == 0) {
            if (p->rt) gm82_runtime_goto_room(p->rt, (int)arg);
            *out = 1; return true;
        }
        if (strcmp(id, "action_bounce") == 0) {
            if (p->self) { p->self->hspeed = -p->self->hspeed; p->self->vspeed = -p->self->vspeed; }
            *out = 1; return true;
        }
        if (strcmp(id, "action_move_point") == 0) {
            gml_move_towards_point(nargs >= 1 ? args[0] : 0, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 1);
            *out = 1; return true;
        }

        if (strcmp(id, "move_towards_point") == 0) {
            gml_move_towards_point(args[0], args[1], nargs >= 3 ? args[2] : 0); *out = 0; return true;
        }
        if (strcmp(id, "mp_potential_step") == 0 || strcmp(id, "action_potential_step") == 0) {
            double tx = nargs >= 1 ? args[0] : 0;
            double ty = nargs >= 2 ? args[1] : 0;
            double sp = nargs >= 3 ? args[2] : 1;
            gml_move_towards_point(tx, ty, sp);
            *out = 1; return true;
        }
        if (strcmp(id, "choose") == 0) {
            if (nargs > 0) *out = args[rand() % nargs]; else *out = 0; return true;
        }
        if (strcmp(id, "random_range") == 0) {
            *out = gml_random_range(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "irandom_range") == 0) {
            *out = gml_irandom_range(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "random") == 0) {
            *out = gml_random(arg); return true;
        }
        if (strcmp(id, "alarm_set") == 0) {
            *out = gml_alarm_set(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "alarm_get") == 0) {
            *out = gml_alarm_get(arg); return true;
        }
        if (strcmp(id, "sound_play") == 0) {
            *out = gml_sound_play(arg); return true;
        }
        if (strcmp(id, "sound_play_pitch") == 0) {
            gml_sound_pitch(arg, nargs >= 2 ? args[1] : 1.0);
            *out = gml_sound_play(arg); return true;
        }
        if (strcmp(id, "sound_loop_pitch") == 0) {
            gml_sound_pitch(arg, nargs >= 2 ? args[1] : 1.0);
            *out = gml_sound_loop(arg); return true;
        }
        if (strcmp(id, "sound_stop") == 0) {
            *out = gml_sound_stop(arg); return true;
        }
        if (strcmp(id, "sound_isplaying") == 0) {
            *out = gml_sound_isplaying(arg); return true;
        }
        if (strcmp(id, "room_goto") == 0) {
            *out = gml_room_goto(arg); return true;
        }
        if (strcmp(id, "room_goto_next") == 0) {
            *out = gml_room_goto_next(); return true;
        }
        if (strcmp(id, "room_goto_previous") == 0) {
            *out = gml_room_goto_previous(); return true;
        }
        if (strcmp(id, "room_restart") == 0) {
            *out = gml_room_restart(); return true;
        }
        if (strcmp(id, "game_restart") == 0) {
            *out = gml_game_restart(); return true;
        }
                if (strcmp(id, "is_real") == 0) { *out = 1; return true; }
        if (strcmp(id, "is_string") == 0) { *out = 0; return true; }
        if (strcmp(id, "room_exists") == 0) {
            int r = (int)arg;
            *out = (p->rt && p->rt->rooms && r >= 0 && r < p->rt->rooms->count) ? 1.0 : 0.0;
            return true;
        }
        if (strcmp(id, "room_find") == 0) {
            *out = gml_room_find((p->str_mask & 1) ? p->str_args[0] : "");
            return true;
        }
        if (strcmp(id, "event_inherited") == 0) { *out = 1; return true; }
        if (strcmp(id, "object_exists") == 0) {
            int o = (int)arg;
            *out = (p->rt && p->rt->objects && o >= 0 && o < p->rt->objects->count) ? 1.0 : 0.0;
            return true;
        }
        if (strcmp(id, "object_get_parent") == 0) { *out = -1; return true; }
        if (strcmp(id, "object_get_name") == 0) { *out = arg; return true; }
                if (strcmp(id, "fps") == 0) {
            *out = p->rt ? (double)(p->rt->room_speed > 0 ? p->rt->room_speed : 30) : 30.0;
            return true;
        }
        if (strcmp(id, "current_hour") == 0) {
            time_t tt = time(NULL); struct tm *tm = localtime(&tt);
            *out = tm ? (double)tm->tm_hour : 0; return true;
        }
        if (strcmp(id, "current_minute") == 0) {
            time_t tt = time(NULL); struct tm *tm = localtime(&tt);
            *out = tm ? (double)tm->tm_min : 0; return true;
        }
        if (strcmp(id, "current_second") == 0) {
            time_t tt = time(NULL); struct tm *tm = localtime(&tt);
            *out = tm ? (double)tm->tm_sec : 0; return true;
        }
        if (strcmp(id, "game_id") == 0) { *out = 0; return true; }
        if (strcmp(id, "parameter_count") == 0) { *out = 0; return true; }
        if (strcmp(id, "parameter_string") == 0) { *out = 0; return true; }
        if (strcmp(id, "environment_get_variable") == 0) { *out = 0; return true; }
        if (strcmp(id, "working_directory") == 0 || strcmp(id, "temp_directory") == 0 ||
            strcmp(id, "program_directory") == 0) { *out = 0; return true; }
        if (strcmp(id, "game_end") == 0) {
            *out = gml_game_end(); return true;
        }
        if (strcmp(id, "game_save") == 0) {
            *out = gml_game_save((p->str_mask & 1) ? p->str_args[0] : "nor_save.dat"); return true;
        }
        if (strcmp(id, "game_load") == 0) {
            *out = gml_game_load((p->str_mask & 1) ? p->str_args[0] : "nor_save.dat"); return true;
        }
        if (strcmp(id, "show_debug_message") == 0) {
            gml_show_debug_message((p->str_mask & 1) ? p->str_args[0] : "");
            *out = 0; return true;
        }
        if (strcmp(id, "show_message") == 0) {
            gml_show_debug_message((p->str_mask & 1) ? p->str_args[0] : "");
            *out = 1; return true;
        }
        if (strcmp(id, "show_question") == 0) { *out = 1; return true; }
        if (strcmp(id, "get_integer") == 0) { *out = nargs >= 2 ? args[1] : 0; return true; }
        if (strcmp(id, "get_string") == 0) { *out = 0; return true; }
        if (strcmp(id, "randomize") == 0) {
            *out = gml_randomize(); return true;
        }
        if (strcmp(id, "random_set_seed") == 0) {
            *out = gml_random_set_seed(arg); return true;
        }
        if (strcmp(id, "random_get_seed") == 0) {
            *out = gml_random_get_seed(); return true;
        }
        if (strcmp(id, "sprite_get_width") == 0) {
            *out = gml_sprite_get_width(arg); return true;
        }
        if (strcmp(id, "sprite_get_xoffset") == 0) {
            *out = gml_sprite_get_xoffset(arg); return true;
        }
        if (strcmp(id, "sprite_get_yoffset") == 0) {
            *out = gml_sprite_get_yoffset(arg); return true;
        }
        if (strcmp(id, "sprite_get_height") == 0) {
            *out = gml_sprite_get_height(arg); return true;
        }
        if (strcmp(id, "sprite_get_number") == 0) {
            *out = gml_sprite_get_number(arg); return true;
        }
        if (strcmp(id, "sprite_exists") == 0) {
            *out = gml_sprite_exists(arg); return true;
        }
        if (strcmp(id, "background_exists") == 0) {
            int b = (int)arg;
            *out = (p->rt && p->rt->backgrounds && b >= 0 && b < p->rt->backgrounds->count) ? 1.0 : 0.0;
            return true;
        }
        if (strcmp(id, "sound_exists") == 0) { *out = 0; return true; }
        if (strcmp(id, "font_exists") == 0) { *out = 0; return true; }
        if (strcmp(id, "path_exists") == 0) { *out = (arg >= 0) ? 1.0 : 0.0; return true; }
        if (strcmp(id, "timeline_exists") == 0) { *out = (arg >= 0) ? 1.0 : 0.0; return true; }
        if (strcmp(id, "variable_global_exists") == 0) { *out = 0; return true; }
        if (strcmp(id, "variable_local_exists") == 0) { *out = 0; return true; }
        if (strcmp(id, "variable_instance_exists") == 0) {
            *out = gml_variable_instance_exists(arg, (p->str_mask & 2) ? p->str_args[1] : "");
            return true;
        }
        if (strcmp(id, "variable_instance_get") == 0) {
            *out = gml_variable_instance_get(arg, (p->str_mask & 2) ? p->str_args[1] : "");
            return true;
        }
        if (strcmp(id, "variable_instance_set") == 0) {
            *out = gml_variable_instance_set(arg, (p->str_mask & 2) ? p->str_args[1] : "", nargs >= 3 ? args[2] : 0.0);
            return true;
        }
        if (strcmp(id, "object_get_depth") == 0) {
            int o = (int)arg; *out = 0;
            if (p->rt && p->rt->objects && o >= 0 && o < p->rt->objects->count)
                *out = (double)p->rt->objects->items[o].depth;
            return true;
        }
        if (strcmp(id, "object_get_persistent") == 0) {
            int o = (int)arg; *out = 0;
            if (p->rt && p->rt->objects && o >= 0 && o < p->rt->objects->count)
                *out = p->rt->objects->items[o].persistent ? 1.0 : 0.0;
            return true;
        }
        if (strcmp(id, "merge_color") == 0 || strcmp(id, "merge_colour") == 0) {
            double c1 = args[0], c2 = nargs >= 2 ? args[1] : 0, a = nargs >= 3 ? args[2] : 0.5;
            if (a < 0) a = 0;
            if (a > 1) a = 1;
            int r1 = ((int)c1) & 255, g1 = (((int)c1)>>8)&255, b1 = (((int)c1)>>16)&255;
            int r2 = ((int)c2) & 255, g2 = (((int)c2)>>8)&255, b2 = (((int)c2)>>16)&255;
            int r = (int)(r1 + (r2-r1)*a), g = (int)(g1 + (g2-g1)*a), b = (int)(b1 + (b2-b1)*a);
            *out = (double)(r | (g<<8) | (b<<16)); return true;
        }
        if (strcmp(id, "object_exists") == 0) {
            *out = gml_object_exists(arg); return true;
        }
        if (strcmp(id, "object_get_sprite") == 0) {
            *out = gml_object_get_sprite(arg); return true;
        }
        if (strcmp(id, "object_get_solid") == 0) {
            *out = gml_object_get_solid(arg); return true;
        }
        if (strcmp(id, "surface_create") == 0) {
            *out = gml_surface_create(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "surface_free") == 0) {
            *out = gml_surface_free(arg); return true;
        }
        if (strcmp(id, "surface_exists") == 0) {
            *out = gml_surface_exists(arg); return true;
        }
        if (strcmp(id, "surface_copy") == 0) {
            *out = gml_surface_copy(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "surface_getpixel") == 0) {
            *out = gml_surface_getpixel(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "surface_clear") == 0) {
            *out = gml_surface_clear(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 1); return true;
        }
        if (strcmp(id, "surface_set_target") == 0) {
            *out = gml_surface_set_target(arg); return true;
        }
        if (strcmp(id, "surface_reset_target") == 0) {
            *out = gml_surface_reset_target(); return true;
        }
        if (strcmp(id, "part_system_create") == 0) {
            *out = gml_part_system_create(); return true;
        }
        if (strcmp(id, "part_system_destroy") == 0) {
            *out = gml_part_system_destroy(arg); return true;
        }
        if (strcmp(id, "part_type_create") == 0) {
            *out = gml_part_type_create(); return true;
        }
        if (strcmp(id, "part_particles_create") == 0) {
            *out = gml_part_particles_create(args[0], args[1], args[2], args[3], nargs >= 5 ? args[4] : 1); return true;
        }
        if (strcmp(id, "ds_list_clear") == 0) {
            *out = gml_ds_list_clear(arg); return true;
        }
        if (strcmp(id, "ds_list_delete") == 0) {
            *out = gml_ds_list_delete(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_list_find_index") == 0) {
            *out = gml_ds_list_find_index(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_list_empty") == 0) {
            *out = gml_ds_list_empty(arg); return true;
        }
        if (strcmp(id, "ds_map_exists") == 0) {
            *out = gml_ds_map_exists(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_map_size") == 0) {
            *out = gml_ds_map_size(arg); return true;
        }
        if (strcmp(id, "ds_map_clear") == 0) {
            *out = gml_ds_map_clear(arg); return true;
        }
        if (strcmp(id, "ds_map_delete") == 0) {
            *out = gml_ds_map_delete(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "ds_stack_top") == 0) {
            *out = gml_ds_stack_top(arg); return true;
        }
        if (strcmp(id, "ds_stack_size") == 0) {
            *out = gml_ds_stack_size(arg); return true;
        }
        if (strcmp(id, "ds_stack_empty") == 0) {
            *out = gml_ds_stack_empty(arg); return true;
        }
        if (strcmp(id, "ds_queue_head") == 0) {
            *out = gml_ds_queue_head(arg); return true;
        }
        if (strcmp(id, "ds_queue_tail") == 0) {
            *out = gml_ds_queue_tail(arg); return true;
        }
        if (strcmp(id, "ds_queue_size") == 0) {
            *out = gml_ds_queue_size(arg); return true;
        }
        if (strcmp(id, "ds_queue_empty") == 0) {
            *out = gml_ds_queue_empty(arg); return true;
        }
        if (strcmp(id, "ds_queue_clear") == 0) {
            *out = gml_ds_queue_clear(arg); return true;
        }
        if (strcmp(id, "ds_grid_set_region") == 0 && nargs >= 6) {
            *out = gml_ds_grid_set_region(args[0], args[1], args[2], args[3], args[4], args[5]); return true;
        }
        if (strcmp(id, "ds_grid_add_region") == 0 && nargs == 6) {
            *out = gml_ds_grid_add_region(args[0], args[1], args[2], args[3], args[4], args[5]); return true;
        }
        if (strcmp(id, "ds_grid_multiply_region") == 0 && nargs == 6) {
            *out = gml_ds_grid_multiply_region(args[0], args[1], args[2], args[3], args[4], args[5]); return true;
        }
        if (strcmp(id, "ds_grid_set_grid_region") == 0 && nargs == 8) {
            *out = gml_ds_grid_set_grid_region(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]); return true;
        }
        if (strcmp(id, "ds_grid_add_grid_region") == 0 && nargs == 8) {
            *out = gml_ds_grid_add_grid_region(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]); return true;
        }
        if (strcmp(id, "ds_grid_multiply_grid_region") == 0 && nargs == 8) {
            *out = gml_ds_grid_multiply_grid_region(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]); return true;
        }
        if (strcmp(id, "ds_grid_get_sum") == 0) {
            *out = gml_ds_grid_get_sum(args[0], args[1], args[2], args[3], args[4]); return true;
        }
        if (strcmp(id, "ds_grid_get_max") == 0) {
            *out = gml_ds_grid_get_max(args[0], args[1], args[2], args[3], args[4]); return true;
        }
        if (strcmp(id, "ds_grid_get_min") == 0) {
            *out = gml_ds_grid_get_min(args[0], args[1], args[2], args[3], args[4]); return true;
        }
        if (strcmp(id, "ds_grid_get_mean") == 0) {
            *out = gml_ds_grid_get_mean(args[0], args[1], args[2], args[3], args[4]); return true;
        }
        if (strcmp(id, "ds_priority_create") == 0) {
            *out = gml_ds_priority_create(); return true;
        }
        if (strcmp(id, "ds_priority_destroy") == 0) {
            *out = gml_ds_priority_destroy(arg); return true;
        }
        if (strcmp(id, "ds_priority_add") == 0) {
            *out = gml_ds_priority_add(args[0], args[1], nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "ds_priority_delete_max") == 0) {
            *out = gml_ds_priority_delete_max(arg); return true;
        }
        if (strcmp(id, "ds_priority_find_max") == 0) {
            *out = gml_ds_priority_find_max(arg); return true;
        }
        if (strcmp(id, "ds_priority_size") == 0) {
            *out = gml_ds_priority_size(arg); return true;
        }
        if (strcmp(id, "ds_priority_empty") == 0) {
            *out = gml_ds_priority_empty(arg); return true;
        }
        if (strcmp(id, "mp_grid_create") == 0) {
            *out = gml_mp_grid_create(args[0], args[1], args[2], args[3], args[4], nargs >= 6 ? args[5] : 16); return true;
        }
        if (strcmp(id, "mp_grid_destroy") == 0) {
            *out = gml_mp_grid_destroy(arg); return true;
        }
        if (strcmp(id, "mp_grid_clear_all") == 0) {
            *out = gml_mp_grid_clear_all(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "mp_grid_add_cell") == 0) {
            *out = gml_mp_grid_add_cell(args[0], args[1], args[2], nargs >= 4 ? args[3] : 1); return true;
        }

        if (strcmp(id, "place_snapped") == 0) {
            double yarg = (nargs >= 2) ? args[1] : 0;
            double hs = (nargs >= 3) ? args[2] : 1;
            double vs = (nargs >= 4) ? args[3] : 1;
            *out = gml_place_snapped(arg, yarg, hs, vs); return true;
        }
        if (strcmp(id, "move_contact") == 0) {
            *out = gml_move_contact(arg, nargs >= 2 ? args[1] : 1000); return true;
        }
        if (strcmp(id, "move_bounce") == 0) {
            *out = gml_move_bounce(nargs >= 1 ? arg : 0); return true;
        }
        if (strcmp(id, "mp_grid_clear_cell") == 0) {
            *out = gml_mp_grid_clear_cell(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "mp_grid_clear_rectangle") == 0) {
            *out = gml_mp_grid_clear_rectangle(args[0], args[1], args[2], args[3], nargs >= 5 ? args[4] : 0); return true;
        }
        if (strcmp(id, "mp_grid_add_rectangle") == 0) {
            *out = gml_mp_grid_add_rectangle(args[0], args[1], args[2], args[3], args[4], nargs >= 6 ? args[5] : 1); return true;
        }
        if (strcmp(id, "mp_grid_add_instances") == 0) {
            *out = gml_mp_grid_add_instances(arg, nargs >= 2 ? args[1] : -1, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "mp_grid_draw") == 0) {
            *out = gml_mp_grid_draw(arg); return true;
        }

        if (strcmp(id, "mp_grid_path") == 0) {
            *out = gml_mp_grid_path(args[0], args[1], args[2], args[3], args[4], nargs >= 6 ? args[5] : 1); return true;
        }
        if (strcmp(id, "buffer_create") == 0) {
            *out = gml_buffer_create(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 1); return true;
        }
        if (strcmp(id, "buffer_delete") == 0) {
            *out = gml_buffer_delete(arg); return true;
        }
        if (strcmp(id, "buffer_write") == 0) {
            *out = gml_buffer_write(args[0], args[1], nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "buffer_read") == 0) {
            *out = gml_buffer_read(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "buffer_seek") == 0) {
            *out = gml_buffer_seek(args[0], args[1], nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "buffer_tell") == 0) {
            *out = gml_buffer_tell(arg); return true;
        }
        if (strcmp(id, "buffer_get_size") == 0) {
            *out = gml_buffer_get_size(arg); return true;
        }
        if (strcmp(id, "date_current_datetime") == 0) {
            *out = gml_date_current_datetime(); return true;
        }
        if (strcmp(id, "date_get_year") == 0) {
            *out = gml_date_get_year(arg); return true;
        }
        if (strcmp(id, "date_get_month") == 0) {
            *out = gml_date_get_month(arg); return true;
        }
        if (strcmp(id, "date_get_day") == 0) {
            *out = gml_date_get_day(arg); return true;
        }
        if (strcmp(id, "date_get_hour") == 0) {
            *out = gml_date_get_hour(arg); return true;
        }
        if (strcmp(id, "date_get_minute") == 0) {
            *out = gml_date_get_minute(arg); return true;
        }
        if (strcmp(id, "date_get_second") == 0) {
            *out = gml_date_get_second(arg); return true;
        }
        if (strcmp(id, "date_compare_datetime") == 0 && nargs == 2) {
            *out = gml_date_compare_datetime(args[0], args[1]); return true;
        }
        if (strcmp(id, "date_compare_date") == 0 && nargs == 2) {
            *out = gml_date_compare_date(args[0], args[1]); return true;
        }
        if (strcmp(id, "date_compare_time") == 0 && nargs == 2) {
            *out = gml_date_compare_time(args[0], args[1]); return true;
        }
        if (strcmp(id, "date_second_span") == 0 && nargs == 2) {
            *out = gml_date_second_span(args[0], args[1]); return true;
        }
        if (strcmp(id, "date_minute_span") == 0 && nargs == 2) {
            *out = gml_date_minute_span(args[0], args[1]); return true;
        }
        if (strcmp(id, "date_hour_span") == 0 && nargs == 2) {
            *out = gml_date_hour_span(args[0], args[1]); return true;
        }
        if (strcmp(id, "date_day_span") == 0 && nargs == 2) {
            *out = gml_date_day_span(args[0], args[1]); return true;
        }
        if (strcmp(id, "date_month_span") == 0 && nargs == 2) {
            *out = gml_date_month_span(args[0], args[1]); return true;
        }
        if (strcmp(id, "date_year_span") == 0 && nargs == 2) {
            *out = gml_date_year_span(args[0], args[1]); return true;
        }
        if (strcmp(id, "current_time") == 0) {
            *out = gml_current_time(); return true;
        }
        if (strcmp(id, "draw_clear") == 0) {
            *out = gml_draw_clear(arg); return true;
        }
        if (strcmp(id, "array_length_1d") == 0) {
            *out = gml_array_length_1d(arg); return true;
        }
        if (strcmp(id, "array_height_2d") == 0) {
            *out = gml_array_height_2d(arg); return true;
        }
        if (strcmp(id, "array_length_2d") == 0) {
            *out = gml_array_length_2d(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "math_min") == 0) {
            *out = gml_math_min(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "math_max") == 0) {
            *out = gml_math_max(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "deg_to_rad") == 0) {
            *out = gml_deg_to_rad(arg); return true;
        }
        if (strcmp(id, "rad_to_deg") == 0) {
            *out = gml_rad_to_deg(arg); return true;
        }
        if (strcmp(id, "real") == 0) {
            *out = (p->str_mask & 1) ? gml_real(p->str_args[0]) : arg; return true;
        }
        if (strcmp(id, "path_start") == 0) {
            *out = gml_path_start(args[0], nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0, nargs >= 4 ? args[3] : 1); return true;
        }
        if (strcmp(id, "path_end") == 0) {
            *out = gml_path_end(); return true;
        }
        if (strcmp(id, "path_get_number") == 0) {
            *out = gml_path_get_number(arg); return true;
        }
        if (strcmp(id, "timeline_start") == 0) {
            *out = gml_timeline_start(args[0], nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 1, nargs >= 4 ? args[3] : 1); return true;
        }
        if (strcmp(id, "timeline_stop") == 0) {
            *out = gml_timeline_stop(); return true;
        }
        if (strcmp(id, "room_next") == 0) {
            *out = gml_room_next(); return true;
        }
        if (strcmp(id, "room_previous") == 0) {
            *out = gml_room_previous(); return true;
        }
        if (strcmp(id, "instance_change") == 0) {
            *out = gml_instance_change(arg, nargs >= 2 ? args[1] : 1); return true;
        }
        if (strcmp(id, "instance_copy") == 0) {
            *out = gml_instance_copy(nargs >= 1 ? arg : 1); return true;
        }
        if (strcmp(id, "instance_activate_all") == 0) {
            *out = gml_instance_activate_all(); return true;
        }
        if (strcmp(id, "instance_deactivate_all") == 0) {
            *out = gml_instance_deactivate_all(nargs >= 1 ? arg : 1); return true;
        }
        if (strcmp(id, "instance_activate_object") == 0) {
            *out = gml_instance_activate_object(arg); return true;
        }
        if (strcmp(id, "instance_deactivate_object") == 0) {
            *out = gml_instance_deactivate_object(arg); return true;
        }
        if (strcmp(id, "mouse_check_button_pressed") == 0) {
            *out = gml_mouse_check_button_pressed(arg); return true;
        }
        if (strcmp(id, "surface_get_width") == 0) {
            *out = gml_surface_get_width(arg); return true;
        }
        if (strcmp(id, "surface_get_height") == 0) {
            *out = gml_surface_get_height(arg); return true;
        }
        if (strcmp(id, "part_system_update") == 0) {
            *out = gml_part_system_update(arg); return true;
        }
        if (strcmp(id, "buffer_peek") == 0) {
            *out = gml_buffer_peek(args[0], nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "buffer_poke") == 0) {
            *out = gml_buffer_poke(args[0], nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0, nargs >= 4 ? args[3] : 0); return true;
        }
        if (strcmp(id, "buffer_sizeof") == 0) {
            *out = gml_buffer_sizeof(arg); return true;
        }
        if (strcmp(id, "current_year") == 0) {
            *out = gml_current_year(); return true;
        }
        if (strcmp(id, "current_month") == 0) {
            *out = gml_current_month(); return true;
        }
        if (strcmp(id, "current_day") == 0) {
            *out = gml_current_day(); return true;
        }
        if (strcmp(id, "get_timer") == 0) {
            *out = gml_get_timer(); return true;
        }
        if (strcmp(id, "delta_time") == 0) {
            *out = gml_delta_time(); return true;
        }
        if (strcmp(id, "display_get_width") == 0) {
            *out = gml_display_get_width(); return true;
        }
        if (strcmp(id, "display_get_height") == 0) {
            *out = gml_display_get_height(); return true;
        }
        if (strcmp(id, "window_get_width") == 0) {
            *out = gml_window_get_width(); return true;
        }
        if (strcmp(id, "window_get_height") == 0) {
            *out = gml_window_get_height(); return true;
        }
        if (strcmp(id, "window_set_caption") == 0) {
            *out = gml_window_set_caption((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
        if (strcmp(id, "game_has_ended") == 0) {
            *out = gml_game_has_ended(); return true;
        }
        if (strcmp(id, "event_user") == 0) {
            *out = gml_event_user(arg); return true;
        }
        if (strcmp(id, "get_x") == 0) {
            *out = gml_get_x(); return true;
        }
        if (strcmp(id, "get_y") == 0) {
            *out = gml_get_y(); return true;
        }
        if (strcmp(id, "get_hspeed") == 0) {
            *out = gml_get_hspeed(); return true;
        }
        if (strcmp(id, "get_vspeed") == 0) {
            *out = gml_get_vspeed(); return true;
        }
        if (strcmp(id, "get_speed") == 0) {
            *out = gml_get_speed(); return true;
        }
        if (strcmp(id, "get_direction") == 0) {
            *out = gml_get_direction(); return true;
        }
        if (strcmp(id, "get_image_index") == 0) {
            *out = gml_get_image_index(); return true;
        }
        if (strcmp(id, "get_sprite_index") == 0) {
            *out = gml_get_sprite_index(); return true;
        }
        if (strcmp(id, "get_solid") == 0) {
            *out = gml_get_solid(); return true;
        }
        if (strcmp(id, "get_visible") == 0) {
            *out = gml_get_visible(); return true;
        }
        if (strcmp(id, "get_score") == 0) {
            *out = gml_get_score(); return true;
        }
        if (strcmp(id, "get_lives") == 0) {
            *out = gml_get_lives(); return true;
        }
        if (strcmp(id, "get_health") == 0) {
            *out = gml_get_health(); return true;
        }
        if (strcmp(id, "get_bbox_left") == 0) {
            *out = gml_get_bbox_left(); return true;
        }
        if (strcmp(id, "get_bbox_top") == 0) {
            *out = gml_get_bbox_top(); return true;
        }
        if (strcmp(id, "get_bbox_right") == 0) {
            *out = gml_get_bbox_right(); return true;
        }
        if (strcmp(id, "get_bbox_bottom") == 0) {
            *out = gml_get_bbox_bottom(); return true;
        }
        if (strcmp(id, "file_text_open_read") == 0) {
            *out = gml_file_text_open_read((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
        if (strcmp(id, "file_text_open_write") == 0) {
            *out = gml_file_text_open_write((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
        if (strcmp(id, "file_text_open_append") == 0) {
            *out = gml_file_text_open_append((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
        if (strcmp(id, "file_text_close") == 0) {
            *out = gml_file_text_close(arg); return true;
        }
        if (strcmp(id, "file_text_read_real") == 0) {
            *out = gml_file_text_read_real(arg); return true;
        }
        if (strcmp(id, "file_text_write_real") == 0) {
            *out = gml_file_text_write_real(args[0], nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "file_text_write_string") == 0) {
            *out = gml_file_text_write_string(args[0], (p->str_mask & 2) ? p->str_args[1] : ""); return true;
        }
        if (strcmp(id, "file_text_writeln") == 0) {
            *out = gml_file_text_writeln(arg); return true;
        }
        if (strcmp(id, "file_text_eof") == 0) {
            *out = gml_file_text_eof(arg); return true;
        }
        if (strcmp(id, "file_exists") == 0) {
            *out = gml_file_exists((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
        if (strcmp(id, "file_delete") == 0) {
            *out = gml_file_delete((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
        if (strcmp(id, "file_create") == 0) {
            *out = gml_file_create((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
        if (strcmp(id, "file_size") == 0) {
            *out = gml_file_size((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
        if (strcmp(id, "file_get_timestamp") == 0) {
            *out = gml_file_get_timestamp((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
        if (strcmp(id, "ini_open") == 0) {
            *out = gml_ini_open((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
        if (strcmp(id, "ini_close") == 0) {
            *out = gml_ini_close(); return true;
        }
        if (strcmp(id, "ini_read_real") == 0) {
            *out = gml_ini_read_real((p->str_mask & 1) ? p->str_args[0] : "", (p->str_mask & 2) ? p->str_args[1] : "", nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "ini_write_real") == 0) {
            *out = gml_ini_write_real((p->str_mask & 1) ? p->str_args[0] : "", (p->str_mask & 2) ? p->str_args[1] : "", nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "ini_key_exists") == 0) {
            *out = gml_ini_key_exists((p->str_mask & 1) ? p->str_args[0] : "", (p->str_mask & 2) ? p->str_args[1] : ""); return true;
        }
        if (strcmp(id, "script_exists") == 0) {
            *out = gml_script_exists(arg); return true;
        }
        if (strcmp(id, "script_execute") == 0) {
            *out = gml_script_execute(arg); return true;
        }
        if (strcmp(id, "string_length") == 0) {
            *out = gml_string_length((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
        if (strcmp(id, "string_pos") == 0) {
            *out = gml_string_pos((p->str_mask & 1) ? p->str_args[0] : "", (p->str_mask & 2) ? p->str_args[1] : ""); return true;
        }
        if (strcmp(id, "string_count") == 0) {
            *out = gml_string_count((p->str_mask & 1) ? p->str_args[0] : "", (p->str_mask & 2) ? p->str_args[1] : ""); return true;
        }
        if (strcmp(id, "string_char_at") == 0) {
            *out = gml_string_char_at((p->str_mask & 1) ? p->str_args[0] : "", nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "string_copy") == 0) {
            char tmp[256];
            gml_string_copy((p->str_mask & 1) ? p->str_args[0] : "", nargs >= 2 ? args[1] : 1, nargs >= 3 ? args[2] : 0, tmp, sizeof(tmp));
            snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", tmp);
            p->str_mask |= 1; gm82_gml_set_last_string(p->str_args[0]); *out = 0; return true;
        }
        if (strcmp(id, "string_delete") == 0) {
            char tmp[256];
            gml_string_delete((p->str_mask & 1) ? p->str_args[0] : "", nargs >= 2 ? args[1] : 1, nargs >= 3 ? args[2] : 0, tmp, sizeof(tmp));
            snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", tmp);
            p->str_mask |= 1; gm82_gml_set_last_string(p->str_args[0]); *out = 0; return true;
        }
        if (strcmp(id, "string_digits") == 0) {
            char tmp[256];
            gml_string_digits((p->str_mask & 1) ? p->str_args[0] : "", tmp, sizeof(tmp));
            snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", tmp);
            p->str_mask |= 1; gm82_gml_set_last_string(p->str_args[0]); *out = 0; return true;
        }
        if (strcmp(id, "string_insert") == 0) {
            char tmp[256];
            gml_string_insert((p->str_mask & 1) ? p->str_args[0] : "", (p->str_mask & 2) ? p->str_args[1] : "", nargs >= 3 ? args[2] : 1, tmp, sizeof(tmp));
            snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", tmp);
            p->str_mask |= 1; gm82_gml_set_last_string(p->str_args[0]); *out = 0; return true;
        }
        if (strcmp(id, "string_lower") == 0) {
            char tmp[256];
            gml_string_lower((p->str_mask & 1) ? p->str_args[0] : "", tmp, sizeof(tmp));
            snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", tmp);
            p->str_mask |= 1; gm82_gml_set_last_string(p->str_args[0]); *out = 0; return true;
        }
        if (strcmp(id, "string_upper") == 0) {
            char tmp[256];
            gml_string_upper((p->str_mask & 1) ? p->str_args[0] : "", tmp, sizeof(tmp));
            snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", tmp);
            p->str_mask |= 1; gm82_gml_set_last_string(p->str_args[0]); *out = 0; return true;
        }
        if (strcmp(id, "string_replace") == 0) {
            char tmp[256];
            gml_string_replace((p->str_mask & 1) ? p->str_args[0] : "", (p->str_mask & 2) ? p->str_args[1] : "", (p->str_mask & 4) ? p->str_args[2] : "", tmp, sizeof(tmp));
            snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", tmp);
            p->str_mask |= 1; gm82_gml_set_last_string(p->str_args[0]); *out = 0; return true;
        }
        if (strcmp(id, "string_replace_all") == 0) {
            char tmp[256];
            gml_string_replace_all((p->str_mask & 1) ? p->str_args[0] : "", (p->str_mask & 2) ? p->str_args[1] : "", (p->str_mask & 4) ? p->str_args[2] : "", tmp, sizeof(tmp));
            snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", tmp);
            p->str_mask |= 1; gm82_gml_set_last_string(p->str_args[0]); *out = 0; return true;
        }
        if (strcmp(id, "alarm_set_script") == 0) {
            *out = gml_alarm_set_script(args[0], (p->str_mask & 2) ? p->str_args[1] : ""); return true;
        }
        if (strcmp(id, "make_color_rgb") == 0 || strcmp(id, "make_colour_rgb") == 0) {
            *out = gml_make_color_rgb(args[0], nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "make_color_hsv") == 0 || strcmp(id, "make_colour_hsv") == 0) {
            *out = gml_make_color_hsv(args[0], nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "color_get_red") == 0 || strcmp(id, "colour_get_red") == 0) {
            *out = gml_color_get_red(arg); return true;
        }
        if (strcmp(id, "color_get_green") == 0 || strcmp(id, "colour_get_green") == 0) {
            *out = gml_color_get_green(arg); return true;
        }
        if (strcmp(id, "color_get_blue") == 0 || strcmp(id, "colour_get_blue") == 0) {
            *out = gml_color_get_blue(arg); return true;
        }
        if (strcmp(id, "draw_set_blend_mode_ext") == 0) {
            *out = gml_draw_set_blend_mode_ext(args[0], nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "draw_set_circle_precision") == 0) {
            *out = gml_draw_set_circle_precision(arg); return true;
        }
        /* Direct script invocation by user script name */
        int scr_idx = gml_script_find(id);
        if (scr_idx >= 0) {
            for (int k = 0; k < nargs && k < 16; k++) g_script_args[k] = args[k];
            *out = gml_script_execute((double)scr_idx);
            return true;
        }

        if (strcmp(id, "ds_map_find_value") == 0) { *out = gml_ds_map_find_value(arg, (nargs >= 2) ? args[1] : 0); return true; }
        if (strcmp(id, "ds_map_exists") == 0) { *out = gml_ds_map_exists(arg, (nargs >= 2) ? args[1] : 0); return true; }
        if (strcmp(id, "ds_map_size") == 0) { *out = gml_ds_map_size(arg); return true; }
        if (strcmp(id, "ds_map_clear") == 0) { *out = gml_ds_map_clear(arg); return true; }
        if (strcmp(id, "ds_map_delete") == 0) { *out = gml_ds_map_delete(arg, (nargs >= 2) ? args[1] : 0); return true; }
        if (strcmp(id, "ds_grid_set_region_compat") == 0) { *out = gml_ds_grid_set_region_compat(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0, (nargs >= 4) ? args[3] : 0, (nargs >= 5) ? args[4] : 0, (nargs >= 6) ? args[5] : 0); return true; }
        if (strcmp(id, "file_find_first") == 0) { const char *m = (p->str_mask & 1) ? p->str_args[0] : ""; const char *res = gml_file_find_first(m, nargs >= 2 ? args[1] : 0); *out = res ? 1 : 0; return true; }
        if (strcmp(id, "file_find_next") == 0) { const char *res = gml_file_find_next(); *out = res ? 1 : 0; return true; }
        if (strcmp(id, "file_find_close") == 0) { gml_file_find_close(); *out = 1; return true; }
        if (strcmp(id, "script_find") == 0) { const char *sname = (p->str_mask & 1) ? p->str_args[0] : ""; *out = gml_script_find(sname); return true; }
        if (strcmp(id, "set_x") == 0) { gml_set_x(arg); *out = arg; return true; }
        if (strcmp(id, "set_y") == 0) { gml_set_y(arg); *out = arg; return true; }
        if (strcmp(id, "set_hspeed") == 0) { gml_set_hspeed(arg); *out = arg; return true; }
        if (strcmp(id, "set_vspeed") == 0) { gml_set_vspeed(arg); *out = arg; return true; }
        if (strcmp(id, "set_speed") == 0) { gml_set_speed(arg); *out = arg; return true; }
        if (strcmp(id, "set_direction") == 0) { gml_set_direction(arg); *out = arg; return true; }
        if (strcmp(id, "set_sprite_index") == 0) { gml_set_sprite_index(arg); *out = arg; return true; }
        if (strcmp(id, "set_image_index") == 0) { gml_set_image_index(arg); *out = arg; return true; }
        if (strcmp(id, "set_score") == 0) { gml_set_score(arg); *out = arg; return true; }
        if (strcmp(id, "set_lives") == 0) { gml_set_lives(arg); *out = arg; return true; }
        if (strcmp(id, "set_health") == 0) { gml_set_health(arg); *out = arg; return true; }
        if (strcmp(id, "string_concat") == 0) {
            const char *a = (p->str_mask & 1) ? p->str_args[0] : "";
            const char *b = (p->str_mask & 2) ? p->str_args[1] : "";
            char tmp[256];
            snprintf(tmp, sizeof(tmp), "%s%s", a, b);
            snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", tmp);
            p->str_mask |= 1; gm82_gml_set_last_string(p->str_args[0]); *out = 0; return true;
        }
        if (strcmp(id, "string_repeat") == 0) {
            const char *src = (p->str_mask & 1) ? p->str_args[0] : "";
            double repeat_count = nargs >= 2 ? args[1] : arg;
            if (!isfinite(repeat_count) || repeat_count < 0.0) repeat_count = 0.0;
            if (repeat_count > 64.0) repeat_count = 64.0;
            char tmp[256];
            gml_string_repeat(src, repeat_count, tmp, sizeof(tmp));
            snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", tmp);
            p->str_mask |= 1; gm82_gml_set_last_string(p->str_args[0]); *out = 0; return true;
        }
        if (strcmp(id, "execute_string") == 0) {
            const char *code = (p->str_mask & 1) ? p->str_args[0] : gm82_gml_last_string();
            *out = gml_execute_string(code); return true;
        }
        if (strcmp(id, "is_real") == 0) { *out = gml_is_real(arg); return true; }
        if (strcmp(id, "is_string") == 0) { *out = gml_is_string(arg); return true; }
        if (strcmp(id, "string_format") == 0) { char buf[128] = {0}; gml_string_format(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0, buf, sizeof(buf)); snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", buf); p->str_mask |= 1; gm82_gml_set_last_string(buf); *out = 0; return true; }
        if (strcmp(id, "window_get_caption") == 0) { (void)gml_window_get_caption(); *out = 0; return true; }

        snprintf(p->err, sizeof(p->err), "unknown fn %s", id); fprintf(stderr, "UNMAPPED_GML_FN %s\n", id);
        return false;
    }
    return get_var(p, id, out);
}

static bool parse_term(gml_parser *p, double *out) {
    if (!parse_primary(p, out)) return false;
    for (;;) {
        char c = peek(p);
        if (c != '*' && c != '/') break;
        getc_(p);
        double r;
        if (!parse_primary(p, &r)) return false;
        if (c == '*') *out *= r;
        else *out = (r != 0) ? (*out / r) : 0;
    }
    return true;
}

static bool parse_additive(gml_parser *p, double *out) {
    if (!parse_term(p, out)) return false;
    for (;;) {
        char c = peek(p);
        if (c != '+' && c != '-') break;
        getc_(p);
        /* Phase 3: GM8-style implicit string concat on + */
        char left[512];
        int left_str = gm82_gml_last_was_string() ? 1 : 0;
        if (left_str)
            snprintf(left, sizeof(left), "%s", gm82_gml_last_string());
        else
            snprintf(left, sizeof(left), "%g", *out);
        gm82_gml_clear_last_string();
        double r;
        if (!parse_term(p, &r)) return false;
        if (c == '+') {
            int right_str = gm82_gml_last_was_string() ? 1 : 0;
            if (left_str || right_str) {
                char right[512], cat[1024];
                if (right_str)
                    snprintf(right, sizeof(right), "%s", gm82_gml_last_string());
                else
                    snprintf(right, sizeof(right), "%g", r);
                snprintf(cat, sizeof(cat), "%s%s", left, right);
                gm82_gml_set_last_string(cat);
                *out = 0;
            } else {
                *out += r;
            }
        } else {
            *out -= r;
        }
    }
    return true;
}

static bool parse_comparison(gml_parser *p, double *out) {
    if (!parse_additive(p, out)) return false;
    for (;;) {
        skip_ws(p);
        int op = 0; /* 1=< 2=> 3=<= 4=>= 5=== 6=!= */
        if (p->i + 1 < p->n && p->s[p->i] == '<' && p->s[p->i+1] == '=') { op = 3; p->i += 2; }
        else if (p->i + 1 < p->n && p->s[p->i] == '>' && p->s[p->i+1] == '=') { op = 4; p->i += 2; }
        else if (p->i + 1 < p->n && p->s[p->i] == '=' && p->s[p->i+1] == '=') { op = 5; p->i += 2; }
        else if (p->i + 1 < p->n && p->s[p->i] == '!' && p->s[p->i+1] == '=') { op = 6; p->i += 2; }
        else if (peek(p) == '<') { op = 1; p->i++; }
        else if (peek(p) == '>') { op = 2; p->i++; }
        else break;
        double r;
        if (!parse_additive(p, &r)) return false;
        switch (op) {
            case 1: *out = (*out < r) ? 1 : 0; break;
            case 2: *out = (*out > r) ? 1 : 0; break;
            case 3: *out = (*out <= r) ? 1 : 0; break;
            case 4: *out = (*out >= r) ? 1 : 0; break;
            case 5: *out = (*out == r) ? 1 : 0; break;
            case 6: *out = (*out != r) ? 1 : 0; break;
        }
    }
    return true;
}

static bool parse_expr(gml_parser *p, double *out) {
    if (!parse_comparison(p, out)) return false;
    for (;;) {
        skip_ws(p);
        int andop = 0;
        if (p->i + 1 < p->n && p->s[p->i] == '&' && p->s[p->i+1] == '&') { andop = 1; p->i += 2; }
        else if (p->i + 1 < p->n && p->s[p->i] == '|' && p->s[p->i+1] == '|') { andop = 2; p->i += 2; }
        else if (p->i + 3 <= p->n && p->s[p->i]=='a' && p->s[p->i+1]=='n' && p->s[p->i+2]=='d' &&
                 (p->i+3>=p->n || !isalnum((unsigned char)p->s[p->i+3]))) { andop = 1; p->i += 3; }
        else if (p->i + 2 <= p->n && p->s[p->i]=='o' && p->s[p->i+1]=='r' &&
                 (p->i+2>=p->n || !isalnum((unsigned char)p->s[p->i+2]))) { andop = 2; p->i += 2; }
        else break;
        double r;
        if (!parse_comparison(p, &r)) return false;
        if (andop == 1) *out = (*out != 0 && r != 0) ? 1 : 0;
        else *out = (*out != 0 || r != 0) ? 1 : 0;
    }
    return true;
}

bool gm82_gml_eval_expr(gm82_runtime *rt, gm82_instance *self, const char *expr, double *out) {
    if (!expr || !out) return false;
    gml_parser p = { expr, 0, strlen(expr), rt, self, {0}, {{0}}, 0 };
    gm82_gml_set_runtime(rt);
    gm82_gml_set_self(self);
    return parse_expr(&p, out);
}

bool gm82_gml_eval_stmt(gm82_runtime *rt, gm82_instance *self, const char *stmt) {
    if (!stmt) return false;
    gml_parser p = { stmt, 0, strlen(stmt), rt, self, {0}, {{0}}, 0 };
    gm82_gml_set_runtime(rt);
    gm82_gml_set_self(self);
    char id[64];
    if (!parse_ident(&p, id, sizeof(id))) return false;
    /* while (cond) body */
    if (strcmp(id, "while") == 0) {
        skip_ws(&p);
        const char *cond_start = p.s + p.i;
        double cond_val = 0;
        if (peek(&p) == '(') {
            getc_(&p);
            cond_start = p.s + p.i;
            if (!parse_expr(&p, &cond_val)) return false;
            size_t cond_len = (size_t)(p.s + p.i - cond_start);
            char cond_buf[256];
            if (cond_len >= sizeof(cond_buf)) cond_len = sizeof(cond_buf) - 1;
            strncpy(cond_buf, cond_start, cond_len);
            cond_buf[cond_len] = 0;
            if (!match(&p, ')')) return false;
            skip_ws(&p);
            const char *body = p.s + p.i;
            char body_buf[2048];
            size_t k = 0;
            if (*body == '{') {
                int depth = 0; const char *q = body;
                while (*q && k + 1 < sizeof(body_buf)) {
                    if (*q == '{') depth++;
                    else if (*q == '}') { depth--; if (depth == 0) { q++; break; } }
                    body_buf[k++] = *q++;
                }
                body_buf[k] = 0;
            } else {
                while (body[k] && body[k] != ';' && body[k] != '\n' && k + 1 < sizeof(body_buf)) {
                    body_buf[k] = body[k]; k++;
                }
                body_buf[k] = 0;
            }
            int iter = 0;
            while (iter < 1000) {
                double cval = 0;
                gm82_gml_eval_expr(rt, self, cond_buf, &cval);
                if (cval == 0) break;
                if (body_buf[0] == '{') gm82_gml_eval_block(rt, self, body_buf);
                else gm82_gml_eval_stmt(rt, self, body_buf);
                iter++;
            }
            return true;
        }
    }

    /* do { body } until (cond) */
    if (strcmp(id, "do") == 0) {
        skip_ws(&p);
        const char *body = p.s + p.i;
        char body_buf[2048];
        size_t k = 0;
        if (*body == '{') {
            int depth = 0; const char *q = body;
            while (*q && k + 1 < sizeof(body_buf)) {
                if (*q == '{') depth++;
                else if (*q == '}') { depth--; if (depth == 0) { q++; break; } }
                body_buf[k++] = *q++;
            }
            body_buf[k] = 0;
            p.i += (size_t)(q - body);
        } else {
            while (body[k] && body[k] != ';' && body[k] != '\n' && k + 1 < sizeof(body_buf)) {
                body_buf[k] = body[k]; k++;
            }
            body_buf[k] = 0;
            p.i += k;
        }
        skip_ws(&p);
        char until_id[64];
        if (parse_ident(&p, until_id, sizeof(until_id)) && strcmp(until_id, "until") == 0) {
            skip_ws(&p);
            char cond_buf[256] = {0};
            if (peek(&p) == '(') {
                getc_(&p);
                const char *cond_start = p.s + p.i;
                double cond_val = 0;
                parse_expr(&p, &cond_val);
                size_t cond_len = (size_t)(p.s + p.i - cond_start);
                if (cond_len >= sizeof(cond_buf)) cond_len = sizeof(cond_buf) - 1;
                strncpy(cond_buf, cond_start, cond_len);
                cond_buf[cond_len] = 0;
                match(&p, ')');
            }
            int iter = 0;
            do {
                if (body_buf[0] == '{') gm82_gml_eval_block(rt, self, body_buf);
                else gm82_gml_eval_stmt(rt, self, body_buf);
                double cval = 0;
                if (cond_buf[0]) gm82_gml_eval_expr(rt, self, cond_buf, &cval);
                if (cval != 0) break;
                iter++;
            } while (iter < 1000);
            return true;
        }
    }

    /* repeat (count) body */
    if (strcmp(id, "repeat") == 0) {
        double count_val = 0;
        skip_ws(&p);
        if (peek(&p) == '(') {
            getc_(&p);
            if (!parse_expr(&p, &count_val)) return false;
            if (!match(&p, ')')) return false;
        } else {
            if (!parse_expr(&p, &count_val)) return false;
        }
        skip_ws(&p);
        const char *body = p.s + p.i;
        char body_buf[2048];
        size_t k = 0;
        if (*body == '{') {
            int depth = 0; const char *q = body;
            while (*q && k + 1 < sizeof(body_buf)) {
                if (*q == '{') depth++;
                else if (*q == '}') {
                    depth--;
                    if (depth == 0) { q++; break; }
                }
                body_buf[k++] = *q++;
            }
            body_buf[k] = 0;
        } else {
            while (body[k] && body[k] != ';' && body[k] != '\n' && k + 1 < sizeof(body_buf)) {
                body_buf[k] = body[k]; k++;
            }
            body_buf[k] = 0;
        }
        int times = (int)count_val;
        for (int t = 0; t < times; t++) {
            if (body_buf[0] == '{') gm82_gml_eval_block(rt, self, body_buf);
            else gm82_gml_eval_stmt(rt, self, body_buf);
        }
        return true;
    }

    /* with (target) body */
    if (strcmp(id, "with") == 0) {
        double target_val = 0;
        skip_ws(&p);
        if (peek(&p) == '(') {
            getc_(&p);
            if (!parse_expr(&p, &target_val)) return false;
            if (!match(&p, ')')) return false;
        } else {
            if (!parse_expr(&p, &target_val)) return false;
        }
        skip_ws(&p);
        const char *body = p.s + p.i;
        char body_buf[2048];
        size_t k = 0;
        if (*body == '{') {
            int depth = 0; const char *q = body;
            while (*q && k + 1 < sizeof(body_buf)) {
                if (*q == '{') depth++;
                else if (*q == '}') {
                    depth--;
                    if (depth == 0) { q++; break; }
                }
                body_buf[k++] = *q++;
            }
            body_buf[k] = 0;
        } else {
            while (body[k] && body[k] != ';' && body[k] != '\n' && k + 1 < sizeof(body_buf)) {
                body_buf[k] = body[k]; k++;
            }
            body_buf[k] = 0;
        }
        if (rt) {
            /* Phase 6: GM8 constants self=-1 other=-2 all=-3 noone=-4 */
            /* Phase 8: snapshot instance indices so create/destroy mid-with is safe */
            int target_id = (int)target_val;
            gm82_instance *prev_self = self;
            extern void gm82_gml_set_other(gm82_instance *o);
            extern gm82_instance *gm82_gml_get_other(void);
            gm82_instance *prev_other = gm82_gml_get_other();
            gm82_gml_set_other(prev_self);
            int snap_n = rt->instance_count;
            if (snap_n < 0) snap_n = 0;
            if (snap_n > 4096) snap_n = 4096;
            int snap_ids[4096];
            int n = 0;
            for (int i = 0; i < snap_n && n < 4096; i++) {
                gm82_instance *inst = &rt->instances[i];
                if (!inst->alive) continue;
                int match = 0;
                if (target_id == -3) match = 1;
                else if (target_id == -1) match = (inst == prev_self);
                else if (target_id == -2) match = (prev_other && inst == prev_other);
                else if (target_id == -4) match = 0;
                else match = (inst->id == target_id || inst->object_index == target_id);
                if (!match) continue;
                snap_ids[n++] = inst->id;
            }
            for (int s = 0; s < n; s++) {
                int id_want = snap_ids[s];
                gm82_instance *inst = NULL;
                for (int i = 0; i < rt->instance_count; i++) {
                    if (rt->instances[i].alive && rt->instances[i].id == id_want) {
                        inst = &rt->instances[i];
                        break;
                    }
                }
                if (!inst) continue;
                if (body_buf[0] == '{') gm82_gml_eval_block(rt, inst, body_buf);
                else gm82_gml_eval_stmt(rt, inst, body_buf);
            }
            gm82_gml_set_other(prev_other);
            gm82_gml_set_self(prev_self);
        }
        return true;
    }

    /* if (cond) body [else body] – supports single stmt or { block } */
    if (strcmp(id, "if") == 0) {
        double cond = 0;
        skip_ws(&p);
        /* GML allows: if (expr)  OR  if expr   e.g. if keyboard_check(vk_left) */
        if (peek(&p) == '(') {
            getc_(&p);
            if (!parse_expr(&p, &cond)) return false;
            if (!match(&p, ')')) return false;
        } else {
            if (!parse_expr(&p, &cond)) return false;
        }
        skip_ws(&p);
        const char *rest = p.s + p.i;
        char then_buf[512], else_buf[512];
        then_buf[0] = else_buf[0] = 0;
        if (*rest == '{') {
            int depth = 0; size_t k = 0; const char *q = rest;
            while (*q && k + 1 < sizeof(then_buf)) {
                if (*q == '{') depth++;
                else if (*q == '}') {
                    depth--;
                    if (depth == 0) { q++; break; }
                }
                then_buf[k++] = *q++;
            }
            then_buf[k] = 0;
            rest = q;
        } else {
            size_t k = 0;
            while (rest[k] && rest[k] != ';' && rest[k] != '\n' && k + 1 < sizeof(then_buf)) {
                if ((k == 0 || isspace((unsigned char)rest[k-1]) || rest[k-1]==')') &&
                    strncmp(rest + k, "else", 4) == 0 &&
                    (rest[k+4]==0 || isspace((unsigned char)rest[k+4]) || rest[k+4]=='{'))
                    break;
                then_buf[k] = rest[k]; k++;
            }
            then_buf[k] = 0;
            rest += k;
            if (*rest == ';') rest++;
        }
        while (*rest && isspace((unsigned char)*rest)) rest++;
        if (strncmp(rest, "else", 4) == 0 &&
            (rest[4]==0 || isspace((unsigned char)rest[4]) || rest[4]=='{')) {
            rest += 4;
            while (*rest && isspace((unsigned char)*rest)) rest++;
            if (*rest == '{') {
                int depth = 0; size_t k = 0;
                while (*rest && k + 1 < sizeof(else_buf)) {
                    if (*rest == '{') depth++;
                    else if (*rest == '}') {
                        depth--;
                        if (depth == 0) { rest++; break; }
                    }
                    else_buf[k++] = *rest++;
                }
                else_buf[k] = 0;
            } else {
                size_t k = 0;
                while (rest[k] && rest[k] != ';' && rest[k] != '\n' && k + 1 < sizeof(else_buf)) {
                    else_buf[k] = rest[k]; k++;
                }
                else_buf[k] = 0;
            }
        }
        if (cond != 0) {
            if (then_buf[0] == '{') return gm82_gml_eval_block(rt, self, then_buf) > 0;
            return gm82_gml_eval_stmt(rt, self, then_buf);
        }
        if (else_buf[0]) {
            if (else_buf[0] == '{') return gm82_gml_eval_block(rt, self, else_buf) > 0;
            return gm82_gml_eval_stmt(rt, self, else_buf);
        }
        return true;
    }

    skip_ws(&p);
    int array_idx = -1;
    if (peek(&p) == '[') {
        getc_(&p);
        double idx_val = 0;
        if (!parse_expr(&p, &idx_val)) return false;
        if (!match(&p, ']')) return false;
        array_idx = (int)idx_val;
        skip_ws(&p);
    }
    /* compound: += -= *= /= */
    char op = 0;
    if (p.i + 1 < p.n && (p.s[p.i]=='+'||p.s[p.i]=='-'||p.s[p.i]=='*'||p.s[p.i]=='/') && p.s[p.i+1]=='=') {
        op = p.s[p.i];
        p.i += 2;
    } else if (!match(&p, '=')) {
        p.i = 0;
        double v;
        return parse_expr(&p, &v);
    }
    double v;
    if (!parse_expr(&p, &v)) return false;
    if (array_idx >= 0) {
        if (strcmp(id, "alarm") == 0) {
            gm82_instance *s = p.self;
            if (s && array_idx >= 0 && array_idx < 12) {
                double cur = (double)s->alarms[array_idx];
                if (op=='+') v = cur + v;
                else if (op=='-') v = cur - v;
                s->alarms[array_idx] = (int32_t)v;
                return true;
            }
        }
        return true;
    }
    if (op) {
        double cur = 0;
        get_var(&p, id, &cur);
        if (op=='+') v = cur + v;
        else if (op=='-') v = cur - v;
        else if (op=='*') v = cur * v;
        else if (op=='/') v = (v!=0) ? cur / v : 0;
    }
    return set_var(&p, id, v);
}

int gm82_gml_eval_block(gm82_runtime *rt, gm82_instance *self, const char *code) {
    if (!code) return 0;
    int ok = 0;
    char buf[2048];
    const char *p = code;
    while (*p) {
        while (*p && (*p=='\r' || isspace((unsigned char)*p) || *p == ';' || *p == '{' || *p == '}')) p++;
        if (!*p) break;
        if (p[0]=='/' && p[1]=='/') {
            while (*p && *p != '\n') p++;
            continue;
        }
        size_t j = 0;
        int depth = 0;
        int is_if = (strncmp(p, "if", 2) == 0 && !isalnum((unsigned char)p[2]) && p[2] != '_');
        while (*p && j + 1 < sizeof(buf)) {
            if (*p == '{') { depth++; buf[j++] = *p++; continue; }
            if (*p == '}') {
                if (depth > 0) {
                    depth--;
                    buf[j++] = *p++;
                    if (is_if && depth == 0) break;
                    continue;
                }
                break;
            }
            if (depth == 0 && *p == ';') break;
            if (depth == 0 && *p == '\n' && !is_if) break;
            if (depth == 0 && *p == '\n' && is_if) { p++; continue; }
            if (*p != '\r') buf[j++] = *p;
            p++;
        }
        buf[j] = 0;
        if (*p == ';' || *p == '\n') p++;
        while (j > 0 && isspace((unsigned char)buf[j-1])) buf[--j] = 0;
        if (j > 0 && gm82_gml_eval_stmt(rt, self, buf)) ok++;
    }
    return ok;
}
