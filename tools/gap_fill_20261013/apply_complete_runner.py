#!/usr/bin/env python3
"""Idempotent completion pass for Nr.mk.02 runner (no file replacement)."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
bu = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
rt = ROOT / "app/src/main/cpp/src/gm82_runtime.c"
ev = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"

t = bu.read_text()
old1 = """    const gm82_decoded_frame *fr = &g_rt->sprites->frames[si];
    if (!fr->rgba) return;
    int dx0 = (int)x, dy0 = (int)y;"""
new1 = """    const gm82_decoded_frame *fr = &g_rt->sprites->frames[si];
    if (!fr->rgba) return;
    int dx0 = (int)x - fr->origin_x, dy0 = (int)y - fr->origin_y;"""
if old1 in t:
    t = t.replace(old1, new1, 1)
    print("draw_sprite origin")
old2 = """    if (rot == 0.0) {
        int dx0 = (int)x, dy0 = (int)y;
        double abs_xs = fabs(xscale), abs_ys = fabs(yscale);"""
new2 = """    if (rot == 0.0) {
        double abs_xs = fabs(xscale), abs_ys = fabs(yscale);
        int dx0 = (int)(x - fr->origin_x * abs_xs);
        int dy0 = (int)(y - fr->origin_y * abs_ys);"""
if old2 in t:
    t = t.replace(old2, new2, 1)
    print("draw_sprite_ext origin")
if "double gml_path_get_number(double ind)" in t:
    t = t.replace(
        """double gml_path_get_number(double ind) {
    int idx = (int)ind;
    if (!g_paths || idx < 0 || idx >= g_paths->count) return 0;
    return (double)g_paths->items[idx].count;
}""",
        """double gml_path_get_number(void) {
    if (!g_paths) return 0;
    return (double)g_paths->count;
}""",
        1,
    )
    print("path_get_number")
if "double gml_string_digits(const char *str, char *out, size_t out_sz)" in t:
    t = t.replace(
        """double gml_string_digits(const char *str, char *out, size_t out_sz) {
    if (!out || out_sz == 0) return 0;
    out[0] = 0;
    if (!str) return 0;
    size_t k = 0;
    for (size_t i = 0; str[i] && k + 1 < out_sz; i++) {
        if (isdigit((unsigned char)str[i])) out[k++] = str[i];
    }
    out[k] = 0;
    return (double)k;
}""",
        """void gml_string_digits(const char *str, char *out, size_t out_sz) {
    if (!out || out_sz == 0) return;
    out[0] = 0;
    if (!str) return;
    size_t k = 0;
    for (size_t i = 0; str[i] && k + 1 < out_sz; i++) {
        if (isdigit((unsigned char)str[i])) out[k++] = str[i];
    }
    out[k] = 0;
}""",
        1,
    )
    print("string_digits")
bu.write_text(t)

rtt = rt.read_text()
old_img = """    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        if (inst->image_speed != 0.0)
            inst->image_index += (int32_t)(inst->image_speed > 0 ? 1 : -1);
    }
}"""
new_img = """    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        if (inst->image_speed != 0.0) {
            inst->image_index += (int32_t)(inst->image_speed > 0 ? 1 : -1);
            if (rt->sprite_groups && inst->sprite_index >= 0) {
                int gi = gm82_sprite_group_index_for_frame(rt->sprite_groups, inst->sprite_index);
                if (gi >= 0) {
                    int fc = rt->sprite_groups->items[gi].frame_count;
                    if (fc > 0) {
                        if (inst->image_index < 0) inst->image_index = fc - 1;
                        else if (inst->image_index >= fc) inst->image_index = 0;
                    }
                }
            }
        }
    }
}"""
if old_img in rtt:
    rt.write_text(rtt.replace(old_img, new_img, 1))
    print("image_index wrap")

et = ev.read_text()
if "gml_path_get_number(arg)" in et:
    ev.write_text(et.replace("*out = gml_path_get_number(arg); return true;",
                             "*out = gml_path_get_number(); return true;"))
    print("eval path_get_number")
print("APPLY_COMPLETE_RUNNER_OK")
