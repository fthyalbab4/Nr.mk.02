#!/usr/bin/env python3
"""Apply real DnD if/else logic to gm82_actions.c (idempotent)."""
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
PATHS = [
    ROOT / "app/src/main/cpp/src/gm82_actions.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_actions.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_actions.c",
]

OLD_IF = '''    if (strcmp(name, "action_if_score") == 0 || strcmp(name, "action_if_lives") == 0 ||
        strcmp(name, "action_if_health") == 0 || strcmp(name, "action_if_dice") == 0) {
        return true;
    }'''

NEW_IF = '''    /* DnD conditionals — true = condition holds (op: 0== 1< 2> 3<= 4>= 5!=) */
    if (strcmp(name, "action_if_score") == 0 || strcmp(name, "action_if_lives") == 0 ||
        strcmp(name, "action_if_health") == 0) {
        double cur = 0.0;
        if (strcmp(name, "action_if_score") == 0) cur = gml_get_score();
        else if (strcmp(name, "action_if_lives") == 0) cur = gml_get_lives();
        else cur = gml_get_health();
        double thr = (argc >= 1) ? (double)args[0] : 0.0;
        int op = (argc >= 2) ? args[1] : 0;
        int ok;
        switch (op) {
            case 1: ok = (cur < thr); break;
            case 2: ok = (cur > thr); break;
            case 3: ok = (cur <= thr); break;
            case 4: ok = (cur >= thr); break;
            case 5: ok = (cur != thr); break;
            default: ok = (cur == thr); break;
        }
        return ok ? true : false;
    }
    if (strcmp(name, "action_if_dice") == 0) {
        int n = (argc >= 1 && args[0] > 0) ? args[0] : 2;
        return (rand() % n) == 0;
    }
    if (strcmp(name, "action_if_number") == 0) {
        int obj = (argc >= 1) ? args[0] : -1;
        int thr = (argc >= 2) ? args[1] : 0;
        int op = (argc >= 3) ? args[2] : 2;
        int cnt = 0;
        for (int i = 0; i < rt->instance_count; i++) {
            if (!rt->instances[i].alive) continue;
            if (obj < 0 || rt->instances[i].object_index == obj) cnt++;
        }
        switch (op) {
            case 1: return cnt < thr;
            case 2: return cnt > thr;
            case 3: return cnt <= thr;
            case 4: return cnt >= thr;
            case 5: return cnt != thr;
            default: return cnt == thr;
        }
    }
    if (strcmp(name, "action_else") == 0 || strcmp(name, "action_block_end") == 0 ||
        strcmp(name, "action_block_begin") == 0) {
        return true;
    }'''

OLD_STEP = '''void gm82_actions_fire_step(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table) {
    if (!rt || !self || !self->alive || !table || !rt->objects) return;
    if (self->object_index < 0 || self->object_index >= rt->objects->count) return;
    const char *oname = rt->objects->items[self->object_index].name;
    for (int i = 0; i < table->count; i++) {
        if (strcmp(table->objects[i].object_name, oname) != 0 &&
            strcmp(table->objects[i].object_name, "_global_actions") != 0)
            continue;
        for (int a = 0; a < table->objects[i].count; a++) {
            if (!self->alive) break;
            gm82_action_ref *ar = &table->objects[i].items[a];
            if (ar->event_type == 3 || ar->event_type == -1) {
                if (strcmp(ar->name, "action_set_hspeed") == 0 ||
                    strcmp(ar->name, "action_speed_horizontal") == 0 ||
                    strcmp(ar->name, "action_reverse_xdir") == 0 ||
                    strcmp(ar->name, "action_reverse_x") == 0 ||
                    strcmp(ar->name, "action_move") == 0) {
                    gm82_action_execute_ref(rt, self, ar);
                    if (!self->alive) break;
                }
            }
        }
    }
}'''

NEW_STEP = '''void gm82_actions_fire_step(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table) {
    if (!rt || !self || !self->alive || !table || !rt->objects) return;
    if (self->object_index < 0 || self->object_index >= rt->objects->count) return;
    const char *oname = rt->objects->items[self->object_index].name;
    for (int i = 0; i < table->count; i++) {
        if (strcmp(table->objects[i].object_name, oname) != 0 &&
            strcmp(table->objects[i].object_name, "_global_actions") != 0)
            continue;
        int skip = 0;
        for (int a = 0; a < table->objects[i].count; a++) {
            if (!self->alive) break;
            gm82_action_ref *ar = &table->objects[i].items[a];
            if (!(ar->event_type == 3 || ar->event_type == -1)) continue;
            const char *nm = ar->name;
            if (skip) {
                if (strncmp(nm, "action_if_", 10) == 0) continue;
                if (strcmp(nm, "action_else") == 0 || strcmp(nm, "action_block_end") == 0) {
                    skip = 0; continue;
                }
                continue;
            }
            if (strcmp(nm, "action_else") == 0) { skip = 1; continue; }
            bool ok = gm82_action_execute_ref(rt, self, ar);
            if (!self->alive) break;
            if (strncmp(nm, "action_if_", 10) == 0 && !ok) skip = 1;
        }
    }
}'''

for p in PATHS:
    if not p.exists():
        print("missing", p)
        continue
    t = p.read_text(errors="replace")
    changed = False
    if "action_if_number" not in t and OLD_IF in t:
        t = t.replace(OLD_IF, NEW_IF, 1)
        changed = True
        print("patched if", p)
    elif "action_if_number" in t:
        print("if already", p)
    else:
        print("if pattern missing", p)
    if "int skip = 0" not in t and OLD_STEP in t:
        t = t.replace(OLD_STEP, NEW_STEP, 1)
        changed = True
        print("patched step", p)
    elif "int skip = 0" in t:
        print("step already", p)
    else:
        print("step pattern missing", p)
    if changed:
        p.write_text(t)
print("APPLY_DND_IF_ELSE_DONE")
