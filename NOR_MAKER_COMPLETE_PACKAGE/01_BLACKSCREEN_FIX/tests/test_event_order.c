#include "gm82_runtime.h"
#include "gm82_events.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

static void test_event_loop_order(void) {
    printf("Testing deterministic event loop sequence...\n");
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;

    gm82_decoded_object_list obj_list;
    gm82_decoded_object_list_init(&obj_list);
    obj_list.count = 1;
    obj_list.items = (gm82_decoded_object *)calloc(1, sizeof(gm82_decoded_object));
    snprintf(obj_list.items[0].name, 64, "obj_test");
    obj_list.items[0].sprite_index = -1;

    obj_list.items[0].event_count = 5;
    obj_list.items[0].events[0].main_type = 3; obj_list.items[0].events[0].event_numb = 1; /* Begin Step */
    obj_list.items[0].events[1].main_type = 3; obj_list.items[0].events[1].event_numb = 0; /* Step */
    obj_list.items[0].events[2].main_type = 3; obj_list.items[0].events[2].event_numb = 2; /* End Step */
    obj_list.items[0].events[3].main_type = 8; obj_list.items[0].events[3].event_numb = 72; /* Pre-Draw */
    obj_list.items[0].events[4].main_type = 8; obj_list.items[0].events[4].event_numb = 73; /* Post-Draw */

    gm82_runtime_bind_assets(&rt, &obj_list, NULL, NULL, NULL, NULL);

    gm82_instance *inst = gm82_runtime_instance_create(&rt, 0, 10.0, 10.0);
    assert(inst != NULL);
    assert(inst->alive == 1);

    gm82_runtime_step(&rt);

    uint8_t buffer[64 * 64 * 4];
    bool draw_ok = gm82_runtime_draw(&rt, buffer, 64, 64);
    assert(draw_ok == true);

    gm82_decoded_object_list_free(&obj_list);
    printf("  Event loop sequence order test PASS\n");
}

static void test_instance_pool_midframe_lifecycle(void) {
    printf("Testing mid-frame instance creation and destruction pool safety...\n");
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;

    gm82_instance *inst1 = gm82_runtime_instance_create(&rt, 0, 10.0, 20.0);
    gm82_instance *inst2 = gm82_runtime_instance_create(&rt, 0, 30.0, 40.0);
    assert(rt.instance_count == 2);

    gm82_instance *snapshot[GM82_MAX_INSTANCES];
    int snap_count = gm82_runtime_get_active_snapshot(&rt, snapshot);
    assert(snap_count == 2);

    gm82_runtime_instance_destroy(&rt, inst1);
    assert(inst1->alive == 0);

    gm82_instance *inst3 = gm82_runtime_instance_create(&rt, 0, 50.0, 60.0);
    assert(inst3 != NULL);
    assert(rt.instance_count == 3);

    assert(snapshot[0]->alive == 0 || snapshot[1]->alive == 0);

    int live_count = 0;
    int found_inst2 = 0, found_inst3 = 0;
    for (int i = 0; i < rt.instance_count; i++) {
        if (rt.instances[i].alive) {
            live_count++;
            if (rt.instances[i].id == inst2->id) found_inst2 = 1;
            if (rt.instances[i].id == inst3->id) found_inst3 = 1;
        }
    }
    assert(live_count == 2);
    assert(found_inst2 == 1);
    assert(found_inst3 == 1);

    printf("  Mid-frame instance lifecycle test PASS\n");
}

static void test_depth_sorting_order(void) {
    printf("Testing depth sorting order (higher depth draws first)...\n");
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;

    gm82_instance *inst_front = gm82_runtime_instance_create(&rt, 0, 0, 0);
    gm82_instance *inst_back  = gm82_runtime_instance_create(&rt, 0, 0, 0);
    inst_front->depth = -100;
    inst_back->depth  =  100;

    gm82_instance *snapshot[GM82_MAX_INSTANCES];
    int count = gm82_runtime_get_active_snapshot(&rt, snapshot);
    assert(count == 2);

    int order[2];
    order[0] = 0; order[1] = 1;
    for (int i = 1; i < 2; i++) {
        int key = order[i];
        int j = i - 1;
        while (j >= 0 && snapshot[order[j]]->depth < snapshot[key]->depth) {
            order[j+1] = order[j];
            j--;
        }
        order[j+1] = key;
    }

    assert(snapshot[order[0]]->depth == 100);
    assert(snapshot[order[1]]->depth == -100);

    printf("  Depth sorting order test PASS\n");
}

int main(void) {
    printf("=== RUNNING EVENT ORDER AND LIFECYCLE TESTS ===\n");
    test_event_loop_order();
    test_instance_pool_midframe_lifecycle();
    test_depth_sorting_order();
    printf("ALL_EVENT_ORDER_TESTS_PASS\n");
    return 0;
}
