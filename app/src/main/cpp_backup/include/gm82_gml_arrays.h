#ifndef GM82_GML_ARRAYS_H
#define GM82_GML_ARRAYS_H

#include "gm82_runtime.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Runtime-owned compatibility arrays used by the GML expression evaluator. */
double gm82_gml_array_create_1d(gm82_runtime *rt, double length);
double gm82_gml_array_create_2d(gm82_runtime *rt, double height, double width);
bool gm82_gml_array_is_1d(gm82_runtime *rt, double array_id);
bool gm82_gml_array_is_2d(gm82_runtime *rt, double array_id);
double gm82_gml_array_get_1d(gm82_runtime *rt, double array_id, double index);
bool gm82_gml_array_set_1d(gm82_runtime *rt, double array_id, double index, double value);
double gm82_gml_array_get_2d(gm82_runtime *rt, double array_id, double row, double column);
bool gm82_gml_array_set_2d(gm82_runtime *rt, double array_id, double row, double column, double value);
double gm82_gml_array_length_1d(gm82_runtime *rt, double array_id);
double gm82_gml_array_length_2d(gm82_runtime *rt, double array_id, double row);
double gm82_gml_array_height_2d(gm82_runtime *rt, double array_id);
void gm82_gml_arrays_cleanup(gm82_runtime *rt);

#ifdef __cplusplus
}
#endif
#endif
