#define _POSIX_C_SOURCE 200809L
#include "gm82_gml_builtins.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>
#ifndef _WIN32
#include <dlfcn.h>
#else
#include <windows.h>
#endif

/* Isolated extract from PR#378 — does not touch eval/bytecode/actions. */
#define GM82_MAX_EXTERNAL 64
typedef struct {
    int used;
    void *handle;
    void *func_ptr;
    char dll_name[128];
    char func_name[64];
    int calltype;
    int restype;
    int argcount;
} gm82_external_entry;

static gm82_external_entry g_ext_entries[GM82_MAX_EXTERNAL];

double gml_external_define(const char *dll, const char *name, double calltype, double restype, double argcount) {
    if (!name || !name[0]) return -1.0;
    int slot = -1;
    for (int i = 0; i < GM82_MAX_EXTERNAL; i++) {
        if (!g_ext_entries[i].used) { slot = i; break; }
    }
    if (slot < 0) return -1.0;

    void *h = NULL;
#ifndef _WIN32
    if (dll && dll[0]) {
        char path_buf[256];
        snprintf(path_buf, sizeof(path_buf), "%s", dll);
        char *dot = strrchr(path_buf, '.');
        if (dot && strcasecmp(dot, ".dll") == 0) strcpy(dot, ".so");
        h = dlopen(path_buf, RTLD_LAZY | RTLD_LOCAL);
        if (!h) h = dlopen(dll, RTLD_LAZY | RTLD_LOCAL);
    }
    if (!h) h = dlopen(NULL, RTLD_NOW);
    void *fn = h ? dlsym(h, name) : NULL;
    if (!fn && h) {
        char alt[128];
        snprintf(alt, sizeof(alt), "_%s", name);
        fn = dlsym(h, alt);
    }
#else
    if (dll && dll[0]) h = (void *)LoadLibraryA(dll);
    void *fn = h ? (void *)GetProcAddress((HMODULE)h, name) : NULL;
#endif

    g_ext_entries[slot].used = 1;
    g_ext_entries[slot].handle = h;
    g_ext_entries[slot].func_ptr = fn;
    snprintf(g_ext_entries[slot].dll_name, sizeof(g_ext_entries[slot].dll_name), "%s", dll ? dll : "");
    snprintf(g_ext_entries[slot].func_name, sizeof(g_ext_entries[slot].func_name), "%s", name);
    g_ext_entries[slot].calltype = (int)calltype;
    g_ext_entries[slot].restype = (int)restype;
    g_ext_entries[slot].argcount = (int)argcount;
    return (double)slot;
}

double gml_external_call(double id, double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7) {
    int slot = (int)id;
    if (slot < 0 || slot >= GM82_MAX_EXTERNAL || !g_ext_entries[slot].used) return 0.0;
    void *fn = g_ext_entries[slot].func_ptr;
    if (!fn) return 0.0;

    typedef double (*fn_8d)(double, double, double, double, double, double, double, double);
    fn_8d f = (fn_8d)fn;
    return f(a0, a1, a2, a3, a4, a5, a6, a7);
}

double gml_external_free(const char *dll) {
    if (!dll || !dll[0]) return 0.0;
    for (int i = 0; i < GM82_MAX_EXTERNAL; i++) {
        if (g_ext_entries[i].used && strstr(g_ext_entries[i].dll_name, dll)) {
#ifndef _WIN32
            if (g_ext_entries[i].handle) dlclose(g_ext_entries[i].handle);
#else
            if (g_ext_entries[i].handle) FreeLibrary((HMODULE)g_ext_entries[i].handle);
#endif
            memset(&g_ext_entries[i], 0, sizeof(g_ext_entries[i]));
        }
    }
    return 1.0;
}
