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
- **VERIFIED_HOST**: native AST reads/writes support flattened instance/global
  member fields (`self.stats.hp`, `global.cache`) and bounded numeric arrays,
  plus `alarm[index]` and `argument[index]`.
- Native array storage is an evaluator side-table capped at 256 named arrays,
  with 8 numeric elements per array; this is not a general dynamic GML struct
  or unlimited array implementation.
- `tests/test_gml_native_fields_arrays.c` → `NATIVE_FIELDS_ARRAYS_TEST_PASS`
- ASAN regression passed for fields/arrays, builtin calls, bytecode native AST,
  and parser tests.

## AST native control flow
- **VERIFIED_HOST**: direct AST execution now evaluates conditions and scalar
  statements through the native path inside `if/else`, `while`, `do-until`,
  `repeat`, `for`, and `switch` traversal.
- `tests/test_gml_native_control_flow.c` → `NATIVE_CONTROL_FLOW_TEST_PASS`
- `with` remains on its compatibility path because instance-context iteration
  requires a separate native context-frame implementation.

## Phase 0 Baseline & Android NDK Build Status
- **VERIFIED_HOST**: Baseline tag `v0.1-native-gml-collision-baseline` pinned.
  Host test suites (27 C test binaries, Python security/reference contracts, 4 sample GMKs) pass 100%.
  Official run recorded in `BASELINE_REPORT.md`.
- **VERIFIED_BUILD_ANDROID**: `./gradlew assembleDebug` compiles and packages native engine
  `libgm82_android.so` cleanly across 4 target ABIs (`arm64-v8a`, `armeabi-v7a`, `x86`, `x86_64`).
  Resolved duplicate draw function symbols (`gml_draw_*_extra`) across all 3 C core mirrors.
- **HONEST_LIMITATION**: Device-level physical execution and audio OpenSLES playback remain
  `DEVICE_BLOCKED` in sandbox/CI (no attached physical Android device or active emulator).

## Delivery
```
is_100: false
claim_100_percent_allowed: false
G13: NOT_RUN
G14: DEVICE_BLOCKED
APK_BUILD: VERIFIED_DEBUG
```
