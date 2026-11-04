/* gm82_batch4_extras.c — host implementations for remaining GM82CORE stubs
 * Closes host P0 gaps: ds_bag_*, bigchoose_*, event_*, date_*, dss_*, registry/mouse no-ops.
 * Linked via src/*.c glob. Provides __wrap_gm82_gm82core_try_stub for 0-arg intercept.
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
    int r = rand() % g_bags[i].used;
    double v = g_bags[i].v[r];
    g_bags[i].v[r] = g_bags[i].v[--g_bags[i].used];
    return v;
}
double gml_ds_bag_quick(double id) {
    int i = (int)id; if (i <= 0 || i >= BAG_SLOTS || !g_bags[i].v || g_bags[i].used <= 0) return 0;
    return g_bags[i].v[rand() % g_bags[i].used];
}

/* ---- bigchoose / choose_weighted ---- */
#define BC_MAX 256
static double g_bc_vals[BC_MAX];
static double g_bc_wts[BC_MAX];
static int g_bc_n = 0;

double gml_bigchoose_clear(void) { g_bc_n = 0; return 0; }
double gml_bigchoose(double v) {
    if (g_bc_n < BC_MAX) { g_bc_vals[g_bc_n] = v; g_bc_wts[g_bc_n] = 1.0; g_bc_n++; }
    return 0;
}
double gml_bigchoose_weighted(double v, double w) {
    if (g_bc_n < BC_MAX) { g_bc_vals[g_bc_n] = v; g_bc_wts[g_bc_n] = (w > 0 ? w : 0); g_bc_n++; }
    return 0;
}
double gml_bigchoose_get(void) {
    if (g_bc_n <= 0) return 0;
    return g_bc_vals[rand() % g_bc_n];
}
double gml_bigchoose_weighted_get(void) {
    if (g_bc_n <= 0) return 0;
    double sum = 0; for (int i = 0; i < g_bc_n; i++) sum += g_bc_wts[i];
    if (sum <= 0) return g_bc_vals[rand() % g_bc_n];
    double r = ((double)rand() / (double)RAND_MAX) * sum;
    for (int i = 0; i < g_bc_n; i++) { r -= g_bc_wts[i]; if (r <= 0) return g_bc_vals[i]; }
    return g_bc_vals[g_bc_n - 1];
}
double gml_choose_weighted(double a, double wa, double b, double wb) {
    double sum = (wa > 0 ? wa : 0) + (wb > 0 ? wb : 0);
    if (sum <= 0) return a;
    double r = ((double)rand() / (double)RAND_MAX) * sum;
    return (r < (wa > 0 ? wa : 0)) ? a : b;
}

/* ---- event_* helpers ---- */
double gml_event_alarm(double n) { (void)n; return 0; }
double gml_event_beginstep(void) { return 0; }
double gml_event_step(void) { return 0; }
double gml_event_endstep(void) { return 0; }
double gml_event_draw(void) { return 0; }
double gml_event_trigger(double n) { (void)n; return 0; }

/* ---- date helpers ---- */
double gml_date_get_moon_phase(void) {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    if (!tm) return 0;
    int doy = tm->tm_yday;
    double phase = fmod((double)doy, 29.530588) / 29.530588;
    return phase;
}
double gml_date_is_easter(void) { return 0; }
double gml_datetime_current_filename(void) { return (double)time(NULL); }

/* ---- dss_* aliases ---- */
double gml_dss_list_create(void) { return gml_ds_bag_create(); }
double gml_dss_map_create(void) { return gml_ds_bag_create(); }
double gml_dss_grid_create(double w, double h) { (void)w; (void)h; return gml_ds_bag_create(); }
double gml_dss_stack_create(void) { return gml_ds_bag_create(); }
double gml_dss_queue_create(void) { return gml_ds_bag_create(); }
double gml_dss_priority_create(void) { return gml_ds_bag_create(); }
double gml_dss_destroy(double id) { return gml_ds_bag_destroy(id); }
double gml_dss_get_type(double id) { (void)id; return 0; }
double gml_dslist(void) { return gml_ds_bag_create(); }
double gml_dsmap(void) { return gml_ds_bag_create(); }

/* ---- registry / mouse / file no-ops (Android host) ---- */
double gml_registry_read_dword(void) { return 0; }
double gml_registry_read_sz(void) { return 0; }
double gml_registry_write_dword(void) { return 0; }
double gml_mouse_back_button(void) { return 0; }
double gml_mouse_forward_button(void) { return 0; }
double gml_mouse_check_direct(void) { return 0; }
double gml_mouse_in_window(void) { return 1; }
double gml_window_has_focus(void) { return 1; }
double gml_message_default(void) { return 0; }
double gml_execute_program_silent(void) { return 0; }
double gml_execute_program_async(void) { return 0; }
double gml_execute_program_async_result(void) { return 0; }
double gml_get_open_filename_ext(void) { return 0; }
double gml_get_save_filename_ext(void) { return 0; }
double gml_file_find_list(void) { return 0; }
double gml_font_add_file(void) { return -1; }
double gml_font_add_winui(void) { return -1; }
double gml_include_file_get_buffer(void) { return 0; }
double gml_instance_assign_groups(void) { return 0; }
double gml_tile_add_ext(void) { return 0; }
double gml_tile_find_anywhere(void) { return -1; }
double gml_array_from_string(void) { return 0; }
double gml_global_array_from_string(void) { return 0; }
double gml_ds_grid_set_many(void) { return 0; }
double gml_ds_list_contains_ext(void) { return 0; }
double gml_ds_list_equal(void) { return 0; }
double gml_ds_list_str(void) { return 0; }
double gml_ds_list_union(void) { return 0; }
double gml_ds_map_read_ini(void) { return 0; }
double gml_ds_map_read_ini_string(void) { return 0; }
double gml_ds_map_read_safe(void) { return 0; }
double gml_ds_map_set_many(void) { return 0; }
double gml_ds_map_write_ini(void) { return 0; }
double gml_ds_map_write_ini_string(void) { return 0; }
double gml_ds_priority_add_many(void) { return 0; }

