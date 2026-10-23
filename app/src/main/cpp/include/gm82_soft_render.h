#ifndef GM82_SOFT_RENDER_H
#define GM82_SOFT_RENDER_H

#include "gm82_project_ir.h"
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int32_t width, height;
    uint8_t *rgba;
} gm82_framebuffer;

bool gm82_framebuffer_create(gm82_framebuffer *fb, int32_t w, int32_t h);
void gm82_framebuffer_free(gm82_framebuffer *fb);
bool gm82_soft_render_preview(const gm82_project_ir *ir, gm82_framebuffer *fb);
bool gm82_framebuffer_write_ppm(const gm82_framebuffer *fb, const char *path);

#ifdef __cplusplus
}
#endif

#endif /* GM82_SOFT_RENDER_H */
