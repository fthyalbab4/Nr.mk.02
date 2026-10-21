#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
p = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
t = p.read_text()
old = '''double gml_path_start(double path_index, double speed, double end_action, double absolute) {
    (void)end_action; (void)absolute;
    if (!g_self || !g_paths) return 0;
    int pi = (int)path_index;
    if (pi < 0 || pi >= g_paths->count) return 0;
    g_self->path_index = pi;
    g_self->path_position = 0;
    g_self->path_speed = speed;
    if (g_paths->items[pi].count > 0) {
        g_self->x = g_paths->items[pi].points[0].x;
        g_self->y = g_paths->items[pi].points[0].y;
    }
    return 1;
}'''
new = '''double gml_path_start(double path_index, double speed, double end_action, double absolute) {
    (void)absolute;
    if (!g_self || !g_paths) return 0;
    int pi = (int)path_index;
    if (pi < 0 || pi >= g_paths->count) return 0;
    g_self->path_index = pi;
    g_self->path_position = 0;
    g_self->path_positionprevious = 0;
    g_self->path_speed = speed;
    g_self->path_endaction = (int32_t)end_action;
    if (g_self->path_scale == 0) g_self->path_scale = 1;
    if (g_paths->items[pi].count > 0) {
        g_self->x = g_paths->items[pi].points[0].x;
        g_self->y = g_paths->items[pi].points[0].y;
    }
    return 1;
}'''
if old in t:
    t = t.replace(old, new, 1)
    print("path_start")
else:
    print("path_start skip")
old2 = '''void gm82_path_step_instance(gm82_instance *inst) {
    if (!inst || !g_paths || inst->path_index < 0) return;
    if (inst->path_index >= g_paths->count) return;
    const gm82_path *path = &g_paths->items[inst->path_index];
    gm82_path_advance(path, &inst->x, &inst->y, &inst->path_position, inst->path_speed);
}'''
new2 = '''void gm82_path_step_instance(gm82_instance *inst) {
    if (!inst || !g_paths || inst->path_index < 0) return;
    if (inst->path_index >= g_paths->count) return;
    const gm82_path *path = &g_paths->items[inst->path_index];
    inst->path_positionprevious = inst->path_position;
    double pos = inst->path_position;
    gm82_path_advance(path, &inst->x, &inst->y, &pos, inst->path_speed);
    inst->path_position = pos;
    if (inst->path_position >= 1.0 - 1e-9) {
        if (inst->path_endaction == 1) {
            inst->path_position = 0;
        } else if (inst->path_endaction == 3) {
            inst->path_speed = -inst->path_speed;
            inst->path_position = 1.0;
        } else {
            inst->path_speed = 0;
            inst->path_index = -1;
        }
    }
}'''
if old2 in t:
    t = t.replace(old2, new2, 1)
    print("path_step")
else:
    print("path_step skip")
p.write_text(t)
print("PATCH_PATH_ENDACTION_OK")
