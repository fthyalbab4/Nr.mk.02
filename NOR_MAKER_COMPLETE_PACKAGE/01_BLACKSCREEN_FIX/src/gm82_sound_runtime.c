#define _POSIX_C_SOURCE 200809L
#include "gm82_sound_runtime.h"
#include "gm82_opensles.h"
#include <string.h>
#include <stdio.h>

static gm82_sound_runtime *g_sr = NULL;

void gm82_sound_set_global(gm82_sound_runtime *sr) { g_sr = sr; }

void gm82_sound_runtime_init(gm82_sound_runtime *sr) {
    memset(sr, 0, sizeof(*sr));
    sr->last_played_index = -1;
}

void gm82_sound_runtime_bind(gm82_sound_runtime *sr, const gm82_decoded_sound_list *sounds) {
    sr->sounds = sounds;
}

typedef struct {
    int kind;
    int sound_id;
    int loop;
    int priority;
    float value;
} gm82_audio_cmd;

#define AUDIO_CMD_QUEUE_CAP 64
static gm82_audio_cmd s_audio_cmd_queue[AUDIO_CMD_QUEUE_CAP];
static int s_audio_cmd_head = 0;
static int s_audio_cmd_tail = 0;
static int s_audio_cmd_count = 0;

void gm82_enqueue_sound_command(int kind, int soundId, int loop, int prio, float volume) {
    if (s_audio_cmd_count >= AUDIO_CMD_QUEUE_CAP) return;
    s_audio_cmd_queue[s_audio_cmd_tail].kind = kind;
    s_audio_cmd_queue[s_audio_cmd_tail].sound_id = soundId;
    s_audio_cmd_queue[s_audio_cmd_tail].loop = loop;
    s_audio_cmd_queue[s_audio_cmd_tail].priority = prio;
    s_audio_cmd_queue[s_audio_cmd_tail].value = volume;
    s_audio_cmd_tail = (s_audio_cmd_tail + 1) % AUDIO_CMD_QUEUE_CAP;
    s_audio_cmd_count++;
}

int gm82_dequeue_sound_command(int *out_kind, int *out_sound_id, int *out_loop, int *out_prio, float *out_value) {
    if (s_audio_cmd_count <= 0) return 0;
    if (out_kind) *out_kind = s_audio_cmd_queue[s_audio_cmd_head].kind;
    if (out_sound_id) *out_sound_id = s_audio_cmd_queue[s_audio_cmd_head].sound_id;
    if (out_loop) *out_loop = s_audio_cmd_queue[s_audio_cmd_head].loop;
    if (out_prio) *out_prio = s_audio_cmd_queue[s_audio_cmd_head].priority;
    if (out_value) *out_value = s_audio_cmd_queue[s_audio_cmd_head].value;
    s_audio_cmd_head = (s_audio_cmd_head + 1) % AUDIO_CMD_QUEUE_CAP;
    s_audio_cmd_count--;
    return 1;
}

int gm82_sound_play(gm82_sound_runtime *sr, int sound_index, int loop) {
    if (!sr) return 0;
    sr->play_count++;
    sr->last_played_index = sound_index;
    double vol = (sr->sounds && sound_index >= 0 && sound_index < sr->sounds->count) ? sr->sounds->items[sound_index].volume : 1.0;
    if (sr->queue_len < 32) {
        sr->queue[sr->queue_len].sound_index = sound_index;
        sr->queue[sr->queue_len].volume = vol;
        sr->queue[sr->queue_len].loop = loop;
        sr->queue_len++;
    }
    gm82_enqueue_sound_command(1, sound_index, loop, 0, (float)vol);
    return 1;
}

int gm82_sound_play_by_name(gm82_sound_runtime *sr, const char *name, int loop) {
    if (!sr || !sr->sounds || !name) return 0;
    for (int i = 0; i < sr->sounds->count; i++) {
        if (strcmp(sr->sounds->items[i].name, name) == 0)
            return gm82_sound_play(sr, i, loop);
    }
    return 0;
}

void gm82_sound_stop_all(gm82_sound_runtime *sr) {
    if (sr) sr->queue_len = 0;
    gm82_opensles_stop_all();
}

double gml_sound_play(double sound_index) {
    if (!g_sr) return 0;
    return gm82_sound_play(g_sr, (int)sound_index, 0) ? 1.0 : 0.0;
}

double gml_sound_loop(double sound_index) {
    if (!g_sr) return 0;
    return gm82_sound_play(g_sr, (int)sound_index, 1) ? 1.0 : 0.0;
}

double gml_sound_stop_all(void) {
    if (!g_sr) return 0;
    gm82_sound_stop_all(g_sr);
    return 1;
}

double gml_sound_stop(double sound_index) {
    (void)sound_index;
    if (!g_sr) return 0;
    /* Remove instance from queue if present */
    int idx = (int)sound_index;
    for (int i = 0; i < g_sr->queue_len; i++) {
        if (g_sr->queue[i].sound_index == idx) {
            for (int j = i; j < g_sr->queue_len - 1; j++)
                g_sr->queue[j] = g_sr->queue[j+1];
            g_sr->queue_len--;
            break;
        }
    }
    return 1;
}

double gml_sound_isplaying(double sound_index) {
    int idx = (int)sound_index;
    if (!g_sr) return 0;
    for (int i = 0; i < g_sr->queue_len; i++) {
        if (g_sr->queue[i].sound_index == idx) return 1;
    }
    return 0;
}

double gml_sound_is_playing(double sound_index) {
    return gml_sound_isplaying(sound_index);
}

double gml_sound_exists(double sound_index) {
    if (!g_sr || !g_sr->sounds) return 0;
    int i = (int)sound_index;
    return (i >= 0 && i < g_sr->sounds->count) ? 1.0 : 0.0;
}

double gml_sound_volume(double sound_index, double volume) {
    if (!g_sr || !g_sr->sounds) return 0;
    int i = (int)sound_index;
    if (i < 0 || i >= g_sr->sounds->count) return 0;
    if (volume < 0) volume = 0;
    if (volume > 1) volume = 1;
    /* stored on decoded meta – actual gain needs device */
    ((gm82_decoded_sound *)g_sr->sounds->items)[i].volume = volume;
    return 1;
}

double gml_sound_pitch(double sound_index, double pitch) {
    if (!g_sr || !g_sr->sounds) return 0;
    int i = (int)sound_index;
    if (i < 0 || i >= g_sr->sounds->count) return 0;
    if (pitch <= 0) pitch = 0.1;
    gm82_enqueue_sound_command(3, i, 0, 0, (float)pitch);
    return 1;
}

double gml_sound_pan(double sound_index, double pan) {
    if (!g_sr || !g_sr->sounds) return 0;
    int i = (int)sound_index;
    if (i < 0 || i >= g_sr->sounds->count) return 0;
    if (pan < -1.0) pan = -1.0;
    if (pan > 1.0) pan = 1.0;
    gm82_enqueue_sound_command(4, i, 0, 0, (float)pan);
    return 1;
}

double gml_sound_get_name_count(void) {
    if (!g_sr || !g_sr->sounds) return 0;
    return (double)g_sr->sounds->count;
}
