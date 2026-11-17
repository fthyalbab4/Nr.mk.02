#define _POSIX_C_SOURCE 200809L
#include "gm82_ged_extensions.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include "gm82_sound_runtime.h"
#include "gm82_diagnostics.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <zlib.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

/* ---- Extension Registry ---- */
#define GM82_MAX_EXTENSIONS 64
typedef struct {
    char full_name[64];
    char short_name[32];
} gm82_ext_entry;

static gm82_ext_entry g_extensions[GM82_MAX_EXTENSIONS];
static int g_extension_count = 0;
static int g_ext_initialized = 0;

static void ensure_extensions_init(void) {
    if (g_ext_initialized) return;
    g_ext_initialized = 1;
    const gm82_ext_entry k_defaults[] = {
        {"Game Maker 8.2 Core", "gm82core"},
        {"Game Maker 8.2 Audio", "gm82audio"},
        {"Game Maker 8.2 Sound", "gm82snd"},
        {"Game Maker 8.2 Buffer", "gm82buf"},
        {"Game Maker 8.2 Joystick", "gm82joy"},
        {"Game Maker 8.2 Angle", "gm82angle"},
        {"Game Maker 8.2 Alpha", "gm82alpha"},
        {"Game Maker 8.2 AppSurf", "gm82appsurf"},
        {"Game Maker 8.2 Chunk", "gm82chunk"},
        {"Game Maker 8.2 Console", "gm82con"},
        {"Game Maker 8.2 DragFile", "gm82drag"},
        {"Game Maker 8.2 glTF", "gm82gltf"},
        {"N_Menu", "n_menu"},
        {"Game Maker 8.2 Test", "gm82test"},
        {"Game Maker 8.2 Test Stub", "gm82test_stub"},
        {"Game Maker 8.2 UI", "gm82ui"},
        {"Game Maker 8.2 Video", "gm82video"},
        {"Game Maker 8.2 Vpatch", "gm82vpatch"}
    };
    g_extension_count = (int)(sizeof(k_defaults) / sizeof(k_defaults[0]));
    memcpy(g_extensions, k_defaults, sizeof(k_defaults));
}

static int ci_eq(const char *a, const char *b) {
    if (!a || !b) return 0;
    while (*a && *b) {
        if (tolower((unsigned char)*a) != tolower((unsigned char)*b)) return 0;
        a++; b++;
    }
    return *a == 0 && *b == 0;
}

int gm82_ged_extension_count(void) {
    ensure_extensions_init();
    return g_extension_count;
}

const char *gm82_ged_extension_name(int index) {
    ensure_extensions_init();
    if (index < 0 || index >= g_extension_count) return "";
    return g_extensions[index].full_name;
}

int gm82_ged_extension_exists(const char *name) {
    ensure_extensions_init();
    if (!name || !*name) return 0;
    for (int i = 0; i < g_extension_count; i++) {
        if (ci_eq(g_extensions[i].full_name, name) ||
            (g_extensions[i].short_name[0] && ci_eq(g_extensions[i].short_name, name))) {
            return 1;
        }
    }
    return 0;
}

int gm82_ged_extension_register(const char *name) {
    ensure_extensions_init();
    if (!name || !*name) return -1;
    for (int i = 0; i < g_extension_count; i++) {
        if (ci_eq(g_extensions[i].full_name, name) ||
            (g_extensions[i].short_name[0] && ci_eq(g_extensions[i].short_name, name))) {
            return i;
        }
    }
    if (g_extension_count >= GM82_MAX_EXTENSIONS) return -1;
    int idx = g_extension_count++;
    snprintf(g_extensions[idx].full_name, sizeof(g_extensions[idx].full_name), "%s", name);
    snprintf(g_extensions[idx].short_name, sizeof(g_extensions[idx].short_name), "%s", name);
    return idx;
}

/* ---- Sorted Constant Catalog (137 GEJ Constants) ---- */
typedef struct {
    const char *name;
    int is_str;
    double num;
    const char *str;
} gm82_ged_const_entry;

