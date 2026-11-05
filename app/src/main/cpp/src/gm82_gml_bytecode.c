#include "gm82_gml_parser.h"
#include "gm82_gml_eval.h"
#include "gm82_gml_builtins.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GM82_BC_MAX_STEPS 100000
#define GM82_BC_SOURCE_MAX 8192
#define GM82_BC_MAX_WITH_DEPTH 32
#define GM82_BC_MAX_WITH_ITEMS 2048

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
typedef struct {
    int breaks[64];
    int break_count;
    int continues[64];
    int continue_count;
    bool is_repeat;
} loop_compile_context;
static loop_compile_context g_loop_contexts[32];
static int g_loop_depth;
static void patch_jumps(gm82_gml_bytecode *bc, int *jumps, int count, int target) {
    for (int i = 0; i < count; i++) bc->code[jumps[i]].target = target;
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
            if (g_loop_depth >= 32) return false;
            loop_compile_context *ctx = &g_loop_contexts[g_loop_depth++]; memset(ctx, 0, sizeof(*ctx));
            if (!compile_node(n->b, bc)) return false;
            int back = emit_code(bc, GM82_BC_JUMP, NULL); if (back < 0) return false;
            bc->code[back].target = start;
            int finish = (int)bc->count; patch_jumps(bc, ctx->breaks, ctx->break_count, finish);
            patch_jumps(bc, ctx->continues, ctx->continue_count, start); g_loop_depth--;
            bc->code[exit].target = finish; return true;
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
            if (g_loop_depth >= 32) return false;
            loop_compile_context *ctx = &g_loop_contexts[g_loop_depth++]; memset(ctx, 0, sizeof(*ctx));
            if (!compile_node(n->d, bc)) return false;
            patch_jumps(bc, ctx->continues, ctx->continue_count, (int)bc->count);
            if (n->c) {
                if (!source_of(n->c, source)) return false;
                if (emit_code(bc, GM82_BC_EVAL_STMT, source) < 0) return false;
            }
            int back = emit_code(bc, GM82_BC_JUMP, NULL);
            if (back < 0) return false;
            bc->code[back].target = start;
            int finish = (int)bc->count; patch_jumps(bc, ctx->breaks, ctx->break_count, finish);
            if (exit >= 0) bc->code[exit].target = finish;
            g_loop_depth--;
            return true;
        }
        case GM82_AST_DO_UNTIL: {
            int start = (int)bc->count;
            if (g_loop_depth >= 32) return false;
            loop_compile_context *ctx = &g_loop_contexts[g_loop_depth++]; memset(ctx, 0, sizeof(*ctx));
            ctx->is_repeat = false;
            if (!compile_node(n->a, bc)) return false;
            if (!source_of(n->b, source)) return false;
            int condition = emit_code(bc, GM82_BC_JUMP_IF_FALSE, source);
            if (condition < 0) return false;
            patch_jumps(bc, ctx->continues, ctx->continue_count, condition);
            bc->code[condition].target = start;
            int finish = (int)bc->count;
            patch_jumps(bc, ctx->breaks, ctx->break_count, finish);
            g_loop_depth--;
            return true;
        }
        case GM82_AST_REPEAT: {
            if (!source_of(n->a, source)) return false;
            int init = emit_code(bc, GM82_BC_REPEAT_INIT, source);
            if (init < 0) return false;
            int body = (int)bc->count;
            if (g_loop_depth >= 32) return false;
            loop_compile_context *ctx = &g_loop_contexts[g_loop_depth++]; memset(ctx, 0, sizeof(*ctx));
            ctx->is_repeat = true;
            if (!compile_node(n->b, bc)) return false;
            int next = emit_code(bc, GM82_BC_REPEAT_NEXT, NULL);
            if (next < 0) return false;
            bc->code[next].target = body;
            patch_jumps(bc, ctx->continues, ctx->continue_count, next);
            int finish = (int)bc->count; patch_jumps(bc, ctx->breaks, ctx->break_count, finish);
            bc->code[init].target = finish; g_loop_depth--;
            return true;
        }
        case GM82_AST_WITH: {
            if (!source_of(n->a, source)) return false;
            int begin = emit_code(bc, GM82_BC_WITH_BEGIN, source);
            if (begin < 0) return false;
            int body = (int)bc->count;
            if (!compile_node(n->b, bc)) return false;
            int next = emit_code(bc, GM82_BC_WITH_NEXT, NULL);
            if (next < 0) return false;
            bc->code[next].target = body;
            bc->code[begin].target = (int)bc->count;
            return true;
        }
        case GM82_AST_BREAK: {
            if (g_loop_depth <= 0) return false;
            loop_compile_context *ctx = &g_loop_contexts[g_loop_depth - 1];
            int jump = emit_code(bc, ctx->is_repeat ? GM82_BC_REPEAT_BREAK : GM82_BC_JUMP, NULL); if (jump < 0) return false;
            if (ctx->break_count >= 64) return false;
            ctx->breaks[ctx->break_count++] = jump;
            return true;
        }
        case GM82_AST_CONTINUE: {
            if (g_loop_depth <= 0) return false;
            int jump = emit_code(bc, GM82_BC_JUMP, NULL); if (jump < 0) return false;
            loop_compile_context *ctx = &g_loop_contexts[g_loop_depth - 1];
            if (ctx->continue_count >= 64) return false;
            ctx->continues[ctx->continue_count++] = jump;
            return true;
        }
        case GM82_AST_RETURN:
            if (n->a && !source_of(n->a, source)) return false;
            return emit_code(bc, GM82_BC_RETURN, n->a ? source : "0") >= 0;
        default:
            /* with remains an explicit compatibility instruction for now. */
            if (!source_of(n, source)) return false;
            return emit_code(bc, GM82_BC_EVAL_STMT, source) >= 0;
    }
}

