# Classification of current REA sample (GameMaker.exe)

Automated pass 2026-10-26 on the 120-function export.

| Class | Approx count | Notes |
|-------|-------------:|-------|
| External / import thunk | ~58 | CloseHandle, CreateFileW, MessageBoxA, ... |
| Internal FUN_* | ~62 | Unnamed |
| Game-logic keyword hits | 0 | No instance/room/step/sound strings in bodies |
| Allocator/RTL-like | ≥2 cross-refs | FUN_00402e10 cluster |

## Decision
Do not port any FUN_* body into `app/src/main/cpp` from this sample.
Use import-level architecture notes only (see REA_RUNTIME_NOTES.md).
