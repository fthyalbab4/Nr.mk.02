# MASTER_AGENT_PLAN

**آخر تحديث:** 2026-11-05

## Phase 0 — baseline freeze

- Commit freeze: see `BASELINE_REPORT.md`
- Governing roadmap: **`REALISTIC_GM82_ROADMAP.md`**
- Canonical core: `app/src/main/cpp/`
- Mirror gate: `python3 tools/verify_core_mirrors.py`

## Host status

| Item | Status |
|------|--------|
| Host P0 stubs + wrap | closed |
| AST break/continue loop_depth | fixed |
| Residual draw/list stubs | intentional no-ops |
| Device U2/U3/U5 | BLOCKED |
| is_100 | **false** |

## Process rules (enforced)

1. No bulk merge of stale Jules PRs onto main.
2. One small change + failing test first.
3. Mirrors must pass `verify_core_mirrors.py`.
4. No percentage claims without behavioral tests.
5. Next work priority: Phase 1–3 (mirrors, gap inventory, GML semantics: with/self/other, arrays, bytecode).

## Docs

- `BASELINE_REPORT.md` — freeze point
- `REALISTIC_GM82_ROADMAP.md` — full plan
- `GAPS_HONEST.md` — residual gaps
- `docs/DEVICE_BLOCKED.md` — device checklist
