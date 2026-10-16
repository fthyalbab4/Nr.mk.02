#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "gm82_runtime.h"
int main(int argc, char **argv) {
    const char *path = argc > 1 ? argv[1] : NULL;
    int frames = argc > 2 ? atoi(argv[2]) : 30;
    if (!path) { fprintf(stderr, "usage: %s file.gmk [frames]\n", argv[0]); return 2; }
    FILE *f = fopen(path, "rb");
    if (!f) { perror(path); return 1; }
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    if (sz < 16) { fclose(f); return 1; }
    uint8_t *buf = malloc((size_t)sz);
    if (!buf || fread(buf, 1, (size_t)sz, f) != (size_t)sz) { free(buf); fclose(f); return 1; }
    fclose(f);
    printf("LOADED %s bytes=%ld\n", path, sz);
    gm82_runtime rt; gm82_runtime_init(&rt); rt.running = 1; rt.room_speed = 30;
    for (int i = 0; i < frames; i++) gm82_runtime_step(&rt);
    printf("STEPS %d frame=%d\n", frames, rt.frame);
    uint8_t *rgba = calloc(640 * 480 * 4, 1);
    if (rgba) { printf("DRAW ok=%d\n", gm82_runtime_draw(&rt, rgba, 640, 480) ? 1 : 0); free(rgba); }
    free(buf); printf("PIPELINE_OK\n"); return 0;
}
