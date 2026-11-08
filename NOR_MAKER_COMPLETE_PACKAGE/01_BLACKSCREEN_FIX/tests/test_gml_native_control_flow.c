#include "gm82_gml_parser.h"
#include "gm82_gml_eval.h"
#include "gm82_gml_builtins.h"
#include "gm82_runtime.h"
#include <assert.h>
#include <stdio.h>

int main(void) {
    const char *source =
        "x = 0;"
        "if (x == 0) { while (x < 3) { x += 1; } }"
        "else { x = 99; }"
        "do { x -= 1; } until (x == 1);"
        "repeat (2) { x += 2; }"
        "for (i = 0; i < 2; i += 1) { x += i; }"
        "switch (x) { case 6: x += 1; break; default: x = -1; }"
        "return x;";

    gm82_gml_parser parser;
    gm82_gml_parser_init(&parser, source);
    gm82_gml_ast *program = gm82_gml_parse_program(&parser);
    assert(program != NULL);
    assert(parser.error[0] == '\0');

    gm82_runtime runtime;
    gm82_runtime_init(&runtime);
    gm82_instance *self = gm82_runtime_instance_create(&runtime, 0, 0, 0);
    assert(self != NULL);
    gm82_gml_set_self(self);
    gm82_gml_native_ast_eval_reset();

    gm82_gml_exec_result result;
    assert(gm82_gml_execute_ast(&runtime, self, program, &result));
    assert(result.returned);
    assert(result.return_value == 7.0);
    assert(gm82_gml_native_ast_eval_count() >= 15);

    gm82_gml_ast_free(program);
    gm82_gml_set_self(NULL);
    gm82_runtime_cleanup(&runtime);
    puts("NATIVE_CONTROL_FLOW_TEST_PASS");
    return 0;
}
