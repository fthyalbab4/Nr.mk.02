# REA / Ghidra / GM82 binaries — honest status

## What this environment cannot do

| Item | Status |
|------|--------|
| REA MCP (`rea_decompile_function`, …) | **Not connected** to this agent |
| Ghidra / `analyzeHeadless` | **Not installed** here |
| Proprietary GameMaker **Runner** EXE/DLL | **Not present**; analyzing commercial runner may be license-restricted |
| REA decompile of closed runner instance pool | **Did not happen** |

## What *was* analyzed (lawful, open source)

### GM82Project/gm82core (extension, not the runner)

- https://github.com/GM82Project/gm82core
- `gm82core.dll` is built from **published C + GML** (QoL helpers), not the YoYo/Mark runner.
- `instances.gml`: `instance_create_depth`, `direction_to_object`, `distance_to_center`, `move_towards_fixed`, …
- `terrible_gm8_hacking.c`: Windows **process memory patches** into the proprietary runner (IO clear on room end, window resize). Hints only — **not** portable to Android; not copied as patches.

### GM82Project/gm82dx9

- Open DX9 extension source — informs surface-safety API design; not Android GLES.

## Clean-room rules in Nr.mk.02

1. Re-implement **published** gm82core GML helper semantics.
2. Event order from public GM8 docs + our tests (`docs/DETERMINISTIC_PIPELINE.md`).
3. No decompiled proprietary code or runner RVAs.

## If you run REA+Ghidra yourself

1. Legal right to the binary.
2. Ghidra + `npx rea-agents` MCP on *your* machine.
3. Prefer **open** builds you compile (`gm82core.dll`).
4. Return behavioral notes as tests; still clean-room reimplement in Nr.mk.02.

## Host validation

- Event order test PASS
- 4/4 sample GMK MOVED + DRAW_OK
