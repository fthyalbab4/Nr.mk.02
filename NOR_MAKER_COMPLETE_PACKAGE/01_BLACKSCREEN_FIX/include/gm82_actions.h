#ifndef GM82_ACTIONS_H
#define GM82_ACTIONS_H

#include "gm82_runtime.h"
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GM82_ACTION_MAX_ARGS 8

typedef struct {
    int32_t event_type;
    int32_t event_numb;
    char    name[64];
    int32_t action_id;
    int32_t kind;
    int32_t args[GM82_ACTION_MAX_ARGS];
    int     argc;
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
int gm82_actions_scan_gmk(const uint8_t *data, size_t size, gm82_action_table *out);
bool gm82_action_execute_named(gm82_runtime *rt, gm82_instance *self, const char *name);
bool gm82_action_execute_ref(gm82_runtime *rt, gm82_instance *self, const gm82_action_ref *ar);
void gm82_actions_fire_create(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table);
void gm82_actions_fire_step(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table);
void gm82_actions_fire_draw(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table);

#ifdef __cplusplus
}
#endif

#endif