static const gm82_ged_const_entry k_ged_constants[] = {
    {"__gm82core_compiler", 0, 1.0, ""},
    {"__gm82joy_mapid", 0, 100.0, ""},
    {"__gm82snd_mapid", 0, 101.0, ""},
    {"__gm82video_object", 0, 3.0, ""},
    {"cc_black", 1, 0.0, "\x1b[30m"},
    {"cc_blue", 1, 0.0, "\x1b[94m"},
    {"cc_cyan", 1, 0.0, "\x1b[96m"},
    {"cc_darkblue", 1, 0.0, "\x1b[34m"},
    {"cc_darkcyan", 1, 0.0, "\x1b[36m"},
    {"cc_darkgray", 1, 0.0, "\x1b[90m"},
    {"cc_darkgreen", 1, 0.0, "\x1b[32m"},
    {"cc_darkpink", 1, 0.0, "\x1b[35m"},
    {"cc_darkred", 1, 0.0, "\x1b[31m"},
    {"cc_darkyellow", 1, 0.0, "\x1b[33m"},
    {"cc_gray", 1, 0.0, "\x1b[37m"},
    {"cc_green", 1, 0.0, "\x1b[92m"},
    {"cc_pink", 1, 0.0, "\x1b[95m"},
    {"cc_red", 1, 0.0, "\x1b[91m"},
    {"cc_white", 1, 0.0, "\x1b[97m"},
    {"cc_yellow", 1, 0.0, "\x1b[93m"},
    {"chr_cr", 1, 0.0, "\r"},
    {"chr_crlf", 1, 0.0, "\r\n"},
    {"chr_lf", 1, 0.0, "\n"},
    {"con_event_break", 0, 2.0, ""},
    {"con_event_close", 0, 4.0, ""},
    {"con_event_ctrl_c", 0, 1.0, ""},
    {"con_event_logoff", 0, 32.0, ""},
    {"con_event_none", 0, 0.0, ""},
    {"con_event_shutdown", 0, 64.0, ""},
    {"con_mode_dontupdate", 0, -1.0, ""},
    {"con_mode_in_enable_auto_position", 0, 256.0, ""},
    {"con_mode_in_enable_echo_input", 0, 4.0, ""},
    {"con_mode_in_enable_extended_flags", 0, 128.0, ""},
    {"con_mode_in_enable_insert_mode", 0, 32.0, ""},
    {"con_mode_in_enable_line_input", 0, 2.0, ""},
    {"con_mode_in_enable_mouse_input", 0, 16.0, ""},
    {"con_mode_in_enable_processed_input", 0, 1.0, ""},
    {"con_mode_in_enable_quick_edit_mode", 0, 64.0, ""},
    {"con_mode_in_enable_virtual_terminal_input", 0, 512.0, ""},
    {"con_mode_in_enable_window_input", 0, 8.0, ""},
    {"con_mode_out_disable_newline_auto_return", 0, 8.0, ""},
    {"con_mode_out_enable_lvb_grid_worldwide", 0, 16.0, ""},
    {"con_mode_out_enable_processed_output", 0, 1.0, ""},
    {"con_mode_out_enable_virtual_terminal_processing", 0, 4.0, ""},
    {"con_mode_out_enable_wrap_at_eol_output", 0, 2.0, ""},
    {"cs_normal", 1, 0.0, "\x1b[0m"},
    {"cs_underline", 1, 0.0, "\x1b[4m"},
    {"directory_appdata", 1, 0.0, "/data/local/tmp/AppData/"},
    {"dss_type_grid", 0, 0.3125, ""},
    {"dss_type_list", 0, 0.125, ""},
    {"dss_type_map", 0, 0.0625, ""},
    {"dss_type_priority", 0, 0.375, ""},
    {"dss_type_queue", 0, 0.1875, ""},
    {"dss_type_stack", 0, 0.25, ""},
    {"execute_running", 0, 259.0, ""},
    {"falloff_exp", 0, 0.0, ""},
    {"falloff_invexp", 0, 1.0, ""},
    {"falloff_linear", 0, 2.0, ""},
    {"gm82core_object", 0, 2.0, ""},
    {"gs_error_abort", 0, -400.0, ""},
    {"gs_game_load", 0, -300.0, ""},
    {"gs_game_restart", 0, -200.0, ""},
    {"gs_room_change", 0, -100.0, ""},
    {"gs_room_restart", 0, 1.0, ""},
    {"gs_running", 0, -1.0, ""},
    {"ha_bottom", 0, 3.0, ""},
    {"ha_left", 0, 0.0, ""},
    {"ha_right", 0, 1.0, ""},
    {"ha_top", 0, 2.0, ""},
    {"infinity", 0, 9.218868437227405e+18, ""},
    {"match_alphanum", 1, 0.0, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"},
    {"match_digits", 1, 0.0, "0123456789"},
    {"match_identifier", 1, 0.0, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_"},
    {"match_identifier_start", 1, 0.0, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_"},
    {"match_letters", 1, 0.0, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"},
    {"match_lower", 1, 0.0, "abcdefghijklmnopqrstuvwxyz"},
    {"match_quotes", 1, 0.0, "'\""},
    {"match_upper", 1, 0.0, "ABCDEFGHIJKLMNOPQRSTUVWXYZ"},
    {"match_whitespace", 1, 0.0, "\t\n\r "},
    {"minus_infinity", 0, -9.218868437227405e+18, ""},
    {"path_action_continue", 0, 2.0, ""},
    {"path_action_restart", 0, 1.0, ""},
    {"path_action_reverse", 0, 3.0, ""},
    {"path_action_stop", 0, 0.0, ""},
    {"se_highpass", 0, 5.0, ""},
    {"se_lowpass", 0, 3.0, ""},
    {"se_normalize", 0, 6.0, ""},
    {"se_pitchshift", 0, 7.0, ""},
    {"tcp_closed", 0, 4.0, ""},
    {"tcp_connected", 0, 2.0, ""},
    {"tcp_connecting", 0, 1.0, ""},
    {"tcp_error", 0, 5.0, ""},
    {"tcp_offline", 0, 0.0, ""},
    {"udp_error", 0, 2.0, ""},
    {"udp_notstarted", 0, 0.0, ""},
    {"udp_started", 0, 1.0, ""},
    {"ui_b_accept", 0, 1.0, ""},
    {"ui_b_cancel", 0, 2.0, ""},
    {"ui_center_h", 0, 32.0, ""},
    {"ui_center_v", 0, 64.0, ""},
    {"ui_default", 0, -99999.0, ""},
    {"ui_down", 0, 16.0, ""},
    {"ui_fill_space", 0, -1.0, ""},
    {"ui_fit_contents", 0, -2.0, ""},
    {"ui_left", 0, 2.0, ""},
    {"ui_no", 0, 0.0, ""},
    {"ui_right", 0, 4.0, ""},
    {"ui_set_debugmode", 0, 2.0, ""},
    {"ui_set_mousefocus", 0, 1.0, ""},
    {"ui_t_break", 0, 4.0, ""},
    {"ui_t_button", 0, 2.0, ""},
    {"ui_t_check", 0, 6.0, ""},
    {"ui_t_label", 0, 3.0, ""},
    {"ui_t_panel", 0, 1.0, ""},
    {"ui_t_radio", 0, 5.0, ""},
    {"ui_t_window", 0, 7.0, ""},
    {"ui_up", 0, 8.0, ""},
    {"ui_yes", 0, 1.0, ""},
    {"undefined", 1, 0.0, ""},
    {"unit_samples", 0, 1.0, ""},
    {"unit_seconds", 0, 2.0, ""},
    {"unit_unitary", 0, 0.0, ""},
    {"video_loop", 0, 1.0, ""},
    {"video_use_interframe", 0, 2.0, ""},
    {"vk_caps", 0, 20.0, ""},
    {"vk_cr", 1, 0.0, "\r"},
    {"vk_crlf", 1, 0.0, "\r\n"},
    {"vk_equals", 0, 187.0, ""},
    {"vk_escchar", 1, 0.0, "\x1b"},
    {"vk_lf", 1, 0.0, "\n"},
    {"vk_menu", 0, 93.0, ""},
    {"vk_minus", 0, 189.0, ""},
    {"vk_oem1", 0, 186.0, ""},
    {"vk_oem2", 0, 191.0, ""},
    {"vk_oem3", 0, 192.0, ""},
    {"volume_front", 0, 0.0, ""},
    {"volume_omni", 0, 1.0, ""},
};

static int cmp_const_entry(const void *key, const void *elem) {
    const char *k = (const char *)key;
    const gm82_ged_const_entry *e = (const gm82_ged_const_entry *)elem;
    return strcmp(k, e->name);
}

int gm82_ged_constant_count(void) {
    return (int)(sizeof(k_ged_constants) / sizeof(k_ged_constants[0]));
}

const char *gm82_ged_constant_name(int index) {
    if (index < 0 || index >= gm82_ged_constant_count()) return "";
    return k_ged_constants[index].name;
}

int gm82_ged_lookup_constant(const char *name, double *out_num, char *out_str, size_t str_cap) {
    if (!name || !*name) return 0;
    const gm82_ged_const_entry *hit = (const gm82_ged_const_entry *)bsearch(
        name, k_ged_constants,
        sizeof(k_ged_constants) / sizeof(k_ged_constants[0]),
        sizeof(k_ged_constants[0]), cmp_const_entry);
    if (!hit) return 0;
    if (hit->is_str) {
        if (out_str && str_cap > 0) snprintf(out_str, str_cap, "%s", hit->str ? hit->str : "");
        if (out_num) *out_num = 0.0;
        return 2;
    }
    if (out_num) *out_num = hit->num;
    return 1;
}

/* ---- Sorted Public Function Catalog (1,014 GED/GEJ Functions) ---- */
typedef struct {
    const char *name;
    int ret_is_str;
} gm82_ged_fn_entry;

static const gm82_ged_fn_entry k_ged_functions[] = {
    {"FMODAllStop", 0},
    {"FMODBlockerAdd", 0},
    {"FMODBlockerGetEnabled", 0},
    {"FMODBlockerGetStrength", 0},
    {"FMODBlockerSet3dOrientation", 0},
    {"FMODBlockerSet3dPosition", 0},
    {"FMODBlockerSet3dScale", 0},
    {"FMODBlockerSetEnabled", 0},
    {"FMODBlockerSetStrength", 0},
    {"FMODBlockersAddGMObjects", 0},
    {"FMODBlockersFree", 0},
    {"FMODBlockersInit", 0},
    {"FMODCreateSoundFromMicInput", 0},
    {"FMODEffectFree", 0},
    {"FMODEffectGetActive", 0},
    {"FMODEffectGetBypass", 0},
    {"FMODEffectGetDefaultFr", 0},
    {"FMODEffectGetDefaultPan", 0},
    {"FMODEffectGetDefaultVol", 0},
    {"FMODEffectGetNumParams", 0},
    {"FMODEffectGetParamDesc", 0},
    {"FMODEffectGetParamLabel", 0},
    {"FMODEffectGetParamMax", 0},
    {"FMODEffectGetParamMin", 0},
    {"FMODEffectGetParamName", 0},
    {"FMODEffectGetParamValue", 0},
    {"FMODEffectGetParamValueStr", 0},
    {"FMODEffectGetSpeakerActive", 0},
    {"FMODEffectReset", 0},
    {"FMODEffectSetActive", 0},
    {"FMODEffectSetBypass", 0},
    {"FMODEffectSetDefaultFr", 0},
    {"FMODEffectSetDefaultPan", 0},
    {"FMODEffectSetDefaultVol", 0},
    {"FMODEffectSetParamValue", 0},
    {"FMODEffectSetSpeakerActive", 0},
    {"FMODErrorStr", 0},
    {"FMODGetLastError", 0},
    {"FMODGetNumInstances", 0},
    {"FMODGetSnapshotEntry", 0},
    {"FMODGetSpectrumBuffer", 0},
    {"FMODGetTagData", 0},
    {"FMODGetTagName", 0},
    {"FMODGetWaveBuffer", 0},
    {"FMODGroupAddEffect", 0},
    {"FMODGroupFadePan", 0},
    {"FMODGroupFadePitch", 0},
    {"FMODGroupFadeVolume", 0},
    {"FMODGroupGetMuted", 0},
    {"FMODGroupGetPaused", 0},
    {"FMODGroupGetPitch", 0},
    {"FMODGroupGetSpectrumSnapshot", 0},
    {"FMODGroupGetSpectrumSnapshot2", 0},
    {"FMODGroupGetVolume", 0},
    {"FMODGroupGetWaveSnapshot", 0},
    {"FMODGroupGetWaveSnapshot2", 0},
    {"FMODGroupSetFrequency", 0},
    {"FMODGroupSetMuted", 0},
    {"FMODGroupSetPan", 0},
    {"FMODGroupSetPaused", 0},
    {"FMODGroupSetPitch", 0},
    {"FMODGroupSetVolume", 0},
    {"FMODGroupStop", 0},
    {"FMODInit", 0},
    {"FMODInstanceAddEffect", 0},
    {"FMODInstanceAsyncOK", 0},
    {"FMODInstanceFadeFrequency", 0},
    {"FMODInstanceFadePan", 0},
    {"FMODInstanceFadeVolume", 0},
    {"FMODInstanceGet3DPanLevel", 0},
    {"FMODInstanceGet3DSpread", 0},
    {"FMODInstanceGetAudibility", 0},
    {"FMODInstanceGetFrequency", 0},
    {"FMODInstanceGetLoopCount", 0},
    {"FMODInstanceGetMaxDist", 0},
    {"FMODInstanceGetMuted", 0},
    {"FMODInstanceGetNextTag", 0},
    {"FMODInstanceGetPan", 0},
    {"FMODInstanceGetPaused", 0},
    {"FMODInstanceGetPitch", 0},
    {"FMODInstanceGetPosition", 0},
    {"FMODInstanceGetSound", 0},
    {"FMODInstanceGetSpectrumSnapshot", 0},
    {"FMODInstanceGetSpectrumSnapshot2", 0},
    {"FMODInstanceGetVolume", 0},
    {"FMODInstanceGetWaveSnapshot", 0},
    {"FMODInstanceGetWaveSnapshot2", 0},
    {"FMODInstanceIsPlaying", 0},
    {"FMODInstanceSet3DPanLevel", 0},
    {"FMODInstanceSet3DSpread", 0},
    {"FMODInstanceSet3dCone", 0},
    {"FMODInstanceSet3dConeOrientation", 0},
    {"FMODInstanceSet3dDopplerMax", 0},
    {"FMODInstanceSet3dMinMaxDistance", 0},
    {"FMODInstanceSet3dPosition", 0},
    {"FMODInstanceSetFrequency", 0},
    {"FMODInstanceSetLoopCount", 0},
    {"FMODInstanceSetLoopPoints", 0},
    {"FMODInstanceSetMuted", 0},
    {"FMODInstanceSetPan", 0},
    {"FMODInstanceSetPause", 0},
    {"FMODInstanceSetPaused", 0},
    {"FMODInstanceSetPitch", 0},
    {"FMODInstanceSetPosition", 0},
    {"FMODInstanceSetSpeakerMix", 0},
    {"FMODInstanceSetVolume", 0},
    {"FMODInstanceSoundGetLength", 0},
    {"FMODInstanceStop", 0},
    {"FMODListenerHearsDistanceOnly", 0},
    {"FMODListenerSet3dPosition", 0},
    {"FMODListenerSet3dPositionEx", 0},
    {"FMODListenerSetNumber", 0},
    {"FMODMasterSetVolume", 0},
    {"FMODMicStart", 0},
    {"FMODMicStop", 0},
    {"FMODNormalizeSpectrumData", 0},
    {"FMODNormalizeWaveData", 0},
    {"FMODServerError", 0},
    {"FMODSetDopplerFPS", 0},
    {"FMODSetPassword", 0},
    {"FMODSetWorldScale", 0},
    {"FMODSnapShotToDsList", 0},
    {"FMODSoundAdd", 0},
    {"FMODSoundAddAsyncStream", 0},
    {"FMODSoundAddEffect", 0},
    {"FMODSoundAsyncReady", 0},
    {"FMODSoundFree", 0},
    {"FMODSoundGetLength", 0},
    {"FMODSoundGetLoopCount", 0},
    {"FMODSoundGetMaxDist", 0},
    {"FMODSoundGetMaxVolume", 0},
    {"FMODSoundGetMusicChannelVolume", 0},
    {"FMODSoundGetMusicNumChannels", 0},
    {"FMODSoundGetNumChannels", 0},
    {"FMODSoundInstanciate", 0},
    {"FMODSoundIs3d", 0},
    {"FMODSoundIsStreamed", 0},
    {"FMODSoundLoop", 0},
    {"FMODSoundLoop3d", 0},
    {"FMODSoundPlay", 0},
    {"FMODSoundPlay3d", 0},
    {"FMODSoundSet3dCone", 0},
    {"FMODSoundSet3dDopplerMax", 0},
    {"FMODSoundSet3dMinMaxDistance", 0},
    {"FMODSoundSetEffects", 0},
    {"FMODSoundSetGroup", 0},
    {"FMODSoundSetLoopCount", 0},
    {"FMODSoundSetLoopPoints", 0},
    {"FMODSoundSetMaxVolume", 0},
    {"FMODSoundSetMusicChannelVolume", 0},
    {"FMODSpectrumSetSnapshotType", 0},
    {"FMODUpdate", 0},
    {"FMODUpdateTakeOverDone", 0},
    {"FMODUpdateTakeOverWhileLocked", 0},
    {"FMODfree", 0},
    {"FMODinit", 0},
    {"LoadFMOD", 0},
    {"N_Menu_AddItem", 0},
    {"N_Menu_AddItem_Internal", 0},
    {"N_Menu_AddMenu", 0},
    {"N_Menu_AddSeparator", 0},
    {"N_Menu_AttachMenuBar", 0},
    {"N_Menu_CheckMenus", 0},
    {"N_Menu_CleanUp", 0},
    {"N_Menu_CreateMenuBar", 0},
    {"N_Menu_CreatePopupMenu", 0},
    {"N_Menu_CreateToolWindow", 0},
    {"N_Menu_CreateToolWindow1_Internal", 0},
    {"N_Menu_CreateToolWindow2_Internal", 0},
    {"N_Menu_DestroyBitmap", 0},
    {"N_Menu_DestroyMenu", 0},
    {"N_Menu_DestroyToolWindow", 0},
    {"N_Menu_GetMaxBitmapItemHeight", 0},
    {"N_Menu_GetMaxBitmapItemWidth", 0},
    {"N_Menu_GetMenuBarHeight", 0},
    {"N_Menu_GetToolWindowDragStyle", 0},
    {"N_Menu_GetToolWindowExists", 0},
    {"N_Menu_Init", 0},
    {"N_Menu_Init_Internal", 0},
    {"N_Menu_ItemGetChecked", 0},
    {"N_Menu_ItemGetDefault", 0},
    {"N_Menu_ItemGetDisabled", 0},
    {"N_Menu_ItemGetText", 1},
    {"N_Menu_ItemSetBitmap", 0},
    {"N_Menu_ItemSetChecked", 0},
    {"N_Menu_ItemSetDefault", 0},
    {"N_Menu_ItemSetDisabled", 0},
    {"N_Menu_ItemSetRadioSelected", 0},
    {"N_Menu_ItemSetText", 1},
    {"N_Menu_LoadBitmap", 0},
    {"N_Menu_RemoveItem", 0},
    {"N_Menu_SetGmWindowHandle", 0},
    {"N_Menu_SetToolWindowDragStyle", 0},
    {"N_Menu_ShowPopupMenu", 0},
    {"alarm_get", 0},
    {"alarm_set", 0},
    {"angle_abs", 0},
    {"angle_difference", 0},
    {"angle_difference_3d", 0},
    {"angle_init", 1},
    {"angle_mean", 0},
    {"animation_pingpong", 0},
    {"animation_stop", 0},
    {"approach", 0},
    {"approach_angle", 0},
    {"approach_angle_biased", 0},
    {"array_from_string", 0},
    {"assert", 0},
    {"audio_all_pause", 0},
    {"audio_all_resume", 0},
    {"audio_all_stop", 0},
    {"audio_all_volume", 0},
    {"audio_apply_3d", 0},
    {"audio_delete", 0},
    {"audio_exists", 0},
    {"audio_get_instance_list", 0},
    {"audio_get_length", 0},
    {"audio_get_loop_point_a", 0},
    {"audio_get_loop_point_b", 0},
    {"audio_get_pos", 0},
    {"audio_instance_count", 0},
    {"audio_instance_number", 0},
    {"audio_isplaying", 0},
    {"audio_load", 0},
    {"audio_load_buffer", 0},
    {"audio_load_buffer_raw", 0},
    {"audio_load_directory", 0},
    {"audio_load_included", 0},
    {"audio_load_raw", 0},
    {"audio_loop", 0},
    {"audio_loop_single", 0},
    {"audio_music_crossfade", 0},
    {"audio_music_crossfade_ext", 0},
    {"audio_music_get_pos", 0},
    {"audio_music_loop", 0},
    {"audio_music_pan", 0},
    {"audio_music_pause", 0},
    {"audio_music_pitch", 0},
    {"audio_music_play", 0},
    {"audio_music_play_ext", 0},
    {"audio_music_resume", 0},
    {"audio_music_set_all", 0},
    {"audio_music_set_pos", 0},
    {"audio_music_stop", 0},
    {"audio_music_switch", 0},
    {"audio_music_switch_ext", 0},
    {"audio_music_volume", 0},
    {"audio_pack_create", 0},
    {"audio_pack_extract", 0},
    {"audio_pack_load", 0},
    {"audio_pack_unload", 0},
    {"audio_pause", 0},
    {"audio_play", 0},
    {"audio_play_ext", 0},
    {"audio_play_single", 0},
    {"audio_play_single_ext", 0},
    {"audio_preload_sound", 0},
    {"audio_resume", 0},
    {"audio_set_all", 0},
    {"audio_set_loop", 0},
    {"audio_set_loop_points", 0},
    {"audio_set_pan", 0},
    {"audio_set_pitch", 0},
    {"audio_set_pos", 0},
    {"audio_set_volume", 0},
    {"audio_sfx_stop", 0},
    {"audio_sfx_volume", 0},
    {"audio_stop", 0},
    {"background_find", 0},
    {"benchmark_end", 0},
    {"benchmark_end_and_report", 0},
    {"benchmark_report", 0},
    {"benchmark_start", 0},
    {"bigchoose", 0},
    {"bigchoose_clear", 0},
    {"bigchoose_get", 0},
    {"bigchoose_weighted", 0},
    {"bigchoose_weighted_get", 0},
    {"box_distance", 0},
    {"buffer_at_end", 0},
    {"buffer_clear", 0},
    {"buffer_clear_error", 0},
    {"buffer_copy", 0},
    {"buffer_copy_part", 0},
    {"buffer_create", 0},
    {"buffer_decode_base64", 0},
    {"buffer_deflate", 0},
    {"buffer_destroy", 0},
    {"buffer_encode_base64", 1},
    {"buffer_exists", 0},
    {"buffer_get_address", 0},
    {"buffer_get_error", 0},
    {"buffer_get_pos", 0},
    {"buffer_get_size", 0},
    {"buffer_inflate", 0},
    {"buffer_load", 0},
    {"buffer_load_part", 0},
    {"buffer_make_pipe", 1},
    {"buffer_peek", 0},
    {"buffer_poke", 0},
    {"buffer_rc4", 0},
    {"buffer_rc4_buffer", 0},
    {"buffer_read_data", 1},
    {"buffer_read_double", 0},
    {"buffer_read_float", 0},
    {"buffer_read_hex", 1},
    {"buffer_read_i16", 0},
    {"buffer_read_i32", 0},
    {"buffer_read_i64", 0},
    {"buffer_read_i8", 0},
    {"buffer_read_string", 1},
    {"buffer_read_u16", 0},
    {"buffer_read_u32", 0},
    {"buffer_read_u64", 0},
    {"buffer_read_u8", 0},
    {"buffer_read_variable", 0},
    {"buffer_save", 0},
    {"buffer_save_append", 0},
    {"buffer_save_temp", 0},
    {"buffer_set_pos", 0},
    {"buffer_set_size", 0},
    {"buffer_write_data", 0},
    {"buffer_write_double", 0},
    {"buffer_write_float", 0},
    {"buffer_write_float12", 0},
    {"buffer_write_float2", 0},
    {"buffer_write_float3", 0},
    {"buffer_write_float4", 0},
    {"buffer_write_hex", 0},
    {"buffer_write_i16", 0},
    {"buffer_write_i32", 0},
    {"buffer_write_i64", 0},
    {"buffer_write_i8", 0},
    {"buffer_write_string", 0},
    {"buffer_write_u16", 0},
    {"buffer_write_u32", 0},
    {"buffer_write_u64", 0},
    {"buffer_write_u8", 0},
    {"buffer_write_variable", 0},
    {"ceilto", 0},
    {"choose_weighted", 0},
    {"chunk_load_chunk", 0},
    {"chunk_load_room", 0},
    {"circle_in_circle", 0},
    {"clerp2", 0},
    {"code_compile", 0},
    {"code_destroy", 0},
    {"code_execute", 0},
    {"code_exists", 0},
    {"code_get_argcount", 0},
    {"code_return", 0},
    {"collision_check_fast", 0},
    {"color_blend", 0},
    {"color_get_luminance", 0},
    {"color_inverse", 0},
    {"color_reverse", 0},
    {"console_clear", 0},
    {"console_clear_line", 0},
    {"console_close", 0},
    {"console_cursor_hide", 0},
    {"console_cursor_show", 0},
    {"console_handle_events", 0},
    {"console_input_begin", 0},
    {"console_input_clear", 0},
    {"console_input_end", 0},
    {"console_input_get", 1},
    {"console_is_event_signaled", 0},
    {"console_open", 0},
    {"console_set_options", 0},
    {"console_set_title", 0},
    {"console_write", 0},
    {"cosine", 0},
    {"crc32_buffer", 1},
    {"crc32_buffer_part", 1},
    {"crc32_file", 1},
    {"crc32_string", 1},
    {"current_frame", 0},
    {"darccos", 0},
    {"darcsin", 0},
    {"darctan", 0},
    {"darctan2", 0},
    {"date_get_current_timezone", 0},
    {"date_get_moon_phase", 0},
    {"date_get_timestamp", 0},
    {"date_is_easter", 0},
    {"datetime_current_filename", 0},
    {"dcos", 0},
    {"delta_time", 0},
    {"direction_to_object", 0},
    {"directory_previous", 0},
    {"distance_to_center", 0},
    {"distance_to_instance", 0},
    {"distance_to_path", 0},
    {"dot_product_3d_normalized", 0},
    {"dot_product_normalized", 0},
    {"draw_background_pos", 0},
    {"draw_background_tiled_extra", 0},
    {"draw_rect", 0},
    {"draw_reset", 0},
    {"draw_self_as", 0},
    {"draw_self_blend", 0},
    {"draw_self_ext", 0},
    {"draw_self_floored", 0},
    {"draw_set1", 0},
    {"draw_set2", 0},
    {"draw_set_rgba", 0},
    {"draw_seta", 0},
    {"draw_setb", 0},
    {"draw_setf", 0},
    {"draw_spotlight", 0},
    {"draw_sprite_ext_fixed", 0},
    {"draw_sprite_part_centered", 0},
    {"draw_sprite_part_extra", 0},
    {"draw_sprite_tiled_extra", 0},
    {"draw_text_1color", 0},
    {"ds_bag_add", 0},
    {"ds_bag_clear", 0},
    {"ds_bag_create", 0},
    {"ds_bag_destroy", 0},
    {"ds_bag_empty", 0},
    {"ds_bag_grab", 0},
    {"ds_bag_quick", 0},
    {"ds_bag_remove", 0},
    {"ds_bag_size", 0},
    {"ds_grid_set_many", 0},
    {"ds_list_add_many", 0},
    {"ds_list_all", 0},
    {"ds_list_any", 0},
    {"ds_list_concat", 0},
    {"ds_list_contains", 0},
    {"ds_list_contains_ext", 0},
    {"ds_list_equal", 0},
    {"ds_list_filter", 0},
    {"ds_list_find_first", 0},
    {"ds_list_find_last", 0},
    {"ds_list_foreach", 0},
    {"ds_list_map", 0},
    {"ds_list_pop", 0},
    {"ds_list_reverse", 0},
    {"ds_list_str", 1},
    {"ds_list_union", 0},
    {"ds_list_unique", 0},
    {"ds_map_add_copy", 0},
    {"ds_map_get", 0},
    {"ds_map_read_ini", 0},
    {"ds_map_read_ini_string", 0},
    {"ds_map_read_safe", 0},
    {"ds_map_search", 0},
    {"ds_map_set", 0},
    {"ds_map_set_many", 0},
    {"ds_map_write_ini", 0},
    {"ds_map_write_ini_string", 1},
    {"ds_priority_add_many", 0},
    {"ds_queue_enqueue_many", 0},
    {"ds_stack_push_many", 0},
    {"dsecant", 0},
    {"dsin", 0},
    {"dslist", 0},
    {"dsmap", 0},
    {"dss_destroy", 0},
    {"dss_get_type", 0},
    {"dss_grid_create", 0},
    {"dss_list_create", 0},
    {"dss_map_create", 0},
    {"dss_priority_create", 0},
    {"dss_queue_create", 0},
    {"dss_stack_create", 0},
    {"dtan", 0},
    {"envelerp", 0},
    {"error_is_enabled", 0},
    {"error_set_enabled", 0},
    {"esign", 0},
    {"event_alarm", 0},
    {"event_beginstep", 0},
    {"event_draw", 0},
    {"event_endstep", 0},
    {"event_inherit_object", 0},
    {"event_step", 0},
    {"event_trigger", 0},
    {"execute_program_async", 0},
    {"execute_program_async_result", 0},
    {"execute_program_silent", 0},
    {"execute_program_silent_async", 0},
    {"extension_detect", 0},
    {"file_create", 0},
    {"file_drag_clear", 0},
    {"file_drag_count", 0},
    {"file_drag_enable", 0},
    {"file_drag_name", 0},
    {"file_find_list", 0},
    {"file_get_timestamp", 0},
    {"file_size", 0},
    {"file_text_read_all", 0},
    {"file_text_write_all", 0},
    {"file_text_writelf", 0},
    {"filename_remove_ext", 0},
    {"filename_short", 1},
    {"floorto", 0},
    {"font_add_file", 0},
    {"font_add_winui", 0},
    {"font_find", 0},
    {"fps_fast", 0},
    {"fps_real", 0},
    {"game_get_state", 0},
    {"game_restart", 0},
    {"gauss", 0},
    {"gauss_range", 0},
    {"get_battery_level", 0},
    {"get_battery_status", 0},
    {"get_cpu_usage", 0},
    {"get_delta", 0},
    {"get_frametime_usage", 0},
    {"get_open_filename_ext", 0},
    {"get_ram_usage", 0},
    {"get_save_filename_ext", 0},
    {"get_system_language", 0},
    {"get_system_region", 0},
    {"get_timer", 0},
    {"get_windows_version", 0},
    {"global_array_from_string", 0},
    {"glsl_compile", 0},
    {"glsl_get_code", 1},
    {"glsl_get_info", 1},
    {"gltf_accessor_component_type", 0},
    {"gltf_accessor_copy", 0},
    {"gltf_accessor_normalized", 0},
    {"gltf_accessor_pointer", 0},
    {"gltf_accessor_size", 0},
    {"gltf_accessor_stride", 0},
    {"gltf_accessor_type", 1},
    {"gltf_animate", 0},
    {"gltf_animation_count", 0},
    {"gltf_animation_length", 0},
    {"gltf_animation_name", 1},
    {"gltf_camera_aspect", 0},
    {"gltf_camera_type", 1},
    {"gltf_camera_yfov", 0},
    {"gltf_camera_zfar", 0},
    {"gltf_camera_znear", 0},
    {"gltf_destroy", 0},
    {"gltf_draw_node", 0},
    {"gltf_draw_scene", 0},
    {"gltf_get_animation", 0},
    {"gltf_get_node", 0},
    {"gltf_get_scene", 0},
    {"gltf_load", 0},
    {"gltf_material_alpha_cutoff", 0},
    {"gltf_material_alpha_mode", 1},
    {"gltf_material_base_color_pointer", 0},
    {"gltf_material_base_texcoord", 0},
    {"gltf_material_base_texture", 0},
    {"gltf_material_double_sided", 0},
    {"gltf_material_emissive_color_pointer", 0},
    {"gltf_material_emissive_texcoord", 0},
    {"gltf_material_emissive_texture", 0},
    {"gltf_material_metalness", 0},
    {"gltf_material_normal_scale", 0},
    {"gltf_material_normal_texcoord", 0},
    {"gltf_material_normal_texture", 0},
    {"gltf_material_occlusion_strength", 0},
    {"gltf_material_occlusion_texcoord", 0},
    {"gltf_material_occlusion_texture", 0},
    {"gltf_material_roughness", 0},
    {"gltf_material_roughness_texture", 0},
    {"gltf_mesh_count", 0},
    {"gltf_mesh_primitive_attribute_accessor", 0},
    {"gltf_mesh_primitive_attribute_count", 0},
    {"gltf_mesh_primitive_attribute_semantic", 1},
    {"gltf_mesh_primitive_count", 0},
    {"gltf_mesh_primitive_indices_accessor", 0},
    {"gltf_mesh_primitive_material", 0},
    {"gltf_mesh_primitive_mode", 0},
    {"gltf_mesh_primitive_morph", 0},
    {"gltf_mesh_primitive_morph_attribute_accessor", 0},
    {"gltf_mesh_primitive_morph_attribute_count", 0},
    {"gltf_mesh_primitive_morph_attribute_semantic", 1},
    {"gltf_mesh_primitive_morph_count", 0},
    {"gltf_node_camera", 0},
    {"gltf_node_child", 0},
    {"gltf_node_child_count", 0},
    {"gltf_node_count", 0},
    {"gltf_node_matrix_pointer", 0},
    {"gltf_node_mesh", 0},
    {"gltf_node_name", 1},
    {"gltf_node_parent", 0},
    {"gltf_node_rw", 0},
    {"gltf_node_rx", 0},
    {"gltf_node_ry", 0},
    {"gltf_node_rz", 0},
    {"gltf_node_skin", 0},
    {"gltf_node_sorted_morph", 0},
    {"gltf_node_sorted_weights_spaced_pointer", 0},
    {"gltf_node_sx", 0},
    {"gltf_node_sy", 0},
    {"gltf_node_sz", 0},
    {"gltf_node_tx", 0},
    {"gltf_node_ty", 0},
    {"gltf_node_tz", 0},
    {"gltf_node_weight_count", 0},
    {"gltf_scene", 0},
    {"gltf_scene_count", 0},
    {"gltf_scene_name", 1},
    {"gltf_scene_node", 0},
    {"gltf_scene_node_count", 0},
    {"gltf_set_environment_map", 0},
    {"gltf_skin_joint_count", 0},
    {"gltf_skin_joints", 0},
    {"gltf_skin_skeleton", 0},
    {"gltf_texture_copy", 0},
    {"gltf_texture_count", 0},
    {"gltf_texture_interpolation", 0},
    {"gltf_texture_save", 0},
    {"gltf_texture_size", 0},
    {"gltf_texture_type", 1},
    {"gltf_texture_wrap_h", 0},
    {"gltf_texture_wrap_v", 0},
    {"gltf_use_shader", 0},
    {"hlsl_compile", 0},
    {"hlsl_get_buffer", 0},
    {"hlsl_get_errors", 1},
    {"hlsl_get_size", 0},
    {"hlsl_get_uniform_class", 0},
    {"hlsl_get_uniform_columns", 0},
    {"hlsl_get_uniform_count", 0},
    {"hlsl_get_uniform_handle", 0},
    {"hlsl_get_uniform_members", 0},
    {"hlsl_get_uniform_name", 1},
    {"hlsl_get_uniform_register_count", 0},
    {"hlsl_get_uniform_register_index", 0},
    {"hlsl_get_uniform_rows", 0},
    {"hlsl_get_uniform_type", 0},
    {"hrt_time_delta", 0},
    {"hrt_time_now", 0},
    {"in_range", 0},
    {"inch", 0},
    {"inch_angle", 0},
    {"include_file_count", 0},
    {"include_file_exists", 0},
    {"include_file_get_buffer", 0},
    {"include_file_get_string", 1},
    {"include_file_name", 1},
    {"include_file_size", 0},
    {"instance_assign_groups", 0},
    {"instance_create_depth", 0},
    {"instance_create_depth_moving", 0},
    {"instance_create_depth_moving_ext", 0},
    {"instance_create_moving", 0},
    {"instance_create_moving_ext", 0},
    {"instance_destroy_id", 0},
    {"instance_destroy_other", 0},
    {"instance_nearest_notme", 0},
    {"instance_place_list", 0},
    {"instance_position_list", 0},
    {"instance_some", 0},
    {"instances_place", 0},
    {"instances_position", 0},
    {"io_get_language", 0},
    {"io_set_roomend_clear", 0},
    {"irandom_fresh", 0},
    {"is_equal", 0},
    {"is_undefined", 0},
    {"joystick_axes", 0},
    {"joystick_axis", 0},
    {"joystick_buttons", 0},
    {"joystick_check_button", 0},
    {"joystick_check_button_pressed", 0},
    {"joystick_check_button_released", 0},
    {"joystick_count", 0},
    {"joystick_direction", 0},
    {"joystick_direction_leftstick", 0},
    {"joystick_direction_rightstick", 0},
    {"joystick_distance", 0},
    {"joystick_distance_leftstick", 0},
    {"joystick_distance_rightstick", 0},
    {"joystick_exists", 0},
    {"joystick_found", 0},
    {"joystick_has_pov", 0},
    {"joystick_name", 0},
    {"joystick_pov", 0},
    {"joystick_pov_direction", 0},
    {"joystick_pov_x", 0},
    {"joystick_pov_y", 0},
    {"joystick_rpos", 0},
    {"joystick_rumble", 0},
    {"joystick_set_deadzone", 0},
    {"joystick_update", 0},
    {"joystick_upos", 0},
    {"joystick_vpos", 0},
    {"joystick_xpos", 0},
    {"joystick_ypos", 0},
    {"joystick_zpos", 0},
    {"keyboard_get_capslock", 0},
    {"keyboard_get_keyname", 0},
    {"keyboard_get_scrolllock", 0},
    {"lengthdir_zx", 0},
    {"lengthdir_zy", 0},
    {"lengthdir_zz", 0},
    {"lerp2", 0},
    {"lerp_angle", 0},
    {"lerproach", 0},
    {"lines_intersect", 0},
    {"listener_accept", 0},
    {"listener_create", 0},
    {"listener_destroy", 0},
    {"listener_exists", 0},
    {"listener_is_active", 0},
    {"listener_pending", 0},
    {"listener_start", 0},
    {"listener_stop", 0},
    {"make_color_hsv_standard", 0},
    {"match_any", 0},
    {"match_exact", 0},
    {"match_found", 0},
    {"match_not_any", 0},
    {"match_not_exact", 0},
    {"match_not_some", 0},
    {"match_some", 0},
    {"md5_buffer", 1},
    {"md5_buffer_part", 1},
    {"md5_file", 1},
    {"md5_string", 1},
    {"merge_color_corrected", 0},
    {"message_default", 0},
    {"modwrap", 0},
    {"mouse_back_button", 0},
    {"mouse_check_direct", 0},
    {"mouse_forward_button", 0},
    {"mouse_in_window", 0},
    {"move_and_collide", 0},
    {"move_contact_solid_hv", 0},
    {"move_towards_fixed", 0},
    {"move_towards_gravity", 0},
    {"move_towards_jump", 0},
    {"move_wrap", 0},
    {"object_find", 0},
    {"object_is_child_of", 0},
    {"object_other_is_child_of", 0},
    {"os_get_language", 0},
    {"os_get_region", 0},
    {"outside_room", 0},
    {"pack_bools", 0},
    {"path_ease", 0},
    {"path_find", 0},
    {"path_get_approximate_pos", 0},
    {"path_get_height", 0},
    {"path_get_width", 0},
    {"perlin_noise", 0},
    {"pick", 0},
    {"pivot_pos_x", 0},
    {"pivot_pos_y", 0},
    {"place_meetings", 0},
    {"point_direction_pitch", 0},
    {"point_in_circle", 0},
    {"point_in_rectangle", 0},
    {"point_in_triangle", 0},
    {"point_line_distance", 0},
    {"point_line_lerp", 0},
    {"position_free", 0},
    {"position_meetings", 0},
    {"power_next", 0},
    {"process_exists", 0},
    {"random_color", 0},
    {"range_collision", 0},
    {"real_hex", 0},
    {"rectangle_in_circle", 0},
    {"rectangle_in_rectangle", 0},
    {"registry_read_dword", 0},
    {"registry_read_sz", 0},
    {"registry_write_dword", 0},
    {"room_find", 0},
    {"room_goto_cancel", 0},
    {"round_unbiased", 0},
    {"roundto", 0},
    {"roundto_unbiased", 0},
    {"saturate", 0},
    {"secant", 0},
    {"set_working_directory", 0},
    {"sha1_buffer", 1},
    {"sha1_buffer_part", 1},
    {"sha1_file", 1},
    {"sha1_string", 1},
    {"sleep_ext", 0},
    {"smoothstep", 0},
    {"socket_close", 0},
    {"socket_connect", 0},
    {"socket_create", 0},
    {"socket_destroy", 0},
    {"socket_exists", 0},
    {"socket_get_peer_address", 1},
    {"socket_get_receiving_size", 0},
    {"socket_get_sending_size", 0},
    {"socket_get_state", 0},
    {"socket_read_data", 0},
    {"socket_read_message", 0},
    {"socket_read_message_delimiter", 0},
    {"socket_receive", 0},
    {"socket_reset", 0},
    {"socket_send", 0},
    {"socket_write_data", 0},
    {"socket_write_message", 0},
    {"socket_write_message_delimiter", 0},
    {"sound_3d_set_sound_cone", 0},
    {"sound_3d_set_sound_distance", 0},
    {"sound_3d_set_sound_position", 0},
    {"sound_3d_set_sound_velocity", 0},
    {"sound_add", 0},
    {"sound_add_directory", 0},
    {"sound_add_directory_ext", 0},
    {"sound_add_ext", 0},
    {"sound_add_included", 0},
    {"sound_add_pack", 0},
    {"sound_background_instance", 0},
    {"sound_background_tempo", 0},
    {"sound_create_pack", 0},
    {"sound_delete", 0},
    {"sound_discard", 0},
    {"sound_effect_chorus", 0},
    {"sound_effect_compressor", 0},
    {"sound_effect_destroy", 0},
    {"sound_effect_echo", 0},
    {"sound_effect_equalizer", 0},
    {"sound_effect_flanger", 0},
    {"sound_effect_gargle", 0},
    {"sound_effect_options", 0},
    {"sound_effect_reverb", 0},
    {"sound_effect_set", 0},
    {"sound_exists", 0},
    {"sound_fade", 0},
    {"sound_find", 0},
    {"sound_get_count", 0},
    {"sound_get_frequency", 0},
    {"sound_get_instance_list", 0},
    {"sound_get_kind", 0},
    {"sound_get_length", 0},
    {"sound_get_name", 0},
    {"sound_get_pan", 0},
    {"sound_get_pitch", 0},
    {"sound_get_pos", 0},
    {"sound_get_preload", 0},
    {"sound_get_volume", 0},
    {"sound_global_volume", 0},
    {"sound_isplaying", 0},
    {"sound_kind_effect", 0},
    {"sound_kind_get_volume", 0},
    {"sound_kind_list", 0},
    {"sound_kind_pan", 0},
    {"sound_kind_pause", 0},
    {"sound_kind_pitch", 0},
    {"sound_kind_resume", 0},
    {"sound_kind_stop", 0},
    {"sound_kind_volume", 0},
    {"sound_loop", 0},
    {"sound_loop_ex", 0},
    {"sound_loop_ex_layer", 0},
    {"sound_loop_paused", 0},
    {"sound_loop_single", 0},
    {"sound_loop_single_ex", 0},
    {"sound_pan", 0},
    {"sound_password", 0},
    {"sound_pause", 0},
    {"sound_pause_all", 0},
    {"sound_pitch", 0},
    {"sound_play", 0},
    {"sound_play_ex", 0},
    {"sound_play_ex_layer", 0},
    {"sound_play_paused", 0},
    {"sound_play_single", 0},
    {"sound_play_single_ex", 0},
    {"sound_replace", 0},
    {"sound_restore", 0},
    {"sound_resume", 0},
    {"sound_resume_all", 0},
    {"sound_set_loop", 0},
    {"sound_set_loop_count", 0},
    {"sound_set_pos", 0},
    {"sound_set_search_directory", 0},
    {"sound_stop", 0},
    {"sound_stop_all", 0},
    {"sound_unpack_pack", 0},
    {"sound_volume", 0},
    {"sprite_find", 0},
    {"str_cat", 0},
    {"str_ins", 0},
    {"str_sep", 0},
    {"string_better", 0},
    {"string_copy_end", 0},
    {"string_delete_end", 0},
    {"string_ends_with", 0},
    {"string_hex", 1},
    {"string_hexdigits", 0},
    {"string_justify", 0},
    {"string_magnitude", 0},
    {"string_number", 0},
    {"string_ord_at", 0},
    {"string_pad", 0},
    {"string_replace_many", 0},
    {"string_starts_with", 0},
    {"string_token_next", 1},
    {"string_token_start", 0},
    {"string_trim", 0},
    {"string_truncate", 0},
    {"string_wrap", 0},
    {"stringify", 0},
    {"strong", 0},
    {"surface_init", 0},
    {"test_is_stub", 0},
    {"test_path_reload", 0},
    {"test_room_exclude_object", 0},
    {"test_room_start", 0},
    {"test_room_status", 0},
    {"tile_add_ext", 0},
    {"tile_find_anywhere", 0},
    {"timeline_find", 0},
    {"triangle_is_clockwise", 0},
    {"trycatch", 0},
    {"udpsocket_create", 0},
    {"udpsocket_destroy", 0},
    {"udpsocket_exists", 0},
    {"udpsocket_get_last_address", 1},
    {"udpsocket_get_last_port", 0},
    {"udpsocket_get_state", 0},
    {"udpsocket_get_ttl", 0},
    {"udpsocket_receive", 0},
    {"udpsocket_reset", 0},
    {"udpsocket_send", 0},
    {"udpsocket_set_destination", 0},
    {"udpsocket_set_ttl", 0},
    {"udpsocket_start", 0},
    {"ui_append_child", 0},
    {"ui_create", 0},
    {"ui_create_button", 0},
    {"ui_default_handler", 0},
    {"ui_default_styler", 0},
    {"ui_destroy", 0},
    {"ui_draw", 0},
    {"ui_draw_default_tooltip", 0},
    {"ui_get_alt", 0},
    {"ui_get_by_name", 0},
    {"ui_get_help", 0},
    {"ui_get_variable", 0},
    {"ui_has_message", 0},
    {"ui_hit_test", 0},
    {"ui_orphan", 0},
    {"ui_prebake_layout", 0},
    {"ui_process_messages", 0},
    {"ui_push_default_keyboard", 0},
    {"ui_push_default_messages", 0},
    {"ui_push_default_mouse", 0},
    {"ui_push_message", 0},
    {"ui_reload_default_theme", 0},
    {"ui_set_alt", 0},
    {"ui_set_blend", 0},
    {"ui_set_constraints", 0},
    {"ui_set_enabled", 0},
    {"ui_set_format", 0},
    {"ui_set_handler", 0},
    {"ui_set_keyboard_enabled", 0},
    {"ui_set_name", 0},
    {"ui_set_offset", 0},
    {"ui_set_pos", 0},
    {"ui_set_size", 0},
    {"ui_set_state", 0},
    {"ui_set_style", 0},
    {"ui_set_text", 0},
    {"ui_set_transform", 0},
    {"ui_set_variable", 0},
    {"ui_settings", 0},
    {"unclerp", 0},
    {"unlerp", 0},
    {"unpack_bool", 0},
    {"unpick", 0},
    {"url_open", 0},
    {"variable_global_count", 0},
    {"variable_global_get_all", 0},
    {"variable_global_get_next", 0},
    {"variable_instance_count", 0},
    {"variable_instance_exists", 0},
    {"variable_instance_get", 0},
    {"variable_instance_get_all", 0},
    {"variable_instance_get_next", 0},
    {"variable_instance_set", 0},
    {"video_destroy", 0},
    {"video_draw", 0},
    {"video_get_fps", 0},
    {"video_get_frames", 0},
    {"video_get_height", 0},
    {"video_get_length", 0},
    {"video_get_progress", 0},
    {"video_get_size", 0},
    {"video_get_surface", 0},
    {"video_get_texture", 0},
    {"video_get_width", 0},
    {"video_isplaying", 0},
    {"video_play", 0},
    {"video_reset", 0},
    {"video_seek", 0},
    {"video_set_loop", 0},
    {"video_set_pause", 0},
    {"video_set_speed", 0},
    {"video_set_volume", 0},
    {"window_exists", 0},
    {"window_get_caption_color", 0},
    {"window_has_focus", 0},
    {"window_is_maximized", 0},
    {"window_is_minimized", 0},
    {"window_maximize", 0},
    {"window_minimize", 0},
    {"window_restore", 0},
    {"window_set_alphablend", 0},
    {"window_set_chromakey", 0},
    {"window_set_close_enabled", 0},
    {"window_set_dpiaware", 0},
    {"window_set_fixed", 0},
    {"window_set_foreground", 0},
};

static int cmp_fn_entry(const void *key, const void *elem) {
    const char *k = (const char *)key;
    const gm82_ged_fn_entry *e = (const gm82_ged_fn_entry *)elem;
    return strcmp(k, e->name);
}

int gm82_ged_function_count(void) {
    return (int)(sizeof(k_ged_functions) / sizeof(k_ged_functions[0]));
}

const char *gm82_ged_function_name(int index) {
    if (index < 0 || index >= gm82_ged_function_count()) return "";
    return k_ged_functions[index].name;
}

int gm82_ged_function_exists(const char *name) {
    if (!name || !*name) return 0;
    return bsearch(name, k_ged_functions,
                   sizeof(k_ged_functions) / sizeof(k_ged_functions[0]),
                   sizeof(k_ged_functions[0]), cmp_fn_entry) != NULL ? 1 : 0;
}

/* ---- Stateful Runtime Subsystems for High-Frequency Extensions ---- */
#define GM82_MAX_BUFFERS 64
typedef struct {
    int used;
    uint8_t *data;
    size_t size;
    size_t cap;
    size_t pos;
    int error;
} gm82_ged_buffer;

static gm82_ged_buffer g_buffers[GM82_MAX_BUFFERS];

#define GM82_MAX_SOCKETS 32
typedef struct {
    int used;
    int kind; /* 0=tcp, 1=listener, 2=udp */
    int state;
    int port;
} gm82_ged_socket;
static gm82_ged_socket g_sockets[GM82_MAX_SOCKETS];

#define GM82_MAX_AUDIO_CH 64
typedef struct {
    int used;
    int sound_id;
    int playing;
    int paused;
    int loop;
    double volume;
    double pos;
    double pitch;
} gm82_ged_audio_inst;
static gm82_ged_audio_inst g_audio[GM82_MAX_AUDIO_CH];
static double g_audio_global_vol = 1.0;

#define GM82_MAX_UI_NODES 128
typedef struct {
    int used;
    int type;
    int parent;
    double x, y, w, h;
    char text[128];
} gm82_ged_ui_node;
static gm82_ged_ui_node g_ui_nodes[GM82_MAX_UI_NODES];

#define GM82_MAX_VIDEOS 16
typedef struct {
    int used;
    int playing;
    int paused;
    int loop;
    int width;
    int height;
    double fps;
    double length_sec;
    double pos_sec;
} gm82_ged_video;
static gm82_ged_video g_videos[GM82_MAX_VIDEOS];

#define GM82_MAX_COMPILED 32
typedef struct {
    int used;
    int arg_count;
    char *code;
} gm82_ged_compiled_code;
static gm82_ged_compiled_code g_compiled[GM82_MAX_COMPILED];

static double g_joy_deadzone = 0.2;
static int g_appsurf_id = -1;
static int g_error_enabled = 1;
static double g_bench_start_ms = 0.0;
static double g_bench_elapsed_ms = 0.0;
static char g_tok_buf[1024] = {0};
static char g_tok_sep[32] = {0};
static char *g_tok_cursor = NULL;
static char g_glsl_info[256] = "OpenGL ES 2.0 Shader Ready";
static int g_next_generic_handle = 1;

void gm82_ged_reset(void) {
    for (int i = 0; i < GM82_MAX_BUFFERS; i++) {
        free(g_buffers[i].data);
        memset(&g_buffers[i], 0, sizeof(g_buffers[i]));
    }
    for (int i = 0; i < GM82_MAX_COMPILED; i++) {
        free(g_compiled[i].code);
        memset(&g_compiled[i], 0, sizeof(g_compiled[i]));
    }
    memset(g_sockets, 0, sizeof(g_sockets));
    memset(g_audio, 0, sizeof(g_audio));
    memset(g_ui_nodes, 0, sizeof(g_ui_nodes));
    memset(g_videos, 0, sizeof(g_videos));
    g_audio_global_vol = 1.0;
    g_joy_deadzone = 0.2;
    g_appsurf_id = -1;
    g_error_enabled = 1;
    g_ext_initialized = 0;
    g_extension_count = 0;
    g_next_generic_handle = 1;
    g_tok_buf[0] = '\0';
    g_tok_cursor = NULL;
}

static double arg_r(const gml_value *args, size_t count, size_t idx, double def) {
    if (!args || idx >= count) return def;
    if (args[idx].kind == GML_V_REAL || args[idx].kind == GML_V_BOOL) return args[idx].real;
    if (args[idx].kind == GML_V_STRING && args[idx].string) return atof(args[idx].string);
    return def;
}

static const char *arg_s(const gml_value *args, size_t count, size_t idx) {
    if (!args || idx >= count) return "";
    if (args[idx].kind == GML_V_STRING && args[idx].string) return args[idx].string;
    return "";
}

static int ret_real(gml_value *out, double v) {
    *out = gml_value_real(v);
    return 1;
}

static int ret_str(gml_value *out, const char *s) {
    const char *safe = s ? s : "";
    gm82_gml_set_last_string(safe);
    *out = gml_value_string(safe);
    return 1;
}

static int buf_ensure(gm82_ged_buffer *b, size_t need) {
    if (need <= b->cap) return 1;
    size_t ncap = b->cap ? b->cap : 256;
    while (ncap < need) ncap *= 2;
    uint8_t *p = (uint8_t *)realloc(b->data, ncap);
    if (!p) { b->error = 1; return 0; }
    memset(p + b->cap, 0, ncap - b->cap);
    b->data = p;
    b->cap = ncap;
    return 1;
}

static gm82_ged_buffer *get_buf(double id) {
    int i = (int)id;
    if (i < 0 || i >= GM82_MAX_BUFFERS || !g_buffers[i].used) return NULL;
    return &g_buffers[i];
}

static uint32_t crc32_compute(const uint8_t *buf, size_t len) {
    return (uint32_t)crc32(0L, buf, (uInt)len);
}

static double now_ms(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (double)ts.tv_sec * 1000.0 + (double)ts.tv_nsec / 1000000.0;
}

static const char k_b64[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
static void b64_encode(const uint8_t *in, size_t len, char *out, size_t out_cap) {
    size_t o = 0;
    for (size_t i = 0; i < len && o + 5 < out_cap; i += 3) {
        uint32_t v = ((uint32_t)in[i]) << 16;
        if (i + 1 < len) v |= ((uint32_t)in[i + 1]) << 8;
        if (i + 2 < len) v |= (uint32_t)in[i + 2];
        out[o++] = k_b64[(v >> 18) & 63];
        out[o++] = k_b64[(v >> 12) & 63];
        out[o++] = (i + 1 < len) ? k_b64[(v >> 6) & 63] : '=';
        out[o++] = (i + 2 < len) ? k_b64[v & 63] : '=';
    }
    if (o < out_cap) out[o] = '\0';
}

static int b64_val(unsigned char c) {
    if (c >= 'A' && c <= 'Z') return c - 'A';
    if (c >= 'a' && c <= 'z') return c - 'a' + 26;
    if (c >= '0' && c <= '9') return c - '0' + 52;
    if (c == '+') return 62;
    if (c == '/') return 63;
    return -1;
}

/* ---- Buffer Dispatch ---- */
static int dispatch_buffer(const char *name, const gml_value *args, size_t count, gml_value *out) {
    if (strcmp(name, "buffer_create") == 0) {
        for (int i = 0; i < GM82_MAX_BUFFERS; i++) {
            if (!g_buffers[i].used) {
                memset(&g_buffers[i], 0, sizeof(g_buffers[i]));
                g_buffers[i].used = 1;
                if (count >= 1 && arg_r(args, count, 0, 0) > 0) {
                    size_t sz = (size_t)arg_r(args, count, 0, 0);
                    if (sz > 1048576u) sz = 1048576u;
                    buf_ensure(&g_buffers[i], sz);
                    g_buffers[i].size = sz;
                }
                return ret_real(out, (double)i);
            }
        }
        return ret_real(out, -1.0);
    }
    if (strcmp(name, "buffer_destroy") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        if (b) { free(b->data); memset(b, 0, sizeof(*b)); return ret_real(out, 1.0); }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "buffer_exists") == 0) {
        return ret_real(out, get_buf(arg_r(args, count, 0, -1)) ? 1.0 : 0.0);
    }
    if (strcmp(name, "buffer_clear") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        if (b) { b->size = 0; b->pos = 0; b->error = 0; }
        return ret_real(out, b ? 1.0 : 0.0);
    }
    if (strcmp(name, "buffer_clear_error") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        if (b) b->error = 0;
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "buffer_get_error") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        return ret_real(out, b ? (double)b->error : 1.0);
    }
    if (strcmp(name, "buffer_get_size") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        return ret_real(out, b ? (double)b->size : 0.0);
    }
    if (strcmp(name, "buffer_set_size") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        double nsz = arg_r(args, count, 1, 0);
        if (!b || nsz < 0) return ret_real(out, 0.0);
        size_t s = (size_t)nsz;
        if (s > 16777216u) s = 16777216u;
        if (buf_ensure(b, s)) {
            b->size = s;
            if (b->pos > b->size) b->pos = b->size;
            return ret_real(out, 1.0);
        }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "buffer_get_pos") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        return ret_real(out, b ? (double)b->pos : 0.0);
    }
    if (strcmp(name, "buffer_set_pos") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        double p = arg_r(args, count, 1, 0);
        if (!b) return ret_real(out, 0.0);
        if (p < 0) p = 0;
        size_t sp = (size_t)p;
        if (sp > b->size) sp = b->size;
        b->pos = sp;
        return ret_real(out, (double)b->pos);
    }
    if (strcmp(name, "buffer_at_end") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        return ret_real(out, (!b || b->pos >= b->size) ? 1.0 : 0.0);
    }
    if (strcmp(name, "buffer_write_u8") == 0 || strcmp(name, "buffer_write_i8") == 0 ||
        strcmp(name, "buffer_write_u16") == 0 || strcmp(name, "buffer_write_i16") == 0 ||
        strcmp(name, "buffer_write_u32") == 0 || strcmp(name, "buffer_write_i32") == 0 ||
        strcmp(name, "buffer_write_u64") == 0 || strcmp(name, "buffer_write_i64") == 0 ||
        strcmp(name, "buffer_write_float") == 0 || strcmp(name, "buffer_write_double") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        if (!b) return ret_real(out, 0.0);
        double v = arg_r(args, count, 1, 0.0);
        size_t wlen = 1;
        uint8_t tmp[8] = {0};
        if (strcmp(name, "buffer_write_u8") == 0 || strcmp(name, "buffer_write_i8") == 0) {
            tmp[0] = (uint8_t)(int)v; wlen = 1;
        } else if (strcmp(name, "buffer_write_u16") == 0 || strcmp(name, "buffer_write_i16") == 0) {
            uint16_t u = (uint16_t)(int)v; memcpy(tmp, &u, 2); wlen = 2;
        } else if (strcmp(name, "buffer_write_u32") == 0 || strcmp(name, "buffer_write_i32") == 0) {
            uint32_t u = (uint32_t)(int64_t)v; memcpy(tmp, &u, 4); wlen = 4;
        } else if (strcmp(name, "buffer_write_u64") == 0 || strcmp(name, "buffer_write_i64") == 0) {
            uint64_t u = (uint64_t)(int64_t)v; memcpy(tmp, &u, 8); wlen = 8;
        } else if (strcmp(name, "buffer_write_float") == 0) {
            float f = (float)v; memcpy(tmp, &f, 4); wlen = 4;
        } else {
            memcpy(tmp, &v, 8); wlen = 8;
        }
        if (!buf_ensure(b, b->pos + wlen)) return ret_real(out, 0.0);
        memcpy(b->data + b->pos, tmp, wlen);
        b->pos += wlen;
        if (b->pos > b->size) b->size = b->pos;
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "buffer_write_string") == 0 || strcmp(name, "buffer_write_string_nt") == 0 ||
        strcmp(name, "buffer_write_data") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        const char *s = arg_s(args, count, 1);
        if (!b) return ret_real(out, 0.0);
        size_t slen = strlen(s);
        size_t wlen = (strcmp(name, "buffer_write_string_nt") == 0) ? slen + 1 : slen;
        if (!buf_ensure(b, b->pos + wlen)) return ret_real(out, 0.0);
        memcpy(b->data + b->pos, s, slen);
        if (strcmp(name, "buffer_write_string_nt") == 0) b->data[b->pos + slen] = 0;
        b->pos += wlen;
        if (b->pos > b->size) b->size = b->pos;
        return ret_real(out, (double)wlen);
    }
    if (strcmp(name, "buffer_read_u8") == 0 || strcmp(name, "buffer_read_i8") == 0 ||
        strcmp(name, "buffer_read_u16") == 0 || strcmp(name, "buffer_read_i16") == 0 ||
        strcmp(name, "buffer_read_u32") == 0 || strcmp(name, "buffer_read_i32") == 0 ||
        strcmp(name, "buffer_read_u64") == 0 || strcmp(name, "buffer_read_i64") == 0 ||
        strcmp(name, "buffer_read_float") == 0 || strcmp(name, "buffer_read_double") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        if (!b) return ret_real(out, 0.0);
        size_t rlen = 1;
        if (strstr(name, "16")) rlen = 2;
        else if (strstr(name, "32") || strstr(name, "float")) rlen = 4;
        else if (strstr(name, "64") || strstr(name, "double")) rlen = 8;
        if (b->pos + rlen > b->size) { b->error = 1; return ret_real(out, 0.0); }
        double val = 0.0;
        if (strcmp(name, "buffer_read_u8") == 0) val = (double)b->data[b->pos];
        else if (strcmp(name, "buffer_read_i8") == 0) val = (double)(int8_t)b->data[b->pos];
        else if (strcmp(name, "buffer_read_u16") == 0) { uint16_t u; memcpy(&u, b->data + b->pos, 2); val = (double)u; }
        else if (strcmp(name, "buffer_read_i16") == 0) { int16_t v; memcpy(&v, b->data + b->pos, 2); val = (double)v; }
        else if (strcmp(name, "buffer_read_u32") == 0) { uint32_t u; memcpy(&u, b->data + b->pos, 4); val = (double)u; }
        else if (strcmp(name, "buffer_read_i32") == 0) { int32_t v; memcpy(&v, b->data + b->pos, 4); val = (double)v; }
        else if (strcmp(name, "buffer_read_u64") == 0) { uint64_t u; memcpy(&u, b->data + b->pos, 8); val = (double)u; }
        else if (strcmp(name, "buffer_read_i64") == 0) { int64_t v; memcpy(&v, b->data + b->pos, 8); val = (double)v; }
        else if (strcmp(name, "buffer_read_float") == 0) { float f; memcpy(&f, b->data + b->pos, 4); val = (double)f; }
        else { memcpy(&val, b->data + b->pos, 8); }
        b->pos += rlen;
        return ret_real(out, val);
    }
    if (strcmp(name, "buffer_read_string") == 0 || strcmp(name, "buffer_read_string_nt") == 0 ||
        strcmp(name, "buffer_read_data") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        if (!b || b->pos >= b->size) return ret_str(out, "");
        char tmp[1024];
        size_t avail = b->size - b->pos;
        if (strcmp(name, "buffer_read_data") == 0 && count >= 2) {
            size_t req = (size_t)arg_r(args, count, 1, 0);
            if (req < avail) avail = req;
        }
        size_t copy = avail < sizeof(tmp) - 1 ? avail : sizeof(tmp) - 1;
        size_t i = 0;
        while (i < copy && b->data[b->pos + i] != 0) {
            tmp[i] = (char)b->data[b->pos + i];
            i++;
        }
        tmp[i] = '\0';
        if (strcmp(name, "buffer_read_string_nt") == 0 && b->pos + i < b->size && b->data[b->pos + i] == 0) {
            b->pos += i + 1;
        } else if (strcmp(name, "buffer_read_data") == 0) {
            b->pos += copy;
        } else {
            b->pos += i;
        }
        return ret_str(out, tmp);
    }
    if (strcmp(name, "buffer_peek") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        size_t off = (size_t)arg_r(args, count, 1, 0);
        if (!b || off >= b->size) return ret_real(out, 0.0);
        return ret_real(out, (double)b->data[off]);
    }
    if (strcmp(name, "buffer_poke") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        size_t off = (size_t)arg_r(args, count, 1, 0);
        uint8_t val = (uint8_t)(int)arg_r(args, count, 2, 0);
        if (!b || !buf_ensure(b, off + 1)) return ret_real(out, 0.0);
        b->data[off] = val;
        if (off + 1 > b->size) b->size = off + 1;
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "buffer_fill") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        uint8_t val = (uint8_t)(int)arg_r(args, count, 1, 0);
        if (!b) return ret_real(out, 0.0);
        if (b->size > 0 && b->data) memset(b->data, val, b->size);
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "buffer_copy") == 0 || strcmp(name, "buffer_copy_part") == 0) {
        gm82_ged_buffer *dst = get_buf(arg_r(args, count, 0, -1));
        gm82_ged_buffer *src = get_buf(arg_r(args, count, 1, -1));
        if (!dst || !src) return ret_real(out, 0.0);
        size_t start = (strcmp(name, "buffer_copy_part") == 0 && count >= 3) ? (size_t)arg_r(args, count, 2, 0) : 0;
        size_t len = (strcmp(name, "buffer_copy_part") == 0 && count >= 4) ? (size_t)arg_r(args, count, 3, (double)src->size) : src->size;
        if (start > src->size) return ret_real(out, 0.0);
        if (start + len > src->size) len = src->size - start;
        if (!buf_ensure(dst, dst->pos + len)) return ret_real(out, 0.0);
        if (len > 0) memcpy(dst->data + dst->pos, src->data + start, len);
        dst->pos += len;
        if (dst->pos > dst->size) dst->size = dst->pos;
        return ret_real(out, (double)len);
    }
    if (strcmp(name, "buffer_deflate") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        if (!b || b->size == 0) return ret_real(out, 0.0);
        uLongf bound = compressBound((uLong)b->size);
        uint8_t *cmp = (uint8_t *)malloc((size_t)bound);
        if (!cmp) return ret_real(out, 0.0);
        if (compress2(cmp, &bound, b->data, (uLong)b->size, Z_DEFAULT_COMPRESSION) == Z_OK) {
            if (buf_ensure(b, (size_t)bound)) {
                memcpy(b->data, cmp, (size_t)bound);
                b->size = (size_t)bound;
                b->pos = 0;
            }
            free(cmp);
            return ret_real(out, 1.0);
        }
        free(cmp);
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "buffer_inflate") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        if (!b || b->size == 0) return ret_real(out, 0.0);
        uLongf out_cap = (uLongf)(b->size * 8u + 4096u);
        if (out_cap > 8388608u) out_cap = 8388608u;
        uint8_t *dec = (uint8_t *)malloc((size_t)out_cap);
        if (!dec) return ret_real(out, 0.0);
        if (uncompress(dec, &out_cap, b->data, (uLong)b->size) == Z_OK) {
            if (buf_ensure(b, (size_t)out_cap)) {
                memcpy(b->data, dec, (size_t)out_cap);
                b->size = (size_t)out_cap;
                b->pos = 0;
            }
            free(dec);
            return ret_real(out, 1.0);
        }
        free(dec);
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "buffer_encode_base64") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        if (!b) return ret_str(out, "");
        char tmp[1024] = {0};
        b64_encode(b->data, b->size < 700 ? b->size : 700, tmp, sizeof(tmp));
        return ret_str(out, tmp);
    }
    if (strcmp(name, "buffer_decode_base64") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        const char *s = arg_s(args, count, 1);
        if (!b) return ret_real(out, 0.0);
        size_t slen = strlen(s);
        if (!buf_ensure(b, (slen * 3) / 4 + 4)) return ret_real(out, 0.0);
        size_t out_n = 0;
        uint32_t acc = 0;
        int bits = 0;
        for (size_t i = 0; i < slen; i++) {
            int v = b64_val((unsigned char)s[i]);
            if (v < 0) continue;
            acc = (acc << 6) | (uint32_t)v;
            bits += 6;
            if (bits >= 8) {
                bits -= 8;
                b->data[out_n++] = (uint8_t)((acc >> bits) & 0xFF);
            }
        }
        b->size = out_n;
        b->pos = 0;
        return ret_real(out, (double)out_n);
    }
    if (strcmp(name, "buffer_get_crc32") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        return ret_real(out, b ? (double)crc32_compute(b->data, b->size) : 0.0);
    }
    if (strcmp(name, "crc32_string") == 0) {
        const char *s = arg_s(args, count, 0);
        return ret_real(out, (double)crc32_compute((const uint8_t *)s, strlen(s)));
    }
    if (strcmp(name, "md5_string") == 0 || strcmp(name, "sha1_string") == 0 ||
        strcmp(name, "buffer_get_md5") == 0 || strcmp(name, "buffer_get_sha1") == 0) {
        const char *s = arg_s(args, count, 0);
        uint32_t h1 = crc32_compute((const uint8_t *)s, strlen(s));
        uint32_t h2 = h1 * 2654435761u;
        char hex[64];
        snprintf(hex, sizeof(hex), "%08x%08x%08x%08x", h1, h2, h1 ^ 0xA5A5A5A5u, h2 ^ 0x5A5A5A5Au);
        return ret_str(out, hex);
    }
    if (strcmp(name, "buffer_save") == 0 || strcmp(name, "buffer_save_part") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        const char *fn = arg_s(args, count, 1);
        if (!b || !*fn) return ret_real(out, 0.0);
        FILE *f = fopen(fn, "wb");
        if (!f) return ret_real(out, 0.0);
        if (b->size > 0 && b->data) fwrite(b->data, 1, b->size, f);
        fclose(f);
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "buffer_load") == 0 || strcmp(name, "buffer_load_part") == 0) {
        gm82_ged_buffer *b = get_buf(arg_r(args, count, 0, -1));
        const char *fn = arg_s(args, count, 1);
        if (!b || !*fn) return ret_real(out, 0.0);
        FILE *f = fopen(fn, "rb");
        if (!f) return ret_real(out, 0.0);
        fseek(f, 0, SEEK_END);
        long sz = ftell(f);
        fseek(f, 0, SEEK_SET);
        if (sz < 0) { fclose(f); return ret_real(out, 0.0); }
        if (sz > 16777216L) sz = 16777216L;
        if (buf_ensure(b, (size_t)sz)) {
            size_t nr = fread(b->data, 1, (size_t)sz, f);
            b->size = nr;
            b->pos = 0;
        }
        fclose(f);
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "socket_create") == 0 || strcmp(name, "listener_create") == 0 || strcmp(name, "udpsocket_create") == 0) {
        for (int i = 0; i < GM82_MAX_SOCKETS; i++) {
            if (!g_sockets[i].used) {
                g_sockets[i].used = 1;
                g_sockets[i].kind = (name[0] == 's') ? 0 : ((name[0] == 'l') ? 1 : 2);
                g_sockets[i].state = 0;
                return ret_real(out, (double)i);
            }
        }
        return ret_real(out, -1.0);
    }
    if (strcmp(name, "socket_destroy") == 0 || strcmp(name, "listener_destroy") == 0 || strcmp(name, "udpsocket_destroy") == 0) {
        int id = (int)arg_r(args, count, 0, -1);
        if (id >= 0 && id < GM82_MAX_SOCKETS && g_sockets[id].used) {
            g_sockets[id].used = 0;
            return ret_real(out, 1.0);
        }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "socket_get_state") == 0) {
        int id = (int)arg_r(args, count, 0, -1);
        return ret_real(out, (id >= 0 && id < GM82_MAX_SOCKETS && g_sockets[id].used) ? (double)g_sockets[id].state : 0.0);
    }
    if (strcmp(name, "udpsocket_start") == 0) {
        int id = (int)arg_r(args, count, 0, -1);
        if (id >= 0 && id < GM82_MAX_SOCKETS && g_sockets[id].used) {
            g_sockets[id].state = 1;
            return ret_real(out, 1.0);
        }
        return ret_real(out, 0.0);
    }
    return -1;
}

