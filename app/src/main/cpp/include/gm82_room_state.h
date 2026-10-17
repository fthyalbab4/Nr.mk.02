#ifndef GM82_ROOM_STATE_H
#define GM82_ROOM_STATE_H
/*
 * Clean C layout for room / instance / tile state (GM8-oriented).
 * Backed by decoded GMK lists + live runtime; no JSON dependency.
 *
 * Memory: fixed pool GM82_MAX_INSTANCES (2048) on the runtime —
 *   trade-off: predictable frames, zero per-frame alloc, vs hard cap.
 * CPU: phase-local freezes + insertion depth sort O(n^2) ok for n≪2048.
 */
#include <stdint.h>
#include <stdbool.h>
#include "gm82_runtime.h"
#include "gm82_object_room_decode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int32_t room_index;
    int32_t width, height;
    int32_t speed;
    int32_t instance_live;
    int32_t instance_slots;
    int32_t tile_count;
    double  view_x, view_y, view_w, view_h;
    int32_t frame;
} gm82_room_snapshot;

static inline void gm82_room_snapshot_from_runtime(const gm82_runtime *rt,
                                                   gm82_room_snapshot *out) {
    if (!out) return;
    out->room_index = rt ? rt->current_room : -1;
    out->width = rt ? rt->room_width : 0;
    out->height = rt ? rt->room_height : 0;
    out->speed = rt ? rt->room_speed : 0;
    out->view_x = rt ? rt->view_x : 0;
    out->view_y = rt ? rt->view_y : 0;
    out->view_w = rt ? rt->view_w : 0;
    out->view_h = rt ? rt->view_h : 0;
    out->frame = rt ? rt->frame : 0;
    out->instance_slots = rt ? rt->instance_count : 0;
    out->instance_live = 0;
    out->tile_count = 0;
    if (!rt) return;
    for (int i = 0; i < rt->instance_count; i++)
        if (rt->instances[i].alive) out->instance_live++;
    if (rt->rooms && rt->current_room >= 0 && rt->current_room < rt->rooms->count)
        out->tile_count = rt->rooms->items[rt->current_room].tile_count;
}

#ifdef __cplusplus
}
#endif
#endif
