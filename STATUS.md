# STATUS — patches on repository

## Apply everything into the C tree
```bash
git pull origin main
bash tools/gap_fill_20261013/APPLY_ALL.sh
git add app/src/main/cpp
git commit -m "apply gap-fill to C sources" && git push
```

Diffs on repo: `tools/gap_fill_20261013/patches/full_*.diff`

## Verification Status Checklist
- [x] `bash tools/gap_fill_20261013/ASSEMBLE.sh` - PASS
- [x] `bash tools/run_host_pipeline.sh` - PASS (SUMMARY ok=4 fail=0)
- [x] Runtime markers (`ROOM_BOUNDS` in `app/src/main/cpp/src/gm82_runtime.c`) - PASS
- [ ] On-device verification - UNVERIFIED on device
