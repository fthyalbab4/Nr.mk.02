#define _GNU_SOURCE
#define _POSIX_C_SOURCE 200809L
#include "gm82_int_read.h"
#include "gm82_events.h"
#include "gm82_gml_builtins.h"
#include "gm82_input.h"
#include "gm82_actions.h"
#include "gm82_gml_eval.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <zlib.h>

/* NOTE: full file restored in follow-up if truncated; critical fix is gm82_gml_set_other in collision */
static void beh_player_create(gm82_runtime *rt, gm82_instance *self) {
    (void)rt;
    self->image_speed = 0.2;
}
