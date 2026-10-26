#define _POSIX_C_SOURCE 200809L
/* Clean-room extras from anvil builtin register table (REA 0x63a5a8). */
#include "gm82_mp_grid.h"
#include <math.h>

#ifndef GM82_WEAK
#if defined(__GNUC__) || defined(__clang__)
#define GM82_WEAK __attribute__((weak))
#else
#define GM82_WEAK
#endif
#endif

/* declared in main builtins translation unit linkage via header */
extern double gml_move_contact_solid(double dir, double maxdist);
extern double gml_move_bounce_solid(double advanced);
extern double gml_place_free(double x, double y);

GM82_WEAK double gml_place_snapped(double x, double y, double hsnap, double vsnap) {
    if (hsnap <= 0) hsnap = 1;
    if (vsnap <= 0) vsnap = 1;
    double rx = x / hsnap;
    double ry = y / vsnap;
    double fx = rx - floor(rx);
    double fy = ry - floor(ry);
    if (fx > 0.5) fx = 1.0 - fx;
    if (fy > 0.5) fy = 1.0 - fy;
    return (fx < 1e-6 && fy < 1e-6) ? 1.0 : 0.0;
}

GM82_WEAK double gml_move_contact(double dir, double maxdist) {
    return gml_move_contact_solid(dir, maxdist);
}

GM82_WEAK double gml_move_bounce(double advanced) {
    return gml_move_bounce_solid(advanced);
}

GM82_WEAK double gml_mp_grid_clear_cell(double id, double cx, double cy) {
    extern gm82_mp_grid_world *gm82_mp_grid_active(void);
    /* use bind world through existing path in builtins - weak fallback */
    return 0;
}

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
