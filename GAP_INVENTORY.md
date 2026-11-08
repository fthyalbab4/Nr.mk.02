# GAP_INVENTORY — GM82 compatibility status (2026-11-09)

Honest inventory of GM82-relevant gaps.
Status values: `missing` | `stub` | `partial` | `implemented` | `verified`
Confidence: `low` | `med` | `high`
Only raise to `verified` when implementation, wiring, and behavioral test exist; reference parity still requires a GM82 Portable comparison.

This is **not** a parity percentage. Device-only items stay blocked.

See also: `GAPS_HONEST.md`, `PHASE10_ACCEPTANCE_GATES.md`, `PR_TRIAGE_PHASE9.md`.

## Summary (2026-11-09)
- Phase 3: `with/self/other` and numeric 1D/2D arrays — host behavioral tests PASS. Arrays use one runtime-owned store shared by text and Native AST paths; limits are 64 arrays/runtime and 65,536 numeric elements or sparse cells/array.
- Phase 4: Begin Step / Timeline / Alarm ordering — regression tests PASS.
- Phase 5: scale-aware AABB `place_meeting` — host test PASS; scaled pixel-mask behavior remains partial.
- Phase 6: GMK import/corpus and GMZ traversal/security — host contracts PASS; the separate resource-import sample fixtures are unavailable and explicitly skipped. Four bundled games pass the corpus host pipeline.
- Phase 7: draw/input/sound host contracts — PASS; device audio and WebView JNI remain blocked.
- Phase 8: engine suite **47/47**, host pipeline **4/4**, Python reference/security **14/14**, and Full Core **18 gate entries** — all local gates PASS.
- Phase 9: `main` changes through locally fetched `e22f318f` have been reconciled and staged; mirror parity and verifier-negative tests PASS. Commit/push and GitHub CI for the new PR head remain pending.
- `match_*`: host behavioral API tests PASS; exact GM82 Portable semantics are not independently verified.

## Remaining gaps
- GM82 Portable reference comparison and authoritative semantics for array element types, 2D dimensions, event edge cases, and GML coercions.
- Pixel-precise collision for scaled instances (current scaled path falls back to AABB).
- Android/NDK and physical-device verification for JNI input/audio and device-only APIs.
- The dedicated resource-import GMK fixtures are absent in this sandbox; the test reports its fixture skip.
- GitHub Actions on the reconciled/pushed PR head; older PR checks do not validate this local head.

## Delivery gate
```
host_p0: true
is_100: false
claim_100_percent_allowed: false
```
