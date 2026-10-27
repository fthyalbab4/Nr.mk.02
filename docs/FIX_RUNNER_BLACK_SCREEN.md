# Fix: Runner black screen

## Cause
Landscape NES CSS/class patches (`nm-nes-runner`, `max-h-none`, `height:100%` on iframe/canvas, absolute controls) collapsed the game surface height to 0 on Android WebView → black screen.

## Fix
1. Restore original runner container: `flex-col`, `bg-[#0d0f14]`, `max-h-[58vh]` screen bezel.
2. Neutralize `runner-landscape-nes.css` (no layout !important).
3. Keep export scroll + Mario step + export native save (unrelated).

## User action
Rebuild APK from latest main after this commit / after CI materialize runs.