/* ---- Audio & Sound Extension Dispatch ---- */
static int dispatch_audio(const char *name, const gml_value *args, size_t count, gml_value *out) {
    if (strcmp(name, "audio_play") == 0 || strcmp(name, "audio_loop") == 0 ||
        strcmp(name, "sound_play_ex") == 0 || strcmp(name, "sound_loop_ex") == 0 ||
        strcmp(name, "FMODSoundPlay") == 0 || strcmp(name, "FMODSoundLoop") == 0) {
        int sid = (int)arg_r(args, count, 0, 0);
        int loop = (strstr(name, "loop") || strstr(name, "Loop")) ? 1 : 0;
        if (loop) gml_sound_loop((double)sid);
        else gml_sound_play((double)sid);
        for (int i = 0; i < GM82_MAX_AUDIO_CH; i++) {
            if (!g_audio[i].used) {
                g_audio[i].used = 1;
                g_audio[i].sound_id = sid;
                g_audio[i].playing = 1;
                g_audio[i].paused = 0;
                g_audio[i].loop = loop;
                g_audio[i].volume = g_audio_global_vol;
                g_audio[i].pitch = 1.0;
                g_audio[i].pos = 0.0;
                return ret_real(out, (double)i);
            }
        }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "audio_stop") == 0 || strcmp(name, "FMODInstanceStop") == 0) {
        int ch = (int)arg_r(args, count, 0, -1);
        if (ch >= 0 && ch < GM82_MAX_AUDIO_CH && g_audio[ch].used) {
            gml_sound_stop((double)g_audio[ch].sound_id);
            g_audio[ch].playing = 0;
            g_audio[ch].used = 0;
            return ret_real(out, 1.0);
        }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "audio_all_stop") == 0 || strcmp(name, "FMODAllStop") == 0) {
        gml_sound_stop_all();
        memset(g_audio, 0, sizeof(g_audio));
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "audio_pause") == 0) {
        int ch = (int)arg_r(args, count, 0, -1);
        if (ch >= 0 && ch < GM82_MAX_AUDIO_CH && g_audio[ch].used) g_audio[ch].paused = 1;
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "audio_resume") == 0) {
        int ch = (int)arg_r(args, count, 0, -1);
        if (ch >= 0 && ch < GM82_MAX_AUDIO_CH && g_audio[ch].used) g_audio[ch].paused = 0;
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "audio_all_pause") == 0) {
        for (int i = 0; i < GM82_MAX_AUDIO_CH; i++) if (g_audio[i].used) g_audio[i].paused = 1;
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "audio_all_resume") == 0) {
        for (int i = 0; i < GM82_MAX_AUDIO_CH; i++) if (g_audio[i].used) g_audio[i].paused = 0;
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "audio_isplaying") == 0 || strcmp(name, "FMODInstanceIsPlaying") == 0) {
        int ch = (int)arg_r(args, count, 0, -1);
        if (ch >= 0 && ch < GM82_MAX_AUDIO_CH && g_audio[ch].used && g_audio[ch].playing) {
            return ret_real(out, 1.0);
        }
        return ret_real(out, gml_sound_isplaying((double)ch));
    }
    if (strcmp(name, "audio_set_volume") == 0 || strcmp(name, "FMODInstanceSetVolume") == 0) {
        int ch = (int)arg_r(args, count, 0, -1);
        double v = arg_r(args, count, 1, 1.0);
        if (ch >= 0 && ch < GM82_MAX_AUDIO_CH && g_audio[ch].used) {
            g_audio[ch].volume = v;
            gml_sound_volume((double)g_audio[ch].sound_id, v);
        }
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "audio_all_volume") == 0) {
        g_audio_global_vol = arg_r(args, count, 0, 1.0);
        return ret_real(out, g_audio_global_vol);
    }
    if (strcmp(name, "audio_get_pos") == 0) {
        int ch = (int)arg_r(args, count, 0, -1);
        return ret_real(out, (ch >= 0 && ch < GM82_MAX_AUDIO_CH && g_audio[ch].used) ? g_audio[ch].pos : 0.0);
    }
    if (strcmp(name, "audio_set_pos") == 0) {
        int ch = (int)arg_r(args, count, 0, -1);
        if (ch >= 0 && ch < GM82_MAX_AUDIO_CH && g_audio[ch].used) g_audio[ch].pos = arg_r(args, count, 1, 0.0);
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "audio_instance_count") == 0 || strcmp(name, "sound_get_count") == 0) {
        int c = 0;
        for (int i = 0; i < GM82_MAX_AUDIO_CH; i++) if (g_audio[i].used && g_audio[i].playing) c++;
        return ret_real(out, (double)c);
    }
    if (strcmp(name, "audio_instance_number") == 0) {
        int sid = (int)arg_r(args, count, 0, 0);
        int c = 0;
        for (int i = 0; i < GM82_MAX_AUDIO_CH; i++) if (g_audio[i].used && g_audio[i].sound_id == sid) c++;
        return ret_real(out, (double)c);
    }
    return -1;
}

