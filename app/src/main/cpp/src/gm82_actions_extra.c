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
    if (strcmp(name, "action_replace_sprite") == 0 || strcmp(name, "action_sprite_set") == 0) {
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
    if (strcmp(name, "action_if_dice") == 0) {
        int sides = (argc >= 1 && args[0] > 0) ? args[0] : 6;
        int not_flag = (argc >= 2) ? args[1] : 0;
        int roll = (rand() % sides) == 0;
        return not_flag ? !roll : roll;
    }
    if (strcmp(name, "action_if_empty") == 0) {
        double x = (argc >= 1) ? (double)args[0] : self->x;
        double y = (argc >= 2) ? (double)args[1] : self->y;
        int flag = (argc >= 3) ? args[2] : 0;
        int not_flag = (argc >= 4) ? args[3] : 0;
        (void)flag;
        int empty = (gml_place_empty(x, y) != 0.0);
        return not_flag ? !empty : empty;
    }
    if (strcmp(name, "action_if_collision") == 0) {
        double x = (argc >= 1) ? (double)args[0] : self->x;
        double y = (argc >= 2) ? (double)args[1] : self->y;
        int obj = (argc >= 3) ? args[2] : -1;
        int not_flag = (argc >= 4) ? args[3] : 0;
        int coll = (gml_place_meeting(x, y, (double)obj) != 0.0);
        return not_flag ? !coll : coll;
    }
    if (strcmp(name, "action_if_variable") == 0) {
        double val1 = (argc >= 1) ? (double)args[0] : 0.0;
        int op = (argc >= 2) ? args[1] : 0;
        double val2 = (argc >= 3) ? (double)args[2] : 0.0;
        int res = 0;
        if (op == 0) res = (val1 == val2);
        else if (op == 1) res = (val1 < val2);
        else if (op == 2) res = (val1 > val2);
        return res;
    }
    if (strcmp(name, "action_effect") == 0) {
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

    /* DnD Conditional Actions */
    if (strcmp(name, "action_if_empty") == 0) {
        double x = (argc >= 1) ? (double)args[0] : self->x;
        double y = (argc >= 2) ? (double)args[1] : self->y;
        double empty = gml_place_empty(x, y);
        return (empty != 0.0) ? 1 : 0;
    }
    if (strcmp(name, "action_if_dice") == 0) {
        int sides = (argc >= 1 && args[0] > 0) ? args[0] : 6;
        return (rand() % sides) == 0;
    }
    if (strcmp(name, "action_if_collision") == 0) {
        double x = (argc >= 1) ? (double)args[0] : self->x;
        double y = (argc >= 2) ? (double)args[1] : self->y;
        double obj = (argc >= 3) ? (double)args[2] : -1.0;
        double hit = gml_place_meeting(x, y, obj);
        return (hit != 0.0) ? 1 : 0;
    }
    if (strcmp(name, "action_if_variable") == 0) {
        double var_val = (argc >= 1) ? (double)args[0] : 0.0;
        int op = (argc >= 2) ? args[1] : 0;
        double target_val = (argc >= 3) ? (double)args[2] : 0.0;
        if (op == 0) return var_val == target_val;
        if (op == 1) return var_val < target_val;
        if (op == 2) return var_val > target_val;
        return var_val == target_val;
    }
    if (strcmp(name, "action_if_number") == 0) {
        int obj = (argc >= 1) ? args[0] : -1;
        int op = (argc >= 2) ? args[1] : 0;
        double val = (argc >= 3) ? (double)args[2] : 0.0;
        double cnt = gml_instance_number((double)obj);
        if (op == 0) return cnt == val;
        if (op == 1) return cnt < val;
        if (op == 2) return cnt > val;
        return cnt == val;
    }
    if (strcmp(name, "action_if_score") == 0) {
        double val = (argc >= 1) ? (double)args[0] : 0.0;
        int op = (argc >= 2) ? args[1] : 0;
        double sc = gml_get_score();
        if (op == 0) return sc == val;
        if (op == 1) return sc < val;
        if (op == 2) return sc > val;
        return sc == val;
    }
    if (strcmp(name, "action_if_life") == 0 || strcmp(name, "action_if_lives") == 0) {
        double val = (argc >= 1) ? (double)args[0] : 0.0;
        int op = (argc >= 2) ? args[1] : 0;
        double lv = gml_get_lives();
        if (op == 0) return lv == val;
        if (op == 1) return lv < val;
        if (op == 2) return lv > val;
        return lv == val;
    }
    if (strcmp(name, "action_if_health") == 0) {
        double val = (argc >= 1) ? (double)args[0] : 0.0;
        int op = (argc >= 2) ? args[1] : 0;
        double hp = gml_get_health();
        if (op == 0) return hp == val;
        if (op == 1) return hp < val;
        if (op == 2) return hp > val;
        return hp == val;
    }
    return 0;
}
