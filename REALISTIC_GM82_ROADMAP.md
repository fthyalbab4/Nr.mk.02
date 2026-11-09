# REALISTIC_GM82_ROADMAP

Governing plan for near-parity with Game Maker 8.2.
**Goal is provable compatibility**, not function-count or shallow test green.

Adopted: 2026-11-05  ·  Host residual closeout: 2026-11-07

## Status summary

| Phase | Status |
|-------|--------|
| 0 Baseline | DONE |
| 1 Mirrors | DONE (108 files PASS) |
| 2 Gap inventory | DONE baseline |
| 3 GML semantics | HOST DONE (with, arrays 1d+sparse2d, match_*) |
| 4 Event cycle | HOST BEHAVIORAL DONE + Draw GUI order |
| 5 Movement/collision | HOST AABB + precise mask + place_meeting_precise |
| 6 Resources/import | HOST DONE |
| 7 Draw/input/sound | HOST DONE; device blocked |
| 8 Game corpus | HOST 4/4 samples |
| 9 PR triage | DONE zero bulk merges |
| 10 Gates | HOST G1–G10 PASS + test_full_suite |
| 11 Residual | HOST DONE |
| G13 Portable | NOT_RUN |
| G14 Device | DEVICE_BLOCKED |

```
is_100: false
claim_100_percent_allowed: false
```

## Definition of near GM82 (unchanged)
Load real GMK, full event cycle, self/other/with, movement/collision, event order, corpus games, tri-mirror parity, replayable tests, no bulk PR merges.

## Phase notes (host verified 2026-11-07)
- Phase 3: sparse 2D + match_* API closed with behavioral tests
- Phase 5: precise bitmask/scaled + place_meeting_precise synthetic sprites
- Phase 7: draw GUI order + host fingerprint (not Portable hashes)
- Phase 11: Makefile gates noexec-safe; all residual host suites gated

## External blockers
- G13: need GM8.2 Portable reference logs
- G14: need Android device OpenSLES + WebView JNI playtest

## Workflow (still enforced)
failing test → small implement → mirror sync → gates → small PR. No bulk merges. No 100% claims without Portable+device proof.
