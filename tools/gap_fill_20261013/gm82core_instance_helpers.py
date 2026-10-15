from pathlib import Path
p = Path("app/src/main/cpp/src/gm82_gml_eval.c")
t = p.read_text()
if "instance_create_depth" in t:
    print("GM82CORE_HELPERS_ALREADY"); raise SystemExit(0)
marker = 'if (strcmp(id, "instance_create") == 0)'
block = r'''
        /* GM82Project/gm82core instances.gml (open source) — clean reimpl */
        if (strcmp(id, "instance_create_depth") == 0) {
            double ox = nargs >= 1 ? args[0] : 0, oy = nargs >= 2 ? args[1] : 0;
            double dep = nargs >= 3 ? args[2] : 0, oi = nargs >= 4 ? args[3] : 0;
            double idv = gml_instance_create(ox, oy, oi);
            if (idv >= 0 && p->rt) {
                for (int i = 0; i < p->rt->instance_count; i++) {
                    if (p->rt->instances[i].alive && (double)p->rt->instances[i].id == idv) {
                        p->rt->instances[i].depth = (int32_t)dep; break;
                    }
                }
            }
            *out = idv; return true;
        }
        if (strcmp(id, "direction_to_object") == 0) {
            *out = 0;
            if (p->rt && p->self) {
                int32_t oi = (int32_t)arg; double best = 1e300; int found = 0;
                double bx = 0, by = 0;
                for (int i = 0; i < p->rt->instance_count; i++) {
                    gm82_instance *o = &p->rt->instances[i];
                    if (!o->alive || o->object_index != oi) continue;
                    double dx = o->x - p->self->x, dy = o->y - p->self->y;
                    double d = dx*dx + dy*dy;
                    if (!found || d < best) { best = d; bx = o->x; by = o->y; found = 1; }
                }
                if (found) *out = gml_point_direction(p->self->x, p->self->y, bx, by);
            }
            return true;
        }
        if (strcmp(id, "distance_to_center") == 0) {
            *out = -1;
            if (p->rt && p->self) {
                int32_t oi = (int32_t)arg; double best = 1e300; int found = 0;
                for (int i = 0; i < p->rt->instance_count; i++) {
                    gm82_instance *o = &p->rt->instances[i];
                    if (!o->alive) continue;
                    if (oi < 100000 && o->object_index != oi) continue;
                    if (oi >= 100000 && o->id != oi) continue;
                    double dx = o->x - p->self->x, dy = o->y - p->self->y;
                    double d = sqrt(dx*dx + dy*dy);
                    if (!found || d < best) { best = d; found = 1; }
                }
                if (found) *out = best;
            }
            return true;
        }
        if (strcmp(id, "move_towards_fixed") == 0) {
            double tx = nargs >= 1 ? args[0] : 0, ty = nargs >= 2 ? args[1] : 0;
            double sp = nargs >= 3 ? args[2] : 0;
            if (p->self) {
                double dist = gml_point_distance(p->self->x, p->self->y, tx, ty);
                double use = sp < dist ? sp : dist;
                gml_move_towards_point(tx, ty, use);
            }
            *out = 0; return true;
        }
'''
if marker not in t:
    print("GM82CORE_HELPERS_MISS")
else:
    p.write_text(t.replace(marker, block + "\n        " + marker, 1))
    print("GM82CORE_HELPERS_OK")
