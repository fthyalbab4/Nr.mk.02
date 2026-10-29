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

## Replay regression fixed

كان تقرير الحركة السابق قد يختار أول اسم يحتوي `mario`، فيختار instance الكائن
`obj_minimario_pierde` عند `(1408,112)` بدل اللاعب الحقيقي `obj_minimario` عند
`(32,112)`. كائن الموت لا يملك كود حركة، لذلك ظهر `delta=(0,0)` رغم أن فك كود
الحركة كان سليمًا.

تم تصحيح الاختيار ليبحث عن `obj_minimario`/`obj_mario` الذي يحمل كود
`keyboard_check` و`hspeed`، وإضافة `test_mario_replay.c` إلى `ENGINE_SUITE`.
النتيجة بعد ضغط VK_RIGHT لمدة 30 إطارًا:

```text
mario replay: object=obj_minimario start_x=32.0 delta_x=105.0 frames=30
test_mario_replay PASS
```

كما أصبحت نتيجة `tools/run_host_pipeline.sh` للعبة ماريو:

```text
PLAYER_IDX 175 obj=6 start=(32.0,112.0)
STEPS 30 frame=30 moved=1 delta=(105.0,96.0)
```
