#ifndef GM82_GMK_STREAM_H
#define GM82_GMK_STREAM_H

#include "gm82_project_ir.h"
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Deterministic sequential GMK stream parser supporting GM6 (600),
 * GM7 (700/701 with obfuscation swap table), GM8 (800), and GM8.1 (810).
 * Replaces heuristic 0x78 scanning as the primary asset/code loader.
 */
bool gm82_gmk_stream_parse(const uint8_t *data, size_t size, gm82_project_ir *ir);

#ifdef __cplusplus
}
#endif

#endif /* GM82_GMK_STREAM_H */
