# STATUS — updates on repository

## How to get **all** runner fixes into the C tree

After `git pull`, the **authoritative** path is the apply scripts (already on `main`):

```bash
git pull
bash tools/gap_fill_20261013/APPLY_ALL.sh
```

This runs, in order:
1. `restore_builtins_h.py` (header from history if needed)
2. `apply_runner_patches.sh` (origin collision diffs, events, …)
3. `port_file_rename_from_nr01.py`
4. `apply_complete_runner.py` (draw origin, image_index wrap, …)
5. `apply_string_args_room_clamp.py`
6. `apply_string_debug_gaps.py` (string args + debug/randomize)
7. optional `run_host_pipeline.sh`

**Why not only the .c files?** Large binary-sized C dumps exceeded the agent push limit; the **scripts encode the same changes** and are committed on `main`. Running `APPLY_ALL` writes the patched sources locally (and you can commit them from your machine).

## Verified when applied
- ASSEMBLE PASS
- Host pipeline 4/4 GMK decode+draw

Weighted ~40%. No 100% claim.
