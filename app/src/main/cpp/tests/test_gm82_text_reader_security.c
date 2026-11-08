#define _POSIX_C_SOURCE 200809L
#include "gm82_text_reader.h"
#include "gm82_text_materialize.h"
#include "gm82_project_ir.h"

#include <assert.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

static void pathf(char *out, size_t out_size, const char *format, ...) {
    va_list args;
    va_start(args, format);
    int written = vsnprintf(out, out_size, format, args);
    va_end(args);
    assert(written >= 0 && (size_t)written < out_size);
}

static void make_dir(const char *path) {
    if (mkdir(path, 0700) != 0) {
        assert(errno == EEXIST);
    }
}

static void write_text(const char *path, const char *text) {
    FILE *file = fopen(path, "wb");
    assert(file != NULL);
    assert(fwrite(text, 1, strlen(text), file) == strlen(text));
    assert(fclose(file) == 0);
}

static void remove_file(const char *path) {
    if (unlink(path) != 0) assert(errno == ENOENT);
}

static void test_room_name_traversal_is_rejected(const char *base,
                                                 const char *outside) {
    char project[512], rooms[512], index_path[512], outside_room[512];
    pathf(project, sizeof(project), "%s/bad_room_project", base);
    pathf(rooms, sizeof(rooms), "%s/rooms", project);
    pathf(index_path, sizeof(index_path), "%s/index.yyd", rooms);
    pathf(outside_room, sizeof(outside_room), "%s/room.txt", outside);
    make_dir(project);
    make_dir(rooms);
    write_text(index_path, "../../outside\n");
    write_text(outside_room, "width=123\nheight=321\n");

    gm82_text_load_result result = gm82_text_load_project(project);
    assert(result.ok && result.ir);
    assert(result.ir->room_count == 1);
    /* The external room metadata must not override the in-project defaults. */
    assert(result.ir->rooms[0].width == 640);
    assert(result.ir->rooms[0].height == 480);
    gm82_project_ir_free(result.ir);

    remove_file(index_path);
    assert(rmdir(rooms) == 0);
    assert(rmdir(project) == 0);
}

