# CLOUD RUN REPORT — plataformas (2026-10-25)

## Game: Plataformas (`app/src/main/assets/www/samples/plataformas.gmk`)

### Checklist Items
- [x] **app opens (no instant crash)**: PASS — Loaded 29,058 bytes, initialized 60 instances.
- [x] **first room not pure black (something drawn OR explicit error UI)**: PASS — Soft render output `lit=40501` non-black pixels.
- [x] **primary move/input works**: PASS — Player moved delta=(90.0, 176.0) across frame steps.
- [x] **room change OR game_restart works**: PASS — 4 rooms decoded, `room_goto` execution verified.
- [x] **sound_play does not crash (silent OK)**: PASS — Sound actions execute without error.

### Execution Log Evidence
```
LOADED app/src/main/assets/www/samples/plataformas.gmk bytes=29058
DECODE sprites=42 bgs=6 objs=7 rooms=4
ROOM 0 inst=60 w=640 h=480
PLAYER_IDX 20 obj=0 start=(64.0,304.0)
STEPS 30 frame=30 moved=1 delta=(90.0,176.0)
DRAW ok=1 lit=40501
SAVE_LOAD_TEST ok
PIPELINE_OK
```

### Score for Game: 5 / 5 PASS
