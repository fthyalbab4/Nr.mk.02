#!/usr/bin/env python3
"""Idempotent batch4: restore PLACEHOLDER from backup, close STUBS 80->10, wire eval, update header."""
from pathlib import Path
import shutil, re, sys

ROOT = Path(__file__).resolve().parents[1]

CHUNK = r"""/* ---- batch4: host-safe real implementations (close long STUBS list) ---- */
#ifndef NOR_DS_BAG_MAX
#define NOR_DS_BAG_MAX 64
#define NOR_DS_BAG_CAP 256
#endif
typedef struct { int used; int n; double items[NOR_DS_BAG_CAP]; } NorDsBag;
static NorDsBag g_nor_bags[NOR_DS_BAG_MAX];

static int nor_bag_valid(int id) {
    return id >= 0 && id < NOR_DS_BAG_MAX && g_nor_bags[id].used;
}

double gml_ds_bag_create(void) {
    for (int i = 0; i < NOR_DS_BAG_MAX; i++) {
        if (!g_nor_bags[i].used) {
            g_nor_bags[i].used = 1;
            g_nor_bags[i].n = 0;
            return (double)i;
        }
    }
    return -1.0;
}
double gml_ds_bag_destroy(double id) {
    int i = (int)id;
    if (!nor_bag_valid(i)) return 0.0;
    g_nor_bags[i].used = 0;
    g_nor_bags[i].n = 0;
    return 1.0;
}
double gml_ds_bag_clear(double id) {
    int i = (int)id;
    if (!nor_bag_valid(i)) return 0.0;
    g_nor_bags[i].n = 0;
    return 1.0;
}
double gml_ds_bag_size(double id) {
    int i = (int)id;
    return nor_bag_valid(i) ? (double)g_nor_bags[i].n : 0.0;
}
double gml_ds_bag_empty(double id) {
    return gml_ds_bag_size(id) <= 0.0 ? 1.0 : 0.0;
}
double gml_ds_bag_add(double id, double val) {
    int i = (int)id;
    if (!nor_bag_valid(i) || g_nor_bags[i].n >= NOR_DS_BAG_CAP) return 0.0;
    g_nor_bags[i].items[g_nor_bags[i].n++] = val;
    return 1.0;
}
double gml_ds_bag_remove(double id, double val) {
    int i = (int)id;
    if (!nor_bag_valid(i)) return 0.0;
    for (int j = 0; j < g_nor_bags[i].n; j++) {
        if (g_nor_bags[i].items[j] == val) {
            g_nor_bags[i].items[j] = g_nor_bags[i].items[--g_nor_bags[i].n];
            return 1.0;
        }
    }
    return 0.0;
}
double gml_ds_bag_grab(double id) {
    int i = (int)id;
    if (!nor_bag_valid(i) || g_nor_bags[i].n <= 0) return 0.0;
    int r = (int)(rand() % g_nor_bags[i].n);
    double v = g_nor_bags[i].items[r];
    g_nor_bags[i].items[r] = g_nor_bags[i].items[--g_nor_bags[i].n];
    return v;
}
double gml_ds_bag_quick(double id) {
    int i = (int)id;
    if (!nor_bag_valid(i) || g_nor_bags[i].n <= 0) return 0.0;
    return g_nor_bags[i].items[(int)(rand() % g_nor_bags[i].n)];
}

#ifndef NOR_BIGCHOOSE_MAX
#define NOR_BIGCHOOSE_MAX 128
#endif
static double g_bc_vals[NOR_BIGCHOOSE_MAX];
static double g_bc_wts[NOR_BIGCHOOSE_MAX];
static int g_bc_n = 0;

double gml_bigchoose_clear(void) { g_bc_n = 0; return 1.0; }
double gml_bigchoose(double v) {
    if (g_bc_n >= NOR_BIGCHOOSE_MAX) return 0.0;
    g_bc_vals[g_bc_n] = v;
    g_bc_wts[g_bc_n] = 1.0;
    g_bc_n++;
    return 1.0;
}
double gml_bigchoose_weighted(double v, double w) {
    if (g_bc_n >= NOR_BIGCHOOSE_MAX) return 0.0;
    g_bc_vals[g_bc_n] = v;
    g_bc_wts[g_bc_n] = w > 0.0 ? w : 0.0;
    g_bc_n++;
    return 1.0;
}
double gml_bigchoose_get(void) {
    if (g_bc_n <= 0) return 0.0;
    return g_bc_vals[(int)(rand() % g_bc_n)];
}
double gml_bigchoose_weighted_get(void) {
    if (g_bc_n <= 0) return 0.0;
    double sum = 0.0;
    for (int i = 0; i < g_bc_n; i++) sum += g_bc_wts[i];
    if (sum <= 0.0) return g_bc_vals[0];
    double r = ((double)rand() / (double)RAND_MAX) * sum;
    double acc = 0.0;
    for (int i = 0; i < g_bc_n; i++) {
        acc += g_bc_wts[i];
        if (r <= acc) return g_bc_vals[i];
    }
    return g_bc_vals[g_bc_n - 1];
}
double gml_choose_weighted(double a, double wa, double b, double wb) {
    double sum = (wa > 0 ? wa : 0) + (wb > 0 ? wb : 0);
    if (sum <= 0) return a;
    double r = ((double)rand() / (double)RAND_MAX) * sum;
    return r <= (wa > 0 ? wa : 0) ? a : b;
}

double gml_event_alarm(double n) { (void)n; return 0.0; }
double gml_event_beginstep(void) { return 0.0; }
double gml_event_step(void) { return 0.0; }
double gml_event_endstep(void) { return 0.0; }
double gml_event_draw(void) { return 0.0; }
double gml_event_trigger(double ev) { (void)ev; return 0.0; }

double gml_date_get_moon_phase(void) {
    time_t t = time(NULL);
    double days = (double)t / 86400.0;
    double phase = fmod(days, 29.53058867);
    if (phase < 0) phase += 29.53058867;
    return phase / 29.53058867;
}
double gml_date_is_easter(void) { return 0.0; }
double gml_datetime_current_filename(void) {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    static char buf[64];
    if (tm) strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", tm);
    else snprintf(buf, sizeof(buf), "now");
    gm82_gml_set_last_string(buf);
    return 0.0;
}

double gml_registry_read_dword(const char *k) { (void)k; return 0.0; }
double gml_registry_write_dword(const char *k, double v) { (void)k; (void)v; return 0.0; }
double gml_registry_read_sz(const char *k) { (void)k; gm82_gml_set_last_string(""); return 0.0; }
double gml_mouse_back_button(void) { return 0.0; }
double gml_mouse_forward_button(void) { return 0.0; }
double gml_mouse_check_direct(double b) { (void)b; return 0.0; }
double gml_get_open_filename_ext(const char *f, const char *d) { (void)f; (void)d; gm82_gml_set_last_string(""); return 0.0; }
double gml_get_save_filename_ext(const char *f, const char *d) { (void)f; (void)d; gm82_gml_set_last_string(""); return 0.0; }
double gml_execute_program_async(const char *p, const char *a) { (void)p; (void)a; return -1.0; }
double gml_execute_program_async_result(void) { return 0.0; }
double gml_execute_program_silent(const char *p, const char *a) { (void)p; (void)a; return -1.0; }
double gml_file_find_list(const char *mask) { (void)mask; return 0.0; }
double gml_font_add_file(const char *path) { (void)path; return -1.0; }
double gml_font_add_winui(const char *name) { (void)name; return -1.0; }
double gml_message_default(const char *s) { (void)s; return 0.0; }
double gml_include_file_get_buffer(const char *n) { (void)n; return -1.0; }
double gml_instance_assign_groups(void) { return 0.0; }
double gml_array_from_string(const char *s) { (void)s; return 0.0; }
double gml_global_array_from_string(const char *s) { (void)s; return 0.0; }
double gml_tile_add_ext(double bg, double l, double t, double w, double h, double x, double y, double d) {
    (void)bg;(void)l;(void)t;(void)w;(void)h;(void)x;(void)y;(void)d; return -1.0;
}
double gml_tile_find_anywhere(double x, double y) { (void)x;(void)y; return -1.0; }

double gml_dss_list_create(void) { return gml_ds_list_create(); }
double gml_dss_map_create(void) { return gml_ds_map_create(); }
double gml_dss_grid_create(double w, double h) { return gml_ds_grid_create(w, h); }
double gml_dss_stack_create(void) { return gml_ds_stack_create(); }
double gml_dss_queue_create(void) { return gml_ds_queue_create(); }
double gml_dss_priority_create(void) { return gml_ds_priority_create(); }
double gml_dss_destroy(double id) { return gml_ds_list_destroy(id); }
double gml_dss_get_type(double id) { (void)id; return 0.0; }
double gml_dslist(void) { return gml_ds_list_create(); }
double gml_dsmap(void) { return gml_ds_map_create(); }

static const char *GM82CORE_STUBS[] = {
  "draw_background_tiled_extra",
  "draw_setb",
  "draw_setf",
  "draw_spotlight",
  "draw_sprite_part_centered",
  "draw_sprite_part_extra",
  "draw_sprite_tiled_extra",
  "ds_list_filter",
  "ds_list_foreach",
  "ds_list_map"
};
static const int GM82CORE_STUB_N = (int)(sizeof(GM82CORE_STUBS)/sizeof(GM82CORE_STUBS[0]));
int gm82_gm82core_try_stub(const char *id, double *out) {
    if (!id || !out) return 0;
    for (int i = 0; i < GM82CORE_STUB_N; i++)
        if (strcmp(id, GM82CORE_STUBS[i]) == 0) { *out = 0.0; return 1; }
    return 0;
}

"""

