# STATUS — 2026-10-17

## Host verified (real load)
| Sample | sprites | rooms | inst | draw lit | pipeline |
|--------|---------|-------|------|----------|----------|
| mario_bros | 47 | 2 | 181 | 2612 | OK |
| plataformas | 42 | 4 | 60 | 37476 | OK |
| shooter | 14 | 2 | 308 | 162470 | OK |
| zelda | 49 | 3 | 40 | 6343 | OK (moved) |

ASSEMBLE event/AABB: **PASS**

## Apply
```bash
git pull && git fetch --depth=80 origin
bash tools/gap_fill_20261013/apply_runner_patches.sh
python3 tools/gap_fill_20261013/port_file_rename_from_nr01.py
python3 tools/gap_fill_20261013/apply_complete_runner.py
bash tools/run_host_pipeline.sh
```

## Not done (honest)
- Full GML / all DnD
- Android device verification
- 100% game parity — **not claimed** (~37–40% weighted)
