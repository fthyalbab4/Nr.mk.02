/*
 * Draw pipeline: Pre-Draw → Draw → Post-Draw/GUI. Host behavioral only.
 */
#include "gm82_runtime.h"
#include "gm82_events.h"
#include "gm82_gml_eval.h"
#include "gm82_object_room_decode.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

static int g_failures = 0;
static void expect_true(int c, const char *m) {
    if (!c) { fprintf(stderr, "[FAIL] %s\n", m); g_failures++; }
    else printf("[PASS] %s\n", m);
}
static double gnum(gm82_runtime *rt, gm82_instance *inst, const char *expr) {
    double v = -99999.0; assert(gm82_gml_eval_expr(rt, inst, expr, &v)); return v;
}
static char *dup_s(const char *s) {
    size_t n = strlen(s) + 1; char *p = (char *)malloc(n); memcpy(p, s, n); return p;
}

int main(void) {
    printf("=== test_draw_gui_order ===\n");
    gm82_decoded_object_list objs; memset(&objs, 0, sizeof(objs));
    objs.count = 1;
    objs.items = (gm82_decoded_object *)calloc(1, sizeof(gm82_decoded_object));
    objs.items[0].visible = 1; objs.items[0].parent_index = -1; objs.items[0].event_count = 3;
    objs.items[0].events[0].main_type = GM82_EV_DRAW; objs.items[0].events[0].event_numb = 1;
    objs.items[0].events[0].code_snippet = dup_s("global.seq += 1; global.pre = global.seq;");
    objs.items[0].events[1].main_type = GM82_EV_DRAW; objs.items[0].events[1].event_numb = 0;
    objs.items[0].events[1].code_snippet = dup_s("global.seq += 1; global.draw = global.seq;");
    objs.items[0].events[2].main_type = GM82_EV_DRAW; objs.items[0].events[2].event_numb = 2;
    objs.items[0].events[2].code_snippet = dup_s("global.seq += 1; global.post = global.seq;");

    gm82_runtime rt; gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, &objs, NULL, NULL, NULL, NULL); rt.running = 1;
    gm82_gml_eval_stmt(&rt, NULL, "global.seq = 0; global.pre = 0; global.draw = 0; global.post = 0;");
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 0, 0, 0);
    assert(inst); inst->visible = 1;
    gm82_events_fire_pre_draw_all(&rt);
    gm82_events_fire_draw_all(&rt);
    gm82_events_fire_post_draw_all(&rt);
    double pre = gnum(&rt, inst, "global.pre");
    double drw = gnum(&rt, inst, "global.draw");
    double post = gnum(&rt, inst, "global.post");
    expect_true(pre > 0 && drw > 0 && post > 0, "pre/draw/post all fired");
    expect_true(pre < drw && drw < post, "order pre < draw < post");

    free(objs.items[0].events[0].code_snippet);
    free(objs.items[0].events[1].code_snippet);
    free(objs.items[0].events[2].code_snippet);
    free(objs.items); gm82_runtime_cleanup(&rt);

    /* invisible draw skip */
    memset(&objs, 0, sizeof(objs));
    objs.count = 1;
    objs.items = (gm82_decoded_object *)calloc(1, sizeof(gm82_decoded_object));
    objs.items[0].visible = 1; objs.items[0].parent_index = -1; objs.items[0].event_count = 3;
    objs.items[0].events[0].main_type = GM82_EV_DRAW; objs.items[0].events[0].event_numb = 1;
    objs.items[0].events[0].code_snippet = dup_s("global.ipre = 1;");
    objs.items[0].events[1].main_type = GM82_EV_DRAW; objs.items[0].events[1].event_numb = 0;
    objs.items[0].events[1].code_snippet = dup_s("global.idraw = 1;");
    objs.items[0].events[2].main_type = GM82_EV_DRAW; objs.items[0].events[2].event_numb = 2;
    objs.items[0].events[2].code_snippet = dup_s("global.ipost = 1;");
    gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, &objs, NULL, NULL, NULL, NULL); rt.running = 1;
    gm82_gml_eval_stmt(&rt, NULL, "global.ipre = 0; global.idraw = 0; global.ipost = 0;");
    inst = gm82_runtime_instance_create(&rt, 0, 0, 0); assert(inst); inst->visible = 0;
    gm82_events_fire_pre_draw_all(&rt);
    gm82_events_fire_draw_all(&rt);
    gm82_events_fire_post_draw_all(&rt);
    expect_true(gnum(&rt, inst, "global.ipre") == 1.0, "pre when invisible");
    expect_true(gnum(&rt, inst, "global.idraw") == 0.0, "draw skipped when invisible");
    expect_true(gnum(&rt, inst, "global.ipost") == 1.0, "post when invisible");
    free(objs.items[0].events[0].code_snippet);
    free(objs.items[0].events[1].code_snippet);
    free(objs.items[0].events[2].code_snippet);
    free(objs.items); gm82_runtime_cleanup(&rt);

    if (g_failures) { fprintf(stderr, "%d failure(s)\n", g_failures); return 1; }
    printf("\nAll draw/GUI order checks passed.\n");
    return 0;
}
