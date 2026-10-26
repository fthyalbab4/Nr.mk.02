#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
EXTRA = (Path(__file__).parent / "batch2_extra.c").read_text()
EVAL = (Path(__file__).parent / "batch2_eval_snip.c").read_text()
DECL = """
double gml_esign(double val, double defv);
double gml_invlerp(double a, double b, double v);
double gml_gauss(double mean, double deviation);
double gml_angle_wrap(double ang);
double gml_angle_normalize(double ang);
double gml_arcsin(double x);
double gml_arccos(double x);
double gml_is_equal(double a, double b);
double gml_random_color(void);
double gml_object_is_child_of(double child, double parent);
double gml_string_width(const char *s);
double gml_string_height(const char *s);
double gml_string_letters(const char *s);
double gml_string_pad(double number, double digits);
double gml_string_trim(const char *s);
"""
b = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
e = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
h = ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h"
if b.exists():
    t = b.read_text()
    if "gml_esign" not in t:
        for inc in ["#include <math.h>", "#include <string.h>", "#include <stdlib.h>"]:
            if inc not in t:
                t = inc + "\n" + t
        b.write_text(t + "\n" + EXTRA)
        print("builtins batch2")
    else:
        print("builtins ok")
if h.exists():
    t = h.read_text()
    t = t.replace("void gml_string_letters(const char *src, char *dst, size_t max_len);\n", "")
    if "gml_esign" not in t:
        idx = t.rfind("#endif")
        t = t[:idx] + "/* batch2 */\n" + DECL + t[idx:]
        print("header batch2")
    h.write_text(t)
if e.exists():
    t = e.read_text()
    if 'strcmp(id, "esign")' not in t:
        for needle in ['if (strcmp(id, "instance_create_moving") == 0) {', 'if (strcmp(id, "instance_create") == 0) {']:
            if needle in t:
                e.write_text(t.replace(needle, EVAL + "\n        " + needle, 1))
                print("eval batch2")
                break
        else:
            print("eval needle missing")
    else:
        print("eval ok")
print("APPLY_SOURCE_MERGE_BATCH2_DONE")
