# Host pipeline results (2026-10-13)

Command: `bash tools/run_host_pipeline.sh`

(After `bash tools/gap_fill_20261013/ASSEMBLE.sh` so event-order patches are in `.c` sources.)

```
LOADED mario_bros.gmk → STEPS 30 → DRAW ok=1 → PIPELINE_OK
LOADED plataformas.gmk → STEPS 30 → DRAW ok=1 → PIPELINE_OK
LOADED shooter.gmk → STEPS 30 → DRAW ok=1 → PIPELINE_OK
LOADED zelda.gmk → STEPS 30 → DRAW ok=1 → PIPELINE_OK
SUMMARY ok=4 fail=0
```

## What this proves
- GMK files readable from disk
- `gm82_runtime_step` runs 30 frames without crash
- `gm82_runtime_draw` returns success

## What this does NOT prove
- Full materialize of sprites/rooms/objects into instances
- Gameplay parity with Windows
- Device/APK behavior
