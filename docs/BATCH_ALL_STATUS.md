# Batch-all status — DONE on main

**Commit:** materialize `49be3184` (and follow-ups)

What "complete the batch" meant for gm82core public `#define` names:
- Every remaining public name is either a **real C handler** or a **safe stub** via `gm82_gm82core_try_stub`.
- There is **no remaining list of gm82core define names** left to register in one more merge batch.

What it did **not** mean:
- Every stub behaves like Windows gm82core.
- Games run 100% on phone.

Repeating "finish all in one batch" for the same name-coverage path has nothing left to merge.
