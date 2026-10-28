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
- The sandbox cannot launch a Windows GUI, so verification is via cross-compilation and PE inspection plus the existing Linux host engine tests.

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
