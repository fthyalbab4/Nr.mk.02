#ifndef GM82_DIAGNOSTICS_H
#define GM82_DIAGNOSTICS_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GM82_DIAG_MAX_ENTRIES 48

typedef struct {
    char kind[16];
    char name[64];
    int32_t count;
} gm82_diag_entry;

void gm82_diag_reset(void);
void gm82_diag_set_error(const char *stage, const char *message);
void gm82_diag_clear_unmapped(void);
void gm82_diag_record_unmapped(const char *kind, const char *name);

int gm82_diag_unmapped_gml_total(void);
int gm82_diag_unmapped_action_total(void);
const char *gm82_diag_last_error(void);
const char *gm82_diag_last_stage(void);

int gm82_diag_build_json(
    char *out, size_t cap,
    const char *backend,
    int opensles_active,
    int soundpool_count,
    int room_id, int room_w, int room_h,
    int instance_count, int sprite_count,
    int object_count, int bg_count,
    int sound_count, int frame_count,
    int fps);

#ifdef __cplusplus
}
#endif

#endif /* GM82_DIAGNOSTICS_H */
