#ifndef GM82_MP_GRID_H
#define GM82_MP_GRID_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GM82_MP_GRID_MAX 4
#define GM82_MP_GRID_CELLS 64

typedef struct {
    int used;
    int w, h;
    int cell_w, cell_h;
    int left, top;
    uint8_t cells[GM82_MP_GRID_CELLS * GM82_MP_GRID_CELLS];
} gm82_mp_grid;

typedef struct {
    gm82_mp_grid grids[GM82_MP_GRID_MAX];
} gm82_mp_grid_world;

void gm82_mp_grid_world_init(gm82_mp_grid_world *w);
int  gm82_mp_grid_create(gm82_mp_grid_world *w, int left, int top, int hcells, int vcells, int cellw, int cellh);
void gm82_mp_grid_destroy(gm82_mp_grid_world *w, int id);
void gm82_mp_grid_clear_all(gm82_mp_grid_world *w, int id, int solid);
void gm82_mp_grid_clear_cell(gm82_mp_grid_world *w, int id, int cx, int cy);
void gm82_mp_grid_clear_rectangle(gm82_mp_grid_world *w, int id, int x1, int y1, int x2, int y2);
void gm82_mp_grid_add_cell(gm82_mp_grid_world *w, int id, int cx, int cy, int solid);
void gm82_mp_grid_add_rectangle(gm82_mp_grid_world *w, int id, int x1, int y1, int x2, int y2, int solid);
int  gm82_mp_grid_path(gm82_mp_grid_world *w, int id,
                       double xstart, double ystart, double xgoal, double ygoal,
                       double *ox, double *oy, int max_pts, int allowdiag);

#ifdef __cplusplus
}
#endif

#endif
