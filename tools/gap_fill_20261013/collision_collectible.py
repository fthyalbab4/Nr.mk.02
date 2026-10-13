from pathlib import Path
p = Path("app/src/main/cpp/src/gm82_events.c")
t = p.read_text()
if "Collectible heuristic" in t:
    print("COLLISION_ALREADY")
    raise SystemExit(0)
old = """void gm82_events_fire_collision(gm82_runtime *rt, gm82_instance *inst, gm82_instance *other) {
    if (!rt || !inst || !rt->objects) return;
    int32_t oi = inst->object_index;
    if (oi < 0 || oi >= rt->objects->count) return;
    const gm82_decoded_object *obj = &rt->objects->items[oi];
    (void)other;
    for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
        const gm82_decoded_event *ev = &obj->events[e];
        if (ev->main_type != 4) continue;
        if (!ev->action_name0[0]) continue;
        gm82_action_execute_named(rt, inst, ev->action_name0);
    }
}"""
new = """void gm82_events_fire_collision(gm82_runtime *rt, gm82_instance *inst, gm82_instance *other) {
    if (!rt || !inst || !rt->objects) return;
    int32_t oi = inst->object_index;
    if (oi < 0 || oi >= rt->objects->count) return;
    const gm82_decoded_object *obj = &rt->objects->items[oi];
    for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
        const gm82_decoded_event *ev = &obj->events[e];
        if (ev->main_type != 4) continue;
        if (ev->action_name0[0])
            gm82_action_execute_named(rt, inst, ev->action_name0);
        if (ev->code_snippet && ev->code_snippet[0]) {
            gm82_gml_set_self(inst);
            gm82_gml_eval_block(rt, inst, ev->code_snippet);
        }
    }
    if (other && other->alive && rt->objects) {
        int32_t oj = other->object_index;
        if (oj >= 0 && oj < rt->objects->count) {
            const gm82_decoded_object *o2 = &rt->objects->items[oj];
            const char *n = o2->name;
            int is_pick = n && (strstr(n, "moneda") || strstr(n, "coin") || strstr(n, "bonus") ||
                               strstr(n, "estrella") || strstr(n, "item"));
            for (int e = 0; e < o2->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                const char *cs = o2->events[e].code_snippet;
                if (cs && strstr(cs, "instance_destroy")) { is_pick = 1; break; }
            }
            if (is_pick && !other->solid) other->alive = 0;
        }
    }
}"""
if old not in t:
    print("COLLISION_MISS")
else:
    p.write_text(t.replace(old, new, 1))
    print("COLLISION_OK")
