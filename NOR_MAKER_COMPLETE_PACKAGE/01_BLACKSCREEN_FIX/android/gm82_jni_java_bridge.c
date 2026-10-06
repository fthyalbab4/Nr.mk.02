/*
 * JNIEXPORT wrappers – map Java Gm82Native / MainActivity to gm82_native_*.
 */
#include "gm82_jni.h"
#include <jni.h>
#include <stdlib.h>
#include <string.h>

static jbyteArray frame_to_jbyteArray(JNIEnv *env) {
    int w = 0, h = 0;
    const uint8_t *px = gm82_native_frame_rgba(&w, &h);
    if (!px || w < 1 || h < 1) return NULL;
    jsize n = (jsize)((size_t)w * (size_t)h * 4u);
    jbyteArray arr = (*env)->NewByteArray(env, n);
    if (!arr) return NULL;
    (*env)->SetByteArrayRegion(env, arr, 0, n, (const jbyte *)px);
    return arr;
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_gm82_Gm82Native_init(JNIEnv *env, jclass cls, jint w, jint h) {
    (void)env; (void)cls;
    return gm82_native_init((int)w, (int)h) ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT void JNICALL Java_com_normaker_gm82_Gm82Native_shutdown(JNIEnv *env, jclass cls) {
    (void)env; (void)cls; gm82_native_shutdown();
}
JNIEXPORT jboolean JNICALL
Java_com_normaker_gm82_Gm82Native_loadGame(JNIEnv *env, jclass cls, jstring path) {
    (void)cls;
    if (!path) return JNI_FALSE;
    const char *p = (*env)->GetStringUTFChars(env, path, NULL);
    char err[256];
    int ok = gm82_native_load_game(p, err, (int)sizeof err);
    (*env)->ReleaseStringUTFChars(env, path, p);
    return ok ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT void JNICALL Java_com_normaker_gm82_Gm82Native_resize(JNIEnv *env, jclass cls, jint w, jint h) {
    (void)env; (void)cls; gm82_native_resize((int)w, (int)h);
}
JNIEXPORT void JNICALL Java_com_normaker_gm82_Gm82Native_step(JNIEnv *env, jclass cls) {
    (void)env; (void)cls; gm82_native_step();
}
JNIEXPORT void JNICALL Java_com_normaker_gm82_Gm82Native_draw(JNIEnv *env, jclass cls) {
    (void)env; (void)cls; gm82_native_draw();
}
JNIEXPORT void JNICALL Java_com_normaker_gm82_Gm82Native_tick(JNIEnv *env, jclass cls) {
    (void)env; (void)cls; gm82_native_tick();
}
JNIEXPORT jbyteArray JNICALL Java_com_normaker_gm82_Gm82Native_getFrameRgba(JNIEnv *env, jclass cls) {
    (void)cls; return frame_to_jbyteArray(env);
}
JNIEXPORT jboolean JNICALL Java_com_normaker_gm82_Gm82Native_isFrameReady(JNIEnv *env, jclass cls) {
    (void)env; (void)cls; return gm82_native_frame_ready() ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT jboolean JNICALL Java_com_normaker_gm82_Gm82Native_isRunning(JNIEnv *env, jclass cls) {
    (void)env; (void)cls; return gm82_native_is_running() ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT jint JNICALL Java_com_normaker_gm82_Gm82Native_roomWidth(JNIEnv *env, jclass cls) {
    (void)env; (void)cls; return (jint)gm82_native_room_width();
}
JNIEXPORT jint JNICALL Java_com_normaker_gm82_Gm82Native_roomHeight(JNIEnv *env, jclass cls) {
    (void)env; (void)cls; return (jint)gm82_native_room_height();
}
JNIEXPORT void JNICALL Java_com_normaker_gm82_Gm82Native_keyDown(JNIEnv *env, jclass cls, jint vk) {
    (void)env; (void)cls; gm82_native_key_down((int)vk);
}
JNIEXPORT void JNICALL Java_com_normaker_gm82_Gm82Native_keyUp(JNIEnv *env, jclass cls, jint vk) {
    (void)env; (void)cls; gm82_native_key_up((int)vk);
}
JNIEXPORT void JNICALL Java_com_normaker_gm82_Gm82Native_touch(JNIEnv *env, jclass cls, jint x, jint y, jint a) {
    (void)env; (void)cls; gm82_native_touch((int)x, (int)y, (int)a);
}

/* Legacy MainActivity symbols (match shipped APK SO names) */
JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeStep(JNIEnv *env, jobject thiz) {
    (void)env; (void)thiz; gm82_native_step();
}
JNIEXPORT jbyteArray JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeRenderBitmap(JNIEnv *env, jobject thiz) {
    (void)thiz;
    gm82_native_draw();
    return frame_to_jbyteArray(env);
}
JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeCreate(JNIEnv *env, jobject thiz, jint w, jint h) {
    (void)env; (void)thiz; gm82_native_init((int)w, (int)h);
}
JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeDestroy(JNIEnv *env, jobject thiz) {
    (void)env; (void)thiz; gm82_native_shutdown();
}
JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeKey(JNIEnv *env, jobject thiz, jint vk, jboolean down) {
    (void)env; (void)thiz;
    if (down) gm82_native_key_down((int)vk); else gm82_native_key_up((int)vk);
}
