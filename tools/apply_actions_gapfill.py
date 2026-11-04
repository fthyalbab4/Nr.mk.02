#!/usr/bin/env python3
"""Insert host-safe rare DnD handlers into gm82_actions_extra.c (3 trees)."""
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
PATHS = [
    ROOT / "app/src/main/cpp/src/gm82_actions_extra.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_actions_extra.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_actions_extra.c",
]

BLOCK = r'''
    /* ---- close open DnD names (host-safe; 2026-11-04) ---- */
    if (strcmp(name, "action_step_towards") == 0) {
        double tx = (argc >= 1) ? (double)args[0] : self->x;
        double ty = (argc >= 2) ? (double)args[1] : self->y;
        double sp = (argc >= 3) ? (double)args[2] : 1.0;
        if (sp < 0) sp = -sp;
        gml_move_towards_point(tx, ty, sp);
        self->x += self->hspeed;
        self->y += self->vspeed;
        return 1;
    }
    if (strcmp(name, "action_step_avoid") == 0) {
        double tx = (argc >= 1) ? (double)args[0] : self->x;
        double ty = (argc >= 2) ? (double)args[1] : self->y;
        double sp = (argc >= 3) ? (double)args[2] : 1.0;
        if (sp < 0) sp = -sp;
        double nx = self->x + (tx > self->x ? sp : (tx < self->x ? -sp : 0));
        double ny = self->y + (ty > self->y ? sp : (ty < self->y ? -sp : 0));
        if (gml_place_free(nx, ny)) {
            gml_move_towards_point(tx, ty, sp);
        } else {
            gml_move_towards_point(tx, ty, sp * 0.5);
        }
        self->x += self->hspeed;
        self->y += self->vspeed;
        return 1;
    }
    if (strcmp(name, "action_draw_background") == 0) {
        double bg = (argc >= 1) ? (double)args[0] : 0;
        double x = (argc >= 2) ? (double)args[1] : 0;
        double y = (argc >= 3) ? (double)args[2] : 0;
        gml_draw_background(bg, x, y);
        return 1;
    }
    if (strcmp(name, "action_draw_ellipse") == 0) {
        double x1 = (argc >= 1) ? (double)args[0] : self->x;
        double y1 = (argc >= 2) ? (double)args[1] : self->y;
        double x2 = (argc >= 3) ? (double)args[2] : self->x + 16;
        double y2 = (argc >= 4) ? (double)args[3] : self->y + 16;
        double outline = (argc >= 5) ? (double)args[4] : 0;
        gml_draw_ellipse(x1, y1, x2, y2, outline);
        return 1;
    }
    if (strcmp(name, "action_show_info") == 0 ||
        strcmp(name, "action_show_video") == 0 ||
        strcmp(name, "action_webpage") == 0 ||
        strcmp(name, "action_snapshot") == 0 ||
        strcmp(name, "action_part_system") == 0) {
        return 1;
    }
    if (strcmp(name, "action_cd_play") == 0 ||
        strcmp(name, "action_cd_stop") == 0 ||
        strcmp(name, "action_cd_pause") == 0 ||
        strcmp(name, "action_cd_resume") == 0) {
        return 1;
    }
    if (strcmp(name, "action_start_timeline") == 0 ||
        strcmp(name, "action_timeline_set") == 0) {
        int idx = (argc >= 1) ? args[0] : 0;
        self->timeline_index = idx;
        self->timeline_position = (argc >= 2) ? (double)args[1] : 0.0;
        self->timeline_running = 1;
        if (self->timeline_speed <= 0) self->timeline_speed = 1.0;
        return 1;
    }
    if (strcmp(name, "action_timeline_position") == 0) {
        self->timeline_position = (argc >= 1) ? (double)args[0] : 0.0;
        return 1;
    }
    if (strcmp(name, "action_timeline_speed") == 0) {
        self->timeline_speed = (argc >= 1) ? (double)args[0] : 1.0;
        return 1;
    }
    if (strcmp(name, "action_timeline_pause") == 0) {
        self->timeline_running = 0;
        return 1;
    }
    if (strcmp(name, "action_timeline_resume") == 0) {
        self->timeline_running = 1;
        return 1;
    }
'''

def patch(path: Path) -> str:
    if not path.exists():
        return f"skip missing {path}"
    text = path.read_text(encoding="utf-8")
    if "action_step_towards" in text:
        return f"already {path}"
    idx = text.rfind("    return 0;\n}")
    if idx < 0:
        idx = text.rfind("return 0;")
    if idx < 0:
        return f"no anchor {path}"
    path.write_text(text[:idx] + BLOCK + "\n" + text[idx:], encoding="utf-8")
    return f"patched {path}"

def main() -> int:
    for p in PATHS:
        print(patch(p))
    return 0

if __name__ == "__main__":
    sys.exit(main())
