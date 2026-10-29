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
#include "gm82_materialize.h"
#include "gm82_actions.h"
#include "gm82_events.h"
#include "gm82_gmk_reader.h"
#include "gm82_script.h"
#include "gm82_sound_runtime.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

#if defined(__ANDROID__) || defined(GM82_HAVE_GLES)
#include <GLES2/gl2.h>
#endif

static gm82_runtime g_bridge_rt;
static gm82_gl_atlas g_bridge_atlas;
static gm82_decoded_sprite_list g_bridge_sprites;
static gm82_decoded_background_list g_bridge_bgs;
static gm82_decoded_object_list g_bridge_objs;
static gm82_decoded_object_list g_bridge_struct_objs;
static gm82_decoded_room_list g_bridge_rooms;
static gm82_sprite_group_list g_bridge_sprite_groups;
static gm82_input_state g_bridge_input;
static gm82_action_table g_bridge_actions;
static bool g_bridge_actions_ready = false;
static bool g_bridge_initialized = false;
static int g_bridge_surface_w = 640;
static int g_bridge_surface_h = 480;
static uint8_t *g_bridge_frame_rgba = NULL;
static size_t g_bridge_frame_capacity = 0;
#define GM82_NATIVE_MAX_FRAME_PIXELS ((size_t)16777216u)
static void bridge_apply_view_size(void);


bool gm82_native_init(int surface_width, int surface_height) {
    g_bridge_surface_w = surface_width > 0 ? surface_width : 640;
    g_bridge_surface_h = surface_height > 0 ? surface_height : 480;
    if (!g_bridge_initialized) {
        gm82_runtime_init(&g_bridge_rt);
        gm82_gl_atlas_init(&g_bridge_atlas);
        gm82_decoded_sprite_list_init(&g_bridge_sprites);
        gm82_decoded_background_list_init(&g_bridge_bgs);
        gm82_decoded_object_list_init(&g_bridge_objs);
        gm82_decoded_object_list_init(&g_bridge_struct_objs);
        gm82_decoded_room_list_init(&g_bridge_rooms);
        gm82_input_init(&g_bridge_input);
        gm82_input_bind_global(&g_bridge_input);
        memset(&g_bridge_actions, 0, sizeof(g_bridge_actions));
        g_bridge_initialized = true;
    }
    return true;
}

void gm82_native_shutdown(void) {
    if (!g_bridge_initialized) return;
    free(g_bridge_frame_rgba);
    g_bridge_frame_rgba = NULL;
    g_bridge_frame_capacity = 0;
    gm82_gl_atlas_free(&g_bridge_atlas);
    gm82_decoded_sprite_list_free(&g_bridge_sprites);
    gm82_decoded_background_list_free(&g_bridge_bgs);
    gm82_decoded_object_list_free(&g_bridge_objs);
    gm82_decoded_object_list_free(&g_bridge_struct_objs);
    gm82_decoded_room_list_free(&g_bridge_rooms);
    gm82_sprite_group_list_free(&g_bridge_sprite_groups);
    if (g_bridge_actions_ready) {
        gm82_action_table_free(&g_bridge_actions);
        g_bridge_actions_ready = false;
    }
    gm82_runtime_cleanup(&g_bridge_rt);
    memset(&g_bridge_rt, 0, sizeof(g_bridge_rt));
    g_bridge_initialized = false;
}

