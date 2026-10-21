# Gap fill 2026-10-13

1. Headers already on main: `gm82_runtime.h` (xprevious/yprevious), `gm82_events.h` (begin/end step).
2. Run `bash tools/gap_fill_20261013/ASSEMBLE.sh` to write `gm82_runtime.c` and `gm82_events.c`.
3. Apply `gml_xprevious.patch` if not auto-applied.

Changes: GM8 event order, xprevious, scaled AABB. No fake percentages.
