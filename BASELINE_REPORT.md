# BASELINE_REPORT — Phase 0 freeze (2026-11-05)

## Freeze marker

```text
commit: 6d4a9709aa9336e8e50a49f1f96846644f55520b
branch: main
phase: 0 (baseline freeze)
policy: no bulk merge of stale Jules PRs onto main
canonical core: app/src/main/cpp/
mirrors: app/src/main/cpp_backup/ , NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/
```

## What this report claims vs does not claim

| Claim type | Status |
|------------|--------|
| Documented host suite results in repo (STATUS.md, prior audits) | Recorded as **documented** |
| Re-run of full suite in this agent session | **NOT re-executed here** |
| Physical device playtest | **BLOCKED** |
| 100% GM82 parity | **FORBIDDEN** |

Any feature without a behavioral test is `unverified`, not complete.

## Documented host evidence (from repo docs, not re-run)

From `STATUS.md` / prior audit notes on main:

```text
host tests (documented):     PASS claimed — C engine suite, host pipeline 4 games
full-core tests (documented): PASS claimed — 01_BLACKSCREEN_FIX make test
games loaded (documented):   mario_bros, plataformas, shooter, zelda
games playable (host):       host pipeline PASS claimed; device playable = UNVERIFIED
```

## Known failures / blocked

```text
U2 playtest + logcat:        DEVICE_BLOCKED
U3 native SO + keyDown:      DEVICE_BLOCKED
U5 OpenSLES audio:           DEVICE_BLOCKED
residual host stubs (~10):   draw_*_extra, draw_spotlight, draw_setb/setf,
                             ds_list_filter/foreach/map (intentional no-ops)
```

## Unverified claims (must not be treated as done)

- Pixel-precise collision full parity with GM82
- Full event-order equivalence vs portable GM8.2 across all rooms
- Draw GUI / surface / blend parity with reference hashes
- Save/load round-trip across real games
- Match API (`match_*`) — PR #361 style claims need re-proof on main
- Any percentage > documented host smoke

## Open PR policy (Phase 0)

Do **not** merge these as whole branches onto current main:

- #356, #358, #361, #364, #365, #367, #370–#380 (and similar Jules bulk sync PRs)

Allowed process only:

1. Branch from **current** main
2. Extract **one** small function or fix
3. Failing test first
4. Implement
5. Run tests
6. Mirror sync via `tools/verify_core_mirrors.py`
7. Small PR

## Tools present for gates

- `tools/verify_core_mirrors.py` — tri-mirror src/include parity
- `tools/generate_baseline_report.py` — host audit + reference tests
- `tools/daily_audit_runner.py` — engine + verification + host pipeline + make test + JS
- `tools/gm82_audit_tool.py` — mirror check + suites (percent ranges in tool are estimates; do not treat as verified)

## Next phase (after freeze)

See `REALISTIC_GM82_ROADMAP.md`:
Phase 1 mirrors → Phase 2 gap inventory → Phase 3 GML semantics (self/other/with, arrays, bytecode) → Phase 4 events → collision → resources → draw/input → game corpus.
