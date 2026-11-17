#include <jni.h>
#include <android/log.h>
#include <android/bitmap.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <zlib.h>
#include "gm82_gmk_format.h"
#include "gm82_sprite_decode.h"
#include "gm82_background_decode.h"
#include "gm82_object_room_decode.h"
#include "gm82_project_ir.h"
#include "gm82_materialize.h"
#include "gm82_runtime_guard.h"
#include "gm82_runtime.h"
#include "gm82_input.h"
#include "gm82_events.h"
#include "gm82_gml_builtins.h"
#include "gm82_actions.h"
#include "gm82_script.h"
#include "gm82_sound_runtime.h"
#include "gm82_sound_decode.h"
#include "gm82_gl_textures.h"
#include "gm82_opensles.h"
#include "gm82_diagnostics.h"
#include "gm82_ged_extensions.h"
#include "gm82_gmk_stream.h"
#include "gm82_text_reader.h"
#include "gm82_text_materialize.h"
#include "gm82_text_runtime_bridge.h"
#include "gm82_path.h"
#include "gm82_timeline.h"
#include "gm82_gml_eval.h"
#include <GLES2/gl2.h>

#define LOG_TAG "NOR_NATIVE"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#define MAX_INSTANCES 1024
#define MAX_RESOURCES 512
#define MAX_EVENTS 512
#define MAX_CODES 128
#define MAX_SOUND_COMMANDS 64
#define MAX_OBJECTS 512
#define MAX_SCRIPTS 256
#define MAX_BITMAPS 1024
/* Reference-backed file/ROM format implementations. */
extern double nor_import_format_native(const char *path);
extern double nor_validate_rom_native(const char *path, double kind);
extern double nor_export_nes_native(const char *project, const char *output);
extern double nor_export_gbc_native(const char *project, const char *output);
extern double nor_export_gba_native(const char *project, const char *output);
extern double nor_export_pnor_native(const char *title, const char *output);
extern double nor_export_nor_native(const char *title, const char *output);
extern double nor_import_gmx_gmz_native(const char *path, const char *output_dir);
extern double nor_export_gmx_gmz_native(const char *source_dir, const char *output, const char *kind);
extern double nor_export_gmk_raw_native(const char *source, const char *output);
extern double nor_export_gmx_semantic_native(const char *source_dir, const char *output_dir, const char *project_name);

/* --- Global Full Native Engine State --- */
static gm82_runtime g_engine_rt;
static gm82_decoded_sprite_list g_engine_sprites;
static gm82_decoded_background_list g_engine_bgs;
static gm82_decoded_object_list g_engine_objs;
static gm82_decoded_room_list g_engine_rooms;
static gm82_sprite_group_list g_engine_sprite_groups;
static gm82_action_table g_engine_actions;
static gm82_script_list g_engine_scripts;
static gm82_decoded_sound_list g_engine_sounds;
static gm82_sound_runtime g_engine_sound_rt;
static gm82_input_state g_engine_input;
static int g_engine_loaded = 0;
static gm82_project_ir *g_engine_ir = NULL;
static gm82_text_runtime_bundle g_engine_bundle;
static int g_using_bundle = 0;
static gm82_gl_atlas g_gl_atlas;
static uint32_t g_gl_stale_tex[4096];
static int g_gl_stale_count = 0;
static uint8_t *g_gles_rgba = NULL;
static size_t g_gles_rgba_cap = 0;

static const gm82_decoded_sprite_list *active_sprites(void) {
    return g_using_bundle ? &g_engine_bundle.sprites : &g_engine_sprites;
}
static const gm82_decoded_background_list *active_bgs(void) {
    return g_using_bundle ? &g_engine_bundle.backgrounds : &g_engine_bgs;
}
static const gm82_decoded_object_list *active_objs(void) {
    return g_using_bundle ? &g_engine_bundle.objects : &g_engine_objs;
}
static const gm82_decoded_room_list *active_rooms(void) {
    return g_using_bundle ? &g_engine_bundle.rooms : &g_engine_rooms;
}
static const gm82_sprite_group_list *active_sprite_groups(void) {
    return g_using_bundle ? &g_engine_bundle.sprite_groups : &g_engine_sprite_groups;
}
static const gm82_decoded_sound_list *active_sounds(void) {
    return g_using_bundle ? &g_engine_bundle.sounds : &g_engine_sounds;
}

static void queue_gl_atlas_cleanup(void) {
    if (g_gl_atlas.sprites) {
        for (int i = 0; i < g_gl_atlas.sprite_count && g_gl_stale_count < 4096; i++) {
            if (g_gl_atlas.sprites[i].tex_id != 0)
                g_gl_stale_tex[g_gl_stale_count++] = g_gl_atlas.sprites[i].tex_id;
        }
    }
    if (g_gl_atlas.backgrounds) {
        for (int i = 0; i < g_gl_atlas.background_count && g_gl_stale_count < 4096; i++) {
            if (g_gl_atlas.backgrounds[i].tex_id != 0)
                g_gl_stale_tex[g_gl_stale_count++] = g_gl_atlas.backgrounds[i].tex_id;
        }
    }
    gm82_gl_invalidate_handles(&g_gl_atlas);
}

static void unload_engine_project(void) {
    queue_gl_atlas_cleanup();
    if (g_engine_loaded) {
        gm82_runtime_cleanup(&g_engine_rt);
    }
    gm82_events_clear_gml_bindings();
    gm82_path_bind(NULL);
    gm82_timeline_bind(NULL);
    gm82_scripts_bind(NULL);
    if (g_using_bundle) {
        gm82_text_runtime_bundle_free(&g_engine_bundle);
        memset(&g_engine_bundle, 0, sizeof(g_engine_bundle));
        g_using_bundle = 0;
    }
    if (g_engine_ir) {
        gm82_project_ir_free(g_engine_ir);
        g_engine_ir = NULL;
    }
    gm82_decoded_sprite_list_free(&g_engine_sprites);
    gm82_decoded_background_list_free(&g_engine_bgs);
    gm82_decoded_sound_list_free(&g_engine_sounds);
    gm82_decoded_object_list_free(&g_engine_objs);
    gm82_decoded_room_list_free(&g_engine_rooms);
    gm82_sprite_group_list_free(&g_engine_sprite_groups);
    gm82_action_table_free(&g_engine_actions);
    gm82_script_list_free(&g_engine_scripts);
    g_engine_loaded = 0;
}

/* --- Instance Representation --- */
typedef struct {
    int id;
    int objectId;
    int spriteId;
    int spriteWidth;
    int spriteHeight;
    int spriteSubimages;
    float x;
    float y;
    float vx;
    float vy;
    int solid;
    int visible;
    int persistent;
    int depth;
    int alarms[12];
} NativeInstance;

/* --- Resource Representation --- */
typedef struct {
    int kind;
    int id;
    char name[64];
    int width;
    int height;
    int frames;
} NativeResource;
typedef struct { int id; char name[64]; int solid, visible, persistent, depth; } NativeObject;
typedef struct { int used; char name[64]; char *source; } NativeScript;
typedef struct { int used, spriteId, frame, width, height; uint8_t *rgba; size_t size; } NativeBitmap;

/* --- Object Event Representation --- */
typedef struct {
    int objectId;
    int mainType;
    int subType;
    char source[256];
} NativeEvent;

/* --- Compiled Code Representation --- */
typedef struct {
    int id;
    int in_use;
    int arg_count;
    char *source;
} NativeCode;

/* --- Global Native State --- */
static int g_runtime_active = 0;
static int g_current_room = 0;
static int g_room_w = 640;
static int g_room_h = 480;

static NativeInstance g_instances[MAX_INSTANCES];
static int g_instance_count = 0;
static int g_instance_id_counter = 100000;

static NativeResource g_resources[MAX_RESOURCES];
static int g_resource_count = 0;
static NativeObject g_objects[MAX_OBJECTS];
static int g_object_count = 0;
static NativeEvent g_events[MAX_EVENTS];
static int g_event_count = 0;
static NativeScript g_scripts[MAX_SCRIPTS];
static NativeBitmap g_bitmaps[MAX_BITMAPS];
static void free_native_bitmaps(void) { for (int i=0;i<MAX_BITMAPS;i++) { free(g_bitmaps[i].rgba); memset(&g_bitmaps[i],0,sizeof(g_bitmaps[i])); } }
static void free_native_scripts(void) { for (int i=0;i<MAX_SCRIPTS;i++) { free(g_scripts[i].source); memset(&g_scripts[i],0,sizeof(g_scripts[i])); } }

JNIEXPORT jboolean JNICALL Java_com_normaker_nativefull_MainActivity_nativeRuntimeExecuteGml(JNIEnv *, jclass, jint, jstring);
static void run_registered_object_events(JNIEnv *env, jclass clazz, NativeInstance *inst, int mainType, int subType) {
    if (!env || !inst) return;
    for (int i=0; i<g_event_count; i++) {
        NativeEvent *ev=&g_events[i];
        if (ev->objectId != inst->objectId || ev->mainType != mainType) continue;
        if (subType >= 0 && ev->subType != subType && ev->subType != -1) continue;
        if (!ev->source[0]) continue;
        jstring source=(*env)->NewStringUTF(env, ev->source);
        if (!source) continue;
        (void)Java_com_normaker_nativefull_MainActivity_nativeRuntimeExecuteGml(env, clazz, inst->id, source);
        (*env)->DeleteLocalRef(env, source);
    }
}

static void run_registered_input_events(JNIEnv *env, jclass clazz, NativeInstance *inst) {
    if (!env || !inst) return;
    for (int i=0; i<g_event_count; i++) {
        NativeEvent *ev=&g_events[i]; if(ev->objectId!=inst->objectId || !ev->source[0]) continue;
        int fire=0;
        if (ev->mainType==5) fire=gml_keyboard_check((double)ev->subType)!=0.0;
        else if (ev->mainType==9) fire=gml_keyboard_check_pressed((double)ev->subType)!=0.0;
        else if (ev->mainType==10) fire=gml_keyboard_check_released((double)ev->subType)!=0.0;
        if (!fire) continue;
        jstring source=(*env)->NewStringUTF(env,ev->source); if(!source) continue;
        (void)Java_com_normaker_nativefull_MainActivity_nativeRuntimeExecuteGml(env,clazz,inst->id,source);
        (*env)->DeleteLocalRef(env,source);
    }
}
static void run_registered_collision_events(JNIEnv *env, jclass clazz, NativeInstance *a, NativeInstance *b) {
    if (!env || !a || !b) return;
    for (int i=0;i<g_event_count;i++) {
        NativeEvent *ev=&g_events[i]; if(ev->objectId!=a->objectId || ev->mainType!=4) continue;
        if(ev->subType>=0 && ev->subType!=b->objectId) continue; if(!ev->source[0]) continue;
        jstring source=(*env)->NewStringUTF(env,ev->source); if(!source) continue;
        (void)Java_com_normaker_nativefull_MainActivity_nativeRuntimeExecuteGml(env,clazz,a->id,source);
        (*env)->DeleteLocalRef(env,source);
    }
}

static void run_registered_mouse_events(JNIEnv *env, jclass clazz, NativeInstance *inst) {
    if (!env || !inst) return;
    int w=inst->spriteWidth>0?inst->spriteWidth:16, h=inst->spriteHeight>0?inst->spriteHeight:16;
    double mx=gml_mouse_x(), my=gml_mouse_y();
    int inside=(mx>=inst->x && mx<inst->x+w && my>=inst->y && my<inst->y+h);
    for (int i=0;i<g_event_count;i++) {
        NativeEvent *ev=&g_events[i]; if(ev->objectId!=inst->objectId || ev->mainType!=6 || !inside || !ev->source[0]) continue;
        int b=-1, fire=0;
        if(ev->subType>=0 && ev->subType<=2){b=ev->subType;fire=gml_mouse_check_button((double)b)!=0.0;}
        else if(ev->subType>=4 && ev->subType<=6){b=ev->subType-4;fire=gml_mouse_check_button_pressed((double)b)!=0.0;}
        else if(ev->subType>=7 && ev->subType<=9){b=ev->subType-7;fire=gml_mouse_check_button_released((double)b)!=0.0;}
        else if(ev->subType>=50 && ev->subType<=52){b=ev->subType-50;fire=gml_mouse_check_button((double)b)!=0.0;}
        if(!fire) continue;
        jstring source=(*env)->NewStringUTF(env,ev->source); if(!source) continue;
        (void)Java_com_normaker_nativefull_MainActivity_nativeRuntimeExecuteGml(env,clazz,inst->id,source);
        (*env)->DeleteLocalRef(env,source);
    }
}

