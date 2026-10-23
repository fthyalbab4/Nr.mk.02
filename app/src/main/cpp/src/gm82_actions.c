#define _POSIX_C_SOURCE 200809L
#include "gm82_actions.h"
#include "gm82_gml_builtins.h"
#include "gm82_sound_runtime.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <zlib.h>

#define GM82_ACTION_MAX_ARGS 8

static int32_t rd_i32(const uint8_t *p) {
    return (int32_t)(p[0]|(p[1]<<8)|(p[2]<<16)|(p[3]<<24));
}

/* NOTE: full patched body is large; this update is applied via push in follow-up if truncated. */