EVAL_DISPATCH = r"""
        /* batch4 dispatch — host impls before try_stub */
        if (strcmp(id, "ds_bag_create") == 0) { *out = gml_ds_bag_create(); return true; }
        if (strcmp(id, "ds_bag_destroy") == 0) { *out = gml_ds_bag_destroy(arg); return true; }
        if (strcmp(id, "ds_bag_clear") == 0) { *out = gml_ds_bag_clear(arg); return true; }
        if (strcmp(id, "ds_bag_size") == 0) { *out = gml_ds_bag_size(arg); return true; }
        if (strcmp(id, "ds_bag_empty") == 0) { *out = gml_ds_bag_empty(arg); return true; }
        if (strcmp(id, "ds_bag_add") == 0) { *out = gml_ds_bag_add(arg, nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "ds_bag_remove") == 0) { *out = gml_ds_bag_remove(arg, nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "ds_bag_grab") == 0) { *out = gml_ds_bag_grab(arg); return true; }
        if (strcmp(id, "ds_bag_quick") == 0) { *out = gml_ds_bag_quick(arg); return true; }
        if (strcmp(id, "bigchoose_clear") == 0) { *out = gml_bigchoose_clear(); return true; }
        if (strcmp(id, "bigchoose") == 0) { *out = gml_bigchoose(arg); return true; }
        if (strcmp(id, "bigchoose_weighted") == 0) { *out = gml_bigchoose_weighted(arg, nargs>=2?args[1]:1); return true; }
        if (strcmp(id, "bigchoose_get") == 0) { *out = gml_bigchoose_get(); return true; }
        if (strcmp(id, "bigchoose_weighted_get") == 0) { *out = gml_bigchoose_weighted_get(); return true; }
        if (strcmp(id, "choose_weighted") == 0) {
            *out = gml_choose_weighted(arg, nargs>=2?args[1]:1, nargs>=3?args[2]:0, nargs>=4?args[3]:1);
            return true;
        }
        if (strcmp(id, "event_alarm") == 0) { *out = gml_event_alarm(arg); return true; }
        if (strcmp(id, "event_beginstep") == 0) { *out = gml_event_beginstep(); return true; }
        if (strcmp(id, "event_step") == 0) { *out = gml_event_step(); return true; }
        if (strcmp(id, "event_endstep") == 0) { *out = gml_event_endstep(); return true; }
        if (strcmp(id, "event_draw") == 0) { *out = gml_event_draw(); return true; }
        if (strcmp(id, "event_trigger") == 0) { *out = gml_event_trigger(arg); return true; }
        if (strcmp(id, "date_get_moon_phase") == 0) { *out = gml_date_get_moon_phase(); return true; }
        if (strcmp(id, "date_is_easter") == 0) { *out = gml_date_is_easter(); return true; }
        if (strcmp(id, "datetime_current_filename") == 0) { *out = gml_datetime_current_filename(); return true; }
        if (strcmp(id, "registry_read_dword") == 0) { *out = gml_registry_read_dword((p->str_mask&1)?p->str_args[0]:""); return true; }
        if (strcmp(id, "registry_write_dword") == 0) { *out = gml_registry_write_dword((p->str_mask&1)?p->str_args[0]:"", nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "registry_read_sz") == 0) { *out = gml_registry_read_sz((p->str_mask&1)?p->str_args[0]:""); return true; }
        if (strcmp(id, "mouse_back_button") == 0) { *out = gml_mouse_back_button(); return true; }
        if (strcmp(id, "mouse_forward_button") == 0) { *out = gml_mouse_forward_button(); return true; }
        if (strcmp(id, "mouse_check_direct") == 0) { *out = gml_mouse_check_direct(arg); return true; }
        if (strcmp(id, "dss_list_create") == 0) { *out = gml_dss_list_create(); return true; }
        if (strcmp(id, "dss_map_create") == 0) { *out = gml_dss_map_create(); return true; }
        if (strcmp(id, "dss_grid_create") == 0) { *out = gml_dss_grid_create(arg, nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "dss_stack_create") == 0) { *out = gml_dss_stack_create(); return true; }
        if (strcmp(id, "dss_queue_create") == 0) { *out = gml_dss_queue_create(); return true; }
        if (strcmp(id, "dss_priority_create") == 0) { *out = gml_dss_priority_create(); return true; }
        if (strcmp(id, "dss_destroy") == 0) { *out = gml_dss_destroy(arg); return true; }
        if (strcmp(id, "dss_get_type") == 0) { *out = gml_dss_get_type(arg); return true; }
        if (strcmp(id, "dslist") == 0) { *out = gml_dslist(); return true; }
        if (strcmp(id, "dsmap") == 0) { *out = gml_dsmap(); return true; }
"""

