#!/usr/bin/env python3
"""Restore full gm82_gml_builtins.h on all three mirrors from parent commit + ds_*_many decls."""
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

def main():
    url = f"https://raw.githubusercontent.com/fthyalbab4/Nr.mk.02/{PARENT}/app/src/main/cpp/include/gm82_gml_builtins.h"
    with urllib.request.urlopen(url) as r:
        text = r.read().decode("utf-8")
    if ANCHOR not in text:
        raise SystemExit("anchor missing in parent blob")
    if "gml_ds_grid_set_many" not in text:
        text = text.replace(ANCHOR, INSERT, 1)
    for p in PATHS:
        Path(p).parent.mkdir(parents=True, exist_ok=True)
        Path(p).write_text(text, encoding="utf-8")
        print("wrote", p, len(text))
    print("OK full header restore")

if __name__ == "__main__":
    main()
