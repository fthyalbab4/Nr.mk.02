#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main(void) {
    puts("=== Testing Comprehensive GML VM Control Flow & String Functions ===");

    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;

    gm82_instance *inst = gm82_runtime_instance_create(&rt, 0, 10, 20);
    assert(inst != NULL);

    /* Test while loop */
    inst->x = 0;
    gm82_gml_eval_stmt(&rt, inst, "while (x < 5) x += 1;");
    assert(inst->x == 5.0);

    /* Test do ... until loop */
    inst->y = 0;
    gm82_gml_eval_stmt(&rt, inst, "do { y += 2; } until (y >= 10);");
    assert(inst->y == 10.0);

    /* Test string functions */
    assert(gml_string_length("Hello") == 5.0);
    assert(gml_string_pos("world", "Hello world") == 7.0);
    assert(gml_string_char_at("ABC", 2) == (double)'B');

    char buf[128];
    assert(gml_string_copy("GameMaker", 1, 4, buf, sizeof(buf)) == 4.0);
    assert(strcmp(buf, "Game") == 0);

    assert(gml_string_replace("Hello World World", "World", "GM82", buf, sizeof(buf)) == 16.0);
    assert(strcmp(buf, "Hello GM82 World") == 0);

    assert(gml_string_replace_all("foo bar foo baz foo", "foo", "qux", buf, sizeof(buf)) == 19.0);
    assert(strcmp(buf, "qux bar qux baz qux") == 0);

    assert(gml_string_count("ab", "abracadabra") == 2.0);

    assert(gml_string_delete("GameMaker 8.2", 5, 5, buf, sizeof(buf)) == 8.0);
    assert(strcmp(buf, "Game 8.2") == 0);

    assert(gml_string_insert("Maker", "Game 8.2", 5, buf, sizeof(buf)) == 13.0);
    assert(strcmp(buf, "GameMaker 8.2") == 0);

    /* Test math functions */
    assert(gml_lerp(0.0, 100.0, 0.5) == 50.0);
    assert(gml_clamp(150.0, 0.0, 100.0) == 100.0);
    assert(gml_median(10.0, 50.0, 30.0) == 30.0);
    assert(gml_median(-5.0, 100.0, 0.0) == 0.0);

    /* Test evaluation of clamp, median, and multi-arg spatial/geometry functions in GML VM */
    double res = 0;
    gm82_gml_eval_expr(&rt, inst, "clamp(120, 0, 100)", &res);
    assert(res == 100.0);
    gm82_gml_eval_expr(&rt, inst, "median(50, 10, 30)", &res);
    assert(res == 30.0);
    gm82_gml_eval_expr(&rt, inst, "mean(10, 20, 30, 40)", &res);
    assert(res == 25.0);
    gm82_gml_eval_expr(&rt, inst, "sqr(5)", &res);
    assert(res == 25.0);
    gm82_gml_eval_expr(&rt, inst, "point_distance(0, 0, 3, 4)", &res);
    assert(res == 5.0);
    gm82_gml_eval_expr(&rt, inst, "point_in_rectangle(5, 5, 0, 0, 10, 10)", &res);
    assert(res == 1.0);
    gm82_gml_eval_expr(&rt, inst, "point_in_rectangle(15, 5, 0, 0, 10, 10)", &res);
    assert(res == 0.0);

    /* Test degree trigonometric functions */
    assert(gml_abs(gml_dsin(90.0) - 1.0) < 1e-6);
    assert(gml_abs(gml_dcos(0.0) - 1.0) < 1e-6);
    assert(gml_abs(gml_dtan(45.0) - 1.0) < 1e-6);
    assert(gml_abs(gml_darcsin(1.0) - 90.0) < 1e-6);
    assert(gml_abs(gml_darccos(1.0) - 0.0) < 1e-6);
    assert(gml_abs(gml_darctan(1.0) - 45.0) < 1e-6);

    /* Test GM82Core math functions */
    assert(gml_abs(gml_angle_difference(10.0, 350.0) - 20.0) < 1e-6);
    assert(gml_abs(gml_angle_difference(350.0, 10.0) - (-20.0)) < 1e-6);
    assert(gml_approach(10.0, 50.0, 5.0) == 15.0);
    assert(gml_approach(52.0, 50.0, 5.0) == 50.0);
    assert(gml_circle_in_circle(0, 0, 10, 15, 0, 10) == 1.0);
    assert(gml_circle_in_circle(0, 0, 10, 25, 0, 10) == 0.0);
    assert(gml_clerp2(0, 100, 0, 1, 50) == 0.5);
    assert(gml_abs(gml_cosine(0, 100, 0.5) - 50.0) < 1e-6);
    assert(gml_color_inverse(0x00FFFFFF) == 0.0);
    assert(gml_color_reverse(0x00FF0000) == 0x000000FF);

    /* Test ds_grid multiply, add, copy */
    double g1 = gml_ds_grid_create(4, 4);
    assert(g1 >= 0);
    gml_ds_grid_clear(g1, 10.0);
    gml_ds_grid_add(g1, 1, 1, 5.0);
    assert(gml_ds_grid_get(g1, 1, 1) == 15.0);
    gml_ds_grid_multiply(g1, 1, 1, 2.0);
    assert(gml_ds_grid_get(g1, 1, 1) == 30.0);
    double g2 = gml_ds_grid_create(4, 4);
    gml_ds_grid_copy(g2, g1);
    assert(gml_ds_grid_get(g2, 1, 1) == 30.0);
    gml_ds_grid_destroy(g1);
    gml_ds_grid_destroy(g2);

    /* Test ds_list sort and shuffle */
    double l1 = gml_ds_list_create();
    gml_ds_list_add(l1, 40.0);
    gml_ds_list_add(l1, 10.0);
    gml_ds_list_add(l1, 30.0);
    gml_ds_list_sort(l1, 1.0);
    assert(gml_ds_list_find_value(l1, 0) == 10.0);
    assert(gml_ds_list_find_value(l1, 1) == 30.0);
    assert(gml_ds_list_find_value(l1, 2) == 40.0);
    gml_ds_list_destroy(l1);

    /* Test precise bitmask frame collision */
    gm82_decoded_frame f1, f2;
    memset(&f1, 0, sizeof(f1));
    memset(&f2, 0, sizeof(f2));
    f1.width = 4; f1.height = 4;
    f2.width = 4; f2.height = 4;
    f1.rgba = (uint8_t *)calloc(4 * 4 * 4, 1);
    f2.rgba = (uint8_t *)calloc(4 * 4 * 4, 1);
    /* Set pixel (2,2) alpha to 255 in both frames */
    f1.rgba[(2 * 4 + 2) * 4 + 3] = 255;
    f2.rgba[(2 * 4 + 2) * 4 + 3] = 255;
    gm82_frame_build_bitmask(&f1, 16);
    gm82_frame_build_bitmask(&f2, 16);
    assert(gm82_frame_test_pixel(&f1, 2, 2) == true);
    assert(gm82_frame_test_pixel(&f1, 0, 0) == false);
    /* Collide at identical coordinates */
    assert(gm82_frames_collide_pixel(&f1, 0, 0, &f2, 0, 0) == true);
    /* Shift f2 so pixels don't overlap */
    assert(gm82_frames_collide_pixel(&f1, 0, 0, &f2, 10, 10) == false);
    free(f1.rgba); free(f1.bitmask);
    free(f2.rgba); free(f2.bitmask);

    /* Test buffer and ds_priority in GML eval */
    double buf_res = 0;
    gm82_gml_eval_expr(&rt, inst, "buffer_create(16, 0, 1)", &buf_res);
    assert(buf_res >= 0);
    double b_id = buf_res;
    char b_stmt[128];
    snprintf(b_stmt, sizeof(b_stmt), "buffer_write(%f, 0, 123.0)", b_id);
    gm82_gml_eval_expr(&rt, inst, b_stmt, &res);
    snprintf(b_stmt, sizeof(b_stmt), "buffer_seek(%f, 0, 0)", b_id);
    gm82_gml_eval_expr(&rt, inst, b_stmt, &res);
    snprintf(b_stmt, sizeof(b_stmt), "buffer_read(%f, 0)", b_id);
    gm82_gml_eval_expr(&rt, inst, b_stmt, &res);
    assert(res == 123.0);
    snprintf(b_stmt, sizeof(b_stmt), "buffer_delete(%f)", b_id);
    gm82_gml_eval_expr(&rt, inst, b_stmt, &res);

    /* Test motion_set in GML eval */
    gm82_gml_eval_stmt(&rt, inst, "motion_set(90, 5);");
    assert(inst->speed == 5.0);
    assert(inst->direction == 90.0);
    assert(gml_abs(inst->vspeed - (-5.0)) < 1e-4);

    /* Test choose in GML eval */
    gm82_gml_eval_expr(&rt, inst, "choose(42)", &res);
    assert(res == 42.0);

    /* Test date and time in GML eval */
    gm82_gml_eval_expr(&rt, inst, "current_time()", &res);
    assert(res >= 0.0);

    /* Test GML boolean, special, and color constants */
    gm82_gml_eval_expr(&rt, inst, "true", &res);
    assert(res == 1.0);
    gm82_gml_eval_expr(&rt, inst, "false", &res);
    assert(res == 0.0);
    gm82_gml_eval_expr(&rt, inst, "noone", &res);
    assert(res == -4.0);
    gm82_gml_eval_expr(&rt, inst, "c_red", &res);
    assert(res == 255.0);
    gm82_gml_eval_expr(&rt, inst, "c_white", &res);
    assert(res == 16777215.0);

    /* Test drawing functions in GML eval with software target */
    uint8_t test_fb[64 * 64 * 4];
    memset(test_fb, 0, sizeof(test_fb));
    gm82_draw_set_target(test_fb, 64, 64);
    gm82_gml_eval_stmt(&rt, inst, "draw_set_color(c_red);");
    gm82_gml_eval_expr(&rt, inst, "draw_get_color()", &res);
    assert(res == 255.0);
    gm82_gml_eval_stmt(&rt, inst, "draw_set_alpha(0.8);");
    gm82_gml_eval_expr(&rt, inst, "draw_get_alpha()", &res);
    assert(gml_abs(res - 0.8) < 1e-4);
    gm82_gml_eval_stmt(&rt, inst, "draw_line(0, 0, 10, 10);");
    gm82_gml_eval_stmt(&rt, inst, "draw_rectangle(5, 5, 20, 20, 1);");
    gm82_gml_eval_stmt(&rt, inst, "draw_circle(15, 15, 5, 0);");
    gm82_draw_set_target(NULL, 0, 0);

    puts("GML_COMPREHENSIVE_VM_TEST_PASS");
    return 0;
}
