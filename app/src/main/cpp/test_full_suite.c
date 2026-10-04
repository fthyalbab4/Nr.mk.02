#include "gm82_gmk_reader.h"
#include "gml_frontend.h"
#include "gml_vm.h"
#include "gm82_gml_eval.h"
#include "gm82_gml_builtins.h"
#include "gm82_sprite_decode.h"
#include "gm82_runtime.h"
#include "gm82_actions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

extern double nor_import_format_native(const char *path);
extern double nor_validate_rom_native(const char *path, double kind);
extern double nor_export_nes_native(const char *project, const char *output);
extern double nor_export_gbc_native(const char *project, const char *output);
extern double nor_export_gba_native(const char *project, const char *output);

void test_gmk_probe_suite(void) {
    uint8_t dummy[12] = {0x91, 0xd5, 0x12, 0x00, 0x20, 0x03, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00};
    gm82_gmk_probe_result res = gm82_gmk_probe(dummy, sizeof(dummy));
    assert(res.status == GM82_GMK_PARSE_PARTIAL);
    assert(res.format_kind == GM82_GMK_FORMAT_GM7_GM8);
    assert(res.magic == 1234321);
    assert(res.version == 800);

    /* Test GM8.1 probe (version 810) */
    uint8_t dummy_810[12] = {0x91, 0xd5, 0x12, 0x00, 0x2a, 0x03, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00};
    gm82_gmk_probe_result res_810 = gm82_gmk_probe(dummy_810, sizeof(dummy_810));
    assert(res_810.status == GM82_GMK_PARSE_PARTIAL);
    assert(res_810.format_kind == GM82_GMK_FORMAT_GM81);
    assert(res_810.version == 810);

    /* Test Legacy GM6 probe (version 600) */
    uint8_t dummy_600[12] = {0x91, 0xd5, 0x12, 0x00, 0x58, 0x02, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00};
    gm82_gmk_probe_result res_600 = gm82_gmk_probe(dummy_600, sizeof(dummy_600));
    assert(res_600.status == GM82_GMK_PARSE_PARTIAL);
    assert(res_600.format_kind == GM82_GMK_FORMAT_GM5_GM6);
    assert(res_600.version == 600);

    printf("[PASS] GMK Probe Suite (v800, v810, v600)\n");
}

void test_gml_vm_suite(void) {
    const char *code =
        "x = 5;\n"
        "y = 15;\n"
        "res = max(x, y) + min(x, y);\n"
        "return res;\n";

    gml_ast *ast = NULL;
    char err[160] = {0};
    int parse_ok = gml_parse_program(code, &ast, err, sizeof(err));
    assert(parse_ok);

    gml_vm vm;
    gml_vm_init(&vm);
    int exec_ok = gml_vm_execute(&vm, ast);
    assert(exec_ok);
    assert(vm.returned);
    assert(vm.return_value.real == 20.0);

    gml_ast_free(ast);
    printf("[PASS] GML VM Suite\n");
}

extern int gm82_native_call(void *userdata, const char *name, const gml_value *args, size_t count, gml_value *out);

