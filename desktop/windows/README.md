# Nor Maker Native PC (Windows) — first additive milestone

## Goal and compatibility approach

This is a separate Win32 desktop target layered over the existing `app/src/main/cpp` C engine. It does not replace or move the Android application, Android CMake target, assets, or source tree. It uses the project's existing native bridge and software renderer; no GameMaker executable/runtime code is copied or reverse-engineered.

The first milestone provides a native Windows window, `.gmk`/`.gm81`/`.gm6` file-open and drag-and-drop, keyboard input, room-speed-based fixed stepping, and presentation of the engine's RGBA software frame through GDI. Existing engine behavior remains the authority; the PC shell only hosts it.

## Roadmap

1. **Native host shell (this milestone):** Win32 window and file selection; input forwarding; bounded frame pacing; software framebuffer; x64 Windows executable. Keep Android unchanged.
2. **Platform parity:** add a Windows audio device backend and route existing sound commands to it; test focus/pause/resume and display scaling; improve Unicode path handling.
3. **Runtime parity:** expand PC smoke tests across bundled GMK samples; audit incomplete GMK resources/GML builtins and document the supported subset rather than silently claiming full GameMaker compatibility.
4. **Release:** add reproducible Windows CI, package the EXE with its runtime dependencies, and publish versioned artifacts only after test and license review.

## Current milestone limits

- The project loader/bridge currently follows the repository's GMK decoding path; this shell filters for `.gmk`, `.gm81`, and `.gm6`. Text `.gm82` projects are not claimed as playable here.
- This initial shell has no Windows audio backend yet; existing Android audio sources and behavior are untouched. Sound parity is milestone 2.
- A Windows EXE is a native host for the current engine, not a guarantee that every GameMaker 8.2 game/API works.
- GDI software presentation favors compatibility over GPU performance. The Android GLES renderer remains independent.
- Verification is now executed, not just cross-compiled: the checked-in EXE runs under Wine on an offscreen X server and loads/renders the bundled samples (see "Verified execution under Wine" below). Wine is not Windows, so real-hardware driver, audio and multi-monitor behavior still need a physical Windows machine.

## Verified execution under Wine

`tools/run_wine_verify.sh` runs the shipped x64 EXE under Wine 9.0 with an Xvfb display and exercises the host's own command line:

```sh
desktop/windows/tools/run_wine_verify.sh          # all bundled samples, 300 frames each
```

The host accepts an optional project path and a headless verification mode:

```sh
NorMakerNativePC.exe --open C:\path\game.gmk --verify-frames 300 --dump-frame C:\out\frame.ppm
```

Without `--verify-frames` the normal window, menu, drag-and-drop and keyboard path is used; a bare path argument (or `--open`) also loads a project in the GUI.

Observed results (Wine 9.0, Xvfb 1280x800x24, 2026-10-28):

| Sample | Resources materialized | Room | Frames | Non-black pixels | Frame hash | Exit |
| --- | --- | --- | --- | --- | --- | --- |
| mario_bros.gmk | 24 sprites, 24 bgs, 2 rooms, 21 objects, 8 scripts, 301 instances | 1500x208 | 300 | 311,168 / 312,000 | `732c55bd` | 0 |
| plataformas.gmk | 6 sprites, 6 bgs, 4 rooms, 7 objects, 14 scripts, 270 instances | 640x480 | 120 | 302,301 / 307,200 | `0a89c0f2` | 0 |
| shooter.gmk | 12 sprites, 1 bg, 2 rooms, 12 objects, 472 instances | 1000x800 | 120 | 710,833 / 800,000 | `5261603f` | 0 |
| zelda.gmk | 13 sprites, 13 bgs, 3 rooms, 11 objects, 16 scripts, 372 instances | 240x160 | 120 | 38,400 / 38,400 | `5f7ed915` | 0 |
| does_not_exist.gmk | - | - | - | - | - | 4 (`Unable to open project file`) |

Cross-build parity: the same 300 frames of `mario_bros.gmk` rendered by the Windows EXE under Wine and by a native Linux build of the identical engine sources produce byte-identical framebuffers (PPM SHA-256 `f9c80d65...d74ee3`, both hash `732c55bd`). The windowed path was also smoke-tested: the Win32 window, menu bar and GDI presentation render real game content (see `docs/wine-gui-smoke.png`, `docs/wine-frame-shooter.png`, `docs/wine-frame-plataformas.png`).

`wine32` is not required for this target: the EXE is PE32+ x86-64 only.

## Build on Windows (MinGW-w64 / CMake)

Use a MinGW-w64 x64 toolchain and a static zlib development package discoverable by CMake. From the repository root:

```sh
cmake -G "MinGW Makefiles" -S desktop/windows -B build-pc -DCMAKE_BUILD_TYPE=Release
cmake --build build-pc --parallel
```

The output is `NorMakerNativePC.exe`. Visual Studio/MSVC is not claimed yet because other engine modules still depend on POSIX-style directory APIs.

## Cross-build from Ubuntu using MinGW

After installing `gcc-mingw-w64-x86-64` and the matching MinGW zlib development package:

```sh
cmake -S desktop/windows -B build-pc-win64 \
  -DCMAKE_TOOLCHAIN_FILE=desktop/windows/mingw-w64-x86_64.cmake \
  -DCMAKE_BUILD_TYPE=Release
cmake --build build-pc-win64 --parallel
```

The cross-build prefers static zlib and the EXE currently imports only standard Windows system DLLs. It is a separate executable target; it does not alter the Android Gradle/NDK build.

## Checked-in Windows binary

The current x64 preview build is included at [`dist/NorMakerNativePC.exe`](dist/NorMakerNativePC.exe). Size: 1,035,882 bytes. SHA-256: `ced4c7de83a1b51a76127692b84a30f6e6c4aa376f32fbaaee51943c51d1b667`. This build adds the headless verification mode and the command-line project argument on top of the previously published preview binary.
