#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
HDRS = [
    ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h",
    ROOT / "app/src/main/cpp_backup/include/gm82_gml_builtins.h",
]
EXTRA = "\ndouble gml_ds_map_set_many(double id, const double *args, int count);\ndouble gml_ds_grid_set_many(double id, const double *args, int count);\n"
def main():
    for h in HDRS:
        if not h.exists():
            continue
        t = h.read_text(encoding="utf-8", errors="ignore")
        if "gml_ds_map_set_many" in t:
            print("ok", h); continue
        idx = t.rfind("#endif")
        if idx < 0:
            t = t + EXTRA
        else:
            t = t[:idx] + EXTRA + t[idx:]
        h.write_text(t, encoding="utf-8")
        print("patched", h)
if __name__ == "__main__":
    main()
