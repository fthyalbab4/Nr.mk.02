# String VM on main

## Live (linked by CMake `src/*.c` GLOB)

- `app/src/main/cpp/src/gm82_gml_string_vm.c`
- implements: `gm82_gml_last_string`, `set_last_string`, `last_was_string`, `clear_last_string`

## Optional full eval body (string_* producers + keyboard_string → set_last_string)

```bash
python3 tools/gap_fill_20261013/DECODE_EVAL.py
```

Writes full ~111KB `gm82_gml_eval.c` (includes producers that call set_last_string).

If both full eval and string_vm.c define the same symbols, remove one or the other before link — prefer DECODE full eval alone, or keep string_vm.c and strip duplicates from eval.
