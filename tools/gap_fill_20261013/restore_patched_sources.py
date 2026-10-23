#!/usr/bin/env python3
import base64, json, pathlib
ROOT = pathlib.Path(__file__).resolve().parents[2]
d = pathlib.Path(__file__).resolve().parent / "patched_sources_b64"
manifest = json.loads((d / "MANIFEST.json").read_text())
for entry in manifest:
    full = entry.get("full")
    if full and (d / full).exists():
        data = base64.b64decode((d / full).read_text().strip())
    elif entry.get("chunks"):
        missing = [c for c in entry["chunks"] if not (d / c).exists()]
        if missing:
            print("SKIP", entry["path"]); continue
        data = base64.b64decode("".join((d / c).read_text().strip() for c in entry["chunks"]))
    else:
        print("SKIP no data", entry["path"]); continue
    out = ROOT / entry["path"]
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(data)
    print("RESTORED", entry["path"], len(data))
print("RESTORE_PATCHED_SOURCES_OK")