bool gm82_native_load_game(const char *path, char *err, int err_len) {
    if (!path) {
        if (err && err_len > 0) snprintf(err, (size_t)err_len, "null path");
        return false;
    }
    FILE *f = fopen(path, "rb");
    if (!f) {
        if (err && err_len > 0) snprintf(err, (size_t)err_len, "Unable to open project file");
        return false;
    }
    if (fseek(f, 0, SEEK_END) != 0) {
        fclose(f);
        if (err && err_len > 0) snprintf(err, (size_t)err_len, "Unable to seek project file");
        return false;
    }
    long file_size = ftell(f);
    if (file_size <= 16 || file_size > 80L * 1024L * 1024L || fseek(f, 0, SEEK_SET) != 0) {
        fclose(f);
        if (err && err_len > 0) snprintf(err, (size_t)err_len, "Unsupported project file size");
        return false;
    }
    uint8_t *data = (uint8_t *)malloc((size_t)file_size);
    if (!data || fread(data, 1, (size_t)file_size, f) != (size_t)file_size) {
        free(data);
        fclose(f);
        if (err && err_len > 0) snprintf(err, (size_t)err_len, "Unable to read project file");
        return false;
    }
    fclose(f);

    gm82_gmk_load_result gr = gm82_gmk_load_from_memory(data, (size_t)file_size);
    if (!gr.ok || !gr.ir) {
        if (err && err_len > 0)
            snprintf(err, (size_t)err_len, "%s", gr.error[0] ? gr.error : "Invalid GMK project");
        if (gr.ir) gm82_project_ir_free(gr.ir);
        free(data);
        return false;
    }

    int surface_w = g_bridge_surface_w > 0 ? g_bridge_surface_w : 640;
    int surface_h = g_bridge_surface_h > 0 ? g_bridge_surface_h : 480;
    if (g_bridge_initialized) gm82_native_shutdown();
    gm82_native_init(surface_w, surface_h);

    gm82_decode_sprites_from_gmk(data, (size_t)file_size, &g_bridge_sprites);
    if (g_bridge_sprites.count > 0) {
        gm82_sprite_groups_build(&g_bridge_sprites, &g_bridge_sprite_groups);
        gm82_gl_upload_sprites(&g_bridge_atlas, &g_bridge_sprites);
    }
    gm82_decode_backgrounds_from_gmk(data, (size_t)file_size, &g_bridge_bgs);
    if (g_bridge_bgs.count > 0) {
        gm82_gl_upload_backgrounds(&g_bridge_atlas, &g_bridge_bgs);
    }
    gm82_decode_objects_from_gmk(data, (size_t)file_size, &g_bridge_objs);
    gm82_decode_rooms_from_gmk(data, (size_t)file_size, &g_bridge_rooms);

    gm82_materialize_options opts = gm82_materialize_default_options();
    gm82_materialize_all(gr.ir, &opts);
    const gm82_decoded_object_list *materialized_objects = gm82_materialize_get_objects();
    if (materialized_objects && materialized_objects->count > g_bridge_objs.count) {
        fprintf(stderr, "GM82_BIND objects materialize=%d bridge=%d sprites_ir=%d rooms_ir=%d\n",
                materialized_objects->count, g_bridge_objs.count,
                gr.ir->sprite_count, gr.ir->room_count);
    } else {
        fprintf(stderr, "GM82_BIND objects bridge=%d ir_sprites=%d\n",
                g_bridge_objs.count, gr.ir->sprite_count);
    }
    if (g_bridge_actions_ready) {
        gm82_action_table_free(&g_bridge_actions);
        g_bridge_actions_ready = false;
    }
    /* Drag-and-drop events and GML code events both live in the raw file, so they
       are scanned from the bytes before the buffer is released. Without these two
       calls the runtime only sees object/room data and every event is dead. */
    /* Structured walk first: it yields the real per-object event/action records,
       including the GML blocks of "execute code" actions. The byte scanner is a
       fallback only, because for most GMK8 files it returns one pseudo object. */
    int structured_objs = gm82_objects_parse_gmk8(data, (size_t)file_size, &g_bridge_struct_objs);
    int structured = gm82_actions_parse_gmk8(data, (size_t)file_size, &g_bridge_actions);
    int used_structured = structured > 0;
    if (!used_structured)
        gm82_actions_scan_gmk(data, (size_t)file_size, &g_bridge_actions);
    else
        fprintf(stderr, "GM82_ACTIONS structured objects=%d\n", structured);
    /* The scanner is a byte-level heuristic: for many GMK8 files it returns a
       single pseudo-object with unrelated actions, and binding that makes every
       object fire actions it does not own (observed: whole rooms destroyed on the
       first frame). Only bind it when it actually names objects from this project. */
    {
        const gm82_decoded_object_list *scan_objs = gm82_materialize_get_objects();
        int trustworthy = 0;
        for (int i = 0; i < g_bridge_actions.count && !trustworthy; i++) {
            const char *an = g_bridge_actions.objects[i].object_name;
            if (!an[0]) continue;
            for (int o = 0; scan_objs && o < scan_objs->count; o++) {
                if (strcmp(an, scan_objs->items[o].name) == 0) { trustworthy = 1; break; }
            }
        }
        if (used_structured) trustworthy = 1;
        if (!trustworthy) {
            fprintf(stderr, "GM82_ACTIONS ignored heuristic table (%d entries, no object match)\n",
                    g_bridge_actions.count);
            gm82_action_table_free(&g_bridge_actions);
            memset(&g_bridge_actions, 0, sizeof(g_bridge_actions));
        } else {
            g_bridge_actions_ready = true;
            fprintf(stderr, "GM82_ACTIONS bound %d object tables\n", g_bridge_actions.count);
        }
    }
    /* With a structured table the code actions are authoritative; running the
       byte-scan autobind as well would execute the same GML twice. */
    if (!used_structured)
        gm82_events_autobind_gml_from_gmk(data, (size_t)file_size);

    gm82_project_ir_free(gr.ir);
    free(data);

    {
        const gm82_decoded_object_list *objs = &g_bridge_objs;
        if (structured_objs > 0) {
            /* Room instances index the project's object order; the decoded list is
               authoritative, the heuristic one can invent or drop entries. */
            objs = &g_bridge_struct_objs;
            fprintf(stderr, "GM82_OBJECTS structured=%d\n", structured_objs);
        } else if (materialized_objects && materialized_objects->count > 0) {
            objs = materialized_objects;
        }
        const gm82_script_list *sc = gm82_materialize_get_scripts();
        for (int k = 0; k < objs->count; k++)
        fprintf(stderr, "GM82_OBJECT_ORDER %d %s sprite=%d\n", k, objs->items[k].name, objs->items[k].sprite_index);
    gm82_runtime_bind_assets(&g_bridge_rt, objs, &g_bridge_sprites,
                                 &g_bridge_bgs, &g_bridge_rooms, &g_bridge_actions);
        if (sc && sc->count > 0)
            gm82_runtime_bind_scripts(&g_bridge_rt, sc);
    }
    gm82_runtime_bind_sprite_groups(&g_bridge_rt, &g_bridge_sprite_groups);

    if (g_bridge_rooms.count > 0) {
        gm82_runtime_goto_room(&g_bridge_rt, 0);
        bridge_apply_view_size();
    } else {
        g_bridge_rt.running = 1;
        g_bridge_rt.room_width = g_bridge_surface_w;
        g_bridge_rt.room_height = g_bridge_surface_h;
        bridge_apply_view_size();
    }
    return true;
}

