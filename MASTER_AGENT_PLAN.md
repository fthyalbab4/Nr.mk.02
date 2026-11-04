# MASTER_AGENT_PLAN

**آخر تحديث:** 2026-11-04 (batch4 host close final — STUBS shrunk + eval dispatch)

## P0 + host gaps — مكتمل على main

## batch4 final (2026-11-04)
- `gm82_batch4_extras.c`: real host impls (ds_bag_*, bigchoose_*, event_*, date, dss_*, registry/mouse no-ops, draw extras no-op)
- linker `--wrap=gm82_gm82core_try_stub` intercepts all handled names
- `gm82_gml_eval.c` restored from cpp_backup + batch4 multi-arg dispatch before try_stub
- `GM82CORE_STUBS` reduced to **10** residual only:
  draw_*_extra / draw_spotlight / draw_setb / draw_setf
  ds_list_filter / foreach / map (need GML callback support)
- main builtins/eval include cpp_backup; STUBS table updated in backup + 01_BLACKSCREEN_FIX

## المتبقي جهاز فقط
انظر `docs/DEVICE_BLOCKED.md` (U2/U3/U5)

**host_p0: true**
**remaining host stubs: 10**
**is_100: false** (device items open)
