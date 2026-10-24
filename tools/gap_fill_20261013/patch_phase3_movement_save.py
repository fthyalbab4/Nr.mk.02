#!/usr/bin/env python3
"""Phase 3: remove host hspeed inject; expand game save/load to multi-instance."""
from pathlib import Path
import re
ROOT = Path(__file__).resolve().parents[2]

for rel in ["tools/run_host_pipeline.sh", "build_host/host_pipeline_min.c"]:
    p = ROOT / rel
    if not p.exists():
        continue
    t = p.read_text()
    t2 = re.sub(
        r"[ \t]*/\* Softer movement inject.*?\n(?:.*\n){0,4}.*?hspeed\s*=\s*2\.0;",
        "        /* movement inject removed \u2014 keyboard + events only */\n",
        t,
        count=1,
        flags=re.S,
    )
    if t2 == t:
        t2 = t.replace(
            "rt.instances[pi].hspeed = 2.0;",
            "/* no hspeed inject */;",
        )
    p.write_text(t2)
    print("movement", rel)

bp = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
t = bp.read_text()
start = t.find("double gml_game_save")
if start >= 0 and "inst=%d,%f" not in t[start:start+800]:
    end2 = t.find("\n}\n", t.find("double gml_game_load")) + 3
    new = r'''double gml_game_save(const char *filename) {
    if (!filename || !filename[0]) filename = "nor_save.dat";
    FILE *f = fopen(filename, "w");
    if (!f) return 0;
    fprintf(f, "score=%f\nlives=%f\nhealth=%f\nroom=%d\n",
            g_score, g_lives, g_health, g_rt ? g_rt->current_room : 0);
    int n = 0;
    if (g_rt) {
        for (int i = 0; i < g_rt->instance_count && n < 64; i++) {
            if (!g_rt->instances[i].alive) continue;
            fprintf(f, "inst=%d,%f,%f,%f,%f,%d\n",
                    g_rt->instances[i].object_index,
                    g_rt->instances[i].x, g_rt->instances[i].y,
                    g_rt->instances[i].hspeed, g_rt->instances[i].vspeed,
                    g_rt->instances[i].id);
            n++;
        }
    }
    fprintf(f, "count=%d\n", n);
    fclose(f);
    return 1;
}

double gml_game_load(const char *filename) {
    if (!filename || !filename[0]) filename = "nor_save.dat";
    FILE *f = fopen(filename, "r");
    if (!f) return 0;
    char line[256];
    int loaded = 0;
    while (fgets(line, sizeof(line), f)) {
        double v, x, y, hs, vs;
        int oi, id;
        if (sscanf(line, "score=%lf", &v) == 1) g_score = v;
        else if (sscanf(line, "lives=%lf", &v) == 1) g_lives = v;
        else if (sscanf(line, "health=%lf", &v) == 1) g_health = v;
        else if (sscanf(line, "inst=%d,%lf,%lf,%lf,%lf,%d", &oi, &x, &y, &hs, &vs, &id) == 6) {
            if (g_rt) {
                for (int i = 0; i < g_rt->instance_count; i++) {
                    if (g_rt->instances[i].alive && g_rt->instances[i].id == id) {
                        g_rt->instances[i].x = x;
                        g_rt->instances[i].y = y;
                        g_rt->instances[i].hspeed = hs;
                        g_rt->instances[i].vspeed = vs;
                        loaded++;
                        break;
                    }
                }
            }
        }
    }
    fclose(f);
    return 1.0;
}

'''
    t = t[:start] + new + t[end2:]
    bp.write_text(t)
    print("save/load")
else:
    print("save/load skip")
print("PATCH_PHASE3_OK")
