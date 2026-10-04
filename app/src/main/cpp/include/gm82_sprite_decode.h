#ifndef GM82_SPRITE_DECODE_H
#define GM82_SPRITE_DECODE_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char     name[64];
    int32_t  width;
    int32_t  height;
    uint8_t *rgba;       /* width*height*4, caller frees via list_free */
    size_t   rgba_size;
    uint8_t *bitmask;    /* (width * height + 7) / 8 bytes, 1 bit per pixel (alpha > 0) */
    size_t   bitmask_size;
} gm82_decoded_frame;

typedef struct {
    gm82_decoded_frame *frames;
    int                 count;
    int                 capacity;
} gm82_decoded_sprite_list;

/* Group consecutive frames that share the same resource name */
typedef struct {
    char    name[64];
    int32_t frame_start; /* index into frames[] */
    int32_t frame_count;
    int32_t width, height;
} gm82_sprite_group;

typedef struct {
    gm82_sprite_group *items;
    int count;
} gm82_sprite_group_list;

void gm82_sprite_groups_build(const gm82_decoded_sprite_list *frames, gm82_sprite_group_list *out);
void gm82_sprite_group_list_free(gm82_sprite_group_list *G);
/* Map a flat frame index to group index; -1 if invalid */
int gm82_sprite_group_index_for_frame(const gm82_sprite_group_list *G, int frame_index);
/* Resolve image_index within group from a frame-based sprite_index */
int gm82_sprite_resolve_frame(const gm82_sprite_group_list *G, int sprite_index, int image_index);

void gm82_decoded_sprite_list_init(gm82_decoded_sprite_list *L);
void gm82_decoded_sprite_list_free(gm82_decoded_sprite_list *L);

/* Build 1-bit collision mask from RGBA pixels where alpha > tolerance (default 16) */
void gm82_frame_build_bitmask(gm82_decoded_frame *frame, uint8_t alpha_tolerance);
/* Test whether pixel (px, py) is solid in frame's bitmask */
bool gm82_frame_test_pixel(const gm82_decoded_frame *frame, int32_t px, int32_t py);
/* Test precise per-pixel collision between two frames at world coords */
bool gm82_frames_collide_pixel(const gm82_decoded_frame *f1, int32_t x1, int32_t y1,
                               const gm82_decoded_frame *f2, int32_t x2, int32_t y2);

/* Returns number of frames decoded, or negative on error. */
int gm82_decode_sprites_from_gmk(const uint8_t *data, size_t size,
                                 gm82_decoded_sprite_list *out);

int gm82_decode_sprites_from_file(const char *path, gm82_decoded_sprite_list *out);

#ifdef __cplusplus
}
#endif

#endif
