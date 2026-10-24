#ifndef GM82_ACTIONS_H
#define GM82_ACTIONS_H

#include "gm82_runtime.h"
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GM82_ACTION_MAX_ARGS 8

/* Extracted action reference from object resource (best-effort + arg table) */
typedef struct {
    int32_t event_type;   /* 0=Create, 3=Step, 8=Draw, -1=unknown */
    int32_t event_numb;
    char    name[64];     /* e.g. action_sprite_set, action_move, or empty */
    int32_t action_id;    /* numeric id if known / first arg */
    int32_t kind;
    /* Full binary arg table (up to 8 ints as stored in GMK) */
    int32_t args[GM82_ACTION_MAX_ARGS];
    int     argc;
    /* Optional string args harvested near the action name */
    char    str_args[4][64];
    int     str_argc;
} gm82_action_ref;

typedef struct {
    gm82_action_ref *items;
    int count;
    int capacity;
    char object_name[64];
} gm82_object_actions;

struct gm82_action_table {
    gm82_object_actions *objects;
    int count;
};
typedef struct gm82_action_table gm82_action_table;

void gm82_action_table_free(gm82_action_table *t);

/* Scan GMK for action_* strings and event markers per object – best-effort */
int gm82_actions_scan_gmk(const uint8_t *data, size_t size, gm82_action_table *out);

/* Execute a named action on self (subset of common DnD names) */
bool gm82_action_execute_named(gm82_runtime *rt, gm82_instance *self, const char *name);

/* Execute an action reference on self with extracted arguments */
bool gm82_action_execute_ref(gm82_runtime *rt, gm82_instance *self, const gm82_action_ref *ar);

/* Fire all scanned Create actions for an object index (name match) */
void gm82_actions_fire_create(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table);
void gm82_actions_fire_step(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table);

#ifdef __cplusplus
}
#endif

#endif
