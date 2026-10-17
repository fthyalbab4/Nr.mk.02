# STATUS — 2026-10-17

## Host
- Pipeline 4/4 GMK decode+room+draw
- ASSEMBLE PASS
- String args: file_exists/delete/rename, directory_rename, ini_open
- show_debug_message / show_message / randomize / random_set_seed
- Room bounds clamp

## Apply
```bash
git pull && git fetch --depth=80 origin
bash tools/gap_fill_20261013/apply_runner_patches.sh
python3 tools/gap_fill_20261013/port_file_rename_from_nr01.py
python3 tools/gap_fill_20261013/apply_complete_runner.py
python3 tools/gap_fill_20261013/apply_string_args_room_clamp.py
python3 tools/gap_fill_20261013/apply_string_debug_gaps.py
bash tools/run_host_pipeline.sh
```

## Still open
Full GML, full event fidelity, Android+audio device. ~40% weighted. No 100% claim.
