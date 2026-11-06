#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <mmsystem.h>
#include <stdint.h>
#include <string.h>
#include "win_audio.h"

extern void gm82_audio_host_mix(int16_t *out, size_t frames);

#define NOR_AUDIO_RATE 44100
#define NOR_AUDIO_CHANNELS 2
#define NOR_AUDIO_FRAMES 1024
#define NOR_AUDIO_BUFFERS 4

static HWAVEOUT g_wave;
static WAVEHDR g_headers[NOR_AUDIO_BUFFERS];
static int16_t g_pcm[NOR_AUDIO_BUFFERS][NOR_AUDIO_FRAMES * NOR_AUDIO_CHANNELS];
static int g_ready;

static int fill_and_submit(WAVEHDR *header) {
    if (!g_wave || !header) return 0;
    gm82_audio_host_mix((int16_t *)header->lpData, NOR_AUDIO_FRAMES);
    MMRESULT rc = waveOutWrite(g_wave, header, sizeof(*header));
    return rc == MMSYSERR_NOERROR;
}

int nor_win_audio_init(void) {
    if (g_ready) return 1;
    WAVEFORMATEX format;
    memset(&format, 0, sizeof(format));
    format.wFormatTag = WAVE_FORMAT_PCM;
    format.nChannels = NOR_AUDIO_CHANNELS;
    format.nSamplesPerSec = NOR_AUDIO_RATE;
    format.wBitsPerSample = 16;
    format.nBlockAlign = (WORD)(format.nChannels * format.wBitsPerSample / 8);
    format.nAvgBytesPerSec = format.nSamplesPerSec * format.nBlockAlign;

    if (waveOutOpen(&g_wave, WAVE_MAPPER, &format, 0, 0, CALLBACK_NULL) != MMSYSERR_NOERROR)
        return 0;
    for (int i = 0; i < NOR_AUDIO_BUFFERS; ++i) {
        memset(&g_headers[i], 0, sizeof(g_headers[i]));
        g_headers[i].lpData = (LPSTR)g_pcm[i];
        g_headers[i].dwBufferLength = sizeof(g_pcm[i]);
        if (waveOutPrepareHeader(g_wave, &g_headers[i], sizeof(g_headers[i])) != MMSYSERR_NOERROR ||
            !fill_and_submit(&g_headers[i])) {
            nor_win_audio_shutdown();
            return 0;
        }
    }
    g_ready = 1;
    return 1;
}

void nor_win_audio_pump(void) {
    if (!g_ready || !g_wave) return;
    for (int i = 0; i < NOR_AUDIO_BUFFERS; ++i) {
        WAVEHDR *header = &g_headers[i];
        if ((header->dwFlags & WHDR_DONE) != 0) {
            header->dwFlags &= ~WHDR_DONE;
            (void)fill_and_submit(header);
        }
    }
}

void nor_win_audio_shutdown(void) {
    if (!g_wave) { g_ready = 0; return; }
    waveOutReset(g_wave);
    for (int i = 0; i < NOR_AUDIO_BUFFERS; ++i) {
        if (g_headers[i].dwFlags & WHDR_PREPARED)
            waveOutUnprepareHeader(g_wave, &g_headers[i], sizeof(g_headers[i]));
    }
    waveOutClose(g_wave);
    g_wave = NULL;
    g_ready = 0;
}
