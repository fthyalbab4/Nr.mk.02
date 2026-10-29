#ifndef GM82_ACTIONS_H
#define GM82_ACTIONS_H

#include "gm82_runtime.h"
#include "gm82_object_room_decode.h"
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
    /* Drag-and-drop "execute code" actions store their GML here; owned by the
       table and released in gm82_action_table_free(). */
    char   *code;
    int32_t is_condition;
    int32_t applies_to;
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
/* Structured GMK 8.x walk: real per-object event/action records with GML code
   blocks preserved. Returns the number of objects decoded. */
int gm82_actions_parse_gmk8(const uint8_t *data, size_t size, gm82_action_table *out);
/* Structured object list in file order. Room instances index into this order, so
   using the decoded layout keeps instance -> object mapping faithful. */
int gm82_objects_parse_gmk8(const uint8_t *data, size_t size, gm82_decoded_object_list *out);
void gm82_actions_fire_collision(gm82_runtime *rt, gm82_instance *self,
                                 gm82_instance *other, const gm82_action_table *table);
bool gm82_action_execute_named(gm82_runtime *rt, gm82_instance *self, const char *name);
bool gm82_action_execute_ref(gm82_runtime *rt, gm82_instance *self, const gm82_action_ref *ar);
void gm82_actions_fire_create(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table);
void gm82_actions_fire_step(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table);
void gm82_actions_fire_alarm(gm82_runtime *rt, gm82_instance *self,
                             const gm82_action_table *table, int alarm_index);
void gm82_actions_fire_draw(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table);

#ifdef __cplusplus
}
#endif

#endif
