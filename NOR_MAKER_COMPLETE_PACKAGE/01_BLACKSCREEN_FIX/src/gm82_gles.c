#define _POSIX_C_SOURCE 200809L
#include "gm82_gles.h"
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

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

/* Software FBO mirror: lets surface_set_target style paths bind an RGBA target */
#define GM82_SOFT_FBO_MAX 8
typedef struct {
    int used;
    int w, h;
    uint8_t *rgba;
} gm82_soft_fbo;

static gm82_soft_fbo g_fbos[GM82_SOFT_FBO_MAX];
static int g_fbo_bound = -1;

int gm82_gles_soft_fbo_create(int w, int h) {
    if (w < 1 || h < 1 || w > 4096 || h > 4096) return -1;
    for (int i = 0; i < GM82_SOFT_FBO_MAX; i++) {
        if (g_fbos[i].used) continue;
        size_t n = (size_t)w * (size_t)h * 4;
        uint8_t *p = (uint8_t *)calloc(n, 1);
        if (!p) return -1;
        g_fbos[i].used = 1;
        g_fbos[i].w = w;
        g_fbos[i].h = h;
        g_fbos[i].rgba = p;
        return i;
    }
    return -1;
}

void gm82_gles_soft_fbo_destroy(int id) {
    if (id < 0 || id >= GM82_SOFT_FBO_MAX || !g_fbos[id].used) return;
    if (g_fbo_bound == id) g_fbo_bound = -1;
    free(g_fbos[id].rgba);
    memset(&g_fbos[id], 0, sizeof(g_fbos[id]));
}

int gm82_gles_soft_fbo_bind(int id) {
    if (id < 0) { g_fbo_bound = -1; return 1; }
    if (id >= GM82_SOFT_FBO_MAX || !g_fbos[id].used) return 0;
    g_fbo_bound = id;
    return 1;
}

uint8_t *gm82_gles_soft_fbo_rgba(int id, int *w, int *h) {
    if (id < 0 || id >= GM82_SOFT_FBO_MAX || !g_fbos[id].used) return NULL;
    if (w) *w = g_fbos[id].w;
    if (h) *h = g_fbos[id].h;
    return g_fbos[id].rgba;
}
