#!/usr/bin/env python3
import base64
from pathlib import Path
b64 = Path(__file__).with_name("gm82_events.c.b64").read_text().strip()
data = base64.b64decode(b64)
for p in [
    Path("app/src/main/cpp/src/gm82_events.c"),
    Path("NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_events.c"),
]:
    p.parent.mkdir(parents=True, exist_ok=True)
    p.write_bytes(data)
    print("decoded", p, len(data), data.count(b"gml_set_other"))
print("OK")