/* The surface is the display window; the room keeps its own size and the camera
 * scrolls inside it. Sizing the room to the surface (or the frame to the room)
 * makes every room larger than the window render as a strip of empty space. */
static void bridge_apply_view_size(void) {
    if (!g_bridge_initialized) return;
    double vw = (double)g_bridge_surface_w;
    double vh = (double)g_bridge_surface_h;
    if (g_bridge_rt.room_width > 0 && vw > (double)g_bridge_rt.room_width) vw = (double)g_bridge_rt.room_width;
    if (g_bridge_rt.room_height > 0 && vh > (double)g_bridge_rt.room_height) vh = (double)g_bridge_rt.room_height;
    if (vw < 1) vw = 1;
    if (vh < 1) vh = 1;
    g_bridge_rt.view_enabled = 1;
    g_bridge_rt.view_w = vw;
    g_bridge_rt.view_h = vh;
    if (g_bridge_rt.view_x + g_bridge_rt.view_w > (double)g_bridge_rt.room_width)
        g_bridge_rt.view_x = (double)g_bridge_rt.room_width - g_bridge_rt.view_w;
    if (g_bridge_rt.view_x < 0) g_bridge_rt.view_x = 0;
    if (g_bridge_rt.view_y + g_bridge_rt.view_h > (double)g_bridge_rt.room_height)
        g_bridge_rt.view_y = (double)g_bridge_rt.room_height - g_bridge_rt.view_h;
    if (g_bridge_rt.view_y < 0) g_bridge_rt.view_y = 0;
}

void gm82_native_resize(int w, int h) {
    g_bridge_surface_w = w > 0 ? w : 640;
    g_bridge_surface_h = h > 0 ? h : 480;
#if defined(__ANDROID__) || defined(GM82_HAVE_GLES)
    glViewport(0, 0, (GLsizei)g_bridge_surface_w, (GLsizei)g_bridge_surface_h);
#endif
    bridge_apply_view_size();
}

void gm82_native_step(void) {
    if (!g_bridge_initialized || !g_bridge_rt.running) return;
    gm82_runtime_step(&g_bridge_rt);
}

void gm82_native_step_dt(double dt) {
    if (!g_bridge_initialized || !g_bridge_rt.running) return;
    gm82_runtime_step_dt(&g_bridge_rt, dt);
}

void gm82_native_tick(void) {
    gm82_native_step();
}

