# Phase 3 — GML Scripting Engine (partial)

## Landed
1. String literals → last_string (were discarded)
2. Implicit + string concat (GM8-style)
3. String VM helpers + stack
4. execute_string / is_real / is_string hooks
5. Prior ds_* / string_* / math remain

## Honest status
Not full 95% GML. Light eval is still mostly double + last_string; typed gml_vm is separate deeper path.
