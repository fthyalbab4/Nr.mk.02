from pathlib import Path
p = Path("app/src/main/cpp/src/gm82_runtime.c")
t = p.read_text()
if "Destroy event main_type 1" in t:
    print("DESTROY_ALREADY"); raise SystemExit(0)
old = """void gm82_runtime_instance_destroy(gm82_runtime *rt, gm82_instance *inst) {
    (void)rt;
    if (inst) inst->alive = 0;
}"""
new = """void gm82_runtime_instance_destroy(gm82_runtime *rt, gm82_instance *inst) {
    if (!inst || !inst->alive) return;
    /* Destroy event main_type 1 */
    if (rt && rt->objects && inst->object_index >= 0 &&
        inst->object_index < rt->objects->count) {
        const gm82_decoded_object *obj = &rt->objects->items[inst->object_index];
        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
            const gm82_decoded_event *ev = &obj->events[e];
            if (ev->main_type != 1) continue;
            if (ev->action_name0[0])
                gm82_action_execute_named(rt, inst, ev->action_name0);
            if (ev->code_snippet && ev->code_snippet[0]) {
                gm82_gml_set_self(inst);
                gm82_gml_eval_block(rt, inst, ev->code_snippet);
            }
        }
    }
    inst->alive = 0;
}"""
if old not in t:
    print("DESTROY_MISS")
else:
    p.write_text(t.replace(old, new, 1))
    print("DESTROY_OK")
