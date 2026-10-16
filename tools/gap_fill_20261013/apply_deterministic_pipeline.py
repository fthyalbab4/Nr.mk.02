#!/usr/bin/env python3
"""Apply deterministic pipeline event firers + runtime phase freezes."""
from pathlib import Path

BLOCK = r"""
/* Fire object events matching main_type / event_numb (GM8: Step=3, Draw=8).
 * Snapshot iteration: caller freezes instance_count for the phase. */
static void fire_object_ev(gm82_runtime *rt, gm82_instance *inst,
                           int main_type, int event_numb) {
    if (!rt || !inst || !inst->alive || !rt->objects) return;
    if (inst->object_index < 0 || inst->object_index >= rt->objects->count) return;
    const gm82_decoded_object *obj = &rt->objects->items[inst->object_index];
    for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
        const gm82_decoded_event *ev = &obj->events[e];
        if (ev->main_type != main_type) continue;
        if (event_numb >= 0 && ev->event_numb != event_numb) continue;
        if (ev->action_name0[0])
            gm82_action_execute_named(rt, inst, ev->action_name0);
        if (ev->code_snippet && ev->code_snippet[0]) {
            gm82_gml_set_self(inst);
            gm82_gml_eval_block(rt, inst, ev->code_snippet);
        }
    }
}

void gm82_events_fire_begin_step_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_gml_set_runtime(rt);
    const int n = rt->instance_count;
    for (int i = 0; i < n; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        fire_object_ev(rt, inst, 3, 1);
    }
}

void gm82_events_fire_end_step_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_gml_set_runtime(rt);
    const int n = rt->instance_count;
    for (int i = 0; i < n; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        fire_object_ev(rt, inst, 3, 2);
    }
}

void gm82_events_fire_draw_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_gml_set_runtime(rt);
    const int n = rt->instance_count;
    for (int i = 0; i < n; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive || !inst->visible) continue;
        fire_object_ev(rt, inst, 8, 0);
    }
}

void gm82_events_fire_pre_draw_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_gml_set_runtime(rt);
    const int n = rt->instance_count;
    for (int i = 0; i < n; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        fire_object_ev(rt, inst, 8, 1);
    }
}

void gm82_events_fire_post_draw_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_gml_set_runtime(rt);
    const int n = rt->instance_count;
    for (int i = 0; i < n; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        fire_object_ev(rt, inst, 8, 2);
    }
}
"""

def patch_events():
    p = Path("app/src/main/cpp/src/gm82_events.c")
    t = p.read_text()
    if "fire_object_ev" in t:
        print("EVENTS_ALREADY"); return
    if "gm82_actions.h" not in t:
        t = t.replace('#include "gm82_events.h"\n',
                      '#include "gm82_events.h"\n#include "gm82_actions.h"\n#include "gm82_gml_eval.h"\n')
    stubs = "void gm82_events_fire_begin_step_all(gm82_runtime *rt) { (void)rt; }\nvoid gm82_events_fire_end_step_all(gm82_runtime *rt) { (void)rt; }"
    if stubs in t:
        t = t.replace(stubs, BLOCK, 1)
    elif "void gm82_events_fire_step_all" in t:
        t = t.replace("void gm82_events_fire_step_all", BLOCK + "\nvoid gm82_events_fire_step_all", 1)
    old = """void gm82_events_fire_step_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_gml_set_runtime(rt);
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;"""
    new = """void gm82_events_fire_step_all(gm82_runtime *rt) {
    if (!rt) return;
    gm82_gml_set_runtime(rt);
    const int n = rt->instance_count;
    for (int i = 0; i < n; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        fire_object_ev(rt, inst, 3, 0);"""
    if old in t:
        t = t.replace(old, new, 1)
    p.write_text(t)
    print("EVENTS_PATCHED")

def patch_events_h():
    p = Path("app/src/main/cpp/include/gm82_events.h")
    t = p.read_text()
    if "fire_draw_all" in t:
        print("EVENTS_H_ALREADY"); return
    t = t.replace(
        "void gm82_events_fire_end_step_all(gm82_runtime *rt);",
        "void gm82_events_fire_end_step_all(gm82_runtime *rt);\n"
        "void gm82_events_fire_pre_draw_all(gm82_runtime *rt);\n"
        "void gm82_events_fire_draw_all(gm82_runtime *rt);\n"
        "void gm82_events_fire_post_draw_all(gm82_runtime *rt);")
    p.write_text(t)
    print("EVENTS_H_OK")

def patch_runtime():
    p = Path("app/src/main/cpp/src/gm82_runtime.c")
    t = p.read_text()
    if "fire_pre_draw_all" in t and "n_move" in t:
        print("RUNTIME_ALREADY"); return
    if "DETERMINISTIC FRAME ORDER" not in t:
        t = t.replace(
            "void gm82_runtime_step(gm82_runtime *rt) {\n    if (!rt || !rt->running) return;",
            "void gm82_runtime_step(gm82_runtime *rt) {\n    if (!rt || !rt->running) return;\n"
            "    /* DETERMINISTIC FRAME ORDER: Begin->Alarm->Step->Move->Collision->End; Draw separate */")
    if "n_move" not in t:
        t = t.replace(
            "    gm82_events_fire_step_all(rt);\n\n    for (int i = 0; i < rt->instance_count; i++) {\n        gm82_instance *inst = &rt->instances[i];\n        if (!inst->alive) continue;\n\n        if (inst->speed != 0.0)",
            "    gm82_events_fire_step_all(rt);\n\n    const int n_move = rt->instance_count;\n    for (int i = 0; i < n_move; i++) {\n        gm82_instance *inst = &rt->instances[i];\n        if (!inst->alive) continue;\n\n        if (inst->speed != 0.0)")
    if "fire_pre_draw_all" not in t:
        t = t.replace(
            "bool gm82_runtime_draw(gm82_runtime *rt, uint8_t *rgba, int32_t buf_w, int32_t buf_h) {\n    if (!rt || !rgba || buf_w <= 0 || buf_h <= 0) return false;\n\n    for (int i = 0; i < buf_w * buf_h; i++) {",
            "bool gm82_runtime_draw(gm82_runtime *rt, uint8_t *rgba, int32_t buf_w, int32_t buf_h) {\n    if (!rt || !rgba || buf_w <= 0 || buf_h <= 0) return false;\n\n    gm82_events_fire_pre_draw_all(rt);\n\n    for (int i = 0; i < buf_w * buf_h; i++) {")
    if "fire_draw_all" not in t:
        t = t.replace(
            "    int order[GM82_MAX_INSTANCES];",
            "    gm82_events_fire_draw_all(rt);\n\n    int order[GM82_MAX_INSTANCES];")
    if "fire_post_draw_all" not in t:
        t = t.replace(
            "    return true;\n}\n\nvoid gm82_runtime_event_user",
            "    gm82_events_fire_post_draw_all(rt);\n    return true;\n}\n\nvoid gm82_runtime_event_user")
    p.write_text(t)
    print("RUNTIME_PATCHED")

if __name__ == "__main__":
    patch_events_h()
    patch_events()
    patch_runtime()
