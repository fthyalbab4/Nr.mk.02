#ifndef GM82_PNG_H
#define GM82_PNG_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Minimal PNG decoder used for GM82 text projects, where every sprite frame
 * and background is stored as a .png file (unlike GMK, which embeds BGRA blobs).
 *
 * Supported: bit depths 1/2/4/8/16, colour types 0 (grey), 2 (RGB),
 * 3 (palette), 4 (grey+alpha), 6 (RGBA), all five filter types.
 * Not supported: interlaced (Adam7) images; the decoder reports failure instead
 * of returning wrong pixels.
 *
 * Output is always RGBA8888 with `width * height * 4` bytes.
 */

typedef struct gm82_png_image {
    int32_t  width;
    int32_t  height;
    uint8_t *rgba;      /* owned; free with gm82_png_image_free */
    size_t   rgba_size;
} gm82_png_image;

/* Returns true on success and fills `out`. `out` must be zero-initialised. */
bool gm82_png_decode_file(const char *path, gm82_png_image *out);

/* Same, for an in-memory PNG buffer. */
bool gm82_png_decode_memory(const uint8_t *data, size_t size, gm82_png_image *out);

void gm82_png_image_free(gm82_png_image *img);

/* Last decoder error, human readable, never NULL. */
const char *gm82_png_last_error(void);

#ifdef __cplusplus
}
#endif

#endif /* GM82_PNG_H */
