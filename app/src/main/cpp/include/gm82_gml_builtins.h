#ifndef GM82_GML_BUILTINS_H
#define GM82_GML_BUILTINS_H
#include "gm82_runtime.h"
#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif
void gm82_gml_set_runtime(gm82_runtime *rt);
gm82_runtime *gm82_gml_get_runtime(void);
void gm82_gml_set_self(gm82_instance *self);
gm82_instance *gm82_gml_get_self(void);
void gm82_gml_set_frame_time(double seconds);
double gml_delta_time(void);
double gml_place_meeting(double x, double y, double object_index);
double gml_position_meeting(double x, double y, double object_index);
double gml_instance_place(double x, double y, double object_index);
double gml_place_meeting_precise(double x, double y, double object_index);
double gml_get_bbox_left(void);
double gml_get_bbox_right(void);
double gml_get_bbox_top(void);
double gml_get_bbox_bottom(void);
double gml_sprite_get_width(double sprite);
double gml_sprite_get_height(double sprite);
double gml_sprite_get_xoffset(double sprite);
double gml_sprite_get_yoffset(double sprite);
double gml_sprite_get_number(double sprite);
void gm82_draw_set_target(uint8_t *rgba, int32_t w, int32_t h);
double gml_draw_sprite_ext(double sprite, double img, double x, double y,
    double xscale, double yscale, double rot, double color, double alpha);
/* Full header: python3 tools/gap_fill_20261013/restore_builtins_h.py after HDR_PART_*.txt */
#ifdef __cplusplus
}
#endif
#endif
