#define _POSIX_C_SOURCE 200809L
/* Clean-room extras from anvil builtin register table (REA 0x63a5a8). */
#include "gm82_gml_builtins.h"
#include "gm82_mp_grid.h"

/* Strong implementations that take explicit world pointer from bind API. */
static gm82_mp_grid_world *g_rea_mp;
void gm82_mp_grid_bind_rea(gm82_mp_grid_world *w) { g_rea_mp = w; }

double gml_mp_grid_clear_cell_impl(double id, double cx, double cy) {
    if (!g_rea_mp) return 0;
    gm82_mp_grid_clear_cell(g_rea_mp, (int)id, (int)cx, (int)cy);
    return 0;
}

double gml_mp_grid_clear_rectangle_impl(double id, double x1, double y1, double x2, double y2) {
    if (!g_rea_mp) return 0;
    gm82_mp_grid_clear_rectangle(g_rea_mp, (int)id, (int)x1, (int)y1, (int)x2, (int)y2);
    return 0;
}

double gml_mp_grid_add_rectangle_impl(double id, double x1, double y1, double x2, double y2, double solid) {
    if (!g_rea_mp) return 0;
    gm82_mp_grid_add_rectangle(g_rea_mp, (int)id, (int)x1, (int)y1, (int)x2, (int)y2, solid != 0);
    return 0;
}

double gml_mp_grid_add_instances_impl(double id, double obj, double prec) {
    (void)id; (void)obj; (void)prec;
    /* Requires runtime instance iteration; filled when FAIL shows use */
    return 0;
}

double gml_mp_grid_draw_impl(double id) {
    (void)id;
    return 0;
}
