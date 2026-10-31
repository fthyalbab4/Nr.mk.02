#include "gm82_gml_builtins.h"
#ifndef GM82_EVENTS_H
#define GM82_EVENTS_H

#include "gm82_runtime.h"
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

enum {
    GM82_EV_CREATE = 0,
    GM82_EV_DESTROY = 1,
    GM82_EV_ALARM = 2,
    GM82_EV_STEP = 3,
    GM82_EV_COLLISION = 4,
    GM82_EV_KEYBOARD = 5,
    GM82_EV_MOUSE = 6,
    GM82_EV_OTHER = 7,
    GM82_EV_DRAW = 8,
    GM82_EV_KEYPRESS = 9,
    GM82_EV_KEYRELEASE = 10
};

enum {
    GM82_STEP_NORMAL = 0,
    GM82_STEP_BEGIN = 1,
    GM82_STEP_END = 2
};

/* Other event subtypes (GM 8.x) */
enum {
    GM82_OTHER_OUTSIDE = 0,
    GM82_OTHER_BOUNDARY = 1,
    GM82_OTHER_GAME_START = 2,
    GM82_OTHER_GAME_END = 3,
    GM82_OTHER_ROOM_START = 4,
    GM82_OTHER_ROOM_END = 5,
    GM82_OTHER_NO_MORE_LIVES = 6,
    GM82_OTHER_ANIMATION_END = 7,
    GM82_OTHER_END_OF_PATH = 8,
    GM82_OTHER_NO_MORE_HEALTH = 9,
    GM82_OTHER_USER0 = 10,
    GM82_OTHER_USER1 = 11,
    GM82_OTHER_USER2 = 12,
    GM82_OTHER_USER3 = 13,
    GM82_OTHER_USER4 = 14,
    GM82_OTHER_USER5 = 15,
    GM82_OTHER_USER6 = 16,
    GM82_OTHER_USER7 = 17,
    GM82_OTHER_USER8 = 18,
    GM82_OTHER_USER9 = 19,
    GM82_OTHER_USER10 = 20,
    GM82_OTHER_USER11 = 21,
    GM82_OTHER_USER12 = 22,
    GM82_OTHER_USER13 = 23,
    GM82_OTHER_USER14 = 24,
    GM82_OTHER_USER15 = 25
};

typedef void (*gm82_event_fn)(gm82_runtime *rt, gm82_instance *self);

typedef struct {
    const char *object_name_prefix;
    gm82_event_fn on_create;
    gm82_event_fn on_step;
} gm82_behavior;

void gm82_events_register_defaults(void);
void gm82_events_fire_create_single(gm82_runtime *rt, gm82_instance *inst);
void gm82_events_fire_create_all(gm82_runtime *rt);
void gm82_events_fire_destroy(gm82_runtime *rt, gm82_instance *inst);
void gm82_events_fire_alarm(gm82_runtime *rt, gm82_instance *inst, int alarm_index);
void gm82_events_fire_begin_step_all(gm82_runtime *rt);
void gm82_events_fire_step_all(gm82_runtime *rt);
void gm82_events_fire_end_step_all(gm82_runtime *rt);
void gm82_events_fire_keyboard_all(gm82_runtime *rt);
void gm82_events_fire_keypress_all(gm82_runtime *rt);
void gm82_events_fire_keyrelease_all(gm82_runtime *rt);
void gm82_events_fire_mouse_all(gm82_runtime *rt);
void gm82_events_fire_other(gm82_runtime *rt, gm82_instance *inst, int other_index);
void gm82_events_fire_other_all(gm82_runtime *rt, int other_index);
void gm82_events_fire_user(gm82_runtime *rt, gm82_instance *inst, int user_index);
void gm82_events_fire_outside_all(gm82_runtime *rt);
void gm82_events_fire_boundary_all(gm82_runtime *rt);
void gm82_events_fire_animation_end_all(gm82_runtime *rt);
void gm82_events_fire_pre_draw_all(gm82_runtime *rt);
void gm82_events_fire_draw_all(gm82_runtime *rt);
void gm82_events_fire_draw_single(gm82_runtime *rt, gm82_instance *inst);
bool gm82_events_has_draw_event(gm82_runtime *rt, gm82_instance *inst);
void gm82_events_fire_post_draw_all(gm82_runtime *rt);
void gm82_events_fire_collision(gm82_runtime *rt, gm82_instance *inst, gm82_instance *other);
const gm82_behavior *gm82_events_find_behavior(gm82_runtime *rt, int32_t object_index);
void gm82_events_clear_gml_bindings(void);
bool gm82_events_bind_gml_step(const char *object_name_prefix, const char *code);
bool gm82_events_bind_gml_create(const char *object_name_prefix, const char *code);
int gm82_events_autobind_gml_from_gmk(const uint8_t *data, size_t size);
int gm82_events_autobind_from_gmk_blob(const uint8_t *blob, size_t len);
int gm82_events_autobind_scan_zlib_regions(const uint8_t *data, size_t len);

#ifdef __cplusplus
}
#endif

#endif
