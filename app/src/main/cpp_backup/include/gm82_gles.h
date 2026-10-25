#ifndef GM82_GLES_H
#define GM82_GLES_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    GM82_BLEND_NORMAL = 0,
    GM82_BLEND_ADD = 1,
    GM82_BLEND_SUBTRACT = 2
} gm82_blend_mode;

typedef struct {
    float x, y, u, v;
    uint32_t color;
} gm82_gles_vertex;

typedef struct {
    int32_t vertex_count;
    gm82_gles_vertex vertices[1024];
    gm82_blend_mode current_blend;
    uint32_t current_texture_id;
} gm82_gles_batch;

void gm82_gles_batch_init(gm82_gles_batch *batch);
void gm82_gles_batch_flush(gm82_gles_batch *batch);
void gm82_gles_draw_sprite(gm82_gles_batch *batch, uint32_t tex_id, float x, float y, float w, float h, uint32_t color, gm82_blend_mode blend);

int gm82_gles_soft_fbo_create(int w, int h);
void gm82_gles_soft_fbo_destroy(int id);
int gm82_gles_soft_fbo_bind(int id);
uint8_t *gm82_gles_soft_fbo_rgba(int id, int *w, int *h);

#ifdef __cplusplus
}
#endif

#endif /* GM82_GLES_H */
