#ifndef GM82_GL_TEXTURES_H
#define GM82_GL_TEXTURES_H

/*
 * OpenGL ES texture upload plan for Android.
 * Implementation requires EGL context current (from GLSurfaceView).
 *
 * Pipeline:
 *  1. After sprite decode, call gm82_gl_upload_sprites()
 *  2. Each frame bind texture id and draw quad at instance x,y
 *  3. View matrix = orthographic(view_x, view_x+view_w, ...)
 *
 * NOT linked to real GLES yet in this tree – API scaffold + CPU fallback remains.
 */

#include "gm82_sprite_decode.h"
#include "gm82_background_decode.h"
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    uint32_t tex_id;     /* GLuint – 0 if not uploaded */
    int32_t  width, height;
} gm82_gl_texture;

typedef struct {
    int32_t sprite_index;
    float u1, v1, u2, v2;
    int32_t x, y, w, h;
} gm82_gl_atlas_entry;

typedef struct {
    gm82_gl_texture *sprites;
    int sprite_count;
    gm82_gl_texture *backgrounds;
    int background_count;
    gm82_gl_atlas_entry *entries;
    int entry_count;
    int32_t atlas_width, atlas_height;
    int ready;
} gm82_gl_atlas;

typedef struct {
    uint32_t tex_id;
    float u0, v0, u1, v1;
    int32_t width, height;
} gm82_texture_region;

void gm82_gl_atlas_init(gm82_gl_atlas *a);
void gm82_gl_atlas_free(gm82_gl_atlas *a);

/* Upload RGBA buffers – returns false if no GL context (expected in unit tests) */
bool gm82_gl_upload_sprites(gm82_gl_atlas *a, const gm82_decoded_sprite_list *sprites);
bool gm82_gl_upload_backgrounds(gm82_gl_atlas *a, const gm82_decoded_background_list *bgs);
bool gm82_gl_atlas_build_grid(gm82_gl_atlas *a, const gm82_decoded_sprite_list *sprites, int32_t max_atlas_dim);

/* Return a full normalized region for one sprite's separate texture. */
bool gm82_gl_atlas_get_region(const gm82_gl_atlas *a, int sprite_index, gm82_texture_region *out_region);

/* Draw one textured quad in room pixels – STUB without GLES headers */
bool gm82_gl_draw_texture(uint32_t tex_id, float x, float y, float w, float h);

#ifdef __cplusplus
}
#endif

#endif
