#!/usr/bin/env python3
"""Port unique bits from conflicted PR #161/#162 after manual resolution."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]

def ensure_decl(h: Path, decl: str):
    t = h.read_text()
    if "gml_point_in_circle" in t:
        return False
    if "double gml_point_in_rectangle" in t:
        t = t.replace(
            "double gml_point_in_rectangle(double px, double py, double x1, double y1, double x2, double y2);",
            "double gml_point_in_rectangle(double px, double py, double x1, double y1, double x2, double y2);\n"
            "double gml_point_in_circle(double px, double py, double cx, double cy, double rad);\n"
            "double gml_point_in_triangle(double px, double py, double x1, double y1, double x2, double y2, double x3, double y3);\n"
            "double gml_point_direction_3d(double x1, double y1, double z1, double x2, double y2, double z2);\n"
            "double gml_hex_to_color(const char *hex_str);\n"
            "double gml_instance_create_depth(double x, double y, double depth, double object_index);\n"
            "double gml_surface_copy(double destination, double x, double y, double source);\n"
            "double gml_surface_copy_part(double destination, double x, double y, double source, double xs, double ys, double ws, double hs);",
            1,
        )
        h.write_text(t)
        return True
    return False

for rel in [
    "app/src/main/cpp/include/gm82_gml_builtins.h",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/include/gm82_gml_builtins.h",
]:
    p = ROOT / rel
    if p.exists() and ensure_decl(p, "gml_point_in_circle"):
        print("decls", rel)

bp = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
bt = bp.read_text()
added = False
if "gml_instance_create_depth" not in bt:
    block = r'''
double gml_instance_create_depth(double x, double y, double depth, double object_index) {
    if (!g_rt) return -1;
    gm82_instance *inst = gm82_runtime_instance_create(g_rt, (int32_t)object_index, x, y);
    if (inst) {
        inst->depth = (int32_t)depth;
        return (double)inst->id;
    }
    return -1;
}

'''
    if "gml_instance_create(" in bt:
        i = bt.find("double gml_instance_create(")
        j = bt.find("\n}\n", i) + 3
        bt = bt[:j] + block + bt[j:]
    else:
        bt += block
    added = True
    print("create_depth")

if "gml_surface_copy(" not in bt:
    block = r'''
double gml_surface_copy(double destination, double x, double y, double source) {
    int dest_id = (int)destination;
    int src_id = (int)source;
    if (dest_id < 0 || dest_id >= GM82_SURFACE_MAX || !g_surfaces[dest_id].used) return 0;
    if (src_id < 0 || src_id >= GM82_SURFACE_MAX || !g_surfaces[src_id].used) return 0;
    gm82_surface *dst = &g_surfaces[dest_id];
    gm82_surface *src = &g_surfaces[src_id];
    int dx0 = (int)x, dy0 = (int)y;
    for (int sy = 0; sy < src->h; sy++) {
        int dy = dy0 + sy;
        if (dy < 0 || dy >= dst->h) continue;
        for (int sx = 0; sx < src->w; sx++) {
            int dx = dx0 + sx;
            if (dx < 0 || dx >= dst->w) continue;
            uint8_t *sp = &src->rgba[(sy * src->w + sx) * 4];
            uint8_t *dp = &dst->rgba[(dy * dst->w + dx) * 4];
            memcpy(dp, sp, 4);
        }
    }
    return 1.0;
}

double gml_surface_copy_part(double destination, double x, double y, double source, double xs, double ys, double ws, double hs) {
    int dest_id = (int)destination;
    int src_id = (int)source;
    if (dest_id < 0 || dest_id >= GM82_SURFACE_MAX || !g_surfaces[dest_id].used) return 0;
    if (src_id < 0 || src_id >= GM82_SURFACE_MAX || !g_surfaces[src_id].used) return 0;
    gm82_surface *dst = &g_surfaces[dest_id];
    gm82_surface *src = &g_surfaces[src_id];
    int dx0 = (int)x, dy0 = (int)y, sx0 = (int)xs, sy0 = (int)ys, w = (int)ws, h = (int)hs;
    for (int sy = 0; sy < h; sy++) {
        int src_y = sy0 + sy; if (src_y < 0 || src_y >= src->h) continue;
        int dst_y = dy0 + sy; if (dst_y < 0 || dst_y >= dst->h) continue;
        for (int sx = 0; sx < w; sx++) {
            int src_x = sx0 + sx; if (src_x < 0 || src_x >= src->w) continue;
            int dst_x = dx0 + sx; if (dst_x < 0 || dst_x >= dst->w) continue;
            uint8_t *sp = &src->rgba[(src_y * src->w + src_x) * 4];
            uint8_t *dp = &dst->rgba[(dst_y * dst->w + dst_x) * 4];
            memcpy(dp, sp, 4);
        }
    }
    return 1.0;
}

'''
    bt += block
    added = True
    print("surface_copy")

if added:
    bp.write_text(bt)

for rel in [
    "app/src/main/cpp/src/gm82_native_bridge.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_native_bridge.c",
]:
    p = ROOT / rel
    if not p.exists():
        continue
    t = p.read_text()
    if "instance_create_depth" in t:
        continue
    needle = 'if (strcmp(name, "instance_number") == 0'
    if needle not in t:
        continue
    ins = '''    if (strcmp(name, "instance_create_depth") == 0 && count >= 4) {
        *out = gml_value_real(gml_instance_create_depth(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3)));
        return 1;
    }
    if (strcmp(name, "point_in_circle") == 0 && count >= 5) {
        *out = gml_value_real(gml_point_in_circle(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3), ARG_R(4)));
        return 1;
    }
    if (strcmp(name, "point_in_triangle") == 0 && count >= 8) {
        *out = gml_value_real(gml_point_in_triangle(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3), ARG_R(4), ARG_R(5), ARG_R(6), ARG_R(7)));
        return 1;
    }
    if (strcmp(name, "point_direction_3d") == 0 && count >= 6) {
        *out = gml_value_real(gml_point_direction_3d(ARG_R(0), ARG_R(1), ARG_R(2), ARG_R(3), ARG_R(4), ARG_R(5)));
        return 1;
    }
    if (strcmp(name, "hex_to_color") == 0 && count >= 1) {
        const char *hs = ARG_S(0);
        *out = gml_value_real(gml_hex_to_color(hs ? hs : ""));
        return 1;
    }
'''
    t = t.replace(needle, ins + "    " + needle, 1)
    p.write_text(t)
    print("bridge", rel)

print("APPLY_PR161_162_OK")
