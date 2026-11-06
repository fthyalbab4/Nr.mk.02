#include "gml_frontend.h"
#include "gml_vm.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

/* A small engine-side with adapter: GM82 makes the target current self and
 * exposes the previous self as other. Each invocation uses a VM scope so the
 * temporary bindings are removed when control returns to the enclosing scope.
 */
typedef struct {
    double observed_self[4];
    double observed_other[4];
    size_t observed_count;
} with_test_state;

static int test_with_callback(void *user, gml_vm *vm,
                              const gml_value *target, const gml_ast *body) {
    with_test_state *state = (with_test_state *)user;
    assert(state != NULL);
    assert(target != NULL && target->kind == GML_V_REAL);
    assert(body != NULL);

    gml_value previous_self = gml_vm_get(vm, "self");
    gml_value previous_other = gml_vm_get(vm, "other");
    assert(previous_self.kind == GML_V_REAL);
    assert(previous_other.kind == GML_V_REAL);
    assert(state->observed_count < 4);
    state->observed_self[state->observed_count] = target->real;
    state->observed_other[state->observed_count] = previous_self.real;
    state->observed_count++;

    gml_vm_push_scope(vm);
    assert(gml_vm_set(vm, "self", gml_value_real(target->real)));
    assert(gml_vm_set(vm, "other", gml_value_real(previous_self.real)));
    gml_value current_self = gml_vm_get(vm, "self");
    gml_value current_other = gml_vm_get(vm, "other");
    assert(current_self.kind == GML_V_REAL && current_self.real == target->real);
    assert(current_other.kind == GML_V_REAL && current_other.real == previous_self.real);
    gml_value_free(&current_self);
    gml_value_free(&current_other);
    int ok = gml_vm_execute_fragment(vm, body);
    gml_vm_pop_scope(vm);

    gml_value_free(&previous_self);
    gml_value_free(&previous_other);
    return ok;
}

static int reject_with_callback(void *user, gml_vm *vm,
                               const gml_value *target, const gml_ast *body) {
    (void)user;
    (void)vm;
    (void)target;
    (void)body;
    return 0;
}

int main(void) {
    const char *source =
        "with (200) {"
        "  outer_self = self;"
        "  with (300) { inner_self = self; inner_other = other; }"
        "  after_inner = self;"
        "}"
        "after_outer = self;";
    gml_ast *ast = NULL;
    char error[160] = {0};
    assert(gml_parse_program(source, &ast, error, sizeof(error)));
    assert(ast != NULL);

    gml_vm vm;
    gml_vm_init(&vm);
    assert(gml_vm_set(&vm, "self", gml_value_real(100)));
    assert(gml_vm_set(&vm, "other", gml_value_real(-1)));

    with_test_state state = {{0}, {0}, 0};
    gml_vm_set_with_callback(&vm, test_with_callback, &state);
    assert(gml_vm_execute(&vm, ast));

    assert(state.observed_count == 2);
    assert(state.observed_self[0] == 200);
    assert(state.observed_other[0] == 100);
    assert(state.observed_self[1] == 300);
    assert(state.observed_other[1] == 200);

    gml_value self = gml_vm_get(&vm, "self");
    gml_value other = gml_vm_get(&vm, "other");
    assert(self.kind == GML_V_REAL && self.real == 100);
    assert(other.kind == GML_V_REAL && other.real == -1);
    gml_value_free(&self);
    gml_value_free(&other);
    gml_ast_free(ast);
    for (size_t i = 0; i < vm.count; ++i) gml_value_free(&vm.vars[i].value);
    gml_value_free(&vm.return_value);

    /* A return from inside with must propagate without the fragment executor
       resetting the enclosing VM's control state. */
    ast = NULL;
    assert(gml_parse_program("with (200) { return 23; } after = 1;",
                             &ast, error, sizeof(error)));
    gml_vm_init(&vm);
    assert(gml_vm_set(&vm, "self", gml_value_real(100)));
    assert(gml_vm_set(&vm, "other", gml_value_real(-1)));
    state = (with_test_state){{0}, {0}, 0};
    gml_vm_set_with_callback(&vm, test_with_callback, &state);
    assert(gml_vm_execute(&vm, ast));
    assert(vm.returned == 1);
    assert(vm.return_value.kind == GML_V_REAL && vm.return_value.real == 23);
    gml_value after = gml_vm_get(&vm, "after");
    assert(after.kind == GML_V_UNDEFINED);
    gml_value_free(&after);
    assert(state.observed_count == 1);
    assert(gml_vm_get(&vm, "self").real == 100);
    assert(gml_vm_get(&vm, "other").real == -1);
    gml_ast_free(ast);
    gml_value_free(&vm.return_value);
    for (size_t i = 0; i < vm.count; ++i) gml_value_free(&vm.vars[i].value);

    /* A failed instance resolver must be surfaced as a VM error, not silently
       treated as a successful with statement. */
    ast = NULL;
    assert(gml_parse_program("with (7) { value = 1; }", &ast, error, sizeof(error)));
    gml_vm_init(&vm);
    gml_vm_set_with_callback(&vm, reject_with_callback, NULL);
    assert(!gml_vm_execute(&vm, ast));
    assert(strstr(vm.error, "with callback failed") != NULL);
    gml_ast_free(ast);

    puts("GML with/self/other nested-scope isolation PASS");
    return 0;
}