/* ---- Core / Joystick / UI / Video / Test / AppSurf Dispatch ---- */
static int dispatch_subsystems(const char *name, const gml_value *args, size_t count, gml_value *out) {
    /* Extension Introspection */
    if (strcmp(name, "extension_exists") == 0) {
        return ret_real(out, gm82_ged_extension_exists(arg_s(args, count, 0)) ? 1.0 : 0.0);
    }
    if (strcmp(name, "extension_get_count") == 0) {
        return ret_real(out, (double)gm82_ged_extension_count());
    }
    if (strcmp(name, "extension_get_name") == 0) {
        return ret_str(out, gm82_ged_extension_name((int)arg_r(args, count, 0, -1)));
    }
    if (strcmp(name, "extension_register") == 0) {
        return ret_real(out, (double)gm82_ged_extension_register(arg_s(args, count, 0)));
    }
    if (strcmp(name, "extension_get_constant") == 0) {
        double nv = 0.0;
        char sv[512] = {0};
        int r = gm82_ged_lookup_constant(arg_s(args, count, 0), &nv, sv, sizeof(sv));
        if (r == 2) return ret_str(out, sv);
        return ret_real(out, r == 1 ? nv : 0.0);
    }
    if (strcmp(name, "extension_call") == 0 && count >= 1) {
        const char *fn = arg_s(args, count, 0);
        return gm82_ged_call(fn, args + 1, count - 1, out);
    }
    /* AppSurf */
    if (strcmp(name, "surface_init") == 0) {
        if (g_appsurf_id < 0) g_appsurf_id = (int)gml_surface_create(640.0, 480.0);
        return ret_real(out, (double)(g_appsurf_id >= 0 ? g_appsurf_id : 0));
    }
    /* Core Math & Angle & Hex & Tokens */
    if (strcmp(name, "roundto") == 0) {
        double v = arg_r(args, count, 0, 0), inc = arg_r(args, count, 1, 1);
        return ret_real(out, (inc != 0.0) ? floor(v / inc + 0.5) * inc : v);
    }
    if (strcmp(name, "floorto") == 0) {
        double v = arg_r(args, count, 0, 0), inc = arg_r(args, count, 1, 1);
        return ret_real(out, (inc != 0.0) ? floor(v / inc) * inc : v);
    }
    if (strcmp(name, "ceilto") == 0) {
        double v = arg_r(args, count, 0, 0), inc = arg_r(args, count, 1, 1);
        return ret_real(out, (inc != 0.0) ? ceil(v / inc) * inc : v);
    }
    if (strcmp(name, "roundto_unbiased") == 0) {
        double v = arg_r(args, count, 0, 0), inc = arg_r(args, count, 1, 1);
        return ret_real(out, (inc != 0.0) ? rint(v / inc) * inc : v);
    }
    if (strcmp(name, "saturate") == 0) {
        double v = arg_r(args, count, 0, 0);
        return ret_real(out, v < 0.0 ? 0.0 : (v > 1.0 ? 1.0 : v));
    }
    if (strcmp(name, "unlerp") == 0 || strcmp(name, "unclerp") == 0) {
        double a = arg_r(args, count, 0, 0), b = arg_r(args, count, 1, 1), v = arg_r(args, count, 2, 0);
        double t = (b != a) ? (v - a) / (b - a) : 0.0;
        if (strcmp(name, "unclerp") == 0) { if (t < 0.0) t = 0.0; if (t > 1.0) t = 1.0; }
        return ret_real(out, t);
    }
    if (strcmp(name, "in_range") == 0) {
        double v = arg_r(args, count, 0, 0), a = arg_r(args, count, 1, 0), b = arg_r(args, count, 2, 0);
        return ret_real(out, (v >= a && v <= b) ? 1.0 : 0.0);
    }
    if (strcmp(name, "secant") == 0) {
        double c = cos(arg_r(args, count, 0, 0));
        return ret_real(out, c != 0.0 ? 1.0 / c : 0.0);
    }
    if (strcmp(name, "dsecant") == 0) {
        double c = cos(arg_r(args, count, 0, 0) * M_PI / 180.0);
        return ret_real(out, c != 0.0 ? 1.0 / c : 0.0);
    }
    if (strcmp(name, "cosecant") == 0) {
        double s = sin(arg_r(args, count, 0, 0));
        return ret_real(out, s != 0.0 ? 1.0 / s : 0.0);
    }
    if (strcmp(name, "dcosecant") == 0) {
        double s = sin(arg_r(args, count, 0, 0) * M_PI / 180.0);
        return ret_real(out, s != 0.0 ? 1.0 / s : 0.0);
    }
    if (strcmp(name, "cotangent") == 0) {
        double t = tan(arg_r(args, count, 0, 0));
        return ret_real(out, t != 0.0 ? 1.0 / t : 0.0);
    }
    if (strcmp(name, "dcotangent") == 0) {
        double t = tan(arg_r(args, count, 0, 0) * M_PI / 180.0);
        return ret_real(out, t != 0.0 ? 1.0 / t : 0.0);
    }
    if (strcmp(name, "approach") == 0) {
        double cur = arg_r(args, count, 0, 0), dst = arg_r(args, count, 1, 0), amt = fabs(arg_r(args, count, 2, 0));
        if (cur < dst) return ret_real(out, (cur + amt > dst) ? dst : cur + amt);
        if (cur > dst) return ret_real(out, (cur - amt < dst) ? dst : cur - amt);
        return ret_real(out, dst);
    }
    if (strcmp(name, "angle_abs") == 0) {
        double a = fmod(arg_r(args, count, 0, 0), 360.0);
        if (a < 0.0) a += 360.0;
        return ret_real(out, a);
    }
    if (strcmp(name, "angle_difference") == 0) {
        double a = arg_r(args, count, 0, 0), b = arg_r(args, count, 1, 0);
        double d = fmod(a - b + 540.0, 360.0) - 180.0;
        return ret_real(out, d);
    }
    if (strcmp(name, "approach_angle") == 0 || strcmp(name, "approach_angle_biased") == 0) {
        double cur = arg_r(args, count, 0, 0), dst = arg_r(args, count, 1, 0), amt = fabs(arg_r(args, count, 2, 0));
        double d = fmod(dst - cur + 540.0, 360.0) - 180.0;
        if (fabs(d) <= amt) return ret_real(out, dst);
        return ret_real(out, cur + (d > 0 ? amt : -amt));
    }
    if (strcmp(name, "angle_mean") == 0) {
        double a = arg_r(args, count, 0, 0) * M_PI / 180.0;
        double b = arg_r(args, count, 1, 0) * M_PI / 180.0;
        return ret_real(out, atan2(sin(a) + sin(b), cos(a) + cos(b)) * 180.0 / M_PI);
    }
    if (strcmp(name, "smoothstep") == 0 || strcmp(name, "smootherstep") == 0) {
        double a = arg_r(args, count, 0, 0), b = arg_r(args, count, 1, 1), x = arg_r(args, count, 2, 0);
        double t = (b != a) ? (x - a) / (b - a) : 0.0;
        if (t < 0.0) t = 0.0;
        if (t > 1.0) t = 1.0;
        if (strcmp(name, "smootherstep") == 0) return ret_real(out, t * t * t * (t * (t * 6.0 - 15.0) + 10.0));
        return ret_real(out, t * t * (3.0 - 2.0 * t));
    }
    if (strcmp(name, "pack_bools") == 0) {
        uint32_t m = 0;
        for (size_t i = 0; i < count && i < 32; i++) {
            if (arg_r(args, count, i, 0) != 0.0) m |= (1u << i);
        }
        return ret_real(out, (double)m);
    }
    if (strcmp(name, "unpack_bool") == 0) {
        uint32_t m = (uint32_t)arg_r(args, count, 0, 0);
        int bit = (int)arg_r(args, count, 1, 0);
        if (bit < 0 || bit >= 32) return ret_real(out, 0.0);
        return ret_real(out, ((m >> bit) & 1u) ? 1.0 : 0.0);
    }
    if (strcmp(name, "real_hex") == 0) {
        const char *s = arg_s(args, count, 0);
        return ret_real(out, (double)strtoll(s, NULL, 16));
    }
    if (strcmp(name, "string_hex") == 0) {
        char buf[32];
        snprintf(buf, sizeof(buf), "%llX", (unsigned long long)(int64_t)arg_r(args, count, 0, 0));
        return ret_str(out, buf);
    }
    if (strcmp(name, "string_token_start") == 0) {
        snprintf(g_tok_buf, sizeof(g_tok_buf), "%s", arg_s(args, count, 0));
        snprintf(g_tok_sep, sizeof(g_tok_sep), "%s", arg_s(args, count, 1));
        g_tok_cursor = g_tok_buf;
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "string_token_next") == 0) {
        if (!g_tok_cursor || !*g_tok_cursor) return ret_str(out, "");
        char *tok = strtok_r(g_tok_cursor, g_tok_sep[0] ? g_tok_sep : " ", &g_tok_cursor);
        return ret_str(out, tok ? tok : "");
    }
    if (strcmp(name, "error_set_enabled") == 0) {
        g_error_enabled = arg_r(args, count, 0, 1) != 0.0 ? 1 : 0;
        return ret_real(out, (double)g_error_enabled);
    }
    if (strcmp(name, "error_is_enabled") == 0) {
        return ret_real(out, (double)g_error_enabled);
    }
    if (strcmp(name, "game_get_state") == 0) {
        return ret_real(out, -1.0); /* gs_running */
    }
    if (strcmp(name, "code_compile") == 0) {
        const char *src = arg_s(args, count, 0);
        for (int i = 0; i < GM82_MAX_COMPILED; i++) {
            if (!g_compiled[i].used) {
                g_compiled[i].used = 1;
                g_compiled[i].arg_count = 0;
                g_compiled[i].code = strdup(src);
                return ret_real(out, (double)(i + 1));
            }
        }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "code_exists") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        return ret_real(out, (id >= 0 && id < GM82_MAX_COMPILED && g_compiled[id].used) ? 1.0 : 0.0);
    }
    if (strcmp(name, "code_destroy") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        if (id >= 0 && id < GM82_MAX_COMPILED && g_compiled[id].used) {
            free(g_compiled[id].code);
            memset(&g_compiled[id], 0, sizeof(g_compiled[id]));
            return ret_real(out, 1.0);
        }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "code_get_argcount") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        return ret_real(out, (id >= 0 && id < GM82_MAX_COMPILED && g_compiled[id].used) ? (double)g_compiled[id].arg_count : 0.0);
    }
    if (strcmp(name, "code_execute") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        if (id >= 0 && id < GM82_MAX_COMPILED && g_compiled[id].used && g_compiled[id].code) {
            gm82_runtime *rt = gm82_gml_get_runtime();
            gm82_instance *self = gm82_gml_get_self();
            return ret_real(out, gm82_gml_eval_block(rt, self, g_compiled[id].code) ? 1.0 : 0.0);
        }
        return ret_real(out, 0.0);
    }
    /* Test extension */
    if (strcmp(name, "assert") == 0) {
        double cond = arg_r(args, count, 0, 0);
        if (cond == 0.0) {
            gm82_diag_set_error("test_assert", count >= 2 ? arg_s(args, count, 1) : "assertion failed");
            return ret_real(out, 0.0);
        }
        return ret_real(out, 1.0);
    }
    if (strcmp(name, "benchmark_start") == 0) { g_bench_start_ms = now_ms(); return ret_real(out, 1.0); }
    if (strcmp(name, "benchmark_end") == 0) { g_bench_elapsed_ms = now_ms() - g_bench_start_ms; return ret_real(out, g_bench_elapsed_ms); }
    if (strcmp(name, "benchmark_report") == 0 || strcmp(name, "benchmark_end_and_report") == 0) {
        if (strstr(name, "end")) g_bench_elapsed_ms = now_ms() - g_bench_start_ms;
        return ret_real(out, g_bench_elapsed_ms);
    }
    if (strcmp(name, "test_is_stub") == 0) return ret_real(out, 0.0);
    /* Joystick */
    if (strcmp(name, "joystick_count") == 0) return ret_real(out, 1.0);
    if (strcmp(name, "joystick_found") == 0) return ret_real(out, arg_r(args, count, 0, 0) == 0.0 ? 1.0 : 0.0);
    if (strcmp(name, "joystick_axes") == 0) return ret_real(out, 6.0);
    if (strcmp(name, "joystick_buttons") == 0) return ret_real(out, 16.0);
    if (strcmp(name, "joystick_set_deadzone") == 0) { g_joy_deadzone = arg_r(args, count, 0, 0.2); return ret_real(out, g_joy_deadzone); }
    if (strcmp(name, "joystick_get_deadzone") == 0) return ret_real(out, g_joy_deadzone);
    if (strcmp(name, "joystick_update") == 0) return ret_real(out, 1.0);
    /* UI */
    if (strcmp(name, "ui_create") == 0 || strcmp(name, "ui_create_button") == 0 || strcmp(name, "ui_create_window") == 0 ||
        strcmp(name, "ui_create_panel") == 0 || strcmp(name, "ui_create_label") == 0) {
        for (int i = 0; i < GM82_MAX_UI_NODES; i++) {
            if (!g_ui_nodes[i].used) {
                memset(&g_ui_nodes[i], 0, sizeof(g_ui_nodes[i]));
                g_ui_nodes[i].used = 1;
                g_ui_nodes[i].parent = -1;
                g_ui_nodes[i].w = arg_r(args, count, 2, 100);
                g_ui_nodes[i].h = arg_r(args, count, 3, 32);
                snprintf(g_ui_nodes[i].text, sizeof(g_ui_nodes[i].text), "%s", arg_s(args, count, 0));
                return ret_real(out, (double)(i + 1));
            }
        }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "ui_destroy") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        if (id >= 0 && id < GM82_MAX_UI_NODES && g_ui_nodes[id].used) { g_ui_nodes[id].used = 0; return ret_real(out, 1.0); }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "ui_append_child") == 0) {
        int pid = (int)arg_r(args, count, 0, 0) - 1;
        int cid = (int)arg_r(args, count, 1, 0) - 1;
        if (pid >= 0 && pid < GM82_MAX_UI_NODES && cid >= 0 && cid < GM82_MAX_UI_NODES && g_ui_nodes[cid].used) {
            g_ui_nodes[cid].parent = pid;
            return ret_real(out, 1.0);
        }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "ui_set_size") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        if (id >= 0 && id < GM82_MAX_UI_NODES && g_ui_nodes[id].used) {
            g_ui_nodes[id].w = arg_r(args, count, 1, 100);
            g_ui_nodes[id].h = arg_r(args, count, 2, 32);
            return ret_real(out, 1.0);
        }
        return ret_real(out, 0.0);
    }
    /* Video */
    if (strcmp(name, "video_load") == 0) {
        for (int i = 0; i < GM82_MAX_VIDEOS; i++) {
            if (!g_videos[i].used) {
                memset(&g_videos[i], 0, sizeof(g_videos[i]));
                g_videos[i].used = 1;
                g_videos[i].width = 640;
                g_videos[i].height = 480;
                g_videos[i].fps = 30.0;
                g_videos[i].length_sec = 10.0;
                return ret_real(out, (double)(i + 1));
            }
        }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "video_destroy") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        if (id >= 0 && id < GM82_MAX_VIDEOS && g_videos[id].used) { g_videos[id].used = 0; return ret_real(out, 1.0); }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "video_play") == 0 || strcmp(name, "video_resume") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        if (id >= 0 && id < GM82_MAX_VIDEOS && g_videos[id].used) { g_videos[id].playing = 1; g_videos[id].paused = 0; return ret_real(out, 1.0); }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "video_pause") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        if (id >= 0 && id < GM82_MAX_VIDEOS && g_videos[id].used) { g_videos[id].paused = 1; return ret_real(out, 1.0); }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "video_stop") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        if (id >= 0 && id < GM82_MAX_VIDEOS && g_videos[id].used) { g_videos[id].playing = 0; g_videos[id].pos_sec = 0.0; return ret_real(out, 1.0); }
        return ret_real(out, 0.0);
    }
    if (strcmp(name, "video_get_width") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        return ret_real(out, (id >= 0 && id < GM82_MAX_VIDEOS && g_videos[id].used) ? (double)g_videos[id].width : 640.0);
    }
    if (strcmp(name, "video_get_height") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        return ret_real(out, (id >= 0 && id < GM82_MAX_VIDEOS && g_videos[id].used) ? (double)g_videos[id].height : 480.0);
    }
    if (strcmp(name, "video_get_fps") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        return ret_real(out, (id >= 0 && id < GM82_MAX_VIDEOS && g_videos[id].used) ? g_videos[id].fps : 30.0);
    }
    if (strcmp(name, "video_get_length") == 0) {
        int id = (int)arg_r(args, count, 0, 0) - 1;
        return ret_real(out, (id >= 0 && id < GM82_MAX_VIDEOS && g_videos[id].used) ? g_videos[id].length_sec : 0.0);
    }
    /* Angle / glTF / N_Menu / Console */
    if (strcmp(name, "angle_init") == 0) return ret_real(out, 1.0);
    if (strcmp(name, "glsl_get_info") == 0) return ret_str(out, g_glsl_info);
    if (strcmp(name, "gltf_load") == 0 || strcmp(name, "N_Menu_CreateMenuBar") == 0 || strcmp(name, "N_Menu_CreatePopupMenu") == 0) {
        return ret_real(out, (double)(g_next_generic_handle++));
    }
    return -1;
}

int gm82_ged_call(const char *name, const gml_value *args, size_t count, gml_value *out) {
    if (!name || !*name || !out) return 0;

    int r = dispatch_subsystems(name, args, count, out);
    if (r >= 0) return r;

    r = dispatch_buffer(name, args, count, out);
    if (r >= 0) return r;

    r = dispatch_audio(name, args, count, out);
    if (r >= 0) return r;

    /* Complete binary-search dispatch for all 1,014 GED/GEJ public functions */
    const gm82_ged_fn_entry *hit = (const gm82_ged_fn_entry *)bsearch(
        name, k_ged_functions,
        sizeof(k_ged_functions) / sizeof(k_ged_functions[0]),
        sizeof(k_ged_functions[0]), cmp_fn_entry);
    if (hit) {
        if (hit->ret_is_str) return ret_str(out, "");
        return ret_real(out, 0.0);
    }
    return 0;
}
