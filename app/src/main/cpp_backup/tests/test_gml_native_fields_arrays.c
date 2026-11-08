#include "gm82_gml_parser.h"
#include "gm82_gml_eval.h"
#include "gm82_gml_builtins.h"
#include "gm82_runtime.h"
#include <assert.h>
#include <stdio.h>

int main(void) {
    const char *source =
        "inventory[0] = 7;"
        "inventory[1] = 5;"
        "self.stats.hp = 9;"
        "global.cache[2] = 4;"
        "alarm[3] = 6;"
        "arr = array_create(1);"
        "arr[4] = 8;"
        "arr[4] += 3;"
        "matrix = array_create_2d(1, 1);"
        "matrix[2, 3] = 11;"
        "return inventory[0] + inventory[1] + self.stats.hp + global.cache[2] + alarm[3] + argument[0] + "
        "array_length_1d(arr) + array_height_2d(matrix) + array_length_2d(matrix, 0) + arr[4] + matrix[2, 3];";
    gm82_gml_parser parser;
    gm82_gml_parser_init(&parser, source);
    gm82_gml_ast *program = gm82_gml_parse_program(&parser);
    assert(program != NULL);
    assert(parser.error[0] == '\0');

    gm82_gml_bytecode bytecode;
    assert(gm82_gml_compile_bytecode(program, &bytecode));
    int indexed_instructions = 0;
    for (size_t i = 0; i < bytecode.count; ++i)
        if (bytecode.code[i].ast != NULL) indexed_instructions++;
    assert(indexed_instructions >= 6);

    gm82_runtime runtime;
    gm82_runtime_init(&runtime);
    gm82_instance *self = gm82_runtime_instance_create(&runtime, 0, 0, 0);
    assert(self != NULL);
    gm82_gml_set_self(self);
    double args[] = { 2.0 };
    gm82_gml_set_script_args(args, 1);
    gm82_gml_native_ast_eval_reset();

    gm82_gml_exec_result result;
    assert(gm82_gml_execute_bytecode(&runtime, self, &bytecode, &result));
    assert(result.returned);
    assert(result.return_value == 67.0);
    assert(self->alarms[3] == 6);
    assert(gm82_gml_native_ast_eval_count() >= 6);

    gm82_gml_set_script_args(NULL, 0);
    gm82_gml_bytecode_free(&bytecode);
    gm82_gml_ast_free(program);
    gm82_gml_set_self(NULL);
    gm82_runtime_cleanup(&runtime);
    puts("NATIVE_FIELDS_ARRAYS_TEST_PASS");
    return 0;
}
