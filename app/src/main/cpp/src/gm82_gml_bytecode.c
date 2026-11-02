#include "gm82_gml_parser.h"
#include "gm82_gml_eval.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GM82_BC_MAX_STEPS 100000
#define GM82_BC_SOURCE_MAX 8192

static bool reserve_code(gm82_gml_bytecode *bc) {
    if (bc->count < bc->capacity) return true;
    size_t next = bc->capacity ? bc->capacity * 2 : 32;
    gm82_gml_bc_instruction *p = (gm82_gml_bc_instruction *)realloc(bc->code, next * sizeof(*p));
    if (!p) { snprintf(bc->error, sizeof(bc->error), "bytecode allocation failed"); return false; }
    bc->code = p; bc->capacity = next; return true;
}
static int emit_code(gm82_gml_bytecode *bc, gm82_gml_bc_opcode op, const char *source) {
    if (!reserve_code(bc)) return -1;
    gm82_gml_bc_instruction *ins = &bc->code[bc->count];
    memset(ins, 0, sizeof(*ins)); ins->opcode = op; ins->target = -1;
    if (source) {
        ins->source = (char *)malloc(strlen(source) + 1);
        if (!ins->source) { snprintf(bc->error, sizeof(bc->error), "instruction allocation failed"); return -1; }
        strcpy(ins->source, source);
    }
    return (int)bc->count++;
}
static bool source_of(const gm82_gml_ast *node, char *out) {
    return gm82_gml_ast_to_source(node, out, GM82_BC_SOURCE_MAX);
}
static bool compile_node(const gm82_gml_ast *n, gm82_gml_bytecode *bc);
static bool compile_list(const gm82_gml_ast *n, gm82_gml_bytecode *bc) {
    for (; n; n = n->next) if (!compile_node(n, bc)) return false;
    return true;
}
static bool compile_node(const gm82_gml_ast *n, gm82_gml_bytecode *bc) {
    if (!n) return true;
    char source[GM82_BC_SOURCE_MAX];
    switch (n->kind) {
        case GM82_AST_BLOCK: return compile_list(n->a, bc);
        case GM82_AST_EXPR_STMT:
            if (!source_of(n->a, source)) return false;
            return emit_code(bc, GM82_BC_EVAL_STMT, source) >= 0;
        case GM82_AST_IF: {
            if (!source_of(n->a, source)) return false;
            int branch = emit_code(bc, GM82_BC_JUMP_IF_FALSE, source); if (branch < 0) return false;
            if (!compile_node(n->b, bc)) return false;
            int finish = emit_code(bc, GM82_BC_JUMP, NULL); if (finish < 0) return false;
            bc->code[branch].target = (int)bc->count;
            if (!compile_node(n->c, bc)) return false;
            bc->code[finish].target = (int)bc->count;
            return true;
        }
        case GM82_AST_WHILE: {
            int start = (int)bc->count;
            if (!source_of(n->a, source)) return false;
            int exit = emit_code(bc, GM82_BC_JUMP_IF_FALSE, source); if (exit < 0) return false;
            if (!compile_node(n->b, bc)) return false;
            int back = emit_code(bc, GM82_BC_JUMP, NULL); if (back < 0) return false;
            bc->code[back].target = start; bc->code[exit].target = (int)bc->count; return true;
        }
        case GM82_AST_FOR: {
            if (n->a) {
                if (!source_of(n->a, source)) return false;
                if (emit_code(bc, GM82_BC_EVAL_STMT, source) < 0) return false;
            }
            int start = (int)bc->count;
            int exit = -1;
            if (n->b) {
                if (!source_of(n->b, source)) return false;
                exit = emit_code(bc, GM82_BC_JUMP_IF_FALSE, source);
                if (exit < 0) return false;
            }
            if (!compile_node(n->d, bc)) return false;
            if (n->c) {
                if (!source_of(n->c, source)) return false;
                if (emit_code(bc, GM82_BC_EVAL_STMT, source) < 0) return false;
            }
            int back = emit_code(bc, GM82_BC_JUMP, NULL);
            if (back < 0) return false;
            bc->code[back].target = start;
            if (exit >= 0) bc->code[exit].target = (int)bc->count;
            return true;
        }
        case GM82_AST_RETURN:
            if (n->a && !source_of(n->a, source)) return false;
            return emit_code(bc, GM82_BC_RETURN, n->a ? source : "0") >= 0;
        default:
            /* Repeat/with remain explicit compatibility instructions for now. */
            if (!source_of(n, source)) return false;
            return emit_code(bc, GM82_BC_EVAL_STMT, source) >= 0;
    }
}

bool gm82_gml_compile_bytecode(const gm82_gml_ast *program, gm82_gml_bytecode *bc) {
    if (!program || !bc) return false;
    memset(bc, 0, sizeof(*bc));
    if (!compile_node(program, bc)) { gm82_gml_bytecode_free(bc); return false; }
    if (emit_code(bc, GM82_BC_HALT, NULL) < 0) { gm82_gml_bytecode_free(bc); return false; }
    return true;
}
void gm82_gml_bytecode_free(gm82_gml_bytecode *bc) {
    if (!bc) return;
    for (size_t i = 0; i < bc->count; i++) free(bc->code[i].source);
    free(bc->code); memset(bc, 0, sizeof(*bc));
}

bool gm82_gml_execute_bytecode(gm82_runtime *rt, gm82_instance *self, const gm82_gml_bytecode *bc, gm82_gml_exec_result *r) {
    if (!rt || !bc || !r) return false;
    memset(r, 0, sizeof(*r));
    int pc = 0; double value = 0;
    while (pc >= 0 && (size_t)pc < bc->count) {
        if (++r->steps > GM82_BC_MAX_STEPS) return false;
        const gm82_gml_bc_instruction *ins = &bc->code[pc];
        switch (ins->opcode) {
            case GM82_BC_HALT: return true;
            case GM82_BC_EVAL_STMT:
                if (!gm82_gml_eval_stmt(rt, self, ins->source ? ins->source : "")) return false;
                pc++; break;
            case GM82_BC_EVAL_EXPR:
                if (!gm82_gml_eval_expr(rt, self, ins->source ? ins->source : "0", &value)) return false;
                pc++; break;
            case GM82_BC_JUMP: pc = ins->target; break;
            case GM82_BC_JUMP_IF_FALSE:
                if (!gm82_gml_eval_expr(rt, self, ins->source ? ins->source : "0", &value)) return false;
                pc = value != 0.0 ? pc + 1 : ins->target; break;
            case GM82_BC_RETURN:
                if (!gm82_gml_eval_expr(rt, self, ins->source ? ins->source : "0", &value)) return false;
                r->returned = true; r->return_value = value; return true;
            default: return false;
        }
    }
    return false;
}
