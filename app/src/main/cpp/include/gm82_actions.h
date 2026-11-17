#ifndef GM82_ACTIONS_H
#define GM82_ACTIONS_H

#include "gm82_runtime.h"
#include "gm82_object_room_decode.h"
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GM82_ACTION_MAX_ARGS 8

typedef struct {
    int32_t event_type;
    int32_t event_numb;
    char    name[128];
    int32_t action_id;
    int32_t kind;
    int32_t args[GM82_ACTION_MAX_ARGS];
    int     argc;
    char    str_args[4][128];
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
    char object_name[128];
} gm82_object_actions;

struct gm82_action_table {
    gm82_object_actions *objects;
    int count;
};
typedef struct gm82_action_table gm82_action_table;

typedef struct {
    double num;
    char str[512];
    int is_string;
} gm82_action_arg;

typedef enum {
    GM82_UI_EVENT_NONE = 0,
    GM82_UI_EVENT_MESSAGE = 1,
    GM82_UI_EVENT_QUESTION = 2,
    GM82_UI_EVENT_SPLASH_TEXT = 3,
    GM82_UI_EVENT_SPLASH_IMAGE = 4,
    GM82_UI_EVENT_SPLASH_WEB = 5,
    GM82_UI_EVENT_SPLASH_VIDEO = 6,
    GM82_UI_EVENT_WEBPAGE = 7,
    GM82_UI_EVENT_HIGHSCORE = 8,
    GM82_UI_EVENT_SHOW_INFO = 9
} gm82_ui_event_kind;

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
bool gm82_action_call_args(gm82_runtime *rt, gm82_instance *self, const char *name,
                           const gm82_action_arg *args, int argc, double *out_val);
void gm82_actions_fire_create(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table);
void gm82_actions_fire_step(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table);
void gm82_actions_fire_alarm(gm82_runtime *rt, gm82_instance *self,
                             const gm82_action_table *table, int alarm_index);
void gm82_actions_fire_draw(gm82_runtime *rt, gm82_instance *self, const gm82_action_table *table);

const char *gm82_action_name_for_id(int32_t lib_id, int32_t action_id);
void gm82_events_execute_decoded_actions(gm82_runtime *rt, gm82_instance *self,
                                         const gm82_decoded_event *ev,
                                         int32_t owner_obj_index,
                                         int main_type, int event_numb,
                                         gm82_instance *other_inst);

/* Canonical 129 GM8 Portable Standard Lib action catalog */
int gm82_action_standard_count(void);
const char *gm82_action_standard_name(int index);

/* Android UI Event Queue & Safe Host Fallback State */
int gm82_ui_event_pending_count(void);
int gm82_ui_event_pop_json(char *out, size_t cap);
void gm82_ui_event_clear(void);
void gm82_ui_event_set_question_answer(int answer);
int gm82_ui_event_get_question_answer(void);

/* Virtual CD, Highscore, Display & Splash state helpers */
void gm82_action_cd_state(int *present, int *playing, int *paused, int *track_first, int *track_last);
void gm82_highscore_clear(void);
void gm82_highscore_add(const char *name, double score);
int gm82_highscore_count(void);
int gm82_action_get_fullscreen(void);

#ifdef __cplusplus
}
#endif

#endif
