# NOR Maker 8.2 / GM82 Android — Honest Audit, Implemented Core Fixes, and Reverse-Engineering Roadmap

## 1. Zero-Fake-Percentages Policy

This document refuses inflated "100% Windows portable parity" claims. Every status below separates:
1. **Verified source code & host assets present in the workspace**,
2. **Compilation proof (Gradle/NDK build)**, and
3. **Unverified physical/emulated Android runtime behavior** (`docs/ACCEPTANCE_SCORE_2026-10-26.md` records `PASS=0 TOTAL=0` on physical/emulated devices because no ADB device or APK logcat exists in the container).

---

## 2. Repository & Lineage Comparison (What Is Integrated vs. Missing)

Based on workspace inspection and `docs/COMPARE_MM_REPOS_2026-10-25.md`:

| Repository / Component | Architectural Role | Integrated in Active Android App? | Assessment & Remaining Delta |
|---|---|---|---|
| **`fthyalbab4/Nr.mk.02`** (Active Base) | Modular native C engine in `app/src/main/cpp/` (51 modules in `src/` + `gm82_jni.c` + `gml_vm.c`) | **Yes (Primary Core)** | Most complete modular runner: GMK reader/stream (`gm82_gmk_stream.c`), `.gm82` text reader/materializer (`gm82_text_*.c`), event/action runner, GML eval/VM, software/GLES2 rendering, OpenSLES/SoundPool audio. |
| **`fthyalbab4/Nr.mk.01`** | Earlier modular ancestor of `Nr.mk.02` | **Superseded by `Nr.mk.02`** | Its GMK decode & runtime structure live inside the active `Nr.mk.02` codebase plus `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/`. |
| **`MahmoudMMorsy/NM.Maker.0..1.0`** | Reference archive: ~365 KB monolith (`gm82_android_core.c`), `source/*.zip` GM82 packages, APKs, `GAPS_HONEST.md` | **Partial / Selective** | `gm82_portable_compat.c` (token splitting, BGR color reverse/inverse, DLL stub checks, `modwrap`/`smoothstep`/`lerproach`) and host test patterns were ported. The 365 KB monolith was intentionally *not* pasted over the modular core; `simulate_yyd` parity and Win32/DLL REA remain gaps. |
| **`MahmoudMMorsy/Nor-maker-8.2`** | Smaller flat `cpp/` snapshot (~8 KB `gm82_native_call`, tiny ~1.7 KB GMK reader) | **Superseded** | Subset of active `Nr.mk.02` C builtins and GMK parser. |
| **`MahmoudMMorsy/Nor-maker-7`** | Earlier NOR Maker / GM7-compatible Studio + WebView bridge | **Superseded (UI/Studio lineage)** | Legacy WebView Studio patterns integrated in `app/src/main/assets/www/` and `MainActivity.java`; GMK binary reader upgraded in `Nr.mk.02` to cover GM6/GM7/GM8/GM8.1 chunks. |
| **`fthyalbab279-afk/NM.Maker.0..1.0.2`** | Incremental packaging/patch downstream of `NM.Maker.0..1.0` | **Selective** | Shares `.gmk`/`.gm82` sample corpus & host fix lineage; needs verification against any `.gm82` project manifest extensions not yet matched in `gm82_text_reader.c`. |
| **`GM82Project` (Upstream GM8.2 Windows)** | Reference Windows GM8.2 IDE + C++/Delphi Runner semantics + official extensions (`gm82core`, `gm82dx9`, `gm82snd`, `gm82net`, `gm82joy`) | **Partial** | Core math/string/color/token APIs (`gm82_portable_compat.c`), `.gm82` project tree reader (`gm82_text_reader.c`), and stub registry exist; full Windows runner fidelity (DX9 shaders/surfaces, OGG/FMOD audio, `with()` bytecode VM, GEX/DLL boundary) requires Phase A–E reverse engineering below. |

---

## 3. Core Fixes Implemented in This Pass

### Batch 1 — C Core, Events, DnD Actions, GML Eval, Software Renderer
- **`gm82_actions.h` / `gm82_actions.c`**:
  - Proper DnD `relative` flag handling, argument ordering parity, `action_inherited`, numeric `lib_id == 1` action ID mapping (`101..804` via `gm82_action_name_for_id`), and `gm82_events_execute_decoded_actions` supporting nested `422/424` blocks, `423` repeat, `425` exit, `421` else, `is_not`, and `applies_to` target routing.
- **`gm82_events.h` / `gm82_events.c`**:
  - Explicit event execution stack (`g_ev_stack`), full `parent_index` inheritance resolution (`gm82_events_fire_inherited`), and unified keyboard/mouse/collision event dispatch.
- **`gm82_gml_builtins.h` / `gm82_gml_builtins.c`**:
  - Exact GM BGR -> RGB extraction, alpha compositing (`blend_pixel_rgba`), view coordinate translation guarded by `!gml_draw_is_surface_active() && g_rt->view_enabled`, `sprite_groups` frame & origin resolution, and CCW rotation + negative scale mirror parity in `gml_draw_sprite_ext`.
