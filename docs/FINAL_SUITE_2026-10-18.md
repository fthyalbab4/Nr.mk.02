# FINAL_SUITE — 2026-10-18 (J7 audit)

## Commands
```bash
git pull
SKIP_PIPELINE=1 bash tools/gap_fill_20261013/APPLY_ALL.sh
bash tools/gap_fill_20261013/ASSEMBLE.sh
bash tools/run_host_pipeline.sh
```

## Grep checklist
| Check | Result |
|-------|--------|
| ROOM_BOUNDS in runtime | PASS |
| origin AABB (sox/soy) | PASS |
| str_args in eval | PASS |
| gm82_action_execute_named | PASS |
| events fire_* | PASS |
| gm82_runtime_get_active_snapshot | PASS after J7 fix (was link FAIL) |

## ASSEMBLE
```
PASS order Begin→Alarm→Step→Move→Collision→End
PASS xprevious/yprevious snapshot
PASS move hspeed applied
PASS alarm fired once after begin
PASS scaled AABB collision
PASS collision requires image_xscale=2
PASS xprevious updated each step
PASS create/destroy/draw event dispatch verified
RESULT: ALL PASS
ASSEMBLE_OK
```

## Host pipeline (after snapshot fix)
| Sample | sprites/rooms | inst | lit | moved | result |
|--------|---------------|------|-----|-------|--------|
| mario_bros | 47 / 2 | 181 | 2176 | 0 | PIPELINE_OK |
| plataformas | 42 / 4 | 60 | 41537 | 0 | PIPELINE_OK |
| shooter | 14 / 2 | 308 | 165817 | 0 | PIPELINE_OK |
| zelda | 49 / 3 | 40 | 7597 | 1 | PIPELINE_OK |
| SUMMARY | | | | | ok=4 fail=0 |

## Link failure found and fixed
- FAIL before: undefined reference to `gm82_runtime_get_active_snapshot`
- Fix: implement in runtime.c + declare in runtime.h; debug/randomize decls in builtins.h

## Not claimed
- Full GM8.2 parity
- Android device playtest (UNVERIFIED on device)
