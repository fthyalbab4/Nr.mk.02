#ifndef GM82_OPENSLES_H
#define GM82_OPENSLES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Initialize native OpenSL ES audio backend on Android */
bool gm82_opensles_init(int sample_rate, int channels);

/* Play PCM buffer directly from C native engine */
bool gm82_opensles_play_pcm(const int16_t *pcm_data, size_t sample_count, int loop, float volume);

/* Stop all active audio streams */
void gm82_opensles_stop_all(void);

/* Shutdown native OpenSL ES engine */
void gm82_opensles_shutdown(void);

/* Check if native OpenSL ES is active and ready */
bool gm82_opensles_is_active(void);

#ifdef __cplusplus
}
#endif

#endif /* GM82_OPENSLES_H */