static void register_decoded_assets(const gm82_decoded_sprite_list *sprites,
                                    const gm82_decoded_background_list *bgs,
                                    const gm82_decoded_object_list *objs) {
    g_resource_count = 0;
    g_object_count = 0;
    memset(g_resources, 0, sizeof(g_resources));
    memset(g_objects, 0, sizeof(g_objects));
    if (sprites) for (int i=0; i<sprites->count && g_resource_count<MAX_RESOURCES; i++) {
        NativeResource *r=&g_resources[g_resource_count++]; r->kind=1; r->id=i;
        strncpy(r->name,sprites->frames[i].name,sizeof(r->name)-1);
        r->width=sprites->frames[i].width; r->height=sprites->frames[i].height; r->frames=1;
    }
    if (bgs) for (int i=0; i<bgs->count && g_resource_count<MAX_RESOURCES; i++) {
        NativeResource *r=&g_resources[g_resource_count++]; r->kind=2; r->id=i;
        strncpy(r->name,bgs->items[i].name,sizeof(r->name)-1);
        r->width=bgs->items[i].width; r->height=bgs->items[i].height; r->frames=1;
    }
    if (objs) for (int i=0; i<objs->count && i<MAX_OBJECTS; i++) {
        const gm82_decoded_object *src=&objs->items[i]; NativeObject *dst=&g_objects[i];
        dst->id=i; strncpy(dst->name,src->name,sizeof(dst->name)-1); dst->solid=src->solid;
        dst->visible=src->visible; dst->persistent=src->persistent; dst->depth=src->depth; g_object_count=i+1;
    }
}

static NativeCode g_codes[MAX_CODES];
static int g_code_id_counter = 1000;

static char g_token_buf[1024] = {0};
static char g_token_sep[16] = {0};
static char *g_token_ctx = NULL;

/* --- Native Runtime Lifecycle --- */
JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeCreate(JNIEnv *env, jclass clazz, jint width, jint height) {
    (void)env; (void)clazz;
    if (g_runtime_active || g_engine_loaded) {
        unload_engine_project();
        if (!g_engine_loaded) gm82_runtime_cleanup(&g_engine_rt);
    }
    g_runtime_active = 1;
    g_room_w = width > 0 ? width : 640;
    g_room_h = height > 0 ? height : 480;
    g_instance_count = 0;
    gm82_diag_reset();
    gm82_diag_set_error("create", "");
    gm82_ui_event_clear();
    gm82_ged_reset();
    gm82_gl_atlas_init(&g_gl_atlas);
    gm82_runtime_init(&g_engine_rt);
    g_engine_rt.room_width = g_room_w;
    g_engine_rt.room_height = g_room_h;
    g_engine_rt.running = 1;
    gm82_sound_runtime_init(&g_engine_sound_rt);
    gm82_sound_set_global(&g_engine_sound_rt);
    gm82_input_init(&g_engine_input);
    gm82_input_bind_global(&g_engine_input);
    gm82_opensles_init(22050, 1);
    LOGI("Runtime created: %dx%d (OpenSLES=%d)", g_room_w, g_room_h, gm82_opensles_is_active() ? 1 : 0);
    return JNI_TRUE;
}

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeDestroy(JNIEnv *env, jclass clazz) {
    (void)env; (void)clazz;
    free_native_bitmaps(); free_native_scripts();
    free(g_gles_rgba);
    g_gles_rgba = NULL;
    g_gles_rgba_cap = 0;
    gm82_opensles_shutdown();
    gm82_gl_reset_program();
    g_gl_stale_count = 0;
    gm82_gl_invalidate_handles(&g_gl_atlas);
    unload_engine_project();
    gm82_runtime_cleanup(&g_engine_rt);
    g_runtime_active = 0;
    g_instance_count = 0;
    LOGI("Runtime destroyed");
}

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeStep(JNIEnv *env, jclass clazz, jfloat delta) {
    if (!g_runtime_active) return;
    float dt = delta > 0.0f ? delta : (1.0f / 90.0f);
    gm82_input_bind_global(&g_engine_input);
    if (g_engine_loaded && g_engine_rt.running) {
        gm82_runtime_step_dt(&g_engine_rt, (double)dt);
    }
    if (!g_engine_loaded) {
        for (int i = 0; i < g_instance_count; i++) {
            NativeInstance *inst=&g_instances[i];
            if (!inst->visible) continue;
            for (int ai=0; ai<12; ai++) if (inst->alarms[ai] > 0) { inst->alarms[ai]--; if (inst->alarms[ai] == 0) run_registered_object_events(env, clazz, inst, 2, ai); }
            run_registered_object_events(env, clazz, inst, 3, 1);
            run_registered_object_events(env, clazz, &g_instances[i], 3, 0);
            run_registered_object_events(env, clazz, &g_instances[i], 3, 2);
            run_registered_input_events(env, clazz, &g_instances[i]);
            run_registered_mouse_events(env, clazz, &g_instances[i]);
        }
    }
    for (int i = 0; i < g_instance_count; i++) {
        if (!g_instances[i].visible) continue;
        g_instances[i].x += g_instances[i].vx * dt;
        g_instances[i].y += g_instances[i].vy * dt;
    }
    if (!g_engine_loaded) {
        for (int i=0;i<g_instance_count;i++) for (int j=i+1;j<g_instance_count;j++) {
            NativeInstance *a=&g_instances[i], *b=&g_instances[j];
            if(!a->visible || !b->visible) continue;
            int aw=a->spriteWidth>0?a->spriteWidth:16, ah=a->spriteHeight>0?a->spriteHeight:16;
            int bw=b->spriteWidth>0?b->spriteWidth:16, bh=b->spriteHeight>0?b->spriteHeight:16;
            if(a->x < b->x+bw && a->x+aw > b->x && a->y < b->y+bh && a->y+ah > b->y) {
                run_registered_collision_events(env,clazz,a,b);
                run_registered_collision_events(env,clazz,b,a);
            }
        }
    }
    /* Consume one-frame pressed/released flags only after event dispatch. */
    gm82_input_begin_frame(&g_engine_input);
}

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeKey(JNIEnv *env, jclass clazz, jint keyCode, jboolean down) {
    gm82_input_bind_global(&g_engine_input);
    if (down) {
        gm82_input_key_down(&g_engine_input, (int)keyCode);
    } else {
        gm82_input_key_up(&g_engine_input, (int)keyCode);
    }
}

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeMouse(JNIEnv *env, jclass clazz, jint x, jint y, jint button, jboolean down) {
    (void)env; (void)clazz;
    gm82_input_bind_global(&g_engine_input);
    int world_x = (int)x;
    int world_y = (int)y;
    if (g_engine_loaded && g_engine_rt.view_enabled) {
        world_x += (int)floor(g_engine_rt.view_x);
        world_y += (int)floor(g_engine_rt.view_y);
    }
    gm82_input_set_mouse(&g_engine_input, world_x, world_y);
    if (down) gm82_input_mouse_down(&g_engine_input, (int)button);
    else gm82_input_mouse_up(&g_engine_input, (int)button);
}

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeSetRoomSpeed(JNIEnv *env, jclass clazz, jint speed) {
    g_engine_rt.room_speed = speed > 0 ? speed : 30;
}

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeSetRoom(JNIEnv *env, jclass clazz, jint roomId, jint width, jint height, jboolean clearInstances) {
    g_current_room = roomId;
    if (width > 0) g_room_w = width;
    if (height > 0) g_room_h = height;
    const gm82_decoded_room_list *rooms = active_rooms();
    if (g_engine_loaded && rooms && rooms->count > 0 && roomId >= 0 && roomId < rooms->count) {
        gm82_runtime_goto_room(&g_engine_rt, (int)roomId);
    }
    if (clearInstances) {
        int write_idx = 0;
        for (int i = 0; i < g_instance_count; i++) {
            if (g_instances[i].persistent) {
                if (write_idx != i) g_instances[write_idx] = g_instances[i];
                write_idx++;
            }
        }
        g_instance_count = write_idx;
    }
}

JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeGetRoom(JNIEnv *env, jclass clazz) {
    if (g_engine_loaded) {
        return g_engine_rt.current_room;
    }
    return g_current_room;
}

JNIEXPORT jstring JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeSnapshotJson(JNIEnv *env, jclass clazz) {
    if (g_engine_loaded && g_runtime_active) {
        size_t buf_size = 1024 + (size_t)g_engine_rt.instance_count * 160;
        char *buf = (char *)malloc(buf_size);
        if (!buf) {
            return (*env)->NewStringUTF(env, "{\"active\":false,\"room\":0,\"instances\":[]}");
        }
        int offset = snprintf(buf, buf_size,
            "{\"active\":%s,\"room\":%d,\"width\":%d,\"height\":%d,\"instanceCount\":%d,\"instances\":[",
            g_engine_rt.running ? "true" : "false",
            g_engine_rt.current_room,
            g_engine_rt.room_width,
            g_engine_rt.room_height,
            g_engine_rt.instance_count);
        int added = 0;
        for (int i = 0; i < g_engine_rt.instance_count; i++) {
            const gm82_instance *inst = &g_engine_rt.instances[i];
            if (!inst->alive) continue;
            int written = snprintf(buf + offset, buf_size - offset,
                "%s{\"id\":%d,\"objectId\":%d,\"spriteId\":%d,\"x\":%.2f,\"y\":%.2f,\"vx\":%.2f,\"vy\":%.2f,\"solid\":%d,\"visible\":%d,\"depth\":%d}",
                (added > 0) ? "," : "",
                (int)inst->id, (int)inst->object_index, (int)inst->sprite_index,
                (float)inst->x, (float)inst->y, (float)inst->hspeed, (float)inst->vspeed,
                (int)inst->solid, (int)inst->visible, (int)inst->depth);
            if (written > 0 && (size_t)(offset + written) < buf_size - 10) {
                offset += written;
                added++;
            } else {
                break;
            }
        }
        snprintf(buf + offset, buf_size - offset, "]}");
        jstring result = (*env)->NewStringUTF(env, buf);
        free(buf);
        return result;
    }

    /* Fallback to legacy instances */
    size_t buf_size = 512 + (size_t)g_instance_count * 128;
    char *buf = (char *)malloc(buf_size);
    if (!buf) {
        return (*env)->NewStringUTF(env, "{\"active\":false,\"room\":0,\"instances\":[]}");
    }

    int offset = snprintf(buf, buf_size,
        "{\"active\":%s,\"room\":%d,\"width\":%d,\"height\":%d,\"instanceCount\":%d,\"instances\":[",
        g_runtime_active ? "true" : "false", g_current_room, g_room_w, g_room_h, g_instance_count);

    for (int i = 0; i < g_instance_count; i++) {
        const NativeInstance *inst = &g_instances[i];
        int written = snprintf(buf + offset, buf_size - offset,
            "%s{\"id\":%d,\"objectId\":%d,\"spriteId\":%d,\"x\":%.2f,\"y\":%.2f,\"vx\":%.2f,\"vy\":%.2f,\"solid\":%d,\"visible\":%d}",
            (i > 0) ? "," : "",
            inst->id, inst->objectId, inst->spriteId,
            inst->x, inst->y, inst->vx, inst->vy,
            inst->solid, inst->visible);
        if (written > 0 && (size_t)(offset + written) < buf_size - 10) {
            offset += written;
        } else {
            break;
        }
    }

    snprintf(buf + offset, buf_size - offset, "]}");
    jstring result = (*env)->NewStringUTF(env, buf);
    free(buf);
    return result;
}

