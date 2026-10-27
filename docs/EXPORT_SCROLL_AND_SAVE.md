# Export menu scroll + real save

## Problems
1. File menu export list too long — no scroller, lower items unreachable.
2. On Android WebView, `<a download>.click()` often does nothing.

## Fixes
1. MenuDropdown: max-height + overflow-y-auto.
2. handleExport uses NorNative.saveExportBase64 when available (Downloads/NORMaker).
3. MainActivity: saveExportBytes + saveExportBase64 bridge.

## Scope
File menu / export only — not the Game Runner landscape UI.
