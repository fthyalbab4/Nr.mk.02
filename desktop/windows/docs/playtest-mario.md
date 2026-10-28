# Play test: “mario bros.gmk” from the cloud catalog

Date: 2026-10-29. Engine: the shared GM82 C runtime (`app/src/main/cpp`), the same
code the Android app and `NorMakerStudio.exe` link. Project: `mario bros.gmk` from
the in-app cloud catalog (`cdn.jsdelivr.net/gh/floowsnaake/GMK8_Examples`), 92,098
bytes, SHA-256 `6532a5c5…a2951426`. It is the same file as the bundled
`samples/mario_bros.gmk`, so the sample and the cloud entry behave identically.

Harness: `nor_play_test.c` (loads the GMK, drives `gm82_native_*`, injects keys,
samples frames and live instances). Runs under ASan + UBSan; no sanitizer reports
during a 900-frame run.

## What the run shows

| Frame | Mario x | y | hspeed | Note |
| --- | --- | --- | --- | --- |
| 1 | 32 | 112.9 | 0 | spawn, falling |
| 30 | 32 | 208.0 | 0 | landed on the floor row |
| 60 | 95 | 208.0 | 3 | moving right while `RIGHT` is held |
| 300 | 305 | 200.4 | 3 | jump started (`SPACE`) |
| 360 | 365 | 129.4 | 3 | airborne, rising |
| 450 | 455 | 208.0 | 3 | landed again |
| 900 | 1408 | 208.0 | 3 | reached the end of the level |

Input response, measured on the same spawn with different key sets:

| Input | Mario x after 60 frames |
| --- | --- |
| none | 32 (stands still) |
| `RIGHT` held | 215 |
| `LEFT` held | 0 (walks to the room edge) |
| `SPACE` held | x unchanged, y 179 → 143 → 108 → 72 → 37 (jump) |
| `RIGHT` + `SPACE` | x rises and y falls together (diagonal jump) |

Rendering: 640×208 view, camera scrolls with the player, the level fills ~96 % of
the frame, and the image changes every frame. See `playtest-mario-progress.png`.

## Defects found and fixed in this change

1. **GML code events were never bound in the native bridge.** `gm82_jni.c` (the old
   Android entry point) calls `gm82_events_autobind_gml_from_gmk()`; the newer
   `gm82_jni_java_bridge.c` — used by the Android native loop *and* by
   `NorMakerStudio.exe` — did not. Result: every game loaded through the bridge was
   a still picture. Fixed: the bridge now scans and binds GML events from the file
   bytes before releasing them.
2. **The frame buffer was the size of the room, not the camera.** The renderer
   already offsets by `view_x/view_y`, so a room-sized buffer (1500×208 for this
   level) drew a ~320-pixel window of content inside a mostly empty image, and the
   player appeared to vanish once he walked past the window. Fixed: the frame is
   `view_w × view_h` (clamped to the room), and `gm82_native_resize()` no longer
   overwrites the room dimensions with the surface size.
3. **Drag-and-drop action tables were bound blindly.** `gm82_actions_scan_gmk()` is
   a byte-level heuristic; for this file it returns one pseudo-object
   `_global_actions` with 10 unrelated actions (`action_kill_object`,
   `action_next_room`, …). Binding that table destroyed all 178 instances on the
   first frame. Fixed: the table is bound only when it names objects that exist in
   the project, otherwise it is dropped with a diagnostic line.

## Still missing (not fixed here)

- **Drag-and-drop (action) events are not really decoded.** 12 of the 21 objects in
  this game carry action-based events, and the engine has no structured GMK8
  action-block parser, only the byte heuristic. Consequence in this level: enemies
  (`obj_enemigo_1`), coins (`obj_moneda`) and question blocks
  (`obj_bloque_visible`) never appear — they are created by actions, and the room
  itself only contains blocks, Mario, the bonus mushroom, the castle and the
  finish marker (181 instances). Mario can therefore walk to the end of the level
  but there is nothing to collect, avoid or break.
- **Event-type attribution is heuristic.** The player's movement code
  (`if (keyboard_check(vk_right) …)`) is reported under a *Create* event, which
  cannot be right for continuous movement; the decoder attaches code snippets to
  events by scanning, not by reading the event header.
- **No audio on the PC build.** `sound_play(snd_moneda)` is decoded, but there is no
  Windows audio backend, so the run is silent.
- **No text/HUD rendering verified.** Draw events that use `draw_text` are not
  exercised by this title; they need their own pass.
- **No room transition.** Reaching the finish marker does not switch rooms, because
  the switch is an action (`action_next_room`) in an action event.

## Reproduce

```sh
gcc -std=gnu11 -O1 -g -fsanitize=address,undefined -I include -I . \
    nor_play_test.c src/*.c gml_vm.c -lz -lm -o nor_play_test
./nor_play_test mario_bros_cloud.gmk 600 out_ppm "RIGHT:30-600,SPACE:120-140"
```

The same checks are available at runtime through the shell: `engine.info` (frame,
room, instance count) and `engine.instances` (per-instance object, position, speed),
so the behaviour above can be reproduced from the app or from `curl` against
`NorMakerStudio.exe --serve`.