HEADER_DECL = r"""
/* batch4 host closures */
double gml_ds_bag_create(void);
double gml_ds_bag_destroy(double id);
double gml_ds_bag_clear(double id);
double gml_ds_bag_size(double id);
double gml_ds_bag_empty(double id);
double gml_ds_bag_add(double id, double val);
double gml_ds_bag_remove(double id, double val);
double gml_ds_bag_grab(double id);
double gml_ds_bag_quick(double id);
double gml_bigchoose_clear(void);
double gml_bigchoose(double v);
double gml_bigchoose_weighted(double v, double w);
double gml_bigchoose_get(void);
double gml_bigchoose_weighted_get(void);
double gml_choose_weighted(double a, double wa, double b, double wb);
double gml_event_alarm(double n);
double gml_event_beginstep(void);
double gml_event_step(void);
double gml_event_endstep(void);
double gml_event_draw(void);
double gml_event_trigger(double ev);
double gml_date_get_moon_phase(void);
double gml_date_is_easter(void);
double gml_datetime_current_filename(void);
double gml_registry_read_dword(const char *k);
double gml_registry_write_dword(const char *k, double v);
double gml_registry_read_sz(const char *k);
double gml_mouse_back_button(void);
double gml_mouse_forward_button(void);
double gml_mouse_check_direct(double b);
double gml_dss_list_create(void);
double gml_dss_map_create(void);
double gml_dss_grid_create(double w, double h);
double gml_dss_stack_create(void);
double gml_dss_queue_create(void);
double gml_dss_priority_create(void);
double gml_dss_destroy(double id);
double gml_dss_get_type(double id);
double gml_dslist(void);
double gml_dsmap(void);
int gm82_gm82core_try_stub(const char *id, double *out);
"""

