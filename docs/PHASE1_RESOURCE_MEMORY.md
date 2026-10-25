# Phase 1 — Resource Loading & Memory Layout

## Implemented
1. gm82_arena — 4MB room-scoped bump allocator
2. Room transition resets arena + flush destroy queue
3. Deferred destroy mid-frame; flush after End Step / Post-Draw
4. Strict phases: Begin→Alarm→Step→End→Pre-Draw→Draw→Post-Draw
5. 16-bit pixel helper in sprite_decode

## Honest status
Stability for load/transition/order. Not full-engine 95% Windows parity alone.
