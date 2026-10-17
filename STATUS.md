# STATUS — 2026-10-17 complete pass

## Host verified
- ASSEMBLE event/AABB: **PASS**
- `run_host_pipeline.sh` samples: **4/4 PIPELINE_OK** (mario, plataformas, shooter, zelda)
- Sprite origin decode + draw at origin
- place_meeting scale+origin+mask path
- image_index wrap via sprite groups
- file_rename / directory_rename from Nr.mk.01

## One-shot after pull
```bash
git pull && git fetch --depth=80 origin
bash tools/gap_fill_20261013/apply_runner_patches.sh
python3 tools/gap_fill_20261013/port_file_rename_from_nr01.py
python3 tools/gap_fill_20261013/apply_complete_runner.py
bash tools/run_host_pipeline.sh
```

## Honest remaining (not 100%)
- Full GML / DnD parity
- String-path args in evaluator for file_*
- Full GMK event table decode
- Android physical device verification
- Audio on device

Weighted parity still ~37–40%. **No 100% claim.**
