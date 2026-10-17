#!/usr/bin/env python3
"""Restore full gm82_gml_builtins.h from known-good commit, then add xoffset decls."""
import subprocess, pathlib, re
ROOT = pathlib.Path(__file__).resolve().parents[2]
out = ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h"
# Prefer local git history
for sha in ["02d7da5", "3023c9b", "02fae0b"]:
    try:
        data = subprocess.check_output(
            ["git", "show", f"{sha}:app/src/main/cpp/include/gm82_gml_builtins.h"],
            cwd=str(ROOT), stderr=subprocess.DEVNULL)
        if len(data) > 10000:
            text = data.decode("utf-8", errors="replace")
            if "gml_sprite_get_xoffset" not in text:
                text = text.replace(
                    "double gml_sprite_get_height(double sprite);",
                    "double gml_sprite_get_height(double sprite);\ndouble gml_sprite_get_xoffset(double sprite);\ndouble gml_sprite_get_yoffset(double sprite);",
                )
            out.write_text(text)
            print("RESTORED_FROM", sha, len(text))
            raise SystemExit(0)
    except subprocess.CalledProcessError:
        continue
    except SystemExit:
        raise
# Fallback: package header
pkg = ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/include/gm82_gml_builtins.h"
if pkg.exists() and pkg.stat().st_size > 5000:
    text = pkg.read_text()
    if "gml_sprite_get_xoffset" not in text:
        text = text.replace(
            "double gml_sprite_get_height(double sprite);",
            "double gml_sprite_get_height(double sprite);\ndouble gml_sprite_get_xoffset(double sprite);\ndouble gml_sprite_get_yoffset(double sprite);",
        )
    out.write_text(text)
    print("RESTORED_FROM_PACKAGE", len(text))
    raise SystemExit(0)
raise SystemExit("restore failed: fetch deeper history git fetch --depth=50")
