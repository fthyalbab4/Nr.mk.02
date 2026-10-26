#!/usr/bin/env python3
"""Additive O6: parent_index + parent-chain object_is_child_of."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]

def patch_header():
    p = ROOT / "app/src/main/cpp/include/gm82_object_room_decode.h"
    if not p.exists():
        print("header missing"); return
    t = p.read_text()
    if "parent_index" in t:
        print("header ok"); return
    old = "    int32_t persistent;\n    int32_t event_count;"
    new = (
        "    int32_t persistent;\n"
        "    int32_t parent_index; /* -1 if none */\n"
        "    int32_t event_count;"
    )
    if old not in t:
        print("header needle missing"); return
    p.write_text(t.replace(old, new, 1))
    print("header patched")

def patch_decode():
    p = ROOT / "app/src/main/cpp/src/gm82_object_room_decode.c"
    if not p.exists():
        print("decode missing"); return
    t = p.read_text()
    if "o->parent_index" in t:
        print("decode ok"); return
    old = "        int32_t pers_i = (off + 16 + 4 <= ol) ? rd_i32(d + off + 16) : 0;"
    new = (
        "        int32_t pers_i = (off + 16 + 4 <= ol) ? rd_i32(d + off + 16) : 0;\n"
        "        int32_t parent_i = (off + 20 + 4 <= ol) ? rd_i32(d + off + 20) : -1;\n"
        "        if (parent_i < -1 || parent_i > 512) parent_i = -1;"
    )
    if old not in t:
        print("decode pers needle missing")
    else:
        t = t.replace(old, new, 1)
    old2 = "        o->persistent = pers_i;\n        o->event_count = 0;"
    new2 = (
        "        o->persistent = pers_i;\n"
        "        o->parent_index = parent_i;\n"
        "        o->event_count = 0;"
    )
    if old2 not in t:
        print("decode assign needle missing")
    else:
        t = t.replace(old2, new2, 1)
    p.write_text(t)
    print("decode patched")

def patch_builtins():
    p = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
    if not p.exists():
        print("builtins missing"); return
    t = p.read_text()
    inc = '#include "gm82_materialize.h"'
    if inc not in t:
        needle = '#include "gm82_gml_builtins.h"'
        if needle in t:
            t = t.replace(needle, needle + "\n" + inc, 1)
    marker = "double gml_object_is_child_of(double child, double parent)"
    if marker not in t:
        print("object_is_child_of missing"); return
    if "walk parent chain" in t:
        print("builtins walk ok"); return
    start = t.find(marker)
    brace = t.find("{", start)
    end = t.find("\n}", brace)
    if start < 0 or brace < 0 or end < 0:
        print("builtins bounds fail"); return
    body = (
        "double gml_object_is_child_of(double child, double parent) {\n"
        "    /* walk parent chain using materialize object table (additive O6) */\n"
        "    int32_t c = (int32_t)child;\n"
        "    int32_t p = (int32_t)parent;\n"
        "    if (c == p) return 1.0;\n"
        "    const gm82_decoded_object_list *L = gm82_materialize_get_objects();\n"
        "    if (!L || !L->items || L->count <= 0) return 0.0;\n"
        "    int32_t cur = c;\n"
        "    for (int depth = 0; depth < 32; depth++) {\n"
        "        if (cur < 0 || cur >= L->count) return 0.0;\n"
        "        int32_t par = L->items[cur].parent_index;\n"
        "        if (par == p) return 1.0;\n"
        "        if (par < 0 || par == cur) return 0.0;\n"
        "        cur = par;\n"
        "    }\n"
        "    return 0.0;\n"
        "}"
    )
    t = t[:start] + body + t[end + 2 :]
    p.write_text(t)
    print("builtins parent walk")

def patch_other():
    p = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
    t = p.read_text()
    old = (
        "double gml_object_other_is_child_of(double parent){ "
        "gm82_instance *o=gm82_gml_get_other(); if(!o) return 0; "
        "return ((int32_t)o->object_index==(int32_t)parent)?1.0:0.0; }"
    )
    new = (
        "double gml_object_other_is_child_of(double parent){ "
        "gm82_instance *o=gm82_gml_get_other(); if(!o) return 0; "
        "return gml_object_is_child_of((double)o->object_index, parent); }"
    )
    if old in t:
        p.write_text(t.replace(old, new, 1))
        print("other_is_child_of linked")
    elif "gml_object_is_child_of((double)o->object_index" in t:
        print("other already linked")
    else:
        print("other pattern skip")

if __name__ == "__main__":
    patch_header()
    patch_decode()
    patch_builtins()
    patch_other()
    print("APPLY_O6_PARENT_CHAIN_DONE")
