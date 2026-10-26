# REA runtime notes for NorMaker

Date: 2026-10-26
Source: static inventory, full REA/Ghidra decompile coverage, published GM82 source, and NorMaker tests.

## Status and truth conditions

This document separates evidence from implementation. The closed Windows binaries were analyzed statically only. Ghidra pseudocode is reconstructed output and is not original Delphi source. A full pass means every function selected by completed Ghidra analysis was attempted; it does not mean bit-identical source recovery or 100% NorMaker compatibility.

The classified maps contain candidate addresses for `room_instance_suspect`, `graphics`, and `audio`. They are lexical/import candidates, not confirmed semantic names. A candidate becomes implementation evidence only after manual review of its pseudocode, callers, strings, and an executable behavioral fixture.

## PE import evidence and porting implications

`GameMaker.exe` is IDE-heavy and imports GDI/GDI+, WinMM, `gm82save.dll`, WinInet, and crypto libraries. The `anvil.exe` and `gm82*` tools import D3D8/DirectDraw, GDI, WinMM, and Winsock. For Android/NorMaker, model runner behavior rather than porting the full IDE UI: keep the existing GLES/software texture path, use the audio mixer/device seam, and correlate save/load with the published `gm82save` source and existing save/load runtime.

## Existing NorMaker behavior to preserve

The repository already documents and tests these runtime invariants:

- Frame order: Begin Step → Alarm → Step → End Step → Pre-Draw → Draw → Post-Draw.
- Instance creation is deferred with respect to a frozen phase count; destruction marks an instance dead and avoids mid-array pointer invalidation.
- `with()` uses an instance snapshot in the current runtime path.
- Software surfaces use a target stack; the current implementation is not a GLES FBO implementation.
- Audio currently provides safe logical sound tracking and a soft mixer path; real PCM/device parity remains a documented gap.
- Room/object data is decoded and materialized from project files, and depth order is handled before draw.

These statements come from NorMaker tests and documentation, not from a claim that the closed binary was recovered.

## What is not yet proven from REA

- Exact proprietary GameMaker event dispatch and room persistence semantics.
- Exact collision mask algorithms and draw batching behavior.
- Exact surface target binding and hardware backend behavior.
- Exact sound resource decoding and mixer scheduling.

## Clean-room implementation rule

Implement behavior in the existing `gm82_*.c` modules as original C. Do not paste `FUN_*` bodies into `app/src/main/cpp` or replace the runtime with decompile dumps. Every new behavior should have a deterministic fixture/test and a note identifying whether its evidence came from published GM82 source, NorMaker tests, or static REA/Ghidra analysis.
