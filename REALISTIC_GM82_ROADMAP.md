# REALISTIC_GM82_ROADMAP

Governing plan for near-parity with Game Maker 8.2.  
**Goal is provable compatibility**, not function-count or shallow test green.

Adopted: 2026-11-05  
Baseline: see `BASELINE_REPORT.md` (commit frozen on main)

---

## Definition of “near GM82”

All of the following must hold:

1. Load and run real GMK/GM82 projects (not static screenshots).
2. Full event cycle: Create, Begin Step, Step, End Step, Collision, Alarm, Draw, Draw GUI, Destroy.
3. Correct `self` / `other` / `with` / `noone` / `all` semantics.
4. Matching movement and basic collision behavior.
5. Matching event order and results.
6. Known test games corpus (not a single synthetic test).
7. Zero unplanned diff across:
   - `app/src/main/cpp` (canonical)
   - `app/src/main/cpp_backup`
   - `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX`
8. Replayable tests with saved results.
9. No bulk-merge of stale full PRs onto current main.

---

## Phase 0 — Baseline freeze (DONE as of this commit)

- [x] Record main SHA and honest baseline
- [x] Record documented host results vs re-run limits
- [x] Forbid bulk PR merges
- [x] Canonical core = `app/src/main/cpp/`

---

## Phase 1 — Mirror discipline

- Single source of truth: `app/src/main/cpp/`
- Mirrors updated only by sync, not independent development
- CI gate: `python3 tools/verify_core_mirrors.py` must pass
- Checks: `.c` / `.h` / shared tests; no orphan files

**Merge policy**

Forbidden:
- Merging PRs hundreds of commits behind
- Copying whole trees from old PRs
- Hand-editing main while a large stale PR is open

Allowed:
1. Branch from current main
2. One function or small group
3. Failing test first
4. Implement
5. Tests
6. Auto/mirror sync
7. Small PR

---

## Phase 2 — Gap inventory (three sources)

1. GM82Project docs  
2. GM82 reference code  
3. GM 8.2 Portable behavior (REA/Ghidra where needed)

Per function registry fields:

| Field | Meaning |
|-------|---------|
| name | GML / event name |
| signature | args |
| GM82 behavior | reference |
| NOR status | missing / stub / partial / implemented |
| evaluator | wired? |
| native bridge | reaches core? |
| test | behavioral test? |
| evidence | source |
| confidence | low / med / high |

Raise verified % only when: implementation + wiring + behavioral test + regression exist.

---

## Phase 3 — GML semantics (priority over function spam)

### A. Scope / context
`self`, `other`, `noone`, `all`, `with` (instance/object/all/noone/self), nested `with`, restore after end/return/destroy.

### B. Arrays
read/write, nested, dynamic index, bounds, string index, assign in expr, with + bytecode.

### C. Bytecode
`+= -= *= /= %=`, jump, loop, break, continue, return, args, short-circuit, precedence, local/global/instance.

### D. `match_*` API
One API only (IDs vs strings vs conversion layer). No conflicting declarations.

---

## Phase 4 — Event cycle

Ordered log per instance; compare to GM82 reference:

```text
room_start, create, begin_step, step, collision, end_step,
alarm, draw, draw_gui, room_end, destroy
```

Also: create during Step, destroy during Draw, room change in Alarm, collision	o destroy, user events, visible=false draw, alarms 0–11.

Having `event_*` names is not enough.

---

## Phase 5 — Movement & collision

1. Stable AABB (origin, mask, scale, angle, solid, order, sweep, slide).
2. Then pixel-precise masks (alpha threshold, flip, scale, rotation, transparent-only overlap).

Take collision fixes from old PRs only with dedicated tests — never whole PR dump.

---

## Phase 6 — Resources & import

GMK / variants, rooms, objects, sprites, backgrounds, sounds, paths, scripts, timelines, fonts, creation code.

Security: zip traversal, oversized, bad indices, incomplete code.

Import is not success until the game **runs events** after load.

---

## Phase 7 — Draw / sound / input

Draw: depth, animation, scale, angle, alpha, blend, backgrounds, tiles, views, GUI, surfaces if supported — prefer reference hashes, not “not black”.

Sound: document supported vs gap; no silent stubs pretending completeness.

Input: press/held/release, focus, WebView	o Java	o JNI	o native; split keyboard work from sandbox/signing/import (do not re-merge PR #367 as one blob).

---

## Phase 8 — Game corpus as equivalence tests

Minimum corpus targets:

1. simple movement  2. collision  3. shooter  4. platformer  
5. mario-like  6. heavy `with`  7. alarms  8. multi-room  
9. creation code  10. treasure.gmk (if available)

Per game metrics: room, instance count, player id/pos/speed, transitions, collisions, destroys, draw frames, input response, save/load.

Compare runtime logs: GM82 ref vs NOR host vs full core vs Android when in scope.

---

## Phase 9 — Open PRs (extract only)

| PR | Action |
|----|--------|
| 356 | Extract lifecycle-only if missing on main; else close duplicate |
| 358 | Diff vs main; take only unique test/fix |
| 361 | New PR: events + match API (single signature) + tests |
| 364 | Extract missing builtins/geometry/`string_replace_many` only if absent |
| 365 | Keep Mario Phase 3.6 test only if not on main |
| 367 | Split: (1) CI/mirrors (2) keyboard (3) GMX/GMZ (4) sandbox/signing |

---

## Phase 10 — Mandatory gates before merge to main

```text
Build:     C compile, full-core make test, host pipeline, no dup symbols
Mirrors:   verify_core_mirrors.py PASS
VM:        parser, bytecode, with/self/other, arrays, event order tests
Games:     fixtures load+run; movement/draw/input observed; not static image
Regression: old + new tests; must not break mario/shooter/zelda/treasure
```

---

## Honest progress metrics (never one number)

```text
Parser parity:        XX%
VM semantics:         XX%
Runtime/events:       XX%
Rendering/input:      XX%
Import/resource:      XX%
Tested game parity:   XX%
```

Raise a bar only with tests. Example honest snapshot:

```text
Implemented: ~partial
Verified:    lower than implemented
Portable-confirmed: lower still
End-to-end games: 4 documented host samples
Known gaps: residual stubs + device + deep collision/draw
```

---

## Correct workflow

```text
main frozen
  → unified gap inventory
  → failing test
  → small implement
  → mirror sync
  → host/full-core tests
  → real game check
  → small PR
  → review + merge
```

**Not:** bulk PR merge → three trees copied → shallow green → claim 100%.