void test_gml_builtins_suite(void) {
    gml_value args[4];
    gml_value out;

    // Test point_distance(0, 0, 3, 4) == 5.0
    args[0] = gml_value_real(0.0);
    args[1] = gml_value_real(0.0);
    args[2] = gml_value_real(3.0);
    args[3] = gml_value_real(4.0);
    assert(gm82_native_call(NULL, "point_distance", args, 4, &out) == 1);
    assert(out.kind == GML_V_REAL && out.real == 5.0);

    // Test point_direction(0, 0, 0, -10) == 90.0
    args[0] = gml_value_real(0.0);
    args[1] = gml_value_real(0.0);
    args[2] = gml_value_real(0.0);
    args[3] = gml_value_real(-10.0);
    assert(gm82_native_call(NULL, "point_direction", args, 4, &out) == 1);
    assert(out.kind == GML_V_REAL && out.real == 90.0);

    // Test string_length("Hello") == 5
    args[0] = gml_value_string("Hello");
    assert(gm82_native_call(NULL, "string_length", args, 1, &out) == 1);
    assert(out.kind == GML_V_REAL && out.real == 5.0);
    gml_value_free(&args[0]);

    // Test string_copy("NorMaker", 1, 3) == "Nor"
    args[0] = gml_value_string("NorMaker");
    args[1] = gml_value_real(1.0);
    args[2] = gml_value_real(3.0);
    assert(gm82_native_call(NULL, "string_copy", args, 3, &out) == 1);
    assert(out.kind == GML_V_STRING && strcmp(out.string, "Nor") == 0);
    gml_value_free(&args[0]);
    gml_value_free(&out);

    // Test string_pos("Maker", "NorMaker") == 4
    args[0] = gml_value_string("Maker");
    args[1] = gml_value_string("NorMaker");
    assert(gm82_native_call(NULL, "string_pos", args, 2, &out) == 1);
    assert(out.kind == GML_V_REAL && out.real == 4.0);
    gml_value_free(&args[0]);
    gml_value_free(&args[1]);

    // Test string_digits("Stage 12 Score 450") == "12450" via GML VM script execution
    const char *dig_script = "s = 'Stage 12 Score 450'; return string_digits(s);";
    gml_ast *ast = NULL;
    char err[160] = {0};
    int ok = gml_parse_program(dig_script, &ast, err, sizeof(err));
    assert(ok);
    gml_vm vm;
    gml_vm_init(&vm);
    ok = gml_vm_execute(&vm, ast);
    assert(ok && vm.returned);
    assert(vm.return_value.kind == GML_V_STRING && strcmp(vm.return_value.string, "12450") == 0);
    gml_ast_free(ast);
    gml_value_free(&vm.return_value);

    // Test sqr and log2
    const char *math_script = "a = sqr(5); b = log2(16); return a + b;";
    ok = gml_parse_program(math_script, &ast, err, sizeof(err));
    assert(ok);
    gml_vm_init(&vm);
    ok = gml_vm_execute(&vm, ast);
    assert(ok && vm.returned);
    assert(vm.return_value.kind == GML_V_REAL && vm.return_value.real == 29.0);
    gml_ast_free(ast);
    gml_value_free(&vm.return_value);

    // Test ds_map operations via native bridge
    args[0] = gml_value_real(0.0);
    assert(gm82_native_call(NULL, "ds_map_create", args, 0, &out) == 1);
    double map_id = out.real;
    assert(map_id >= 0.0);
    args[0] = gml_value_real(map_id);
    args[1] = gml_value_real(101.0); // key
    args[2] = gml_value_real(999.0); // value
    assert(gm82_native_call(NULL, "ds_map_add", args, 3, &out) == 1);
    args[0] = gml_value_real(map_id);
    args[1] = gml_value_real(101.0);
    assert(gm82_native_call(NULL, "ds_map_find_value", args, 2, &out) == 1);
    assert(out.real == 999.0);
    args[0] = gml_value_real(map_id);
    assert(gm82_native_call(NULL, "ds_map_destroy", args, 1, &out) == 1);

    // Test make_color_rgb
    args[0] = gml_value_real(255.0);
    args[1] = gml_value_real(128.0);
    args[2] = gml_value_real(64.0);
    assert(gm82_native_call(NULL, "make_color_rgb", args, 3, &out) == 1);
    double col = out.real;
    args[0] = gml_value_real(col);
    assert(gm82_native_call(NULL, "color_get_red", args, 1, &out) == 1);
    assert(out.real == 255.0);
    assert(gm82_native_call(NULL, "color_get_green", args, 1, &out) == 1);
    assert(out.real == 128.0);
    assert(gm82_native_call(NULL, "color_get_blue", args, 1, &out) == 1);
    assert(out.real == 64.0);

    // Test place_free & collision_line via native bridge
    args[0] = gml_value_real(100.0);
    args[1] = gml_value_real(100.0);
    assert(gm82_native_call(NULL, "place_free", args, 2, &out) == 1);

    // Test surface create & exists via native bridge
    args[0] = gml_value_real(64.0);
    args[1] = gml_value_real(64.0);
    assert(gm82_native_call(NULL, "surface_create", args, 2, &out) == 1);
    double surf_id = out.real;
    assert(surf_id >= 0.0);
    args[0] = gml_value_real(surf_id);
    assert(gm82_native_call(NULL, "surface_exists", args, 1, &out) == 1);
    assert(out.real == 1.0);
    args[0] = gml_value_real(surf_id);
    assert(gm82_native_call(NULL, "surface_free", args, 1, &out) == 1);

    // Test draw_set_color & draw_get_color via native bridge
    args[0] = gml_value_real(16711680.0); // 0x0000FF in BGR or red
    assert(gm82_native_call(NULL, "draw_set_color", args, 1, &out) == 1);
    assert(gm82_native_call(NULL, "draw_get_color", args, 0, &out) == 1);
    assert(out.real == 16711680.0);

    // Test sound_stop_all via native bridge
    assert(gm82_native_call(NULL, "sound_stop_all", args, 0, &out) == 1);

    printf("[PASS] GML Built-ins Suite (Math, Strings, DS Map, Colors, Collisions, Surfaces, Drawing, Audio)\n");
}

