# GAPS_HONEST

## Closed this pass (code only, no assemble)
- variable_global_exists / get / set (real numeric store, not always-0)
- directory_exists
- string_letters + string_repeat binds in eval
- keyboard_string (length in numeric VM; buffer in input)

## Host
SUMMARY ok=4 fail=0 after local apply of `patch_globals_files_strings.py`

## Still open
1. Android device playtest
2. Cloud game FAIL → specific symbol
3. Full DnD arg tables
4. Full string VM (not length-only)
5. Pure GML movement zero host fallback

Apply on main:
```bash
python3 tools/gap_fill_20261013/patch_globals_files_strings.py
bash tools/run_host_pipeline.sh
```

No fake 100%.
