#ifndef GM82_TEXT_MATERIALIZE_H
#define GM82_TEXT_MATERIALIZE_H

#include "gm82_project_ir.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Materialises a GM82 text project (`.gm82` directory tree) into decoded IR
 * resources. Unlike GMK, assets live in separate files:
 *   sprites/<name>/<frame>.png + sprites/<name>/sprite.txt
 *   backgrounds/<name>.png      + backgrounds/<name>.txt
 *
 * Requires ir->source_path to point at the project root. Fills ir->sprites and
 * ir->backgrounds with GM82_RES_DECODED entries and RGBA pixels, and reports
 * how many resources were decoded.
 */
typedef struct gm82_text_materialize_result {
    int sprites_decoded;
    int sprites_failed;
    int backgrounds_decoded;
    int backgrounds_failed;
    bool ok;             /* true when nothing failed */
} gm82_text_materialize_result;

gm82_text_materialize_result gm82_text_materialize_assets(gm82_project_ir *ir);

#ifdef __cplusplus
}
#endif

#endif /* GM82_TEXT_MATERIALIZE_H */
