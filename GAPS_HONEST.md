# GAPS_HONEST

## Closed (code, host-verified)
- globals get/set/exists, directory_exists, string_letters/repeat, keyboard_string length
- ln, logn, is_undefined/is_bool/is_int64, typeof (numeric stand-in)
- string_width/height (approx), draw_text_transformed, draw_clear_alpha, application_surface (-1)

```bash
python3 tools/gap_fill_20261013/patch_globals_files_strings.py
python3 tools/gap_fill_20261013/patch_math_draw_type.py
bash tools/run_host_pipeline.sh
```

Host: ok=4 fail=0 after local apply.

## Still open (not solvable by more generic stubs alone)
1. Device APK playtest
2. Cloud game FAIL → named missing symbol
3. Full DnD binary arg tables
4. Full string-returning VM
5. Pure GML movement with zero host inject

No 100% claim.
