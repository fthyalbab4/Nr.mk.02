#ifndef GM82_JNI_H
#define GM82_JNI_H

/*
 * Android JNI bridge – scaffold only.
 * Real .so build requires NDK; this header defines the C API the Java side will call.
 *
 * NOT claimed as integrated into the APK yet.
 */

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Lifecycle */
bool gm82_native_init(int surface_width, int surface_height);
void gm82_native_shutdown(void);

/* Load a game from absolute path (.gmk / .gm82) */
bool gm82_native_load_game(const char *path, char *err, int err_len);

/* Frame */
void gm82_native_resize(int w, int h);
void gm82_native_step(void);          /* one game frame */
void gm82_native_draw(void);          /* render to current GL context – STUB until GL wired */
/* Software frame as tightly packed RGBA8888; valid until the next frame call or shutdown. */
const uint8_t *gm82_native_frame_rgba(int *w, int *h);

/* Input from Java */
void gm82_native_key_down(int vk);
void gm82_native_key_up(int vk);
void gm82_native_touch(int x, int y, int action); /* 0=down 1=up 2=move */

/* Query */
int  gm82_native_is_running(void);
int  gm82_native_room_width(void);
int  gm82_native_room_height(void);
int  gm82_native_room_speed(void);

/* Diagnostics: copy up to max_count live instances so hosts (the PC shell, the
 * editor preview and the test harness) can report real gameplay state such as
 * player/enemy positions instead of only a rendered frame. Returns the count
 * copied, or -1 when the engine is not initialised. */
#include "gm82_runtime.h"
int  gm82_native_instance_snapshot(gm82_instance *out, int max_count);
int  gm82_native_frame_count(void);

typedef struct {
    int frame;
    int current_room;
    int room_count;
    int instance_count;
    int room_width;
    int room_height;
    int room_speed;
    int running;
} gm82_native_runtime_info_t;

/* Snapshot of the runtime bookkeeping (current room, frame, live instance count). */
int  gm82_native_runtime_info(gm82_native_runtime_info_t *out);

#ifdef __cplusplus
}
#endif

#endif
