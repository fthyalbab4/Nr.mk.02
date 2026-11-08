# Phase 10 — Acceptance gates (host)

Verified 2026-11-07 via `make gates` + `verify_core_mirrors.py`.

| Gate | Status | Evidence |
|------|--------|----------|
| G1 Mirrors | PASS | verify_core_mirrors.py |
| G2 Build | PASS | libgm82_host.so |
| G5 Arrays | PASS | test_array_semantics, test_array_2d |
| G6 Events | PASS | test_event_order |
| G7 AABB | PASS | test_collision_movement |
| G7b Precise | PASS | test_precise_collision, test_place_meeting_precise |
| G8 Import | PASS | test_resource_import |
| G9 Draw/input/sound host | PASS | test_draw_input_sound |
| G9b Draw GUI/fingerprint | PASS | test_draw_gui_order, test_draw_fingerprint |
| G10 Corpus | PASS | test_game_corpus 4/4 |
| G13 Portable | NOT_RUN | no reference logs |
| G14 Device | DEVICE_BLOCKED | no Android device |

is_100: false — not a Portable certificate.
