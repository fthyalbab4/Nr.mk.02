#!/usr/bin/env python3
"""Restore gm82_gml_builtins.h tri-mirror from known-good parent + ds_*_many decls."""
from pathlib import Path
import urllib.request

PARENT = "50dea0102b7aac4ab89621b6805db023659bc6c0"
PATHS = [
    "app/src/main/cpp/include/gm82_gml_builtins.h",
    "app/src/main/cpp_backup/include/gm82_gml_builtins.h",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/include/gm82_gml_builtins.h",
]
ANCHOR = "double gml_ds_grid_set_region_compat(double id, double x1, double y1, double x2, double y2, double val);\n"
INSERT = ANCHOR + (
    "double gml_ds_grid_set_many(double id, const double *args, int count);\n"
    "double gml_ds_priority_add_many(double id, const double *args, int count);\n"
)

def fetch(path: str) -> str:
    url = f"https://raw.githubusercontent.com/fthyalbab4/Nr.mk.02/{PARENT}/{path}"
    with urllib.request.urlopen(url) as r:
        return r.read().decode("utf-8")

def main():
    base = fetch(PATHS[0])
    if ANCHOR not in base:
        raise SystemExit("anchor missing in parent blob")
    if "gml_ds_grid_set_many" not in base:
        base = base.replace(ANCHOR, INSERT, 1)
    for p in PATHS:
        Path(p).parent.mkdir(parents=True, exist_ok=True)
        Path(p).write_text(base, encoding="utf-8")
        print("wrote", p, len(base))
    print("OK restore headers")

if __name__ == "__main__":
    main()