- **`gm82_runtime.h` / `gm82_runtime.c`**:
  - Camera follow with `view_border_h/v` and `view_hspeed/vspeed`, `prev_view_x/y` interpolation (`render_alpha`), `game_started` (`GAME_START`), `room_loading` (`ROOM_START` / `ROOM_END`), `ANIMATION_END` trigger via `image_frac`, removal of artificial `[0..room_width]` coordinate clamps, scrolling parallax/tiled backgrounds (`bg_offset_x/y[8]`), and depth-sorted tile + custom Draw + default sprite rendering.
- **`gm82_gml_eval.c`**:
  - Restored `#include "gm82_events.h"`, `draw_sprite` (3/4 args), `draw_sprite_ext` (9 args with alpha), `event_inherited()`, and `object_get_parent()`.

### Batch 2A & 2B — Hardware OpenGL ES 2.0 Pipeline & JNI Project Bridge
- **`gm82_gl_textures.h` / `gm82_gl_textures.c`**:
  - Context-loss safe `gm82_gl_invalidate_handles`, texture leak cleanup on re-upload, `uMVP` orthographic projection + `uColor` tint/alpha shaders, `gm82_gl_begin_ortho`, `gm82_gl_draw_sprite_quad` (origin, `xscale`/`yscale` incl. mirror with `GL_CULL_FACE` disabled, CCW `angle_deg` parity), `gm82_gl_draw_region_quad` (backgrounds/tiles), and transparent `gm82_gl_draw_rgba_overlay` compositing.
- **`gm82_jni.c`**:
  - Unified `g_engine_ir` + `g_engine_bundle` lifecycle (`unload_engine_project`, deferred GL texture deletion queue `g_gl_stale_tex`).
  - `nativeImportGmkSnapshot` tries structured `gm82_gmk_stream_parse` + `gm82_text_build_runtime_bundle` + path/timeline binding before heuristic fallback.
  - Added `nativeImportGm82Project(String dirPath)` for direct `.gm82` folder-based projects.
  - Rewrote `nativeRuntimeDrawGles` for native GPU GLES2 rendering of room color (BGR -> RGB), NPOT-safe wrapped backgrounds (`GL_CLAMP_TO_EDGE` discrete quad tiling), depth-sorted tiles + sprites, interpolated camera/instance positions (`render_alpha`), `glScissor` letterbox isolation, and on-demand hybrid CPU GML `Draw` overlay only when custom Draw scripts run.
  - Aligned `nativeRuntimeMouse` view offset translation and `nativeRuntimeGetRoomWidth/Height` (`view_enabled ? view_w/h : room_width/h`).
  - Default step delta calibrated for **90 FPS** (`1.0f / 90.0f`).

### Batch 2C — Android Surface, 90Hz Frame Pacing & Touch Mapping
- **`Gm82SurfaceView.java`**:
  - Added `surfaceCreated` frame rate hint (`Surface.setFrameRate(90.0f, FRAME_RATE_COMPATIBILITY_FIXED_SOURCE)` on Android 11+ / API 30+) and `1.0 / 90.0` default delta.
- **`MainActivity.java`**:
  - Added `nativeImportGm82Project` JNI declaration and `StudioNativeBridge.importGm82Dir(dirPath)` JavaScript bridge.
  - Updated GL fallback `dt` and `tick()` to `TARGET_FPS` (90 FPS).
  - Fixed `handleViewportTouch` to invert exact aspect-fit letterboxing (`scale`, `ox`, `oy`) and keep `isDown = true` across `ACTION_MOVE` drags so `mouse_check_button(mb_left)` works while dragging.

---

## 4. Extended Reverse-Engineering & Full Windows GM8.2 Parity Plan (90+ FPS Target)

To bridge the remaining gap between host/NDK simulation and **true Windows GM8.2 Portable runtime equivalence at 90+ FPS**:

### Phase A — Full Register/Stack Bytecode GML Compiler & VM (`gml_frontend.c` / `gml_vm.c`)
- **Gap**: `with (obj_or_id)` instance iteration, lexical `var` locals, 1D/2D dynamic arrays (`arr[i, j]`), typed string vs. real tagged `GmlValue` propagation, `switch`/`repeat`/`do..until`/`break`/`continue`/`exit` nested inside scripts, and short-circuit `&&`/`||` are partially interpreted or simplified in `gm82_gml_eval.c`.
- **Plan**:
  1. Complete `gml_frontend.c` AST -> stack bytecode lowering with `OP_WITH_PUSH` / `OP_WITH_NEXT` / `OP_WITH_POP` targeting both single instance IDs (`>= 100000`), object IDs (including `parent_index` descendants), `all`, `self`, `other`, and `noone`.
  2. Route all `object_event`, `creation_code`, `room_creation_code`, and `script_execute` execution through compiled bytecode cached on project load (zero string reparsing per frame at 90 FPS).
  3. Preserve string vs. real runtime distinction in variables, globals, `ds_map`/`ds_list`/`ds_grid` string keys, and `variable_local_*` / `variable_global_*`.

