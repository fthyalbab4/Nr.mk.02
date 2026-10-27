# Mario host run (2026-10-27)

## Ran here (sandbox host pipeline)
```
LOADED mario_bros.gmk bytes=92098
DECODE sprites=47 bgs=24 objs=21 rooms=2
ROOM 0 inst=181 w=1500 h=208
PLAYER_IDX 175 obj=6 start=(32.0,112.0)   # obj_minimario
STEPS 90 frame=90 moved=1 delta=(285.0,96.0)
DRAW ok=1 lit=2087
PIPELINE_OK
SUMMARY ok=4 fail=0
```

## Root causes found
1. **Event type mis-decode**: movement GML (`keyboard_check` / `place_free`) was stored as `main_type=0` (Create) so it ran once, not every Step.
2. **Wrong player instance in tests**: name match hit `obj_minimario_pierde` (death) instead of `obj_minimario`.
3. **Web sendKey** early-return if no iframe (separate fix).

## Fix
`gm82_reclass_step_like_events`: if snippet looks like Step logic and type is Create → set type to Step (3).

## Limits
Host injects VK_RIGHT only. Full touch UI still needs APK with sendKey fix + this decode fix.
