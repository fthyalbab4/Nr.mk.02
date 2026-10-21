#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
p = ROOT / "app/src/main/cpp/src/gm82_actions.c"
t = p.read_text()
old = '''    if (strcmp(name, "action_another_room") == 0) {
        /* unimplemented: action_another_room requires target room_index arg */
        return true;
    }'''
new = '''    if (strcmp(name, "action_another_room") == 0) {
        int r = rt->current_room + 1;
        if (rt->rooms && r < rt->rooms->count)
            gm82_runtime_goto_room(rt, r);
        return true;
    }'''
if old in t:
    t = t.replace(old, new, 1)
    print("another_room")
else:
    print("another_room skip")
old2 = '''    if (strcmp(name, "action_change_object") == 0) {
        /* unimplemented: action_change_object requires target object index arg */
        return true;
    }'''
new2 = '''    if (strcmp(name, "action_change_object") == 0) {
        if (rt->objects && self->object_index >= 0 && self->object_index < rt->objects->count) {
            const gm82_decoded_object *o = &rt->objects->items[self->object_index];
            self->sprite_index = o->sprite_index;
            self->solid = o->solid;
            self->visible = o->visible;
            self->depth = o->depth;
        }
        return true;
    }'''
if old2 in t:
    t = t.replace(old2, new2, 1)
    print("change_object")
else:
    print("change_object skip")
p.write_text(t)
print("PATCH_ACTIONS_ROOMS_OK")
