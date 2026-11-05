#include "gm82_gml_parser.h"
#include "gm82_gml_eval.h"
#include <stdio.h>
#include <stdint.h>
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
typedef struct loop_context loop_context;
struct loop_context {
    loop_context *parent;
    int *breaks;
    size_t break_count, break_capacity;
    int *continues;
    size_t continue_count, continue_capacity;
    bool is_repeat;
};

static bool add_fixup(int **items, size_t *count, size_t *capacity,
                      int instruction, gm82_gml_bytecode *bc) {
    if (*count == *capacity) {
        size_t next = *capacity ? *capacity * 2 : 8;
        if (next < *capacity || next > SIZE_MAX / sizeof(**items)) {
            snprintf(bc->error, sizeof(bc->error), "loop fixup capacity overflow");
            return false;
        }
        int *grown = (int *)realloc(*items, next * sizeof(**items));
        if (!grown) {
            snprintf(bc->error, sizeof(bc->error), "loop fixup allocation failed");
            return false;
        }
        *items = grown; *capacity = next;
    }
    (*items)[(*count)++] = instruction;
    return true;
}

static void patch_loop(loop_context *loop, gm82_gml_bytecode *bc,
                       int break_target, int continue_target) {
    for (size_t i = 0; i < loop->break_count; i++)
        bc->code[loop->breaks[i]].target = break_target;
    for (size_t i = 0; i < loop->continue_count; i++)
        bc->code[loop->continues[i]].target = continue_target;
}

static void free_loop(loop_context *loop) {
    free(loop->breaks); free(loop->continues);
}

static bool compile_node(const gm82_gml_ast *n, gm82_gml_bytecode *bc,
                         loop_context *loop);
static bool compile_list(const gm82_gml_ast *n, gm82_gml_bytecode *bc,
                         loop_context *loop) {
    for (; n; n = n->next) if (!compile_node(n, bc, loop)) return false;
    return true;
}
static bool emit_loop_control(const gm82_gml_ast *n, gm82_gml_bytecode *bc,
                              loop_context *loop) {
    if (!loop) {
        snprintf(bc->error, sizeof(bc->error), "%s outside loop",
                 n->kind == GM82_AST_BREAK ? "break" : "continue");
        return false;
    }
    gm82_gml_bc_opcode opcode =
        n->kind == GM82_AST_BREAK && loop->is_repeat ? GM82_BC_REPEAT_BREAK : GM82_BC_JUMP;
    int jump = emit_code(bc, opcode, NULL);
    if (jump < 0) return false;
    if (n->kind == GM82_AST_BREAK)
        return add_fixup(&loop->breaks, &loop->break_count, &loop->break_capacity, jump, bc);
    return add_fixup(&loop->continues, &loop->continue_count, &loop->continue_capacity, jump, bc);
}

