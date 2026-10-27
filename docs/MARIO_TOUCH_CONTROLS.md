# Mario Bros touch controls fix (2026-10-27)

## Root cause
`gm82_native_touch` ignored x/y and only toggled **VK_SPACE**. Physical DPAD keys worked in theory; phones have no DPAD → almost no movement.
Web path had `#nor-gamepad-overlay { pointer-events: none }` in older patches → same symptom.

## Fix (native Android)
1. **C**: zone-based virtual pad in `gm82_native_touch` (left/right/jump).
2. **Java**: multi-touch in `Gm82SurfaceView` → `nativeKeyDown/Up` for VK_LEFT/RIGHT/SPACE/UP.

### Layout (lower 60% of screen)
| Zone | Keys |
|------|------|
| Left 0–20% | Left |
| 20–40% | Right |
| Right 60–100% | Space + Up (jump) |

## Physics / collision
Separate from input. Host sample can render/step; solid landing covered by `test_mario_physics_parity`. After touch works, re-test blocks/enemies; if FAIL, patch `place_meeting` / solid path with log evidence.

## Web
Rebuild overlay with pointer-events enabled, or use same zone logic in the runner JS. Minified `index.html` needs a dedicated inject — track as follow-up if native APK path is primary.

APPLY: `tools/gap_fill_20261013/APPLY_MARIO_TOUCH_CONTROLS.py`
