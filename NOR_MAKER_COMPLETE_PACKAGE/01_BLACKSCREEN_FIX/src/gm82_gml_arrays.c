#include "gm82_gml_arrays.h"
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define GM82_GML_ARRAY_MAX 64
#define GM82_GML_ARRAY_MAX_ELEMENTS 65536u
#define GM82_GML_ARRAY_2D_ID_BASE 1000

typedef struct {
    size_t row;
    size_t column;
    double value;
} gm82_gml_array_cell;

typedef struct {
    gm82_runtime *runtime;
    int id;
    int dimensions;
    size_t length;
    size_t height;
    size_t width;
    double *items;
    gm82_gml_array_cell *cells;
    size_t cell_count;
    size_t cell_capacity;
} gm82_gml_array_entry;

static gm82_gml_array_entry *g_arrays;
static size_t g_array_count;
static size_t g_array_capacity;
static int g_next_array_id = 1;

static bool number_to_index(double value, size_t *out) {
    if (!out || !isfinite(value) || value < 0.0 || value > (double)GM82_GML_ARRAY_MAX_ELEMENTS)
        return false;
    *out = (size_t)value;
    return true;
}

static gm82_gml_array_entry *find_array(gm82_runtime *rt, double id, int dimensions) {
    if (!rt || !isfinite(id) || id < 1.0 || id > (double)INT32_MAX || floor(id) != id)
        return NULL;
    int int_id = (int)id;
    for (size_t i = 0; i < g_array_count; i++) {
        gm82_gml_array_entry *entry = &g_arrays[i];
        if (entry->runtime == rt && entry->id == int_id &&
            (!dimensions || entry->dimensions == dimensions))
            return entry;
    }
    return NULL;
}

static gm82_gml_array_entry *new_array(gm82_runtime *rt, int dimensions) {
    if (!rt || (dimensions != 1 && dimensions != 2) || g_next_array_id <= 0 ||
        g_next_array_id == INT32_MAX)
        return NULL;
    size_t active_for_runtime = 0;
    size_t slot = g_array_count;
    for (size_t i = 0; i < g_array_count; i++) {
        if (g_arrays[i].runtime == rt) active_for_runtime++;
        else if (!g_arrays[i].runtime && slot == g_array_count) slot = i;
    }
    if (active_for_runtime >= GM82_GML_ARRAY_MAX) return NULL;
    if (slot == g_array_count) {
        if (g_array_count == g_array_capacity) {
            size_t new_capacity = g_array_capacity ? g_array_capacity * 2 : 16;
            if (new_capacity < g_array_capacity || new_capacity > SIZE_MAX / sizeof(*g_arrays))
                return NULL;
            gm82_gml_array_entry *entries = (gm82_gml_array_entry *)realloc(
                g_arrays, new_capacity * sizeof(*g_arrays));
            if (!entries) return NULL;
            memset(entries + g_array_capacity, 0,
                   (new_capacity - g_array_capacity) * sizeof(*entries));
            g_arrays = entries;
            g_array_capacity = new_capacity;
        }
        slot = g_array_count++;
    }

    if (dimensions == 2 && g_next_array_id < GM82_GML_ARRAY_2D_ID_BASE)
        g_next_array_id = GM82_GML_ARRAY_2D_ID_BASE;
    gm82_gml_array_entry *entry = &g_arrays[slot];
    memset(entry, 0, sizeof(*entry));
    entry->runtime = rt;
    entry->id = g_next_array_id++;
    entry->dimensions = dimensions;
    return entry;
}

double gm82_gml_array_create_1d(gm82_runtime *rt, double length) {
    size_t size = 0;
    if (!number_to_index(length, &size)) return -1.0;
    gm82_gml_array_entry *entry = new_array(rt, 1);
    if (!entry) return -1.0;
    if (size) {
        entry->items = (double *)calloc(size, sizeof(double));
        if (!entry->items) { memset(entry, 0, sizeof(*entry)); return -1.0; }
    }
    entry->length = size;
    return (double)entry->id;
}

double gm82_gml_array_create_2d(gm82_runtime *rt, double height, double width) {
    size_t rows = 0, columns = 0;
    if (!number_to_index(height, &rows) || !number_to_index(width, &columns)) return -1.0;
    gm82_gml_array_entry *entry = new_array(rt, 2);
    if (!entry) return -1.0;
    entry->height = rows;
    entry->width = columns;
    return (double)entry->id;
}

bool gm82_gml_array_is_1d(gm82_runtime *rt, double id) {
    return find_array(rt, id, 1) != NULL;
}

