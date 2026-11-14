#!/usr/bin/env python3
from pathlib import Path
import base64
parts = sorted(Path("tools/header_b64").glob("h*.b64"))
data = "".join(p.read_text().strip() for p in parts)
raw = base64.b64decode(data)
text = raw.decode("utf-8")
assert text.startswith("#ifndef GM82_GML_BUILTINS_H")
assert "gml_ds_grid_set_many" in text
for base in [
 "app/src/main/cpp/include",
 "app/src/main/cpp_backup/include",
 "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/include",
]:
    Path(base).mkdir(parents=True, exist_ok=True)
    Path(f"{base}/gm82_gml_builtins.h").write_bytes(raw)
    print("wrote", base, len(raw))
print("OK decode restore")
