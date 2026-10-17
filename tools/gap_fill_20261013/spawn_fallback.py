from pathlib import Path
p = Path("app/src/main/cpp/src/gm82_runtime.c")
t = p.read_text()
needle = "    gm82_events_fire_create_all(rt);\n    return true;\n}"
insert = """    gm82_events_fire_create_all(rt);
    {
        int has_player = 0;
        for (int i = 0; i < rt->instance_count; i++) {
            if (!rt->instances[i].alive || !rt->objects) continue;
            int32_t oi = rt->instances[i].object_index;
            if (oi < 0 || oi >= rt->objects->count) continue;
            const char *n = rt->objects->items[oi].name;
            if (!n) continue;
            if (strstr(n, "player") || strstr(n, "Player") || strstr(n, "mario") ||
                strstr(n, "link") || strstr(n, "fantasma") || strstr(n, "heroe")) {
                has_player = 1; rt->view_follow_object = oi; break;
            }
        }
        if (!has_player && rt->objects) {
            for (int oi = 0; oi < rt->objects->count; oi++) {
                const char *n = rt->objects->items[oi].name;
                if (!n) continue;
                if (strstr(n, "link") || strstr(n, "fantasma") || strstr(n, "player") ||
                    strstr(n, "mario") || strstr(n, "Player")) {
                    double sx = rt->room_width > 80 ? rt->room_width * 0.35 : 64;
                    double sy = rt->room_height > 80 ? rt->room_height * 0.35 : 64;
                    gm82_runtime_instance_create(rt, oi, sx, sy);
                    rt->view_follow_object = oi; break;
                }
            }
            gm82_events_fire_create_all(rt);
        }
    }
    return true;
}"""
if "has_player" in t:
    print("SPAWN_ALREADY")
elif needle in t:
    p.write_text(t.replace(needle, insert, 1))
    print("SPAWN_FALLBACK_OK")
else:
    print("SPAWN_FALLBACK_MISS")
