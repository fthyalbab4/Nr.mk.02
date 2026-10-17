from pathlib import Path
p = Path("app/src/main/cpp/src/gm82_gml_eval.c")
t = p.read_text()
if "action_move_to" in t:
    print("MM_ACTIONS_ALREADY"); raise SystemExit(0)
marker = 'if (strcmp(id, "move_towards_point") == 0)'
if marker not in t:
    marker = 'if (strcmp(id, "instance_create") == 0)'
block = r'''
        /* DnD action_* aliases (ported from NM.Maker.0..1.0) */
        if (strcmp(id, "action_move_to") == 0) {
            if (p->self) { p->self->x = nargs >= 1 ? args[0] : p->self->x;
                           p->self->y = nargs >= 2 ? args[1] : p->self->y; }
            *out = 1; return true;
        }
        if (strcmp(id, "action_move_start") == 0) {
            if (p->self) { p->self->x = p->self->xstart; p->self->y = p->self->ystart; }
            *out = 1; return true;
        }
        if (strcmp(id, "action_set_hspeed") == 0) {
            if (p->self) p->self->hspeed = arg; *out = 1; return true;
        }
        if (strcmp(id, "action_set_vspeed") == 0) {
            if (p->self) p->self->vspeed = arg; *out = 1; return true;
        }
        if (strcmp(id, "action_set_gravity") == 0) {
            if (p->self) { p->self->gravity = arg;
                if (nargs >= 2) p->self->gravity_direction = args[1]; }
            *out = 1; return true;
        }
        if (strcmp(id, "action_set_friction") == 0) {
            if (p->self) p->self->friction = arg; *out = 1; return true;
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
            if (p->self) p->self->sprite_index = (int32_t)arg; *out = 1; return true;
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
'''
if marker not in t:
    print("MM_ACTIONS_MISS")
else:
    p.write_text(t.replace(marker, block + "\n        " + marker, 1))
    print("MM_ACTIONS_OK")
