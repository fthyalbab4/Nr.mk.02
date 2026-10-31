#define _POSIX_C_SOURCE 200809L
#include "gm82_actions.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include "gm82_sound_runtime.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#ifdef _WIN32
#include <windows.h>
#endif

int gm82_action_execute_extra(gm82_runtime *rt, gm82_instance *self, const char *name,
                              const int32_t *args, int argc,
                              const char str_args[][128], int str_argc) {
    if (!rt || !self || !name) return 0;
    gm82_gml_set_runtime(rt);
    gm82_gml_set_self(self);

    if (strcmp(name, "action_if_empty") == 0) {
        double dx = (argc >= 1) ? (double)args[0] : 0.0;
        double dy = (argc >= 2) ? (double)args[1] : 0.0;
        double target_x = self->x + dx;
        double target_y = self->y + dy;
        double res = gml_place_empty(target_x, target_y);
        return (res != 0.0) ? 1 : 0;
    }

    if (strcmp(name, "action_if_collision") == 0) {
        double dx = (argc >= 1) ? (double)args[0] : 0.0;
        double dy = (argc >= 2) ? (double)args[1] : 0.0;
        double obj = (argc >= 3) ? (double)args[2] : -1.0;
        double target_x = self->x + dx;
        double target_y = self->y + dy;
        double res = gml_place_meeting(target_x, target_y, obj);
        return (res != 0.0) ? 1 : 0;
    }

    if (strcmp(name, "action_if_dice") == 0) {
        int sides = (argc >= 1) ? args[0] : 1;
        if (sides <= 1) return 1;
        int roll = rand() % sides;
        return (roll == 0) ? 1 : 0;
    }

    if (strcmp(name, "action_if_variable") == 0) {
        const char *vname = (str_argc >= 1 && str_args[0][0]) ? str_args[0] : NULL;
        double val1 = 0.0;
        int op = 0;
        double val2 = 0.0;

        if (argc >= 1) val2 = (double)args[0];
        if (argc >= 2) op = args[1];
        if (argc >= 3) val2 = (double)args[2]; /* 3-arg variant */

        if (str_argc >= 2 && str_args[1][0]) {
            char *end = NULL;
            double parsed = strtod(str_args[1], &end);
            if (end && *end == 0 && end != str_args[1]) val2 = parsed;
            else gm82_gml_eval_expr(rt, self, str_args[1], &val2);
        }

        if (vname) {
            char expr[256];
            snprintf(expr, sizeof(expr), "%s", vname);
            gm82_gml_eval_expr(rt, self, expr, &val1);
        }

        switch (op) {
            case 0: return (val1 == val2) ? 1 : 0; /* equal */
            case 1: return (val1 < val2) ? 1 : 0;  /* less */
            case 2: return (val1 > val2) ? 1 : 0;  /* greater */
            case 3: return (val1 <= val2) ? 1 : 0; /* less or equal */
            case 4: return (val1 >= val2) ? 1 : 0; /* greater or equal */
            case 5: return (val1 != val2) ? 1 : 0; /* not equal */
            default: return (val1 == val2) ? 1 : 0;
        }
    }

    if (strcmp(name, "action_sprite_set") == 0 || strcmp(name, "action_set_sprite") == 0) {
        if (argc >= 1) self->sprite_index = args[0];
        if (argc >= 2) self->image_index = args[1];
        if (argc >= 3) self->image_speed = (double)args[2];
        return 1;
    }

    if (strcmp(name, "action_sprite_transform") == 0) {
        if (argc >= 1) self->image_xscale = (double)args[0];
        if (argc >= 2) self->image_yscale = (double)args[1];
        if (argc >= 3) self->image_angle = (double)args[2];
        return 1;
    }

    if (strcmp(name, "action_change_object") == 0) {
        if (argc >= 1) self->object_index = args[0];
        return 1;
    }

    if (strcmp(name, "action_snap") == 0) {
        double hsnap = (argc >= 1 && args[0] > 0) ? (double)args[0] : 32.0;
        double vsnap = (argc >= 2 && args[1] > 0) ? (double)args[1] : 32.0;
        self->x = floor((self->x / hsnap) + 0.5) * hsnap;
        self->y = floor((self->y / vsnap) + 0.5) * vsnap;
        return 1;
    }

    if (strcmp(name, "action_move_random") == 0) {
        double hsnap = (argc >= 1 && args[0] > 0) ? (double)args[0] : 32.0;
        double vsnap = (argc >= 2 && args[1] > 0) ? (double)args[1] : 32.0;
        double rw = rt->room_width ? (double)rt->room_width : 640.0;
        double rh = rt->room_height ? (double)rt->room_height : 480.0;
        int max_x = (int)(rw / hsnap);
        int max_y = (int)(rh / vsnap);
        if (max_x > 0) self->x = (rand() % max_x) * hsnap;
        if (max_y > 0) self->y = (rand() % max_y) * vsnap;
        return 1;
    }

    if (strcmp(name, "action_move_start") == 0) {
        self->x = self->xstart;
        self->y = self->ystart;
        return 1;
    }

    if (strcmp(name, "action_if_mouse") == 0) {
        int btn = (argc >= 1) ? args[0] : 1;
        double down = gml_mouse_check_button((double)btn);
        return (down != 0.0) ? 1 : 0;
    }

    if (strcmp(name, "action_if_number") == 0) {
        int obj = (argc >= 1) ? args[0] : -1;
        int op = (argc >= 2) ? args[1] : 0;
        double val2 = (argc >= 3) ? (double)args[2] : 0.0;
        double count = gml_instance_number((double)obj);
        switch (op) {
            case 0: return (count == val2) ? 1 : 0;
            case 1: return (count < val2) ? 1 : 0;
            case 2: return (count > val2) ? 1 : 0;
            default: return (count == val2) ? 1 : 0;
        }
    }

    if (strcmp(name, "action_set_variable") == 0) {
        const char *vname = (str_argc >= 1 && str_args[0][0]) ? str_args[0] : NULL;
        double val = (argc >= 1) ? (double)args[0] : 0.0;
        if (str_argc >= 2 && str_args[1][0])
            gm82_gml_eval_expr(rt, self, str_args[1], &val);
        int relative = (argc >= 2) ? args[1] : 0;
        if (vname) {
            char stmt[256];
            if (relative) snprintf(stmt, sizeof(stmt), "%s += %g;", vname, val);
            else snprintf(stmt, sizeof(stmt), "%s = %g;", vname, val);
            gm82_gml_eval_block(rt, self, stmt);
        }
        return 1;
    }

    if (strcmp(name, "action_if_key") == 0 || strcmp(name, "action_if_keyboard") == 0) {
        int key = (argc >= 1) ? args[0] : 0;
        int not_flag = (argc >= 2) ? args[1] : 0;
        int down = gml_keyboard_check((double)key) != 0.0;
        return not_flag ? !down : down;
    }
    if (strcmp(name, "action_if_key_pressed") == 0) {
        int key = (argc >= 1) ? args[0] : 0;
        return gml_keyboard_check_pressed((double)key) != 0.0;
    }
    if (strcmp(name, "action_if_key_released") == 0) {
        int key = (argc >= 1) ? args[0] : 0;
        return gml_keyboard_check_released((double)key) != 0.0;
    }
    if (strcmp(name, "action_draw_healthbar") == 0) {
        double x1 = (argc >= 1) ? (double)args[0] : self->x - 16;
        double y1 = (argc >= 2) ? (double)args[1] : self->y - 20;
        double amount = gml_get_health();
        if (amount < 0) amount = 0;
        if (amount > 100) amount = 100;
        char buf[64];
        snprintf(buf, sizeof(buf), "HP %g", amount);
        gml_draw_text(x1, y1, buf);
        return 1;
    }
    if (strcmp(name, "action_replace_sprite") == 0) {
        if (argc >= 1) self->sprite_index = args[0];
        if (argc >= 2) self->image_index = args[1];
        return 1;
    }
    if (strcmp(name, "action_sound_fade") == 0) {
        int sid = (argc >= 1) ? args[0] : 0;
        double vol = (argc >= 2) ? (double)args[1] : 0.0;
        gml_sound_volume(sid, vol);
        return 1;
    }
    if (strcmp(name, "action_wait") == 0) {
        int ms = (argc >= 1) ? args[0] : 0;
        if (ms > 0) {
#ifdef _WIN32
            Sleep(ms);
#else
            struct timespec ts = { ms / 1000, (long)(ms % 1000) * 1000000L };
            nanosleep(&ts, NULL);
#endif
        }
        return 1;
    }
    if (strcmp(name, "action_comment") == 0 || strcmp(name, "action_exit") == 0 ||
        strcmp(name, "action_set_caption") == 0 || strcmp(name, "action_set_background") == 0)
        return 1;
    if (strcmp(name, "action_another_room") == 0 || strcmp(name, "action_different_room") == 0) {
        int room = (argc >= 1) ? args[0] : 0;
        if (rt->rooms && room >= 0 && room < rt->rooms->count)
            gm82_runtime_goto_room(rt, room);
        return 1;
    }
    if (strcmp(name, "action_draw_arrow") == 0) {
        double x1 = (argc >= 1) ? (double)args[0] : self->x;
        double y1 = (argc >= 2) ? (double)args[1] : self->y;
        double x2 = (argc >= 3) ? (double)args[2] : self->x + 16;
        double y2 = (argc >= 4) ? (double)args[3] : self->y;
        gml_draw_line(x1, y1, x2, y2);
        return 1;
    }
    if (strcmp(name, "action_set_timeline") == 0) {
        if (argc >= 1) self->timeline_index = args[0];
        if (argc >= 2) self->timeline_position = (double)args[1];
        if (argc >= 3) self->timeline_running = args[2] ? 1 : 0;
        return 1;
    }
    if (strcmp(name, "action_timeline_pause") == 0) {
        self->timeline_running = 0;
        return 1;
    }
    if (strcmp(name, "action_set_path") == 0) {
        if (argc >= 1) self->path_index = args[0];
        if (argc >= 2) self->path_speed = (double)args[1];
        if (argc >= 3) self->path_endaction = args[2];
        if (argc >= 4 && args[3]) self->path_position = 0.0;
        return 1;
    }
    if (strcmp(name, "action_path_position") == 0) {
        if (argc >= 1) self->path_position = (double)args[0];
        return 1;
    }
    if (strcmp(name, "action_path_speed") == 0) {
        if (argc >= 1) self->path_speed = (double)args[0];
        return 1;
    }
    if (strcmp(name, "action_create_object_motion") == 0) {
        int obj = (argc >= 1) ? args[0] : self->object_index;
        double x = (argc >= 2) ? (double)args[1] : self->x;
        double y = (argc >= 3) ? (double)args[2] : self->y;
        double spd = (argc >= 4) ? (double)args[3] : 0;
        double dir = (argc >= 5) ? (double)args[4] : 0;
        gm82_instance *ni = gm82_runtime_instance_create(rt, obj, x, y);
        if (ni) { ni->speed = spd; ni->direction = dir; }
        return 1;
    }
    if (strcmp(name, "action_create_object_random") == 0) {
        int obj = (argc >= 1) ? args[0] : self->object_index;
        double x = (argc >= 2) ? (double)args[1] : self->x;
        double y = (argc >= 3) ? (double)args[2] : self->y;
        gm82_runtime_instance_create(rt, obj, x, y);
        return 1;
    }
    if (strcmp(name, "action_set_alarm_relative") == 0) {
        int idx = (argc >= 1) ? args[0] : 0;
        int val = (argc >= 2) ? args[1] : 30;
        if (idx < 0) idx = 0;
        if (idx > 11) idx = 11;
        if (self->alarms[idx] < 0) self->alarms[idx] = 0;
        self->alarms[idx] += val;
        return 1;
    }
    return 0;
}
