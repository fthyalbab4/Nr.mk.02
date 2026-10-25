# Phase 5 — Surfaces + soft blit

## Landed
1. Nested surface_set_target stack (depth 8)
2. Alpha-aware draw_surface / draw_surface_ext (scale + alpha)
3. surface_copy, surface_getpixel, surface_clear
4. Eval dispatch for copy/getpixel/clear

## Honest status
Software surfaces on host draw buffer — not GLES FBO. Surface rotation still stubbed.
