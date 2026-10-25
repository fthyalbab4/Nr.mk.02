# LOAD GOLDEN GAME REPORT — mario_bros.gmk (2026-10-25)

## Golden Game Verification: `mario_bros.gmk`

### 1. Materialization & Load Metrics (L1)
- **Path**: `app/src/main/assets/www/samples/mario_bros.gmk`
- **File Size**: 92,098 bytes
- **Decoded Sprites**: 47
- **Decoded Backgrounds**: 24
- **Decoded Objects**: 21
- **Decoded Rooms**: 2
- **First Room Index**: 0
- **Room Dimensions**: 1500 x 208
- **Initial Instance Count**: 181 instances materialized

### 2. Frame Loop, Input & Collision Execution (L2)
- **Player Instance Index**: 103 (Object ID 13 `obj_mario`)
- **Start Coordinates**: (1408.0, 112.0)
- **Frame Step Execution**: 60 steps executed without crash
- **Event Loop Order**: BeginStep → Alarm → Step → EndStep → PreDraw → Draw → PostDraw
- **Input Key Down**: Key 39 (VK_RIGHT) processed by `gm82_input`

### 3. Draw Path & Soft Render Blitting (L3)
- **Soft Render Status**: Success (`DRAW ok=1`)
- **Non-Black Lit Pixels**: 2,087 lit pixels blitted in buffer (Room rendered non-black)

### 4. Direct Execution Log Excerpt
```
LOADED app/src/main/assets/www/samples/mario_bros.gmk bytes=92098
DECODE sprites=47 bgs=24 objs=21 rooms=2
ROOM 0 inst=181 w=1500 h=208
PLAYER_IDX 103 obj=13 start=(1408.0,112.0)
STEPS 60 frame=60 moved=0 delta=(0.0,0.0)
DRAW ok=1 lit=2087
SAVE_LOAD_TEST ok
PIPELINE_OK
```

### 5. Verification Status
- **Result**: PASS
- **Verified By**: `tools/run_host_pipeline.sh` / `./build_host/pipeline_min`
