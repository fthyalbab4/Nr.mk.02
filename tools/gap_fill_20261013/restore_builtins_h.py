#!/usr/bin/env python3
import base64, pathlib
ROOT = pathlib.Path(__file__).resolve().parents[2]
a = (ROOT/"docs/HDR_B64_A.txt").read_text().strip()
b = (ROOT/"docs/HDR_B64_B.txt").read_text().strip()
out = ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h"
out.write_bytes(base64.b64decode(a+b))
print("RESTORED", out.stat().st_size)