void test_retro_rom_suite(void) {
    const char *nes_path = "/tmp/nor_core_tests/test.nes";
    const char *gbc_path = "/tmp/nor_core_tests/test.gbc";
    const char *gba_path = "/tmp/nor_core_tests/test.gba";

    assert(nor_export_nes_native("proj", nes_path) == 1.0);
    assert(nor_validate_rom_native(nes_path, 1.0) == 1.0);

    assert(nor_export_gbc_native("proj", gbc_path) == 1.0);
    assert(nor_export_gba_native("proj", gba_path) == 1.0);

    printf("[PASS] Retro ROM Suite\n");
}

void test_advanced_gml_and_physics_suite(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 0, 100.0, 200.0);
    assert(inst != NULL);

    /* 1. Test math functions */
    double val = 0.0;
    assert(gm82_gml_eval_expr(&rt, inst, "math_min(10, 20) + math_max(5, 15)", &val));
    assert(val == 25.0);

    /* 2. Test deg/rad conversions */
    assert(gm82_gml_eval_expr(&rt, inst, "rad_to_deg(deg_to_rad(180))", &val));
    assert(val >= 179.9 && val <= 180.1);

    /* 3. Test array assignment: alarm[0] = 60 */
    assert(gm82_gml_eval_stmt(&rt, inst, "alarm[0] = 60;"));
    assert(inst->alarms[0] == 60);
    assert(gm82_gml_eval_expr(&rt, inst, "alarm[0]", &val));
    assert(val == 60.0);

    /* 4. Test ds_grid creation, set, and region sum */
    double grid_id = gml_ds_grid_create(4, 4);
    assert(grid_id >= 0);
    gml_ds_grid_set(grid_id, 0, 0, 10.0);
    gml_ds_grid_set(grid_id, 1, 1, 20.0);
    assert(gml_ds_grid_get_sum(grid_id, 0, 0, 3, 3) == 30.0);
    gml_ds_grid_destroy(grid_id);

    /* 5. Test ds_list sort and size */
    double list_id = gml_ds_list_create();
    assert(list_id >= 0);
    gml_ds_list_add(list_id, 50.0);
    gml_ds_list_add(list_id, 10.0);
    gml_ds_list_add(list_id, 30.0);
    assert(gml_ds_list_size(list_id) == 3.0);
    gml_ds_list_sort(list_id, 1.0);
    assert(gml_ds_list_find_value(list_id, 0.0) == 10.0);
    assert(gml_ds_list_find_value(list_id, 2.0) == 50.0);
    gml_ds_list_destroy(list_id);

    /* 6. Test 1-bit per-pixel mask collision */
    gm82_decoded_frame f1, f2;
    memset(&f1, 0, sizeof(f1));
    memset(&f2, 0, sizeof(f2));
    f1.width = 4; f1.height = 4;
    f2.width = 4; f2.height = 4;
    f1.rgba = (uint8_t *)calloc(16 * 4, 1);
    f2.rgba = (uint8_t *)calloc(16 * 4, 1);
    /* Set only pixel (0, 0) in f1, and pixel (3, 3) in f2 */
    f1.rgba[3] = 255;
    f2.rgba[(3 * 4 + 3) * 4 + 3] = 255;
    gm82_frame_build_bitmask(&f1, 16);
    gm82_frame_build_bitmask(&f2, 16);
    assert(gm82_frame_test_pixel(&f1, 0, 0) == true);
    assert(gm82_frame_test_pixel(&f1, 1, 1) == false);
    /* At world (0, 0) and (1, 1): f1(0, 0) is at world (0, 0), f2(3, 3) is at world (4, 4) -> no collision */
    assert(gm82_frames_collide_pixel(&f1, 0, 0, &f2, 1, 1) == false);
    /* At world (0, 0) and (-3, -3): f2(3, 3) is at world (0, 0) -> precise collision! */
    assert(gm82_frames_collide_pixel(&f1, 0, 0, &f2, -3, -3) == true);

    free(f1.rgba); free(f1.bitmask);
    free(f2.rgba); free(f2.bitmask);

    /* 7. Test DnD Action execution */
    inst->vspeed = 5.0;
    inst->hspeed = 0.0;
    assert(gm82_action_execute_named(&rt, inst, "action_bounce") == true);
    assert(inst->vspeed == -5.0);
    inst->x = -10.0;
    assert(gm82_action_execute_named(&rt, inst, "action_wrap") == true);
    assert(inst->x == (double)(rt.room_width - 10));

    printf("[PASS] Advanced GML, Physics & DnD Actions Suite\n");
}

int main(void) {
    printf("--- Running Native Host Comprehensive Test Suite ---\n");
    test_gmk_probe_suite();
    test_gml_vm_suite();
    test_gml_builtins_suite();
    test_retro_rom_suite();
    test_advanced_gml_and_physics_suite();
    printf("--- All Native Host Tests Passed! ---\n");
    return 0;
}
