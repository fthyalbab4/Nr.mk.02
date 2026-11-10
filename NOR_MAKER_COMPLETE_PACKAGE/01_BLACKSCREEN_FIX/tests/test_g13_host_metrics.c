/*
 * G13 host-side metrics harness (NOT Portable compare).
 * G13 remains NOT_RUN until Portable reference logs are supplied.
 */
#include "gm82_gmk_reader.h"
#include "gm82_project_ir.h"
#include "gm82_object_room_decode.h"
#include "gm82_materialize.h"
#include "gm82_runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

static const char *samples[] = {
    "../02_SAMPLES/mario_bros.gmk",
    "../02_SAMPLES/plataformas.gmk",
    "../02_SAMPLES/shooter.gmk",
    "../02_SAMPLES/zelda.gmk",
    NULL
};

static int file_exists(const char *p) {
    struct stat st;
    return p && stat(p, &st) == 0 && S_ISREG(st.st_mode);
}

static const char *basename_of(const char *p) {
    const char *s = strrchr(p, '/');
    return s ? s + 1 : p;
}

int main(void) {
    printf("=== G13 host metrics harness ===\n");
    printf("STATUS: HOST_METRICS_ONLY\n");
    printf("G13_PORTABLE_COMPARE: NOT_RUN (no Portable reference logs in environment)\n");

    FILE *out = fopen("G13_HOST_METRICS.json", "w");
    if (!out) out = stdout;

    fprintf(out, "{\n  \"gate\": \"G13\",\n  \"status\": \"HOST_METRICS_ONLY\",\n");
    fprintf(out, "  \"portable_compare\": \"NOT_RUN\",\n  \"samples\": [\n");

    int any = 0, n = 0;
    for (int i = 0; samples[i]; i++) {
        if (!file_exists(samples[i])) continue;
        any++;
        gm82_gmk_load_result lr = gm82_gmk_load_from_file(samples[i]);
        int objs = 0, rooms = 0, inst0 = 0, alive = 0, frame = 0;
        int load_ok = lr.ok && lr.ir ? 1 : 0;
        if (load_ok) {
            FILE *f = fopen(samples[i], "rb");
            if (f) {
                fseek(f, 0, SEEK_END);
                long sz = ftell(f);
                rewind(f);
                if (sz > 0 && sz < 8 * 1024 * 1024) {
                    uint8_t *buf = (uint8_t *)malloc((size_t)sz);
                    if (buf && fread(buf, 1, (size_t)sz, f) == (size_t)sz) {
                        gm82_decoded_object_list ol;
                        gm82_decoded_object_list_init(&ol);
                        gm82_decode_objects_from_gmk(buf, (size_t)sz, &ol);
                        objs = ol.count;
                        gm82_decoded_room_list rl;
                        gm82_decoded_room_list_init(&rl);
                        gm82_decode_rooms_from_gmk(buf, (size_t)sz, &rl);
                        rooms = rl.count;
                        if (rl.count > 0) inst0 = rl.items[0].instance_count;
                        gm82_decoded_object_list_free(&ol);
                        gm82_decoded_room_list_free(&rl);
                    }
                    free(buf);
                }
                fclose(f);
            }
            gm82_materialize_options opts = gm82_materialize_default_options();
            opts.upload_to_gpu = false;
            gm82_materialize_all(lr.ir, &opts);
            const gm82_decoded_object_list *mol = gm82_materialize_get_objects();
            gm82_runtime rt;
            gm82_runtime_init(&rt);
            if (mol && mol->count > 0) {
                gm82_runtime_bind_assets(&rt, mol, NULL, NULL, NULL, NULL);
                rt.running = 1;
                for (int k = 0; k < 30 && rt.running; k++)
                    gm82_runtime_step(&rt);
                frame = rt.frame;
                for (int k = 0; k < rt.instance_count; k++)
                    if (rt.instances[k].alive) alive++;
            }
            gm82_runtime_cleanup(&rt);
            gm82_project_ir_free(lr.ir);
        } else if (lr.ir) {
            gm82_project_ir_free(lr.ir);
        }

        if (n) fprintf(out, ",\n");
        fprintf(out,
            "    {\"name\":\"%s\",\"load_ok\":%d,\"objects\":%d,\"rooms\":%d,"
            "\"room0_instances\":%d,\"alive_after_30\":%d,\"frame\":%d}",
            basename_of(samples[i]), load_ok, objs, rooms, inst0, alive, frame);
        printf("HOST %s load=%d objs=%d rooms=%d inst0=%d alive30=%d frame=%d\n",
               basename_of(samples[i]), load_ok, objs, rooms, inst0, alive, frame);
        n++;
    }

    fprintf(out, "\n  ],\n  \"note\": \"Provide Portable reference logs to enable diff\"\n}\n");
    if (out != stdout) fclose(out);

    if (!any) printf("[SKIP] no sample GMK fixtures — metrics empty\n");
    printf("G13 remains NOT_RUN until Portable reference logs are available.\n");
    return 0;
}
