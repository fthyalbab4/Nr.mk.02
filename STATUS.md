# STATUS — Event System + Actions (2026-10-29)

## Done
- [x] Event order, Alarm, other, KeyPress/Release, Outside/Boundary/AnimEnd, User
- [x] Instance Creation Code (struct + runtime + decoder extract)
- [x] runtime_draw Pre → Draw → Post
- [x] Destroy queue after End Step
- [x] **Action Lists expanded**: ~131 named DnD actions in `execute_named_args`
  - New: set_variable, if_key/keyboard/pressed/released, draw_healthbar, replace_sprite,
    sound_fade, wait, comment, exit, another_room, set_caption, draw_arrow,
    set_timeline, timeline_pause, set_path, path_position/speed,
    create_object_motion/random, set_alarm_relative

## Still open
- Bitmask collision always-on when masks exist
- Device playtest
- 100% — **not claimed**

## Honesty
Action coverage is a broad subset of GM8 DnD, not the full library. Unmapped names still log UNMAPPED_ACTION.
