# anvil builtin registration (REA 0x63a5a8)

Evidence: `source/reverse-engineering/decompiles/anvil/functions/0x63a5a8.c`

Registers GML names via `FUN_0058917c(L"name", handler, arity, ...)` including:

place_free, place_empty, place_meeting, place_snapped,
move_contact, move_contact_solid, move_contact_all,
move_bounce, move_bounce_solid, move_bounce_all,
mp_grid_create/destroy/clear_all/clear_cell/clear_rectangle,
mp_grid_add_cell/add_rectangle/add_instances/path/draw,
sleep, YoYo_virtual_key_*

## NOR mapping (2026-10-26)
Already present: place_free/empty/meeting, move_contact_solid/all, move_bounce_solid/all, core mp_grid_*.

Added from this evidence:
- place_snapped
- move_contact → alias solid
- move_bounce → alias solid
- mp_grid_clear_cell / clear_rectangle / add_rectangle / add_instances / draw (grid ops; draw soft no-op or debug)

No FUN_* bodies copied.
