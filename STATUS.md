# STATUS — sources on repo

All runner patches are intended to land **in-tree** via:

```bash
git pull
bash tools/gap_fill_20261013/APPLY_ALL.sh
```

`APPLY_ALL` restores base64-packaged patched C sources (when parts are present), then re-applies idempotent scripts.

Host pipeline 4/4 + ASSEMBLE PASS when fully applied. ~40% weighted. No 100% claim.
