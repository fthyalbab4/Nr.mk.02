/* Phase 6+code: track ids + feed software mixer (PCM may be silence if no decode) */
static gm82_audio_mixer g_mixer;
static int g_mixer_inited = 0;
static int16_t g_click_pcm[512];
static int g_sound_channels[64];

static void ensure_mixer(void) {
    if (g_mixer_inited) return;
    gm82_audio_mixer_init(&g_mixer, 22050);
    for (int i = 0; i < 512; i++) {
        int16_t v = (i < 32) ? (int16_t)((i * 800) - 12800) : 0;
        g_click_pcm[i] = v;
    }
    for (int i = 0; i < 64; i++) g_sound_channels[i] = -1;
    g_mixer_inited = 1;
}

double gml_sound_play(double sound_index) {
    ensure_mixer();
    int id = (int)sound_index;
    if (g_sound_playing_n < 64) g_sound_playing[g_sound_playing_n++] = id;
    int ch = gm82_audio_mixer_play(&g_mixer, g_click_pcm, 512, 0.4f, 0);
    if (id >= 0 && id < 64) g_sound_channels[id] = ch;
    return 1;
}
double gml_sound_loop(double sound_index) {
    ensure_mixer();
    int id = (int)sound_index;
    if (g_sound_playing_n < 64) g_sound_playing[g_sound_playing_n++] = id;
    int ch = gm82_audio_mixer_play(&g_mixer, g_click_pcm, 512, 0.3f, 1);
    if (id >= 0 && id < 64) g_sound_channels[id] = ch;
    return 1;
}
double gml_sound_isplaying(double sound_index) {
    ensure_mixer();
    int id = (int)sound_index;
    if (id >= 0 && id < 64 && g_sound_channels[id] >= 0 &&
        gm82_audio_mixer_is_channel_active(&g_mixer, g_sound_channels[id]))
        return 1.0;
    for (int i = 0; i < g_sound_playing_n; i++)
        if (g_sound_playing[i] == id) return 1.0;
    return 0.0;
}
double gml_sound_stop(double sound_index) {
    ensure_mixer();
    int id = (int)sound_index;
    if (id >= 0 && id < 64 && g_sound_channels[id] >= 0) {
        int ch = g_sound_channels[id];
        if (ch >= 0 && ch < GM82_MIXER_CHANNELS)
            g_mixer.channels[ch].active = 0;
        g_sound_channels[id] = -1;
    }
    int w = 0;
    for (int i = 0; i < g_sound_playing_n; i++) {
        if (g_sound_playing[i] == id) continue;
        g_sound_playing[w++] = g_sound_playing[i];
    }
    g_sound_playing_n = w;
    return 1;
}
double gml_sound_stop_all(void) {
    ensure_mixer();
    gm82_audio_mixer_stop_all(&g_mixer);
    g_sound_playing_n = 0;
    for (int i = 0; i < 64; i++) g_sound_channels[i] = -1;
    return 1;
}

void gm82_audio_host_mix(int16_t *out, size_t frames) {
    ensure_mixer();
    gm82_audio_mixer_mix_s16(&g_mixer, out, frames);
}
