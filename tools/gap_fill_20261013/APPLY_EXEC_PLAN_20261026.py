#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
b = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
if b.exists():
    t = b.read_text()
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
}
"""
    if old in t:
        t = t.replace(old, "/* Phase 6 soft sound stubs removed: use GM82_WEAK mixer path */\n", 1)
        b.write_text(t)
        print("sound dups removed")
    else:
        print("sound block absent or already fixed")

m = ROOT / "app/src/main/cpp/src/gm82_materialize.c"
if m.exists():
    t = m.read_text()
    if "GM82_MATERIALIZE_STATS" not in t:
        if "#include <stdio.h>" not in t:
            t = "#include <stdio.h>\n" + t
        marker = "    return ir->complete;\n}"
        stats = """    {
        int oc = 0, sc = 0, inst = 0;
        const gm82_decoded_object_list *mo = gm82_materialize_get_objects();
        const gm82_script_list *ms = gm82_materialize_get_scripts();
        if (mo) oc = mo->count;
        if (ms) sc = ms->count;
        for (int32_t ri = 0; ri < ir->room_count; ri++)
            inst += ir->rooms[ri].instance_count;
        fprintf(stderr,
            "GM82_MATERIALIZE_STATS sprites=%d bgs=%d rooms=%d objects=%d scripts=%d instances=%d complete=%d\n",
            ir->sprite_count, ir->background_count, ir->room_count, oc, sc, inst,
            ir->complete ? 1 : 0);
    }
    return ir->complete;
}"""
        idx = t.rfind(marker)
        if idx >= 0:
            t = t[:idx] + stats + t[idx + len(marker):]
            m.write_text(t)
            print("materialize stats added")
        else:
            print("materialize end marker missing")
    else:
        print("materialize stats already present")
print("APPLY_EXEC_PLAN_DONE")
