# STATUS — patches on repository

## Apply everything into the C tree
```bash
git pull
bash tools/gap_fill_20261013/APPLY_ALL.sh
git add app/src/main/cpp
git commit -m "apply gap-fill to C sources" && git push
```

Diffs on repo: `tools/gap_fill_20261013/patches/full_*.diff`
Scripts encode the same changes if diffs are incomplete.

Host: ASSEMBLE PASS, pipeline 4/4 when fully applied. ~40%. No 100% claim.
