# TODO

## Done
- [x] Event system core
- [x] Creation Code path
- [x] Action Lists expansion (~130+ named handlers + 17 rare DnD closed 2026-11-04)
- [x] GM82Core extensions (move_towards_gravity, move_towards_jump, instance_create_depth_moving_ext, lengthdir 3D & geometric built-ins)
- [x] Deterministic runtime frame phase alignment
- [x] Bitmask collision in `gml_place_meeting` via `precise_mask_overlap` (already wired)
- [x] with() edge coverage (`tests/test_with_edges.c` — all/self/noone/destroy mid-with)
- [x] Reduce UNMAPPED for common rare DnD (step_towards/avoid, draw_ellipse/background, timeline_*, cd_*, webpage/info/video/snapshot)

## Device-blocked (cannot close without hardware)
- [ ] Device playtest mario + logcat (see `docs/DEVICE_BLOCKED.md`)
- [ ] OpenSLES hardware audio path on device
- [ ] Full NDK instrumentation on emulator/device

No checkbox without test or log.
