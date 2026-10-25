#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
EXTRA = r'''
    if (strcmp(name, "action_message") == 0 || strcmp(name, "action_show_message") == 0) {
        const char *txt = (str_argc >= 1 && str_args[0][0]) ? str_args[0] : "message";
        gml_draw_text(self->x, self->y, txt);
        return true;
    }
    if (strcmp(name, "action_set_cursor") == 0) {
        return true;
    }
    if (strcmp(name, "action_fullscreen") == 0) {
        return true;
    }
    if (strcmp(name, "action_sprite_transform") == 0) {
        if (argc >= 1) self->image_xscale = (double)args[0] != 0.0 ? (double)args[0] : 1.0;
        if (argc >= 2) self->image_yscale = (double)args[1] != 0.0 ? (double)args[1] : 1.0;
        return true;
    }
    if (strcmp(name, "action_sprite_color") == 0) {
        return true;
    }
    if (strcmp(name, "action_move_random") == 0) {
        int rw = (rt && rt->room_width > 0) ? rt->room_width : 640;
        int rh = (rt && rt->room_height > 0) ? rt->room_height : 480;
        self->x = (double)(rw > 0 ? (rand() % rw) : 0);
        self->y = (double)(rh > 0 ? (rand() % rh) : 0);
        return true;
    }
    if (strcmp(name, "action_linear_step") == 0) {
        double tx = (argc >= 1) ? (double)args[0] : self->x;
        double ty = (argc >= 2) ? (double)args[1] : self->y;
        double sp = (argc >= 3) ? (double)args[2] : 1.0;
        gml_move_towards_point(tx, ty, sp);
        return true;
    }
    if (strcmp(name, "action_highscore_show") == 0 || strcmp(name, "action_highscore_clear") == 0) {
        return true;
    }
'''
for base in [
    ROOT / "app/src/main/cpp/src/gm82_actions.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_actions.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_actions.c",
]:
    if not base.exists():
        continue
    t = base.read_text()
    if "action_message" in t:
        print("already", base)
        continue
    if "#include <stdlib.h>" not in t:
        t = t.replace("#include <stdio.h>", "#include <stdio.h>\n#include <stdlib.h>", 1)
    anchor = 'if (strcmp(name, "action_set_alarm") == 0)'
    if anchor not in t:
        print("no anchor", base)
        continue
    base.write_text(t.replace(anchor, EXTRA + "\n    " + anchor, 1))
    print("patched", base)
print("APPLY_DND_EXTRAS_OK")
