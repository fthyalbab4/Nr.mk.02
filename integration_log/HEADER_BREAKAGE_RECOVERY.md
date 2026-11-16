# Header breakage recovery 2026-11-14

## What happened
A push accidentally replaced `gm82_gml_builtins.h` (3 mirrors) with a stub/PLACEHOLDER.

## Immediate recovery (local)
```bash
python3 tools/restore_gml_builtins_headers.py
python3 tools/apply_pr405_ds_many.py
python3 tools/verify_core_mirrors.py
```

Parent blob used: `50dea0102b7aac4ab89621b6805db023659bc6c0`

## Then push restored files from your machine
```bash
git add app/src/main/cpp/include/gm82_gml_builtins.h \
  app/src/main/cpp_backup/include/gm82_gml_builtins.h \
  NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/include/gm82_gml_builtins.h
git commit -m "fix(core): restore gm82_gml_builtins.h tri-mirror + ds_*_many decls"
git push
```

## Status
- builtins.c bodies for ds_*_many: apply via tools/apply_pr405_ds_many.py (not yet on main remote)
- eval dispatch: prepared locally, not yet on main remote
- external bridge C API: on main
- is_100: false
