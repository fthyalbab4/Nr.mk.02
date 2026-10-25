# Cloud / Sample Game Acceptance List

Criterion per game:
- [x] app opens (no instant crash)
- [x] first room not pure black (something drawn OR explicit error UI)
- [x] primary move/input works
- [x] room change OR game_restart works
- [x] sound_play does not crash (silent OK)

| # | Name | Path / Source | Status | Notes |
|---|------|---------------|--------|-------|
| 1 | Mario Bros | `app/src/main/assets/www/samples/mario_bros.gmk` | PASS | 5/5 criteria passed |
| 2 | Plataformas | `app/src/main/assets/www/samples/plataformas.gmk` | PASS | 5/5 criteria passed |
| 3 | Shooter | `app/src/main/assets/www/samples/shooter.gmk` | PASS | 5/5 criteria passed |
| 4 | Zelda | `app/src/main/assets/www/samples/zelda.gmk` | PASS | 5/5 criteria passed |

All status values are backed by host pipeline logs in `docs/HOST_PIPELINE_2026-10-25.md` and individual run reports `docs/CLOUD_RUN_<game>_2026-10-25.md`.
