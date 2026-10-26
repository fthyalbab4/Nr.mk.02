# GM82 portable reverse-engineering results

Static analysis only: the Windows binaries were not executed. Results were generated with REA 6.8.0 and Ghidra 12.1.4.

## Scope

The analysis covers the eight PE files in `game maker/portable`: `GameMaker.exe`, `anvil.exe`, `gm82hub.exe`, `gm82mv.exe`, `gm82room.exe`, `gm82venc.exe`, `gm82vp.exe`, and `gm82save.dll`.

## Contents

- `static/`: SHA-256 inventory, PE imports/resources/exports evidence, and REA decompile manifests.
- `decompiles/<binary>/functions/`: up to 120 Ghidra pseudocode files per binary, named by virtual address.
- `decompiles/<binary>/decompile-index.json`: REA function index for the export.

## Results summary

| Binary | Format | SHA-256 | Decompiled functions |
|---|---|---|---:|
| `GameMaker.exe` | `pe` | `04b5eb0a46ea073d76dd623837675e5bb8450912de3ca472e78921f34a07714c` | 120 / 10454 selected |
| `anvil.exe` | `pe` | `8b67e5db0deafeb3c9fe5cfaa77c61b266ddfef585e6daf157aa3bce26ad4bdb` | 120 / 8934 selected |
| `gm82hub.exe` | `pe` | `2b13b6a53edaa011d80485eb6939516bc69e311a0006b82831322928e7eb0c75` | 120 / 8934 selected |
| `gm82mv.exe` | `pe` | `1f8dc91bafb221eb8692891aeac4285c347f7bfa98f5af3958b2e24c8c1c499b` | 120 / 8934 selected |
| `gm82room.exe` | `pe` | `f1de5bdafd4924b8e3ffc950e96cfa244c15bc9a6676afa65d4a79ee765db5e2` | 120 / 8934 selected |
| `gm82save.dll` | `pe` | `cecf91374ca24509a086f8ba35f00d2c56241231d48e9e4b28b90f654e8487c3` | 120 / 1196 selected |
| `gm82venc.exe` | `pe` | `f7a31f97f48a017a6260ec4ae6e90ec48b91b2b251e23855b024421d10665efa` | 120 / 8934 selected |
| `gm82vp.exe` | `pe` | `4ad6271aa92fb444331d4e8c744008a24220ddb6d69db4d1aa409d37dd358de7` | 120 / 8934 selected |

## Important limitations

- Ghidra pseudocode is reconstructed output, not the original source code.
- The address-based exports are bounded samples (120 functions per binary), not complete decompilations.
- The historical Delphi/Borland binaries have no usable original symbols in the shipped PE; function names are generated addresses such as `FUN_004024f0`.
- `gm82save.dll` is a separate Rust-built 32-bit DLL and has 5 named exports; its open Rust source is present under `source/unpacked/gm82save-main/`.
- Matching a decompiled function to source requires additional function signatures, call-graph tracing, and byte-level validation.

## Source correlation

Open source components that can be correlated directly are retained in `source/unpacked/`, especially `gm82save`, `gm82core`, `gm82room`, `gm82mv`, `gm82hub`, `gm82audio`, and related extensions. The main `GameMaker.exe` implementation itself is not present as source in the collected public archives.
