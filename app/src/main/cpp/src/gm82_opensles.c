#define _POSIX_C_SOURCE 200809L
#include "gm82_opensles.h"
#include <stdlib.h>
#include <string.h>

#if defined(__ANDROID__) && defined(GM82_HAVE_JNI)
#include <SLES/OpenSLES.h>
#include <SLES/OpenSLES_Android.h>
#include <android/log.h>

#define LOG_TAG "GM82_SLES"

static SLObjectItf g_engineObject = NULL;
static SLEngineItf g_engineEngine = NULL;
static SLObjectItf g_outputMixObject = NULL;
static SLObjectItf g_playerObject = NULL;
static SLPlayItf   g_playerPlay = NULL;
static SLAndroidSimpleBufferQueueItf g_playerBufferQueue = NULL;
static SLVolumeItf g_playerVolume = NULL;
static bool g_sles_initialized = false;

extern void gm82_audio_host_mix(int16_t *out, size_t frames);

#define SLES_BUF_FRAMES 512
static int16_t g_sles_mix_bufs[2][SLES_BUF_FRAMES];
static int g_sles_buf_idx = 0;

static void bqPlayerCallback(SLAndroidSimpleBufferQueueItf bq, void *context) {
    (void)context;
    if (!g_sles_initialized || !bq) return;
    int idx = g_sles_buf_idx;
    g_sles_buf_idx = (g_sles_buf_idx + 1) & 1;
    gm82_audio_host_mix(g_sles_mix_bufs[idx], SLES_BUF_FRAMES);
    (*bq)->Enqueue(bq, g_sles_mix_bufs[idx], (SLuint32)(SLES_BUF_FRAMES * sizeof(int16_t)));
}

bool gm82_opensles_init(int sample_rate, int channels) {
    if (g_sles_initialized) return true;

    int rate = sample_rate > 0 ? sample_rate : 22050;
    int ch = channels > 1 ? 2 : 1;
    SLresult res;
    res = slCreateEngine(&g_engineObject, 0, NULL, 0, NULL, NULL);
    if (res != SL_RESULT_SUCCESS) return false;

    res = (*g_engineObject)->Realize(g_engineObject, SL_BOOLEAN_FALSE);
    if (res != SL_RESULT_SUCCESS) {
        (*g_engineObject)->Destroy(g_engineObject);
        g_engineObject = NULL;
        return false;
    }

    res = (*g_engineObject)->GetInterface(g_engineObject, SL_IID_ENGINE, &g_engineEngine);
    if (res != SL_RESULT_SUCCESS) { gm82_opensles_shutdown(); return false; }

    res = (*g_engineEngine)->CreateOutputMix(g_engineEngine, &g_outputMixObject, 0, NULL, NULL);
    if (res != SL_RESULT_SUCCESS) { gm82_opensles_shutdown(); return false; }

    res = (*g_outputMixObject)->Realize(g_outputMixObject, SL_BOOLEAN_FALSE);
    if (res != SL_RESULT_SUCCESS) { gm82_opensles_shutdown(); return false; }

    SLDataLocator_AndroidSimpleBufferQueue loc_bufq = {
        SL_DATALOCATOR_ANDROIDSIMPLEBUFFERQUEUE,
        4
    };

    SLDataFormat_PCM format_pcm = {
        SL_DATAFORMAT_PCM,
        (SLuint32)ch,
        (SLuint32)(rate * 1000),
        SL_PCMSAMPLEFORMAT_FIXED_16,
        SL_PCMSAMPLEFORMAT_FIXED_16,
        (SLuint32)(ch > 1 ? (SL_SPEAKER_FRONT_LEFT | SL_SPEAKER_FRONT_RIGHT) : SL_SPEAKER_FRONT_CENTER),
        SL_BYTEORDER_LITTLEENDIAN
    };

    SLDataSource audioSrc = {&loc_bufq, &format_pcm};

    SLDataLocator_OutputMix loc_outmix = {SL_DATALOCATOR_OUTPUTMIX, g_outputMixObject};
    SLDataSink audioSnk = {&loc_outmix, NULL};

    const SLInterfaceID ids[3] = {SL_IID_BUFFERQUEUE, SL_IID_VOLUME, SL_IID_PLAY};
    const SLboolean req[3] = {SL_BOOLEAN_TRUE, SL_BOOLEAN_TRUE, SL_BOOLEAN_TRUE};

    res = (*g_engineEngine)->CreateAudioPlayer(g_engineEngine, &g_playerObject, &audioSrc, &audioSnk, 3, ids, req);
    if (res != SL_RESULT_SUCCESS) { gm82_opensles_shutdown(); return false; }

    res = (*g_playerObject)->Realize(g_playerObject, SL_BOOLEAN_FALSE);
    if (res != SL_RESULT_SUCCESS) { gm82_opensles_shutdown(); return false; }

    res = (*g_playerObject)->GetInterface(g_playerObject, SL_IID_PLAY, &g_playerPlay);
    if (res != SL_RESULT_SUCCESS) { gm82_opensles_shutdown(); return false; }

    res = (*g_playerObject)->GetInterface(g_playerObject, SL_IID_BUFFERQUEUE, &g_playerBufferQueue);
    if (res != SL_RESULT_SUCCESS) { gm82_opensles_shutdown(); return false; }

    res = (*g_playerObject)->GetInterface(g_playerObject, SL_IID_VOLUME, &g_playerVolume);
    if (res != SL_RESULT_SUCCESS) { gm82_opensles_shutdown(); return false; }

    res = (*g_playerBufferQueue)->RegisterCallback(g_playerBufferQueue, bqPlayerCallback, NULL);
    if (res != SL_RESULT_SUCCESS) { gm82_opensles_shutdown(); return false; }

    res = (*g_playerPlay)->SetPlayState(g_playerPlay, SL_PLAYSTATE_PLAYING);
    if (res != SL_RESULT_SUCCESS) { gm82_opensles_shutdown(); return false; }

    g_sles_initialized = true;
    /* Prime both buffer slots so the mixer callback runs immediately */
    memset(g_sles_mix_bufs, 0, sizeof(g_sles_mix_bufs));
    g_sles_buf_idx = 0;
    (*g_playerBufferQueue)->Enqueue(g_playerBufferQueue, g_sles_mix_bufs[0], (SLuint32)(SLES_BUF_FRAMES * sizeof(int16_t)));
    (*g_playerBufferQueue)->Enqueue(g_playerBufferQueue, g_sles_mix_bufs[1], (SLuint32)(SLES_BUF_FRAMES * sizeof(int16_t)));
    __android_log_print(ANDROID_LOG_INFO, LOG_TAG, "OpenSLES active (%d Hz, %d ch)", rate, ch);
    return true;
}

