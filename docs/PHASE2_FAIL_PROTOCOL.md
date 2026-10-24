# Phase 2 — FAIL-driven fixes

When a real game/log names a missing symbol or crash:

1. Reproduce on host if GMK available.
2. Implement in existing cpp only.
3. Keep host pipeline ok=4 fail=0.
4. Commit `fix(<symbol>): <game>`.

No bulk stubs without a FAIL line.
