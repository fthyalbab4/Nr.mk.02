# Phase 9 — Open PR triage (2026-11-07)

Policy (unchanged): **no bulk merge** of stale/full Jules trees onto current main.
Allowed path only: branch from current main → extract one missing piece → failing test → implement → mirrors → small PR.

Local host baseline already covers Phases 0–8 behavioral gates (mirrors, with/arrays, events, collision, import, draw/input/sound queue, 4-game corpus).

## Historical targets from roadmap

| PR | Remote state | Decision |
|----|--------------|----------|
| #359 #360 #362 #368 | closed | No action |
| #356 | open | Do not merge whole PR — lifecycle/event order host-proven |
| #358 | open | Do not merge whole PR — mirrors already PASS |
| #361 | open | Do not merge — match_* API conflict needs design + small PR |
| #364 | open | Extract individual builtins only with failing tests |
| #365 | open | Do not merge whole PR — mario in host corpus |
| #367 | open | Split only if needed (CI / keyboard JNI / GMX / sandbox) |

## Additional open PRs (#370–#400)
Mostly tri-mirror sync / audit repeats. Treat as overlapping; no bulk merge.

## Explicit non-merges this session
No git merge of bulk PR trees. No force-push replacing canonical core.

## Extract backlog
1. match_* API single signature
2. Nested with edge cases if still failing
3. Keyboard JNI bridge (device)
4. CI wire verify_core_mirrors.py + corpus tests
5. Unique builtins one function + test at a time
