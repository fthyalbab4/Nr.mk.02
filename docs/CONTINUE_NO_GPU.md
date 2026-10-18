# Continue without GPU

## Latest
- path endaction + positionprevious
- fnames vars (path/room/offsets/keyboard)
- action_another_room → next room; action_change_object re-applies object defaults
- alarm0..11 get/set
- input.h decls fixed
- Host: **SUMMARY ok=4 fail=0**

## Apply chain
```bash
python3 tools/gap_fill_20261013/patch_fnames_builtin_vars.py
python3 tools/gap_fill_20261013/patch_path_endaction.py
python3 tools/gap_fill_20261013/patch_actions_rooms.py
python3 tools/gap_fill_20261013/patch_get_active_snapshot.py
bash tools/run_host_pipeline.sh
```
