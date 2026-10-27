#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
b = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
h = ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h"
e = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
EXTRA = r"""
/* --- source/unpacked/gm82core clean-room merge --- */
double gml_instance_create_moving(double x, double y, double object_index,
                                  double speed, double direction,
                                  double gravity, double gravdir) {
    if (!g_rt) return -1.0;
    gm82_instance *inst = gm82_runtime_instance_create(g_rt, (int32_t)object_index, x, y);
    if (!inst) return -1.0;
    double rad = direction * 3.14159265358979323846 / 180.0;
    inst->speed = speed;
    inst->direction = direction;
    inst->hspeed = cos(rad) * speed;
    inst->vspeed = -sin(rad) * speed;
    inst->gravity = gravity;
    inst->gravity_direction = gravdir;
    return (double)inst->id;
}
double gml_instance_farthest(double x, double y, double object_index) {
    if (!g_rt) return -4.0;
    int32_t oi = (int32_t)object_index;
    double best_d = -1.0, best_id = -4.0;
    for (int i = 0; i < g_rt->instance_count; i++) {
        gm82_instance *o = &g_rt->instances[i];
        if (!o->alive) continue;
        if (oi >= 0 && o->object_index != oi) continue;
        double dx = o->x - x, dy = o->y - y;
        double d = dx * dx + dy * dy;
        if (d > best_d) { best_d = d; best_id = (double)o->id; }
    }
    return best_id;
}
double gml_distance_to_center(double object_index) {
    if (!g_self || !g_rt) return 0.0;
    double fid = gml_instance_nearest(g_self->x, g_self->y, object_index);
    if (fid < 0) return 100000000.0;
    int32_t want = (int32_t)fid;
    for (int i = 0; i < g_rt->instance_count; i++) {
        gm82_instance *o = &g_rt->instances[i];
        if (!o->alive || o->id != want) continue;
        double dx = o->x - g_self->x, dy = o->y - g_self->y;
        return sqrt(dx * dx + dy * dy);
    }
    return 100000000.0;
}
static char g_file_all_buf[65536];
double gml_file_text_read_all(const char *path) {
    g_file_all_buf[0] = 0;
    if (!path || !path[0]) return 0.0;
    FILE *f = fopen(path, "rb");
    if (!f) return 0.0;
    size_t n = fread(g_file_all_buf, 1, sizeof(g_file_all_buf) - 1, f);
    g_file_all_buf[n] = 0;
    fclose(f);
    return (double)n;
}
const char *gml_file_text_last_all(void) { return g_file_all_buf; }
double gml_file_text_write_all(const char *path, const char *data) {
    if (!path || !path[0]) return 0.0;
    FILE *f = fopen(path, "wb");
    if (!f) return 0.0;
    if (data) fputs(data, f);
    fclose(f);
    return 1.0;
}
"""
EVAL = r"""
        if (strcmp(id, "instance_create_moving") == 0) {
            double xarg = nargs >= 1 ? args[0] : 0;
            double yarg = nargs >= 2 ? args[1] : 0;
            double oarg = nargs >= 3 ? args[2] : 0;
            double sp = nargs >= 4 ? args[3] : 0;
            double dir = nargs >= 5 ? args[4] : 0;
            double gr = nargs >= 6 ? args[5] : 0;
            double gd = nargs >= 7 ? args[6] : 270;
            *out = gml_instance_create_moving(xarg, yarg, oarg, sp, dir, gr, gd); return true;
        }
        if (strcmp(id, "instance_farthest") == 0) {
            double xarg = nargs >= 1 ? args[0] : 0;
            double yarg = nargs >= 2 ? args[1] : 0;
            double oarg = nargs >= 3 ? args[2] : -1;
            *out = gml_instance_farthest(xarg, yarg, oarg); return true;
        }
        if (strcmp(id, "distance_to_center") == 0) {
            *out = gml_distance_to_center(arg); return true;
        }
        if (strcmp(id, "file_text_read_all") == 0) {
            const char *path = (p->str_mask & 1) ? p->str_args[0] : "";
            *out = gml_file_text_read_all(path);
            return true;
        }
        if (strcmp(id, "file_text_write_all") == 0) {
            const char *path = (p->str_mask & 1) ? p->str_args[0] : "";
            const char *data = (p->str_mask & 2) ? p->str_args[1] : "";
            *out = gml_file_text_write_all(path, data); return true;
        }
"""
if b.exists():
    t = b.read_text()
    if "gml_instance_create_moving" not in t:
        b.write_text(t + "\n" + EXTRA)
        print("builtins merge added")
    else:
        print("builtins already merged")
if h.exists():
    t = h.read_text()
    if "gml_instance_create_moving" not in t:
        t = t.replace(
            "double gml_instance_create(double x, double y, double object_index);",
            "double gml_instance_create(double x, double y, double object_index);\n"
            "double gml_instance_create_moving(double x, double y, double object_index,\n"
            "                                  double speed, double direction,\n"
            "                                  double gravity, double gravdir);\n"
            "double gml_instance_farthest(double x, double y, double object_index);\n"
            "double gml_distance_to_center(double object_index);\n"
            "double gml_file_text_read_all(const char *path);\n"
            "const char *gml_file_text_last_all(void);\n"
            "double gml_file_text_write_all(const char *path, const char *data);",
        )
        h.write_text(t)
        print("header merged")
    else:
        print("header ok")
if e.exists():
    t = e.read_text()
    if "instance_create_moving" not in t:
        needle = 'if (strcmp(id, "instance_create") == 0) {'
        if needle in t:
            e.write_text(t.replace(needle, EVAL + "\n        " + needle, 1))
            print("eval merged")
        else:
            print("eval needle missing")
    else:
        print("eval ok")
print("APPLY_SOURCE_MERGE_CORE_DONE")
