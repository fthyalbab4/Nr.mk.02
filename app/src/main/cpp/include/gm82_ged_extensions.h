#ifndef GM82_GED_EXTENSIONS_H
#define GM82_GED_EXTENSIONS_H

#include "gml_vm.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GM82 GED/GEJ Extension Registry, Constants & Function Dispatcher */
int gm82_ged_extension_count(void);
const char *gm82_ged_extension_name(int index);
int gm82_ged_extension_exists(const char *name);
int gm82_ged_extension_register(const char *name);

int gm82_ged_function_count(void);
const char *gm82_ged_function_name(int index);
int gm82_ged_function_exists(const char *name);

int gm82_ged_constant_count(void);
const char *gm82_ged_constant_name(int index);
int gm82_ged_lookup_constant(const char *name, double *out_num, char *out_str, size_t str_cap);

/* Executes extension_* registry calls and all 1,014+ GM82 GED/GEJ package functions.
   Returns 1 if handled, 0 if unknown. */
int gm82_ged_call(const char *name, const gml_value *args, size_t count, gml_value *out);

void gm82_ged_reset(void);

#ifdef __cplusplus
}
#endif

#endif /* GM82_GED_EXTENSIONS_H */
