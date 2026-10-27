# Mario video diagnosis (2026-10-27)

## What the video shows
- GMK original runner UI (`تشغيل GMK الأصلي`) with A/JUMP, B/FIRE, C/BOMB, D/MELEE + D-Pad in layout code
- Scene renders (hill, coins, mushroom, enemy)
- Enemy walks into Mario; Mario dies/respawns in a loop
- Player appears unable to move or jump out of danger

## Root cause (runner path)
`sendKey` in `assets/www/index.html`:
```js
const iwin = iframeRef.current?.contentWindow;
if (!iwin) return; // ALL pad input discarded
```
If the GML `Input` state lives on the **parent** window (or iframe not ready), left/right/jump never reach `keyboard_check`.

Secondary: `handleBtnDown` only called `sendKey(primaryKey)` — first key only, not the full alias list.

## Fix
APPLY_MARIO_SENDKEY_FIX.py:
1. Do not return early when iframe is missing
2. Sync `window.Input` / `P1_Input` / `syncKeyboardToPlayers` always
3. Dispatch KeyboardEvent on parent when no iframe
4. Btn down/up fire **all** keys in the array

## After update
Rebuild/reload APK or clear WebView cache. Test:
- D-Pad left/right → Mario walks
- A/JUMP → jumps
- Then re-check enemy stomp / block collision (separate if still wrong)
