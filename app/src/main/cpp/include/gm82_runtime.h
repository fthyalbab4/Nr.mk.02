#ifndef GM82_RUNTIME_H
#define GM82_RUNTIME_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct gm82_decoded_object_list gm82_decoded_object_list;
typedef struct gm82_decoded_sprite_list gm82_decoded_sprite_list;
typedef struct gm82_decoded_background_list gm82_decoded_background_list;
typedef struct gm82_decoded_room_list gm82_decoded_room_list;
typedef struct gm82_action_table gm82_action_table;
typedef struct gm82_sprite_group_list gm82_sprite_group_list;
typedef struct gm82_path_list gm82_path_list;
typedef struct gm82_timeline_list gm82_timeline_list;
typedef struct gm82_script_list gm82_script_list;
typedef struct gm82_particle_world gm82_particle_world;
typedef struct gm82_mp_grid_world gm82_mp_grid_world;

typedef struct gm82_instance {
    int32_t id;
    int32_t object_index;
    int32_t sprite_index;
    int32_t image_index;
    double  image_speed;
    double  image_xscale;
    double  image_yscale;
    double  image_angle;
    double  image_alpha;
    int32_t image_blend;
    double  x, y;
    double  xprevious, yprevious;
    double  xstart, ystart;
    double  hspeed, vspeed;
    double  direction, speed;
    double  gravity, gravity_direction;
    double  friction;
    int32_t depth;
    int32_t solid;
    int32_t visible;
    int32_t persistent;
    int32_t alive;
    int32_t alarms[12];
} gm82_instance;

typedef struct gm82_runtime {
    int running;
    int frame;
    int room_speed;
    int room_width;
    int room_height;
    int current_room;
    int instance_count;
    int instance_id_seq;
    gm82_instance *instances;
    int instances_cap;
    const gm82_decoded_object_list *objects;
    const gm82_decoded_sprite_list *sprites;
    const gm82_decoded_background_list *backgrounds;
    const gm82_decoded_room_list *rooms;
    const gm82_action_table *actions;
    const gm82_sprite_group_list *sprite_groups;
} gm82_runtime;

void gm82_runtime_init(gm82_runtime *rt);
void gm82_runtime_shutdown(gm82_runtime *rt);
void gm82_runtime_bind_assets(gm82_runtime *rt,
    const gm82_decoded_object_list *objs,
    const gm82_decoded_sprite_list *sprites,
    const gm82_decoded_background_list *bgs,
    const gm82_decoded_room_list *rooms,
    const gm82_action_table *actions);
void gm82_runtime_bind_sprite_groups(gm82_runtime *rt, const gm82_sprite_group_list *groups);
int  gm82_runtime_goto_room(gm82_runtime *rt, int room_index);
gm82_instance *gm82_runtime_instance_create(gm82_runtime *rt, int object_index, double x, double y);
void gm82_runtime_instance_destroy(gm82_runtime *rt, gm82_instance *inst);
void gm82_runtime_step(gm82_runtime *rt);
int  gm82_runtime_draw(gm82_runtime *rt, uint8_t *rgba, int w, int h);

#ifdef __cplusplus
}
#endif
#endif