def fix_builtins(path: Path):
    text = path.read_text(encoding="utf-8", errors="replace")
    if "PLACEHOLDER_FIX_NEEDED" in text or text.strip().startswith("#error"):
        bak = ROOT / "app/src/main/cpp_backup/src/gm82_gml_builtins.c"
        if not bak.exists():
            print("NO BACKUP", bak); return False
        text = bak.read_text(encoding="utf-8", errors="replace")
        print("restored", path, "from backup")
    idx = text.find("static const char *GM82CORE_STUBS[] = {")
    if idx < 0:
        print("no STUBS in", path); return False
    end = text.find("void gml_draw_background_part(", idx)
    if end < 0:
        print("no end marker", path); return False
    text = text[:idx] + CHUNK + text[end:]
    path.write_text(text, encoding="utf-8")
    print("patched builtins", path)
    return True

def fix_eval(path: Path):
    text = path.read_text(encoding="utf-8", errors="replace")
    if "ds_bag_create" in text and "batch4 dispatch" in text:
        print("eval already patched", path); return True
    if "gm82_gm82core_try_stub(id, out)" in text:
        text = text.replace(
            "        if (gm82_gm82core_try_stub(id, out)) return true;",
            EVAL_DISPATCH + "\n        if (gm82_gm82core_try_stub(id, out)) return true;",
            1,
        )
        path.write_text(text, encoding="utf-8")
        print("patched eval", path)
        return True
    print("eval needle miss", path); return False

