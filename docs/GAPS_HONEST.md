# GAPS_HONEST — Nr.mk.02 (2026-10-26)

## CLOSED / landed
| Area | Evidence |
|------|----------|
| Host pipeline 4 samples | ok=4 fail=0 |
| Sound redefinition fixed | single weak mixer path |
| Materialize stderr stats | GM82_MATERIALIZE_STATS |
| Motion/mp_grid from anvil table | APPLY_REA_MOTION |
| REA candidate list | REA_ANVIL_CANDIDATES_REVIEW.md |
| **gm82core name coverage (batch-all)** | `gm82_gm82core_try_stub` + ~30 real + ~134 stubs on main (`49be3184`) |
| Source merge batch1/2 | instance_create_moving, math/strings helpers |

## OPEN (real — need device or FAIL logs)
| ID | Gap | Blocker |
|----|-----|--------|
| O1 | Device APK logcat on samples/cloud | **device** |
| O2 | Complex GMK materialize edge cases | FAIL logs from O1 |
| O3 | PCM + OpenSL real audio | **device** |
| O4 | Hardware GLES FBO | only if soft FBO fails on device |
| O5 | Stub→real for high-use extension names | needs FAIL which builtin |
| O6 | Full parent chain object_is_child_of | object.parent data |
| O7 | Deep REA→C for Delphi-only paths | optional until FAIL |

## Explicit non-claims
- Host ok ≠ device parity ≠ Windows GM8.2 100%.
- Stubs return 0: call does not crash; behavior is **not** full gm82core.
- No percentage inflation.

## Next action (only useful path)
1. Build APK from current main.
2. Run one sample + one cloud game.
3. Paste logcat / first missing or wrong behavior.
4. Patch that FAIL only.
