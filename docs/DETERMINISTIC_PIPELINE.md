# Deterministic pipeline (Nr.mk.02)

## Per-frame order

**Step** (`gm82_runtime_step`):
1. xprevious/yprevious snapshot
2. **Begin Step** — object event `main_type=3, event_numb=1`
3. **Alarm** — timers + event `main_type=2`
4. **Main Step** — event `3/0` + behaviors + GML bindings
5. **Move** — speed/gravity/friction/path/timeline
6. **Collision** — AABB + solid resolve
7. **End Step** — event `3/2`
8. view follow + image_index

**Draw** (`gm82_runtime_draw`):
1. **Pre-Draw** events
2. clear + backgrounds/tiles
3. **Draw** events (may change sprite_index)
4. **depth sort** (insertion, descending depth) + blit
5. **Post-Draw** events

## Instance safety

- Each phase freezes `instance_count` at entry.
- `instance_create` appends after the freeze → next phase/frame.
- `instance_destroy` sets `alive=0` only (no mid-array shift).
- No per-frame heap allocation in the loop.

## Trade-offs

| Choice | Benefit | Cost |
|--------|---------|------|
| Fixed pool 2048 instances | Zero alloc, cache-friendly | Hard cap |
| Insertion depth sort | Simple, stable for small n | O(n²) if n→2048 |
| Sparse dead slots | No pointer invalidation | Holes until room change |

## Room state

See `gm82_room_state.h` — `gm82_room_snapshot` mirrors live runtime without JSON deps.
