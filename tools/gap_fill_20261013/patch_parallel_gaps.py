#!/usr/bin/env python3
"""Parallel gap fill: effect→particles, pipeline without pre-forced hspeed."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
p = ROOT / "app/src/main/cpp/src/gm82_actions.c"
t = p.read_text()
for old, new in [
('''    if (strcmp(name, "action_effect") == 0) {
        /* unimplemented: action_effect */
        return true;
    }''',
'''    if (strcmp(name, "action_effect") == 0) {
        gml_part_particles_create(0, self->x, self->y, 0, 8);
        return true;
    }'''),
('''    if (strcmp(ar->name, "action_effect") == 0) {
        /* unimplemented: action_effect */
        return true;
    }''',
'''    if (strcmp(ar->name, "action_effect") == 0) {
        gml_part_particles_create(0, self->x, self->y, 0, 8);
        return true;
    }'''),
]:
    if old in t:
        t = t.replace(old, new, 1)
        print("effect")
p.write_text(t)
sh = ROOT / "tools/run_host_pipeline.sh"
st = sh.read_text()
old = '''        x0 = rt.instances[pi].x; y0 = rt.instances[pi].y;
        rt.instances[pi].hspeed = 2.0;
        printf("PLAYER_IDX %d obj=%d start=(%.1f,%.1f)\\n", pi, rt.instances[pi].object_index, x0, y0);'''
new = '''        x0 = rt.instances[pi].x; y0 = rt.instances[pi].y;
        printf("PLAYER_IDX %d obj=%d start=(%.1f,%.1f)\\n", pi, rt.instances[pi].object_index, x0, y0);'''
if old in st:
    sh.write_text(st.replace(old, new, 1))
    print("pipeline")
else:
    print("pipeline skip")
print("PATCH_PARALLEL_GAPS_OK")
