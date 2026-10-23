# CLEANUP_LOG — 2026-10-18

## Done on main (this session)
- Deleted `app-debug.apk` (~15MB)
- Deleted `app-debug.bin` (~17MB)
- Deleted `NOR_MAKER_UPDATED_2026-09-15.tar.gz` (if present)

## Branches (still ~90)
GitHub connector available here can push/delete **files**, not delete **refs/branches**.

To purge stale branches from phone:
1. Open https://github.com/fthyalbab4/Nr.mk.02/branches
2. Delete every branch except `main` after confirming it is merged or abandoned.

Or Jules task:
```
Delete all remote branches except main that are already merged into main.
Do not delete main. Log deleted names in CLEANUP_LOG.md.
```

## Keep as source of truth
- `app/src/main/cpp`
- `app/src/main/java`
- `tools/`
- `docs/`

## Still noisy on main (optional later remove)
- `NOR_MAKER_COMPLETE_PACKAGE/`
- `NOR_MAKER_UPDAT.C/`
- `app/src/main/cpp_backup/`
- many root `*.md` audit files