static void test_dynamic_resource_paths_stay_inside_project(const char *base,
                                                            const char *outside) {
    char project[512], rooms[512], room0[512], objects[512], datafiles[512];
    char triggers[512], sprites[512], index_path[512], file_path[512];
    char outside_path[512], symlink_path[512];
    pathf(project, sizeof(project), "%s/project", base);
    pathf(rooms, sizeof(rooms), "%s/rooms", project);
    pathf(room0, sizeof(room0), "%s/room0", rooms);
    pathf(objects, sizeof(objects), "%s/objects", project);
    pathf(datafiles, sizeof(datafiles), "%s/datafiles", project);
    pathf(triggers, sizeof(triggers), "%s/triggers", project);
    pathf(sprites, sizeof(sprites), "%s/sprites", project);
    make_dir(project);
    make_dir(rooms);
    make_dir(room0);
    make_dir(objects);
    make_dir(datafiles);
    make_dir(triggers);
    make_dir(sprites);

    pathf(index_path, sizeof(index_path), "%s/index.yyd", rooms);
    write_text(index_path, "room0\n");
    pathf(file_path, sizeof(file_path), "%s/index.yyd", objects);
    write_text(file_path, "obj\n");
    pathf(file_path, sizeof(file_path), "%s/room.txt", room0);
    write_text(file_path, "width=640\nheight=480\n");

    /* A room-instance creation-code field must not escape the project root. */
    pathf(file_path, sizeof(file_path), "%s/instances.txt", room0);
    write_text(file_path, "obj,1,2,../../../outside/owned,0,1,1,0,0,1\n");
    pathf(outside_path, sizeof(outside_path), "%s/owned.gml", outside);
    write_text(outside_path, "x = 999;\n");

    /* Layer names are also untrusted path components. */
    pathf(file_path, sizeof(file_path), "%s/layers.txt", room0);
    write_text(file_path, "../../../outside\n");
    pathf(outside_path, sizeof(outside_path), "%s.txt", outside);
    write_text(outside_path, "bg,0,0,0,0,1,1,0\n");

    /* Resource-index values must not make metadata reads leave the project. */
    pathf(index_path, sizeof(index_path), "%s/index.yyd", datafiles);
    write_text(index_path, "../../outside/meta\n");
    pathf(outside_path, sizeof(outside_path), "%s/meta.txt", outside);
    write_text(outside_path, "store=1\n");

    pathf(index_path, sizeof(index_path), "%s/index.yyd", triggers);
    write_text(index_path, "../../outside/meta\n");
    pathf(outside_path, sizeof(outside_path), "%s/meta.gml", outside);
    write_text(outside_path, "return true;\n");

    /* A symlinked resource directory must not expose external files either. */
    char outside_sprite[512];
    pathf(outside_sprite, sizeof(outside_sprite), "%s/evil", outside);
    make_dir(outside_sprite);
    pathf(outside_path, sizeof(outside_path), "%s/sprite.txt", outside_sprite);
    write_text(outside_path, "bbox_right=77\n");
    pathf(index_path, sizeof(index_path), "%s/index.yyd", sprites);
    write_text(index_path, "evil\n");
    pathf(symlink_path, sizeof(symlink_path), "%s/evil", sprites);
    assert(symlink(outside_sprite, symlink_path) == 0);

    gm82_text_load_result result = gm82_text_load_project(project);
    assert(result.ok && result.ir);
    gm82_project_ir *ir = result.ir;
    assert(ir->room_count == 1);
    assert(ir->rooms[0].instance_count == 1);
    assert(ir->rooms[0].instances[0].creation_code == NULL);
    assert(ir->rooms[0].tile_count == 0);
    assert(ir->included_file_count == 1);
    assert(ir->included_files[0].stored_in_gmk == false);
    assert(ir->included_files[0].source_path == NULL);
    assert(ir->trigger_count == 1);
    assert(ir->triggers[0].constant_name == NULL);
    assert(ir->triggers[0].condition == NULL);

    gm82_text_materialize_result materialized = gm82_text_materialize_assets(ir);
    assert(materialized.sprites_failed == 1);
    assert(materialized.sprites_decoded == 0);
    assert(ir->sprites[0].bbox_right == 0);

    gm82_project_ir_free(ir);
    remove_file(symlink_path);
    remove_file(index_path);
    pathf(file_path, sizeof(file_path), "%s/index.yyd", datafiles);
    remove_file(file_path);
    pathf(file_path, sizeof(file_path), "%s/index.yyd", triggers);
    remove_file(file_path);
    pathf(file_path, sizeof(file_path), "%s/index.yyd", objects);
    remove_file(file_path);
    pathf(file_path, sizeof(file_path), "%s/index.yyd", rooms);
    remove_file(file_path);
    pathf(file_path, sizeof(file_path), "%s/instances.txt", room0);
    remove_file(file_path);
    pathf(file_path, sizeof(file_path), "%s/layers.txt", room0);
    remove_file(file_path);
    pathf(file_path, sizeof(file_path), "%s/room.txt", room0);
    remove_file(file_path);
    rmdir(room0);
    rmdir(rooms);
    rmdir(objects);
    rmdir(datafiles);
    rmdir(triggers);
    rmdir(sprites);
    rmdir(project);
    pathf(file_path, sizeof(file_path), "%s/sprite.txt", outside_sprite);
    remove_file(file_path);
    rmdir(outside_sprite);
}

int main(void) {
    char base_template[] = "/tmp/normaker-text-security-XXXXXX";
    char *base = mkdtemp(base_template);
    assert(base != NULL);
    char outside[512];
    pathf(outside, sizeof(outside), "%s/outside", base);
    make_dir(outside);

    test_room_name_traversal_is_rejected(base, outside);
    test_dynamic_resource_paths_stay_inside_project(base, outside);

    char path[512];
    pathf(path, sizeof(path), "%s/room.txt", outside);
    remove_file(path);
    pathf(path, sizeof(path), "%s/owned.gml", outside);
    remove_file(path);
    pathf(path, sizeof(path), "%s.txt", outside);
    remove_file(path);
    pathf(path, sizeof(path), "%s/meta.txt", outside);
    remove_file(path);
    pathf(path, sizeof(path), "%s/meta.gml", outside);
    remove_file(path);
    rmdir(outside);
    rmdir(base);

    puts("test_gm82_text_reader_security PASS");
    return 0;
}
