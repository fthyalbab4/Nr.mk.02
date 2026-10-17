# Patches committed on main

| File | Path |
|------|------|
| Sprite origin | `tools/gap_fill_20261013/patches/full_sprite_decode.diff` |
| Runtime clamp/collision | `tools/gap_fill_20261013/patches/full_runtime.diff` |
| GML eval strings | `tools/gap_fill_20261013/patches/full_gml_eval.diff` |
| Apply all scripts | `tools/gap_fill_20261013/APPLY_ALL.sh` |

```bash
git pull
bash tools/gap_fill_20261013/APPLY_ALL.sh
git add app/src/main/cpp && git commit -m "land patched C sources" && git push
```
