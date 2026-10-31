#!/usr/bin/env python3
import zlib, base64
from pathlib import Path
Z = Path(__file__).with_name("z1.txt").read_text().strip() + Path(__file__).with_name("z2.txt").read_text().strip()
data = zlib.decompress(base64.b64decode(Z))
for p in [
    Path("app/src/main/cpp/src/gm82_events.c"),
    Path("NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_events.c"),
]:
    p.parent.mkdir(parents=True, exist_ok=True)
    p.write_bytes(data)
    print("restored", p, len(data), data.count(b"gml_set_other"))
print("OK")
