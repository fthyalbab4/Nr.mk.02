#ifndef GM82_TEXT_PATH_H
#define GM82_TEXT_PATH_H

#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef PATH_MAX
#define PATH_MAX 4096
#endif

/* Resolve an existing project-relative path and reject traversal or symlinks
 * that leave the selected project root. The returned path is canonical. */
static inline int gm82_text_resolve_path(const char *root, const char *relative,
                                         char *out, size_t out_size) {
    if (!root || !*root || !relative || !*relative || !out || !out_size) return 0;
    if (relative[0] == '/' || relative[0] == '\\') return 0;

    const char *component = relative;
    for (const char *p = relative;; ++p) {
        if (*p == '\\') return 0;
        if (*p == '/' || *p == '\0') {
            size_t length = (size_t)(p - component);
            if (length == 0 || (length == 1 && component[0] == '.') ||
                (length == 2 && component[0] == '.' && component[1] == '.')) return 0;
            if (*p == '\0') break;
            component = p + 1;
        }
    }

    char candidate[PATH_MAX];
    char resolved_root[PATH_MAX];
    char resolved_path[PATH_MAX];
    int written = snprintf(candidate, sizeof(candidate), "%s/%s", root, relative);
    if (written < 0 || (size_t)written >= sizeof(candidate)) return 0;
    if (!realpath(root, resolved_root) || !realpath(candidate, resolved_path)) return 0;

    size_t root_length = strlen(resolved_root);
    int inside = 0;
    if (root_length == 1 && resolved_root[0] == '/') {
        inside = resolved_path[0] == '/';
    } else if (strncmp(resolved_root, resolved_path, root_length) == 0 &&
               (resolved_path[root_length] == '/' || resolved_path[root_length] == '\0')) {
        inside = 1;
    }
    if (!inside) return 0;

    size_t path_length = strlen(resolved_path);
    if (path_length >= out_size) return 0;
    memcpy(out, resolved_path, path_length + 1);
    return 1;
}

#endif
