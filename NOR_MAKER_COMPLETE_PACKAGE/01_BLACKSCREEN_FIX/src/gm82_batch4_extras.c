/* gm82_batch4_extras.c — host implementations for remaining GM82CORE stubs
 * Closes host P0 gaps: ds_bag_*, bigchoose_*, event_*, date_*, dss_*, registry/mouse no-ops.
 * Linked via the source-file glob. Provides __wrap_gm82_gm82core_try_stub for 0-arg intercept.
 */
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ---- ds_bag (simple growable bag of doubles) ---- */
#define BAG_SLOTS 256
typedef struct { int used; int cap; double *v; } DsBag;
static DsBag g_bags[BAG_SLOTS];
static int g_bag_next = 1;

double gml_ds_bag_create(void) {
    for (int i = 1; i < BAG_SLOTS; i++) {
        int id = (g_bag_next + i) % BAG_SLOTS; if (id == 0) id = 1;
        if (g_bags[id].v == NULL) {
            g_bags[id].cap = 16;
            g_bags[id].used = 0;
            g_bags[id].v = (double*)calloc((size_t)g_bags[id].cap, sizeof(double));
            g_bag_next = id + 1;
            return (double)id;
        }
    }
    return -1.0;
}
double gml_ds_bag_destroy(double id) {
    int i = (int)id; if (i <= 0 || i >= BAG_SLOTS) return 0;
    free(g_bags[i].v); g_bags[i].v = NULL; g_bags[i].used = 0; g_bags[i].cap = 0;
    return 0;
}
double gml_ds_bag_clear(double id) {
    int i = (int)id; if (i <= 0 || i >= BAG_SLOTS || !g_bags[i].v) return 0;
    g_bags[i].used = 0; return 0;
}
double gml_ds_bag_size(double id) {
    int i = (int)id; if (i <= 0 || i >= BAG_SLOTS || !g_bags[i].v) return 0;
    return (double)g_bags[i].used;
}
double gml_ds_bag_empty(double id) {
    return gml_ds_bag_size(id) <= 0.0 ? 1.0 : 0.0;
}
double gml_ds_bag_add(double id, double val) {
    int i = (int)id; if (i <= 0 || i >= BAG_SLOTS || !g_bags[i].v) return 0;
    if (g_bags[i].used >= g_bags[i].cap) {
        int nc = g_bags[i].cap * 2; if (nc < 16) nc = 16;
        double *nv = (double*)realloc(g_bags[i].v, (size_t)nc * sizeof(double));
        if (!nv) return 0;
        g_bags[i].v = nv; g_bags[i].cap = nc;
    }
    g_bags[i].v[g_bags[i].used++] = val;
    return 1.0;
}
double gml_ds_bag_remove(double id, double val) {
    int i = (int)id; if (i <= 0 || i >= BAG_SLOTS || !g_bags[i].v) return 0;
    for (int j = 0; j < g_bags[i].used; j++) {
        if (g_bags[i].v[j] == val) {
            g_bags[i].v[j] = g_bags[i].v[--g_bags[i].used];
            return 1.0;
        }
    }
    return 0;
}
double gml_ds_bag_grab(double id) {
    int i = (int)id; if (i <= 0 || i >= BAG_SLOTS || !g_bags[i].v || g_bags[i].used <= 0) return 0;
    int j = rand() % g_bags[i].used;
    double v = g_bags[i].v[j];
    g_bags[i].v[j] = g_bags[i].v[--g_bags[i].used];
    return v;
}
double gml_ds_bag_quick(double id) {
    return gml_ds_bag_grab(id);
}

/* PLACEHOLDER_REST - incomplete push blocked */
#ifdef __cplusplus
}
#endif
