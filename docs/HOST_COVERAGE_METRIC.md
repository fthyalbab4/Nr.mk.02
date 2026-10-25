# Host coverage metric (honest)

## Scope
Host C runtime **without device**: GMK load → instances → step/draw → common DnD/GML.

Out of scope for this %: APK, OpenSLES HW, DLL/GEX, full Windows 1:1.

## Scorecard (weights = 100) — after APPLY_DND_IF_ELSE on main (`89f08a7a`)

| Area | W | Score | Weighted |
|------|---|-------|----------|
| GMK load + room | 15 | 90 | 13.5 |
| Event loop fire_* | 10 | 85 | 8.5 |
| Movement basic | 10 | 85 | 8.5 |
| DnD named map | 15 | 85 | 12.75 |
| DnD if/else sequencing | 10 | 85 | 8.5 |
| GML builtins common | 15 | 70 | 10.5 |
| String last_string | 5 | 80 | 4.0 |
| Draw image_* | 10 | 80 | 8.0 |
| Sound host queue | 5 | 50 | 2.5 |
| Save/load extras | 5 | 60 | 3.0 |

**Weighted host total ≈ 80** (79.75 rounded).

Evidence: `action_if_number` + real score/lives/health compares + `fire_step` skip logic on `app/src/main/cpp/src/gm82_actions.c`.
Pipeline samples historically ok=4 fail=0 (re-run after pull).

## Still not 80% of *all* GM games
That is a different metric (device + DLL + full GML). See PLAN_USER_INTERVENTION U2–U5.
