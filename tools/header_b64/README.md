# header_b64

Base64 chunks of the restored `gm82_gml_builtins.h` (with ds_*_many decls).

```bash
python3 tools/decode_gml_builtins_headers.py
# or simpler (preferred):
python3 tools/restore_gml_builtins_headers.py
python3 tools/apply_pr405_ds_many.py
python3 tools/verify_core_mirrors.py
```
