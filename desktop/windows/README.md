# Nor Maker Native PC (Windows) — first additive milestone

## Goal and compatibility approach

This is a separate Win32 desktop target layered over the existing `app/src/main/cpp` C engine. It does not replace or move the Android application, Android CMake target, assets, or source tree. It uses the project's existing native bridge and software renderer; no GameMaker executable/runtime code is copied or reverse-engineered.

The first milestone provides a native Windows window, `.gmk`/`.gm81`/`.gm6` file-open and drag-and-drop, keyboard input, room-speed-based fixed stepping, and presentation of the engine's RGBA software frame through GDI. Existing engine behavior remains the authority; the PC shell only hosts it.

## Roadmap

1. **Native host shell (done):** engine-level Win32 host and file selection; input forwarding; bounded frame pacing; software framebuffer; headless verification mode. This is `NorMakerNativePC.exe` and it is a diagnostic/engine host, not the editor.
2. **Nor Maker PC application (done):** `NorMakerStudio.exe` shows the real Nor Maker interface on Windows by serving the bundled editor UI and providing the same `window.NorNative` bridge the Android WebView injects — see "Nor Maker PC application" below.
3. **Platform parity:** add a Windows audio device backend and route existing sound commands to it; test focus/pause/resume and display scaling; improve Unicode path handling.
4. **Runtime parity:** expand PC smoke tests across bundled GMK samples; audit incomplete GMK resources/GML builtins and document the supported subset rather than silently claiming full GameMaker compatibility.
5. **Release:** add reproducible Windows CI, package the EXE with its runtime dependencies, and publish versioned artifacts only after test and license review.

## Nor Maker PC application (`NorMakerStudio.exe`)

The Windows application is not a re-implementation of the editor. Nor Maker's UI is a single page (`app/src/main/assets/www/index.html`) and Android only hosts it in a WebView with a `NorNative` JavaScript bridge, so the PC build hosts the same page and answers the same bridge:

- Cloud imports (`https://cdn.jsdelivr.net/...`) are fetched through WinHTTP, so TLS and CDN redirects work and the catalog downloads byte-exact files.
- `NorMakerStudio.exe` starts a loopback HTTP server that serves the bundled `assets/www` tree, and injects `nor_pc_bridge.js` into the document head at serve time (the shipped `index.html` is not modified).
- That bridge defines `window.NorNative` with the same method names the Android bridge exposes (`tick`/`step`, `loadGmk`, `loadGmkBase64`, `validateGmk`, `coreIdentity`, `downloadCloudGmkBase64`, …); each call is answered by the C engine over `/rpc`.
- The document is opened in an Edge app-mode window when Edge is present, otherwise in the default browser, so the user sees the real Nor Maker interface (menus, Resource Explorer, room editor, object palette, 3D/isometric editors, NOOR libraries).
- The shell adds an in-editor preview panel (“معاينة المحرك الأصلي (GM82 C)”) that renders the real C engine frames into the page, so a GMK loaded through the bridge is visible inside the editor instead of in a separate window.

### Running it

```sh
NorMakerStudio.exe                 # serve + open the Nor Maker window
NorMakerStudio.exe --browser       # serve + open the default browser
NorMakerStudio.exe --serve=8765    # serve only; prints NORMAKER_URL
NorMakerStudio.exe --bind-all      # also listen on all interfaces (testing)
```

The UI assets are looked up through `NORMAKER_WWW`, then `.\www` next to the EXE, then the repository layout (`..\..\app\src\main\assets\www`). To ship a folder, copy `app/src/main/assets/www` to `www` beside the EXE; the executable is self-contained otherwise.

### Verified execution

`tools/run_studio_verify.sh` runs the real EXE under Wine and drives the same HTTP interface the browser uses. Observed results:

| Check | Result |
| --- | --- |
| `index.html` served | HTTP 200, 6,290,274 bytes, title `NOR Maker 8.2 - صانع الألعاب`, bridge injected |
| assets served | `nor_pc_bridge.js` 8,459 bytes, `vendor/three.r128.min.js` 603,445 bytes |
| bridge identity | `Nor Maker Studio PC / GM82 C core` |
| load GMK by path | mario_bros.gmk → 1500×208 @ 30 |
| 300 native frames | frame 1500×208, 311,159 non-black pixels |
| frame delivery | `engine/frame.bmp` 936,054 bytes; `?maxw=384` 61,110 bytes |
| GMK probe (bytes) | shooter.gmk → 224,588 bytes, formatKind 1, valid |
| load by bytes | zelda.gmk → 1000×800 room loaded from base64 |
| failure paths | missing project → error; unknown method → error; `/../index.html` → HTTP 400 |

