# GAPS_HONEST — Nr.mk.02

## CLOSED / measured on host
| Area | Evidence |
|------|----------|
| Host pipeline 4 GMK samples | `SUMMARY expected=4 ok=4 fail=0` |
| Engine suite | `RESULT OK` |
| Soft-render non-black frames | lit>0; DUMP_PPM sprites visible |
| Draw Pre/Post | `gm82_runtime_draw` |
| Outside/Boundary | in step |
| Room creation_code field | wired on goto_room when decoder fills it |
| Precise collision | `precise_instance_overlap` + frame bitmasks from decode; AABB if no mask |
| DnD extras | move_free, draw_self, draw_background, … via APPLY_P1 |
| `gml_ds_map_set_many` | implemented + header decl |

## OPEN (honest)
| Area | Notes |
|------|-------|
| Android device play | needs APK + device — out of current host focus |
| Rotated sprite pixel masks | angle≠0 falls back to AABB by design |
| String keys in ds_map | numeric keys only |
| Full Portable frame-diff corpus | not automated |
| All cloud-catalog GMKs | only 4 in-repo samples measured |
| HTML/WASM full play | needs native bridge |

**No 100% claim.**