int gm82_native_frame_ready(void) {
    return (g_bridge_initialized && g_bridge_rt.running) ? 1 : 0;
}

const uint8_t *gm82_native_frame_rgba(int *w, int *h) {
    /* The frame is what the camera sees, not the whole room: the renderer already
       offsets everything by view_x/view_y, so a room-sized buffer would draw a
       window of content inside a mostly empty image. */
    int width = (int)(g_bridge_rt.view_w + 0.5);
    int height = (int)(g_bridge_rt.view_h + 0.5);
    if (width <= 0) width = g_bridge_surface_w > 0 ? g_bridge_surface_w : 640;
    if (height <= 0) height = g_bridge_surface_h > 0 ? g_bridge_surface_h : 480;
    if (g_bridge_rt.room_width > 0 && width > g_bridge_rt.room_width) width = g_bridge_rt.room_width;
    if (g_bridge_rt.room_height > 0 && height > g_bridge_rt.room_height) height = g_bridge_rt.room_height;
    if (w) *w = width;
    if (h) *h = height;
    if (!g_bridge_initialized || !g_bridge_rt.running || width <= 0 || height <= 0)
        return NULL;
    if ((size_t)width > SIZE_MAX / (size_t)height) return NULL;
    size_t pixels = (size_t)width * (size_t)height;
    if (pixels > GM82_NATIVE_MAX_FRAME_PIXELS || pixels > SIZE_MAX / 4u) return NULL;
    size_t needed = pixels * 4u;
    if (needed > g_bridge_frame_capacity) {
        uint8_t *frame = (uint8_t *)realloc(g_bridge_frame_rgba, needed);
        if (!frame) return NULL;
        g_bridge_frame_rgba = frame;
        g_bridge_frame_capacity = needed;
    }
    if (!gm82_runtime_draw(&g_bridge_rt, g_bridge_frame_rgba, width, height))
        return NULL;
    return g_bridge_frame_rgba;
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
    /* Mouse position only — virtual pad keys come from Java Gm82SurfaceView */
    if (!g_bridge_initialized) return;
    gm82_input_set_mouse(&g_bridge_input, x, y);
    if (action == 0 || action == 5) gm82_input_mouse_down(&g_bridge_input, 0);
    else if (action == 1 || action == 6 || action == 3) gm82_input_mouse_up(&g_bridge_input, 0);
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

int gm82_native_instance_snapshot(gm82_instance *out, int max_count) {
    if (!out || max_count <= 0) return 0;
    if (!g_bridge_initialized) return -1;
    gm82_instance *ptrs[GM82_MAX_INSTANCES];
    int n = gm82_runtime_get_active_snapshot(&g_bridge_rt, ptrs);
    if (n < 0) return -1;
    if (n > max_count) n = max_count;
    for (int i = 0; i < n; i++) out[i] = *ptrs[i];
    return n;
}

int gm82_native_runtime_info(gm82_native_runtime_info_t *out) {
    if (!out) return 0;
    if (!g_bridge_initialized) return -1;
    out->frame = (int)g_bridge_rt.frame;
    out->current_room = (int)g_bridge_rt.current_room;
    out->room_count = g_bridge_rooms.count;
    out->instance_count = (int)g_bridge_rt.instance_count;
    out->room_width = (int)g_bridge_rt.room_width;
    out->room_height = (int)g_bridge_rt.room_height;
    out->room_speed = (int)g_bridge_rt.room_speed;
    out->running = (int)g_bridge_rt.running;
    return 1;
}

int gm82_native_frame_count(void) {
    if (!g_bridge_initialized) return -1;
    return (int)g_bridge_rt.frame;
}

int gm82_native_room_speed(void) {
    return g_bridge_initialized && g_bridge_rt.room_speed > 0
        ? g_bridge_rt.room_speed : 30;
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
Java_com_normaker_gm82_Gm82Native_nativeStepDt(JNIEnv *env, jclass cls, jdouble dt) {
    (void)env; (void)cls;
    gm82_native_step_dt((double)dt);
}

JNIEXPORT void JNICALL
Java_com_normaker_gm82_Gm82Native_nativeDraw(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    gm82_native_draw();
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

const char *gm82_native_object_name(int index) {
    if (!g_bridge_initialized || !g_bridge_rt.objects) return NULL;
    if (index < 0 || index >= g_bridge_rt.objects->count) return NULL;
    const char *n = g_bridge_rt.objects->items[index].name;
    return (n && n[0]) ? n : NULL;
}