The interface itself was opened through its public URL in a real Chromium browser, and the bridge was driven from the page: `NorNative.loadGmkBase64(shooter.gmk)` loaded the project, the preview panel ran 1,235 native frames at 1000×800 and the canvas contained 710,497 non-black pixels across 27 colour buckets (see `docs/nor-studio-pc-ui.png`).

### Limits

- The window is an Edge/Chromium app-mode window, not an embedded WebView2 control. Embedding WebView2 (and shipping the loader) is the next step; the served page and bridge are already the same, so the switch does not change the UI or the bridge contract.
- The editor's own “Run & Compile” still executes its JavaScript simulation. Wiring that button to the native engine preview is a follow-up; the native preview is already available through the bridge and its panel.
- Wine is not Windows: real driver, audio and multi-monitor behaviour still needs a physical Windows machine, and the Edge window itself could not be launched under Wine (the HTTP shell and bridge were verified there instead).

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

Observed results (Wine 9.0, Xvfb 1280x800x24, 2026-10-28, binary built from `main` at `afeae4e5`):

| Sample | Resources materialized | Room | Frames | Non-black pixels | Frame hash | Exit |
| --- | --- | --- | --- | --- | --- | --- |
| mario_bros.gmk | 24 sprites, 24 bgs, 2 rooms, 21 objects, 8 scripts, 301 instances | 1500x208 | 300 | 311,168 / 312,000 | `732c55bd` | 0 |
| plataformas.gmk | 6 sprites, 6 bgs, 4 rooms, 7 objects, 14 scripts, 270 instances | 640x480 | 300 | 302,301 / 307,200 | `0a89c0f2` | 0 |
| shooter.gmk | 12 sprites, 1 bg, 2 rooms, 12 objects, 472 instances | 1000x800 | 300 | 710,604 / 800,000 | `fb83c27f` | 0 |
| zelda.gmk | 13 sprites, 13 bgs, 3 rooms, 11 objects, 16 scripts, 372 instances | 240x160 | 300 | 38,400 / 38,400 | `5f7ed915` | 0 |
| does_not_exist.gmk | - | - | - | - | - | 4 (`Unable to open project file`) |

Cross-build parity: the same 300 frames of `mario_bros.gmk` rendered by the Windows EXE under Wine and by a native Linux build of the identical engine sources produce byte-identical framebuffers (PPM SHA-256 `f9c80d65...d74ee3`, both hash `732c55bd`), re-confirmed after rebuilding from current `main`. The windowed path was also smoke-tested: the Win32 window, menu bar and GDI presentation render real game content (see `docs/wine-gui-smoke.png`, `docs/wine-frame-shooter.png`, `docs/wine-frame-plataformas.png`).

`wine32` is not required for this target: the EXE is PE32+ x86-64 only.

## Play test against a real game

`docs/playtest-mario.md` records a measured run of `mario bros.gmk` (the same file
as `samples/mario_bros.gmk`, also in the cloud catalog) through this engine:
movement, gravity, jumping and camera scrolling work and are keyed to real
keyboard input, while drag-and-drop action events (enemies, coins, room switches)
are still missing. `docs/playtest-mario-progress.png` shows three frames of that
run.

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

Two x64 builds are included: [`dist/NorMakerStudio.exe`](dist/NorMakerStudio.exe) (the Nor Maker application, 1,043,129 bytes, SHA-256 `4c5abfeb5ab07792965a6f0d4aeaa8447cbce175b79050c40eed4b33472acae5`) and [`dist/NorMakerNativePC.exe`](dist/NorMakerNativePC.exe) (engine host and headless verifier, 1,038,269 bytes, SHA-256 `98e58f2e9b74a0449831ecd91f26bc17915597285af276961e729c2b9c12e4a7`). Both are built from the same engine sources as the Android app; rebuild them after any engine change so the checked-in binaries never drift. They contain the bridge and view fixes described below, the headless verification mode and the command-line project argument.
