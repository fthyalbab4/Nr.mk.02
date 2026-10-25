#define _POSIX_C_SOURCE 200809L
#include "gm82_audio_mixer.h"
#include <string.h>

void gm82_audio_mixer_init(gm82_audio_mixer *mixer, int32_t sample_rate) {
    if (!mixer) return;
    memset(mixer, 0, sizeof(*mixer));
    mixer->sample_rate = sample_rate > 0 ? sample_rate : 44100;
}

int gm82_audio_mixer_play(gm82_audio_mixer *mixer, const int16_t *pcm, size_t samples, float volume, int loop) {
    if (!mixer || !pcm || samples == 0) return -1;
    for (int i = 0; i < GM82_MIXER_CHANNELS; i++) {
        if (!mixer->channels[i].active) {
            mixer->channels[i].active = 1;
            mixer->channels[i].pcm_data = pcm;
            mixer->channels[i].sample_count = samples;
            mixer->channels[i].current_sample = 0;
            mixer->channels[i].volume = volume;
            mixer->channels[i].loop = loop;
            return i;
        }
    }
    return -1;
}

void gm82_audio_mixer_mix_s16(gm82_audio_mixer *mixer, int16_t *out_pcm, size_t frame_count) {
    if (!mixer || !out_pcm || frame_count == 0) return;
    memset(out_pcm, 0, frame_count * sizeof(int16_t));

    for (size_t f = 0; f < frame_count; f++) {
        int32_t mixed_sample = 0;
        for (int c = 0; c < GM82_MIXER_CHANNELS; c++) {
            gm82_audio_channel *ch = &mixer->channels[c];
            if (!ch->active || !ch->pcm_data) continue;

            int16_t raw_sample = ch->pcm_data[ch->current_sample];
            mixed_sample += (int32_t)(raw_sample * ch->volume);

            ch->current_sample++;
            if (ch->current_sample >= ch->sample_count) {
                if (ch->loop) {
                    ch->current_sample = 0;
                } else {
                    ch->active = 0;
                }
            }
        }

        if (mixed_sample > 32767) mixed_sample = 32767;
        if (mixed_sample < -32768) mixed_sample = -32768;
        out_pcm[f] = (int16_t)mixed_sample;
    }
}

void gm82_audio_mixer_stop_all(gm82_audio_mixer *mixer) {
    if (!mixer) return;
    for (int i = 0; i < GM82_MIXER_CHANNELS; i++)
        mixer->channels[i].active = 0;
}

int gm82_audio_mixer_is_channel_active(gm82_audio_mixer *mixer, int ch) {
    if (!mixer || ch < 0 || ch >= GM82_MIXER_CHANNELS) return 0;
    return mixer->channels[ch].active;
}
