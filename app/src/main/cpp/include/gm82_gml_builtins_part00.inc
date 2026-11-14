
/*
 * Minimal GML built-in surface bound to gm82_runtime.
 * Not a full interpreter – callable C functions matching common GML names.
 * Real GML bytecode/script execution comes later.
 */
#include "gm82_runtime.h"
#include <stdint.h>
#include "gm82_path.h"
#include "gm82_timeline.h"
#include "gm82_particles.h"
#include "gm82_mp_grid.h"
#include "gm82_script.h"
#include "gm82_input.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

double gml_sqrt(double v);

/* Thread-local-ish current runtime for builtins (set before scripts run) */
void gm82_gml_set_runtime(gm82_runtime *rt);
gm82_runtime *gm82_gml_get_runtime(void);

/* Set "self" instance for instance-scoped builtins */
void gm82_gml_set_self(gm82_instance *self);
void gm82_gml_set_other(gm82_instance *o);
gm82_instance *gm82_gml_get_other(void);
gm82_instance *gm82_gml_get_self(void);
/* Save/restore nested instance execution context; push returns 0 at capacity. */
int gm82_gml_context_push(void);
void gm82_gml_context_pop(void);

/* ---- Instance ---- */
double gml_instance_create(double x, double y, double object_index);
double gml_instance_create_moving(double x, double y, double object_index,
                                  double speed, double direction,
                                  double gravity, double gravdir);
double gml_instance_create_depth_moving(double x, double y, double depth, double object_index, double hspeed, double vspeed);
double gml_instance_farthest(double x, double y, double object_index);
double gml_distance_to_center(double object_index);
double gml_file_text_read_all(const char *path);
const char *gml_file_text_last_all(void);
double gml_file_text_write_all(const char *path, const char *data);
void   gml_instance_destroy(void); /* destroys self */
double gml_instance_destroy_other(void);
double gml_instance_number(double object_index); /* -1 = all */
double gml_instance_exists(double id_or_object);
double gml_variable_instance_exists(double instance_id, const char *name);
double gml_variable_instance_get(double instance_id, const char *name);
double gml_variable_instance_set(double instance_id, const char *name, double value);
double gml_instance_nearest(double x, double y, double object_index);
double gml_instance_find(double object_index, double n);
double gml_distance_to_object(double object_index);

/* ---- Motion ---- */
void   gml_motion_set(double dir, double spd);
void   gml_motion_add(double dir, double spd);
void   gml_move_towards_point(double tx, double ty, double sp);
double gml_point_distance(double x1, double y1, double x2, double y2);
double gml_point_direction(double x1, double y1, double x2, double y2);
double gml_point_distance_3d(double x1, double y1, double z1, double x2, double y2, double z2);
double gml_string_digits(const char *src, char *dst, size_t max_len);

/* ---- Collision (AABB via sprite size) ---- */
double gml_place_meeting(double x, double y, double object_index);
double gml_position_meeting(double x, double y, double object_index);
double gml_instance_place(double x, double y, double object_index); /* returns id or -4 */
double gml_instance_place_list(double x, double y, double object_index);
double gml_instance_position_list(double x, double y, double object_index);

/* ---- Drawing (records to soft framebuffer if set) ---- */
void gm82_draw_set_target(uint8_t *rgba, int32_t w, int32_t h);
double gml_draw_clear(double color);
double gml_point_in_rectangle(double px, double py, double x1, double y1, double x2, double y2);
double gml_collision_rectangle(double x1, double y1, double x2, double y2, double obj, double prec, double notme);
double gml_collision_point(double x, double y, double obj, double prec, double notme);
double gml_place_free(double x, double y);
double gml_place_empty(double x, double y);
double gml_move_contact_solid(double dir, double maxdist);
double gml_sprite_get_width(double sprite);
double gml_sprite_get_height(double sprite);
double gml_sprite_get_number(double sprite);
double gml_sprite_get_xoffset(double sprite);
double gml_sprite_get_yoffset(double sprite);
double gml_sprite_exists(double sprite);
bool gm82_object_is_ancestor(const gm82_runtime *rt, int32_t child_idx, int32_t parent_idx);
bool gm82_instance_matches_object(const gm82_runtime *rt, const gm82_instance *inst, int32_t target_obj);
double gml_object_is_ancestor(double child, double parent);
double gml_object_get_parent(double object_index);
double gml_object_exists(double object_index);
double gml_object_get_sprite(double object_index);
double gml_object_get_solid(double object_index);
double gml_get_timer(void);
double gml_delta_time(void);
void gm82_gml_set_frame_time(double seconds);
void gml_draw_self(void);
void gml_draw_self_ext(void);
void gml_draw_self_as(double sprite);
void gml_draw_self_blend(double color, double alpha);
void gml_draw_self_floored(void);
double gml_move_wrap(double hor, double vert, double margin);
double gml_outside_room(void);
double gml_position_free(double x, double y);
double gml_ds_list_all(double id, double val);
double gml_ds_list_any(double id, double val);
double gml_ds_list_concat(double dest_id, double src_id);
double gml_animation_stop(void);
double gml_animation_pingpong(void);
void gml_draw_sprite(double sprite, double x, double y);
void gml_draw_set_color(double color);
void gml_draw_set_alpha(double alpha);
void gml_draw_reset(void);
void gml_draw_set_rgba(double r, double g, double b, double a);
double gml_instance_destroy_id(double inst_id);
double gml_instance_nearest_notme(double x, double y, double object_index);
const char *gm82_gml_last_string(void);
double gml_string_starts_with(const char *str, const char *substr);
