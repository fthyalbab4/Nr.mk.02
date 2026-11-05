# NOR Maker Host Baseline Verification

- **Generated (UTC):** 2026-11-05T13:39:04+00:00
- **Git revision:** `3760a105-dirty`
- **Elapsed:** 84.73 seconds
- **Overall status:** PASS
- **Python reference tests reported:** 13

This report records the commands executed in this baseline environment. It confirms the successful Android APK build via `./gradlew assembleDebug`, but does not claim physical-device runtime tests, release signing rotation, or Windows-only GameMaker features.

## Android APK Build Status: PASS
- Command: `./gradlew assembleDebug`
- Status: BUILD SUCCESSFUL (built `app/build/outputs/apk/debug/app-debug.apk` across 4 ABIs: arm64-v8a, armeabi-v7a, x86, x86_64 with NDK 25.2.9519653, CMake 3.22.1).
- Honest limitation: On-device physical instrumentation tests and touch input playback remain unverified pending connected physical device hardware.

## Host audit runner: PASS

- Command: `/home/jules/.pyenv/versions/3.12.13/bin/python3 tools/audit_runner.py`
- Exit code: `0`

Output excerpt:

    =========================================================
     NOR MAKER GM82 AUTOMATED AUDIT & VERIFICATION SUITE
    =========================================================

    === Running: python3 run_full_verification.py (cwd=.) ===
      [SUCCESS]
    === Running: node test_all_games_inlined.js (cwd=.) ===
      [SUCCESS]
    === Running: python3 tools/run_engine_suite.py (cwd=.) ===
      [SUCCESS]
    === Running: make test (cwd=NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX) ===
      [SUCCESS]

    --- Built-in GM82 Functions Audit ---
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

## Python reference/security tests: PASS

- Command: `/home/jules/.pyenv/versions/3.12.13/bin/python3 -m unittest discover -s tests/reference -v`
- Exit code: `0`

Output excerpt:

    test_java_to_jni_contracts_exist (test_android_single_app.SingleAndroidAppIntegrationTests.test_java_to_jni_contracts_exist) ... ok
    test_launcher_hosts_studio_and_native_player_in_one_activity (test_android_single_app.SingleAndroidAppIntegrationTests.test_launcher_hosts_studio_and_native_player_in_one_activity) ... ok
    test_runner_assets_are_local_without_parallel_native_loop (test_android_single_app.SingleAndroidAppIntegrationTests.test_runner_assets_are_local_without_parallel_native_loop) ... ok
    test_invalid_status_rejected (test_catalog_import.CatalogImportTests.test_invalid_status_rejected) ... ok
    test_kinds_arity_markers_and_unverified_default (test_catalog_import.CatalogImportTests.test_kinds_arity_markers_and_unverified_default) ... ok
    test_semicolon_and_reviewed_evidence (test_catalog_import.CatalogImportTests.test_semicolon_and_reviewed_evidence) ... ok
    test_all_samples_have_reproducible_named_resources (test_gmk_inventory.GmkInventoryTests.test_all_samples_have_reproducible_named_resources) ... ok
    test_named_resource_names_are_ascii (test_gmk_inventory.GmkInventoryTests.test_named_resource_names_are_ascii) ... ok
    test_advertised_import_bridges_have_implementations (test_security_contract.SecurityContractTests.test_advertised_import_bridges_have_implementations) ... ok
    test_bridge_has_no_arbitrary_path_export_or_general_code_api (test_security_contract.SecurityContractTests.test_bridge_has_no_arbitrary_path_export_or_general_code_api) ... ok
    test_keyboard_input_bridge_methods_present (test_security_contract.SecurityContractTests.test_keyboard_input_bridge_methods_present) ... ok
    test_private_signing_key_is_not_shipped (test_security_contract.SecurityContractTests.test_private_signing_key_is_not_shipped) ... ok
    test_webview_and_network_are_restricted (test_security_contract.SecurityContractTests.test_webview_and_network_are_restricted) ... ok

    ----------------------------------------------------------------------
    Ran 13 tests in 1.485s

    OK
