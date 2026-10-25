#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]

def patch_with(path: Path):
    if not path.exists():
        return
    t = path.read_text(errors="replace")
    if "Phase 8: snapshot instance indices" in t:
        print("with already", path)
        return
    old = """        if (rt) {
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
        }"""
    new = """        if (rt) {
            /* Phase 6: GM8 constants self=-1 other=-2 all=-3 noone=-4 */
            /* Phase 8: snapshot instance indices so create/destroy mid-with is safe */
            int target_id = (int)target_val;
            gm82_instance *prev_self = self;
            extern void gm82_gml_set_other(gm82_instance *o);
            extern gm82_instance *gm82_gml_get_other(void);
            gm82_instance *prev_other = gm82_gml_get_other();
            gm82_gml_set_other(prev_self);
            int snap_n = rt->instance_count;
            if (snap_n < 0) snap_n = 0;
            if (snap_n > 4096) snap_n = 4096;
            int snap_ids[4096];
            int n = 0;
            for (int i = 0; i < snap_n && n < 4096; i++) {
                gm82_instance *inst = &rt->instances[i];
                if (!inst->alive) continue;
                int match = 0;
                if (target_id == -3) match = 1;
                else if (target_id == -1) match = (inst == prev_self);
                else if (target_id == -2) match = (prev_other && inst == prev_other);
                else if (target_id == -4) match = 0;
                else match = (inst->id == target_id || inst->object_index == target_id);
                if (!match) continue;
                snap_ids[n++] = inst->id;
            }
            for (int s = 0; s < n; s++) {
                int id_want = snap_ids[s];
                gm82_instance *inst = NULL;
                for (int i = 0; i < rt->instance_count; i++) {
                    if (rt->instances[i].alive && rt->instances[i].id == id_want) {
                        inst = &rt->instances[i];
                        break;
                    }
                }
                if (!inst) continue;
                if (body_buf[0] == '{') gm82_gml_eval_block(rt, inst, body_buf);
                else gm82_gml_eval_stmt(rt, inst, body_buf);
            }
            gm82_gml_set_other(prev_other);
            gm82_gml_set_self(prev_self);
        }"""
    if old in t:
        path.write_text(t.replace(old, new, 1))
        print("with snap", path)
    else:
        print("with pattern miss", path)

def patch_gmk(path: Path):
    if not path.exists():
        return
    t = path.read_text(errors="replace")
    if "gm82_gmk_fill_summary" in t:
        print("gmk already", path)
        return
    helper = """
/* Phase 7: load summary for host/debug (honest partial loader) */
static void gm82_gmk_fill_summary(gm82_gmk_load_result *r) {
    if (!r || !r->ir) return;
    gm82_project_ir *ir = r->ir;
    snprintf(r->error, sizeof(r->error),
             "GMK partial ok sprites=%d bgs=%d rooms=%d objs=%d (materialize required)",
             ir->sprite_count, ir->background_count, ir->room_count, ir->object_count);
}
"""
    pos = t.find("gm82_gmk_load_result gm82_gmk_load_from_memory")
    if pos < 0:
        print("gmk load fn miss", path)
        return
    t = t[:pos] + helper + t[pos:]
    old_err = """    snprintf(r.error, sizeof(r.error),
             \"GMK loaded (partial) – materialize required before play\");
    return r;"""
    # try unicode dash and ascii hyphen variants
    for cand in [
        '    snprintf(r.error, sizeof(r.error),\n             "GMK loaded (partial) \u2013 materialize required before play");\n    return r;',
        '    snprintf(r.error, sizeof(r.error),\n             "GMK loaded (partial) - materialize required before play");\n    return r;',
    ]:
        if cand in t:
            t = t.replace(cand, "    gm82_gmk_fill_summary(&r);\n    return r;", 1)
            break
    else:
        # fuzzy: replace line containing materialize required before play
        lines = t.splitlines(True)
        out = []
        skip_next_return = False
        i = 0
        while i < len(lines):
            if "materialize required before play" in lines[i]:
                # drop this snprintf and following return r if part of block
                # replace whole snprintf multi-line
                # back up if previous was snprintf start
                if out and "snprintf" in out[-1]:
                    out.pop()
                if out and out[-1].strip().startswith("snprintf"):
                    out.pop()
                out.append("    gm82_gmk_fill_summary(&r);\n")
                i += 1
                continue
            out.append(lines[i])
            i += 1
        t = "".join(out)
    path.write_text(t)
    print("gmk", path)

for p in [ROOT / "app/src/main/cpp/src/gm82_gml_eval.c", ROOT / "app/src/main/cpp_backup/src/gm82_gml_eval.c"]:
    patch_with(p)
for p in [ROOT / "app/src/main/cpp/src/gm82_gmk_reader.c"]:
    patch_gmk(p)
print("APPLY_PHASE789_DONE")