/* Helper: skip whitespace */
static const char *skip_ws(const char *p) {
    while (*p && isspace((unsigned char)*p)) p++;
    return p;
}

/* Simple native GML mathematical expression evaluator */
static double eval_gml_simple(const char **s);

static double eval_gml_factor(const char **s) {
    *s = skip_ws(*s);
    if (!**s) return 0.0;

    int sign = 1;
    if (**s == '-') {
        sign = -1;
        (*s)++;
        *s = skip_ws(*s);
    } else if (**s == '+') {
        (*s)++;
        *s = skip_ws(*s);
    }

    if (**s == '(') {
        (*s)++;
        double v = eval_gml_simple(s);
        *s = skip_ws(*s);
        if (**s == ')') (*s)++;
        return sign * v;
    }

    if (isdigit((unsigned char)**s) || **s == '.') {
        char *end;
        double val = strtod(*s, &end);
        *s = end;
        return sign * val;
    }

    if (isalpha((unsigned char)**s) || **s == '_') {
        char func_name[64] = {0};
        int len = 0;
        while ((isalnum((unsigned char)**s) || **s == '_') && len < 63) {
            func_name[len++] = **s;
            (*s)++;
        }
        func_name[len] = '\0';
        *s = skip_ws(*s);

        if (strcmp(func_name, "true") == 0) return sign * 1.0;
        if (strcmp(func_name, "false") == 0) return 0.0;

        if (**s == '(') {
            (*s)++;
            double args[8] = {0};
            int argc = 0;
            while (**s && **s != ')') {
                if (argc < 8) args[argc++] = eval_gml_simple(s);
                *s = skip_ws(*s);
                if (**s == ',') (*s)++;
            }
            if (**s == ')') (*s)++;

            double res = 0.0;
            if (strcmp(func_name, "max") == 0 && argc >= 2) res = (args[0] > args[1]) ? args[0] : args[1];
            else if (strcmp(func_name, "min") == 0 && argc >= 2) res = (args[0] < args[1]) ? args[0] : args[1];
            else if (strcmp(func_name, "abs") == 0 && argc >= 1) res = fabs(args[0]);
            else if (strcmp(func_name, "sqrt") == 0 && argc >= 1) res = sqrt(args[0] >= 0.0 ? args[0] : 0.0);
            else if (strcmp(func_name, "sqr") == 0 && argc >= 1) res = args[0] * args[0];
            else if (strcmp(func_name, "round") == 0 && argc >= 1) res = round(args[0]);
            else if (strcmp(func_name, "floor") == 0 && argc >= 1) res = floor(args[0]);
            else if (strcmp(func_name, "ceil") == 0 && argc >= 1) res = ceil(args[0]);
            else if (strcmp(func_name, "point_distance") == 0 && argc >= 4) {
                double dx = args[2] - args[0];
                double dy = args[3] - args[1];
                res = sqrt(dx * dx + dy * dy);
            } else if (strcmp(func_name, "lengthdir_x") == 0 && argc >= 2) {
                res = args[0] * cos(args[1] * M_PI / 180.0);
            } else if (strcmp(func_name, "lengthdir_y") == 0 && argc >= 2) {
                res = -args[0] * sin(args[1] * M_PI / 180.0);
            }
            return sign * res;
        }
        return sign * 0.0;
    }

    return 0.0;
}

static double eval_gml_term(const char **s) {
    double left = eval_gml_factor(s);
    while (1) {
        *s = skip_ws(*s);
        if (**s == '*') {
            (*s)++;
            left *= eval_gml_factor(s);
        } else if (**s == '/') {
            (*s)++;
            double divisor = eval_gml_factor(s);
            left = (divisor != 0.0) ? (left / divisor) : 0.0;
        } else if (**s == '%') {
            (*s)++;
            double div = eval_gml_factor(s);
            left = (div != 0.0) ? fmod(left, div) : 0.0;
        } else {
            break;
        }
    }
    return left;
}

static double eval_gml_simple(const char **s) {
    double left = eval_gml_term(s);
    while (1) {
        *s = skip_ws(*s);
        if (**s == '+') {
            (*s)++;
            left += eval_gml_term(s);
        } else if (**s == '-') {
            (*s)++;
            left -= eval_gml_term(s);
        } else {
            break;
        }
    }
    return left;
}

