# Runner step (2026-10-16) — complete, don't replace

## Changes
1. **`gm82_decoded_frame`**: `origin_x`, `origin_y` (zeroed on decode via memset).
2. **`gml_place_meeting` / `position_meeting` / `instance_place`**: world AABB uses sprite origin + image scale.
3. **`bbox_*`**: same world AABB.
4. **Solid collision in `gm82_runtime_step`**: origin-aware boxes + instance_count phase snapshot.

## Host
- `ASSEMBLE.sh` event order + scaled AABB: PASS

## Still open
- Decode real origin from GMK sprite resources (defaults 0)
- Default precise mask for all place_meeting
- Android device verification