bool gm82_gml_compile_bytecode(const gm82_gml_ast *program, gm82_gml_bytecode *bc) {
    if (!program || !bc) return false;
    memset(bc, 0, sizeof(*bc));
    g_loop_depth = 0;
    if (!compile_node(program, bc)) { gm82_gml_bytecode_free(bc); return false; }
    if (emit_code(bc, GM82_BC_HALT, NULL) < 0) { gm82_gml_bytecode_free(bc); return false; }
    return true;
}
void gm82_gml_bytecode_free(gm82_gml_bytecode *bc) {
    if (!bc) return;
    for (size_t i = 0; i < bc->count; i++) free(bc->code[i].source);
    free(bc->code); memset(bc, 0, sizeof(*bc));
}

typedef struct {
    int ids[GM82_BC_MAX_WITH_ITEMS];
    int count;
    int next;
    gm82_instance *previous_self;
    gm82_instance *previous_other;
} bytecode_with_frame;

static gm82_instance *find_alive_id(gm82_runtime *rt, int id) {
    if (!rt) return NULL;
    for (int i = 0; i < rt->instance_count; ++i) {
        if (rt->instances[i].alive && rt->instances[i].id == id) return &rt->instances[i];
    }
    return NULL;
}

static void restore_with_frames(bytecode_with_frame *frames, int *depth,
                                gm82_instance **self) {
    while (*depth > 0) {
        bytecode_with_frame *frame = &frames[*depth - 1];
        *self = frame->previous_self;
        gm82_gml_set_self(frame->previous_self);
        gm82_gml_set_other(frame->previous_other);
        --*depth;
    }
}

