# Next steps execution log

## Critical: restore header
```bash
python3 tools/restore_gml_builtins_headers.py
# or
python3 tools/stitch_gml_builtins_headers.py
```

Then:
```bash
python3 tools/apply_pr405_ds_many.py
python3 tools/verify_core_mirrors.py
git add -A && git status
git commit -m "fix(core): restore builtins.h + ds_*_many bodies (tri-mirror)"
git push
```

## After that (eval dispatch)
Add to gm82_gml_eval.c near ds_grid_set / ds_priority_add:
```c
if (strcmp(id, "ds_grid_set_many") == 0) {
    *out = gml_ds_grid_set_many(arg, nargs > 1 ? &args[1] : NULL, nargs > 1 ? nargs - 1 : 0); return true;
}
if (strcmp(id, "ds_priority_add_many") == 0) {
    *out = gml_ds_priority_add_many(arg, nargs > 1 ? &args[1] : NULL, nargs > 1 ? nargs - 1 : 0); return true;
}
```

## Status
- Wrapper headers on main (split) — incomplete without all .inc parts
- part00.inc on app/src/main/cpp/include only
- Full restore MUST use restore script until monolithic push succeeds
- is_100: false
