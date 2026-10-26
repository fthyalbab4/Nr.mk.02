# REA runtime notes for NorMaker

## Status

This document separates evidence from implementation. The closed Windows binaries were analyzed statically only. The Ghidra pseudocode is reconstructed output and is not copied into NorMaker.

## Evidence-backed candidates

The classified maps contain candidate addresses for `room_instance_suspect`, `graphics`, and `audio`. They are lexical/import candidates, not confirmed semantic names. A candidate becomes implementation evidence only after manual review of its pseudocode, callers, strings, and an executable behavioral fixture.

## Existing NorMaker behavior to preserve

The repository already documents and tests the following runtime invariants:

- Frame order: Begin Step → Alarm → Step → End Step → Pre-Draw → Draw → Post-Draw.
- Instance creation is deferred with respect to a frozen phase count; destruction marks an instance dead and avoids mid-array pointer invalidation.
- `with()` uses an instance snapshot in the current runtime path.
- Software surfaces use a target stack; the current implementation is not a GLES FBO implementation.
- Audio currently provides safe logical sound tracking and a soft mixer path; real PCM/device parity remains a documented gap.

These statements come from NorMaker tests and documentation, not from a claim that the closed binary was recovered.

## What is not yet proven from REA

- Exact proprietary GameMaker event dispatch and room persistence semantics.
- Exact collision mask algorithms and draw batching behavior.
- Exact surface target binding and hardware backend behavior.
- Exact sound resource decoding and mixer scheduling.

## Implementation rule

Implement behavior in the existing `gm82_*.c` modules as original C. Do not paste `FUN_*` bodies into `app/src/main/cpp` or replace the runtime with decompile dumps. Every new behavior should have a deterministic fixture/test and a note identifying whether its evidence came from published GM82 source, NorMaker tests, or static REA/Ghidra analysis.
