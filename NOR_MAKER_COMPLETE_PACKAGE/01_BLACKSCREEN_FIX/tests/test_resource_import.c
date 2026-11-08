/*
 * Phase 6 - Resource import & safety behavioral tests (host).
 * See blackscreen tests/test_resource_import.c for full suite.
 */
#include "gm82_gmk_format.h"
#include "gm82_gmk_reader.h"
#include "gm82_project_ir.h"
#include "gm82_object_room_decode.h"
#include "gm82_materialize.h"
#include "gm82_runtime.h"
#include "gm82_loader.h"
#include "gm82_sprite_decode.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <sys/stat.h>
#include <unistd.h>

static int g_failures = 0;
static void expect_true(int cond, const char *msg) {
    if (!cond) { fprintf(stderr, "[FAIL] %s\n", msg); g_failures++; }
    else printf("[PASS] %s\n", msg);
}
extern double nor_import_gmx_gmz_native(const char *path, const char *output_dir);
static const char *sample_paths[] = {
    "/home/workdir/artifacts/apk_inspect/extracted/assets/www/samples/mario_bros.gmk",
    "/home/workdir/artifacts/apk_inspect/extracted/assets/www/samples/plataformas.gmk",
    "/home/workdir/artifacts/apk_inspect/extracted/assets/www/samples/shooter.gmk",
    "/home/workdir/artifacts/apk_inspect/extracted/assets/www/samples/zelda.gmk",
    NULL
};
static int file_exists(const char *p) {
    struct stat st;
    return p && stat(p, &st) == 0 && S_ISREG(st.st_mode);
}
void test_probe_invalid(void) {
    uint8_t tiny[4] = {0};
    gm82_gmk_probe_result r = gm82_gmk_probe(tiny, sizeof(tiny));
    expect_true(r.status == GM82_GMK_PARSE_INVALID, "probe rejects buffer < 12 bytes");
    r = gm82_gmk_probe(NULL, 100);
    expect_true(r.status == GM82_GMK_PARSE_INVALID, "probe rejects NULL buffer");
    uint8_t bad_magic[12] = {0};
    r = gm82_gmk_probe(bad_magic, sizeof(bad_magic));
    expect_true(r.status == GM82_GMK_PARSE_INVALID, "probe rejects bad magic");
    uint8_t ok800[12] = {0x91, 0xd5, 0x12, 0x00, 0x20, 0x03, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00};
    r = gm82_gmk_probe(ok800, sizeof(ok800));
    expect_true(r.status == GM82_GMK_PARSE_PARTIAL, "probe accepts GM8 v800 header");
    expect_true(r.version == 800, "probe version 800");
    printf("--- test_probe_invalid done ---\n");
}
void test_load_real_gmk_samples(void) {
    int any = 0, loaded = 0;
    for (int i = 0; sample_paths[i]; i++) {
        if (!file_exists(sample_paths[i])) continue;
        any++;
        gm82_gmk_load_result lr = gm82_gmk_load_from_file(sample_paths[i]);
        if (lr.ok && lr.ir) { loaded++; gm82_project_ir_free(lr.ir); }
        else if (lr.ir) gm82_project_ir_free(lr.ir);
    }
    if (!any) { printf("[SKIP] no sample GMK fixtures on disk\n"); return; }
    expect_true(loaded >= 1, "at least one sample GMK loaded into IR");
    printf("--- test_load_real_gmk_samples done (%d/%d) ---\n", loaded, any);
}
void test_load_null_and_missing_path(void) {
    gm82_gmk_load_result lr = gm82_gmk_load_from_file(NULL);
    expect_true(!lr.ok, "load_from_file(NULL) fails");
    if (lr.ir) gm82_project_ir_free(lr.ir);
    lr = gm82_gmk_load_from_file("/nonexistent/path/no_such.gmk");
    expect_true(!lr.ok, "load missing path fails");
    if (lr.ir) gm82_project_ir_free(lr.ir);
    printf("--- test_load_null_and_missing_path done ---\n");
}
void test_gmz_path_traversal_rejected(void) {
    const char *zip_path = "/tmp/nor_evil_traversal.gmz";
    const char *out_dir = "/tmp/nor_gmz_out_test";
    const char *evil_name = "../../evil.txt";
    const char *payload = "pwn";
    size_t nlen = strlen(evil_name);
    size_t psz = strlen(payload);
    uint8_t buf[512]; size_t pos = 0;
    buf[pos++] = 0x50; buf[pos++] = 0x4b; buf[pos++] = 0x03; buf[pos++] = 0x04;
    buf[pos++] = 20; buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0;
    buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0;
    uint32_t crc = 0; memcpy(buf + pos, &crc, 4); pos += 4;
    uint32_t sz32 = (uint32_t)psz; memcpy(buf + pos, &sz32, 4); pos += 4; memcpy(buf + pos, &sz32, 4); pos += 4;
    uint16_t nlen16 = (uint16_t)nlen; memcpy(buf + pos, &nlen16, 2); pos += 2;
    uint16_t z = 0; memcpy(buf + pos, &z, 2); pos += 2;
    memcpy(buf + pos, evil_name, nlen); pos += nlen;
    memcpy(buf + pos, payload, psz); pos += psz;
    size_t central_off = pos;
    buf[pos++] = 0x50; buf[pos++] = 0x4b; buf[pos++] = 0x01; buf[pos++] = 0x02;
    buf[pos++] = 20; buf[pos++] = 0; buf[pos++] = 20; buf[pos++] = 0;
    buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0;
    buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0;
    memcpy(buf + pos, &crc, 4); pos += 4; memcpy(buf + pos, &sz32, 4); pos += 4; memcpy(buf + pos, &sz32, 4); pos += 4;
    memcpy(buf + pos, &nlen16, 2); pos += 2; memcpy(buf + pos, &z, 2); pos += 2; memcpy(buf + pos, &z, 2); pos += 2;
    buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0;
    buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0;
    uint32_t local0 = 0; memcpy(buf + pos, &local0, 4); pos += 4;
    memcpy(buf + pos, evil_name, nlen); pos += nlen;
    size_t central_size = pos - central_off;
    buf[pos++] = 0x50; buf[pos++] = 0x4b; buf[pos++] = 0x05; buf[pos++] = 0x06;
    buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0; buf[pos++] = 0;
    uint16_t one = 1; memcpy(buf + pos, &one, 2); pos += 2; memcpy(buf + pos, &one, 2); pos += 2;
    uint32_t cs = (uint32_t)central_size; uint32_t co = (uint32_t)central_off;
    memcpy(buf + pos, &cs, 4); pos += 4; memcpy(buf + pos, &co, 4); pos += 4; memcpy(buf + pos, &z, 2); pos += 2;
    FILE *f = fopen(zip_path, "wb");
    expect_true(f != NULL, "write temp evil gmz");
    if (f) { fwrite(buf, 1, pos, f); fclose(f); }
    double rc = nor_import_gmx_gmz_native(zip_path, out_dir);
    expect_true(rc == 0.0, "GMZ import rejects path traversal entry");
    expect_true(access("/tmp/evil.txt", F_OK) != 0 && access("/evil.txt", F_OK) != 0, "traversal did not write ../../evil.txt");
    unlink(zip_path);
    printf("--- test_gmz_path_traversal_rejected done ---\n");
}
void test_truncated_gmk_does_not_crash(void) {
    uint8_t hdr[12] = {0x91, 0xd5, 0x12, 0x00, 0x20, 0x03, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00};
    gm82_gmk_load_result lr = gm82_gmk_load_from_memory(hdr, sizeof(hdr));
    expect_true(1, "truncated GMK load did not crash");
    if (lr.ir) gm82_project_ir_free(lr.ir);
    printf("--- test_truncated_gmk_does_not_crash done ---\n");
}
int main(void) {
    printf("=== test_resource_import (Phase 6) ===\n");
    test_probe_invalid();
    test_load_null_and_missing_path();
    test_truncated_gmk_does_not_crash();
    test_gmz_path_traversal_rejected();
    test_load_real_gmk_samples();
    if (g_failures) { fprintf(stderr, "\n%d failure(s)\n", g_failures); return 1; }
    printf("\nAll resource/import behavioral checks passed.\n");
    return 0;
}
