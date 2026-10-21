from pathlib import Path
p = Path("app/src/main/cpp/src/gm82_runtime.c")
t = p.read_text()
changed = False
if "Object Alarm event" not in t:
    old = """                    gm82_alarm_fire_scripts(rt, inst, a);
                    inst->alarms[a] = -1;"""
    new = """                    gm82_alarm_fire_scripts(rt, inst, a);
                    /* Object Alarm event (main_type 2, event_numb = a) */
                    if (rt->objects && inst->object_index >= 0 &&
                        inst->object_index < rt->objects->count) {
                        const gm82_decoded_object *obj = &rt->objects->items[inst->object_index];
                        for (int e = 0; e < obj->event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                            const gm82_decoded_event *ev = &obj->events[e];
                            if (ev->main_type != 2 || ev->event_numb != a) continue;
                            if (ev->action_name0[0])
                                gm82_action_execute_named(rt, inst, ev->action_name0);
                            if (ev->code_snippet && ev->code_snippet[0]) {
                                gm82_gml_set_self(inst);
                                gm82_gml_eval_block(rt, inst, ev->code_snippet);
                            }
                        }
                    }
                    inst->alarms[a] = -1;"""
    if old in t:
        t = t.replace(old, new, 1)
        changed = True
        print("ALARM_EVT_OK")
    else:
        print("ALARM_EVT_MISS")
else:
    print("ALARM_EVT_ALREADY")
if "gm82_actions.h" not in t:
    t = t.replace('#include "gm82_events.h"\n',
                  '#include "gm82_events.h"\n#include "gm82_actions.h"\n#include "gm82_gml_eval.h"\n')
    changed = True
    print("INCLUDES_OK")
if changed:
    p.write_text(t)
