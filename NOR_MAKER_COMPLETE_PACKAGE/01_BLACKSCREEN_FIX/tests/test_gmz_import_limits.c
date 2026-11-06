#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

extern double nor_import_gmx_gmz_native(const char *path, const char *output_dir);

static void u16(FILE *f, uint16_t v) { fputc(v & 255, f); fputc(v >> 8, f); }
static void u32(FILE *f, uint32_t v) { u16(f, (uint16_t)v); u16(f, (uint16_t)(v >> 16)); }

typedef struct { const char *name; const unsigned char *data; uint32_t size; uint32_t off; } entry;

static void local_entry(FILE *f, entry *e) {
    e->off = (uint32_t)ftell(f);
    u32(f, 0x04034b50u); u16(f, 20); u16(f, 0); u16(f, 0); u16(f, 0); u16(f, 0); u32(f, 0);
    u32(f, e->size); u32(f, e->size); u16(f, (uint16_t)strlen(e->name)); u16(f, 0);
    fwrite(e->name, 1, strlen(e->name), f);
    if (e->size) fwrite(e->data, 1, e->size, f);
}
static void central_entry(FILE *f, const entry *e, uint32_t declared_size) {
    u32(f, 0x02014b50u); u16(f, 20); u16(f, 20); u16(f, 0); u16(f, 0); u16(f, 0); u16(f, 0); u32(f, 0);
    u32(f, e->size); u32(f, declared_size); u16(f, (uint16_t)strlen(e->name)); u16(f, 0); u16(f, 0);
    u16(f, 0); u16(f, 0); u32(f, 0); u32(f, e->off); fwrite(e->name, 1, strlen(e->name), f);
}
static void finish_zip(FILE *f, entry *entries, int count, uint32_t *declared_sizes) {
    uint32_t central_off = (uint32_t)ftell(f);
    for (int i = 0; i < count; ++i) central_entry(f, &entries[i], declared_sizes ? declared_sizes[i] : entries[i].size);
    uint32_t central_size = (uint32_t)ftell(f) - central_off;
    u32(f, 0x06054b50u); u16(f, 0); u16(f, 0); u16(f, (uint16_t)count); u16(f, (uint16_t)count);
    u32(f, central_size); u32(f, central_off); u16(f, 0);
}

int main(void) {
    char base[128], archive[160], output[160], expected[192];
    snprintf(base, sizeof(base), "/tmp/nor_gmz_test_%ld", (long)getpid());
    snprintf(archive, sizeof(archive), "%s/valid.gmz", base);
    snprintf(output, sizeof(output), "%s/out", base);
    assert(mkdir(base, 0700) == 0);
    const unsigned char gmx[] = "<GMProject/>";
    entry valid[] = {{"folder/", NULL, 0, 0}, {"folder/project.project.gmx", gmx, sizeof(gmx) - 1, 0}};
    FILE *f = fopen(archive, "wb"); assert(f);
    local_entry(f, &valid[0]); local_entry(f, &valid[1]); finish_zip(f, valid, 2, NULL); assert(fclose(f) == 0);
    assert(nor_import_gmx_gmz_native(archive, output) == 1.0);
    snprintf(expected, sizeof(expected), "%s/folder/project.project.gmx", output);
    assert(access(expected, R_OK) == 0);

    snprintf(archive, sizeof(archive), "%s/oversize.gmz", base);
    entry big[] = {{"big.gmx", NULL, 0, 0}};
    f = fopen(archive, "wb"); assert(f); local_entry(f, &big[0]);
    uint32_t oversized[] = {33u * 1024u * 1024u}; finish_zip(f, big, 1, oversized); assert(fclose(f) == 0);
    assert(nor_import_gmx_gmz_native(archive, output) == 0.0);

    snprintf(archive, sizeof(archive), "%s/traversal.gmz", base);
    entry traversal[] = {{"../outside.gmx", NULL, 0, 0}};
    f = fopen(archive, "wb"); assert(f); local_entry(f, &traversal[0]); finish_zip(f, traversal, 1, NULL); assert(fclose(f) == 0);
    assert(nor_import_gmx_gmz_native(archive, output) == 0.0);

    /* Reject a central-directory count above the hard limit without walking it. */
    snprintf(archive, sizeof(archive), "%s/count-overflow.gmz", base);
    f = fopen(archive, "wb"); assert(f);
    u32(f, 0x06054b50u); u16(f, 0); u16(f, 0); u16(f, 2049); u16(f, 2049);
    u32(f, 0); u32(f, 22); u16(f, 0); assert(fclose(f) == 0);
    assert(nor_import_gmx_gmz_native(archive, output) == 0.0);

    /* Reject a central directory whose offset/size points outside the archive. */
    snprintf(archive, sizeof(archive), "%s/central-out-of-range.gmz", base);
    f = fopen(archive, "wb"); assert(f);
    u32(f, 0x06054b50u); u16(f, 0); u16(f, 0); u16(f, 1); u16(f, 1);
    u32(f, 46); u32(f, 0xfffffff0u); u16(f, 0); assert(fclose(f) == 0);
    assert(nor_import_gmx_gmz_native(archive, output) == 0.0);

    /* Reject a central entry whose local-header offset is outside the archive. */
    snprintf(archive, sizeof(archive), "%s/local-out-of-range.gmz", base);
    f = fopen(archive, "wb"); assert(f);
    u32(f, 0x02014b50u); u16(f, 20); u16(f, 20); u16(f, 0); u16(f, 0); u16(f, 0);
    u32(f, 0); u32(f, 0); u32(f, 0); u16(f, 7); u16(f, 0); u16(f, 0); u16(f, 0);
    u16(f, 0); u32(f, 0); u32(f, 0xfffffff0u); fwrite("file.gmx", 1, 7, f);
    u32(f, 0x06054b50u); u16(f, 0); u16(f, 0); u16(f, 1); u16(f, 1);
    u32(f, 53); u32(f, 0); u16(f, 0); assert(fclose(f) == 0);
    assert(nor_import_gmx_gmz_native(archive, output) == 0.0);

    char cleanup[180]; snprintf(cleanup, sizeof(cleanup), "rm -rf %s", base);
    assert(system(cleanup) == 0);
    puts("GMZ_IMPORT_LIMITS_OK");
    return 0;
}
