from pathlib import Path
p = Path("app/src/main/cpp/src/gm82_runtime.c")
t = p.read_text()
if "Skip slots that are placeholder" in t:
    print("SKIP_EMPTY_ALREADY")
    raise SystemExit(0)
old = """        const gm82_decoded_instance *src = &room->instances[i];
        gm82_instance *inst = gm82_runtime_instance_create(rt, src->object_index, (double)src->x, (double)src->y);"""
new = """        const gm82_decoded_instance *src = &room->instances[i];
        if (rt->objects && src->object_index >= 0 && src->object_index < rt->objects->count) {
            const char *on = rt->objects->items[src->object_index].name;
            if (!on || !on[0]) continue;
        }
        gm82_instance *inst = gm82_runtime_instance_create(rt, src->object_index, (double)src->x, (double)src->y);"""
if old not in t:
    # already applied without comment
    if "if (!on || !on[0]) continue" in t:
        print("SKIP_EMPTY_ALREADY")
    else:
        print("SKIP_EMPTY_MISS")
else:
    p.write_text(t.replace(old, new, 1))
    print("SKIP_EMPTY_OK")
