# BRANCH_AUDIT

Repo: `fthyalbab4/Nr.mk.02`  
Base: `origin/main`  
Scope: `app/src/main/cpp`, `app/src/main/java`, `tools`  
Method: deepen fetch + three-dot diff (`main...branch`) + ancestor check.  
**No branches deleted.**

- Scanned: **90** (excl. main)
- **keep-review**: **35** (commits ahead of main + code changes in scope)
- **stale**: **0**
- **discard**: **55** (merged into main and/or no unique code in scope)

## How to use
1. **keep-review** → port unique code into `main` before any delete (complete, do not replace whole engine).
2. After port (or confirm already on main) → delete that branch.
3. **discard** → safe candidates to delete after a quick glance (no unique cpp/java/tools work vs main).

## keep / review (summary)

High-signal themes seen across keep-review branches (see full path lists in git history of this file / re-run audit for detail):

| Theme | Example branches | Typical paths |
|-------|------------------|---------------|
| GML eval / builtins / xprevious | `jules-14794302311306833514-*` and related | `gm82_gml_eval.c`, `gm82_gml_builtins.c` |
| Runtime / events / architecture | `feature/ds-grid-*`, `refactor/gm82-*`, `feat/gm82-core-*` | `gm82_runtime.c`, `gm82_events.*`, `gml_vm.c` |
| Host tools / pipeline | various jules | `tools/run_host_pipeline.sh`, `tools/host_so_smoke.c` |
| Android MainActivity | palette / jules android | `MainActivity.java` |
| ds_grid region | `feature/ds-grid-region-parity-*` | `gml_vm.c`, builtins |

**Note:** Many “ahead” counts include merge commits from older main lines; **port by file review**, not blind merge of the whole branch (avoids re-introducing APK/noise).

### Top keep-review by commits ahead (re-scan 2026-10-18)

Re-run locally for full path lists:
```bash
git fetch --all --depth=50
# for each branch: git log --oneline main..BRANCH
# git diff --name-only main...BRANCH -- app/src/main/cpp app/src/main/java tools
```

Full machine listing from this audit session was generated with 35 keep-review and 55 discard; key keep branches included:

- `jules-14794302311306833514-706e7347` (high ahead; gml eval/builtins)
- `feature/ds-grid-region-parity-8695277086272937315` (ds_grid + gml_vm)
- `feat/gm82-core-enhancements-*` / `refactor/gm82-architecture-*`
- `jules-j3-events-*`, `jules-j5-actions-*`, `jules-j6-android-*` (if still ahead of main)
- `bolt-opt-mp-grid-pathfinding-*`
- host pipeline / smoke tool branches

## discard (55)

Branches with **0 unique code commits in scope** relative to current main (merged ancestor and/or doc-only). Examples of patterns:

- `audit-*` / `daily-audit-*` closed after merge
- many `jules-*` already integrated
- palette-only branches with no cpp/java/tools three-dot code delta vs main

**Still: do not mass-delete until you accept this audit.** Prefer deleting discard list first after spot-check.

## Next step (port, then delete)

```text
For each keep-review branch:
1. git diff main...BRANCH -- app/src/main/cpp app/src/main/java tools
2. Cherry-pick or manually port missing symbols/files into main
3. Run host pipeline / ASSEMBLE
4. Then delete the branch
```

No invented metrics. No branch deletions performed in this audit.
