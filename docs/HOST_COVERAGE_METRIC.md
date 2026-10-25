# Host coverage metric (honest, measurable)

## Scope definition (what “80% host” means)
**In scope:** host C runtime for typical GM8/GMK patterns exercised without Android device:
load GMK → room instances → step/draw → common DnD + common GML + input samples.

**Out of scope for this number:** physical APK, OpenSLES hardware, DLL/GEX, full Windows portable 1:1, every GML edge case.

## Scorecard (weights sum 100)

| Area | Weight | Evidence | Score 0–100 | Weighted |
|------|--------|----------|-------------|----------|
| GMK load + room/instance | 15 | 4/4 pipeline samples | 90 | 13.5 |
| Event loop order + fire_* | 10 | begin/step/end/draw present | 85 | 8.5 |
| Movement / physics basic | 10 | Mario pipeline PASS | 85 | 8.5 |
| DnD action map (named) | 15 | ~80 named handlers + real if_* | 80 | 12.0 |
| DnD if/else sequencing | 10 | skip logic in fire_create/step | 75 | 7.5 |
| GML builtins common | 15 | builtins.c + string path | 70 | 10.5 |
| String last_string path | 5 | set_last ×12 + repeat/concat | 80 | 4.0 |
| Draw (sprite/text/image_*) | 10 | runtime draw angle/alpha | 80 | 8.0 |
| Sound host queue | 5 | queue PASS host; no HW | 50 | 2.5 |
| Save/load / extras | 5 | game_save/load actions | 60 | 3.0 |

**Weighted total (host scope): ≈ 78 → target ≥ 80 after DnD if/else land + small GML fills.**

Recompute after each materialize. No marketing %.

## How to re-verify
```bash
python3 tools/gap_fill_20261013/VERIFY_AFTER_APPLY.py
bash tools/run_host_pipeline.sh   # expect ok=4 fail=0
```
