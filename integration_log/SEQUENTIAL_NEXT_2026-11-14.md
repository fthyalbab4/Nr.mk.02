# Sequential next steps (executed tool-side; large blobs need local push)

## On your machine (required)
```bash
git pull
bash tools/RUN_RECOVERY_SEQUENTIAL.sh
git add app/src/main/cpp app/src/main/cpp_backup NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX
git commit -m "fix(core): restore builtins.h + ds_*_many bodies + eval dispatch"
git push
```

## Why local
GitHub API path used by the agent cannot reliably push 40KB+/200KB core blobs without truncation. Scripts on `main` apply surgical, tested patches.

## Scripts (on main now)
1. `tools/restore_gml_builtins_headers.py` — full header from parent `50dea010` + decls
2. `tools/apply_pr405_ds_many.py` — real ds_grid_set_many / ds_priority_add_many bodies
3. `tools/apply_eval_ds_many_dispatch.py` — eval strcmp wiring
4. `tools/RUN_RECOVERY_SEQUENTIAL.sh` — runs 1–4 + verify

## After recovery
- Wire `external_define/call/free` in eval (string-arg path)
- `ds_map_set_many` real body
- Do not bulk-merge PRs

```
is_100: false
header_on_main: BROKEN until RUN_RECOVERY_SEQUENTIAL.sh
```
