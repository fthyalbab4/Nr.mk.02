# CRITICAL_PATCH_2026-10-30.md

## Status
A bad partial upload overwrote `app/src/main/cpp/src/gm82_events.c`.
**Restore immediately** from blob SHA `82086b0c30f7217a94fff5dcf7ce6f8d0f5bba9f` (last known good full file) then apply the two P0 diffs below.

Broken commits to be aware of:
- `29e973384449617b3ae4cbff286bc2b359f77059` (PLACEHOLDER)
- `c5b0195cefa185ad3b1a409ab31f690810c8c049` (truncated stub)

## Restore command idea
```bash
git show 82086b0c30f7217a94fff5dcf7ce6f8d0f5bba9f > app/src/main/cpp/src/gm82_events.c
# then apply diffs below
```

## P0 fix 1 — collision sets `other`

In `gm82_events_fire_collision` when evaluating `code_snippet`:

```c
if (ev->code_snippet && ev->code_snippet[0]) {
    gm82_gml_set_self(inst);
    if (other) gm82_gml_set_other(other);
    gm82_gml_eval_block(rt, inst, ev->code_snippet);
    gm82_gml_set_other(NULL);
}
```

## P0 fix 2 — unify alarm path in `gm82_runtime_step`

Replace the large inline alarm object-event loop with countdown +:

```c
gm82_events_fire_alarm(rt, inst, a);
if (rt->actions && inst->alive)
    gm82_actions_fire_alarm(rt, inst, rt->actions, a);
```

`gm82_events_fire_alarm` already walks parents and calls `gm82_alarm_fire_scripts`.

## Mirror sync required
Same changes in:
- `app/src/main/cpp_backup/src/`
- `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/`

## Verify
```bash
python3 run_full_verification.py
```
