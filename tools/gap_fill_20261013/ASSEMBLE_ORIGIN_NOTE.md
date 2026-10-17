# Origin AABB runner patch

After `git pull`:

```bash
python3 tools/gap_fill_20261013/apply_runner_origin_aabb.py
bash tools/gap_fill_20261013/ASSEMBLE.sh
```

Or copy patched files from a worktree that already applied:
- `app/src/main/cpp/src/gm82_runtime.c` (collision phase snapshot + origin)
- `app/src/main/cpp/src/gm82_gml_builtins.c` (`inst_world_bbox` for place_meeting/bbox)

Header already has `origin_x`/`origin_y` on main.

Host: ASSEMBLE event order + scaled AABB PASS after patch.
