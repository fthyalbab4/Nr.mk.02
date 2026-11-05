# GAPS_HONEST — verified status

## Verified in this checkout (batch4)
- GM82CORE_STUBS reduced to 10 rare items.
- Host-safe implementations for ds_bag_*, bigchoose family, event helpers, date/moon, registry/mouse no-ops, dss_* aliases.
- Eval dispatch updated before try_stub.
- Host test suite previously green; PLACEHOLDER removed from main cpp tree.

## Remaining (device only)
See docs/DEVICE_BLOCKED.md:
- U2 playtest + logcat
- U3 native lib load / keyDown bridge
- U5 OpenSLES audio

## Delivery gate
`is_100: false` (device items open)
`host_p0: true`

## Baseline Phase 0 Lock & Verification (Tag: v0.1-native-gml-collision-baseline)
- Host verification: 27 native C test binaries pass cleanly via Makefile and test suites.
- Contract verification: 12 reference and security contract Python tests pass (100% OK).
- Android build: Verified with Gradle 8.2.1, SDK 34, NDK 25.2.9519653, CMake 3.22.1 generating app-debug.apk across arm64-v8a, armeabi-v7a, x86, x86_64.
- Mario Parity: Mario Bros GML & action parity matrix established in MARIO_FUNCTION_MATRIX.md with unit fixtures (test_mario_scripts_fixtures.c) and 160-frame deterministic physics replay.
- Honest limitations: Physical Android device touch replay and on-device instrumentation tests remain pending physical device connection.
