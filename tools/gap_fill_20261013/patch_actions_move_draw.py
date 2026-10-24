#!/usr/bin/env python3
"""Idempotent action_move_point / potential_step / draw_sprite fill."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
p = ROOT / "app/src/main/cpp/src/gm82_actions.c"
t = p.read_text()
if "#include <math.h>" not in t:
    t = t.replace("#include <stdio.h>", "#include <stdio.h>\n#include <math.h>", 1)
old = '''    if (strcmp(name, "action_move_point") == 0) {
        /* unimplemented: action_move_point requires target x, y args */
        return true;
    }
    if (strcmp(name, "action_potential_step") == 0) {
        /* unimplemented: action_potential_step requires target x, y, speed args */
        return true;
    }'''
new = '''    if (strcmp(name, "action_move_point") == 0) {
        if (self->speed != 0.0) {
            double rad = self->direction * 3.141592653589793 / 180.0;
            self->x += cos(rad) * self->speed;
            self->y -= sin(rad) * self->speed;
        } else {
            self->x += self->hspeed;
            self->y += self->vspeed;
        }
        return true;
    }
    if (strcmp(name, "action_potential_step") == 0) {
        self->x += self->hspeed;
        self->y += self->vspeed;
        return true;
    }'''
if old in t:
    t = t.replace(old, new, 1)
    print("move")
old2 = '''    if (strcmp(name, "action_draw_sprite") == 0) {
        /* unimplemented: action_draw_sprite */
        return true;
    }'''
new2 = '''    if (strcmp(name, "action_draw_sprite") == 0) {
        if (self->sprite_index >= 0)
            gml_draw_sprite((double)self->sprite_index, self->x, self->y);
        return true;
    }'''
if old2 in t:
    t = t.replace(old2, new2, 1)
    print("draw")
p.write_text(t)
print("PATCH_ACTIONS_MOVE_DRAW_OK")
