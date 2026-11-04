# Mario Bros GML & Action Parity Matrix

This document establishes the official matrix of GameMaker 8.2 functions and scripts extracted from and required by `mario_bros.gmk`.

| Function / Script | Present in Native C Engine | Direct Unit Test | Used in Mario | Status & Implementation Details |
|---|:---:|:---:|:---:|---|
| `place_free(x, y)` | Yes (`gml_place_free`) | Yes (`test_mario_scripts_fixtures.c`) | Yes | Tests mask and solid collisions across world bounding boxes. |
| `move_contact_solid(dir, maxdist)` | Yes (`gml_move_contact_solid`) | Yes (`test_mario_scripts_fixtures.c`) | Yes | Sweeps instance along direction until contact with solid instance. |
| `motion_set(dir, speed)` | Yes (`gml_motion_set`) | Yes (`test_mario_scripts_fixtures.c`) | Yes | Sets direction, speed, and computes hspeed/vspeed components. |
| `room_restart()` | Yes (`gml_room_restart`) | Yes (`test_mario_scripts_fixtures.c`) | Yes | Resets room instances, camera, and runtime state. |
| `instance_destroy()` | Yes (`gml_instance_destroy`) | Yes (`test_mario_scripts_fixtures.c`) | Yes | Flags instance alive=0 and defers cleanup. |
| `sound_play(snd)` | Yes (`gml_sound_play`) | Yes (`test_gml_ds_collisions.c`) | Yes | Low-latency audio queue enqueue; hardware audio pending device verification. |
| `sound_loop(snd)` | Yes (`gml_sound_loop`) | Yes (`test_gml_ds_collisions.c`) | Yes | Enqueues looping audio stream. |
| `sound_stop(snd)` | Yes (`gml_sound_stop`) | Yes (`test_gml_ds_collisions.c`) | Yes | Stops specified audio channel. |
| `script: cambiar_view` | Yes (`gm82_script`) | Yes (`test_mario_scripts_fixtures.c`) | Yes | Adjusts view[0] coordinates and bounds. |
| `script: friccion_plataformas` | Yes (`gm82_script`) | Yes (`test_mario_scripts_fixtures.c`) | Yes | Adjusts platform contact and zeroes vspeed. |
| `script: gravedad` | Yes (`gm82_script`) | Yes (`test_mario_scripts_fixtures.c`) | Yes | Computes falling gravity acceleration when place_free(x, y+1) is true. |

## Verification Criteria
All functions and scripts above are tested under unit fixtures and in 160-frame deterministic physics replay on host runners.