bool gm82_opensles_play_pcm(const int16_t *pcm_data, size_t sample_count, int loop, float volume) {
    (void)loop;
    if (!g_sles_initialized || !g_playerBufferQueue || !pcm_data || sample_count == 0)
        return false;

    if (g_playerVolume) {
        SLmillibel mb = (SLmillibel)((volume > 0.0f ? 2000.0f * (volume - 1.0f) : -10000.0f));
        if (mb > 0) mb = 0;
        if (mb < -10000) mb = -10000;
        (*g_playerVolume)->SetVolumeLevel(g_playerVolume, mb);
    }

    SLresult res = (*g_playerBufferQueue)->Enqueue(g_playerBufferQueue, pcm_data, (SLuint32)(sample_count * sizeof(int16_t)));
    return (res == SL_RESULT_SUCCESS);
}

void gm82_opensles_stop_all(void) {
    if (g_sles_initialized && g_playerBufferQueue) {
        (*g_playerBufferQueue)->Clear(g_playerBufferQueue);
        memset(g_sles_mix_bufs, 0, sizeof(g_sles_mix_bufs));
        (*g_playerBufferQueue)->Enqueue(g_playerBufferQueue, g_sles_mix_bufs[0], (SLuint32)(SLES_BUF_FRAMES * sizeof(int16_t)));
    }
}

void gm82_opensles_shutdown(void) {
    g_sles_initialized = false;
    if (g_playerPlay) {
        (*g_playerPlay)->SetPlayState(g_playerPlay, SL_PLAYSTATE_STOPPED);
    }
    if (g_playerObject) {
        (*g_playerObject)->Destroy(g_playerObject);
        g_playerObject = NULL;
        g_playerPlay = NULL;
        g_playerBufferQueue = NULL;
        g_playerVolume = NULL;
    }
    if (g_outputMixObject) {
        (*g_outputMixObject)->Destroy(g_outputMixObject);
        g_outputMixObject = NULL;
    }
    if (g_engineObject) {
        (*g_engineObject)->Destroy(g_engineObject);
        g_engineObject = NULL;
        g_engineEngine = NULL;
    }
}

bool gm82_opensles_is_active(void) {
    return g_sles_initialized;
}

#else

/* Host / stub implementation */
bool gm82_opensles_init(int sample_rate, int channels) {
    (void)sample_rate; (void)channels;
    return false;
}

bool gm82_opensles_play_pcm(const int16_t *pcm_data, size_t sample_count, int loop, float volume) {
    (void)pcm_data; (void)sample_count; (void)loop; (void)volume;
    return false;
}

void gm82_opensles_stop_all(void) {}
void gm82_opensles_shutdown(void) {}
bool gm82_opensles_is_active(void) { return false; }

#endif