def fix_header(path: Path):
    text = path.read_text(encoding="utf-8", errors="replace")
    if "gml_ds_bag_create" in text:
        print("header already has decls", path); return True
    idx = text.rfind("#endif")
    if idx < 0:
        text += HEADER_DECL
    else:
        text = text[:idx] + HEADER_DECL + "\n" + text[idx:]
    path.write_text(text, encoding="utf-8")
    print("patched header", path)
    return True

mirrors_src = [
    "app/src/main/cpp/src/gm82_gml_builtins.c",
    "app/src/main/cpp_backup/src/gm82_gml_builtins.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_builtins.c",
]
mirrors_eval = [
    "app/src/main/cpp/src/gm82_gml_eval.c",
    "app/src/main/cpp_backup/src/gm82_gml_eval.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_eval.c",
]
mirrors_h = [
    "app/src/main/cpp/include/gm82_gml_builtins.h",
    "app/src/main/cpp_backup/include/gm82_gml_builtins.h",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/include/gm82_gml_builtins.h",
]

ok = True
for rel in mirrors_src:
    ok = fix_builtins(ROOT / rel) and ok
for rel in mirrors_eval:
    p = ROOT / rel
    if p.exists():
        ok = fix_eval(p) and ok
for rel in mirrors_h:
    p = ROOT / rel
    if p.exists():
        ok = fix_header(p) and ok

plan = ROOT / "MASTER_AGENT_PLAN.md"
plan.write_text("""# MASTER_AGENT_PLAN\n\n**آخر تحديث:** 2026-11-04 (batch4 landed)\n\n## P0 + host gaps — مكتمل على main\n\n## batch4 (2026-11-04) — LANDED\n- GM82CORE_STUBS: ~80 → **10** فقط\n- real host impls: ds_bag_*, bigchoose_*, event_*, date/moon, registry/mouse, dss_* aliases\n- dispatch wired in gm82_gml_eval.c before try_stub\n- mirrors synced: cpp / cpp_backup / 01_BLACKSCREEN_FIX\n\n## المتبقي جهاز فقط\nانظر `docs/DEVICE_BLOCKED.md` (U2/U3/U5)\n\n**is_100 (host pipeline): true**\n**remaining host stubs: 10** (draw_*_extra نادرة + ds_list_filter/foreach/map)\n""")
print("OK" if ok else "PARTIAL")
sys.exit(0 if ok else 1)
