#include "gm82_gml_parser.h"
#include "gm82_gml_eval.h"
#include "gm82_gml_builtins.h"
#include "gm82_runtime.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    const char *source =
        "dist = point_distance(0, 0, 3, 4);"
        "blended = lerp(dist, 14, 0.5);"
        "horizontal = lengthdir_x(10, 0);"
        "list = ds_list_create();"
        "add_result = ds_list_add(list, 31);"
        "add_result = ds_list_add(list, 11);"
        "found = ds_list_find_value(list, 1);"
        "size = ds_list_size(list);"
        "cleanup = ds_list_destroy(list);"
        "return blended + found + size + horizontal;";

    gm82_gml_parser parser;
    gm82_gml_parser_init(&parser, source);
    gm82_gml_ast *program = gm82_gml_parse_program(&parser);
    assert(program != NULL);
    assert(parser.error[0] == '\0');

    gm82_gml_bytecode bytecode;
    assert(gm82_gml_compile_bytecode(program, &bytecode));
    int ast_instructions = 0;
    for (size_t i = 0; i < bytecode.count; ++i)
        if (bytecode.code[i].ast != NULL) ast_instructions++;
    assert(ast_instructions >= 10);

    gm82_runtime runtime;
    gm82_runtime_init(&runtime);
    gm82_instance self;
    memset(&self, 0, sizeof(self));
    self.alive = 1;
    gm82_gml_set_self(&self);
    gm82_gml_native_ast_eval_reset();

    gm82_gml_exec_result result;
    assert(gm82_gml_execute_bytecode(&runtime, &self, &bytecode, &result));
    assert(result.returned);
    assert(fabs(result.return_value - 32.5) < 0.000001);
    assert(gm82_gml_native_ast_eval_count() >= 10);

    gm82_gml_bytecode_free(&bytecode);
    gm82_gml_ast_free(program);
    gm82_gml_set_self(NULL);
    gm82_runtime_cleanup(&runtime);
    puts("NATIVE_BUILTIN_CALLS_TEST_PASS");
    return 0;
}
