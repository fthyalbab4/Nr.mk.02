/*
 * GMK8 DnD action contract.
 *
 * This is a clean-room behavioral contract for the argument order and boolean
 * results used by the portable runtime.  In particular, action_if_variable is
 * lhs, opcode, rhs (not lhs, rhs, opcode).
 */
#include "gm82_actions.h"
#include "gm82_gml_builtins.h"
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

static gm82_action_ref make_action(const char *name, int a0, int a1, int a2) {
    gm82_action_ref action;
    memset(&action, 0, sizeof(action));
    strncpy(action.name, name, sizeof(action.name) - 1);
    action.args[0] = a0;
    action.args[1] = a1;
    action.args[2] = a2;
    action.argc = 3;
    return action;
}

static void test_if_variable_argument_order(void) {
    gm82_runtime runtime;
    gm82_runtime_init(&runtime);
    gm82_gml_set_runtime(&runtime);
    gm82_instance *self = gm82_runtime_instance_create(&runtime, 0, 10.0, 10.0);
    assert(self != NULL);

    /* GM8 opcodes: 0/3 ==, 1 <, 2 <=, 4 !=, 5 >=, 6 >. */
    const int true_cases[][3] = {
        {10, 0, 10}, {4, 1, 5}, {4, 2, 4}, {10, 3, 10},
        {10, 4, 5}, {10, 5, 10}, {10, 6, 5}
    };
    const int false_cases[][3] = {
        {10, 0, 9}, {5, 1, 4}, {5, 2, 4}, {10, 3, 9},
        {5, 4, 5}, {4, 5, 10}, {5, 6, 10}
    };

    for (size_t i = 0; i < sizeof(true_cases) / sizeof(true_cases[0]); ++i) {
        gm82_action_ref action = make_action("action_if_variable",
                                             true_cases[i][0], true_cases[i][1],
                                             true_cases[i][2]);
        assert(gm82_action_execute_ref(&runtime, self, &action) == true);
    }
    for (size_t i = 0; i < sizeof(false_cases) / sizeof(false_cases[0]); ++i) {
        gm82_action_ref action = make_action("action_if_variable",
                                             false_cases[i][0], false_cases[i][1],
                                             false_cases[i][2]);
        assert(gm82_action_execute_ref(&runtime, self, &action) == false);
    }

    gm82_runtime_cleanup(&runtime);
    puts("GMK8_ACTION_CONTRACT_VARIABLE_PASS");
}

static void test_if_empty_and_collision(void) {
    gm82_runtime runtime;
    gm82_runtime_init(&runtime);
    gm82_gml_set_runtime(&runtime);
    gm82_instance *self = gm82_runtime_instance_create(&runtime, 0, 10.0, 10.0);
    assert(self != NULL);

    gm82_action_ref empty = make_action("action_if_empty", 500, 500, -4);
    assert(gm82_action_execute_ref(&runtime, self, &empty) == true);

    gm82_action_ref collision = make_action("action_if_collision", 500, 500, -1);
    assert(gm82_action_execute_ref(&runtime, self, &collision) == false);

    gm82_instance *target = gm82_runtime_instance_create(&runtime, 1, 500.0, 500.0);
    assert(target != NULL);
    assert(gm82_action_execute_ref(&runtime, self, &empty) == false);
    assert(gm82_action_execute_ref(&runtime, self, &collision) == true);

    gm82_runtime_cleanup(&runtime);
    puts("GMK8_ACTION_CONTRACT_SPATIAL_PASS");
}

int main(void) {
    test_if_variable_argument_order();
    test_if_empty_and_collision();
    puts("GMK8_ACTION_CONTRACT_PASS");
    return 0;
}
