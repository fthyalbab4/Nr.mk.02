# Phase 8 — with() instance snapshot

## Landed
- `with()` snapshots matching instance ids before running the body.
- Re-resolves each id after potential create/destroy.

## Honest
Cap 4096 matches per with.
