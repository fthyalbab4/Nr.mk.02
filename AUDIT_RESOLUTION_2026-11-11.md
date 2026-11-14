# Full audit & conflict resolution (2026-11-11)

## A. Code integrity

### gm82_batch4_extras.c
- Main recovered to full healthy body (blob lineage 957594c).
- Resolution: keep full main + additive residual draw stubs from PR #396:
  - draw_background_tiled_extra, draw_sprite_part_extra, draw_sprite_tiled_extra
  - draw_sprite_part_centered, draw_spotlight, draw_setb, draw_setf
- Applied identically on tri-mirror paths.

### Critical GML/runtime files (PR #396 / #394)
| File | Resolution | Rationale |
|------|------------|-----------|
| gm82_gml_bytecode.c | KEEP main | AST emit, BYTECODE_FAIL, with-unwind stronger than PR |
| gm82_gml_eval.c | KEEP main | Native AST eval path must not be deleted |
| gm82_gml_eval.h | KEEP main | Declarations match main eval |
| test_gml_parser.c | KEEP main | Avoid overwriting host parser tests |
| tools/verify_core_mirrors.py | KEEP main | Canonical Phase-1 gate |
| STATUS.md | KEEP main | Docs-only PR claims |

## B. Scripts audit
| Script | Role | Issues |
|--------|------|--------|
| tools/verify_core_mirrors.py | Tri-mirror byte identity | OK |
| tools/progressive_pr_integrate.sh | One-PR integrate | OK — aborts; no ours/theirs |
| Makefile gates | Host acceptance | ld-linux on noexec FS |
| windows-build.yml | MinGW + Wine | Separate from bulk PR merge |

## C. Policy
- main is authority
- no bulk merge of open Jules PRs
- is_100: false
- G13 NOT_RUN / G14 DEVICE_BLOCKED unchanged

## D. Open PRs disposition
- #396: extract batch4 stubs only; remainder superseded/conflict
- #394: critical_manual — nested with largely covered by host tests
- #393: too large — do not merge whole
- Mirror-only audit PRs: close as duplicate if mirrors already PASS
