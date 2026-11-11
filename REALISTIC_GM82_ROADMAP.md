# REALISTIC_GM82_ROADMAP

Governing plan for near-parity with Game Maker 8.2.
**Goal is provable compatibility**, not function-count or shallow test green.

Adopted: 2026-11-05  ·  Baseline audit update: 2026-11-09

## Status summary

| Phase | Status | Evidence / Test Suite |
|-------|--------|-----------------------|
| 0 Baseline | DONE | `BASELINE_REPORT.md` (Commit `17a43b70`) |
| 1 Mirrors | DONE | `tools/verify_core_mirrors.py` (108 files strictly synced) |
| 2 Gap inventory | DONE | `GAPS_HONEST.md`, `GAP_INVENTORY.md` |
| 3 GML semantics | HOST DONE | `test_with_semantics`, `test_array_semantics`, `test_array_2d`, `test_match_api` |
| 4 Event cycle | HOST DONE | `test_event_order`, `test_draw_gui_order` (full lifecycle sequence verified) |
| 5 Movement/collision | HOST DONE | `test_collision_movement`, `test_precise_collision`, `test_place_meeting_precise` |
| 6 Resources/import | HOST DONE | `test_resource_import`, `test_gmk8_action_parse` |
| 7 Draw/input/sound | HOST DONE (device blocked) | `test_draw_input_sound`, `test_draw_fingerprint` |
| 8 Game corpus | HOST DONE (4/4 samples) | `test_game_corpus` (mario, plataformas, shooter, zelda) |
| 9 PR triage | DONE | Closed redundant PRs; zero unverified bulk merges on main |
| 10 Gates | HOST DONE | `gates` target in `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/Makefile` |
| 11 Residual | HOST DONE | Path fallback and action table free verified in `test_gmk8_action_parse` |
| G13 Portable | NOT_RUN | Requires Windows Portable GM8.2 golden traces / image hashes |
| G14 Device | DEVICE_BLOCKED | Requires physical Android device for OpenSLES and WebView touch JNI |

```
is_100: false
claim_100_percent_allowed: false
```

## Definition of near GM82 (unchanged)
1. Load real GMK/GM82 without converting to static images.
2. Full event lifecycle execution: Create, Begin Step, Alarm, Step, Collision, End Step, Pre-Draw, Draw, Post-Draw / Draw GUI, Destroy.
3. Matching semantics for `self`, `other`, `with`, `noone`, and `all`.
4. Matching movement, physics, and collision logic (AABB and precise mask).
5. Deterministic event ordering and result reproducibility.
6. Execution of sample games corpus (Mario, Shooter, Plataformas, Zelda).
7. Tri-mirror source parity without drift (`app/src/main/cpp`, `app/src/main/cpp_backup`, `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX`).
8. Replayable tests with recorded metrics.
9. Strict PR policy: no bulk unreviewed PR merges directly over main.

## Phase notes (updated 2026-11-09)
- Phase 1 & 11: `test_gmk8_action_parse.c` unified across all 3 mirrors with robust path fallback for host build/test independence.
- Phase 3: with/self/other scoping, sparse 2D arrays, and match_* API closed with behavioral test coverage.
- Phase 4: Full event lifecycle ordering verified; deferred destroy during Draw and mid-frame pool creation tested.
- Phase 5: AABB solid collisions, precise bitmask tests, and place_meeting_precise verified.
- Phase 7: Draw GUI order and input edge triggers verified on host; device audio and WebView touch remain device-blocked.
- Phase 10: Gates G1-G10 and `make test` passing cleanly on host.

## External blockers
- G13: Needs GM8.2 Portable reference logs for pixel-by-pixel visual hash comparison.
- G14: Needs Android physical device for OpenSLES audio buffer output and WebView JNI touch event latency validation.

## Workflow (strictly enforced)
Failing test → small implementation → mirror sync (`verify_core_mirrors.py`) → acceptance gates → small PR. No bulk merges. No 100% claims without Portable + device proof.
