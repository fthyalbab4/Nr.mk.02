from pathlib import Path
import base64
ROOT = Path(__file__).resolve().parents[2]
pairs = [
    ("gm82_events.c.b64", ROOT / "app/src/main/cpp/src/gm82_events.c"),
    ("gm82_runtime.c.b64", ROOT / "app/src/main/cpp/src/gm82_runtime.c"),
    ("gm82_events.h.b64", ROOT / "app/src/main/cpp/include/gm82_events.h"),
]
for b64name, dest in pairs:
    src = Path(__file__).with_name(b64name)
    if not src.exists():
        print("MISS", b64name)
        continue
    data = base64.b64decode(src.read_text().strip())
    if dest.exists():
        cur = dest.read_text()
        if dest.name == "gm82_runtime.c" and "DETERMINISTIC FRAME ORDER" in cur:
            print("SKIP", dest.name); continue
        if dest.name == "gm82_events.c" and "fire_object_ev" in cur:
            print("SKIP", dest.name); continue
        if dest.name == "gm82_events.h" and "fire_draw_all" in cur:
            print("SKIP", dest.name); continue
    dest.write_bytes(data)
    print("WROTE", dest.name, len(data))
