#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]

def patch_eval(path: Path):
    if not path.exists():
        return
    t = path.read_text(errors="replace")
    changed = False
    old = '''        if (rt) {
            int target_id = (int)target_val;
            for (int i = 0; i < rt->instance_count; i++) {
                gm82_instance *inst = &rt->instances[i];
                if (inst->alive && (inst->id == target_id || inst->object_index == target_id || target_id == -1 /* all */)) {
                    if (body_buf[0] == '{') gm82_gml_eval_block(rt, inst, body_buf);
                    else gm82_gml_eval_stmt(rt, inst, body_buf);
                }
            }
        }
        return true;
    }

    /* if (cond) body [else body] – supports single stmt or { block } */'''
    new = '''        if (rt) {
            /* Phase 6: GM8 constants self=-1 other=-2 all=-3 noone=-4 */
            int target_id = (int)target_val;
            gm82_instance *prev_self = self;
            extern void gm82_gml_set_other(gm82_instance *o);
            extern gm82_instance *gm82_gml_get_other(void);
            gm82_instance *prev_other = gm82_gml_get_other();
            gm82_gml_set_other(prev_self);
            for (int i = 0; i < rt->instance_count; i++) {
                gm82_instance *inst = &rt->instances[i];
                if (!inst->alive) continue;
                int match = 0;
                if (target_id == -3) match = 1;
                else if (target_id == -1) match = (inst == prev_self);
                else if (target_id == -2) match = (prev_other && inst == prev_other);
                else if (target_id == -4) match = 0;
                else match = (inst->id == target_id || inst->object_index == target_id);
                if (!match) continue;
                if (body_buf[0] == '{') gm82_gml_eval_block(rt, inst, body_buf);
                else gm82_gml_eval_stmt(rt, inst, body_buf);
            }
            gm82_gml_set_other(prev_other);
            gm82_gml_set_self(prev_self);
        }
        return true;
    }

    /* if (cond) body [else body] – supports single stmt or { block } */'''
    if "Phase 6: GM8 constants" not in t and old in t:
        t = t.replace(old, new, 1)
        changed = True
        print("with", path)
    needle = 'if (strcmp(name, "id") == 0) { *out = s ? (double)s->id : 0; return true; }'
    if "Phase 6: GM8 special values" not in t and needle in t:
        t = t.replace(needle, needle + '''
    /* Phase 6: GM8 special values */
    if (strcmp(name, "self") == 0) { *out = s ? (double)s->id : -1; return true; }
    if (strcmp(name, "other") == 0) {
        extern gm82_instance *gm82_gml_get_other(void);
        gm82_instance *o = gm82_gml_get_other();
        *out = o ? (double)o->id : -2;
        return true;
    }
    if (strcmp(name, "all") == 0) { *out = -3; return true; }
    if (strcmp(name, "noone") == 0) { *out = -4; return true; }''', 1)
        changed = True
        print("specials", path)
    if changed:
        path.write_text(t)

def patch_builtins(path: Path):
    if not path.exists():
        return
    t = path.read_text(errors="replace")
    if "gm82_gml_set_other" not in t:
        if "static gm82_instance *g_self = NULL;" in t:
            t = t.replace(
                "static gm82_instance *g_self = NULL;",
                "static gm82_instance *g_self = NULL;\nstatic gm82_instance *g_other = NULL;\nstatic int g_sound_playing[64];\nstatic int g_sound_playing_n = 0;",
                1,
            )
        idx = t.find("void gm82_gml_set_self")
        if idx >= 0:
            brace = t.find("{", idx)
            d = 0
            j = brace
            while j < len(t):
                if t[j] == "{":
                    d += 1
                elif t[j] == "}":
                    d -= 1
                    if d == 0:
                        j += 1
                        break
                j += 1
            t = t[:j] + "\nvoid gm82_gml_set_other(gm82_instance *o) { g_other = o; }\ngm82_instance *gm82_gml_get_other(void) { return g_other; }\n" + t[j:]
        print("other api", path)
    if "Phase 6: soft sound" not in t:
        weak = "__attribute__((weak)) double gml_sound_isplaying(double sound_index) { (void)sound_index; return 0; }\n__attribute__((weak)) double gml_sound_stop(double sound_index) { (void)sound_index; return 1; }"
        strong = '''
/* Phase 6: soft sound play tracking (host has no real audio device guarantee) */
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
'''
        if weak in t:
            t = t.replace(weak, strong, 1)
        else:
            t += strong
        print("sound", path)
    path.write_text(t)

def patch_actions(path: Path):
    if not path.exists():
        return
    t = path.read_text(errors="replace")
    old = '''    if (strcmp(name, "action_if_sound") == 0) {
        /* soft: always false unless sound system reports playing */
        return false;
    }'''
    new = '''    if (strcmp(name, "action_if_sound") == 0) {
        int sid = (argc >= 1) ? args[0] : 0;
        return gml_sound_isplaying((double)sid) != 0.0;
    }'''
    if old in t:
        path.write_text(t.replace(old, new, 1))
        print("if_sound", path)

for p in [ROOT / "app/src/main/cpp/src/gm82_gml_eval.c", ROOT / "app/src/main/cpp_backup/src/gm82_gml_eval.c"]:
    patch_eval(p)
for p in [ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c", ROOT / "app/src/main/cpp_backup/src/gm82_gml_builtins.c"]:
    patch_builtins(p)
for p in [ROOT / "app/src/main/cpp/src/gm82_actions.c"]:
    patch_actions(p)

h = ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h"
if h.exists():
    ht = h.read_text()
    if "gm82_gml_set_other" not in ht:
        if "void gm82_gml_set_self" in ht:
            ht = ht.replace("void gm82_gml_set_self(gm82_instance *self);", "void gm82_gml_set_self(gm82_instance *self);\nvoid gm82_gml_set_other(gm82_instance *o);\ngm82_instance *gm82_gml_get_other(void);")
        else:
            ht = ht.replace("#endif", "void gm82_gml_set_other(gm82_instance *o);\ngm82_instance *gm82_gml_get_other(void);\n#endif")
        h.write_text(ht)
        print("header")
print("APPLY_PHASE6_DONE")
