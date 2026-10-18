# STATUS — parallel gaps

Host 4/4 moved=1.

```bash
python3 tools/gap_fill_20261013/patch_fnames_builtin_vars.py
python3 tools/gap_fill_20261013/patch_path_endaction.py
python3 tools/gap_fill_20261013/patch_actions_rooms.py
python3 tools/gap_fill_20261013/patch_parallel_gaps.py
bash tools/run_host_pipeline.sh
```
