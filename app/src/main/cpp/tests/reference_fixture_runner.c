#include "gml_frontend.h"
#include "gml_vm.h"
#include "gm82_native_bridge.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char *read_file(const char *path) {
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    if (fseek(f, 0, SEEK_END) != 0) { fclose(f); return NULL; }
    long n = ftell(f);
    if (n < 0 || fseek(f, 0, SEEK_SET) != 0) { fclose(f); return NULL; }
    char *buf = (char *)malloc((size_t)n + 1);
    if (!buf) { fclose(f); return NULL; }
    size_t got = fread(buf, 1, (size_t)n, f);
    fclose(f);
    if (got != (size_t)n) { free(buf); return NULL; }
    buf[got] = '\0';
    return buf;
}

static void print_json_string(const char *s) {
    putchar('"');
    for (const unsigned char *p = (const unsigned char *)(s ? s : ""); *p; ++p) {
        switch (*p) {
            case '"': fputs("\\\"", stdout); break;
            case '\\': fputs("\\\\", stdout); break;
            case '\b': fputs("\\b", stdout); break;
            case '\f': fputs("\\f", stdout); break;
            case '\n': fputs("\\n", stdout); break;
            case '\r': fputs("\\r", stdout); break;
            case '\t': fputs("\\t", stdout); break;
            default:
                if (*p < 0x20) printf("\\u%04x", (unsigned)*p);
                else putchar(*p);
        }
    }
    putchar('"');
}

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "usage: %s fixture.gml\n", argv[0]);
        return 2;
    }
    char *code = read_file(argv[1]);
    if (!code) {
        fprintf(stderr, "cannot read fixture: %s\n", argv[1]);
        return 2;
    }
    gml_ast *ast = NULL;
    char parse_error[160] = {0};
    if (!gml_parse_program(code, &ast, parse_error, sizeof(parse_error))) {
        fprintf(stderr, "parse failed: %s\n", parse_error);
        free(code);
        return 1;
    }
    gml_vm vm;
    gml_vm_init(&vm);
    gml_vm_set_native_call(&vm, gm82_native_call, NULL);
    if (!gml_vm_execute(&vm, ast)) {
        fprintf(stderr, "execute failed: %s\n", vm.error);
        gml_ast_free(ast);
        free(code);
        gml_value_free(&vm.return_value);
        return 1;
    }

    const gml_value *v = &vm.return_value;
    switch (v->kind) {
        case GML_V_REAL:
            printf("{\"kind\":\"real\",\"value\":%.17g}\n", v->real);
            break;
        case GML_V_BOOL:
            printf("{\"kind\":\"bool\",\"value\":%s}\n", v->boolean ? "true" : "false");
            break;
        case GML_V_STRING:
            fputs("{\"kind\":\"string\",\"value\":", stdout);
            print_json_string(v->string);
            fputs("}\n", stdout);
            break;
        case GML_V_ARRAY:
            fprintf(stderr, "array snapshots are not supported by this harness\n");
            gml_ast_free(ast);
            free(code);
            gml_value_free(&vm.return_value);
            return 1;
        default:
            fputs("{\"kind\":\"undefined\",\"value\":null}\n", stdout);
            break;
    }

    gml_ast_free(ast);
    free(code);
    gml_value_free(&vm.return_value);
    return 0;
}
