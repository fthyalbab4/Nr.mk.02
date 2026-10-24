#ifndef GM82_OPENSLES_STUB_H
#define GM82_OPENSLES_STUB_H

#include "gm82_opensles.h"

#if !defined(__ANDROID__)
#include <stdio.h>

__attribute__((weak)) void gm82_opensles_stop_all(void) {}
__attribute__((weak)) void gm82_opensles_play(int id, float vol, int loop) { (void)id; (void)vol; (void)loop; }
__attribute__((weak)) void gm82_opensles_stop(int id) { (void)id; }
__attribute__((weak)) bool gm82_opensles_init(int sample_rate, int channels) { (void)sample_rate; (void)channels; return true; }
__attribute__((weak)) void gm82_opensles_shutdown(void) {}
__attribute__((weak)) bool gm82_opensles_play_pcm(const int16_t *pcm_data, size_t sample_count, int loop, float volume) { (void)pcm_data; (void)sample_count; (void)loop; (void)volume; return true; }
__attribute__((weak)) bool gm82_opensles_is_active(void) { return false; }

#endif

#endif
