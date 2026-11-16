/* Clean-room GM82 event ordering contract. */
#include "gm82_runtime.h"
#include "gm82_events.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void set_code(gm82_decoded_event *event, const char *code) {
    size_t n = strlen(code) + 1;
    event->code_snippet = (char *)malloc(n);
    assert(event->code_snippet != NULL);
    memcpy(event->code_snippet, code, n);
}

int main(void) {
    gm82_runtime runtime;
    gm82_runtime_init(&runtime);
    runtime.running = 1;

    gm82_decoded_object_list objects;
    gm82_decoded_object_list_init(&objects);
    objects.count = 1;
    objects.items = (gm82_decoded_object *)calloc(1, sizeof(*objects.items));
    assert(objects.items != NULL);
    snprintf(objects.items[0].name, sizeof(objects.items[0].name), "obj_event_contract");
    objects.items[0].sprite_index = -1;
    objects.items[0].event_count = 4;

    objects.items[0].events[0].main_type = GM82_EV_CREATE;
    objects.items[0].events[0].event_numb = 0;
    set_code(&objects.items[0].events[0], "x = 100;");
    objects.items[0].events[1].main_type = GM82_EV_STEP;
    objects.items[0].events[1].event_numb = GM82_STEP_BEGIN;
    set_code(&objects.items[0].events[1], "x = x * 10 + 1;");
    objects.items[0].events[2].main_type = GM82_EV_STEP;
    objects.items[0].events[2].event_numb = GM82_STEP_NORMAL;
    set_code(&objects.items[0].events[2], "x = x * 10 + 2;");
    objects.items[0].events[3].main_type = GM82_EV_STEP;
    objects.items[0].events[3].event_numb = GM82_STEP_END;
    set_code(&objects.items[0].events[3], "x = x * 10 + 3;");

    gm82_runtime_bind_assets(&runtime, &objects, NULL, NULL, NULL, NULL);
    gm82_instance *instance = gm82_runtime_instance_create(&runtime, 0, 0.0, 0.0);
    assert(instance != NULL);
    assert(instance->x == 100.0);

    gm82_events_fire_begin_step_all(&runtime);
    assert(instance->x == 1001.0);
    gm82_events_fire_step_all(&runtime);
    assert(instance->x == 10012.0);
    gm82_events_fire_end_step_all(&runtime);
    assert(instance->x == 100123.0);
    puts("GMK8_EVENT_CONTRACT_CREATE_BEGIN_STEP_END_PASS");

    gm82_decoded_object_list_free(&objects);
    gm82_runtime_cleanup(&runtime);
    return 0;
}
