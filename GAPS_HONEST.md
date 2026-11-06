# GAPS_HONEST — verified status

## Verified / landed on host
- Host implementations for ds_bag_*, bigchoose family, event helpers, date/moon, registry/mouse no-ops, dss_* aliases in `gm82_batch4_extras.c`.
- Linker wrap intercepts try_stub for batch4 names.
- **AST executor loop_depth restored** (2026-11-05): `break`/`continue` outside any loop fail; loops pass `loop_depth+1`. Closes PR #322 regression. Tri-mirror synced.
- Bytecode path: loop_compile_context + GM82_BC_REPEAT_BREAK already present.
- **with / self / other behavioral suite** (2026-11-06): `tests/test_with_semantics.c` PASS on host lib
  - self / other resolution
  - with(all), with(noone), with(other)
  - with(object_index) targeting
  - nested with + self restore
- Evaluator `with` path already used instance-id snapshot and prev_self/prev_other restore.

## Remaining host (rare / non-blocking for MVP)
These are intentional no-ops until larger subsystems exist:
- `draw_*_extra` / `draw_spotlight` / `draw_setb` / `draw_setf` — need real GL draw path
- `ds_list_filter` / `ds_list_foreach` / `ds_list_map` — need GML callback / script execution

They are already intercepted by the wrap and return 0; games that never call them are unaffected.

## Phase 1 — Mirror discipline (closed)
- `tools/verify_core_mirrors.py` PASS
- 54 src/*.c + 49 include/*.h + root key files identical across all three trees
- No content drift between canonical / cpp_backup / 01_BLACKSCREEN_FIX

## Phase 2 — Gap inventory (closed baseline)
- `GAP_INVENTORY.md` created with structured tables and confidence levels
- No parity percentage claimed

## Phase 3 — GML semantics (in progress)
- with/self/other: behavioral tests PASS (evaluator path)
- AST WITH still source→eval fallback (correct, not pure)
- **1D arrays + compound assign**: implemented + `test_array_semantics.c` PASS
- 2D arrays / match_* API: still open

## Device only (cannot close in CI/sandbox)
- **U2** playtest + logcat
- **U3** native SO load + keyDown bridge
- **U5** OpenSLES audio

## Phase 4 — Event cycle (host behavioral)
- `test_event_order.c` PASS: Create, Begin/Step/End order, Alarm0, Destroy, Draw visibility, User0, deferred destroy, IDLE phase
- Does **not** claim Portable reference log parity or Draw GUI

## Phase 5 — Movement / AABB (host behavioral)
- `test_collision_movement.c` PASS
- `place_meeting` fixed to honor scale/origin via `inst_world_bbox`
- Solid floor/wall resolution observed; high-speed basic anti-tunnel
- Pixel-precise / rotated sprites: not claimed

## Phase 6 — Resources / import (host behavioral)
- `test_resource_import.c` PASS
- 4/4 sample GMK load + object/room decode
- GMZ `..` path traversal rejected
- Materialize → bind → step on mario sample
- Not claiming full decode completeness for all resource kinds

## Phase 7 — Draw / Input / Sound (host behavioral)
- `test_draw_input_sound.c` PASS (keyboard edges, mouse, software draw pixels, sound queue)
- OpenSLES device + WebView JNI input: still DEVICE_BLOCKED
- No reference image hashes claimed

## Phase 8 — Game corpus (host harness)
- `test_game_corpus.c` PASS on 4/4 samples (mario, plataformas, shooter, zelda)
- Metrics: load, objects/rooms, room0 instances, alive after 30 steps, draw
- **No** Portable reference comparison in this environment

## Phase 9 — PR triage
- See `PR_TRIAGE_PHASE9.md`
- No bulk merge of #356/#358/#361/#364/#365/#367 or mirror-sync floods
- Closed: #359 #360 #362 #368
- Extract backlog only: match_* API, unique builtins, CI wiring, device keyboard bridge

## Phase 10 — Acceptance gates
- Matrix: `PHASE10_ACCEPTANCE_GATES.md`
- **G1–G12 PASS** (mirrors, build, no dup symbols, behavioral suites, corpus, make gates, test_full_suite)
- G13/G14: NOT_RUN / DEVICE_BLOCKED

## Phase 11 — Host residual (post-roadmap)
- `PHASE11_HOST_RESIDUAL.md`
- G11/G12 closed via Makefile + full-suite link
- `make gates` green; G13/G14 still open

## Delivery gate
```
host_p0: true
ast_break_continue: fixed
with_self__other_behavioral: PASS
event_order_behavioral: PASS
collision_movement_behavioral: PASS
resource_import_behavioral: PASS
place_meeting_scale: fixed
residual_host_stubs: 10 (GL/callback only)
is_100: false
claim_100_percent_allowed: false
```
