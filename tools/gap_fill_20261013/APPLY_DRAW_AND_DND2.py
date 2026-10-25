#!/usr/bin/env python3
"""Use instance image_angle/alpha/blend in runtime draw; more DnD; string_concat."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
old = (
    "            gml_draw_sprite_ext((double)inst->sprite_index, (double)inst->image_index,\n"
    "                                dx, dy,\n"
    "                                inst->image_xscale,\n"
    "                                inst->image_yscale,\n"
    "                                0.0, 0xFFFFFF, 1.0);"
)
new = (
    "            gml_draw_sprite_ext((double)inst->sprite_index, (double)inst->image_index,\n"
    "                                dx, dy,\n"
    "                                inst->image_xscale,\n"
    "                                inst->image_yscale,\n"
    "                                inst->image_angle,\n"
    "                                (double)(inst->image_blend ? inst->image_blend : 0xFFFFFF),\n"
    "                                inst->image_alpha > 0.0 ? inst->image_alpha : 1.0);"
)
for p in [
    ROOT / "app/src/main/cpp/src/gm82_runtime.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_runtime.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_runtime.c",
]:
    if not p.exists():
        continue
    t = p.read_text()
    if old in t:
        p.write_text(t.replace(old, new))
        print("draw", p)
    else:
        print("draw skip", p)

EXTRA2 = r'''
    if (strcmp(name, "action_set_sprite") == 0) {
        if (argc >= 1) self->sprite_index = args[0];
        if (argc >= 2) self->image_index = args[1];
        return true;
    }
    if (strcmp(name, "action_draw_health") == 0) {
        double x = (argc >= 1) ? (double)args[0] : self->x;
        double y = (argc >= 2) ? (double)args[1] : self->y;
        char buf[64];
        snprintf(buf, sizeof(buf), "HP: %g", gml_get_health());
        gml_draw_text(x, y, buf);
        return true;
    }
    if (strcmp(name, "action_set_score_relative") == 0 || strcmp(name, "action_score") == 0) {
        double d = (argc >= 1) ? (double)args[0] : 1.0;
        gml_set_score(gml_get_score() + d);
        return true;
    }
    if (strcmp(name, "action_set_lives_relative") == 0) {
        double d = (argc >= 1) ? (double)args[0] : 1.0;
        gml_set_lives(gml_get_lives() + d);
        return true;
    }
    if (strcmp(name, "action_set_health_relative") == 0) {
        double d = (argc >= 1) ? (double)args[0] : 1.0;
        gml_set_health(gml_get_health() + d);
        return true;
    }
    if (strcmp(name, "action_sound_volume") == 0) {
        gml_sound_volume((argc >= 1) ? args[0] : 0, (argc >= 2) ? (double)args[1] : 1.0);
        return true;
    }
    if (strcmp(name, "action_if_score") == 0 || strcmp(name, "action_if_lives") == 0 ||
        strcmp(name, "action_if_health") == 0 || strcmp(name, "action_if_dice") == 0) {
        return true;
    }
    if (strcmp(name, "action_partemit_create") == 0 || strcmp(name, "action_partemit_burst") == 0) {
        gml_part_particles_create(0, self->x, self->y, 0, 8);
        return true;
    }
    if (strcmp(name, "action_timeline_set") == 0) {
        if (argc >= 1) self->timeline_index = args[0];
        if (argc >= 2) self->timeline_position = (double)args[1];
        self->timeline_running = 1;
        return true;
    }
    if (strcmp(name, "action_timeline_start") == 0) {
        self->timeline_running = 1;
        return true;
    }
    if (strcmp(name, "action_timeline_stop") == 0) {
        self->timeline_running = 0;
        return true;
    }
    if (strcmp(name, "action_timeline_clear") == 0) {
        self->timeline_index = -1;
        self->timeline_running = 0;
        return true;
    }
'''
for ac in [
    ROOT / "app/src/main/cpp/src/gm82_actions.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_actions.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_actions.c",
]:
    if not ac.exists():
        continue
    t = ac.read_text()
    if "action_draw_health" in t:
        print("dnd2 already", ac); continue
    anchor = 'if (strcmp(name, "action_set_alarm") == 0)'
    if anchor in t:
        ac.write_text(t.replace(anchor, EXTRA2 + "\n    " + anchor, 1))
        print("dnd2", ac)

needle = 'if (strcmp(id, "string_repeat") == 0)'
block = (
    'if (strcmp(id, "string_concat") == 0) {\n'
    '            const char *a = (p->str_mask & 1) ? p->str_args[0] : "";\n'
    '            const char *b = (p->str_mask & 2) ? p->str_args[1] : "";\n'
    '            char tmp[256];\n'
    '            snprintf(tmp, sizeof(tmp), "%s%s", a, b);\n'
    '            snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", tmp);\n'
    '            p->str_mask |= 1; gm82_gml_set_last_string(p->str_args[0]); *out = 0; return true;\n'
    '        }\n'
    '        '
)
for ev in [
    ROOT / "app/src/main/cpp/src/gm82_gml_eval.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_gml_eval.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_eval.c",
]:
    if not ev.exists():
        continue
    t = ev.read_text()
    if "string_concat" in t:
        print("concat already", ev); continue
    if needle in t:
        ev.write_text(t.replace(needle, block + needle, 1))
        print("concat", ev)
print("APPLY_DRAW_AND_DND2_OK")
