# GAPS_HONEST

## Verified / landed (batch4 final — HOST P0 CLOSED)
- Host implementations for ds_bag_*, bigchoose family, event helpers, date/moon, registry/mouse no-ops, dss_* aliases in `gm82_batch4_extras.c`.
- Linker wrap intercepts try_stub for batch4 names.
- Eval path supports multi-arg host functions.
- Residual host stubs: 10 only (draw_*_extra family + ds_list_filter/foreach/map).

## Remaining host (rare / non-MVP blocking)
- draw_*_extra / draw_spotlight / draw_setb / draw_setf → need real GL path
- ds_list_filter / foreach / map → need GML callback / script execution support

- The host engine suite passes **27 C executables**, including the previously omitted `test_gml_phase5`, `test_gml_vm_advanced`, and `test_phase1` tests; it also runs the four bundled GMK sample pipeline.
- Reference/security contracts pass **12 Python tests**. They check the hardened WebView/network settings, absence of PEM private-key markers in bundled HTML, and the reduced JavaScript bridge surface.
- `action_if_variable` now uses a single `(left value, opcode, right value)` DnD contract in both execution paths, with equality and all six comparison operators covered by regression tests.
- Buffer operations reject negative and non-finite offsets; relative negative seeks work without unsigned wraparound.
- Extended GM82 math builtins (`point_line_lerp`, `lengthdir_zx`, `lengthdir_zy`, `lengthdir_zz`) ported and verified against `gm82core-main` reference; `outside_room` evaluates bounding boxes with active room dimension constraints.
- The GMZ importer accepts normal directory entries and rejects traversal, oversized entries, excessive extraction, and malformed local ZIP headers. The dedicated host test covers a valid directory archive plus oversize and traversal rejections.
- Android's GMZ picker now stages a selected GMZ/ZIP file internally and calls the existing Studio callback; project extraction and readback are constrained to app-owned canonical directories.
- Repository-hosted private signing material, tracked debug keystores, and the binary artifact carrying the private key have been removed from the current working tree. The legacy signing identity is compromised and must be rotated; see `SECURITY_ROTATION_REQUIRED.md`.
- GitHub workflows are read-only verification gates; they no longer self-modify or auto-commit the repository and use a pinned `actions/checkout` SHA.

## Not verified here

- **Android APK/NDK build verification:** verified in this checkout; `./gradlew assembleDebug` successfully compiles and packages all ABIs (arm64-v8a, armeabi-v7a, x86, x86_64) generating `app/build/outputs/apk/debug/app-debug.apk` using NDK 25.2.9519653 and CMake 3.22.1.
- **Android on-device instrumentation and behavior:** on-device instrumentation tests, physical touch input replay, and live hardware display rendering remain unverified pending a connected physical Android device/emulator.
- **Release signing:** a replacement upload identity was generated outside the repository and CI configuration was added, but repository Actions secrets still require an owner/administrator because the current integration received HTTP 403 when attempting to write them.
- **GMX XML import:** the Android folder picker can import a complete GMX project tree, while the archive picker deliberately accepts only GMZ/ZIP. A standalone `.gmx` manifest without its resource tree is rejected rather than being misrepresented as a complete project.
- **Cloud GMK integrity:** downloads are TLS-only, host-restricted, size-limited, and redirects are revalidated. The bundled catalog still needs immutable revision pins and per-file SHA-256 verification before its remote content can be treated as reproducible.
- **Complete GameMaker compatibility:** Windows-only components, full GMX resource-schema fidelity, exhaustive GML syntax/runtime coverage, precise collisions, and hardware audio parity remain broader product work.
- **Full hostile-project isolation:** the bridge surface was reduced and preview content is no longer same-origin with the Studio parent. A separate bridge-free preview WebView or origin-scoped message API should still be used before treating arbitrary project JavaScript as hostile content.
## Device only
See docs/DEVICE_BLOCKED.md (U2 playtest, U3 native load, U5 OpenSLES).

## Delivery gate
`host_p0: true`
`is_100: false` (device items open)
