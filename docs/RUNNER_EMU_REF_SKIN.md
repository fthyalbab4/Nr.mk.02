# Runner skin — user-approved reference

Target: landscape emulator chrome like the attached screenshot
(D-Pad left cyan, A/B right circles, game centered, black side panels).

## Rules
- **Only with user approval** (this skin is explicitly requested).
- Landscape media-query only; portrait keeps handheld frame.
- `min-height: 55vh` on `.nm-emu-screen` to prevent black screen.
- No `height:100%` on iframe/canvas that collapses the parent.

## Files
- `app/src/main/assets/www/runner-emu-ref.css`
- `tools/gap_fill_20261013/APPLY_EMU_REF_SKIN.py`
