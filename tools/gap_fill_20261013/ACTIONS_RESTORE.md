# ACTIONS_RESTORE

Full `gm82_actions.c` (DnD args tables + execute_named) is stored as:

- `tools/gap_fill_20261013/actions_full.zlib.b64.0`
- `tools/gap_fill_20261013/actions_full.zlib.b64.1`

Restore on a machine with the repo:

```bash
python3 tools/gap_fill_20261013/DECODE_ACTIONS.py
```

This writes the complete ~28KB source to:

- `app/src/main/cpp/src/gm82_actions.c`
- `app/src/main/cpp_backup/src/gm82_actions.c`
- `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_actions.c`

The previous truncated stub on `main` is replaced by this decode step.
