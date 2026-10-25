#!/usr/bin/env python3
from pathlib import Path
import zlib, base64
ROOT = Path(__file__).resolve().parents[2]
B = ROOT / "tools/gap_fill_20261013/blobs"
parts = sorted(B.glob("jni_java_bridge.zlib.b64.part*"))
if not parts:
    single = B / "jni_java_bridge.zlib.b64"
    if single.exists():
        raw = single.read_text().strip()
    else:
        print("missing jni blob parts")
        raise SystemExit(0)
else:
    raw = "".join(p.read_text().strip() for p in parts)
data = zlib.decompress(base64.b64decode(raw))
dest = ROOT / "app/src/main/cpp/src/gm82_jni_java_bridge.c"
dest.write_bytes(data)
print("jni", len(data), b"materialize_get_objects" in data)
print("APPLY_JNI_DONE")
