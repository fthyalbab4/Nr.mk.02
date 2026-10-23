# STATUS — conflicts resolved 2026-10-23

## Merged on remote
- PR **#163** architecture realignment

## Conflict resolution
Unique code from PR **#161 / #162 / #157–#160** (could not API-merge) ported via:

```bash
python3 tools/gap_fill_20261013/apply_pr161_162_unique.py
bash tools/run_host_pipeline.sh
```

Includes: `instance_create_depth`, `surface_copy` / `surface_copy_part`, geometry decls, native_bridge binds.

Local full merge of those branches with conflict strategy verified **SUMMARY ok=4 fail=0**.

Close open PRs #157–#162 as superseded after applying the script and committing cpp diffs.

No fake 100%.
