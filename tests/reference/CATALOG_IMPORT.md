# External GML name catalog workflow

`tools/import_fnames_catalog.py` converts a separately supplied `fnames` text file to metadata JSON; it does not generate or check a catalog into the runtime. Example:

```bash
python3 tools/import_fnames_catalog.py /path/to/fnames /tmp/gml_catalog.json --strict
```

The reviewed source was `MahmoudMMorsy/NM.Maker.0..1.0` at commit `5f1290957ab35f8c02483eb8fb87d2ad304d75b6`, file `game maker/portable/fnames` (repository: https://github.com/MahmoudMMorsy/NM.Maker.0..1.0). It is not copied into this project tree. The converter keeps every entry `unverified` by default and return kind/side effects unknown. A reviewed status map may attach evidence, but `implemented` requires a real implementation plus a regression test; a matching function name, fallback, no-op, or safe default is not evidence.

The source repositories do not provide a clear license for all contents. Resolve ownership/permission before publishing or distributing imported data. Schema: [`catalog.schema.json`](catalog.schema.json).
