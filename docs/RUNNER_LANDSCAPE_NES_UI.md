# Runner Landscape NES UI — **Runner only**

## Scope guarantee
- Class `nm-nes-runner` is applied **only** on the Game Runner container (`ref: containerRef`).
- All CSS selectors are prefixed with `.nm-nes-runner` — **IDE / Studio / main app shell are not restyled**.
- Controls use `position: absolute` **inside** the runner (not `position: fixed` on the viewport), so they cannot cover the rest of the app when the runner is closed.

## Files
- `app/src/main/assets/www/runner-landscape-nes.css`
- `tools/gap_fill_20261013/APPLY_LANDSCAPE_NES_UI.py`

## Not changed
- Main navigation, project browser, cloud catalog, editors, settings.
- Input key mapping (`handleBtnDown` / GML keys) — visual layout only.
