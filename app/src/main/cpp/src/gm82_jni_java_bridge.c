#define _POSIX_C_SOURCE 200809L
/*
 * JNI bridge matching Gm82Native.java
 * Compile with NDK + -I$JAVA_HOME/include when building libgm82_android.so
 *
 * Without jni.h in this environment, we provide a portable shim so the file
 * still documents the exact entry points. Real build defines GM82_HAVE_JNI.
 */
#include "gm82_jni.h"
#include "gm82_runtime.h"
#include "gm82_gl_textures.h"
#include "gm82_input.h"
#include "gm82_sprite_decode.h"
#include "gm82_background_decode.h"
#include "gm82_object_room_decode.h"
#include "gm82_sound_runtime.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#if defined(__ANDROID__) || defined(GM82_HAVE_GLES)
#include <GLES2/gl2.h>
#endif

static gm82_runtime g_bridge_rt;
static gm82_gl_atlas g_bridge_atlas;
static gm82_decoded_sprite_list g_bridge_sprites;
static gm82_decoded_background_list g_bridge_bgs;
static gm82_decoded_object_list g_bridge_objs;
static gm82_decoded_room_list g_bridge_rooms;
static gm82_sprite_group_list g_bridge_sprite_groups;
static gm82_input_state g_bridge_input;
static bool g_bridge_initialized = false;
static int g_bridge_surface_w = 640;
static int g_bridge_surface_h = 480;

bool gm82_native_init(int surface_width, int surface_height) {
    g_bridge_surface_w = surface_width > 0 ? surface_width : 640;
    g_bridge_surface_h = surface_height > 0 ? surface_height : 480;
    if (!g_bridge_initialized) {
        gm82_runtime_init(&g_bridge_rt);
        gm82_gl_atlas_init(&g_bridge_atlas);
        gm82_decoded_sprite_list_init(&g_bridge_sprites);
        gm82_decoded_background_list_init(&g_bridge_bgs);
        gm82_decoded_object_list_init(&g_bridge_objs);
        gm82_decoded_room_list_init(&g_bridge_rooms);
        g_bridge_initialized = true;
    }
    return true;
}

void gm82_native_shutdown(void) {
    if (!g_bridge_initialized) return;
    gm82_gl_atlas_free(&g_bridge_atlas);
    gm82_decoded_sprite_list_free(&g_bridge_sprites);
    gm82_decoded_background_list_free(&g_bridge_bgs);
    gm82_decoded_object_list_free(&g_bridge_objs);
    gm82_decoded_room_list_free(&g_bridge_rooms);
    gm82_sprite_group_list_free(&g_bridge_sprite_groups);
    gm82_runtime_init(&g_bridge_rt);
    g_bridge_initialized = false;
}

bool gm82_native_load_game(const char *path, char *err, int err_len) {
    if (!path) {
        if (err && err_len > 0) snprintf(err, (size_t)err_len, "null path");
        return false;
    }
    if (!g_bridge_initialized) {
        gm82_native_init(640, 480);
    }
    gm82_decode_sprites_from_file(path, &g_bridge_sprites);
    if (g_bridge_sprites.count > 0) {
        gm82_sprite_groups_build(&g_bridge_sprites, &g_bridge_sprite_groups);
        gm82_gl_upload_sprites(&g_bridge_atlas, &g_bridge_sprites);
    }
    gm82_decode_backgrounds_from_file(path, &g_bridge_bgs);
    if (g_bridge_bgs.count > 0) {
        gm82_gl_upload_backgrounds(&g_bridge_atlas, &g_bridge_bgs);
    }
    gm82_runtime_bind_assets(&g_bridge_rt, &g_bridge_objs, &g_bridge_sprites,
                             &g_bridge_bgs, &g_bridge_rooms, NULL);
    gm82_runtime_bind_sprite_groups(&g_bridge_rt, &g_bridge_sprite_groups);
    g_bridge_rt.running = 1;
    g_bridge_rt.room_width = g_bridge_surface_w;
    g_bridge_rt.room_height = g_bridge_surface_h;
    return true;
}

