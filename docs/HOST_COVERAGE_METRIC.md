# Host coverage metric (honest, measurable)

## Scope
Host C runtime for typical GM8/GMK patterns **without device**:
load → room/instances → step/draw → common DnD + GML.

**Out of scope:** APK, OpenSLES HW, DLL/GEX, Windows 1:1.

## Scorecard (weights = 100)

| Area | W | Score | Weighted |
|------|---|-------|----------|
| GMK load + room | 15 | 90 | 13.5 |
| Event loop fire_* | 10 | 85 | 8.5 |
| Movement basic | 10 | 85 | 8.5 |
| DnD named map | 15 | 82 | 12.3 |
| DnD if/else sequencing | 10 | 80 | 8.0 |
| GML builtins common | 15 | 70 | 10.5 |
| String last_string | 5 | 80 | 4.0 |
| Draw image_* | 10 | 80 | 8.0 |
| Sound host queue | 5 | 50 | 2.5 |
| Save/load extras | 5 | 60 | 3.0 |

**Weighted host total ≈ 79** (after if/else APPLY lands on tree). Target ≥80 with small GML fills next.

Verify: `VERIFY_AFTER_APPLY.py` + `run_host_pipeline.sh` → ok=4 fail=0.
