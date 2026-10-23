# REA + GameMaker 8.2 portable → Nor Maker (`Nr.mk.02`)

## What REA is
[morluto/rea](https://github.com/morluto/rea) — MCP/CLI for reverse engineering (binaries, JS, APK, …).
Official install: `npx rea-agents setup` or `npm install -g rea-agents` ([README AR](https://github.com/morluto/rea/blob/main/docs/readme/README_ar.md)).

**REA does not dump a full GM8.2 engine into Nor Maker in one click.**
It returns *evidence* (symbols, strings, decompile snippets with Hopper/Ghidra/IDA). You still implement clean-room code in `app/src/main/cpp`.

## Portable tree (reference binaries)
Source listing:
`https://github.com/MahmoudMMorsy/NM.Maker.0..1.0/tree/main/game%20maker/portable`

Includes (among others):
- `GameMaker.exe` — IDE
- `gm82hub.exe`, `gm82room.exe`, `gm82venc.exe`, … — GM82 tooling
- `fnames` — GML name list (~1900 lines / hundreds of API symbols)
- `Lib/`, `extensions/`

Prefer **open** [GM82Project](https://github.com/GM82Project) sources for behavior when available; use PE RE only for *behavior evidence*, not copy-paste of proprietary code into the repo.

## Install REA (machine with Node ≥22.19)
```bash
npm install -g rea-agents --registry https://registry.npmjs.org/
rea --help
rea capabilities
```
Native PE analysis needs **Ghidra or Hopper or IDA** configured for REA. Without them, native decompile tools stay unavailable.

## Workflow toward Nor Maker (feature by feature)
1. Pick **one** gap (e.g. `path_position`, event order, collision mask).
2. Evidence:
   - Open source: gm82core / docs
   - Optional: `rea` + Ghidra on a local copy of runner/DLL you are allowed to analyze
   - API surface: `fnames` from portable
3. Implement in `Nr.mk.02` under existing files (`gm82_runtime.c`, `gm82_events.c`, `gm82_gml_*`, …) — **complete, do not replace the engine**.
4. Prove with `tools/run_host_pipeline.sh` / ASSEMBLE.
5. Commit on `main` with evidence note in PR body (not fake %).

## What this environment already checked
- `rea` CLI installs (npm package `rea-agents`).
- Host here is **Linux**: macOS native providers unavailable; full PE decompile needs Ghidra setup on a workstation.
- `fnames` parsed vs current `Nr.mk.02` tree: large GML surface still missing; a short **priority** stub list is in `tools/fnames_priority_gaps.txt` (variables/properties often, not only functions).

## Legal / hygiene
- Do **not** commit GameMaker.exe / runner DLLs into `Nr.mk.02`.
- Do **not** paste decompiled proprietary code verbatim; reimplement from behavior specs + open references.
- APK/binaries already removed from `main` for size/hygiene.

## Next practical step
Implement the next missing **runtime** items from games that fail, using `fnames_priority_gaps.txt` + host suite — not a bulk RE of all PE files.
