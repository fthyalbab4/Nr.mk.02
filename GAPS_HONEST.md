# GAPS_HONEST

## Host (in-scope scorecard)
See `docs/HOST_COVERAGE_METRIC.md` — target ≥80% **host scope only**.

### Landed on main (code)
- String path + DnD map + image_* draw
- **Real action_if_score/lives/health/dice/number** (not always-true)
- **if/else skip** in `gm82_actions_fire_create` / `fire_step`
- Pipeline samples ok=4 fail=0 (after materialize)

### Still open on host (toward / past 80)
- Broader GML edge cases (typed strings, with(), surfaces full)
- Full DnD if-variable / collision ifs
- object_index 1:1 when FAIL samples appear

### Needs you (not host %)
U2 device logcat · U3 NDK/APK · U4 DLL/REA · U5 OpenSLES HW  
→ `docs/PLAN_USER_INTERVENTION.md`
