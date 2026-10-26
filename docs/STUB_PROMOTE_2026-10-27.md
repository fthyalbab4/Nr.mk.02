# Stub promote (2026-10-27)

## Bugfix
`room_find` / `sprite_find` were in `GM82CORE_STUBS` **and** had real implementations — stub ran first and returned 0. Removed from stub table.

## Promoted to real (additive)
- window_has_focus → 1
- file_text_writelf → append line + newline
- ds_map_set → ds_map_add
- instance_create_depth → create + set depth
- string_starts_with / ends_with
- move_wrap (2-arg wrap at 640x480)
- object_find by materialize object name
- background/sound/font/path/timeline_find → -1 until name tables exist
- url_open → no-op 0

## Still stubs (need device/FAIL or heavy systems)
code_*, ds_bag_*, complex draw_*, registry_*, match_*, execute_program_*
