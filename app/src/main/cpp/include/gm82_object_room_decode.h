#ifndef GM82_OBJECT_ROOM_DECODE_H
#define GM82_OBJECT_ROOM_DECODE_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GM82_OBJ_EVENT_MAX 128

typedef struct {
    int32_t lib_id;
    int32_t action_id;
    int32_t kind;                 /* 0=normal,1=begin,2=end,3=else,4=exit,5=repeat,6=var,7=code */
    int32_t can_be_relative;
    int32_t is_condition;
    int32_t applies_to_something;
    int32_t exec_type;            /* 0=none, 1=function, 2=code */
    char    fn_name[64];
    char   *fn_code;
    int32_t arg_count;
    int32_t arg_types[8];
    int32_t applies_to;           /* -1=self, -2=other, >=0 object index */
    int32_t is_relative;
    char   *arg_strs[8];
    int32_t is_not;
} gm82_decoded_action;

typedef struct {
    int32_t main_type;
    int32_t event_numb;
    int32_t action_count;
    char    action_name0[48];
    int32_t action_id0;
    int32_t action_arg0;
    char   *code_snippet;
    gm82_decoded_action *actions;
    int32_t action_cap;
} gm82_decoded_event;

typedef struct {
    char    name[128];
    int32_t sprite_index;
    int32_t solid;
    int32_t visible;
    int32_t depth;
    int32_t persistent;
    int32_t parent_index;
    int32_t mask_index;
    int32_t event_count;
    gm82_decoded_event events[GM82_OBJ_EVENT_MAX];
} gm82_decoded_object;

typedef struct {
    gm82_decoded_object *items;
    int count;
} gm82_decoded_object_list;

typedef struct {
    int32_t x, y;
    int32_t object_index;
    int32_t id;
    double  xscale, yscale, angle;
    int32_t blend;
    char   *creation_code; /* optional GML from room instance (nullable) */
} gm82_decoded_instance;

typedef struct {
    int32_t x, y;
    int32_t background_index;
    int32_t xo, yo;
    int32_t width, height;
    int32_t depth;
    int32_t id;
    double  xscale, yscale;
    int32_t blend;
} gm82_decoded_tile;

typedef struct {
    int32_t visible;
    int32_t foreground;
    int32_t bg_index;
    int32_t x, y;
    int32_t htiled, vtiled;
    int32_t hspeed, vspeed;
    int32_t stretch;
} gm82_decoded_room_bg;

typedef struct {
    int32_t visible;
    int32_t view_x, view_y, view_w, view_h;
    int32_t port_x, port_y, port_w, port_h;
    int32_t border_h, border_v;
    int32_t hspeed, vspeed;
    int32_t object_following;
} gm82_decoded_room_view;

typedef struct {
    char    name[128];
    int32_t width, height;
    int32_t speed;
    int32_t persistent;
    int32_t background_color;
    int32_t draw_background_color;
    char   *creation_code;
    gm82_decoded_room_bg   backgrounds[8];
    int32_t views_enabled;
    gm82_decoded_room_view views[8];
    gm82_decoded_instance *instances;
    int instance_count;
    gm82_decoded_tile *tiles;
    int tile_count;
} gm82_decoded_room;

typedef struct {
    gm82_decoded_room *items;
    int count;
} gm82_decoded_room_list;

void gm82_decoded_object_list_init(gm82_decoded_object_list *L);
void gm82_decoded_room_list_init(gm82_decoded_room_list *L);
void gm82_decoded_object_list_free(gm82_decoded_object_list *L);
void gm82_decoded_room_list_free(gm82_decoded_room_list *L);
void gm82_decoded_action_free(gm82_decoded_action *a);

int gm82_decode_objects_from_gmk(const uint8_t *data, size_t size, gm82_decoded_object_list *out);
int gm82_decode_rooms_from_gmk(const uint8_t *data, size_t size, gm82_decoded_room_list *out);

#ifdef __cplusplus
}
#endif

#endif
