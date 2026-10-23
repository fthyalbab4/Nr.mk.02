#!/usr/bin/env python3
"""Idempotent: add gm82_runtime_get_active_snapshot if missing."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
h = ROOT / "app/src/main/cpp/include/gm82_runtime.h"
t = h.read_text()
if "gm82_runtime_get_active_snapshot" not in t:
    needle = "void gm82_runtime_init(gm82_runtime *rt);"
    t = t.replace(needle, needle + "\nint gm82_runtime_get_active_snapshot(gm82_runtime *rt, gm82_instance **out_ptrs);", 1)
    h.write_text(t)
    print("header")
else:
    print("header already")
rt = ROOT / "app/src/main/cpp/src/gm82_runtime.c"
t = rt.read_text()
if "gm82_runtime_get_active_snapshot" not in t:
    impl = '''
int gm82_runtime_get_active_snapshot(gm82_runtime *rt, gm82_instance **out_ptrs) {
    if (!rt || !out_ptrs) return 0;
    int n = 0;
    for (int i = 0; i < rt->instance_count && n < GM82_MAX_INSTANCES; i++) {
        if (rt->instances[i].alive)
            out_ptrs[n++] = &rt->instances[i];
    }
    return n;
}
'''
    t = t.replace("void gm82_runtime_bind_assets", impl + "\nvoid gm82_runtime_bind_assets", 1)
    rt.write_text(t)
    print("runtime")
else:
    print("runtime already")
bh = ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h"
bt = bh.read_text()
need = []
for line in [
    "void gml_show_debug_message(const char *msg);",
    "double gml_randomize(void);",
    "double gml_random_set_seed(double seed);",
    "double gml_random_get_seed(void);",
]:
    name = line.split("(")[0].split()[-1]
    if name not in bt:
        need.append(line)
if need:
    if bt.rstrip().endswith("#endif"):
        bt = bt.rstrip()[:-6] + "\n".join(need) + "\n#endif\n"
    else:
        bt += "\n".join(need) + "\n"
    bh.write_text(bt)
    print("builtins.h", len(need))
print("PATCH_SNAPSHOT_OK")
