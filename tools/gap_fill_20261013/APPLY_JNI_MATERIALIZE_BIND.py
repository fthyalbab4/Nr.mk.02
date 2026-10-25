#!/usr/bin/env python3
from pathlib import Path
import zlib, base64
ROOT = Path(__file__).resolve().parents[2]
blob = ROOT / "tools/gap_fill_20261013/blobs/jni_java_bridge.zlib.b64"
dest = ROOT / "app/src/main/cpp/src/gm82_jni_java_bridge.c"
if not blob.exists():
    print("missing jni blob")
else:
    data = zlib.decompress(base64.b64decode(blob.read_text().strip()))
    dest.write_bytes(data)
    print("jni", len(data), b"materialize_get_objects" in data)
print("APPLY_JNI_DONE")
