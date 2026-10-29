# CRITICAL_PATCH_2026-10-30.md

## Status
A bad partial upload overwrote `app/src/main/cpp/src/gm82_events.c`.
Restore immediately from the patched local copies or from commit before
`29e973384449617b3ae4cbff286bc2b359f77059`.

Last known good blob SHA (pre-accident): `82086b0c30f7217a94fff5dcf7ce6f8d0f5bba9f`

## Required code changes (P0)

### 1) app/src/main/cpp/src/gm82_events.c — collision must set `other`

In `gm82_events_fire_collision`, when evaluating code_snippet:

```c
if (ev->code_snippet && ev->code_snippet[0]) {
    gm82_gml_set_self(inst);
    if (other) gm82_gml_set_other(other);
    gm82_gml_eval_block(rt, inst, ev->code_snippet);
    gm82_gml_set_other(NULL);
}
```

Without this, GML `other` is broken in collision events.

### 2) app/src/main/cpp/src/gm82_runtime.c — unify alarm dispatch

Replace the large inline alarm object-event loop with:

```c
rt->frame_phase = 2; /* Alarm */

for (int i = 0; i < rt->instance_count; i++) {
    gm82_instance *inst = &rt->instances[i];
    if (!inst->alive) continue;
    for (int a = 0; a < 12; a++) {
        if (inst->alarms[a] > 0) {
            inst->alarms[a]--;
            if (inst->alarms[a] == 0) {
                int room_before_alarm = rt->current_room;
                inst->alarms[a] = -1;
                gm82_events_fire_alarm(rt, inst, a);
                if (rt->actions && inst->alive)
                    gm82_actions_fire_alarm(rt, inst, rt->actions, a);
                if (rt->current_room != room_before_alarm) return;
            }
        }
    }
}
```

`gm82_events_fire_alarm` already walks parents and calls `gm82_alarm_fire_scripts`.

### 3) Mirror sync
Apply same changes to:
- `app/src/main/cpp_backup/src/`
- `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/`

### 4) After restore
Run:
```
python3 run_full_verification.py
```

## Local patched files available in agent sandbox
(If continuing in same session: /home/workdir/artifacts/nm_patch/)
