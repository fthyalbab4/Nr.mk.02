#ifndef GM82_SOUND_DECODE_H
#define GM82_SOUND_DECODE_H
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef struct {
    char     name[64];
    char     ext[16];
    char     file_name[128];
    int32_t  kind;      /* 0=normal 1=background 3=3d etc */
    int32_t  effects;
    double   volume;
    double   pan;
    int32_t  preload;
    size_t   data_offset; /* in source file if known */
    size_t   data_size;
    uint8_t *raw_data;    /* owned encoded audio payload (.wav/.ogg/.mp3/.mid) */
    size_t   raw_size;
    int16_t *pcm;         /* decoded stereo/mono 16-bit PCM frames if available */
    size_t   pcm_frames;
    int32_t  sample_rate;
    int32_t  channels;
} gm82_decoded_sound;

typedef struct {
    gm82_decoded_sound *items;
    int count;
    int capacity;
} gm82_decoded_sound_list;

void gm82_decoded_sound_list_init(gm82_decoded_sound_list *L);
void gm82_decoded_sound_list_free(gm82_decoded_sound_list *L);
int gm82_decode_sounds_from_gmk(const uint8_t *data, size_t size, gm82_decoded_sound_list *out);
bool gm82_wav_decode_pcm(const uint8_t *wav, size_t len, int16_t **out_pcm, size_t *out_frames, int32_t *out_rate, int32_t *out_channels);

#ifdef __cplusplus
}
#endif
#endif
