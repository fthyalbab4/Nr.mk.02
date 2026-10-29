#ifndef GM82_TEXT_RUNTIME_BRIDGE_H
#define GM82_TEXT_RUNTIME_BRIDGE_H

#include "gm82_project_ir.h"
#include "gm82_object_room_decode.h"
#include "gm82_sprite_decode.h"
#include "gm82_background_decode.h"
#include "gm82_script.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * The GMK path binds gm82_runtime to the decoded-object/room/sprite lists.
 * Text projects are materialised into gm82_project_ir instead, so this bridge
 * converts IR resources into the exact structures the runtime already binds.
 *
 * Ownership: the bundle owns every pointer it exposes; call
 * gm82_text_runtime_bundle_free() once the runtime is done with it.
 * Sprite/background pixel buffers are shared by pointer, so the IR must stay
 * alive for as long as the bundle does.
 */
typedef struct gm82_text_runtime_bundle {
    gm82_decoded_object_list     objects;
    gm82_decoded_sprite_list     sprites;
    gm82_decoded_background_list backgrounds;
    gm82_decoded_room_list       rooms;
    gm82_script_list             scripts;
    int object_name_count;
    char **object_names;      /* object_index -> name, for GML name lookups */
    int sprite_name_count;
    char **sprite_names;
    int background_name_count;
    char **background_names;
    bool valid;
} gm82_text_runtime_bundle;

/* Builds the bundle from a loaded (and ideally materialised) text project. */
bool gm82_text_build_runtime_bundle(const gm82_project_ir *ir, gm82_text_runtime_bundle *out);

void gm82_text_runtime_bundle_free(gm82_text_runtime_bundle *b);

/* Index of a named object/sprite/background, or -1. */
int gm82_text_object_index(const gm82_text_runtime_bundle *b, const char *name);

#ifdef __cplusplus
}
#endif

#endif /* GM82_TEXT_RUNTIME_BRIDGE_H */
