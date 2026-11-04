#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "gm82_gml_builtins.h"
#include "gm82_events.h"
#include "gm82_runtime.h"
#include "gm82_gml_eval.h"
#include "gm82_object_room_decode.h"

int main(void) {
    printf("=== Testing GM82 Match & Event Extensions ===\n");

    /* 1. Test match functions */
    gml_match_exact(".txt", "document.txt");
    assert(gml_match_found() == 1.0);
    assert(strcmp(gm82_gml_last_string(), "document") == 0);

    gml_match_exact(".png", "document.txt");
    assert(gml_match_found() == 0.0);
    assert(strcmp(gm82_gml_last_string(), "") == 0);

    gml_match_not_exact(".png", "document.txt");
    assert(gml_match_found() == 1.0);
    assert(strcmp(gm82_gml_last_string(), "document.txt") == 0);

    gml_match_not_exact(".txt", "document.txt");
    assert(gml_match_found() == 0.0);

    gml_match_any("0123456789", "file12345");
    assert(gml_match_found() == 1.0);
    assert(strcmp(gm82_gml_last_string(), "file") == 0);

    gml_match_not_any("file", "file12345");
    assert(gml_match_found() == 1.0);
    assert(strcmp(gm82_gml_last_string(), "file") == 0);

    gml_match_some("0123456789", "file123");
    assert(gml_match_found() == 1.0);
    assert(strcmp(gm82_gml_last_string(), "file") == 0);

    gml_match_some("xyz", "file123");
    assert(gml_match_found() == 0.0);

    gml_match_not_some("xyz", "file123");
    assert(gml_match_found() == 1.0);
    assert(strcmp(gm82_gml_last_string(), "file123") == 0);

    gml_match_not_some("123", "file123");
    assert(gml_match_found() == 0.0);

    printf("  [PASS] match_* functions verified successfully.\n");

    /* 2. Test event bindings & perform */
    gm82_runtime rt;
    memset(&rt, 0, sizeof(rt));
    rt.instance_count = 1;
    rt.instances[0].id = 100001;
    rt.instances[0].object_index = 0;
    rt.instances[0].alive = true;
    rt.instances[0].visible = true;

    gm82_decoded_object_list objs;
    gm82_decoded_object_list_init(&objs);
    objs.count = 1;
    objs.items = calloc(1, sizeof(gm82_decoded_object));
    objs.items[0].parent_index = -1;
    objs.items[0].event_count = 2;

    objs.items[0].events[0].main_type = GM82_EV_STEP;
    objs.items[0].events[0].event_numb = GM82_STEP_NORMAL;
    char code1[64] = "x += 10;";
    objs.items[0].events[0].code_snippet = code1;

    objs.items[0].events[1].main_type = GM82_EV_ALARM;
    objs.items[0].events[1].event_numb = 0;
    char code2[64] = "y += 20;";
    objs.items[0].events[1].code_snippet = code2;

    gm82_runtime_bind_assets(&rt, &objs, NULL, NULL, NULL, NULL);

    gm82_gml_set_runtime(&rt);
    gm82_gml_set_self(&rt.instances[0]);

    assert(rt.instances[0].x == 0);
    assert(rt.instances[0].y == 0);

    // Perform step
    gml_event_step();
    assert(rt.instances[0].x == 10);

    // Perform alarm 0
    gml_event_alarm(0);
    assert(rt.instances[0].y == 20);

    // Perform generic
    gml_event_perform(GM82_EV_STEP, GM82_STEP_NORMAL);
    assert(rt.instances[0].x == 20);

    free(objs.items);

    printf("  [PASS] event_* functions verified successfully.\n");
    printf("ALL GM82 MATCH & EVENT EXTENSION TESTS PASS\n");
    return 0;
}
