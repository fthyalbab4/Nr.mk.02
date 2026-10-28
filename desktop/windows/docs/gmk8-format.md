# GMK 8.x layout as used by the engine

Verified against the GameMaker 8 binary format (cross-checked with the OpenGMK
writer, `gm8decompiler/src/gmk.rs`) and by re-reading a real project
(`mario bros.gmk`, SHA-256 `6532a5c5…`) record by record.

## Container

```
u32 1234321        magic
u32 version        800 (GM8.0) or 810 (GM8.1)
u32 game_id
u32 guid[4]        16 bytes
then, repeatedly:
    u32 section_id     always 800 for the sections the engine reads
    u32 size | count
    payload            zlib stream, or `count` records of `[u32 size][zlib]`
```

Asset sections store one zlib stream per asset, each starting with `u32 1`
(asset present). Sprite records carry the marker `800`, backgrounds `710`,
objects `430` and rooms `541`, which is how a record can be identified without
tracking section boundaries.

## Object record (`430`)

```
u32 1
pas name            length-prefixed, e.g. "obj_moneda"
u64 timestamp
u32 430
i32 sprite_index   -1 when none
u32 solid, u32 visible, i32 depth, u32 persistent
i32 parent_index, i32 mask_index
u32 event_list_count_minus_one
per event list (list index = main event type: 0 Create, 1 Destroy, 2 Alarm,
                3 Step, 4 Collision, 5 Keyboard, 6 Mouse, 7 Other, 8 Draw):
    per sub event:
        i32 sub            collision = other object index, alarm = alarm slot
        u32 400
        u32 action_count
        actions…
    i32 -1                 terminator
```

## Action record

```
u32 440
u32 lib_id, u32 id, u32 action_kind, u32 can_be_relative,
u32 is_condition, u32 applies_to_something, u32 execution_type
pas fn_name            "action_move", empty for execute-code actions
pas fn_code
u32 param_count, u32 8
u32 types[8]
i32 applies_to         -1 = self, -2 = other
u32 is_relative, u32 8
pas strings[8]         authored values live here, as text
u32 invert_condition
```

Drag-and-drop **execute code** actions have an empty `fn_name`, `id = 603` and
the GML source in `strings[0]`; the engine keeps that text in
`gm82_action_ref.code` and runs it through the GML VM, which is why a project
that uses almost no library actions still behaves like the real game.

## Why this matters

The previous bridge used a byte scanner that guessed object names from nearby
strings. On the reference project it produced 21 objects instead of the real 16
(it invented `bloque`, `bloque2`, `bloque_invisible`, `hongo_bonus`, `castillo`
from *sprite* names) and shifted every room instance index. Coins, enemies and
question blocks were therefore loaded as the wrong objects. Decoding the object
list in file order fixes the instance → object mapping, and the structured
action table replaces the guessed one.