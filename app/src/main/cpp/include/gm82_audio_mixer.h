#ifndef GM82_AUDIO_MIXER_H
#define GM82_AUDIO_MIXER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GM82_MIXER_CHANNELS 16

typedef struct {
    int active;
    const int16_t *pcm_data;
    size_t sample_count;
    size_t current_sample;
    float volume;
    int loop;
} gm82_audio_channel;

typedef struct {
    gm82_audio_channel channels[GM82_MIXER_CHANNELS];
    int32_t sample_rate;
} gm82_audio_mixer;

void gm82_audio_mixer_init(gm82_audio_mixer *mixer, int32_t sample_rate);
int gm82_audio_mixer_play(gm82_audio_mixer *mixer, const int16_t *pcm, size_t samples, float volume, int loop);
void gm82_audio_mixer_mix_s16(gm82_audio_mixer *mixer, int16_t *out_pcm, size_t frame_count);

#ifdef __cplusplus
}
#endif

#endif
