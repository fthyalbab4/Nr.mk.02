#ifndef GM82_GL_TEXTURES_H
#define GM82_GL_TEXTURES_H

/*
 * OpenGL ES 2.0 texture upload & hardware-accelerated 2D rendering for Android.
 * Requires current EGL context (from GLSurfaceView) for GL calls; safe no-op
 * stubs are provided when GM82_HAVE_GLES / __ANDROID__ are not defined.
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
/* Free host tracking arrays and zero GL handles without calling glDeleteTextures (safe off GL thread or after context loss) */
void gm82_gl_invalidate_handles(gm82_gl_atlas *a);

/* Upload RGBA buffers – returns false if invalid input */
bool gm82_gl_upload_sprites(gm82_gl_atlas *a, const gm82_decoded_sprite_list *sprites);
bool gm82_gl_upload_backgrounds(gm82_gl_atlas *a, const gm82_decoded_background_list *bgs);
bool gm82_gl_atlas_build_grid(gm82_gl_atlas *a, const gm82_decoded_sprite_list *sprites, int32_t max_atlas_dim);

/* Return a full normalized region for one sprite's separate texture. */
bool gm82_gl_atlas_get_region(const gm82_gl_atlas *a, int sprite_index, gm82_texture_region *out_region);

/* Configure top-down orthographic projection in room/view coordinates */
void gm82_gl_begin_ortho(float left, float top, float right, float bottom);

/* Draw one sprite quad using the active orthographic matrix, GM origin, scale, angle (deg CCW), BGR color & alpha */
bool gm82_gl_draw_sprite_quad(uint32_t tex_id, float x, float y, float w, float h,
                              float ox, float oy, float xscale, float yscale,
                              float angle_deg, uint32_t bgr_color, float alpha);

/* Draw one axis-aligned sub-UV textured quad (tiles, backgrounds) using the active orthographic matrix */
bool gm82_gl_draw_region_quad(uint32_t tex_id, float x, float y, float w, float h,
                              float u0, float v0, float u1, float v1,
                              uint32_t bgr_color, float alpha);

/* Draw one textured quad in normalized device coordinates */
bool gm82_gl_draw_texture(uint32_t tex_id, float x, float y, float w, float h);

/* Upload a CPU RGBA8888 framebuffer and draw it fullscreen via GLES 2.0 */
bool gm82_gl_draw_rgba_fullscreen(const uint8_t *rgba, int width, int height);

/* Composite a transparent CPU RGBA8888 overlay buffer over the current GL framebuffer */
bool gm82_gl_draw_rgba_overlay(const uint8_t *rgba, int width, int height);

/* Reset cached GL shader/streaming texture state when EGL context is recreated */
void gm82_gl_reset_program(void);

#ifdef __cplusplus
}
#endif

#endif
