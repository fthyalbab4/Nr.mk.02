#define _POSIX_C_SOURCE 200809L
#include "gm82_gles.h"
#include <string.h>

void gm82_gles_batch_init(gm82_gles_batch *batch) {
    if (!batch) return;
    memset(batch, 0, sizeof(*batch));
    batch->current_blend = GM82_BLEND_NORMAL;
}

void gm82_gles_batch_flush(gm82_gles_batch *batch) {
    if (!batch) return;
    /* In native host mode / software fallback, batch reset simulates flush */
    batch->vertex_count = 0;
}

void gm82_gles_draw_sprite(gm82_gles_batch *batch, uint32_t tex_id, float x, float y, float w, float h, uint32_t color, gm82_blend_mode blend) {
    if (!batch) return;
    if (batch->vertex_count + 6 > 1024 || batch->current_texture_id != tex_id || batch->current_blend != blend) {
        gm82_gles_batch_flush(batch);
        batch->current_texture_id = tex_id;
        batch->current_blend = blend;
    }

    /* Quad quad (6 vertices) */
    gm82_gles_vertex *v = &batch->vertices[batch->vertex_count];

    /* v0 (top-left) */
    v[0].x = x;     v[0].y = y;     v[0].u = 0.0f; v[0].v = 0.0f; v[0].color = color;
    /* v1 (top-right) */
    v[1].x = x + w; v[1].y = y;     v[1].u = 1.0f; v[1].v = 0.0f; v[1].color = color;
    /* v2 (bottom-left) */
    v[2].x = x;     v[2].y = y + h; v[2].u = 0.0f; v[2].v = 1.0f; v[2].color = color;

    /* v3 (bottom-left) */
    v[3] = v[2];
    /* v4 (top-right) */
    v[4] = v[1];
    /* v5 (bottom-right) */
    v[5].x = x + w; v[5].y = y + h; v[5].u = 1.0f; v[5].v = 1.0f; v[5].color = color;

    batch->vertex_count += 6;
}
