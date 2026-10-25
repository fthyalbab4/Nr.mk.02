#!/usr/bin/env python3
"""Land PR#192 unique code onto tree (idempotent). Binary test conflicts skipped."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]

BUILTIN_BLOCK = """
double gml_hypot(double x, double y) {
    return sqrt(x * x + y * y);
}

double gml_clamp_angle(double angle) {
    double a = fmod(angle, 360.0);
    if (a < 0.0) a += 360.0;
    return a;
}

double gml_lerp_angle(double a, double b, double t) {
    double diff = gml_angle_difference(b, a);
    return gml_clamp_angle(a + diff * t);
}

"""

EVAL_ADD = """
        if (strcmp(id, \"hypot\") == 0) {
            *out = gml_hypot(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, \"clamp_angle\") == 0) {
            *out = gml_clamp_angle(arg); return true;
        }
        if (strcmp(id, \"lerp_angle\") == 0) {
            *out = gml_lerp_angle(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
"""

HEADER_LINE = """double gml_hypot(double x, double y);
double gml_clamp_angle(double angle);
double gml_lerp_angle(double a, double b, double t);
"""

ACTION_BLOCK = """
    if (strcmp(name, \"action_draw_text\") == 0) {
        const char *txt = (str_argc >= 1 && str_args[0][0]) ? str_args[0] : \"\";
        double x = (argc >= 1) ? (double)args[0] : self->x;
        double y = (argc >= 2) ? (double)args[1] : self->y;
        gml_draw_text(x, y, txt);
        return true;
    }
    if (strcmp(name, \"action_draw_score\") == 0) {
        double x = (argc >= 1) ? (double)args[0] : self->x;
        double y = (argc >= 2) ? (double)args[1] : self->y;
        char buf[64];
        snprintf(buf, sizeof(buf), \"Score: %g\", gml_get_score());
        gml_draw_text(x, y, buf);
        return true;
    }
    if (strcmp(name, \"action_draw_life\") == 0 || strcmp(name, \"action_draw_lives\") == 0) {
        double x = (argc >= 1) ? (double)args[0] : self->x;
        double y = (argc >= 2) ? (double)args[1] : self->y;
        char buf[64];
        snprintf(buf, sizeof(buf), \"Lives: %g\", gml_get_lives());
        gml_draw_text(x, y, buf);
        return true;
    }
    if (strcmp(name, \"action_path\") == 0) {
        double path = (argc >= 1) ? (double)args[0] : 0;
        double spd = (argc >= 2) ? (double)args[1] : 1.0;
        double endact = (argc >= 3) ? (double)args[2] : 0;
        double abs_val = (argc >= 4) ? (double)args[3] : 1;
        gml_path_start(path, spd, endact, abs_val);
        return true;
    }
    if (strcmp(name, \"action_path_end\") == 0) {
        gml_path_end();
        return true;
    }
"""

bases = [
    ROOT / "app/src/main/cpp",
    ROOT / "app/src/main/cpp_backup",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX",
]

for base in bases:
    p = base / "src/gm82_gml_builtins.c"
    if p.exists() and "gml_hypot" not in p.read_text():
        t = p.read_text()
        a = "double gml_collision_rectangle("
        if a in t:
            p.write_text(t.replace(a, BUILTIN_BLOCK + a, 1))
            print("builtins", p)
    h = base / "include/gm82_gml_builtins.h"
    if h.exists() and "gml_hypot" not in h.read_text():
        th = h.read_text()
        old = "double gml_triangle_is_clockwise(double x1, double y1, double x2, double y2, double x3, double y3);"
        if old in th:
            h.write_text(th.replace(old, old + "\n" + HEADER_LINE, 1))
            print("header", h)
    ev = base / "src/gm82_gml_eval.c"
    if ev.exists() and 'strcmp(id, "hypot")' not in ev.read_text():
        te = ev.read_text()
        needle = 'if (strcmp(id, "angle_difference") == 0) {\n            *out = gml_angle_difference(arg, nargs >= 2 ? args[1] : 0); return true;\n        }'
        if needle in te:
            ev.write_text(te.replace(needle, needle + EVAL_ADD, 1))
            print("eval", ev)
        else:
            print("no eval needle", ev)
    ac = base / "src/gm82_actions.c"
    if ac.exists() and "action_draw_text" not in ac.read_text():
        ta = ac.read_text()
        anchor = 'if (strcmp(name, "action_set_alarm") == 0)'
        if anchor in ta:
            ac.write_text(ta.replace(anchor, ACTION_BLOCK + "\n    " + anchor, 1))
            print("actions", ac)
        else:
            print("no actions anchor", ac)
    elif ac.exists():
        print("actions already", ac)

print("APPLY_PR192_OK")
