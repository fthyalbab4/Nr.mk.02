#include "gm82_gmk_reader.h"
#include "gm82_materialize.h"
#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

static const char *find_sample_path(void) {
    static const char *candidates[] = {
        "app/src/main/assets/www/samples/mario_bros.gmk",
        "../../app/src/main/assets/www/samples/mario_bros.gmk",
        "../app/src/main/assets/www/samples/mario_bros.gmk"
    };
    static char path[256];
    for (size_t i = 0; i < sizeof(candidates) / sizeof(candidates[0]); ++i) {
        FILE *f = fopen(candidates[i], "rb");
        if (f) {
            fclose(f);
            snprintf(path, sizeof(path), "%s", candidates[i]);
            return path;
        }
    }
    return NULL;
}

int main(void) {
    const char *sample_path = find_sample_path();
    assert(sample_path != NULL);
    gm82_gmk_load_result loaded = gm82_gmk_load_from_file(sample_path);
    assert(loaded.ok && loaded.ir != NULL);

    gm82_materialize_options options = gm82_materialize_default_options();
    (void)gm82_materialize_all(loaded.ir, &options);
    const gm82_decoded_sound_list *sounds = gm82_materialize_get_sounds();
    const gm82_decoded_font_list *fonts = gm82_materialize_get_fonts();
    printf("RESOURCE_TABLES sounds=%d fonts=%d\n",
           sounds ? sounds->count : 0, fonts ? fonts->count : 0);

    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_runtime_bind_resources(&rt, sounds, fonts);
    if (sounds && sounds->count > 0) {
        assert(sounds->items[0].name[0] != '\0');
        assert(gml_sound_find(sounds->items[0].name) == 0.0);
    }
    if (fonts && fonts->count > 0) {
        assert(fonts->items[0].name[0] != '\0');
        assert(gml_font_find(fonts->items[0].name) == 0.0);
    }
    assert(gml_sound_find("__missing_sound__") == -1.0);
    assert(gml_font_find("__missing_font__") == -1.0);

    gm82_runtime_cleanup(&rt);
    gm82_project_ir_free(loaded.ir);
    puts("RESOURCE_GMK_LOOKUP_PASS");
    return 0;
}