bool gm82_gml_array_is_2d(gm82_runtime *rt, double id) {
    return find_array(rt, id, 2) != NULL;
}

double gm82_gml_array_get_1d(gm82_runtime *rt, double id, double index) {
    size_t i = 0;
    gm82_gml_array_entry *entry = find_array(rt, id, 1);
    if (!entry || !number_to_index(index, &i) || i >= entry->length) return 0.0;
    return entry->items[i];
}

bool gm82_gml_array_set_1d(gm82_runtime *rt, double id, double index, double value) {
    size_t i = 0;
    gm82_gml_array_entry *entry = find_array(rt, id, 1);
    if (!entry || !number_to_index(index, &i) || i >= GM82_GML_ARRAY_MAX_ELEMENTS) return false;
    size_t needed = i + 1;
    if (needed > entry->length) {
        double *items = (double *)realloc(entry->items, needed * sizeof(double));
        if (!items) return false;
        memset(items + entry->length, 0, (needed - entry->length) * sizeof(double));
        entry->items = items;
        entry->length = needed;
    }
    entry->items[i] = value;
    return true;
}

double gm82_gml_array_get_2d(gm82_runtime *rt, double id, double row, double column) {
    size_t r = 0, c = 0;
    gm82_gml_array_entry *entry = find_array(rt, id, 2);
    if (!entry || !number_to_index(row, &r) || !number_to_index(column, &c) ||
        r >= entry->height || c >= entry->width)
        return 0.0;
    for (size_t i = 0; i < entry->cell_count; i++)
        if (entry->cells[i].row == r && entry->cells[i].column == c)
            return entry->cells[i].value;
    return 0.0;
}

bool gm82_gml_array_set_2d(gm82_runtime *rt, double id, double row, double column, double value) {
    size_t r = 0, c = 0;
    gm82_gml_array_entry *entry = find_array(rt, id, 2);
    if (!entry || !number_to_index(row, &r) || !number_to_index(column, &c) ||
        r >= GM82_GML_ARRAY_MAX_ELEMENTS || c >= GM82_GML_ARRAY_MAX_ELEMENTS)
        return false;
    if (entry->height < r + 1) entry->height = r + 1;
    if (entry->width < c + 1) entry->width = c + 1;
    for (size_t i = 0; i < entry->cell_count; i++) {
        if (entry->cells[i].row == r && entry->cells[i].column == c) {
            entry->cells[i].value = value;
            return true;
        }
    }
    if (entry->cell_count >= GM82_GML_ARRAY_MAX_ELEMENTS) return false;
    if (entry->cell_count == entry->cell_capacity) {
        size_t capacity = entry->cell_capacity ? entry->cell_capacity * 2 : 8;
        if (capacity > GM82_GML_ARRAY_MAX_ELEMENTS) capacity = GM82_GML_ARRAY_MAX_ELEMENTS;
        gm82_gml_array_cell *cells = (gm82_gml_array_cell *)realloc(
            entry->cells, capacity * sizeof(gm82_gml_array_cell));
        if (!cells) return false;
        entry->cells = cells;
        entry->cell_capacity = capacity;
    }
    entry->cells[entry->cell_count++] = (gm82_gml_array_cell){r, c, value};
    return true;
}

double gm82_gml_array_length_1d(gm82_runtime *rt, double id) {
    gm82_gml_array_entry *entry = find_array(rt, id, 1);
    return entry ? (double)entry->length : 0.0;
}

double gm82_gml_array_length_2d(gm82_runtime *rt, double id, double row) {
    size_t r = 0;
    gm82_gml_array_entry *entry = find_array(rt, id, 2);
    if (!entry || !number_to_index(row, &r) || r >= entry->height) return 0.0;
    return (double)entry->width;
}

double gm82_gml_array_height_2d(gm82_runtime *rt, double id) {
    gm82_gml_array_entry *entry = find_array(rt, id, 2);
    return entry ? (double)entry->height : 0.0;
}

void gm82_gml_arrays_cleanup(gm82_runtime *rt) {
    if (!rt) return;
    for (size_t i = 0; i < g_array_count; i++) {
        gm82_gml_array_entry *entry = &g_arrays[i];
        if (entry->runtime != rt) continue;
        free(entry->items);
        free(entry->cells);
        memset(entry, 0, sizeof(*entry));
    }
    while (g_array_count && !g_arrays[g_array_count - 1].runtime) g_array_count--;
    if (!g_array_count) {
        free(g_arrays);
        g_arrays = NULL;
        g_array_capacity = 0;
    }
}
