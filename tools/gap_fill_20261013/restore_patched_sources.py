#!/usr/bin/env python3
import base64, json, pathlib
ROOT = pathlib.Path(__file__).resolve().parents[2]
d = pathlib.Path(__file__).resolve().parent / "patched_sources_b64"
manifest = json.loads((d / "MANIFEST.json").read_text())
for entry in manifest:
    missing = [c for c in entry["chunks"] if not (d / c).exists()]
    if missing:
        print("SKIP incomplete", entry["path"], missing[:3])
        continue
    parts = [(d / c).read_text().strip() for c in entry["chunks"]]
    data = base64.b64decode("".join(parts))
    out = ROOT / entry["path"]
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(data)
    print("RESTORED", entry["path"], len(data))
print("RESTORE_PATCHED_SOURCES_OK")
