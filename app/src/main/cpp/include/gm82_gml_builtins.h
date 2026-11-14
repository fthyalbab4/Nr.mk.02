#ifndef GM82_GML_BUILTINS_H
#define GM82_GML_BUILTINS_H

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

/* RESTORED_MARKER: full header must be restored from parent commit 50dea010 + ds many decls.
 * Temporary minimal restore to unblock builds; full content follows in next commit if truncated.
 */
double gml_ds_grid_set_many(double id, const double *args, int count);
double gml_ds_priority_add_many(double id, const double *args, int count);

#ifdef __cplusplus
}
#endif

#endif
