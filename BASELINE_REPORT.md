# NOR Engine Baseline Verification Report

- **Date**: 2026-11-02
- **Baseline Git Tag**: `v0.1-native-gml-collision-baseline`
- **Elapsed Test Time**: 109.92 seconds
- **Host Audit Status**: PASS
- **Security & Reference Contracts Status**: PASS (12/12 passing)
- **C Native Test Binaries**: 27 passing
- **Android APK Build**: Verified (`./gradlew assembleDebug` builds app-debug.apk across 4 ABIs: arm64-v8a, armeabi-v7a, x86, x86_64 with NDK 25.2.9519653)
- **Loaded Samples**:
  - `mario_bros.gmk` (verified header, zlib blocks, physics parity & replay)
  - `plataformas.gmk` (verified header & zlib blocks)
  - `shooter.gmk` (verified header & zlib blocks)
  - `zelda.gmk` (verified header & zlib blocks)
- **Honest Limitations (Pending Device/Infrastructure)**:
  - Physical Android device touch replay and live display output (needs hardware device/emulator)
  - Production key signing rotation (requires GitHub Actions Secrets / Play App Signing configuration)
  - Windows-only GameMaker components and extended GMX resource schemas

## Audit Output Excerpt
```text
ctions Audit ---
  angle_difference: FOUND
  approach: FOUND
  color_reverse: FOUND
  sound_play_pitch: FOUND
  ds_grid_set_disk: FOUND
  window_set_size: FOUND

=========================================================
 AUDIT RESULTS SUMMARY
=========================================================
  run_full_verification.py           : [PASS]
  test_all_games_inlined.js          : [PASS]
  run_engine_suite.py                : [PASS]
  01_BLACKSCREEN_FIX make test       : [PASS]

  Suite Pass Rate: 4/4 (100.0%)
  GM82 Target Functions: 6/6 (100.0%)

All host audit checks passed successfully.
```

## Security Test Output Excerpt
```text
t_bridge_methods_present) ... ok
test_private_signing_key_is_not_shipped (test_security_contract.SecurityContractTests.test_private_signing_key_is_not_shipped) ... ok
test_webview_and_network_are_restricted (test_security_contract.SecurityContractTests.test_webview_and_network_are_restricted) ... ok

----------------------------------------------------------------------
Ran 13 tests in 1.645s

OK
```
