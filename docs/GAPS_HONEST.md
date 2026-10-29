# GAPS_HONEST — Nr.mk.02

## CLOSED / improved (2026-10-29 P0)
| Area | Evidence |
|------|----------|
| Host pipeline 4 samples | ok=4 fail=0 |
| `gm82_runtime_draw` Pre/Post-Draw | restored from cpp_backup into runtime |
| Outside / Boundary in step | wired before End Step |
| Room `creation_code` field | header + free + eval after Create on goto_room |
| Behavior lookup | object_name_prefix |
| Export scroll + native save | prior commits |
| Mario Step reclass | prior commits |

## OPEN (honest)
| Area | Notes |
|------|-------|
| Binary GMK harvest of creation_code | field ready; decoder does not yet extract from GMK chunks |
| Precise pixel masks | stub only; AABB active |
| Android device playable verification | needs APK + device |
| Full GML edge cases / action lists | partial |
| Portable corpus comparison via RE | maps exist under source/reverse-engineering |

**No 100% claim.**
