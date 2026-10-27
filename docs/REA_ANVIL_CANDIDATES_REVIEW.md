# REA anvil candidates review (Phase G) — 2026-10-26

Evidence-only. No FUN_* ported.

## room_instance_suspect (12)
| addr | keywords | action |
|------|----------|--------|
| 0x5791f0 | with | defer until FAIL |
| 0x583684 | room,path | defer until FAIL |
| 0x5b8428 | instance,sprite | defer (sprite missing msg path) |
| 0x5baf80 | room | defer until FAIL |
| 0x5bb660 | instance | defer until FAIL |
| 0x5bc028 | object,sprite | defer until FAIL |
| 0x606820 | room | defer until FAIL |
| 0x61156c | object | defer until FAIL |
| 0x611cc8 | with | defer until FAIL |
| 0x61a2d0 | room | defer until FAIL |
| 0x626d4c | room | defer until FAIL |
| 0x63a5a8 | place_meeting + register table | **used** — motion/mp_grid names |

## gml_runtime (10)
| addr | keywords | action |
|------|----------|--------|
| 0x586914..0x587908 | variable/expression | defer until FAIL |
| 0x5bd094 | execute | defer until FAIL |
| 0x613234..0x61a0a4 | script | defer until FAIL |

## Policy
- Full pseudocode read only when device FAIL relates.
- Do not process unknown (~8000).