### Phase B — GPU Offscreen Surfaces, Fonts & 90 FPS Batching (`gm82_gl_textures.c` / `gm82_gles.c`)
- **Gap**: Heavy `draw_*` GML calls (`draw_surface_*`, `draw_text` custom bitmap/TTF fonts, `draw_primitive_*`, `draw_set_blend_mode(bm_add/bm_subtract)`) currently hit the CPU RGBA overlay (`g_gles_rgba`), forcing CPU rasterization and `glTexSubImage2D` upload per frame.
- **Plan**:
  1. Implement FBO-backed `surface_create` / `surface_set_target` / `surface_reset_target` in `gm82_gl_textures.c` so lighting, minimaps, and split-screen views run purely on GPU.
  2. Replace per-quad `glDrawArrays` calls with a dynamic VBO sprite/tile batcher sorted by texture ID + depth to keep CPU draw overhead under 1.5 ms per frame at 90–120 FPS.
  3. Pack decoded sprite fonts (`gm82_font_decode.c`) and fallback SDF/bitmap glyphs into a GL texture atlas so `draw_text*` runs without touching CPU pixels.
  4. Map GM blend modes (`bm_normal`, `bm_add`, `bm_max`, `bm_subtract`) via `glBlendFuncSeparate` / `glBlendEquation`.

### Phase C — Collision Masks, Rotated/Scaled BBoxes & `mp_grid` Fidelity (`gm82_mask.c`)
- **Gap**: Precise pixel masks, rotated sprite `image_angle`/`image_xscale`/`image_yscale` AABB & bitmask transforms, and `collision_line` / `collision_circle` / `place_meeting` edge cases vs. GM8.2 Windows (`bbox_left/right/top/bottom` fractional rounding).
- **Plan**:
  1. Cache 1-bit bitmasks per sprite subimage from decoded PNG/BGRA streams (`gm82_sprite_decode.c`).
  2. Implement inverse-transform pixel overlap testing in `gm82_mask.c` using GM8.2 rounding (`floor(x + 0.5)` / Delphi banker's rounding verification against sample GMKs).
  3. Support tile/solid grid fast spatial hashing to keep collision checks $O(1)$–$O(k)$ at 90 FPS.

### Phase D — Native Audio Streaming (`gm82_opensles.c` + Decoders)
- **Gap**: Windows GM8.2 embeds uncompressed WAV, MP3, OGG, and MIDI in GMK `SOND` chunks or external `sound/` directories (`gm82snd`). Android `SoundPool` has size limits for music tracks and higher trigger latency.
- **Plan**:
  1. Decode WAV/OGG/MP3 natively in C (e.g., `dr_wav` / `stb_vorbis` / `minimp3` single-header decoders) inside `gm82_audio_mixer.c` feeding a low-latency **OpenSL ES** (or Oboe/AAudio) ring-buffered PCM output mixer with per-sound pitch, pan, and loop points.
  2. Retain `SoundPool` only as an explicit fallback if native OpenSL initialization fails on restricted devices.

### Phase E — Extensions (`.gex` / `.ged`), `.gm82` Full Fidelity & Windows DLL Shims
- **Gap**: Win32 DLL calls (`external_define` / `external_call`) cannot run x86 PE DLLs natively on ARM64 Android; `.gm82` extensions (`gm82core`, `gm82dx9`, `gm82snd`, `gm82net`, `gm82joy`) expect exact built-in coverage.
- **Plan**:
  1. Map standard GM82 extension libraries (`gm82core`, `gm82dx9` compat helpers, `gm82joy` via Android `InputDevice` / `KeyEvent` / `MotionEvent` axes, `gm82net` via POSIX sockets) natively in `gm82_ged_extensions.c` & `gm82_portable_compat.c`.
  2. Emit explicit diagnostics (never silent fake success) whenever a game loads an unsupported custom Win32 `.dll`.
  3. Add automatic Robolectric/JVM + headless C harness parity tests comparing state snapshots after N steps on all 4 sample games (`mario_bros.gmk`, `plataformas.gmk`, `shooter.gmk`, `zelda.gmk`) against expected Windows GM8.2 baseline traces.

---

## 5. Verification Status

| Check | Status | Notes |
|---|---|---|
| CMake / NDK + Android APK Build | Verified via `compile_applet` (see turn output) | Confirms C/C++ headers, JNI signatures, GLES2, and Java compilation across ABIs. |
| Host Pipeline (`mario_bros`, `plataformas`, `shooter`, `zelda`) | Historical baseline: `4/4` (`docs/ACCEPTANCE_SCORE_2026-10-26.md`) | Must be re-executed locally on a host machine with shell/emulator access if host binaries are modified. |
| Physical / Emulated Android Device Verification | **`PASS=0 TOTAL=0`** (Unverified) | Container has no ADB or Android Emulator access; visual 90 FPS rendering, touch dragging, and OpenSL ES audio require real device / emulator logcat verification. |
