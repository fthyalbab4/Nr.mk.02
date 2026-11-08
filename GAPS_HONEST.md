# GAPS_HONEST — verified status (excerpt + 2026-11-07 residual)

See full history in repo. Latest residual:

## Sparse 2D arrays (host)
- Sparse `(row,col)->value` cells; max 65536 cells/array, 64 arrays
- `array_create_2d`, auto `a[i,j]=`, `array_height_2d`, `array_length_2d(row)`
- `test_array_2d` PASS including indices beyond old 32x64 dense grid

## G13 Portable reference
- **NOT_RUN**: no Portable GM8.2 reference logs in environment
- Host metrics harness: `tests/test_g13_host_metrics.c` → `G13_HOST_METRICS.json`

## G14 Device OpenSLES / JNI
- **DEVICE_BLOCKED**: no Android device in CI/sandbox
- Host contracts: `tests/test_g14_device_contract.c` (input + sound queue + OpenSLES stub)

## Delivery
```
is_100: false
claim_100_percent_allowed: false
G13: NOT_RUN
G14: DEVICE_BLOCKED
```


## 2026-11-09 update — runtime arrays, scaled AABB, and host verification

- Runtime-owned numeric arrays now support 1D create/read/write/growth and sparse 2D `(row,column)` reads/writes; auto-create on indexed writes, zero initialization, compound assignment, runtime cleanup, and an enforced limit of 64 arrays per runtime are covered by tests. The current implementation is numeric-only; string/variant element semantics and exact GM82.2 dimension conventions have not been compared against Portable.
- `test_array_semantics`, `test_array_2d`, and the bytecode/AST array regression pass under ASan+UBSan with leak detection. The test fixture that checks two simultaneous runtimes allocates runtime structs on the heap to avoid host-test stack exhaustion.
- `place_meeting` now uses image-scaled world AABBs. When either instance is scaled, the current fallback is AABB, not transformed pixel masks; this can report overlap across transparent pixels. Pixel-precise scaled-mask parity remains open.
- The game-corpus harness no longer depends on a workstation-only absolute path. It accepts `NORMAKER_SAMPLES_DIR` and otherwise resolves the repository sample directory; all four bundled samples complete the host pipeline.

Final local verification for this snapshot: `tools/run_engine_suite.py` — **43/43**; host pipeline — **4/4**; Full Core — **HOST GATES OK** (14 explicit gate entries including `test_full_suite`); Python reference/security — **14/14**; mirror verifier and negative tests — **PASS**; ASan/UBSan array/2D/bytecode tests — **PASS**. `test_resource_import` reports a fixture skip because its separate local GMK fixture set is absent; the four bundled corpus games are exercised by `test_game_corpus`. No Android/NDK or device run was completed here, and no GM82 Portable reference comparison was available. These are host results, not a 100% parity claim.
