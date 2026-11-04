#!/usr/bin/env python3
"""Apply batch4 closed stubs to all three C core mirrors."""
import base64, pathlib, sys
ROOT = pathlib.Path(__file__).resolve().parents[1]
def restore(b64name, relpaths):
    data = base64.b64decode((ROOT / "tools" / b64name).read_text().encode("ascii"))
    for rel in relpaths:
        p = ROOT / rel
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_bytes(data)
        print("wrote", p, "bytes", len(data))
restore("batch4_builtins.b64", [
    "app/src/main/cpp/src/gm82_gml_builtins.c",
    "app/src/main/cpp_backup/src/gm82_gml_builtins.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_builtins.c",
])
restore("batch4_eval.b64", [
    "app/src/main/cpp/src/gm82_gml_eval.c",
    "app/src/main/cpp_backup/src/gm82_gml_eval.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_eval.c",
])
restore("batch4_header.b64", [
    "app/src/main/cpp/include/gm82_gml_builtins.h",
    "app/src/main/cpp_backup/include/gm82_gml_builtins.h",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/include/gm82_gml_builtins.h",
])
print("OK")
