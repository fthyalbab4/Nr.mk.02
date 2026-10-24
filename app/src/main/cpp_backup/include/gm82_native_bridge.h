#ifndef GM82_NATIVE_BRIDGE_H
#define GM82_NATIVE_BRIDGE_H

#include "gml_vm.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

double nor_import_format_native(const char *path);
double nor_validate_rom_native(const char *path, double kind);
double nor_export_nes_native(const char *project, const char *output);
double nor_export_gbc_native(const char *project, const char *output);
double nor_export_gba_native(const char *project, const char *output);

int gm82_native_call(void *userdata, const char *name, const gml_value *args, size_t count, gml_value *out);

#ifdef __cplusplus
}
#endif

#endif /* GM82_NATIVE_BRIDGE_H */
