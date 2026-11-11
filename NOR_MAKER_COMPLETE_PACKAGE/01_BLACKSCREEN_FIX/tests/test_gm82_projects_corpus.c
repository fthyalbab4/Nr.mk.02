/* Tests and emulates multiple GM82 projects (gm82path, gm82upx)
 * through IR loading, asset materialization, runtime binding, stepping, and frame drawing. */
#include "gm82_text_reader.h"
#include "gm82_text_materialize.h"
#include "gm82_text_runtime_bridge.h"
#include "gm82_runtime.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char *GM82_PROJECTS[] = {
    "source/unpacked/gm82path-main/gm82path-main/gm82path.gm82",
    "source/unpacked/gm82upx-main/gm82upx-main/gm82upx.gm82"
};

int main(void) {
    int count = sizeof(GM82_PROJECTS) / sizeof(GM82_PROJECTS[0]);
    int executed = 0;

    for (int i = 0; i < count; i++) {
        const char *proj = GM82_PROJECTS[i];
        printf("Testing GM82 Project: %s\n", proj);

        gm82_text_load_result lr = gm82_text_load_project(proj);
        assert(lr.ok && lr.ir);
        gm82_project_ir *ir = lr.ir;

        gm82_text_materialize_result m = gm82_text_materialize_assets(ir);
        printf("  Assets: sprites=%d bgs=%d\n", m.sprites_decoded, m.backgrounds_decoded);

        gm82_text_runtime_bundle bundle;
        assert(gm82_text_build_runtime_bundle(ir, &bundle));
        assert(bundle.valid);

        gm82_runtime rt;
        gm82_runtime_init(&rt);
        gm82_runtime_bind_assets(&rt,
                                 &bundle.objects,
                                 &bundle.sprites,
                                 &bundle.backgrounds,
                                 &bundle.rooms,
                                 NULL);
        gm82_runtime_bind_scripts(&rt, &bundle.scripts);

        if (bundle.rooms.count > 0) {
            assert(gm82_runtime_goto_room(&rt, 0));
            int initial_inst = rt.instance_count;
            for (int step = 0; step < 30; ++step) {
                gm82_runtime_step(&rt);
            }
            const int W = 320, H = 240;
            uint8_t *fb = (uint8_t *)calloc((size_t)W * H * 4, 1);
            assert(fb);
            assert(gm82_runtime_draw(&rt, fb, W, H));
            free(fb);
            printf("  Simulation OK: instances=%d steps=30 draw=OK\n", initial_inst);
        }

        gm82_runtime_cleanup(&rt);
        gm82_text_runtime_bundle_free(&bundle);
        gm82_project_ir_free(ir);
        executed++;
    }

    printf("ALL GM82 CORPUS RUNS PASSED (%d/%d)\n", executed, count);
    return 0;
}
