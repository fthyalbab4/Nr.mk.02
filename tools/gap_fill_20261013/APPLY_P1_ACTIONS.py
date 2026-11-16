#!/usr/bin/env python3
"""P1: ensure missing DnD actions exist in gm82_actions_extra.c; restore builtins header."""
from pathlib import Path
import subprocess
ROOT = Path(__file__).resolve().parents[2]
EXTRA = ROOT / "app/src/main/cpp/src/gm82_actions_extra.c"
RESTORE = ROOT / "tools/restore_gml_builtins_headers.py"

def main():
    if RESTORE.exists():
        subprocess.run(["python3", str(RESTORE)], cwd=str(ROOT), check=False)
    if not EXTRA.exists():
        print("no extra"); return
    t = EXTRA.read_text()
    if "action_move_free" in t:
        print("actions already"); return
    if "#include <math.h>" not in t:
        t = t.replace("#include <string.h>", "#include <string.h>\n#include <math.h>", 1)
    block = '''
    if (strcmp(name, "action_move_free") == 0) {
        if (!self) return 1;
        double dir = (argc >= 1) ? (double)args[0] : self->direction;
        double spd = (argc >= 2) ? (double)args[1] : self->speed;
        self->direction = dir;
        self->speed = spd;
        {
            double rad = dir * 3.14159265358979323846 / 180.0;
            self->hspeed = spd * cos(rad);
            self->vspeed = -spd * sin(rad);
        }
        return 1;
    }
    if (strcmp(name, "action_draw_self") == 0) {
        gml_draw_self();
        return 1;
    }
    if (strcmp(name, "action_draw_background") == 0) {
        double bg = (argc >= 1) ? (double)args[0] : 0.0;
        double x = (argc >= 2) ? (double)args[1] : 0.0;
        double y = (argc >= 3) ? (double)args[2] : 0.0;
        (void)gml_draw_background(bg, x, y);
        return 1;
    }
    if (strcmp(name, "action_webpage") == 0 || strcmp(name, "action_url_open") == 0) {
        return 1;
    }
    if (strcmp(name, "action_snapshot") == 0) {
        return 1;
    }
'''
    if "    return -1;\n}\n" in t:
        t = t.replace("    return -1;\n}\n", block + "    return -1;\n}\n", 1)
        EXTRA.write_text(t)
        print("APPLY_P1_ACTIONS ok")
    else:
        print("anchor miss")

if __name__ == "__main__":
    main()