JNIEXPORT jstring JNICALL
Java_com_normaker_nativefull_MainActivity_nativeEvaluateGml(JNIEnv *env, jclass clazz, jstring source) {
    if (!source) return (*env)->NewStringUTF(env, "0");
    const char *src = (*env)->GetStringUTFChars(env, source, NULL);
    if (!src) return (*env)->NewStringUTF(env, "0");

    const char *ptr = skip_ws(src);
    /* Check for string literal */
    if (*ptr == '"' || *ptr == '\'') {
        char quote = *ptr++;
        const char *end = strchr(ptr, quote);
        char result_buf[256] = {0};
        if (end) {
            size_t len = (size_t)(end - ptr);
            if (len > 255) len = 255;
            strncpy(result_buf, ptr, len);
            result_buf[len] = '\0';
        }
        (*env)->ReleaseStringUTFChars(env, source, src);
        return (*env)->NewStringUTF(env, result_buf);
    }

    double val = eval_gml_simple(&ptr);
    (*env)->ReleaseStringUTFChars(env, source, src);

    char out[64];
    if (val == floor(val)) {
        snprintf(out, sizeof(out), "%.0f", val);
    } else {
        snprintf(out, sizeof(out), "%f", val);
    }
    return (*env)->NewStringUTF(env, out);
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeRegisterEvent(JNIEnv *env, jclass clazz, jint objectId, jint mainType, jint subType, jstring source) {
    if (g_event_count < MAX_EVENTS) {
        NativeEvent *ev = &g_events[g_event_count++];
        ev->objectId = objectId;
        ev->mainType = mainType;
        ev->subType = subType;
        ev->source[0] = '\0';
        if (source) {
            const char *str = (*env)->GetStringUTFChars(env, source, NULL);
            if (str) {
                strncpy(ev->source, str, sizeof(ev->source) - 1);
                ev->source[sizeof(ev->source) - 1] = '\0';
                (*env)->ReleaseStringUTFChars(env, source, str);
            }
        }
        return JNI_TRUE;
    }
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeRegisterObject(JNIEnv *env, jclass clazz, jint objectId, jstring name) {
    if (!name || objectId < 0 || objectId >= MAX_OBJECTS) return JNI_FALSE;
    const char *raw = (*env)->GetStringUTFChars(env, name, NULL); if (!raw) return JNI_FALSE;
    NativeObject *obj=&g_objects[objectId]; memset(obj,0,sizeof(*obj)); obj->id=objectId; obj->visible=1;
    strncpy(obj->name,raw,sizeof(obj->name)-1); if (objectId>=g_object_count) g_object_count=objectId+1;
    (*env)->ReleaseStringUTFChars(env,name,raw); return JNI_TRUE;
}
JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeRegisterScript(JNIEnv *env, jclass clazz, jstring name, jstring source) {
    if (!name || !source) return JNI_FALSE;
    const char *n=(*env)->GetStringUTFChars(env,name,NULL), *code=(*env)->GetStringUTFChars(env,source,NULL);
    if (!n || !code) { if(n) (*env)->ReleaseStringUTFChars(env,name,n); if(code) (*env)->ReleaseStringUTFChars(env,source,code); return JNI_FALSE; }
    int slot=-1; for(int i=0;i<MAX_SCRIPTS;i++) if(g_scripts[i].used && !strcmp(g_scripts[i].name,n)){slot=i;break;}
    if(slot<0) for(int i=0;i<MAX_SCRIPTS;i++) if(!g_scripts[i].used){slot=i;break;}
    if(slot<0){(*env)->ReleaseStringUTFChars(env,name,n);(*env)->ReleaseStringUTFChars(env,source,code);return JNI_FALSE;}
    free(g_scripts[slot].source); memset(&g_scripts[slot],0,sizeof(g_scripts[slot])); g_scripts[slot].used=1;
    strncpy(g_scripts[slot].name,n,sizeof(g_scripts[slot].name)-1); g_scripts[slot].source=strdup(code);
    (*env)->ReleaseStringUTFChars(env,name,n);(*env)->ReleaseStringUTFChars(env,source,code); return g_scripts[slot].source?JNI_TRUE:JNI_FALSE;
}
JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeClearScripts(JNIEnv *env, jclass clazz) { free_native_scripts(); }

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeClearEvents(JNIEnv *env, jclass clazz) {
    g_event_count = 0;
    memset(g_events, 0, sizeof(g_events));
}

JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeAddInstance(JNIEnv *env, jclass clazz, jint objectId, jint spriteId, jint spriteWidth, jint spriteHeight, jint spriteSubimages, jfloat x, jfloat y, jfloat vx, jfloat vy) {
    if (g_instance_count >= MAX_INSTANCES) {
        LOGE("Max instances reached (%d)", MAX_INSTANCES);
        return -1;
    }
    int new_id = ++g_instance_id_counter;
    NativeInstance *inst = &g_instances[g_instance_count++];
    for (int ai=0; ai<12; ai++) inst->alarms[ai] = -1;
    inst->id = new_id;
    inst->objectId = objectId;
    inst->spriteId = spriteId;
    inst->spriteWidth = spriteWidth > 0 ? spriteWidth : 16;
    inst->spriteHeight = spriteHeight > 0 ? spriteHeight : 16;
    inst->spriteSubimages = spriteSubimages > 0 ? spriteSubimages : 1;
    inst->x = x;
    inst->y = y;
    inst->vx = vx;
    inst->vy = vy;
    inst->solid = 0;
    inst->visible = 1;
    inst->persistent = 0;
    inst->depth = 0;
    if (objectId >= 0 && objectId < g_object_count) {
        const NativeObject *obj = &g_objects[objectId];
        inst->solid = obj->solid; inst->visible = obj->visible;
        inst->persistent = obj->persistent; inst->depth = obj->depth;
    }
    if (!g_engine_loaded) run_registered_object_events(env, clazz, inst, 0, -1);
    return new_id;
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeSetSpriteBitmap(JNIEnv *env, jclass clazz, jint spriteId, jint frame, jint width, jint height, jbyteArray rgba) {
    if(!rgba || width<=0 || height<=0 || width>4096 || height>4096) return JNI_FALSE;
    size_t need=(size_t)width*(size_t)height*4u; if((size_t)(*env)->GetArrayLength(env,rgba)<need) return JNI_FALSE;
    int slot=-1; for(int i=0;i<MAX_BITMAPS;i++) if(g_bitmaps[i].used&&g_bitmaps[i].spriteId==spriteId&&g_bitmaps[i].frame==frame){slot=i;break;}
    if(slot<0) for(int i=0;i<MAX_BITMAPS;i++) if(!g_bitmaps[i].used){slot=i;break;} if(slot<0) return JNI_FALSE;
    uint8_t *copy=(uint8_t*)malloc(need); if(!copy) return JNI_FALSE; (*env)->GetByteArrayRegion(env,rgba,0,(jsize)need,(jbyte*)copy);
    free(g_bitmaps[slot].rgba); g_bitmaps[slot]=(NativeBitmap){1,spriteId,frame,width,height,copy,need}; return JNI_TRUE;
}

static void render_active_frame_rgba(uint8_t *rgba, int width, int height) {
    if (!rgba || width <= 0 || height <= 0) return;
    const gm82_decoded_room_list *rooms = active_rooms();
    int room_valid = (g_engine_loaded && rooms && rooms->count > 0 &&
                      g_engine_rt.current_room >= 0 &&
                      g_engine_rt.current_room < rooms->count);

    if (g_engine_loaded && g_runtime_active && g_engine_rt.running && room_valid) {
        if (!gm82_runtime_draw(&g_engine_rt, rgba, (int32_t)width, (int32_t)height)) {
            size_t total = (size_t)width * (size_t)height;
            for (size_t i = 0; i < total; i++) {
                rgba[i * 4 + 0] = 20;
                rgba[i * 4 + 1] = 20;
                rgba[i * 4 + 2] = 40;
                rgba[i * 4 + 3] = 255;
            }
        }
    } else {
        size_t total = (size_t)width * (size_t)height;
        for (size_t i = 0; i < total; i++) {
            rgba[i * 4 + 0] = 20;
            rgba[i * 4 + 1] = 20;
            rgba[i * 4 + 2] = 40;
            rgba[i * 4 + 3] = 255;
        }
        for (int i = 0; i < g_instance_count; i++) {
            const NativeInstance *inst = &g_instances[i];
            if (!inst->visible) continue;
            int spr_w = inst->spriteWidth > 0 ? inst->spriteWidth : 16;
            int spr_h = inst->spriteHeight > 0 ? inst->spriteHeight : 16;
            int ix = (int)inst->x;
            int iy = (int)inst->y;
            const NativeBitmap *bm = NULL;
            for (int bi = 0; bi < MAX_BITMAPS; bi++) {
                if (g_bitmaps[bi].used && g_bitmaps[bi].spriteId == inst->spriteId && g_bitmaps[bi].frame == 0) {
                    bm = &g_bitmaps[bi];
                    break;
                }
            }
            for (int y = 0; y < spr_h; y++) {
                int py = iy + y;
                if (py < 0 || py >= height) continue;
                for (int x = 0; x < spr_w; x++) {
                    int px = ix + x;
                    if (px < 0 || px >= width) continue;
                    uint8_t *dst = rgba + ((size_t)py * (size_t)width + (size_t)px) * 4u;
                    if (bm && x < bm->width && y < bm->height) {
                        const uint8_t *src = bm->rgba + ((size_t)y * (size_t)bm->width + (size_t)x) * 4u;
                        if (src[3] == 0) continue;
                        dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = 255;
                    } else {
                        dst[0] = (uint8_t)((inst->objectId * 67 + 100) % 256);
                        dst[1] = (uint8_t)((inst->objectId * 131 + 150) % 256);
                        dst[2] = (uint8_t)((inst->objectId * 193 + 200) % 256);
                        dst[3] = 255;
                    }
                }
            }
        }
    }
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeRenderBitmap(JNIEnv *env, jclass clazz, jobject target) {
    (void)clazz;
    if (!target) return JNI_FALSE;
    AndroidBitmapInfo info;
    if (AndroidBitmap_getInfo(env, target, &info) < 0) return JNI_FALSE;
    if (info.format != ANDROID_BITMAP_FORMAT_RGBA_8888) return JNI_FALSE;

    void *pixels = NULL;
    if (AndroidBitmap_lockPixels(env, target, &pixels) < 0 || !pixels) return JNI_FALSE;

    render_active_frame_rgba((uint8_t *)pixels, (int)info.width, (int)info.height);

    AndroidBitmap_unlockPixels(env, target);
    return JNI_TRUE;
}

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeClearInstances(JNIEnv *env, jclass clazz) {
    g_instance_count = 0;
}

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeClearRoomTransient(JNIEnv *env, jclass clazz) {
    int write_idx = 0;
    for (int i = 0; i < g_instance_count; i++) {
        if (g_instances[i].persistent) {
            if (write_idx != i) g_instances[write_idx] = g_instances[i];
            write_idx++;
        }
    }
    g_instance_count = write_idx;
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeExecuteGml(JNIEnv *env, jclass clazz, jint instanceId, jstring source) {
    if (!source) return JNI_FALSE;
    const char *src = (*env)->GetStringUTFChars(env, source, NULL);
    if (!src) return JNI_FALSE;

    if (g_engine_loaded && g_runtime_active) {
        gm82_instance *rt_target = NULL;
        for (int i = 0; i < g_engine_rt.instance_count; i++) {
            if (g_engine_rt.instances[i].alive && (instanceId <= 0 || g_engine_rt.instances[i].id == instanceId)) {
                rt_target = &g_engine_rt.instances[i];
                break;
            }
        }
        int executed = gm82_gml_eval_block(&g_engine_rt, rt_target, src);
        (*env)->ReleaseStringUTFChars(env, source, src);
        return executed >= 0 ? JNI_TRUE : JNI_FALSE;
    }

    NativeInstance *target = NULL;
    for (int i = 0; i < g_instance_count; i++) {
        if (g_instances[i].id == instanceId) {
            target = &g_instances[i];
            break;
        }
    }

    /* Process simple assignments: e.g. x = 10; y = 20; vx = 2; vy = -5; */
    char buf[512];
    strncpy(buf, src, sizeof(buf) - 1);
    buf[sizeof(buf) - 1] = '\0';
    (*env)->ReleaseStringUTFChars(env, source, src);

    char *saveptr = NULL;
    char *stmt = strtok_r(buf, ";\n", &saveptr);
    while (stmt) {
        stmt = (char *)skip_ws(stmt);
        char *eq = strchr(stmt, '=');
        if (eq && target) {
            *eq = '\0';
            char *var_name = stmt;
            const char *val_str = skip_ws(eq + 1);
            /* trim right whitespace on var_name */
            char *end = var_name + strlen(var_name) - 1;
            while (end > var_name && isspace((unsigned char)*end)) {
                *end = '\0';
                end--;
            }
            double val = eval_gml_simple(&val_str);
            int alarm_index = -1;
            if (sscanf(var_name, "alarm[%d]", &alarm_index) == 1 && alarm_index >= 0 && alarm_index < 12) target->alarms[alarm_index] = (int)val;
            else if (!strcmp(var_name, "x")) target->x = (float)val;
            else if (!strcmp(var_name, "y")) target->y = (float)val;
            else if (!strcmp(var_name, "vx") || !strcmp(var_name, "hspeed")) target->vx = (float)val;
            else if (!strcmp(var_name, "vy") || !strcmp(var_name, "vspeed")) target->vy = (float)val;
            else if (!strcmp(var_name, "solid")) target->solid = (int)val;
            else if (!strcmp(var_name, "visible")) target->visible = (int)val;
            else if (!strcmp(var_name, "depth")) target->depth = (int)val;
            else if (!strcmp(var_name, "persistent")) target->persistent = (int)val;
        }
        stmt = strtok_r(NULL, ";\n", &saveptr);
    }
    return JNI_TRUE;
}

JNIEXPORT jstring JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeConsumeSoundCommands(JNIEnv *env, jclass clazz) {
    char buf[1024];
    int offset = snprintf(buf, sizeof(buf), "[");
    int i = 0;
    int kind, soundId, loop, prio;
    float volume;
    while (i < MAX_SOUND_COMMANDS &&
           gm82_dequeue_sound_command(&kind, &soundId, &loop, &prio, &volume)) {
        int w = snprintf(buf + offset, sizeof(buf) - offset,
            "%s[%d,%d,%d,%d,%.2f]",
            (i > 0) ? "," : "",
            kind, soundId, loop, prio, volume);
        if (w > 0 && offset + w < (int)sizeof(buf) - 2) offset += w;
        i++;
    }
    snprintf(buf + offset, sizeof(buf) - offset, "]");
    return (*env)->NewStringUTF(env, buf);
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeExportNorJson(JNIEnv *env, jclass clazz, jstring json, jstring outputPath) {
    if (!json || !outputPath) return JNI_FALSE;
    const char *out_p = (*env)->GetStringUTFChars(env, outputPath, NULL);
    const char *j_str = (*env)->GetStringUTFChars(env, json, NULL);
    if (!out_p || !j_str) {
        if (out_p) (*env)->ReleaseStringUTFChars(env, outputPath, out_p);
        if (j_str) (*env)->ReleaseStringUTFChars(env, json, j_str);
        return JNI_FALSE;
    }
    FILE *f = fopen(out_p, "wb");
    jboolean ok = JNI_FALSE;
    if (f) {
        size_t len = strlen(j_str);
        if (fwrite(j_str, 1, len, f) == len) ok = JNI_TRUE;
        fclose(f);
    }
    (*env)->ReleaseStringUTFChars(env, outputPath, out_p);
    (*env)->ReleaseStringUTFChars(env, json, j_str);
    return ok;
}

static char *jni_dup_string(JNIEnv *env, jstring value) {
    if (!value) return NULL;
    const char *raw = (*env)->GetStringUTFChars(env, value, NULL);
    if (!raw) return NULL;
    char *copy = strdup(raw);
    (*env)->ReleaseStringUTFChars(env, value, raw);
    return copy;
}
JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeImportGmxGmz(JNIEnv *env, jclass clazz, jstring path, jstring outputDir) {
    char *p = jni_dup_string(env, path), *o = jni_dup_string(env, outputDir);
    double result = (p && o) ? nor_import_gmx_gmz_native(p, o) : 0.0;
    free(p); free(o); return (jint)result;
}
JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeExportGmxGmz(JNIEnv *env, jclass clazz, jstring sourceDir, jstring outputPath, jstring kind) {
    char *s = jni_dup_string(env, sourceDir), *o = jni_dup_string(env, outputPath), *k = jni_dup_string(env, kind);
    double result = (s && o && k) ? nor_export_gmx_gmz_native(s, o, k) : 0.0;
    free(s); free(o); free(k); return (jint)result;
}
JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeExportGmkRaw(JNIEnv *env, jclass clazz, jstring sourcePath, jstring outputPath) {
    char *s = jni_dup_string(env, sourcePath), *o = jni_dup_string(env, outputPath);
    double result = (s && o) ? nor_export_gmk_raw_native(s, o) : 0.0;
    free(s); free(o); return result != 0.0 ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeExportGmxSemantic(JNIEnv *env, jclass clazz, jstring sourceDir, jstring outputDir, jstring projectName) {
    char *s = jni_dup_string(env, sourceDir), *o = jni_dup_string(env, outputDir), *n = jni_dup_string(env, projectName);
    double result = (s && o && n) ? nor_export_gmx_semantic_native(s, o, n) : 0.0;
    free(s); free(o); free(n); return result != 0.0 ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT jstring JNICALL
Java_com_normaker_nativefull_MainActivity_nativeCoreIdentity(JNIEnv *env, jclass clazz) {
    return (*env)->NewStringUTF(env, "NOR Maker 8.2 Native Engine (Arm64/x86/v7a)");
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeValidateGmk(JNIEnv *env, jclass clazz, jbyteArray bytes) {
    if (!bytes) return JNI_FALSE;
    jsize len = (*env)->GetArrayLength(env, bytes);
    if (len < 12) return JNI_FALSE;
    jbyte *data = (*env)->GetByteArrayElements(env, bytes, NULL);
    if (!data) return JNI_FALSE;

    gm82_gmk_probe_result probe = gm82_gmk_probe((const uint8_t *)data, (size_t)len);
    (*env)->ReleaseByteArrayElements(env, bytes, data, JNI_ABORT);
    return (probe.status != GM82_GMK_PARSE_INVALID) ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT jstring JNICALL
Java_com_normaker_nativefull_MainActivity_nativeGmkHeaderJson(JNIEnv *env, jclass clazz, jbyteArray bytes) {
    if (!bytes) return (*env)->NewStringUTF(env, "{\"valid\":false,\"error\":\"null_buffer\"}");
    jsize len = (*env)->GetArrayLength(env, bytes);
    jbyte *data = (*env)->GetByteArrayElements(env, bytes, NULL);
    if (!data) return (*env)->NewStringUTF(env, "{\"valid\":false,\"error\":\"alloc_failed\"}");

    gm82_gmk_probe_result probe = gm82_gmk_probe((const uint8_t *)data, (size_t)len);
    (*env)->ReleaseByteArrayElements(env, bytes, data, JNI_ABORT);

    char buf[256];
    snprintf(buf, sizeof(buf),
        "{\"magic\":%d,\"version\":%d,\"appId\":%d,\"valid\":%s,\"formatKind\":%d,\"error\":\"%s\"}",
        probe.magic, probe.version, probe.app_id,
        (probe.status != GM82_GMK_PARSE_INVALID) ? "true" : "false",
        (int)probe.format_kind,
        probe.error_code ? probe.error_code : "");
    return (*env)->NewStringUTF(env, buf);
}

static int scan_gmk_zlib(const uint8_t *data, size_t len, char *out, size_t cap, int array_only) {
    int count=0, pos=0;
    if (array_only) pos += snprintf(out+pos, cap-(size_t)pos, "[");
    else pos += snprintf(out+pos, cap-(size_t)pos, "{\"ok\":true,\"bytes\":%zu,\"chunks\":[", len);
    for (size_t i=12; i+2<len && count<512; i++) {
        if (data[i]!=0x78 || !(data[i+1]==0x01 || data[i+1]==0x5e || data[i+1]==0x9c || data[i+1]==0xda)) continue;
        z_stream zs; memset(&zs,0,sizeof(zs)); if (inflateInit(&zs)!=Z_OK) break;
        zs.next_in=(Bytef*)(data+i); zs.avail_in=(uInt)((len-i)>0xffffffffu?0xffffffffu:(len-i));
        uint8_t scratch[65536], prefix[80]; size_t prefix_n=0; int ret;
        do { zs.next_out=scratch; zs.avail_out=sizeof(scratch); ret=inflate(&zs,Z_NO_FLUSH); size_t produced=sizeof(scratch)-zs.avail_out; if(produced && prefix_n<sizeof(prefix)){size_t take=produced; if(take>sizeof(prefix)-prefix_n) take=sizeof(prefix)-prefix_n; memcpy(prefix+prefix_n,scratch,take); prefix_n+=take;} } while(ret==Z_OK);
        if(ret==Z_STREAM_END && zs.total_in>2) {
            size_t used=(size_t)zs.total_in, decoded=(size_t)zs.total_out; const char *kind="zlib_payload", *confidence="low"; char name[65]={0};
            if(prefix_n>=8){int32_t version=0,n=0;memcpy(&version,prefix,4);memcpy(&n,prefix+4,4);if(version==1&&n>=1&&n<=64&&(size_t)(8+n)<=prefix_n){int ok=1;for(int q=0;q<n;q++)if(prefix[8+q]<32||prefix[8+q]>126)ok=0;if(ok){kind="named_v1_resource";confidence="high";memcpy(name,prefix+8,(size_t)n);name[n]=0;}}else if(version==1&&n==0){kind="container_v1";confidence="medium";}}
            if(name[0]) pos += snprintf(out+pos,cap-(size_t)pos,"%s{\"offset\":%zu,\"compressed\":%zu,\"decompressed\":%zu,\"kind\":\"%s\",\"confidence\":\"%s\",\"name\":\"%s\"}",count?",":"",i,used,decoded,kind,confidence,name);
            else pos += snprintf(out+pos,cap-(size_t)pos,"%s{\"offset\":%zu,\"compressed\":%zu,\"decompressed\":%zu,\"kind\":\"%s\",\"confidence\":\"%s\"}",count?",":"",i,used,decoded,kind,confidence);
            count++; i += used-1;
        }
        inflateEnd(&zs); if((size_t)pos>=cap-512) break;
    }
    if(array_only) snprintf(out+pos,cap-(size_t)pos,"]"); else snprintf(out+pos,cap-(size_t)pos,"],\"count\":%d}",count); return count;
}
JNIEXPORT jstring JNICALL
Java_com_normaker_nativefull_MainActivity_nativeGmkLayoutJson(JNIEnv *env, jclass clazz, jbyteArray bytes) {
    if(!bytes) return (*env)->NewStringUTF(env,"{\"ok\":false,\"error\":\"null_buffer\"}");
    jsize len=(*env)->GetArrayLength(env,bytes); jbyte *data=(*env)->GetByteArrayElements(env,bytes,NULL);
    if(!data) return (*env)->NewStringUTF(env,"{\"ok\":false,\"error\":\"memory\"}");
    char *json=(char*)calloc(1,65536); if(!json){(*env)->ReleaseByteArrayElements(env,bytes,data,JNI_ABORT);return (*env)->NewStringUTF(env,"{\"ok\":false,\"error\":\"alloc\"}");}
    scan_gmk_zlib((const uint8_t*)data,(size_t)len,json,65536,0); (*env)->ReleaseByteArrayElements(env,bytes,data,JNI_ABORT);
    jstring result=(*env)->NewStringUTF(env,json); free(json); return result;
}
JNIEXPORT jstring JNICALL
Java_com_normaker_nativefull_MainActivity_nativeGmkChunkInventory(JNIEnv *env, jclass clazz, jbyteArray bytes) {
    if(!bytes) return (*env)->NewStringUTF(env,"[]");
    jsize len=(*env)->GetArrayLength(env,bytes); jbyte *data=(*env)->GetByteArrayElements(env,bytes,NULL); if(!data) return (*env)->NewStringUTF(env,"[]");
    char *json=(char*)calloc(1,65536); if(!json){(*env)->ReleaseByteArrayElements(env,bytes,data,JNI_ABORT);return (*env)->NewStringUTF(env,"[]");}
    scan_gmk_zlib((const uint8_t*)data,(size_t)len,json,65536,1); (*env)->ReleaseByteArrayElements(env,bytes,data,JNI_ABORT);
    jstring result=(*env)->NewStringUTF(env,json); free(json); return result;
}
JNIEXPORT jstring JNICALL
Java_com_normaker_nativefull_MainActivity_nativeGmkResourceManifest(JNIEnv *env, jclass clazz, jbyteArray bytes) {
    if (!bytes) return (*env)->NewStringUTF(env, "{\"resources\":[],\"count\":0}");
    jsize len = (*env)->GetArrayLength(env, bytes);
    if (len < 12) return (*env)->NewStringUTF(env, "{\"resources\":[],\"count\":0}");
    jbyte *data = (*env)->GetByteArrayElements(env, bytes, NULL);
    if (!data) return (*env)->NewStringUTF(env, "{\"resources\":[],\"count\":0}");

    gm82_decoded_sprite_list sprites;
    gm82_decoded_background_list bgs;
    gm82_decoded_object_list objs;
    gm82_decoded_room_list rms;

    gm82_decode_sprites_from_gmk((const uint8_t *)data, (size_t)len, &sprites);
    gm82_decode_backgrounds_from_gmk((const uint8_t *)data, (size_t)len, &bgs);
    gm82_decode_objects_from_gmk((const uint8_t *)data, (size_t)len, &objs);
    gm82_decode_rooms_from_gmk((const uint8_t *)data, (size_t)len, &rms);

    (*env)->ReleaseByteArrayElements(env, bytes, data, JNI_ABORT);

    /* Construct JSON manifest */
    size_t json_cap = 65536 + (size_t)sprites.count * 128 + (size_t)bgs.count * 128 + (size_t)objs.count * 128 + (size_t)rms.count * 128;
    char *json = (char *)malloc(json_cap);
    if (!json) {
        gm82_decoded_sprite_list_free(&sprites);
        gm82_decoded_background_list_free(&bgs);
        free(objs.items);
        for (int i = 0; i < rms.count; i++) { free(rms.items[i].instances); free(rms.items[i].tiles); }
        free(rms.items);
        return (*env)->NewStringUTF(env, "{\"resources\":[],\"count\":0}");
    }

    int pos = snprintf(json, json_cap, "{\"ok\":true,\"sprites\":[");
    for (int i = 0; i < sprites.count && pos < (int)json_cap - 256; i++) {
        pos += snprintf(json + pos, json_cap - (size_t)pos,
            "%s{\"id\":%d,\"name\":\"%s\",\"width\":%d,\"height\":%d}",
            (i > 0 ? "," : ""), i, sprites.frames[i].name, sprites.frames[i].width, sprites.frames[i].height);
    }
    pos += snprintf(json + pos, json_cap - (size_t)pos, "],\"backgrounds\":[");
    for (int i = 0; i < bgs.count && pos < (int)json_cap - 256; i++) {
        pos += snprintf(json + pos, json_cap - (size_t)pos,
            "%s{\"id\":%d,\"name\":\"%s\",\"width\":%d,\"height\":%d}",
            (i > 0 ? "," : ""), i, bgs.items[i].name, bgs.items[i].width, bgs.items[i].height);
    }
    pos += snprintf(json + pos, json_cap - (size_t)pos, "],\"objects\":[");
    for (int i = 0; i < objs.count && pos < (int)json_cap - 256; i++) {
        pos += snprintf(json + pos, json_cap - (size_t)pos,
            "%s{\"id\":%d,\"name\":\"%s\",\"sprite_index\":%d,\"solid\":%d,\"visible\":%d,\"depth\":%d}",
            (i > 0 ? "," : ""), i, objs.items[i].name, objs.items[i].sprite_index, objs.items[i].solid, objs.items[i].visible, objs.items[i].depth);
    }
    pos += snprintf(json + pos, json_cap - (size_t)pos, "],\"rooms\":[");
    for (int i = 0; i < rms.count && pos < (int)json_cap - 256; i++) {
        pos += snprintf(json + pos, json_cap - (size_t)pos,
            "%s{\"id\":%d,\"name\":\"%s\",\"width\":%d,\"height\":%d,\"speed\":%d,\"instance_count\":%d}",
            (i > 0 ? "," : ""), i, rms.items[i].name, rms.items[i].width, rms.items[i].height, rms.items[i].speed, rms.items[i].instance_count);
    }
    snprintf(json + pos, json_cap - (size_t)pos, "]}");

    gm82_decoded_sprite_list_free(&sprites);
    gm82_decoded_background_list_free(&bgs);
    free(objs.items);
    for (int i = 0; i < rms.count; i++) { free(rms.items[i].instances); free(rms.items[i].tiles); }
    free(rms.items);

    jstring res = (*env)->NewStringUTF(env, json);
    free(json);
    return res;
}

static void finalize_loaded_engine_project(int stream_parsed, int *out_spr, int *out_bg, int *out_snd, int *out_obj, int *out_rm) {
    const gm82_decoded_sprite_list *sprites = active_sprites();
    const gm82_decoded_background_list *bgs = active_bgs();
    const gm82_decoded_object_list *objs = active_objs();
    const gm82_decoded_room_list *rooms = active_rooms();
    const gm82_sprite_group_list *groups = active_sprite_groups();
    const gm82_decoded_sound_list *snds = active_sounds();

    register_decoded_assets(sprites, bgs, objs);

    gm82_runtime_init(&g_engine_rt);
    gm82_runtime_bind_assets(&g_engine_rt,
        objs,
        sprites,
        bgs,
        rooms,
        g_using_bundle ? NULL : &g_engine_actions);
    gm82_runtime_bind_sprite_groups(&g_engine_rt, groups);
    gm82_runtime_bind_scripts(&g_engine_rt,
        g_using_bundle ? &g_engine_bundle.scripts : &g_engine_scripts);

    if (g_using_bundle && g_engine_ir) {
        gm82_path_bind(&g_engine_ir->decoded_paths);
        gm82_timeline_bind(&g_engine_ir->decoded_timelines);
    }

    gm82_sound_runtime_init(&g_engine_sound_rt);
    gm82_sound_runtime_bind(&g_engine_sound_rt, snds);
    gm82_sound_set_global(&g_engine_sound_rt);
    if (!gm82_opensles_is_active()) {
        gm82_opensles_init(22050, 1);
    }
    gm82_input_init(&g_engine_input);
    gm82_input_bind_global(&g_engine_input);

    int n_rm = rooms ? rooms->count : 0;
    if (n_rm > 0) {
        gm82_runtime_goto_room(&g_engine_rt, 0);
        g_room_w = g_engine_rt.room_width > 0 ? g_engine_rt.room_width : 640;
        g_room_h = g_engine_rt.room_height > 0 ? g_engine_rt.room_height : 480;
    } else {
        gm82_diag_set_error("import_gmk", "No rooms decoded from project");
    }

    g_runtime_active = 1;
    g_engine_loaded = 1;
    (void)stream_parsed;

    if (out_spr) *out_spr = sprites ? sprites->count : 0;
    if (out_bg)  *out_bg  = bgs ? bgs->count : 0;
    if (out_snd) *out_snd = snds ? snds->count : 0;
    if (out_obj) *out_obj = objs ? objs->count : 0;
    if (out_rm)  *out_rm  = n_rm;
}

JNIEXPORT jstring JNICALL
Java_com_normaker_nativefull_MainActivity_nativeImportGmkSnapshot(JNIEnv *env, jclass clazz, jbyteArray bytes, jstring outputDir) {
    (void)clazz; (void)outputDir;
    if (!bytes) return (*env)->NewStringUTF(env, "{\"ok\":false,\"error\":\"null_buffer\"}");
    jsize len = (*env)->GetArrayLength(env, bytes);
    if (len < 12) return (*env)->NewStringUTF(env, "{\"ok\":false,\"error\":\"too_small\"}");
    jbyte *data = (*env)->GetByteArrayElements(env, bytes, NULL);
    if (!data) return (*env)->NewStringUTF(env, "{\"ok\":false,\"error\":\"memory_error\"}");

    unload_engine_project();
    gm82_diag_clear_unmapped();
    gm82_diag_set_error("import_gmk", "");

    int stream_parsed = 0;
    gm82_project_ir *ir = gm82_project_ir_create();
    if (ir && gm82_gmk_stream_parse((const uint8_t *)data, (size_t)len, ir) &&
        ir->room_count > 0 && gm82_text_build_runtime_bundle(ir, &g_engine_bundle)) {
        g_engine_ir = ir;
        g_using_bundle = 1;
        stream_parsed = 1;
    } else {
        if (ir) gm82_project_ir_free(ir);
        gm82_decoded_sprite_list_init(&g_engine_sprites);
        gm82_decoded_background_list_init(&g_engine_bgs);
        gm82_decoded_sound_list_init(&g_engine_sounds);
        gm82_decoded_object_list_init(&g_engine_objs);
        gm82_decoded_room_list_init(&g_engine_rooms);
        memset(&g_engine_sprite_groups, 0, sizeof(g_engine_sprite_groups));
        memset(&g_engine_actions, 0, sizeof(g_engine_actions));
        gm82_script_list_init(&g_engine_scripts);

        gm82_decode_sprites_from_gmk((const uint8_t *)data, (size_t)len, &g_engine_sprites);
        gm82_decode_backgrounds_from_gmk((const uint8_t *)data, (size_t)len, &g_engine_bgs);
        gm82_decode_sounds_from_gmk((const uint8_t *)data, (size_t)len, &g_engine_sounds);
        gm82_decode_objects_from_gmk((const uint8_t *)data, (size_t)len, &g_engine_objs);
        gm82_decode_rooms_from_gmk((const uint8_t *)data, (size_t)len, &g_engine_rooms);
        gm82_actions_scan_gmk((const uint8_t *)data, (size_t)len, &g_engine_actions);
        gm82_decode_scripts_from_gmk((const uint8_t *)data, (size_t)len, &g_engine_scripts);
        gm82_events_autobind_gml_from_gmk((const uint8_t *)data, (size_t)len);
        gm82_sprite_groups_build(&g_engine_sprites, &g_engine_sprite_groups);
    }

    (*env)->ReleaseByteArrayElements(env, bytes, data, JNI_ABORT);

    int n_spr = 0, n_bg = 0, n_snd = 0, n_obj = 0, n_rm = 0;
    finalize_loaded_engine_project(stream_parsed, &n_spr, &n_bg, &n_snd, &n_obj, &n_rm);

    char buf[512];
    snprintf(buf, sizeof(buf),
        "{\"ok\":true,\"status\":\"ok\",\"streamParsed\":%s,\"sprites\":%d,\"backgrounds\":%d,\"sounds\":%d,\"objects\":%d,\"rooms\":%d,\"registeredResources\":%d,\"registeredObjects\":%d,\"complete\":%s}",
        stream_parsed ? "true" : "false",
        n_spr, n_bg, n_snd, n_obj, n_rm, g_resource_count, g_object_count,
        (n_rm > 0) ? "true" : "false");

    return (*env)->NewStringUTF(env, buf);
}

JNIEXPORT jstring JNICALL
Java_com_normaker_nativefull_MainActivity_nativeImportGm82Project(JNIEnv *env, jclass clazz, jstring dirPath) {
    (void)clazz;
    char *path = jni_dup_string(env, dirPath);
    if (!path || !path[0]) {
        free(path);
        return (*env)->NewStringUTF(env, "{\"ok\":false,\"complete\":false,\"error\":\"empty_path\"}");
    }

    unload_engine_project();
    gm82_diag_clear_unmapped();
    gm82_diag_set_error("import_gm82", "");

    gm82_text_load_result load_res = gm82_text_load_project(path);
    free(path);
    if (!load_res.ok || !load_res.ir) {
        if (load_res.ir) gm82_project_ir_free(load_res.ir);
        gm82_diag_set_error("import_gm82", load_res.error[0] ? load_res.error : "gm82 load failed");
        char errbuf[384];
        snprintf(errbuf, sizeof(errbuf), "{\"ok\":false,\"complete\":false,\"error\":\"%s\"}",
                 load_res.error[0] ? load_res.error : "gm82 load failed");
        return (*env)->NewStringUTF(env, errbuf);
    }

    (void)gm82_text_materialize_assets(load_res.ir);
    if (!gm82_text_build_runtime_bundle(load_res.ir, &g_engine_bundle)) {
        gm82_project_ir_free(load_res.ir);
        gm82_diag_set_error("import_gm82", "failed to build runtime bundle");
        return (*env)->NewStringUTF(env, "{\"ok\":false,\"complete\":false,\"error\":\"bundle_failed\"}");
    }

    g_engine_ir = load_res.ir;
    g_using_bundle = 1;

    int n_spr = 0, n_bg = 0, n_snd = 0, n_obj = 0, n_rm = 0;
    finalize_loaded_engine_project(1, &n_spr, &n_bg, &n_snd, &n_obj, &n_rm);

    char buf[512];
    snprintf(buf, sizeof(buf),
        "{\"ok\":true,\"status\":\"ok\",\"gm82Text\":true,\"sprites\":%d,\"backgrounds\":%d,\"sounds\":%d,\"objects\":%d,\"rooms\":%d,\"registeredResources\":%d,\"registeredObjects\":%d,\"complete\":%s}",
        n_spr, n_bg, n_snd, n_obj, n_rm, g_resource_count, g_object_count,
        (n_rm > 0) ? "true" : "false");
    return (*env)->NewStringUTF(env, buf);
}

JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeCompileGml(JNIEnv *env, jclass clazz, jstring source) {
    for (int i = 0; i < MAX_CODES; i++) {
        if (!g_codes[i].in_use) {
            int new_id = ++g_code_id_counter;
            g_codes[i].id = new_id;
            g_codes[i].in_use = 1;
            g_codes[i].arg_count = 0;
            g_codes[i].source = NULL;
            if (source) {
                const char *src = (*env)->GetStringUTFChars(env, source, NULL);
                if (src) {
                    g_codes[i].source = strdup(src);
                    (*env)->ReleaseStringUTFChars(env, source, src);
                }
            }
            return new_id;
        }
    }
    return ++g_code_id_counter;
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeCodeExists(JNIEnv *env, jclass clazz, jint codeId) {
    for (int i = 0; i < MAX_CODES; i++) {
        if (g_codes[i].in_use && g_codes[i].id == codeId) return JNI_TRUE;
    }
    return JNI_FALSE;
}

JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeCodeGetArgCount(JNIEnv *env, jclass clazz, jint codeId) {
    for (int i = 0; i < MAX_CODES; i++) {
        if (g_codes[i].in_use && g_codes[i].id == codeId) return g_codes[i].arg_count;
    }
    return 0;
}

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeCodeDestroy(JNIEnv *env, jclass clazz, jint codeId) {
    for (int i = 0; i < MAX_CODES; i++) {
        if (g_codes[i].in_use && g_codes[i].id == codeId) {
            g_codes[i].in_use = 0;
            if (g_codes[i].source) {
                free(g_codes[i].source);
                g_codes[i].source = NULL;
            }
            break;
        }
    }
}

JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeCodeExecute(JNIEnv *env, jclass clazz, jint instanceId, jint codeId) {
    for(int i=0;i<MAX_CODES;i++) if(g_codes[i].in_use&&g_codes[i].id==codeId&&g_codes[i].source){
        jstring src=(*env)->NewStringUTF(env,g_codes[i].source); if(!src) return 0;
        jboolean ok=Java_com_normaker_nativefull_MainActivity_nativeRuntimeExecuteGml(env,clazz,instanceId,src); (*env)->DeleteLocalRef(env,src); return ok?1:0;
    } return 0;
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeExportRom(JNIEnv *env, jclass clazz, jstring title, jstring outputPath, jint kind) {
    char *t = jni_dup_string(env, title), *o = jni_dup_string(env, outputPath);
    double result = 0.0;
    if (t && o) {
        if (kind == 1) result = nor_export_nes_native(t, o);
        else if (kind == 2) result = nor_export_gbc_native(t, o);
        else if (kind == 3) result = nor_export_gba_native(t, o);
        else if (kind == 4) result = nor_export_pnor_native(t, o);
        else if (kind == 5) result = nor_export_nor_native(t, o);
    }
    free(t); free(o); return result != 0.0 ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeDetectRom(JNIEnv *env, jclass clazz, jstring path) {
    char *p = jni_dup_string(env, path);
    double result = p ? nor_import_format_native(p) : 0.0;
    free(p); return (jint)result;
}
JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeValidateRom(JNIEnv *env, jclass clazz, jstring path, jint kind) {
    char *p = jni_dup_string(env, path);
    double result = p ? nor_validate_rom_native(p, (double)kind) : 0.0;
    free(p); return result != 0.0 ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeClearResourceRegistry(JNIEnv *env, jclass clazz) {
    free_native_bitmaps();
    g_resource_count = 0;
    g_object_count = 0;
    memset(g_resources, 0, sizeof(g_resources));
    memset(g_objects, 0, sizeof(g_objects));
}

JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRegisterResource(JNIEnv *env, jclass clazz, jint kind, jint id, jstring name, jint width, jint height, jint frames) {
    if (g_resource_count < MAX_RESOURCES) {
        NativeResource *res = &g_resources[g_resource_count++];
        res->kind = kind;
        res->id = id;
        res->width = width;
        res->height = height;
        res->frames = frames;
        res->name[0] = '\0';
        if (name) {
            const char *str = (*env)->GetStringUTFChars(env, name, NULL);
            if (str) {
                strncpy(res->name, str, sizeof(res->name) - 1);
                res->name[sizeof(res->name) - 1] = '\0';
                (*env)->ReleaseStringUTFChars(env, name, str);
            }
        }
    }
    return id;
}

JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeResourceCount(JNIEnv *env, jclass clazz) {
    return g_resource_count;
}

JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRegisterObjectEvent(JNIEnv *env, jclass clazz, jint objectId, jint mainType, jint subType, jstring source) {
    if (g_event_count < MAX_EVENTS) {
        NativeEvent *ev = &g_events[g_event_count++];
        ev->objectId = objectId;
        ev->mainType = mainType;
        ev->subType = subType;
        ev->source[0] = '\0';
        if (source) {
            const char *str = (*env)->GetStringUTFChars(env, source, NULL);
            if (str) {
                strncpy(ev->source, str, sizeof(ev->source) - 1);
                ev->source[sizeof(ev->source) - 1] = '\0';
                (*env)->ReleaseStringUTFChars(env, source, str);
            }
        }
        return g_event_count;
    }
    return g_event_count;
}

JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeObjectEventCount(JNIEnv *env, jclass clazz) {
    return g_event_count;
}

JNIEXPORT jdouble JNICALL
Java_com_normaker_nativefull_MainActivity_nativeGm82CompatCheck(JNIEnv *env, jclass clazz) {
    return 8.2;
}

JNIEXPORT jdouble JNICALL
Java_com_normaker_nativefull_MainActivity_nativeGm82ColorReverse(JNIEnv *env, jclass clazz, jdouble color) {
    int c = (int)color;
    int r = c & 0xFF;
    int g = (c >> 8) & 0xFF;
    int b = (c >> 16) & 0xFF;
    return (double)((r << 16) | (g << 8) | b);
}

JNIEXPORT jdouble JNICALL
Java_com_normaker_nativefull_MainActivity_nativeGm82ColorInverse(JNIEnv *env, jclass clazz, jdouble color) {
    int c = (int)color;
    return (double)(0xFFFFFF ^ (c & 0xFFFFFF));
}

JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeGm82TokenStart(JNIEnv *env, jclass clazz, jstring text, jstring separator) {
    if (!text || !separator) return 0;
    const char *native_str = (*env)->GetStringUTFChars(env, text, NULL);
    const char *native_sep = (*env)->GetStringUTFChars(env, separator, NULL);
    if (!native_str || !native_sep) {
        if (native_str) (*env)->ReleaseStringUTFChars(env, text, native_str);
        if (native_sep) (*env)->ReleaseStringUTFChars(env, separator, native_sep);
        return 0;
    }
    memset(g_token_buf, 0, sizeof(g_token_buf));
    memset(g_token_sep, 0, sizeof(g_token_sep));
    strncpy(g_token_buf, native_str, sizeof(g_token_buf) - 1);
    strncpy(g_token_sep, native_sep, sizeof(g_token_sep) - 1);
    g_token_buf[sizeof(g_token_buf) - 1] = '\0';
    g_token_sep[sizeof(g_token_sep) - 1] = '\0';
    (*env)->ReleaseStringUTFChars(env, text, native_str);
    (*env)->ReleaseStringUTFChars(env, separator, native_sep);
    g_token_ctx = g_token_buf;
    return 1;
}

JNIEXPORT jstring JNICALL
Java_com_normaker_nativefull_MainActivity_nativeGm82TokenNext(JNIEnv *env, jclass clazz) {
    if (!g_token_ctx || !*g_token_ctx) return (*env)->NewStringUTF(env, "");
    char *token = strtok_r(g_token_ctx, g_token_sep, &g_token_ctx);
    return (*env)->NewStringUTF(env, token ? token : "");
}

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeGm82TokenReset(JNIEnv *env, jclass clazz) {
    (void)env; (void)clazz;
    g_token_ctx = NULL;
    memset(g_token_buf, 0, sizeof(g_token_buf));
}

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeInitGles(JNIEnv *env, jclass clazz) {
    (void)env; (void)clazz;
    gm82_gl_reset_program();
    g_gl_stale_count = 0;
    gm82_gl_invalidate_handles(&g_gl_atlas);
}

typedef struct {
    int     kind; /* 0 = instance, 1 = tile */
    int32_t depth;
    int32_t tie_id;
    int32_t index;
} jni_gl_draw_item;

static int cmp_jni_gl_draw_item(const void *a, const void *b) {
    const jni_gl_draw_item *da = (const jni_gl_draw_item *)a;
    const jni_gl_draw_item *db = (const jni_gl_draw_item *)b;
    if (da->depth > db->depth) return -1;
    if (da->depth < db->depth) return 1;
    if (da->kind != db->kind) return (da->kind == 1) ? -1 : 1;
    return (da->tie_id < db->tie_id) ? -1 : (da->tie_id > db->tie_id ? 1 : 0);
}

static void draw_gl_background_layer(const gm82_runtime *rt, const gm82_decoded_room *room,
                                     const gm82_gl_atlas *atlas,
                                     float vx, float vy, float vw, float vh, int foreground_pass) {
    if (!rt || !room || !atlas || !atlas->backgrounds) return;
    for (int bi = 0; bi < 8; bi++) {
        const gm82_decoded_room_bg *rbg = &room->backgrounds[bi];
        if (!rbg->visible || (rbg->foreground ? 1 : 0) != foreground_pass) continue;
        if (rbg->bg_index < 0 || rbg->bg_index >= atlas->background_count) continue;
        const gm82_gl_texture *tex = &atlas->backgrounds[rbg->bg_index];
        if (tex->tex_id == 0 || tex->width <= 0 || tex->height <= 0) continue;

        if (rbg->stretch) {
            gm82_gl_draw_region_quad(tex->tex_id, vx, vy, vw, vh, 0.0f, 0.0f, 1.0f, 1.0f, 0xFFFFFFu, 1.0f);
            continue;
        }

        float tw = (float)tex->width;
        float th = (float)tex->height;
        float bx = (float)(rbg->x + rt->bg_offset_x[bi]);
        float by = (float)(rbg->y + rt->bg_offset_y[bi]);

        float start_x = bx, end_x = bx + tw * 0.5f;
        float start_y = by, end_y = by + th * 0.5f;
        if (rbg->htiled) {
            float off = fmodf(bx - vx, tw);
            if (off > 0.0f) off -= tw;
            start_x = vx + off;
            end_x = vx + vw;
        }
        if (rbg->vtiled) {
            float off = fmodf(by - vy, th);
            if (off > 0.0f) off -= th;
            start_y = vy + off;
            end_y = vy + vh;
        }

        int iy_count = 0;
        for (float ty = start_y; ty < end_y && iy_count < 256; ty += (rbg->vtiled ? th : vh + th), iy_count++) {
            int ix_count = 0;
            for (float tx = start_x; tx < end_x && ix_count < 256; tx += (rbg->htiled ? tw : vw + tw), ix_count++) {
                gm82_gl_draw_region_quad(tex->tex_id, tx, ty, tw, th, 0.0f, 0.0f, 1.0f, 1.0f, 0xFFFFFFu, 1.0f);
            }
        }
    }
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeDrawGles(JNIEnv *env, jclass clazz, jint viewW, jint viewH) {
    (void)env; (void)clazz;
    if (viewW <= 0 || viewH <= 0) return JNI_FALSE;

    if (g_gl_stale_count > 0) {
        glDeleteTextures((GLsizei)g_gl_stale_count, (const GLuint *)g_gl_stale_tex);
        g_gl_stale_count = 0;
    }

    const gm82_decoded_room_list *rooms = active_rooms();
    const gm82_decoded_sprite_list *sprites = active_sprites();
    const gm82_decoded_background_list *bgs = active_bgs();
    const gm82_sprite_group_list *groups = active_sprite_groups();

    int engine_room_ok = (g_engine_loaded && g_runtime_active && rooms && rooms->count > 0 &&
                          g_engine_rt.current_room >= 0 && g_engine_rt.current_room < rooms->count);

    if (!engine_room_ok) {
        int fw = (g_engine_loaded && g_engine_rt.room_width > 0) ? g_engine_rt.room_width : (g_room_w > 0 ? g_room_w : 640);
        int fh = (g_engine_loaded && g_engine_rt.room_height > 0) ? g_engine_rt.room_height : (g_room_h > 0 ? g_room_h : 480);
        if (fw > 2048) fw = 2048;
        if (fh > 2048) fh = 2048;
        size_t need = (size_t)fw * (size_t)fh * 4u;
        if (need > g_gles_rgba_cap) {
            uint8_t *buf = (uint8_t *)realloc(g_gles_rgba, need);
            if (!buf) return JNI_FALSE;
            g_gles_rgba = buf;
            g_gles_rgba_cap = need;
        }
        render_active_frame_rgba(g_gles_rgba, fw, fh);

        glDisable(GL_SCISSOR_TEST);
        glViewport(0, 0, (GLsizei)viewW, (GLsizei)viewH);
        glClearColor(20.0f / 255.0f, 20.0f / 255.0f, 40.0f / 255.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

        double sx = (double)viewW / (double)fw;
        double sy = (double)viewH / (double)fh;
        double scale = sx < sy ? sx : sy;
        int dw = (int)(fw * scale);
        int dh = (int)(fh * scale);
        int vx = ((int)viewW - dw) / 2;
        int vy = ((int)viewH - dh) / 2;
        if (dw > 0 && dh > 0) {
            glViewport((GLint)vx, (GLint)vy, (GLsizei)dw, (GLsizei)dh);
        }
        jboolean ok = gm82_gl_draw_rgba_fullscreen(g_gles_rgba, fw, fh) ? JNI_TRUE : JNI_FALSE;
        glViewport(0, 0, (GLsizei)viewW, (GLsizei)viewH);
        return ok;
    }

    if (!g_gl_atlas.ready) {
        if (sprites && sprites->count > 0) {
            gm82_gl_upload_sprites(&g_gl_atlas, sprites);
        } else {
            g_gl_atlas.ready = 1;
        }
        if (bgs && bgs->count > 0) {
            gm82_gl_upload_backgrounds(&g_gl_atlas, bgs);
        }
    }

    const gm82_decoded_room *room = &rooms->items[g_engine_rt.current_room];
    double alpha = g_engine_rt.render_alpha;
    if (alpha < 0.0) alpha = 0.0;
    if (alpha > 1.0) alpha = 1.0;

    float vw = (g_engine_rt.view_enabled && g_engine_rt.view_w > 0.0)
               ? (float)g_engine_rt.view_w
               : (float)(g_engine_rt.room_width > 0 ? g_engine_rt.room_width : 640);
    float vh = (g_engine_rt.view_enabled && g_engine_rt.view_h > 0.0)
               ? (float)g_engine_rt.view_h
               : (float)(g_engine_rt.room_height > 0 ? g_engine_rt.room_height : 480);

    float ivx = 0.0f, ivy = 0.0f;
    if (g_engine_rt.view_enabled) {
        double dx = g_engine_rt.view_x - g_engine_rt.prev_view_x;
        double dy = g_engine_rt.view_y - g_engine_rt.prev_view_y;
        if (fabs(dx) < vw * 0.5 && fabs(dy) < vh * 0.5) {
            ivx = (float)(g_engine_rt.prev_view_x + dx * alpha);
            ivy = (float)(g_engine_rt.prev_view_y + dy * alpha);
        } else {
            ivx = (float)g_engine_rt.view_x;
            ivy = (float)g_engine_rt.view_y;
        }
    }

    glDisable(GL_SCISSOR_TEST);
    glViewport(0, 0, (GLsizei)viewW, (GLsizei)viewH);
    glClearColor(12.0f / 255.0f, 14.0f / 255.0f, 24.0f / 255.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    double sx = (double)viewW / (double)vw;
    double sy = (double)viewH / (double)vh;
    double scale = sx < sy ? sx : sy;
    int dw = (int)(vw * scale);
    int dh = (int)(vh * scale);
    int vpx = ((int)viewW - dw) / 2;
    int vpy = ((int)viewH - dh) / 2;
    if (dw <= 0 || dh <= 0) return JNI_FALSE;

    glViewport((GLint)vpx, (GLint)vpy, (GLsizei)dw, (GLsizei)dh);
    glEnable(GL_SCISSOR_TEST);
    glScissor((GLint)vpx, (GLint)vpy, (GLsizei)dw, (GLsizei)dh);

    if (room->draw_background_color) {
        uint32_t col = (uint32_t)room->background_color;
        float r = (float)(col & 0xFFu) / 255.0f;
        float g = (float)((col >> 8) & 0xFFu) / 255.0f;
        float b = (float)((col >> 16) & 0xFFu) / 255.0f;
        glClearColor(r, g, b, 1.0f);
    } else {
        glClearColor(20.0f / 255.0f, 20.0f / 255.0f, 40.0f / 255.0f, 1.0f);
    }
    glClear(GL_COLOR_BUFFER_BIT);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDisable(GL_CULL_FACE);

    gm82_gl_begin_ortho(ivx, ivy, ivx + vw, ivy + vh);

    draw_gl_background_layer(&g_engine_rt, room, &g_gl_atlas, ivx, ivy, vw, vh, 0);

    int max_items = g_engine_rt.instance_count + room->tile_count;
    if (max_items > 0) {
        jni_gl_draw_item *items = (jni_gl_draw_item *)malloc((size_t)max_items * sizeof(jni_gl_draw_item));
        int item_n = 0;
        if (items) {
            for (int i = 0; i < g_engine_rt.instance_count; i++) {
                const gm82_instance *inst = &g_engine_rt.instances[i];
                if (!inst->alive || !inst->visible) continue;
                items[item_n++] = (jni_gl_draw_item){ 0, inst->depth, inst->id, i };
            }
            if (room->tiles && bgs && g_gl_atlas.backgrounds) {
                for (int t = 0; t < room->tile_count; t++) {
                    items[item_n++] = (jni_gl_draw_item){ 1, room->tiles[t].depth, room->tiles[t].id, t };
                }
            }
            if (item_n > 1) qsort(items, (size_t)item_n, sizeof(items[0]), cmp_jni_gl_draw_item);

            int ov_w = (int)vw;
            int ov_h = (int)vh;
            if (ov_w < 64) ov_w = 64;
            if (ov_h < 64) ov_h = 64;
            if (ov_w > 1920) ov_w = 1920;
            if (ov_h > 1080) ov_h = 1080;
            size_t ov_bytes = (size_t)ov_w * (size_t)ov_h * 4u;
            int overlay_inited = 0;
            int overlay_dirty = 0;

            for (int k = 0; k < item_n; k++) {
                if (items[k].kind == 1) {
                    if (overlay_dirty) {
                        gm82_gl_draw_rgba_overlay(g_gles_rgba, ov_w, ov_h);
                        memset(g_gles_rgba, 0, ov_bytes);
                        overlay_dirty = 0;
                    }
                    const gm82_decoded_tile *tl = &room->tiles[items[k].index];
                    if (tl->background_index < 0 || tl->background_index >= g_gl_atlas.background_count) continue;
                    const gm82_gl_texture *bgtex = &g_gl_atlas.backgrounds[tl->background_index];
                    if (bgtex->tex_id == 0 || bgtex->width <= 0 || bgtex->height <= 0) continue;
                    float tw = (float)(tl->width > 0 ? tl->width : bgtex->width);
                    float th = (float)(tl->height > 0 ? tl->height : bgtex->height);
                    float sx_sc = tl->xscale != 0.0 ? (float)tl->xscale : 1.0f;
                    float sy_sc = tl->yscale != 0.0 ? (float)tl->yscale : 1.0f;
                    float u0 = (float)tl->xo / (float)bgtex->width;
                    float v0 = (float)tl->yo / (float)bgtex->height;
                    float u1 = (float)(tl->xo + tw) / (float)bgtex->width;
                    float v1 = (float)(tl->yo + th) / (float)bgtex->height;
                    uint32_t tcol = tl->blend ? (uint32_t)tl->blend : 0xFFFFFFu;
                    gm82_gl_draw_region_quad(bgtex->tex_id, (float)tl->x, (float)tl->y,
                                             tw * sx_sc, th * sy_sc,
                                             u0, v0, u1, v1, tcol, 1.0f);
                    continue;
                }

                gm82_instance *inst = &g_engine_rt.instances[items[k].index];
                if (!inst->alive || !inst->visible) continue;
                if (gm82_events_has_draw_event(&g_engine_rt, inst)) {
                    if (!overlay_inited) {
                        if (ov_bytes > g_gles_rgba_cap) {
                            uint8_t *buf = (uint8_t *)realloc(g_gles_rgba, ov_bytes);
                            if (buf) {
                                g_gles_rgba = buf;
                                g_gles_rgba_cap = ov_bytes;
                            }
                        }
                        if (g_gles_rgba && g_gles_rgba_cap >= ov_bytes) {
                            memset(g_gles_rgba, 0, ov_bytes);
                            overlay_inited = 1;
                        }
                    }
                    if (overlay_inited && g_gles_rgba) {
                        double saved_vx = g_engine_rt.view_x;
                        double saved_vy = g_engine_rt.view_y;
                        g_engine_rt.view_x = ivx;
                        g_engine_rt.view_y = ivy;
                        gm82_draw_set_target(g_gles_rgba, (int32_t)ov_w, (int32_t)ov_h);
                        gm82_events_fire_draw_single(&g_engine_rt, inst);
                        gm82_draw_set_target(NULL, 0, 0);
                        g_engine_rt.view_x = saved_vx;
                        g_engine_rt.view_y = saved_vy;
                        overlay_dirty = 1;
                    }
                    continue;
                }

                if (!sprites || inst->sprite_index < 0 || !g_gl_atlas.sprites) continue;
                if (overlay_dirty) {
                    gm82_gl_draw_rgba_overlay(g_gles_rgba, ov_w, ov_h);
                    memset(g_gles_rgba, 0, ov_bytes);
                    overlay_dirty = 0;
                }
                int frame_idx = inst->sprite_index;
                if (groups) {
                    int rfi = gm82_sprite_resolve_frame(groups, inst->sprite_index, inst->image_index);
                    if (rfi >= 0) frame_idx = rfi;
                }
                if (frame_idx < 0 || frame_idx >= g_gl_atlas.sprite_count || frame_idx >= sprites->count) continue;
                const gm82_gl_texture *stex = &g_gl_atlas.sprites[frame_idx];
                if (stex->tex_id == 0 || stex->width <= 0 || stex->height <= 0) continue;
                const gm82_decoded_frame *fr = &sprites->frames[frame_idx];

                float draw_x = (float)(inst->xprevious + (inst->x - inst->xprevious) * alpha);
                float draw_y = (float)(inst->yprevious + (inst->y - inst->yprevious) * alpha);
                if (fabs(inst->x - inst->xprevious) > vw * 0.5 || fabs(inst->y - inst->yprevious) > vh * 0.5) {
                    draw_x = (float)inst->x;
                    draw_y = (float)inst->y;
                }
                float xs = inst->image_xscale != 0.0 ? (float)inst->image_xscale : 1.0f;
                float ys = inst->image_yscale != 0.0 ? (float)inst->image_yscale : 1.0f;
                float ia = inst->image_alpha > 0.0 ? (float)inst->image_alpha : 1.0f;
                uint32_t col = inst->image_blend ? (uint32_t)inst->image_blend : 0xFFFFFFu;

                gm82_gl_draw_sprite_quad(stex->tex_id, draw_x, draw_y,
                                         (float)stex->width, (float)stex->height,
                                         (float)fr->origin_x, (float)fr->origin_y,
                                         xs, ys, (float)inst->image_angle, col, ia);
            }
            if (overlay_dirty && g_gles_rgba) {
                gm82_gl_draw_rgba_overlay(g_gles_rgba, ov_w, ov_h);
            }
            free(items);
        }
    }

    draw_gl_background_layer(&g_engine_rt, room, &g_gl_atlas, ivx, ivy, vw, vh, 1);

    glDisable(GL_SCISSOR_TEST);
    glViewport(0, 0, (GLsizei)viewW, (GLsizei)viewH);
    return JNI_TRUE;
}

JNIEXPORT jstring JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeDiagnosticsJson(
        JNIEnv *env, jclass clazz, jstring backend, jint soundpoolCount, jint fps) {
    (void)clazz;
    char *bstr = jni_dup_string(env, backend);
    int room_id = g_engine_loaded ? g_engine_rt.current_room : g_current_room;
    int rw = (g_engine_loaded && g_engine_rt.room_width > 0) ? g_engine_rt.room_width : g_room_w;
    int rh = (g_engine_loaded && g_engine_rt.room_height > 0) ? g_engine_rt.room_height : g_room_h;
    int inst_n = g_engine_loaded ? g_engine_rt.instance_count : g_instance_count;
    int spr_n = g_engine_loaded ? active_sprites()->count : g_resource_count;
    int obj_n = g_engine_loaded ? active_objs()->count : g_object_count;
    int bg_n = g_engine_loaded ? active_bgs()->count : 0;
    int snd_n = g_engine_loaded ? active_sounds()->count : 0;
    int frame_n = g_engine_loaded ? g_engine_rt.frame : 0;

    char json[8192];
    gm82_diag_build_json(
        json, sizeof(json),
        bstr ? bstr : "GLES2",
        gm82_opensles_is_active() ? 1 : 0,
        (int)soundpoolCount,
        room_id, rw, rh,
        inst_n, spr_n, obj_n, bg_n, snd_n,
        frame_n, (int)fps);
    free(bstr);
    return (*env)->NewStringUTF(env, json);
}

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeClearDiagnostics(JNIEnv *env, jclass clazz) {
    (void)env; (void)clazz;
    gm82_diag_clear_unmapped();
}

JNIEXPORT jboolean JNICALL
Java_com_normaker_nativefull_MainActivity_nativeIsOpenSlesActive(JNIEnv *env, jclass clazz) {
    (void)env; (void)clazz;
    return gm82_opensles_is_active() ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeGetRoomWidth(JNIEnv *env, jclass clazz) {
    (void)env; (void)clazz;
    if (g_engine_loaded) {
        if (g_engine_rt.view_enabled && g_engine_rt.view_w > 0.0) return (jint)g_engine_rt.view_w;
        if (g_engine_rt.room_width > 0) return (jint)g_engine_rt.room_width;
    }
    return (jint)g_room_w;
}

JNIEXPORT jint JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeGetRoomHeight(JNIEnv *env, jclass clazz) {
    (void)env; (void)clazz;
    if (g_engine_loaded) {
        if (g_engine_rt.view_enabled && g_engine_rt.view_h > 0.0) return (jint)g_engine_rt.view_h;
        if (g_engine_rt.room_height > 0) return (jint)g_engine_rt.room_height;
    }
    return (jint)g_room_h;
}

JNIEXPORT jstring JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeConsumeUiEvents(JNIEnv *env, jclass clazz) {
    (void)clazz;
    if (gm82_ui_event_pending_count() <= 0) {
        return (*env)->NewStringUTF(env, "[]");
    }
    char out[4096];
    int pos = snprintf(out, sizeof(out), "[");
    int first = 1;
    for (int i = 0; i < 8; i++) {
        char item[1536];
        int n = gm82_ui_event_pop_json(item, sizeof(item));
        if (n <= 0) break;
        if ((size_t)pos + (size_t)n + 8 >= sizeof(out)) break;
        pos += snprintf(out + pos, sizeof(out) - (size_t)pos, "%s%s", first ? "" : ",", item);
        first = 0;
    }
    snprintf(out + pos, sizeof(out) - (size_t)pos, "]");
    return (*env)->NewStringUTF(env, out);
}

JNIEXPORT void JNICALL
Java_com_normaker_nativefull_MainActivity_nativeRuntimeSetQuestionAnswer(JNIEnv *env, jclass clazz, jboolean yes) {
    (void)env; (void)clazz;
    gm82_ui_event_set_question_answer(yes ? 1 : 0);
}
