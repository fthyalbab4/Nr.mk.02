/* Regression contract for the structured GMK8 object/action walk used by the
 * Windows Portable host. This is a clean-room format contract: it verifies
 * the project data we own, not proprietary GameMaker runtime code. */
#include "gm82_actions.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned char *read_file(const char *path, size_t *size_out) {
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    if (fseek(f, 0, SEEK_END) != 0) { fclose(f); return NULL; }
    long end = ftell(f);
    if (end <= 0 || fseek(f, 0, SEEK_SET) != 0) { fclose(f); return NULL; }
    unsigned char *data = (unsigned char *)malloc((size_t)end);
    if (!data || fread(data, 1, (size_t)end, f) != (size_t)end) {
        free(data);
        fclose(f);
        return NULL;
    }
    fclose(f);
    *size_out = (size_t)end;
    return data;
}

static const gm82_object_actions *find_object(const gm82_action_table *table,
                                               const char *name) {
    for (int i = 0; i < table->count; ++i)
        if (strcmp(table->objects[i].object_name, name) == 0)
            return &table->objects[i];
    return NULL;
}

int main(int argc, char **argv) {
    const char *path = argc > 1 ? argv[1] : "../02_SAMPLES/mario_bros.gmk";
    size_t size = 0;
    unsigned char *data = read_file(path, &size);
    if (!data) {
        /* Fallback for when running from repo root or other working directories */
        path = "NOR_MAKER_COMPLETE_PACKAGE/02_SAMPLES/mario_bros.gmk";
        data = read_file(path, &size);
    }
    if (!data) {
        path = "app/src/main/assets/www/samples/mario_bros.gmk";
        data = read_file(path, &size);
    }
    assert(data != NULL);

    gm82_action_table table = {0};
    int objects = gm82_actions_parse_gmk8(data, size, &table);
    assert(objects == 16);
    assert(table.count == 16);

    int actions = 0;
    int code_blocks = 0;
    for (int i = 0; i < table.count; ++i) {
        actions += table.objects[i].count;
        for (int j = 0; j < table.objects[i].count; ++j)
            if (table.objects[i].items[j].code) ++code_blocks;
    }
    assert(actions == 51);
    assert(code_blocks == 31);

    const gm82_object_actions *enemy = find_object(&table, "obj_enemigo_1");
    const gm82_object_actions *coin = find_object(&table, "obj_moneda");
    const gm82_object_actions *block = find_object(&table, "obj_bloque_visible");
    assert(enemy && enemy->count == 7);
    assert(coin && coin->count == 3);
    assert(block && block->count == 1);

    gm82_action_table_free(&table);
    free(data);
    puts("GMK8_ACTION_PARSE_PASS objects=16 actions=51 code_blocks=31");
    return 0;
}
