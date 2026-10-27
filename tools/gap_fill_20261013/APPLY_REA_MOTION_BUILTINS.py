#!/usr/bin/env python3
"""Patch mp_grid.c + eval dispatch for REA anvil motion builtins."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
mp = ROOT / "app/src/main/cpp/src/gm82_mp_grid.c"
eval_c = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
builtins = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"

MP_FUNCS = r'''
void gm82_mp_grid_clear_cell(gm82_mp_grid_world *w, int id, int cx, int cy) {
    if (!w || id < 0 || id >= GM82_MP_GRID_MAX || !w->grids[id].used) return;
    gm82_mp_grid *g = &w->grids[id];
    if (cx < 0 || cy < 0 || cx >= g->w || cy >= g->h) return;
    g->cells[cy * GM82_MP_GRID_CELLS + cx] = 0;
}

void gm82_mp_grid_clear_rectangle(gm82_mp_grid_world *w, int id, int x1, int y1, int x2, int y2) {
    if (!w || id < 0 || id >= GM82_MP_GRID_MAX || !w->grids[id].used) return;
    gm82_mp_grid *g = &w->grids[id];
    if (x1 > x2) { int t = x1; x1 = x2; x2 = t; }
    if (y1 > y2) { int t = y1; y1 = y2; y2 = t; }
    for (int cy = y1; cy <= y2; cy++)
        for (int cx = x1; cx <= x2; cx++)
            if (cx >= 0 && cy >= 0 && cx < g->w && cy < g->h)
                g->cells[cy * GM82_MP_GRID_CELLS + cx] = 0;
}

void gm82_mp_grid_add_rectangle(gm82_mp_grid_world *w, int id, int x1, int y1, int x2, int y2, int solid) {
    if (!w || id < 0 || id >= GM82_MP_GRID_MAX || !w->grids[id].used) return;
    gm82_mp_grid *g = &w->grids[id];
    if (x1 > x2) { int t = x1; x1 = x2; x2 = t; }
    if (y1 > y2) { int t = y1; y1 = y2; y2 = t; }
    uint8_t v = solid ? 1 : 0;
    for (int cy = y1; cy <= y2; cy++)
        for (int cx = x1; cx <= x2; cx++)
            if (cx >= 0 && cy >= 0 && cx < g->w && cy < g->h)
                g->cells[cy * GM82_MP_GRID_CELLS + cx] = v;
}
'''

if mp.exists():
    t = mp.read_text()
    if 'gm82_mp_grid_clear_cell' not in t:
        # insert before path function
        needle = 'int gm82_mp_grid_path('
        if needle in t:
            t = t.replace(needle, MP_FUNCS + '\n' + needle, 1)
            mp.write_text(t)
            print('mp_grid patched')
        else:
            t += '\n' + MP_FUNCS
            mp.write_text(t)
            print('mp_grid appended')
    else:
        print('mp_grid already has clear_cell')

# builtins: add wrappers near mp_grid_add_cell
BU = r'''
double gml_place_snapped(double x, double y, double hsnap, double vsnap) {
    if (hsnap <= 0) hsnap = 1;
    if (vsnap <= 0) vsnap = 1;
    double rx = x / hsnap, ry = y / vsnap;
    double fx = rx - floor(rx), fy = ry - floor(ry);
    if (fx > 0.5) fx = 1.0 - fx;
    if (fy > 0.5) fy = 1.0 - fy;
    return (fx < 1e-6 && fy < 1e-6) ? 1.0 : 0.0;
}
double gml_move_contact(double dir, double maxdist) { return gml_move_contact_solid(dir, maxdist); }
double gml_move_bounce(double advanced) { return gml_move_bounce_solid(advanced); }
double gml_mp_grid_clear_cell(double id, double cx, double cy) {
    if (g_mp) gm82_mp_grid_clear_cell(g_mp, (int)id, (int)cx, (int)cy);
    return 0;
}
double gml_mp_grid_clear_rectangle(double id, double x1, double y1, double x2, double y2) {
    if (g_mp) gm82_mp_grid_clear_rectangle(g_mp, (int)id, (int)x1, (int)y1, (int)x2, (int)y2);
    return 0;
}
double gml_mp_grid_add_rectangle(double id, double x1, double y1, double x2, double y2, double solid) {
    if (g_mp) gm82_mp_grid_add_rectangle(g_mp, (int)id, (int)x1, (int)y1, (int)x2, (int)y2, solid != 0);
    return 0;
}
double gml_mp_grid_add_instances(double id, double obj, double prec) { (void)id;(void)obj;(void)prec; return 0; }
double gml_mp_grid_draw(double id) { (void)id; return 0; }
'''

if builtins.exists():
    t = builtins.read_text()
    if 'gml_place_snapped' not in t:
        # ensure math.h floor available - file already uses math
        mark = 'double gml_mp_grid_add_cell('
        if mark in t:
            # insert after add_cell function block - simpler append before path
            mark2 = 'double gml_mp_grid_path('
            if mark2 in t and 'gml_mp_grid_clear_cell' not in t:
                t = t.replace(mark2, BU + '\n' + mark2, 1)
                builtins.write_text(t)
                print('builtins motion patched')
            else:
                print('builtins skip path mark')
        else:
            print('builtins no add_cell mark')
    else:
        print('builtins already snapped')

EVAL = '''
        if (strcmp(id, "place_snapped") == 0) {
            double yarg = (nargs >= 2) ? args[1] : 0;
            double hs = (nargs >= 3) ? args[2] : 1;
            double vs = (nargs >= 4) ? args[3] : 1;
            *out = gml_place_snapped(arg, yarg, hs, vs); return true;
        }
        if (strcmp(id, "move_contact") == 0) {
            *out = gml_move_contact(arg, nargs >= 2 ? args[1] : 1000); return true;
        }
        if (strcmp(id, "move_bounce") == 0) {
            *out = gml_move_bounce(nargs >= 1 ? arg : 0); return true;
        }
        if (strcmp(id, "mp_grid_clear_cell") == 0) {
            *out = gml_mp_grid_clear_cell(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "mp_grid_clear_rectangle") == 0) {
            *out = gml_mp_grid_clear_rectangle(args[0], args[1], args[2], args[3], nargs >= 5 ? args[4] : 0); return true;
        }
        if (strcmp(id, "mp_grid_add_rectangle") == 0) {
            *out = gml_mp_grid_add_rectangle(args[0], args[1], args[2], args[3], args[4], nargs >= 6 ? args[5] : 1); return true;
        }
        if (strcmp(id, "mp_grid_add_instances") == 0) {
            *out = gml_mp_grid_add_instances(arg, nargs >= 2 ? args[1] : -1, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "mp_grid_draw") == 0) {
            *out = gml_mp_grid_draw(arg); return true;
        }
'''

if eval_c.exists():
    t = eval_c.read_text()
    if 'place_snapped' not in t:
        needle = 'if (strcmp(id, "mp_grid_path") == 0) {'
        if needle in t:
            t = t.replace(needle, EVAL + '\n        ' + needle, 1)
            eval_c.write_text(t)
            print('eval patched')
        else:
            print('eval no mp_grid_path needle')
    else:
        print('eval already snapped')

# header decls
h = ROOT / 'app/src/main/cpp/include/gm82_gml_builtins.h'
if h.exists():
    ht = h.read_text()
    if 'gml_place_snapped' not in ht:
        ht = ht.replace(
            'double gml_place_meeting_precise',
            'double gml_place_snapped(double x, double y, double hsnap, double vsnap);\n'
            'double gml_move_contact(double dir, double maxdist);\n'
            'double gml_move_bounce(double advanced);\n'
            'double gml_mp_grid_clear_cell(double id, double cx, double cy);\n'
            'double gml_mp_grid_clear_rectangle(double id, double x1, double y1, double x2, double y2);\n'
            'double gml_mp_grid_add_rectangle(double id, double x1, double y1, double x2, double y2, double solid);\n'
            'double gml_mp_grid_add_instances(double id, double obj, double prec);\n'
            'double gml_mp_grid_draw(double id);\n'
            'double gml_place_meeting_precise',
            1,
        )
        h.write_text(ht)
        print('header patched')
print('APPLY_REA_MOTION_DONE')
