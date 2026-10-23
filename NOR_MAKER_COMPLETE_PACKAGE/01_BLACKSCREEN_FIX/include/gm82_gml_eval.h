#ifndef GM82_GML_EVAL_H
#define GM82_GML_EVAL_H

/*
 * Minimal GML expression / statement evaluator.
 * Supports numbers, arithmetic, variables, assignment, function calls,
 * and a string-returning path via last-string buffer (str_args / last_string).
 *
 * NOT a full GML interpreter – limited with()/arrays/scripts.
 */

#include "gm82_runtime.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Evaluate expression, result in *out. Returns false on parse error. */
bool gm82_gml_eval_expr(gm82_runtime *rt, gm82_instance *self,
                          const char *expr, double *out);

/* Execute one simple statement */
bool gm82_gml_eval_stmt(gm82_runtime *rt, gm82_instance *self, const char *stmt);

/* Execute multiple statements separated by ; or newlines */
int gm82_gml_eval_block(gm82_runtime *rt, gm82_instance *self, const char *code);

/* Set/get script arguments (argument0, argument1, ...) */
void gm82_gml_set_script_args(const double *args, int count);
double gm82_gml_get_script_arg(int index);

/* ---- String-returning VM support ---- */
/* Last string produced by a string_* builtin or string literal in eval. */
const char *gm82_gml_last_string(void);
void gm82_gml_set_last_string(const char *s);
/* True if the most recent expression left a string in the last-string buffer. */
bool gm82_gml_last_was_string(void);
void gm82_gml_clear_last_string(void);

#ifdef __cplusplus
}
#endif

#endif