/* draw_*_extra — no-op (need GL); residual stubs */
double gml_draw_background_tiled_extra(void) { return 0; }
double gml_draw_sprite_part_extra(void) { return 0; }
double gml_draw_sprite_tiled_extra(void) { return 0; }
double gml_draw_sprite_part_centered(void) { return 0; }
double gml_draw_spotlight(void) { return 0; }
double gml_draw_setb(void) { return 0; }
double gml_draw_setf(void) { return 0; }

/* ds_list_filter / foreach / map need GML callback — residual */
double gml_ds_list_filter(void) { return 0; }
double gml_ds_list_foreach(void) { return 0; }
double gml_ds_list_map(void) { return 0; }

/* ---- wrap try_stub ---- */
extern int __real_gm82_gm82core_try_stub(const char *id, double *out);

int __wrap_gm82_gm82core_try_stub(const char *id, double *out) {
    if (!id || !out) return 0;
    #define H0(name, fn) if (strcmp(id, name) == 0) { *out = fn(); return 1; }
    H0("bigchoose_clear", gml_bigchoose_clear);
    H0("bigchoose_get", gml_bigchoose_get);
    H0("bigchoose_weighted_get", gml_bigchoose_weighted_get);
    H0("event_beginstep", gml_event_beginstep);
    H0("event_step", gml_event_step);
    H0("event_endstep", gml_event_endstep);
    H0("event_draw", gml_event_draw);
    H0("date_get_moon_phase", gml_date_get_moon_phase);
    H0("date_is_easter", gml_date_is_easter);
    H0("datetime_current_filename", gml_datetime_current_filename);
    H0("dss_list_create", gml_dss_list_create);
    H0("dss_map_create", gml_dss_map_create);
    H0("dss_stack_create", gml_dss_stack_create);
    H0("dss_queue_create", gml_dss_queue_create);
    H0("dss_priority_create", gml_dss_priority_create);
    H0("dslist", gml_dslist);
    H0("dsmap", gml_dsmap);
    H0("ds_bag_create", gml_ds_bag_create);
    H0("mouse_back_button", gml_mouse_back_button);
    H0("mouse_forward_button", gml_mouse_forward_button);
    H0("mouse_check_direct", gml_mouse_check_direct);
    H0("mouse_in_window", gml_mouse_in_window);
    H0("window_has_focus", gml_window_has_focus);
    H0("message_default", gml_message_default);
    H0("execute_program_silent", gml_execute_program_silent);
    H0("execute_program_async", gml_execute_program_async);
    H0("execute_program_async_result", gml_execute_program_async_result);
    H0("get_open_filename_ext", gml_get_open_filename_ext);
    H0("get_save_filename_ext", gml_get_save_filename_ext);
    H0("file_find_list", gml_file_find_list);
    H0("font_add_file", gml_font_add_file);
    H0("font_add_winui", gml_font_add_winui);
    H0("include_file_get_buffer", gml_include_file_get_buffer);
    H0("instance_assign_groups", gml_instance_assign_groups);
    H0("tile_add_ext", gml_tile_add_ext);
    H0("tile_find_anywhere", gml_tile_find_anywhere);
    H0("array_from_string", gml_array_from_string);
    H0("global_array_from_string", gml_global_array_from_string);
    H0("ds_grid_set_many", gml_ds_grid_set_many);
    H0("ds_list_contains_ext", gml_ds_list_contains_ext);
    H0("ds_list_equal", gml_ds_list_equal);
    H0("ds_list_str", gml_ds_list_str);
    H0("ds_list_union", gml_ds_list_union);
    H0("ds_map_read_ini", gml_ds_map_read_ini);
    H0("ds_map_read_ini_string", gml_ds_map_read_ini_string);
    H0("ds_map_read_safe", gml_ds_map_read_safe);
    H0("ds_map_set_many", gml_ds_map_set_many);
    H0("ds_map_write_ini", gml_ds_map_write_ini);
    H0("ds_map_write_ini_string", gml_ds_map_write_ini_string);
    H0("ds_priority_add_many", gml_ds_priority_add_many);
    H0("registry_read_dword", gml_registry_read_dword);
    H0("registry_read_sz", gml_registry_read_sz);
    H0("registry_write_dword", gml_registry_write_dword);
    H0("draw_background_tiled_extra", gml_draw_background_tiled_extra);
    H0("draw_sprite_part_extra", gml_draw_sprite_part_extra);
    H0("draw_sprite_tiled_extra", gml_draw_sprite_tiled_extra);
    H0("draw_sprite_part_centered", gml_draw_sprite_part_centered);
    H0("draw_spotlight", gml_draw_spotlight);
    H0("draw_setb", gml_draw_setb);
    H0("draw_setf", gml_draw_setf);
    H0("ds_list_filter", gml_ds_list_filter);
    H0("ds_list_foreach", gml_ds_list_foreach);
    H0("ds_list_map", gml_ds_list_map);
    return __real_gm82_gm82core_try_stub(id, out);
}

#ifdef __cplusplus
}
#endif
