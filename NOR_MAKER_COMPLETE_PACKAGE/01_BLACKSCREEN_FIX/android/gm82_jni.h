#ifndef GM82_JNI_H
#define GM82_JNI_H

/*
 * Android JNI bridge for NOR Maker native loop.
 * GL/GLES draw still optional; soft RGBA frame is the primary path for WebView/Canvas.
 */

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Lifecycle */
bool gm82_native_init(int surface_width, int surface_height);
void gm82_native_shutdown(void);

/* Load a game from absolute path (.gmk / .gm82 directory not yet) */
bool gm82_native_load_game(const char *path, char *err, int err_len);

/* Frame */
void gm82_native_resize(int w, int h);
void gm82_native_step(void);   /* alarms / begin-step / step / end-step */
void gm82_native_draw(void);   /* software RGBA into internal buffer */
void gm82_native_tick(void);   /* step + draw */

/* Soft framebuffer for Canvas/WebView (valid until next tick/shutdown) */
const uint8_t *gm82_native_frame_rgba(int *out_w, int *out_h);
int gm82_native_frame_ready(void);

/* Input from Java / JS */
void gm82_native_key_down(int vk);
void gm82_native_key_up(int vk);
void gm82_native_touch(int x, int y, int action); /* 0=down 1=up 2=move */

/* Query */
int  gm82_native_is_running(void);
int  gm82_native_room_width(void);
int  gm82_native_room_height(void);

#ifdef __cplusplus
}
#endif

#endif /* GM82_JNI_H */
