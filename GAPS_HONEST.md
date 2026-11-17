# GAPS_HONEST

## Host scope ≈ **85% - 90%** (scorecard in `docs/HOST_COVERAGE_METRIC.md`)
Not “every cloud GMK = Windows”. Host-only, measurable weights.

### On main now
- String path, image_* draw, DnD map
- **Real** `action_if_score/lives/health/dice/number`
- **if/else skip** in `fire_create` / `fire_step`
- `action_sleep` mapped with standard `nanosleep` execution
- Perfect 3-way C mirror synchronization (`app/src/main/cpp`, `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX`, `app/src/main/cpp_backup`)
- `.gitignore` updated to ignore Gradle/NDK build outputs (`.cxx/`, `.externalNativeBuild/`)
- All 5 audit suites fully passing: C Engine Suite (18 tests), Python Full Verification (17 tests), Host Pipeline (4/4 games), C Core Package Makefile, and JS Engine Verification (39 scripts / 78 actions)
- Audit of 28 GM82 source archives in `source/`: core math, ds_grid, buffer, surface, particle, and motion functions verified and implemented.

### Host still open (to push past 90 / harden)
- GML edge: with(), surfaces, typed strings broader
- action_if_variable / collision ifs
- object_index 1:1 when FAIL samples exist

### Needs physical device testing
U2 logcat · U3 NDK/APK physical device execution · U4 DLL/REA · U5 OpenSLES hardware audio — see `docs/PLAN_USER_INTERVENTION.md`
