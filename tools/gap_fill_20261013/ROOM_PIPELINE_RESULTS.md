# Room pipeline results (2026-10-13)

Host test: decode sprites/bgs/objects/rooms from GMK → bind → goto_room(0) → step → draw

```
mario_bros.gmk   sprites=47  objects=43 rooms=2  instances=181 ROOM_PIPELINE_OK
plataformas.gmk  sprites=42  objects=21 rooms=4  instances=60  ROOM_PIPELINE_OK
shooter.gmk      sprites=14  objects=23 rooms=2  instances=308 ROOM_PIPELINE_OK
zelda.gmk        sprites=49  objects=32 rooms=3  instances=39  ROOM_PIPELINE_OK
```

## Fix that made this work
`gm82_native_load_game` previously decoded only sprites+backgrounds and never
rooms/objects — so `goto_room` always failed (0 instances).

Now it also calls `gm82_decode_objects_from_gmk` + `gm82_decode_rooms_from_gmk`
and `gm82_runtime_goto_room(0)`.

## Still not proven
- Pixel-perfect gameplay vs Windows
- Full GML of each sample
- Device APK with rebuilt SO containing this C change
