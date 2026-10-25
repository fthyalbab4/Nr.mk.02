# Phase 4 — DnD if/else/blocks + Draw actions

## Landed
1. Expanded action_if_*: empty, collision, object, variable, mouse, sound, next/previous room, generic action_if
2. Nested if/else/block_begin/end runner with skip depth
3. gm82_actions_fire_draw (event type 8)
4. Wired into events draw_single / draw_all

## Honest status
Better control flow than flat skip-one; not full GM8 DnD (no action_repeat/while library, no question dialogs).
