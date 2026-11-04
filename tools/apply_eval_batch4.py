#!/usr/bin/env python3
"""Insert batch4 eval dispatches before try_stub in all eval mirrors."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[1]
DISPATCH = """
        /* batch4 dispatch — host impls before try_stub */
        if (strcmp(id, "ds_bag_create") == 0) { *out = gml_ds_bag_create(); return true; }
        if (strcmp(id, "ds_bag_destroy") == 0) { *out = gml_ds_bag_destroy(arg); return true; }
        if (strcmp(id, "ds_bag_clear") == 0) { *out = gml_ds_bag_clear(arg); return true; }
        if (strcmp(id, "ds_bag_size") == 0) { *out = gml_ds_bag_size(arg); return true; }
        if (strcmp(id, "ds_bag_empty") == 0) { *out = gml_ds_bag_empty(arg); return true; }
        if (strcmp(id, "ds_bag_add") == 0) { *out = gml_ds_bag_add(arg, nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "ds_bag_remove") == 0) { *out = gml_ds_bag_remove(arg, nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "ds_bag_grab") == 0) { *out = gml_ds_bag_grab(arg); return true; }
        if (strcmp(id, "ds_bag_quick") == 0) { *out = gml_ds_bag_quick(arg); return true; }
        if (strcmp(id, "bigchoose_clear") == 0) { *out = gml_bigchoose_clear(); return true; }
        if (strcmp(id, "bigchoose") == 0) { *out = gml_bigchoose(arg); return true; }
        if (strcmp(id, "bigchoose_weighted") == 0) { *out = gml_bigchoose_weighted(arg, nargs>=2?args[1]:1); return true; }
        if (strcmp(id, "bigchoose_get") == 0) { *out = gml_bigchoose_get(); return true; }
        if (strcmp(id, "bigchoose_weighted_get") == 0) { *out = gml_bigchoose_weighted_get(); return true; }
        if (strcmp(id, "choose_weighted") == 0) {
            *out = gml_choose_weighted(arg, nargs>=2?args[1]:1, nargs>=3?args[2]:0, nargs>=4?args[3]:1);
            return true;
        }
        if (strcmp(id, "event_alarm") == 0) { *out = gml_event_alarm(arg); return true; }
        if (strcmp(id, "event_beginstep") == 0) { *out = gml_event_beginstep(); return true; }
        if (strcmp(id, "event_step") == 0) { *out = gml_event_step(); return true; }
        if (strcmp(id, "event_endstep") == 0) { *out = gml_event_endstep(); return true; }
        if (strcmp(id, "event_draw") == 0) { *out = gml_event_draw(); return true; }
        if (strcmp(id, "event_trigger") == 0) { *out = gml_event_trigger(arg); return true; }
        if (strcmp(id, "date_get_moon_phase") == 0) { *out = gml_date_get_moon_phase(); return true; }
        if (strcmp(id, "date_is_easter") == 0) { *out = gml_date_is_easter(); return true; }
        if (strcmp(id, "datetime_current_filename") == 0) { *out = gml_datetime_current_filename(); return true; }
        if (strcmp(id, "dss_list_create") == 0) { *out = gml_dss_list_create(); return true; }
        if (strcmp(id, "dss_map_create") == 0) { *out = gml_dss_map_create(); return true; }
        if (strcmp(id, "dss_grid_create") == 0) { *out = gml_dss_grid_create(arg, nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "dss_stack_create") == 0) { *out = gml_dss_stack_create(); return true; }
        if (strcmp(id, "dss_queue_create") == 0) { *out = gml_dss_queue_create(); return true; }
        if (strcmp(id, "dss_priority_create") == 0) { *out = gml_dss_priority_create(); return true; }
        if (strcmp(id, "dss_destroy") == 0) { *out = gml_dss_destroy(arg); return true; }
        if (strcmp(id, "dss_get_type") == 0) { *out = gml_dss_get_type(arg); return true; }
        if (strcmp(id, "dslist") == 0) { *out = gml_dslist(); return true; }
        if (strcmp(id, "dsmap") == 0) { *out = gml_dsmap(); return true; }
"""
NEEDLE = "        if (gm82_gm82core_try_stub(id, out)) return true;"
for rel in [
    "app/src/main/cpp/src/gm82_gml_eval.c",
    "app/src/main/cpp_backup/src/gm82_gml_eval.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_eval.c",
]:
    p = ROOT / rel
    if not p.exists():
        print("skip", rel); continue
    t = p.read_text(encoding="utf-8", errors="replace")
    if "batch4 dispatch" in t:
        print("already", rel); continue
    if NEEDLE not in t:
        print("needle miss", rel); continue
    p.write_text(t.replace(NEEDLE, DISPATCH + "\n" + NEEDLE, 1), encoding="utf-8")
    print("patched", rel)
print("OK")
