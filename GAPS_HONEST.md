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

## Bytecode native expression calls
- **VERIFIED_HOST**: AST-native calls now cover selected numeric built-ins with
  arguments (`lerp`, point distance/direction, `lengthdir_x/y`) and selected
  numeric DS list/grid operations.
- `tests/test_gml_native_builtin_calls.c` → `NATIVE_BUILTIN_CALLS_TEST_PASS`
- Unsupported calls and string/member/index expressions still use the legacy
  textual fallback; this section does not claim full built-in native coverage.

## Bytecode native fields and arrays
- **VERIFIED_HOST**: text evaluation and native AST share the runtime-owned
  numeric 1D/2D handle store; instance/global fields keep handles, while
  `alarm[index]` and `argument[index]` remain special cases.
- The fixed Native AST side-table (8 cells per field) has been removed. The
  current store allows 64 arrays per runtime and up to 65,536 1D elements or
  sparse 2D cells per array; arrays remain numeric-only and are not yet verified
  against Portable GM8.2 element/dimension semantics.
- `tests/test_gml_native_fields_arrays.c` covers dynamic growth, compound
  assignment, 2D indexing, lengths/heights, and self/global/alarm/argument paths.
- ASan+UBSan with leak detection passed for the native fields/arrays regression,
  array capacity/lifecycle tests, and GML parser tests.

## AST native control flow
- **VERIFIED_HOST**: direct AST execution now evaluates conditions and scalar
  statements through the native path inside `if/else`, `while`, `do-until`,
  `repeat`, `for`, and `switch` traversal.
- `tests/test_gml_native_control_flow.c` → `NATIVE_CONTROL_FLOW_TEST_PASS`
- `with` remains on its compatibility path because instance-context iteration
  requires a separate native context-frame implementation.

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

Final local verification for this snapshot: `tools/run_engine_suite.py` — **47/47**; host pipeline — **4/4**; Full Core — **HOST GATES OK** (18 explicit gate entries including `test_full_suite`); Python reference/security — **14/14**; mirror verifier and negative tests — **PASS**; ASan/UBSan native-array/parser tests — **PASS**. `test_resource_import` reports a fixture skip because its separate local GMK fixture set is absent; the four bundled corpus games are exercised by `test_game_corpus`. No Android/NDK or device run was completed here, and no GM82 Portable reference comparison was available. These are host results, not a 100% parity claim.
