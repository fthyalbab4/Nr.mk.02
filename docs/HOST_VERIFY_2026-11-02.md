# Host verification — 2026-11-02

## Command
```bash
bash tools/run_host_pipeline.sh
./build_host/pipeline_min app/src/main/assets/www/samples/mario_bros.gmk 120
```

## Result: SUMMARY ok=4 fail=0

| Sample | bytes | sprites | objs | rooms | inst | moved | draw |
|--------|------:|--------:|-----:|------:|-----:|------:|-----:|
| mario_bros.gmk | 92098 | 47 | 21 | 2 | 181 | yes | ok |
| plataformas.gmk | 29058 | 42 | 7 | 4 | 60 | yes | ok |
| shooter.gmk | 224588 | 14 | 12 | 2 | 308 | yes | ok |
| zelda.gmk | 213981 | 49 | 11 | 3 | 40 | yes | ok |

### mario_bros detail (120 frames)
```
LOADED bytes=92098
DECODE sprites=47 bgs=24 objs=21 rooms=2
ROOM 0 inst=181 w=1500 h=208
PLAYER_IDX 175 obj=6 start=(32.0,112.0)
STEPS 120 frame=120 moved=1 delta=(128.0,58.0)
DRAW ok=1 lit=2241
SAVE_LOAD_TEST ok
PIPELINE_OK
```

## Events
- `app/.../gm82_events.c` ~33KB, `gml_set_other` ×4
- `BSF/.../gm82_events.c` ~33KB, `gml_set_other` ×4

## P1 change this session
- `StudioNativeBridge.keyDown/keyUp/key` → `nativeRuntimeKey` so NES on-screen controls can inject VK codes from WebView.
