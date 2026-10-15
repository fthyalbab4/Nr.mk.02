#define _POSIX_C_SOURCE 200809L
#include "gm82_gml_eval.h"
#include "gm82_gml_builtins.h"
#include "gm82_sound_runtime.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

typedef struct {
    const char *s;
    size_t i, n;
    gm82_runtime *rt;
    gm82_instance *self;
    char err[128];
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

static bool get_var(gml_parser *p, const char *name, double *out) {
    gm82_instance *s = p->self;
    if (strcmp(name, "x") == 0) { *out = s ? s->x : 0; return true; }
    if (strcmp(name, "y") == 0) { *out = s ? s->y : 0; return true; }
    if (strcmp(name, "xprevious") == 0) { *out = s ? s->x - s->hspeed : 0; return true; }
    if (strcmp(name, "yprevious") == 0) { *out = s ? s->y - s->vspeed : 0; return true; }
    if (strcmp(name, "hspeed") == 0) { *out = s ? s->hspeed : 0; return true; }
    if (strcmp(name, "vspeed") == 0) { *out = s ? s->vspeed : 0; return true; }
    if (strcmp(name, "speed") == 0) { *out = s ? s->speed : 0; return true; }
    if (strcmp(name, "direction") == 0) { *out = s ? s->direction : 0; return true; }
    if (strcmp(name, "image_index") == 0) { *out = s ? (double)s->image_index : 0; return true; }
    if (strcmp(name, "image_speed") == 0) { *out = s ? s->image_speed : 0; return true; }
    if (strcmp(name, "sprite_index") == 0) { *out = s ? (double)s->sprite_index : 0; return true; }
    if (strcmp(name, "solid") == 0) { *out = s && s->solid ? 1 : 0; return true; }
    if (strcmp(name, "id") == 0) { *out = s ? (double)s->id : 0; return true; }
    if (strcmp(name, "object_index") == 0) { *out = s ? (double)s->object_index : 0; return true; }
    if (strcmp(name, "bbox_left") == 0) { *out = s ? s->x : 0; return true; }
    if (strcmp(name, "bbox_top") == 0) { *out = s ? s->y : 0; return true; }
    if (strcmp(name, "bbox_right") == 0) { *out = s ? s->x + 16 : 0; return true; }
    if (strcmp(name, "bbox_bottom") == 0) { *out = s ? s->y + 16 : 0; return true; }
    if (strcmp(name, "score") == 0) { *out = gml_get_score(); return true; }
    if (strcmp(name, "lives") == 0) { *out = gml_get_lives(); return true; }
    if (strcmp(name, "health") == 0) { *out = gml_get_health(); return true; }
    if (strcmp(name, "room") == 0) { *out = p->rt ? (double)p->rt->current_room : 0; return true; }
    if (strcmp(name, "room_width") == 0) { *out = p->rt ? (double)p->rt->room_width : 0; return true; }
    if (strcmp(name, "room_height") == 0) { *out = p->rt ? (double)p->rt->room_height : 0; return true; }
    if (strcmp(name, "room_speed") == 0) { *out = p->rt ? (double)p->rt->room_speed : 30; return true; }
    if (strcmp(name, "view_xview") == 0) { *out = p->rt ? p->rt->view_x : 0; return true; }
    if (strcmp(name, "view_yview") == 0) { *out = p->rt ? p->rt->view_y : 0; return true; }
    if (strcmp(name, "view_wview") == 0) { *out = p->rt ? p->rt->view_w : 320; return true; }
    if (strcmp(name, "view_hview") == 0) { *out = p->rt ? p->rt->view_h : 240; return true; }
    if (strcmp(name, "mouse_x") == 0) { *out = gml_mouse_x(); return true; }
    if (strcmp(name, "mouse_y") == 0) { *out = gml_mouse_y(); return true; }
    snprintf(p->err, sizeof(p->err), "unknown var %s", name);
    return false;
}

static bool set_var(gml_parser *p, const char *name, double v) {
    gm82_instance *s = p->self;
    if (!s && !(strcmp(name,"score")==0 || strcmp(name,"lives")==0 || strcmp(name,"health")==0))
        return false;
    if (strcmp(name, "x") == 0) { s->x = v; return true; }
    if (strcmp(name, "y") == 0) { s->y = v; return true; }
    if (strcmp(name, "hspeed") == 0) { s->hspeed = v; return true; }
    if (strcmp(name, "vspeed") == 0) { s->vspeed = v; return true; }
    if (strcmp(name, "speed") == 0) { s->speed = v; return true; }
    if (strcmp(name, "direction") == 0) { s->direction = v; return true; }
    if (strcmp(name, "image_index") == 0) { s->image_index = (int32_t)v; return true; }
    if (strcmp(name, "image_speed") == 0) { s->image_speed = v; return true; }
    if (strcmp(name, "sprite_index") == 0) { s->sprite_index = (int32_t)v; return true; }
    if (strcmp(name, "solid") == 0) { s->solid = v != 0; return true; }
    if (strcmp(name, "view_xview") == 0) { if (p->rt) p->rt->view_x = v; return true; }
    if (strcmp(name, "view_yview") == 0) { if (p->rt) p->rt->view_y = v; return true; }
    if (strcmp(name, "score") == 0) { gml_set_score(v); return true; }
    if (strcmp(name, "lives") == 0) { gml_set_lives(v); return true; }
    if (strcmp(name, "health") == 0) { gml_set_health(v); return true; }
    snprintf(p->err, sizeof(p->err), "cannot set %s", name);
    return false;
}

static bool parse_primary(gml_parser *p, double *out) {
    skip_ws(p);
    if (p->i >= p->n) return false;
    char c = p->s[p->i];
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
    char id[64];
    if (!parse_ident(p, id, sizeof(id))) return false;
    /* function call? */
    if (match(p, '(')) {
        double args[8] = {0};
        int arg_count = 0;
        if (peek(p) != ')') {
            do {
                if (arg_count < 8) {
                    if (!parse_expr(p, &args[arg_count++])) return false;
                } else {
                    double dummy;
                    if (!parse_expr(p, &dummy)) return false;
                }
            } while (match(p, ','));
        }
        if (!match(p, ')')) return false;

        if (strcmp(id, "abs") == 0) { *out = fabs(args[0]); return true; }
        if (strcmp(id, "sign") == 0) { *out = args[0] > 0 ? 1 : (args[0] < 0 ? -1 : 0); return true; }
        if (strcmp(id, "sqr") == 0) { *out = gml_sqr(args[0]); return true; }
        if (strcmp(id, "sqrt") == 0) { *out = gml_sqrt_fn(args[0]); return true; }
        if (strcmp(id, "power") == 0) { *out = gml_power(args[0], args[1]); return true; }
        if (strcmp(id, "frac") == 0) { *out = gml_frac(args[0]); return true; }
        if (strcmp(id, "dot_product") == 0) { *out = gml_dot_product(args[0], args[1], args[2], args[3]); return true; }
        if (strcmp(id, "dot_product_3d") == 0) { *out = gml_dot_product_3d(args[0], args[1], args[2], args[3], args[4], args[5]); return true; }
        if (strcmp(id, "irandom") == 0) { *out = (double)(rand() % ((int)args[0] + 1)); return true; }
        if (strcmp(id, "random") == 0) { *out = ((double)rand() / (double)RAND_MAX) * args[0]; return true; }
        if (strcmp(id, "floor") == 0) { *out = floor(args[0]); return true; }
        if (strcmp(id, "ceil") == 0) { *out = ceil(args[0]); return true; }
        if (strcmp(id, "round") == 0) { *out = round(args[0]); return true; }
        if (strcmp(id, "clamp") == 0) { *out = gml_clamp(args[0], args[1], args[2]); return true; }
        if (strcmp(id, "lerp") == 0) { *out = gml_lerp(args[0], args[1], args[2]); return true; }
        if (strcmp(id, "approach") == 0) { *out = gml_approach(args[0], args[1], args[2]); return true; }
        if (strcmp(id, "point_distance") == 0) { *out = gml_point_distance(args[0], args[1], args[2], args[3]); return true; }
        if (strcmp(id, "point_direction") == 0) { *out = gml_point_direction(args[0], args[1], args[2], args[3]); return true; }
        if (strcmp(id, "point_distance_3d") == 0) { *out = gml_point_distance_3d(args[0], args[1], args[2], args[3], args[4], args[5]); return true; }
        if (strcmp(id, "lengthdir_x") == 0) { *out = gml_lengthdir_x(args[0], args[1]); return true; }
        if (strcmp(id, "lengthdir_y") == 0) { *out = gml_lengthdir_y(args[0], args[1]); return true; }
        if (strcmp(id, "move_bounce_solid") == 0) { *out = gml_move_bounce_solid(args[0]); return true; }
        if (strcmp(id, "move_wrap") == 0) { *out = gml_move_wrap(args[0], args[1], args[2]); return true; }
        if (strcmp(id, "sound_play") == 0) { *out = gml_sound_play(args[0]); return true; }
        if (strcmp(id, "sound_play_pitch") == 0) {
            gml_sound_pitch(args[0], arg_count >= 2 ? args[1] : 1.0);
            *out = gml_sound_play(args[0]);
            return true;
        }
        if (strcmp(id, "sound_loop") == 0) {
            *out = gml_sound_loop(args[0]); return true;
        }
        if (strcmp(id, "sound_loop_pitch") == 0) {
            gml_sound_pitch(args[0], arg_count >= 2 ? args[1] : 1.0);
            *out = gml_sound_loop(args[0]);
            return true;
        }
        if (strcmp(id, "sound_stop") == 0 || strcmp(id, "sound_stop_all") == 0) { *out = gml_sound_stop_all(); return true; }
        if (strcmp(id, "sound_isplaying") == 0 || strcmp(id, "sound_is_playing") == 0) { *out = gml_sound_is_playing(args[0]); return true; }
        if (strcmp(id, "sound_volume") == 0) { *out = gml_sound_volume(args[0], args[1]); return true; }
        if (strcmp(id, "min") == 0) {
            double m = args[0];
            for (int k = 1; k < arg_count; k++) if (args[k] < m) m = args[k];
            *out = m; return true;
        }
        if (strcmp(id, "max") == 0) {
            double m = args[0];
            for (int k = 1; k < arg_count; k++) if (args[k] > m) m = args[k];
            *out = m; return true;
        }
        if (strcmp(id, "keyboard_check") == 0) {
            *out = gml_keyboard_check(args[0]); return true;
        }
        if (strcmp(id, "mouse_check_button") == 0) {
            *out = gml_mouse_check_button(args[0]); return true;
        }
        if (strcmp(id, "keyboard_check_pressed") == 0) {
            *out = gml_keyboard_check_pressed(args[0]); return true;
        }
        if (strcmp(id, "place_free") == 0) {
            double py = (arg_count > 1) ? args[1] : (p->self ? p->self->y : 0);
            *out = gml_place_free(args[0], py); return true;
        }
        if (strcmp(id, "place_meeting") == 0) {
            *out = gml_place_meeting(args[0], args[1], args[2]); return true;
        }
        if (strcmp(id, "position_meeting") == 0) {
            *out = gml_position_meeting(args[0], args[1], args[2]); return true;
        }
        if (strcmp(id, "point_in_rectangle") == 0) {
            *out = gml_point_in_rectangle(args[0], args[1], args[2], args[3], args[4], args[5]); return true;
        }
        if (strcmp(id, "instance_create") == 0) {
            *out = gml_instance_create(args[0], args[1], args[2]); return true;
        }
        if (strcmp(id, "instance_destroy") == 0) {
            gml_instance_destroy(); *out = 1; return true;
        }
        if (strcmp(id, "instance_exists") == 0) {
            *out = gml_instance_exists(args[0]); return true;
        }
        if (strcmp(id, "instance_number") == 0) {
            *out = gml_instance_number(args[0]); return true;
        }
        if (strcmp(id, "ds_grid_create") == 0) {
            *out = gml_ds_grid_create(args[0], args[1]); return true;
        }
        if (strcmp(id, "ds_grid_destroy") == 0) {
            *out = gml_ds_grid_destroy(args[0]); return true;
        }
        if (strcmp(id, "ds_grid_set") == 0) {
            *out = gml_ds_grid_set(args[0], args[1], args[2], args[3]); return true;
        }
        if (strcmp(id, "ds_grid_get") == 0) {
            *out = gml_ds_grid_get(args[0], args[1], args[2]); return true;
        }
        if (strcmp(id, "ds_grid_value_sum") == 0) {
            *out = gml_ds_grid_value_sum(args[0], args[1], args[2], args[3], args[4]); return true;
        }
        if (strcmp(id, "ds_grid_set_disk") == 0) {
            *out = gml_ds_grid_set_disk(args[0], args[1], args[2], args[3], args[4]); return true;
        }
        if (strcmp(id, "surface_create") == 0) {
            *out = gml_surface_create(args[0], args[1]); return true;
        }
        if (strcmp(id, "surface_free") == 0) {
            *out = gml_surface_free(args[0]); return true;
        }
        if (strcmp(id, "surface_exists") == 0) {
            *out = gml_surface_exists(args[0]); return true;
        }
        if (strcmp(id, "surface_get_width") == 0) {
            *out = gml_surface_get_width(args[0]); return true;
        }
        if (strcmp(id, "surface_get_height") == 0) {
            *out = gml_surface_get_height(args[0]); return true;
        }
        if (strcmp(id, "surface_set_target") == 0) {
            *out = gml_surface_set_target(args[0]); return true;
        }
        if (strcmp(id, "surface_reset_target") == 0) {
            *out = gml_surface_reset_target(); return true;
        }
        if (strcmp(id, "draw_surface") == 0) {
            *out = gml_draw_surface(args[0], args[1], args[2]); return true;
        }
        if (strcmp(id, "draw_clear") == 0) {
            *out = gml_draw_clear(args[0]); return true;
        }
        if (strcmp(id, "draw_clear_alpha") == 0) {
            *out = gml_draw_clear_alpha(args[0], args[1]); return true;
        }
        snprintf(p->err, sizeof(p->err), "unknown fn %s", id);
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
        double r;
        if (!parse_term(p, &r)) return false;
        if (c == '+') *out += r;
        else *out -= r;
    }
    return true;
}

static bool parse_expr(gml_parser *p, double *out) {
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

bool gm82_gml_eval_expr(gm82_runtime *rt, gm82_instance *self, const char *expr, double *out) {
    if (!expr || !out) return false;
    gml_parser p = { expr, 0, strlen(expr), rt, self, {0} };
    gm82_gml_set_runtime(rt);
    gm82_gml_set_self(self);
    return parse_expr(&p, out);
}

bool gm82_gml_eval_stmt(gm82_runtime *rt, gm82_instance *self, const char *stmt) {
    if (!stmt) return false;
    gml_parser p = { stmt, 0, strlen(stmt), rt, self, {0} };
    gm82_gml_set_runtime(rt);
    gm82_gml_set_self(self);
    char id[64];
    if (!parse_ident(&p, id, sizeof(id))) return false;
    /* if (cond) body */
    if (strcmp(id, "if") == 0) {
        if (!match(&p, '(')) return false;
        double cond = 0;
        if (!parse_expr(&p, &cond)) return false;
        if (!match(&p, ')')) return false;
        skip_ws(&p);
        const char *rest = p.s + p.i;
        const char *else_pos = strstr(rest, " else ");
        char then_buf[256], else_buf[256];
        if (else_pos) {
            size_t tl = (size_t)(else_pos - rest);
            if (tl >= sizeof(then_buf)) tl = sizeof(then_buf)-1;
            memcpy(then_buf, rest, tl); then_buf[tl] = 0;
            strncpy(else_buf, else_pos + 6, sizeof(else_buf)-1); else_buf[sizeof(else_buf)-1]=0;
            if (cond != 0) return gm82_gml_eval_stmt(rt, self, then_buf);
            return gm82_gml_eval_stmt(rt, self, else_buf);
        }
        if (cond == 0) return true;
        return gm82_gml_eval_stmt(rt, self, rest);
    }

    /* for (init; cond; step) body */
    if (strcmp(id, "for") == 0) {
        if (!match(&p, '(')) return false;
        char init_str[512] = "", cond_str[512] = "", step_str[512] = "";
        size_t j = 0;
        int paren_depth = 0;
        bool in_str = false;

        while (p.i < p.n) {
            char c = p.s[p.i];
            if (c == '"' || c == '\'') in_str = !in_str;
            if (!in_str) {
                if (c == '(') paren_depth++;
                else if (c == ')') paren_depth--;
                else if (c == ';' && paren_depth == 0) break;
            }
            if (j + 1 < sizeof(init_str)) init_str[j++] = c;
            p.i++;
        }
        init_str[j] = 0;
        if (!match(&p, ';')) return false;

        j = 0; paren_depth = 0; in_str = false;
        while (p.i < p.n) {
            char c = p.s[p.i];
            if (c == '"' || c == '\'') in_str = !in_str;
            if (!in_str) {
                if (c == '(') paren_depth++;
                else if (c == ')') paren_depth--;
                else if (c == ';' && paren_depth == 0) break;
            }
            if (j + 1 < sizeof(cond_str)) cond_str[j++] = c;
            p.i++;
        }
        cond_str[j] = 0;
        if (!match(&p, ';')) return false;

        j = 0; paren_depth = 0; in_str = false;
        while (p.i < p.n) {
            char c = p.s[p.i];
            if (c == '"' || c == '\'') in_str = !in_str;
            if (!in_str) {
                if (c == '(') paren_depth++;
                else if (c == ')') {
                    if (paren_depth == 0) break;
                    paren_depth--;
                }
            }
            if (j + 1 < sizeof(step_str)) step_str[j++] = c;
            p.i++;
        }
        step_str[j] = 0;
        if (!match(&p, ')')) return false;

        skip_ws(&p);
        const char *body = p.s + p.i;

        if (init_str[0]) gm82_gml_eval_stmt(rt, self, init_str);
        int max_iters = 10000;
        while (max_iters-- > 0) {
            double cval = 1;
            if (cond_str[0]) gm82_gml_eval_expr(rt, self, cond_str, &cval);
            if (cval == 0) break;
            gm82_gml_eval_stmt(rt, self, body);
            if (step_str[0]) gm82_gml_eval_stmt(rt, self, step_str);
        }
        return true;
    }

    /* repeat (count) body */
    if (strcmp(id, "repeat") == 0) {
        if (!match(&p, '(')) return false;
        double count = 0;
        if (!parse_expr(&p, &count)) return false;
        if (!match(&p, ')')) return false;
        skip_ws(&p);
        const char *body = p.s + p.i;
        int num = (int)count;
        for (int k = 0; k < num; k++) {
            gm82_gml_eval_stmt(rt, self, body);
        }
        return true;
    }

    /* while (cond) body */
    if (strcmp(id, "while") == 0) {
        if (!match(&p, '(')) return false;
        size_t cond_start = p.i;
        double cond = 0;
        if (!parse_expr(&p, &cond)) return false;
        if (!match(&p, ')')) return false;
        skip_ws(&p);
        const char *body = p.s + p.i;
        int max_iters = 10000;
        while (cond != 0 && max_iters-- > 0) {
            gm82_gml_eval_stmt(rt, self, body);
            p.i = cond_start;
            if (!parse_expr(&p, &cond)) break;
        }
        return true;
    }

    /* with (target) body */
    if (strcmp(id, "with") == 0) {
        if (!match(&p, '(')) return false;
        double target = 0;
        if (!parse_expr(&p, &target)) return false;
        if (!match(&p, ')')) return false;
        skip_ws(&p);
        const char *body = p.s + p.i;
        int32_t tgt_id = (int32_t)target;
        if (rt) {
            for (int k = 0; k < rt->instance_count; k++) {
                gm82_instance *o = &rt->instances[k];
                if (!o->alive) continue;
                if (tgt_id == -1 || o->id == tgt_id || o->object_index == tgt_id) {
                    gm82_gml_eval_stmt(rt, o, body);
                }
            }
        }
        return true;
    }
    if (!match(&p, '=')) {
        p.i = 0;
        double v;
        return parse_expr(&p, &v);
    }
    double v;
    if (!parse_expr(&p, &v)) return false;
    return set_var(&p, id, v);
}

int gm82_gml_eval_block(gm82_runtime *rt, gm82_instance *self, const char *code) {
    if (!code) return 0;
    int ok = 0;
    char buf[256];
    const char *p = code;
    while (*p) {
        while (*p && (isspace((unsigned char)*p) || *p == ';')) p++;
        if (!*p) break;
        size_t j = 0;
        while (*p && *p != ';' && *p != '\n' && j + 1 < sizeof(buf))
            buf[j++] = *p++;
        buf[j] = 0;
        if (j > 0 && gm82_gml_eval_stmt(rt, self, buf)) ok++;
    }
    return ok;
}
