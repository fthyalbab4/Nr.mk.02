# REA full decompile status

## Scope and truth conditions

This report records a static, evidence-backed reconstruction pass over the GM82 portable PE files. Ghidra output is reconstructed pseudocode, not original Delphi source. “Full” here means every function selected by the completed Ghidra analysis was attempted; it does not mean bit-identical source recovery or 100% NorMaker compatibility. The Windows binaries were not executed.

Tool versions: REA 6.8.0; Ghidra 12.1.4; x86 PE analysis.

## Coverage

| Binary | Total selected | Internal | External | Pseudocode written | Failed | Remaining | Classified non-unknown |
|---|---:|---:|---:|---:|---:|---:|---:|
| `GameMaker` | 10454 | 9776 | 678 | 9776 | 0 | 0 | 1014 |
| `anvil` | 8934 | 8295 | 639 | 8295 | 0 | 0 | 933 |
| `gm82hub` | 8934 | 8295 | 639 | 8295 | 0 | 0 | 933 |
| `gm82mv` | 8934 | 8295 | 639 | 8295 | 0 | 0 | 933 |
| `gm82room` | 8934 | 8295 | 639 | 8295 | 0 | 0 | 933 |
| `gm82save` | 1196 | 1045 | 151 | 1045 | 0 | 0 | 370 |
| `gm82venc` | 8934 | 8295 | 639 | 8295 | 0 | 0 | 933 |
| `gm82vp` | 8934 | 8295 | 639 | 8295 | 0 | 0 | 933 |

## Index and map outputs

- `source/reverse-engineering/full-index/<binary>-functions.json` contains one record per analyzed function. Size comes from Ghidra body ranges; external status comes from imported namespaces; thunk and call counts are explicitly marked heuristic/approximate where applicable.
- `source/reverse-engineering/maps/<binary>-classified.json` contains conservative lexical classifications and the exact keyword evidence used.
- `source/reverse-engineering/decompiles/<binary>/` contains the complete address-based pseudocode set and REA journals/manifests.

## Classification caveats

Most functions remain `unknown`, intentionally. A category is not a recovered symbol name and must not be treated as proof of behavior. The `room_instance_suspect` category is non-empty where pseudocode contains explicit room/instance/object/collision/with tokens, but these are candidates for manual validation, not confirmed implementations.

## NOR Maker outcome

The decompiles are reference evidence only. NorMaker runtime code must remain clean-room C implementations in existing `gm82_*.c` modules. No FUN_* body is copied into the runtime. The next implementation step is to select a candidate, validate its call/string/import evidence, write a behavioral test, then implement and test the corresponding NorMaker behavior.
