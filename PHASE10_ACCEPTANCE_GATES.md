# Phase 10 — Mandatory acceptance gates (2026-11-07)

Goal: define what must be green before claiming a change is mergeable to main.
This is a **gate checklist**, not a GM8.2 Portable certificate and **not** 100% parity.

Environment note: some overlay paths refuse `chmod +x` / direct `./binary` (`Permission denied`);
binaries were executed via `/lib64/ld-linux-x86-64.so.2 ./tests/<bin>` and exit codes recorded.

## Gate matrix (this host session)

| Gate ID | Requirement | Result | Evidence |
|---------|-------------|--------|----------|
| G1 | Tri-mirror parity (`python3 tools/verify_core_mirrors.py`) | **PASS** | 108 files identical (src+include+root keys) |
| G2 | Host shared lib builds (`make libgm82_host.so`) | **PASS** | up to date / rebuilds clean |
| G3 | No duplicate dynamic symbols in `libgm82_host.so` | **PASS** | `nm -D` uniq -d count = 0 |
| G4 | with / self / other behavioral | **PASS** | `tests/test_with_semantics` exit 0 |
| G5 | Arrays + compound assign behavioral | **PASS** | `tests/test_array_semantics` exit 0 |
| G6 | Event order + deferred destroy | **PASS** | `tests/test_event_order` exit 0 |
| G7 | Collision / movement AABB | **PASS** | `tests/test_collision_movement` exit 0 |
| G8 | Resource import + GMZ traversal reject | **PASS** | `tests/test_resource_import` exit 0 |
| G9 | Draw / input / sound **host** | **PASS** | `tests/test_draw_input_sound` exit 0 |
| G10 | Game corpus 4 samples (load→room→30 steps→draw) | **PASS** | `tests/test_game_corpus` exit 0 |
| G11 | `make test` convenience target | **PASS (Phase 11)** | runs via ld-linux `./path` |
| G12 | Legacy `test_full_suite` link+run | **PASS (Phase 11)** | links against full OBJ; suite green |
| G13 | Portable GM8.2 reference log compare | **NOT_RUN** | no reference runner in environment |
| G14 | Android device playtest / OpenSLES / JNI keys | **DEVICE_BLOCKED** | U2/U3/U5 |

## Merge policy tied to gates

A PR may merge to main only if:

1. **G1 PASS** after the change (mirrors still identical or intentionally synced).
2. All **G4–G10** still PASS (or an intentional, documented waiver for a named gate).
3. Change is **small** (no bulk tree from stale Jules PR).
4. New behavior has a **failing test first** when fixing semantics.
5. Docs remain honest: no `is_100`, no fake Portable compare.

Must **not** treat as merge proof:

- APK assemble success alone
- STATUS.md historical claims without re-run
- Open PR green checks that only sync mirrors
- G11/G12 failures being ignored without documenting why

## Recommended CI snippet (future)

```bash
python3 tools/verify_core_mirrors.py
make -C NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX libgm82_host.so
for t in test_with_semantics test_array_semantics test_event_order \
         test_collision_movement test_resource_import \
         test_draw_input_sound test_game_corpus; do
  /lib64/ld-linux-x86-64.so.2 NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/tests/$t
done
```

## Residual known gaps (do not paper over)

- `match_*` API single design (#361 residue)
- Pixel-precise / rotated collision parity
- Draw GUI + reference image hashes
- OpenSLES real audio, WebView→JNI input
- Portable reference corpus compare

## Verdict

**Host acceptance gates G1–G12: PASS in this session.**  
**G13/G14 not available.**  
Host core work is **merge-gated by G1+G4–G12**, not by 100% claims.

## Phase 11 follow-up
G11/G12 closed — see `PHASE11_HOST_RESIDUAL.md`. Device/Portable still open.