void gm82_native_resize(int w, int h) {
    g_bridge_surface_w = w > 0 ? w : 640;
    g_bridge_surface_h = h > 0 ? h : 480;
#if defined(__ANDROID__) || defined(GM82_HAVE_GLES)
    glViewport(0, 0, (GLsizei)g_bridge_surface_w, (GLsizei)g_bridge_surface_h);
#endif
    if (g_bridge_initialized) {
        g_bridge_rt.room_width = g_bridge_surface_w;
        g_bridge_rt.room_height = g_bridge_surface_h;
    }
}

void gm82_native_step(void) {
    if (!g_bridge_initialized || !g_bridge_rt.running) return;
    gm82_runtime_step(&g_bridge_rt);
}

void gm82_native_draw(void) {
    if (!g_bridge_initialized || !g_bridge_rt.running) return;
#if defined(__ANDROID__) || defined(GM82_HAVE_GLES)
    glClearColor(0.12f, 0.12f, 0.18f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    if (g_bridge_atlas.backgrounds && g_bridge_atlas.background_count > 0) {
        uint32_t bg_tex = g_bridge_atlas.backgrounds[0].tex_id;
        if (bg_tex != 0) {
            gm82_gl_draw_texture(bg_tex, -1.0f, -1.0f, 2.0f, 2.0f);
        }
    }

    float vx = (float)(g_bridge_rt.view_enabled ? g_bridge_rt.view_x : 0);
    float vy = (float)(g_bridge_rt.view_enabled ? g_bridge_rt.view_y : 0);
    float rw = (float)(g_bridge_rt.view_enabled && g_bridge_rt.view_w > 0 ? g_bridge_rt.view_w :
                       (g_bridge_rt.room_width > 0 ? g_bridge_rt.room_width : 640));
    float rh = (float)(g_bridge_rt.view_enabled && g_bridge_rt.view_h > 0 ? g_bridge_rt.view_h :
                       (g_bridge_rt.room_height > 0 ? g_bridge_rt.room_height : 480));

    for (int i = 0; i < g_bridge_rt.instance_count; i++) {
        gm82_instance *inst = &g_bridge_rt.instances[i];
        if (!inst->alive || !inst->visible) continue;
        int spr = inst->sprite_index;
        if (spr >= 0 && g_bridge_atlas.sprites && spr < g_bridge_atlas.sprite_count) {
            uint32_t tex = g_bridge_atlas.sprites[spr].tex_id;
            float sw = (float)g_bridge_atlas.sprites[spr].width;
            float sh = (float)g_bridge_atlas.sprites[spr].height;
            if (sw <= 0) sw = 32.0f;
            if (sh <= 0) sh = 32.0f;
            float ndc_x = (((float)inst->x - vx) / rw) * 2.0f - 1.0f;
            float ndc_y = 1.0f - ((((float)inst->y - vy) + sh) / rh) * 2.0f;
            float ndc_w = (sw / rw) * 2.0f;
            float ndc_h = (sh / rh) * 2.0f;
            gm82_gl_draw_texture(tex, ndc_x, ndc_y, ndc_w, ndc_h);
        }
    }
#endif
}

void gm82_native_key_down(int vk) {
    if (g_bridge_initialized) {
        gm82_input_key_down(&g_bridge_input, vk);
    }
}

void gm82_native_key_up(int vk) {
    if (g_bridge_initialized) {
        gm82_input_key_up(&g_bridge_input, vk);
    }
}

void gm82_native_touch(int x, int y, int action) {
    (void)x; (void)y;
    if (action == 0) {
        gm82_native_key_down(32);
    } else if (action == 1) {
        gm82_native_key_up(32);
    }
}

int gm82_native_is_running(void) {
    return (g_bridge_initialized && g_bridge_rt.running) ? 1 : 0;
}

int gm82_native_room_width(void) {
    return g_bridge_initialized ? g_bridge_rt.room_width : 640;
}

int gm82_native_room_height(void) {
    return g_bridge_initialized ? g_bridge_rt.room_height : 480;
}

#ifdef GM82_HAVE_JNI
#include <jni.h>

static char *jstring_to_utf8(JNIEnv *env, jstring js) {
    if (!js) return NULL;
    const char *s = (*env)->GetStringUTFChars(env, js, NULL);
    if (!s) return NULL;
    char *out = strdup(s);
    (*env)->ReleaseStringUTFChars(env, js, s);
    return out;
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_gm82_Gm82Native_nativeInit(JNIEnv *env, jclass cls, jint w, jint h) {
    (void)env; (void)cls;
    return gm82_native_init((int)w, (int)h) ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT void JNICALL
Java_com_normaker_gm82_Gm82Native_nativeShutdown(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    gm82_native_shutdown();
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_gm82_Gm82Native_nativeLoadGame(JNIEnv *env, jclass cls, jstring path) {
    (void)cls;
    char *p = jstring_to_utf8(env, path);
    char err[256];
    jboolean ok = JNI_FALSE;
    if (p) {
        ok = gm82_native_load_game(p, err, sizeof(err)) ? JNI_TRUE : JNI_FALSE;
        free(p);
    }
    return ok;
}

JNIEXPORT void JNICALL
Java_com_normaker_gm82_Gm82Native_nativeResize(JNIEnv *env, jclass cls, jint w, jint h) {
    (void)env; (void)cls;
    gm82_native_resize((int)w, (int)h);
}

JNIEXPORT void JNICALL
Java_com_normaker_gm82_Gm82Native_nativeStep(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    gm82_native_step();
}

JNIEXPORT void JNICALL
Java_com_normaker_gm82_Gm82Native_nativeDraw(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    gm82_native_draw(); /* STUB until GLES */
}

JNIEXPORT void JNICALL
Java_com_normaker_gm82_Gm82Native_nativeKeyDown(JNIEnv *env, jclass cls, jint vk) {
    (void)env; (void)cls;
    gm82_native_key_down((int)vk);
}

JNIEXPORT void JNICALL
Java_com_normaker_gm82_Gm82Native_nativeKeyUp(JNIEnv *env, jclass cls, jint vk) {
    (void)env; (void)cls;
    gm82_native_key_up((int)vk);
}

JNIEXPORT void JNICALL
Java_com_normaker_gm82_Gm82Native_nativeTouch(JNIEnv *env, jclass cls, jint x, jint y, jint action) {
    (void)env; (void)cls;
    gm82_native_touch((int)x, (int)y, (int)action);
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_gm82_Gm82Native_nativeIsRunning(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return gm82_native_is_running() ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT jint JNICALL
Java_com_normaker_gm82_Gm82Native_nativeRoomWidth(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return (jint)gm82_native_room_width();
}

JNIEXPORT jint JNICALL
Java_com_normaker_gm82_Gm82Native_nativeRoomHeight(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return (jint)gm82_native_room_height();
}

JNIEXPORT jint JNICALL
Java_com_normaker_gm82_Gm82Native_nativePollAudioCommand(JNIEnv *env, jclass cls, jintArray outInts, jfloatArray outFloats) {
    (void)cls;
    int kind = 0, sound_id = 0, loop = 0, prio = 0;
    float val = 0.0f;
    int has = gm82_dequeue_sound_command(&kind, &sound_id, &loop, &prio, &val);
    if (!has) return 0;
    if (outInts && (*env)->GetArrayLength(env, outInts) >= 4) {
        jint ibuf[4] = {(jint)kind, (jint)sound_id, (jint)loop, (jint)prio};
        (*env)->SetIntArrayRegion(env, outInts, 0, 4, ibuf);
    }
    if (outFloats && (*env)->GetArrayLength(env, outFloats) >= 1) {
        jfloat fbuf[1] = {(jfloat)val};
        (*env)->SetFloatArrayRegion(env, outFloats, 0, 1, fbuf);
    }
    return (jint)kind;
}

#endif /* GM82_HAVE_JNI */
