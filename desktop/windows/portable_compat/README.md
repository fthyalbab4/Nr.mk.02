# Portable compatibility data for Windows

This directory contains the raw, non-executable compatibility data imported from the supplied Game Maker Portable package. It is used as an input dataset for the Nor Maker Windows compatibility layer; it does not replace the NOR C core and it is not loaded as a GameMaker runtime.

Included:

- `fnames`: built-in names/constants table.
- `Lib/*.lib`: Drag-and-Drop action definitions.
- `extensions/*.dat` and `extensions/*.ged`: extension metadata and definitions.
- `MANIFEST.json`: source-relative provenance, byte sizes, and SHA-256 hashes.

Executable files, DLLs, CHM help files, `dxdata`, and `rundata` are deliberately excluded from this first stage. They require architecture, ABI, licensing, and runtime-dependency review before packaging.
