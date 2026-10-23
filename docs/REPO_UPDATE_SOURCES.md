# Putting patched sources on the repo from your machine

```bash
git pull
bash tools/gap_fill_20261013/APPLY_ALL.sh
# review
git add app/src/main/cpp
git commit -m "apply runner gap-fill patches to C sources"
git push
```

This is the reliable way to publish the full patched `.c`/`.h` files (agent push size limits blocked dumping 100KB+ files in one shot).
