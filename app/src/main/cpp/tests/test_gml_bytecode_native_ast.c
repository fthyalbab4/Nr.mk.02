#include "gm82_gml_parser.h"
#include "gm82_gml_eval.h"
#include "gm82_gml_builtins.h"
#include "gm82_runtime.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    const char *source =
        "acc = 2 + 3 * 4;"
        "acc += max(1, 5);"
        "if (acc == 19) { acc += 1; }"
        "return acc;";
    gm82_gml_parser parser;
    gm82_gml_parser_init(&parser, source);
    gm82_gml_ast *program = gm82_gml_parse_program(&parser);
    assert(program != NULL);
    assert(parser.error[0] == '\0');

    gm82_gml_bytecode bytecode;
    assert(gm82_gml_compile_bytecode(program, &bytecode));
    int native_instructions = 0;
    for (size_t i = 0; i < bytecode.count; ++i) {
        if (bytecode.code[i].ast != NULL) native_instructions++;
    }
    assert(native_instructions >= 5);

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
    assert(result.return_value == 20.0);
    assert(gm82_gml_native_ast_eval_count() >= 5);

    gm82_gml_bytecode_free(&bytecode);
    gm82_gml_ast_free(program);
    gm82_gml_set_self(NULL);
    gm82_runtime_cleanup(&runtime);
    puts("BYTECODE_NATIVE_AST_TEST_PASS");
    return 0;
}
