#include "gm82_sound_decode.h"
#include "gm82_sound_runtime.h"
#include "gm82_audio_mixer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

static uint8_t *read_file_bytes(const char *path, size_t *out_size) {
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0) { fclose(f); return NULL; }
    uint8_t *buf = (uint8_t *)malloc(sz);
    if (buf) {
        if (fread(buf, 1, sz, f) != (size_t)sz) {
            free(buf);
            buf = NULL;
        }
    }
    fclose(f);
    if (out_size && buf) *out_size = sz;
    return buf;
}

int main(void) {
    puts("=== PHASE 4: SOUND DECODE & AUDIO QUEUE TEST ===");
    fflush(stdout);

    const char *gmk_path = "../../app/src/main/assets/www/samples/shooter.gmk";
    size_t size = 0;
    uint8_t *data = read_file_bytes(gmk_path, &size);
    if (!data) {
        gmk_path = "../../app/src/main/assets/www/samples/mario_bros.gmk";
        data = read_file_bytes(gmk_path, &size);
    }
    assert(data != NULL && size > 1000);

    gm82_decoded_sound_list sound_list;
    memset(&sound_list, 0, sizeof(sound_list));

    int count = gm82_decode_sounds_from_gmk(data, size, &sound_list);
    printf("Decoded %d sounds from %s\n", count, gmk_path);
    fflush(stdout);
    assert(count >= 1);

    gm82_sound_runtime sr;
    gm82_sound_runtime_init(&sr);
    gm82_sound_runtime_bind(&sr, &sound_list);
    gm82_sound_set_global(&sr);

    double p1 = gml_sound_play(0);
    double p2 = gml_sound_loop(1);
    printf("Sound play results: p1=%.0f, p2=%.0f, play_count=%d, queue_len=%d\n",
           p1, p2, sr.play_count, sr.queue_len);
    fflush(stdout);

    assert(p1 == 1.0);
    assert(sr.play_count >= 1);

    /* Test PCM audio mixer */
    gm82_audio_mixer mixer;
    gm82_audio_mixer_init(&mixer, 44100);

    int16_t dummy_pcm[256];
    for (int i = 0; i < 256; i++) dummy_pcm[i] = (i % 2 == 0) ? 1000 : -1000;

    int ch = gm82_audio_mixer_play(&mixer, dummy_pcm, 256, 0.8f, 0);
    assert(ch >= 0);

    int16_t out_pcm[128] = {0};
    gm82_audio_mixer_mix_s16(&mixer, out_pcm, 64);
    assert(out_pcm[0] != 0);

    gm82_sound_runtime_init(&sr);
    gm82_decoded_sound_list_free(&sound_list);
    free(data);

    puts("AUDIO_QUEUE_PASS_HOST (Physical Device Playback: BLOCKED)");
    return 0;
}
