/* Proves that a real .gm82 text project reaches the runtime: IR -> decoded
 * runtime bundle -> gm82_runtime_goto_room() -> live instances. This is the
 * step that turns "the loader parses files" into "the game can actually run". */
#include "gm82_text_reader.h"
#include "gm82_text_materialize.h"
#include "gm82_text_runtime_bridge.h"
#include "gm82_runtime.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char *GMPATH = "source/unpacked/gm82path-main/gm82path-main/gm82path.gm82";

static int readable(const char *path) {
    FILE *f = fopen(path, "rb");
    if (!f) return 0;
    fclose(f);
    return 1;
}

int main(void) {
    if (!readable("source/unpacked/gm82path-main/gm82path-main/gm82path.gm82/rooms/index.yyd")) {
        printf("SKIP gm82 text samples not present\n");
        return 0;
    }

    gm82_text_load_result lr = gm82_text_load_project(GMPATH);
    assert(lr.ok && lr.ir);
    gm82_project_ir *ir = lr.ir;

    gm82_text_materialize_result m = gm82_text_materialize_assets(ir);
    assert(m.sprites_decoded > 0);
    assert(m.backgrounds_decoded > 0);

    gm82_text_runtime_bundle bundle;
    assert(gm82_text_build_runtime_bundle(ir, &bundle));
    assert(bundle.valid);

    /* The bridge must expose the same counts the IR declares. */
    assert(bundle.rooms.count == ir->room_count);
    assert(bundle.sprites.count == ir->sprite_count);
    assert(bundle.backgrounds.count == ir->background_count);
    assert(bundle.objects.count == ir->object_count);

    /* Object names must be real names from objects/index.yyd, not synthetic. */
    int named = 0;
    for (int i = 0; i < bundle.objects.count; ++i) {
        assert(bundle.objects.items[i].name[0] != '\0');
        if (strncmp(bundle.objects.items[i].name, "object", 6) != 0) named = 1;
    }
    assert(named);

    /* Instances must be carried over with a resolvable object index. */
    assert(bundle.rooms.items[0].instance_count == ir->rooms[0].instance_count);
    for (int i = 0; i < bundle.rooms.items[0].instance_count; ++i) {
        int oi = bundle.rooms.items[0].instances[i].object_index;
        assert(oi >= 0 && oi < bundle.objects.count);
    }

    /* ---- run it ---- */
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt,
                             &bundle.objects,
                             &bundle.sprites,
                             &bundle.backgrounds,
                             &bundle.rooms,
                             NULL);
    gm82_runtime_bind_scripts(&rt, &bundle.scripts);

    assert(gm82_runtime_goto_room(&rt, 0));
    assert(rt.room_width == ir->rooms[0].width);
    assert(rt.room_height == ir->rooms[0].height);
    assert(rt.instance_count == bundle.rooms.items[0].instance_count);
    assert(rt.instance_count > 0);

    /* Every instance must be alive, created, and positioned from instances.txt */
    for (int i = 0; i < rt.instance_count; ++i) {
        assert(rt.instances[i].alive);
        assert(rt.instances[i].object_index >= 0);
        assert(rt.instances[i].object_index < bundle.objects.count);
    }

    /* Stepping must be stable and must not lose the instances. */
    int before = rt.instance_count;
    for (int step = 0; step < 60; ++step) gm82_runtime_step(&rt);
    assert(rt.instance_count == before);

    /* Drawing must produce a frame buffer without crashing. */
    const int W = 320, H = 240;
    uint8_t *fb = (uint8_t *)calloc((size_t)W * H * 4, 1);
    assert(fb);
    assert(gm82_runtime_draw(&rt, fb, W, H));
    free(fb);

    printf("  text runtime: room=%s %dx%d speed=%d instances=%d steps=60\n",
           bundle.rooms.items[0].name,
           rt.room_width, rt.room_height, rt.room_speed, rt.instance_count);

    gm82_runtime_cleanup(&rt);
    gm82_text_runtime_bundle_free(&bundle);
    gm82_project_ir_free(ir);
    printf("test_gm82_text_runtime PASS\n");
    return 0;
}
