# Extract from PR #405 — apply on main builtins (tri-mirror)

## 1) After gml_ds_priority_add(...): insert

```c
double gml_ds_priority_add_many(double id, const double *args, int count) {
    int i = (int)id;
    if (i < 0 || i >= GM82_DS_PRIO_MAX || !g_ds_prios[i].used || !args) return id;
    for (int k = 0; k + 1 < count; k += 2) {
        if (g_ds_prios[i].size >= GM82_DS_PRIO_CAP) break;
        g_ds_prios[i].vals[g_ds_prios[i].size] = args[k];
        g_ds_prios[i].prios[g_ds_prios[i].size] = args[k + 1];
        g_ds_prios[i].size++;
    }
    return id;
}
```

## 2) After gml_ds_grid_set(...): insert

```c
double gml_ds_grid_set_many(double id, const double *args, int count) {
    int i = (int)id;
    if (i < 0 || i >= MAX_DS_GRIDS || !g_ds_grid_active[i] || !args) return id;
    for (int k = 0; k + 2 < count; k += 3) {
        int ix = (int)args[k];
        int iy = (int)args[k + 1];
        double val = args[k + 2];
        if (ix >= 0 && ix < g_ds_grids[i].width && iy >= 0 && iy < g_ds_grids[i].height) {
            g_ds_grids[i].data[iy * g_ds_grids[i].width + ix] = val;
        }
    }
    return id;
}
```

## 3) Remove from GM82CORE_STUBS[]:
- "ds_grid_set_many",
- "ds_priority_add_many",

## 4) Header decls:
```c
double gml_ds_grid_set_many(double id, const double *args, int count);
double gml_ds_priority_add_many(double id, const double *args, int count);
```

## 5) batch4: remove zero-arg stubs + H0 for these two names.
