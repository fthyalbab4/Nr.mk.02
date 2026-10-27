# GAPS_HONEST — Nr.mk.02 (2026-10-27)

## CLOSED / landed
| Area | Evidence |
|------|----------|
| Host pipeline 4 samples | ok=4 fail=0 (historical) |
| gm82core name coverage | try_stub + batch-all |
| O6 parent chain | parent_index + walk |
| Stub shadow bug | room_find/sprite_find removed from stub table |
| Stub promote | window_has_focus, file_text_writelf, ds_map_set, instance_create_depth, string_starts/ends_with, move_wrap, object_find, … on `86179058` |

## OPEN (cannot fully close without device)
| ID | Gap |
|----|-----|
| O1 | APK install + logcat on real phone |
| O2 | Complex GMK edge materialize (needs FAIL) |
| O3 | Real PCM / OpenSL path on device |
| O4 | GLES FBO if soft fails on device |
| O5 | Remaining pure stubs: code_*, ds_bag_*, heavy draw_*, registry_*, match_* |

No 100% claims. Code path ≠ device acceptance.