static bool compile_node(const gm82_gml_ast *n, gm82_gml_bytecode *bc,
                         loop_context *loop) {
    if (!n) return true;
    char source[GM82_BC_SOURCE_MAX];
    switch (n->kind) {
        case GM82_AST_BLOCK: return compile_list(n->a, bc, loop);
        case GM82_AST_EXPR_STMT:
            if (!source_of(n->a, source)) return false;
            return emit_code(bc, GM82_BC_EVAL_STMT, source) >= 0;
        case GM82_AST_IF: {
            if (!source_of(n->a, source)) return false;
            int branch = emit_code(bc, GM82_BC_JUMP_IF_FALSE, source);
            if (branch < 0 || !compile_node(n->b, bc, loop)) return false;
            int finish = emit_code(bc, GM82_BC_JUMP, NULL);
            if (finish < 0) return false;
            bc->code[branch].target = (int)bc->count;
            if (!compile_node(n->c, bc, loop)) return false;
            bc->code[finish].target = (int)bc->count;
            return true;
        }
        case GM82_AST_WHILE: {
            int start = (int)bc->count;
            if (!source_of(n->a, source)) return false;
            int exit = emit_code(bc, GM82_BC_JUMP_IF_FALSE, source);
            if (exit < 0) return false;
            loop_context current = { .parent = loop };
            if (!compile_node(n->b, bc, &current)) { free_loop(&current); return false; }
            int back = emit_code(bc, GM82_BC_JUMP, NULL);
            if (back < 0) { free_loop(&current); return false; }
            bc->code[back].target = start;
            int finish = (int)bc->count;
            bc->code[exit].target = finish;
            patch_loop(&current, bc, finish, start);
            free_loop(&current);
            return true;
        }
        case GM82_AST_DO_UNTIL: {
            int start = (int)bc->count;
            loop_context current = { .parent = loop };
            if (!compile_node(n->a, bc, &current) || !source_of(n->b, source)) {
                free_loop(&current); return false;
            }
            int condition = (int)bc->count;
            int repeat = emit_code(bc, GM82_BC_JUMP_IF_FALSE, source);
            if (repeat < 0) { free_loop(&current); return false; }
            bc->code[repeat].target = start;
            int finish = (int)bc->count;
            patch_loop(&current, bc, finish, condition);
            free_loop(&current);
            return true;
        }
        case GM82_AST_FOR: {
            if (n->a && (!source_of(n->a, source) ||
                         emit_code(bc, GM82_BC_EVAL_STMT, source) < 0)) return false;
            int start = (int)bc->count;
            int exit = -1;
            if (n->b) {
                if (!source_of(n->b, source)) return false;
                exit = emit_code(bc, GM82_BC_JUMP_IF_FALSE, source);
                if (exit < 0) return false;
            }
            loop_context current = { .parent = loop };
            if (!compile_node(n->d, bc, &current)) { free_loop(&current); return false; }
            int step = (int)bc->count;
            if (n->c && (!source_of(n->c, source) ||
                         emit_code(bc, GM82_BC_EVAL_STMT, source) < 0)) {
                free_loop(&current); return false;
            }
            int back = emit_code(bc, GM82_BC_JUMP, NULL);
            if (back < 0) { free_loop(&current); return false; }
            bc->code[back].target = start;
            int finish = (int)bc->count;
            if (exit >= 0) bc->code[exit].target = finish;
            patch_loop(&current, bc, finish, step);
            free_loop(&current);
            return true;
        }
        case GM82_AST_REPEAT: {
            if (!source_of(n->a, source)) return false;
            int init = emit_code(bc, GM82_BC_REPEAT_INIT, source);
            if (init < 0) return false;
            int body = (int)bc->count;
            loop_context current = { .parent = loop, .is_repeat = true };
            if (!compile_node(n->b, bc, &current)) { free_loop(&current); return false; }
            int next = emit_code(bc, GM82_BC_REPEAT_NEXT, NULL);
            if (next < 0) { free_loop(&current); return false; }
            bc->code[next].target = body;
            int finish = (int)bc->count;
            bc->code[init].target = finish;
            patch_loop(&current, bc, finish, next);
            free_loop(&current);
            return true;
        }
        case GM82_AST_RETURN:
            if (n->a && !source_of(n->a, source)) return false;
            return emit_code(bc, GM82_BC_RETURN, n->a ? source : "0") >= 0;
        case GM82_AST_BREAK:
        case GM82_AST_CONTINUE:
            return emit_loop_control(n, bc, loop);
        default:
            /* with remains an explicit compatibility instruction for now. */
            if (!source_of(n, source)) return false;
            return emit_code(bc, GM82_BC_EVAL_STMT, source) >= 0;
    }
}

bool gm82_gml_compile_bytecode(const gm82_gml_ast *program, gm82_gml_bytecode *bc) {
    if (!program || !bc) return false;
    memset(bc, 0, sizeof(*bc));
    if (!compile_node(program, bc, NULL)) {
        if (!bc->error[0]) snprintf(bc->error, sizeof(bc->error), "unsupported AST node or source expression");
        gm82_gml_bytecode_free(bc); return false;
    }
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
    int repeat_counts[64];
    int repeat_depth = 0;
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
            case GM82_BC_REPEAT_INIT:
                if (repeat_depth >= (int)(sizeof(repeat_counts) / sizeof(repeat_counts[0]))) return false;
                if (!gm82_gml_eval_expr(rt, self, ins->source ? ins->source : "0", &value)) return false;
                if (value < 0.0 || value > (double)GM82_BC_MAX_STEPS) return false;
                repeat_counts[repeat_depth++] = (int)value;
                if (repeat_counts[repeat_depth - 1] <= 0) { repeat_depth--; pc = ins->target; }
                else pc++;
                break;
            case GM82_BC_REPEAT_NEXT:
                if (repeat_depth <= 0) return false;
                if (--repeat_counts[repeat_depth - 1] > 0) pc = ins->target;
                else { repeat_depth--; pc++; }
                break;
            case GM82_BC_REPEAT_BREAK:
                if (repeat_depth <= 0) return false;
                repeat_depth--; pc = ins->target;
                break;
            case GM82_BC_RETURN:
                if (!gm82_gml_eval_expr(rt, self, ins->source ? ins->source : "0", &value)) return false;
                r->returned = true; r->return_value = value; return true;
            default: return false;
        }
    }
    return false;
}
