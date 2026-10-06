/* dlopen host SO and run ticks – verify gm82_native_* exports */
#include <dlfcn.h>
#include <stdio.h>
#include <stdint.h>
typedef int (*fn_init)(int,int);
typedef void (*fn_shutdown)(void);
typedef int (*fn_load)(const char*, char*, int);
typedef void (*fn_tick)(void);
typedef const uint8_t *(*fn_frame)(int*,int*);
typedef int (*fn_ready)(void);
typedef int (*fn_running)(void);
int main(int argc, char **argv) {
    const char *so = argc>1?argv[1]:"libgm82_android_host.so";
    const char *gmk = argc>2?argv[2]:"samples/mario_bros.gmk";
    void *lib = dlopen(so, RTLD_NOW);
    if (!lib) { printf("dlopen fail: %s\n", dlerror()); return 1; }
    fn_init init = (fn_init)dlsym(lib, "gm82_native_init");
    fn_load load = (fn_load)dlsym(lib, "gm82_native_load_game");
    fn_tick tick = (fn_tick)dlsym(lib, "gm82_native_tick");
    fn_frame frame = (fn_frame)dlsym(lib, "gm82_native_frame_rgba");
    fn_ready ready = (fn_ready)dlsym(lib, "gm82_native_frame_ready");
    fn_running running = (fn_running)dlsym(lib, "gm82_native_is_running");
    fn_shutdown shutdown = (fn_shutdown)dlsym(lib, "gm82_native_shutdown");
    if (!init||!load||!tick) { printf("missing symbols\n"); return 2; }
    if (!init(640,480)) { printf("init fail\n"); return 3; }
    char err[256]={0};
    if (!load(gmk, err, sizeof err)) { printf("load fail: %s\n", err); return 4; }
    printf("load: %s\n", err);
    for (int i=0;i<30;i++) tick();
    int fw=0,fh=0; const uint8_t *px = frame?frame(&fw,&fh):NULL;
    printf("running=%d ready=%d frame=%dx%d\n",
           running?running():-1, ready?ready():-1, fw, fh);
    if (shutdown) shutdown();
    dlclose(lib);
    printf("HOST_SO_SMOKE_OK\n");
    return 0;
}