bool gm82_gml_execute_bytecode(gm82_runtime *rt, gm82_instance *self, const gm82_gml_bytecode *bc, gm82_gml_exec_result *r) {
    if (!rt || !bc || !r) return false;
    memset(r, 0, sizeof(*r));
    int pc = 0; double value = 0;
    int repeat_counts[64];
    int repeat_depth = 0;
    bytecode_with_frame with_frames[GM82_BC_MAX_WITH_DEPTH];
    int with_depth = 0;
    while (pc >= 0 && (size_t)pc < bc->count) {
        if (++r->steps > GM82_BC_MAX_STEPS) return false;
        const gm82_gml_bc_instruction *ins = &bc->code[pc];
        switch (ins->opcode) {
            case GM82_BC_HALT:
                restore_with_frames(with_frames, &with_depth, &self);
                return true;
            case GM82_BC_EVAL_STMT:
                if (!gm82_gml_eval_stmt(rt, self, ins->source ? ins->source : "")) {
                    restore_with_frames(with_frames, &with_depth, &self);
                    return false;
                }
                pc++; break;
            case GM82_BC_EVAL_EXPR:
                if (!gm82_gml_eval_expr(rt, self, ins->source ? ins->source : "0", &value)) {
                    restore_with_frames(with_frames, &with_depth, &self);
                    return false;
                }
                pc++; break;
            case GM82_BC_JUMP: pc = ins->target; break;
            case GM82_BC_JUMP_IF_FALSE:
                if (!gm82_gml_eval_expr(rt, self, ins->source ? ins->source : "0", &value)) {
                    restore_with_frames(with_frames, &with_depth, &self);
                    return false;
                }
                pc = value != 0.0 ? pc + 1 : ins->target; break;
            case GM82_BC_REPEAT_INIT:
                if (repeat_depth >= (int)(sizeof(repeat_counts) / sizeof(repeat_counts[0]))) {
                    restore_with_frames(with_frames, &with_depth, &self);
                    return false;
                }
                if (!gm82_gml_eval_expr(rt, self, ins->source ? ins->source : "0", &value)) {
                    restore_with_frames(with_frames, &with_depth, &self);
                    return false;
                }
                if (value < 0.0 || value > (double)GM82_BC_MAX_STEPS) {
                    restore_with_frames(with_frames, &with_depth, &self);
                    return false;
                }
                repeat_counts[repeat_depth++] = (int)value;
                if (repeat_counts[repeat_depth - 1] <= 0) { repeat_depth--; pc = ins->target; }
                else pc++;
                break;
            case GM82_BC_REPEAT_NEXT:
                if (repeat_depth <= 0) {
                    restore_with_frames(with_frames, &with_depth, &self);
                    return false;
                }
                if (--repeat_counts[repeat_depth - 1] > 0) pc = ins->target;
                else { repeat_depth--; pc++; }
                break;
            case GM82_BC_RETURN:
                if (!gm82_gml_eval_expr(rt, self, ins->source ? ins->source : "0", &value)) {
                    restore_with_frames(with_frames, &with_depth, &self);
                    return false;
                }
                r->returned = true; r->return_value = value;
                restore_with_frames(with_frames, &with_depth, &self);
                return true;
            case GM82_BC_REPEAT_BREAK:
                if (repeat_depth <= 0) {
                    restore_with_frames(with_frames, &with_depth, &self);
                    return false;
                }
                repeat_depth--;
                pc = ins->target;
                break;
            case GM82_BC_WITH_BEGIN: {
                if (with_depth >= GM82_BC_MAX_WITH_DEPTH) {
                    restore_with_frames(with_frames, &with_depth, &self);
                    return false;
                }
                if (!gm82_gml_eval_expr(rt, self, ins->source ? ins->source : "-4", &value)) {
                    restore_with_frames(with_frames, &with_depth, &self);
                    return false;
                }
                bytecode_with_frame *frame = &with_frames[with_depth++];
                memset(frame, 0, sizeof(*frame));
                frame->previous_self = self;
                frame->previous_other = gm82_gml_get_other();
                gm82_gml_set_other(self);
                int target = (int)value;
                int limit = rt->instance_count;
                if (limit < 0) limit = 0;
                if (limit > GM82_BC_MAX_WITH_ITEMS) limit = GM82_BC_MAX_WITH_ITEMS;
                for (int i = 0; i < limit; ++i) {
                    gm82_instance *candidate = &rt->instances[i];
                    bool match = false;
                    if (!candidate->alive) continue;
                    if (target == -3) match = true;
                    else if (target == -1) match = candidate == frame->previous_self;
                    else if (target == -2) match = frame->previous_other && candidate == frame->previous_other;
                    else if (target != -4) match = gm82_instance_matches_object(rt, candidate, target);
                    if (match && frame->count < GM82_BC_MAX_WITH_ITEMS) frame->ids[frame->count++] = candidate->id;
                }
                gm82_instance *first = frame->count > 0 ? find_alive_id(rt, frame->ids[0]) : NULL;
                if (!first) {
                    --with_depth;
                    gm82_gml_set_self(frame->previous_self);
                    gm82_gml_set_other(frame->previous_other);
                    pc = ins->target;
                } else {
                    frame->next = 1;
                    self = first;
                    gm82_gml_set_self(self);
                    pc++;
                }
                break;
            }
            case GM82_BC_WITH_NEXT: {
                if (with_depth <= 0) {
                    restore_with_frames(with_frames, &with_depth, &self);
                    return false;
                }
                bytecode_with_frame *frame = &with_frames[with_depth - 1];
                gm82_instance *next = NULL;
                while (frame->next < frame->count && !next) next = find_alive_id(rt, frame->ids[frame->next++]);
                if (next) {
                    self = next;
                    gm82_gml_set_self(self);
                    pc = ins->target;
                } else {
                    self = frame->previous_self;
                    gm82_gml_set_self(frame->previous_self);
                    gm82_gml_set_other(frame->previous_other);
                    --with_depth;
                    pc++;
                }
                break;
            }
            default:
                restore_with_frames(with_frames, &with_depth, &self);
                return false;
        }
    }
    restore_with_frames(with_frames, &with_depth, &self);
    return false;
}
