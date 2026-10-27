# gm82core batch-all (2026-10-26)

One-shot coverage of remaining public gm82core `#define` names not already in NOR eval.

## Coverage policy
- **Real C** (~30): color_blend, gauss_range, envelerp, HSV, strings helpers, instance_some, collision_check_fast, outside_room, etc.
- **Safe stubs** (~136): return 0 for Windows-only / compiler / complex ds_bag / draw_* extras / registry / async execute — **no crash** when called.
- Dispatch: `gm82_gm82core_try_stub(id,out)` before specific handlers.

## Not claimed
- Full behavioral parity with gm82core GML extension on Windows.
- Delphi REA paste.
- Device acceptance.

Host after local apply: ok=4 fail=0.
