#!/usr/bin/env python3
from pathlib import Path
import zlib, base64
ROOT = Path(__file__).resolve().parents[2]
B = ROOT / "tools/gap_fill_20261013/blobs"

def write_blob(blob_name, dest_rel):
    p = B / blob_name
    if not p.exists():
        print("missing", blob_name)
        return
    data = zlib.decompress(base64.b64decode(p.read_text().strip()))
    dest = ROOT / dest_rel
    dest.parent.mkdir(parents=True, exist_ok=True)
    dest.write_bytes(data)
    print("blob", dest_rel, len(data))

write_blob("materialize_c.zlib.b64", "app/src/main/cpp/src/gm82_materialize.c")
write_blob("gles_c.zlib.b64", "app/src/main/cpp/src/gm82_gles.c")
write_blob("materialize_h.zlib.b64", "app/src/main/cpp/include/gm82_materialize.h")

bu = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
if bu.exists():
    t = bu.read_text(errors="replace")
    if "ensure_mixer" not in t:
        block_path = Path(__file__).with_name("SOUND_MIXER_BLOCK.c")
        if block_path.exists() and "Phase 6: soft sound" in t:
            old = """/* Phase 6: soft sound play tracking (host has no real audio device guarantee) */
double gml_sound_play(double sound_index) {
    int id = (int)sound_index;
    if (g_sound_playing_n < 64) g_sound_playing[g_sound_playing_n++] = id;
    return 1;
}
double gml_sound_loop(double sound_index) {
    return gml_sound_play(sound_index);
}
double gml_sound_isplaying(double sound_index) {
    int id = (int)sound_index;
    for (int i = 0; i < g_sound_playing_n; i++)
        if (g_sound_playing[i] == id) return 1.0;
    return 0.0;
}
double gml_sound_stop(double sound_index) {
    int id = (int)sound_index;
    int w = 0;
    for (int i = 0; i < g_sound_playing_n; i++) {
        if (g_sound_playing[i] == id) continue;
        g_sound_playing[w++] = g_sound_playing[i];
    }
    g_sound_playing_n = w;
    return 1;
}
double gml_sound_stop_all(void) {
    g_sound_playing_n = 0;
    return 1;
}"""
            new = block_path.read_text()
            if old in t:
                if '#include "gm82_audio_mixer.h"' not in t:
                    t = t.replace('#include "gm82_gml_builtins.h"', '#include "gm82_gml_builtins.h"\n#include "gm82_audio_mixer.h"', 1)
                bu.write_text(t.replace(old, new, 1))
                print("builtins mixer")
            else:
                print("sound pattern miss")
        else:
            print("no block or marker")
    else:
        print("mixer already")

print("APPLY_CODE_REMAINING_DONE")
