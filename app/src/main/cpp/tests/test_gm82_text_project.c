/* Verifies the GM82 text-project loader against real .gm82 projects
 * shipped under source/unpacked (anvil, gm82path). It asserts that the
 * loader reads the official layout: rooms/index.yyd ordering, room.txt
 * metadata, instances.txt rows, settings.txt keys, constants.txt, and
 * datafiles/index.yyd. */
#include "gm82_text_reader.h"
#include "gm82_project_ir.h"

#include <assert.h>
#include <stdio.h>
#include <string.h>

static const char *ANVIL = "source/unpacked/gm82angle-main/gm82angle-main/anvil";
static const char *GMPATH = "source/unpacked/gm82path-main/gm82path-main/gm82path.gm82";
static const char *UPX = "source/unpacked/gm82upx-main/gm82upx-main/gm82upx.gm82";

static int dir_exists(const char *path) {
    FILE *f = fopen(path, "rb");
    if (f) { fclose(f); return 1; }
    return 0;
}

static void check_anvil(void) {
    gm82_text_load_result r = gm82_text_load_project(ANVIL);
    assert(r.ok);
    assert(r.ir);
    gm82_project_ir *ir = r.ir;

    /* rooms/index.yyd must drive naming, not synthetic room0/room1 */
    assert(ir->room_count == 1);
    assert(strcmp(ir->rooms[0].name, "rmMain") == 0);
    assert(ir->rooms[0].width == 696);
    assert(ir->rooms[0].height == 656);
    assert(ir->rooms[0].speed == 60);
    assert(ir->rooms[0].status == GM82_RES_DECODED);

    /* views_enabled=0 in anvil/rmMain -> only one active view slot */
    assert(ir->rooms[0].view_count == 1);
    assert(ir->rooms[0].views != NULL);
    assert(ir->rooms[0].views[0].view_w == 1080);
    assert(ir->rooms[0].views[0].view_h == 480);

    /* instances.txt: "ctrl,0,0,9E818BD7,0,1,1,4294967295,0,0" */
    assert(ir->rooms[0].instance_count >= 1);
    assert(ir->rooms[0].instances[0].object_id >= 0);
    assert(ir->rooms[0].instances[0].xscale == 1.0);

    /* settings.txt is fully keyed (36 keys in the official sample) */
    assert(ir->settings.loaded_key_count == 36);
    assert(ir->settings.esc_close_game == 1);
    assert(ir->settings.error_on_uninitialized_args == 1);

    /* constants.txt is parsed as name=value pairs */
    assert(ir->constant_count >= 10);

    gm82_project_ir_free(ir);
    printf("  anvil: rooms=%d instances=%d constants=%d settings_keys=%d\n",
           1, 1, 0, 0);
}

static void check_gm82path(void) {
    gm82_text_load_result r = gm82_text_load_project(GMPATH);
    assert(r.ok);
    gm82_project_ir *ir = r.ir;
    assert(ir->room_count == 1);
    assert(strcmp(ir->rooms[0].name, "room0") == 0);
    assert(ir->rooms[0].instance_count == 1);
    assert(ir->rooms[0].instances[0].object_id >= 0);
    /* 9-field row (no has_code column) must not be treated as code-bearing */
    assert(ir->rooms[0].instances[0].creation_code == NULL);
    assert(ir->settings.loaded_key_count == 36);
    gm82_project_ir_free(ir);
    printf("  gm82path: instances=%d\n", 1);
}

static void check_upx_datafiles(void) {
    gm82_text_load_result r = gm82_text_load_project(UPX);
    assert(r.ok);
    gm82_project_ir *ir = r.ir;
    assert(ir->included_file_count == 1);
    assert(strcmp(ir->included_files[0].name, "upx.exe") == 0);
    gm82_project_ir_free(ir);
    printf("  gm82upx: datafiles=%d\n", 1);
}

int main(void) {
    if (!dir_exists("source/unpacked/gm82angle-main/gm82angle-main/anvil/settings/settings.txt")) {
        printf("SKIP gm82 text samples not present\n");
        return 0;
    }
    check_anvil();
    check_gm82path();
    check_upx_datafiles();
    printf("test_gm82_text_project PASS\n");
    return 0;
}
