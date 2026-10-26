#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
D = Path(__file__).parent
EXTRA = (D / "batch_all_extra.c").read_text()
EVAL = (D / "batch_all_eval_snip.c").read_text()
DECL = (D / "batch_all_decls.h").read_text()
b = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
e = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
h = ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h"
if b.exists():
    t = b.read_text()
    if "gm82_gm82core_try_stub" not in t:
        for inc in ["#include <math.h>", "#include <string.h>", "#include <stdlib.h>", "#include <time.h>"]:
            if inc not in t: t = inc + "\n" + t
        b.write_text(t + "\n" + EXTRA)
        print("builtins batch_all")
    else: print("builtins ok")
if h.exists():
    t = h.read_text()
    if "gm82_gm82core_try_stub" not in t:
        idx = t.rfind("#endif")
        h.write_text(t[:idx] + DECL + t[idx:])
        print("header batch_all")
    else: print("header ok")
if e.exists():
    t = e.read_text()
    if "gm82_gm82core_try_stub" not in t:
        for needle in ['if (strcmp(id, "instance_create_moving") == 0) {', 'if (strcmp(id, "instance_create") == 0) {']:
            if needle in t:
                e.write_text(t.replace(needle, EVAL + "\n        " + needle, 1))
                print("eval batch_all"); break
        else: print("eval needle missing")
    else: print("eval ok")
print("APPLY_SOURCE_MERGE_BATCH_ALL_DONE")
