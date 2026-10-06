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

typedef void (*gm82_event_fn)(gm82_runtime *rt, gm82_instance *self);

typedef struct {
    const char *object_name_prefix;
    gm82_event_fn on_create;
    gm82_event_fn on_step;
    gm82_event_fn on_draw;
} gm82_behavior;

void gm82_events_register_defaults(void);
void gm82_events_fire_create_all(gm82_runtime *rt);
void gm82_events_fire_step_all(gm82_runtime *rt);
void gm82_events_fire_draw_all(gm82_runtime *rt);
void gm82_events_fire_create_one(gm82_runtime *rt, gm82_instance *inst);
const gm82_behavior *gm82_events_find_behavior(gm82_runtime *rt, int32_t object_index);

#ifdef __cplusplus
}
#endif

#endif
