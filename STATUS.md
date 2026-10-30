# STATUS — Noor Maker / GM82 parity (2026-10-30)

## Done
- [x] Event system order (BeginStep → Alarm → Key → Step → Collision → EndStep → Other → Destroy)
- [x] Collision sets GML `other`
- [x] Instance Creation Code (struct + runtime + decoder)
- [x] runtime_draw Pre → Draw → Post
- [x] Actions core + `gm82_actions_extra.c` (set_variable, if_key*, healthbar, path/timeline, create_object_motion, conditionals, ...)
- [x] Bitmask API present
- [x] Host tests / multi-ABI build reported passing on main

## Open
- [ ] Wire bitmask into every collision when masks exist
- [ ] Physical Android playtest
- [ ] 100% — **not claimed**

## Repo → Private (owner only)
Connected tools **cannot** change visibility. Do this yourself:

1. افتح: https://github.com/fthyalbab4/Nr.mk.02/settings
2. General → Danger Zone
3. **Change repository visibility** → **Make private**

## Honesty
Event/GML improved. Actions = core + extra (subset of full GM8 DnD). No 100% claim.
