#define _POSIX_C_SOURCE 200809L
#include "gm82_text_reader.h"
#include "gm82_script.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>
#include <dirent.h>
#include <errno.h>

/*
 * GM82 text-project loader. The official gm82save format stores resource
 * ordering in <group>/index.yyd and room metadata in rooms/<name>/room.txt.
 * This loader intentionally keeps binary GMK decoding separate, but imports
 * the portable text metadata needed by the Android runtime.
 */

static int is_dir(const char *path) {
    struct stat st;
    return stat(path, &st) == 0 && S_ISDIR(st.st_mode);
}

static char *trim_line(char *s) {
    size_t n;
    while (*s == ' ' || *s == '\t' || *s == '\r' || *s == '\n') ++s;
    n = strlen(s);
    while (n && (s[n - 1] == ' ' || s[n - 1] == '\t' || s[n - 1] == '\r' || s[n - 1] == '\n')) s[--n] = '\0';
    return s;
}

static int parse_i32(const char *s, int32_t fallback) {
    char *end = NULL;
    long v = strtol(s ? s : "", &end, 10);
    return (!s || end == s) ? fallback : (int32_t)v;
}

static int parse_bool(const char *s, int fallback) {
    if (!s) return fallback;
    if (!strcasecmp(s, "true") || !strcmp(s, "1")) return 1;
    if (!strcasecmp(s, "false") || !strcmp(s, "0")) return 0;
    return fallback;
}

static int read_index_names(const char *root, const char *group, char ***out_names) {
    char path[1024];
    FILE *f;
    char line[1024];
    char **names = NULL;
    int count = 0, cap = 0;
    snprintf(path, sizeof(path), "%s/%s/index.yyd", root, group);
    f = fopen(path, "r");
    if (!f) { *out_names = NULL; return 0; }
    while (fgets(line, sizeof(line), f)) {
        char *name = trim_line(line);
        if (!*name || *name == '#') continue;
        if (count == cap) {
            int next = cap ? cap * 2 : 16;
            char **grown = (char **)realloc(names, (size_t)next * sizeof(*names));
            if (!grown) break;
            names = grown; cap = next;
        }
        names[count++] = strdup(name);
    }
    fclose(f);
    *out_names = names;
    return count;
}

static int count_asset_dirs(const char *root, const char *group) {
    char path[1024];
    DIR *d;
    struct dirent *ent;
    int count = 0;
    snprintf(path, sizeof(path), "%s/%s", root, group);
    d = opendir(path);
    if (!d) return 0;
    while ((ent = readdir(d)) != NULL) {
        char child[1200];
        if (ent->d_name[0] == '.') continue;
        snprintf(child, sizeof(child), "%s/%s", path, ent->d_name);
        if (is_dir(child)) ++count;
    }
    closedir(d);
    return count;
}

static int count_assets(const char *root, const char *group) {
    char **names = NULL;
    int count = read_index_names(root, group, &names);
    if (names) {
        for (int i = 0; i < count; ++i) free(names[i]);
        free(names);
    }
    return count ? count : count_asset_dirs(root, group);
}

static int find_name_id(char **names, int count, const char *name) {
    if (!name || !*name) return -1;
    for (int i = 0; i < count; ++i) if (names[i] && !strcmp(names[i], name)) return i;
    return -1;
}

static char *read_code_file(const char *path) {
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    char *buf = (char *)calloc(GM82_SCRIPT_CODE_MAX, 1);
    if (!buf) { fclose(f); return NULL; }
    size_t n = fread(buf, 1, GM82_SCRIPT_CODE_MAX - 1, f);
    buf[n] = '\0';
    fclose(f);
    return buf;
}

static void load_settings_txt(const char *root, gm82_project_settings *s) {
    char path[1200], line[2048];
    snprintf(path, sizeof(path), "%s/settings/settings.txt", root);
    FILE *f = fopen(path, "r");
    if (!f) return;
    while (fgets(line, sizeof(line), f)) {
        char *p = strchr(line, '=');
        if (!p) continue;
        *p++ = '\0';
        char *key = trim_line(line), *value = trim_line(p);
        ++s->loaded_key_count;
        if (!strcmp(key, "fullscreen")) s->fullscreen = parse_bool(value, 0);
        else if (!strcmp(key, "interpolate_pixels")) s->interpolate_pixels = parse_bool(value, 0);
        else if (!strcmp(key, "dont_draw_border")) s->dont_draw_border = parse_bool(value, 0);
        else if (!strcmp(key, "display_cursor")) s->display_cursor = parse_bool(value, 0);
        else if (!strcmp(key, "allow_resize")) s->allow_resize = parse_bool(value, 0);
        else if (!strcmp(key, "window_on_top")) s->window_on_top = parse_bool(value, 0);
        else if (!strcmp(key, "set_resolution")) s->set_resolution = parse_bool(value, 0);
        else if (!strcmp(key, "dont_show_buttons")) s->dont_show_buttons = parse_bool(value, 0);
        else if (!strcmp(key, "vsync")) s->vsync = parse_bool(value, 0);
        else if (!strcmp(key, "swap_creation_events")) s->swap_creation_events = parse_bool(value, 0);
        else if (!strcmp(key, "disable_screensaver")) s->disable_screensaver = parse_bool(value, 0);
        else if (!strcmp(key, "f4_fullscreen_toggle")) s->f4_fullscreen_toggle = parse_bool(value, 0);
        else if (!strcmp(key, "f1_help_menu")) s->f1_help_menu = parse_bool(value, 0);
        else if (!strcmp(key, "esc_close_game")) s->esc_close_game = parse_bool(value, 0);
        else if (!strcmp(key, "f5_save_f6_load")) s->f5_save_f6_load = parse_bool(value, 0);
        else if (!strcmp(key, "f9_screenshot")) s->f9_screenshot = parse_bool(value, 0);
        else if (!strcmp(key, "treat_close_as_esc")) s->treat_close_as_esc = parse_bool(value, 0);
        else if (!strcmp(key, "freeze_on_lose_focus")) s->freeze_on_lose_focus = parse_bool(value, 0);
        else if (!strcmp(key, "transparent")) s->transparent = parse_bool(value, 0);
        else if (!strcmp(key, "scale_progress_bar")) s->scale_progress_bar = parse_bool(value, 0);
        else if (!strcmp(key, "custom_loader")) s->custom_loader = parse_bool(value, 0);
        else if (!strcmp(key, "show_error_messages")) s->show_error_messages = parse_bool(value, 0);
        else if (!strcmp(key, "log_errors")) s->log_errors = parse_bool(value, 0);
        else if (!strcmp(key, "always_abort")) s->always_abort = parse_bool(value, 0);
        else if (!strcmp(key, "zero_uninitialized_vars")) s->zero_uninitialized_vars = parse_bool(value, 0);
        else if (!strcmp(key, "error_on_uninitialized_args")) s->error_on_uninitialized_args = parse_bool(value, 0);
        else if (!strcmp(key, "scaling")) s->scaling = parse_i32(value, s->scaling);
        else if (!strcmp(key, "clear_color")) s->clear_color = parse_i32(value, s->clear_color);
        else if (!strcmp(key, "color_depth")) s->color_depth = parse_i32(value, s->color_depth);
        else if (!strcmp(key, "resolution")) s->resolution = parse_i32(value, s->resolution);
        else if (!strcmp(key, "frequency")) s->frequency = parse_i32(value, s->frequency);
        else if (!strcmp(key, "priority")) s->priority = parse_i32(value, s->priority);
        else if (!strcmp(key, "translucency")) s->translucency = parse_i32(value, s->translucency);
        else if (!strcmp(key, "custom_bar")) s->custom_bar = parse_i32(value, s->custom_bar);
    }
    fclose(f);
}

static void load_constants_txt(const char *root, gm82_project_ir *ir) {
    char path[1200], line[2048];
    snprintf(path, sizeof(path), "%s/settings/constants.txt", root);
    FILE *f = fopen(path, "r");
    if (!f) return;
    int cap = 0;
    while (fgets(line, sizeof(line), f)) {
        char *p = strchr(line, '=');
        if (!p) continue;
        *p++ = '\0';
        char *name = trim_line(line), *value = trim_line(p);
        if (!*name) continue;
        if (ir->constant_count == cap) {
            int next = cap ? cap * 2 : 32;
            gm82_res_constant *grown = (gm82_res_constant *)realloc(ir->constants, (size_t)next * sizeof(*grown));
            if (!grown) break;
            ir->constants = grown; cap = next;
        }
        ir->constants[ir->constant_count].name = strdup(name);
        ir->constants[ir->constant_count].value = strdup(value);
        ++ir->constant_count;
    }
    fclose(f);
}

static void load_datafiles(const char *root, gm82_project_ir *ir) {
    char **names = NULL;
    int count = read_index_names(root, "datafiles", &names);
    if (!count || !names) { if (names) free(names); return; }
    ir->included_files = (gm82_res_included_file *)calloc((size_t)count, sizeof(*ir->included_files));
    if (!ir->included_files) { for (int i = 0; i < count; ++i) free(names[i]); free(names); return; }
    int kept = 0;
    for (int i = 0; i < count; ++i) {
        gm82_res_included_file *inc = &ir->included_files[kept];
        memset(inc, 0, sizeof(*inc));
        inc->name = strdup(names[i]);
        char meta[1400], line[2048];
        snprintf(meta, sizeof(meta), "%s/datafiles/%s.txt", root, names[i]);
        FILE *f = fopen(meta, "r");
        if (f) {
            while (fgets(line, sizeof(line), f)) {
                char *p = strchr(line, '=');
                if (!p) continue;
                *p++ = '\0';
                char *key = trim_line(line), *value = trim_line(p);
                if (!strcmp(key, "store")) inc->stored_in_gmk = parse_bool(value, 0);
                else if (!strcmp(key, "free")) inc->free_memory = parse_bool(value, 0);
                else if (!strcmp(key, "overwrite")) inc->overwrite_file = parse_bool(value, 0);
                else if (!strcmp(key, "remove")) inc->remove_at_end = parse_bool(value, 0);
                else if (!strcmp(key, "export")) inc->export_setting = parse_i32(value, 0);
                else if (!strcmp(key, "export_folder")) inc->export_folder = strdup(value);
            }
            fclose(f);
        }
        snprintf(meta, sizeof(meta), "%s/datafiles/include/%s", root, names[i]);
        struct stat st;
        if (stat(meta, &st) == 0 && S_ISREG(st.st_mode)) {
            inc->source_path = strdup(meta);
            inc->source_length = (size_t)st.st_size;
        }
        ++kept;
    }
    ir->included_file_count = kept;
    for (int i = 0; i < count; ++i) free(names[i]);
    free(names);
}

static void load_triggers_dir(const char *root, gm82_project_ir *ir) {
    char **names = NULL;
    int count = read_index_names(root, "triggers", &names);
    if (!count || !names) { if (names) free(names); return; }
    ir->triggers = (gm82_res_trigger *)calloc((size_t)count, sizeof(*ir->triggers));
    if (!ir->triggers) { for (int i = 0; i < count; ++i) free(names[i]); free(names); return; }
    int kept = 0;
    for (int i = 0; i < count; ++i) {
        gm82_res_trigger *trig = &ir->triggers[kept];
        memset(trig, 0, sizeof(*trig));
        trig->name = strdup(names[i]);
        char meta[1400], line[2048];
        snprintf(meta, sizeof(meta), "%s/triggers/%s.txt", root, names[i]);
        FILE *f = fopen(meta, "r");
        if (f) {
            while (fgets(line, sizeof(line), f)) {
                char *p = strchr(line, '=');
                if (!p) continue;
                *p++ = '\0';
                char *key = trim_line(line), *value = trim_line(p);
                if (!strcmp(key, "constant")) trig->constant_name = strdup(value);
                else if (!strcmp(key, "kind")) trig->kind = parse_i32(value, 0);
            }
            fclose(f);
        }
        snprintf(meta, sizeof(meta), "%s/triggers/%s.gml", root, names[i]);
        trig->condition = read_code_file(meta);
        ++kept;
    }
    ir->trigger_count = kept;
    for (int i = 0; i < count; ++i) free(names[i]);
    free(names);
}

static void load_scripts_from_dir(const char *root, gm82_script_list *list) {
    char **names = NULL;
    int idx_n = read_index_names(root, "scripts", &names);
    if (idx_n > 0 && names) {
        for (int i = 0; i < idx_n; i++) {
            char fpath[1200];
            snprintf(fpath, sizeof(fpath), "%s/scripts/%s.gml", root, names[i]);
            char *code = read_code_file(fpath);
            gm82_script_add(list, names[i], code ? code : "");
            free(code);
            free(names[i]);
        }
        free(names);
        return;
    }
    char subpath[1024];
    snprintf(subpath, sizeof(subpath), "%s/scripts", root);
    DIR *d = opendir(subpath);
    if (!d) return;
    struct dirent *ent;
    while ((ent = readdir(d)) != NULL) {
        if (ent->d_name[0] == '.' || !strstr(ent->d_name, ".gml")) continue;
        char fpath[1200];
        snprintf(fpath, sizeof(fpath), "%s/%s", subpath, ent->d_name);
        char *code = read_code_file(fpath);
        char sname[64];
        strncpy(sname, ent->d_name, sizeof(sname) - 1);
        sname[sizeof(sname) - 1] = '\0';
        char *dot = strstr(sname, ".gml");
        if (dot) *dot = '\0';
        gm82_script_add(list, sname, code ? code : "");
        free(code);
    }
    closedir(d);
}

static bool parse_gm82_event_header(const char *ev_tag, const gm82_project_ir *ir, int *out_main, int *out_numb) {
    if (!ev_tag || !*ev_tag) return false;
    *out_main = -1; *out_numb = 0;
    if (!strncmp(ev_tag, "Create_", 7)) { *out_main = 0; *out_numb = atoi(ev_tag + 7); return true; }
    if (!strncmp(ev_tag, "Destroy_", 8)) { *out_main = 1; *out_numb = atoi(ev_tag + 8); return true; }
    if (!strncmp(ev_tag, "Alarm_", 6)) { *out_main = 2; *out_numb = atoi(ev_tag + 6); return true; }
    if (!strncmp(ev_tag, "Step_", 5)) { *out_main = 3; *out_numb = atoi(ev_tag + 5); return true; }
    if (!strncmp(ev_tag, "Collision_", 10)) {
        *out_main = 4;
        *out_numb = find_name_id(ir->object_names, ir->object_name_count, ev_tag + 10);
        return *out_numb >= 0;
    }
    if (!strncmp(ev_tag, "Keyboard_", 9)) { *out_main = 5; *out_numb = atoi(ev_tag + 9); return true; }
    if (!strncmp(ev_tag, "Mouse_", 6)) { *out_main = 6; *out_numb = atoi(ev_tag + 6); return true; }
    if (!strncmp(ev_tag, "Other_", 6)) { *out_main = 7; *out_numb = atoi(ev_tag + 6); return true; }
    if (!strncmp(ev_tag, "Draw_", 5)) { *out_main = 8; *out_numb = atoi(ev_tag + 5); return true; }
    if (!strncmp(ev_tag, "KeyPress_", 9)) { *out_main = 9; *out_numb = atoi(ev_tag + 9); return true; }
    if (!strncmp(ev_tag, "KeyRelease_", 11)) { *out_main = 10; *out_numb = atoi(ev_tag + 11); return true; }
    if (!strncmp(ev_tag, "Trigger_", 8)) { *out_main = 11; *out_numb = atoi(ev_tag + 8); return true; }
    return false;
}

static void append_text_action(gm82_decoded_event *ev, const gm82_decoded_action *act) {
    if (!ev || !act) return;
    int nc = ev->action_count + 1;
    gm82_decoded_action *grown = (gm82_decoded_action *)realloc(ev->actions, (size_t)nc * sizeof(*grown));
    if (!grown) return;
    ev->actions = grown;
    ev->actions[ev->action_count] = *act;
    ev->action_cap = nc;
    if (ev->action_count == 0) {
        ev->action_id0 = act->action_id;
        if (act->fn_name[0]) snprintf(ev->action_name0, sizeof(ev->action_name0), "%s", act->fn_name);
    }
    if (!ev->code_snippet && act->action_id == 603 && act->arg_strs[0] && act->arg_strs[0][0]) {
        ev->code_snippet = strdup(act->arg_strs[0]);
    }
    ev->action_count = nc;
}

typedef struct {
    gm82_decoded_event *cur_ev;
    gm82_decoded_action cur_act;
    bool in_act_header;
    bool collecting_code;
    size_t code_cap;
    size_t code_len;
    char *code_acc;
} text_gml_parse_state;

static void flush_text_action(text_gml_parse_state *st) {
    if (!st || !st->cur_ev) return;
    if (st->collecting_code || st->cur_act.action_id == 603) {
        if (!st->cur_act.arg_strs[0]) {
            st->cur_act.arg_strs[0] = st->code_acc ? strdup(st->code_acc) : strdup("");
            st->cur_act.arg_count = 1;
        }
        st->cur_act.exec_type = 2;
    }
    append_text_action(st->cur_ev, &st->cur_act);
    memset(&st->cur_act, 0, sizeof(st->cur_act));
    st->cur_act.applies_to = -1;
    st->in_act_header = false;
    st->collecting_code = false;
    st->code_len = 0;
    if (st->code_acc) st->code_acc[0] = '\0';
}

static void parse_object_gml_events(const char *gml_path, const gm82_project_ir *ir, gm82_decoded_object *obj) {
    FILE *f = fopen(gml_path, "rb");
    if (!f) return;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0 || sz > 4 * 1024 * 1024) { fclose(f); return; }
    char *buf = (char *)malloc((size_t)sz + 1);
    if (!buf) { fclose(f); return; }
    size_t rd = fread(buf, 1, (size_t)sz, f);
    buf[rd] = '\0';
    fclose(f);

    static const char *ACT_TOK = "/*\"/*'/**//* YYD ACTION";
    char *cur = buf;
    text_gml_parse_state st;
    memset(&st, 0, sizeof(st));
    st.cur_act.applies_to = -1;

    while (cur && *cur) {
        char *nl = strchr(cur, '\n');
        size_t llen = nl ? (size_t)(nl - cur) : strlen(cur);
        if (llen > 0 && cur[llen - 1] == '\r') llen--;
        char line_stack[2048];
        char *line = llen < sizeof(line_stack) ? line_stack : (char *)malloc(llen + 1);
        if (!line) break;
        memcpy(line, cur, llen);
        line[llen] = '\0';

        if (!strncmp(line, "#define ", 8)) {
            if (st.collecting_code || st.in_act_header) { flush_text_action(&st); }
            char *ev_name = trim_line(line + 8);
            int mt = -1, en = 0;
            if (parse_gm82_event_header(ev_name, ir, &mt, &en) && obj->event_count < GM82_OBJ_EVENT_MAX) {
                st.cur_ev = &obj->events[obj->event_count++];
                memset(st.cur_ev, 0, sizeof(*st.cur_ev));
                st.cur_ev->main_type = mt;
                st.cur_ev->event_numb = en;
                st.cur_ev->action_id0 = -1;
                st.cur_ev->action_arg0 = -1;
                memset(&st.cur_act, 0, sizeof(st.cur_act));
                st.cur_act.applies_to = -1;
                st.in_act_header = false;
                st.collecting_code = false;
                st.code_len = 0;
                if (st.code_acc) st.code_acc[0] = '\0';
            } else {
                st.cur_ev = NULL;
            }
        } else if (st.cur_ev && !strncmp(line, ACT_TOK, strlen(ACT_TOK))) {
            if (st.collecting_code || st.in_act_header) { flush_text_action(&st); }
            memset(&st.cur_act, 0, sizeof(st.cur_act));
            st.cur_act.applies_to = -1;
            st.in_act_header = true;
            st.collecting_code = false;
            st.code_len = 0;
            if (st.code_acc) st.code_acc[0] = '\0';
        } else if (st.cur_ev && st.in_act_header) {
            if (!strcmp(trim_line(line), "*/")) {
                st.in_act_header = false;
                if (st.cur_act.action_id == 603 || st.cur_act.kind == 7) {
                    st.collecting_code = true;
                    st.code_len = 0;
                    if (st.code_acc) st.code_acc[0] = '\0';
                } else {
                    flush_text_action(&st);
                }
            } else {
                char *eq = strchr(line, '=');
                if (eq) {
                    *eq++ = '\0';
                    char *k = trim_line(line), *v = trim_line(eq);
                    if (!strcmp(k, "lib_id")) st.cur_act.lib_id = parse_i32(v, 1);
                    else if (!strcmp(k, "action_id")) st.cur_act.action_id = parse_i32(v, 0);
                    else if (!strcmp(k, "relative")) { st.cur_act.can_be_relative = 1; st.cur_act.is_relative = parse_i32(v, 0); }
                    else if (!strcmp(k, "invert")) { st.cur_act.is_condition = 1; st.cur_act.is_not = parse_i32(v, 0); }
                    else if (!strcmp(k, "applies_to")) {
                        st.cur_act.applies_to_something = 1;
                        if (!strcmp(v, "self")) st.cur_act.applies_to = -1;
                        else if (!strcmp(v, "other")) st.cur_act.applies_to = -2;
                        else st.cur_act.applies_to = find_name_id(ir->object_names, ir->object_name_count, v);
                    } else if (!strcmp(k, "repeats")) {
                        st.cur_act.kind = 5;
                        st.cur_act.arg_strs[0] = strdup(v);
                        st.cur_act.arg_count = 1;
                    } else if (!strncmp(k, "arg", 3) && k[3] >= '0' && k[3] <= '7') {
                        int ai = k[3] - '0';
                        free(st.cur_act.arg_strs[ai]);
                        st.cur_act.arg_strs[ai] = strdup(v);
                        if (ai + 1 > st.cur_act.arg_count) st.cur_act.arg_count = ai + 1;
                    }
                }
            }
        } else if (st.cur_ev) {
            st.collecting_code = true;
            if (st.cur_act.action_id == 0) st.cur_act.action_id = 603;
            size_t need = st.code_len + llen + 2;
            if (need > st.code_cap) {
                size_t ncap = st.code_cap ? st.code_cap * 2 : 512;
                while (ncap < need) ncap *= 2;
                char *ng = (char *)realloc(st.code_acc, ncap);
                if (ng) { st.code_acc = ng; st.code_cap = ncap; }
            }
            if (st.code_acc && st.code_cap >= need) {
                if (st.code_len > 0) st.code_acc[st.code_len++] = '\n';
                memcpy(st.code_acc + st.code_len, line, llen);
                st.code_len += llen;
                st.code_acc[st.code_len] = '\0';
            }
        }
        if (line != line_stack) free(line);
        cur = nl ? (nl + 1) : NULL;
    }
    if (st.cur_ev && (st.collecting_code || st.in_act_header)) flush_text_action(&st);
    free(st.code_acc);
    free(buf);
}

static void load_objects_dir(const char *root, gm82_project_ir *ir) {
    if (!ir || ir->object_name_count <= 0) return;
    ir->decoded_objects.items = (gm82_decoded_object *)calloc((size_t)ir->object_name_count, sizeof(gm82_decoded_object));
    if (!ir->decoded_objects.items) return;
    ir->decoded_objects.count = ir->object_name_count;
    ir->object_count = ir->object_name_count;

    for (int i = 0; i < ir->object_name_count; i++) {
        gm82_decoded_object *o = &ir->decoded_objects.items[i];
        const char *name = ir->object_names[i] ? ir->object_names[i] : "";
        snprintf(o->name, sizeof(o->name), "%s", name);
        o->sprite_index = -1;
        o->parent_index = -1;
        o->mask_index = -1;
        o->visible = 1;

        char txt_path[1200], line[2048];
        snprintf(txt_path, sizeof(txt_path), "%s/objects/%s.txt", root, name);
        FILE *f = fopen(txt_path, "r");
        if (f) {
            while (fgets(line, sizeof(line), f)) {
                char *p = strchr(line, '=');
                if (!p) continue;
                *p++ = '\0';
                char *key = trim_line(line), *val = trim_line(p);
                if (!strcmp(key, "sprite")) o->sprite_index = find_name_id(ir->sprite_names, ir->sprite_name_count, val);
                else if (!strcmp(key, "visible")) o->visible = parse_bool(val, 1);
                else if (!strcmp(key, "solid")) o->solid = parse_bool(val, 0);
                else if (!strcmp(key, "persistent")) o->persistent = parse_bool(val, 0);
                else if (!strcmp(key, "depth")) o->depth = parse_i32(val, 0);
                else if (!strcmp(key, "parent")) o->parent_index = find_name_id(ir->object_names, ir->object_name_count, val);
                else if (!strcmp(key, "mask")) o->mask_index = find_name_id(ir->sprite_names, ir->sprite_name_count, val);
            }
            fclose(f);
        }

        char gml_path[1200];
        snprintf(gml_path, sizeof(gml_path), "%s/objects/%s.gml", root, name);
        parse_object_gml_events(gml_path, ir, o);
    }
}

static void load_sounds_dir(const char *root, gm82_project_ir *ir) {
    if (!ir || ir->sound_name_count <= 0) return;
    ir->decoded_sounds.items = (gm82_decoded_sound *)calloc((size_t)ir->sound_name_count, sizeof(gm82_decoded_sound));
    if (!ir->decoded_sounds.items) return;
    ir->decoded_sounds.count = ir->sound_name_count;
    ir->decoded_sounds.capacity = ir->sound_name_count;
    ir->sound_count = ir->sound_name_count;

    for (int i = 0; i < ir->sound_name_count; i++) {
        gm82_decoded_sound *s = &ir->decoded_sounds.items[i];
        const char *name = ir->sound_names[i] ? ir->sound_names[i] : "";
        snprintf(s->name, sizeof(s->name), "%s", name);
        s->volume = 1.0;
        s->preload = 1;

        char meta[1200], line[2048];
        snprintf(meta, sizeof(meta), "%s/sounds/%s.txt", root, name);
        FILE *f = fopen(meta, "r");
        if (f) {
            while (fgets(line, sizeof(line), f)) {
                char *p = strchr(line, '=');
                if (!p) continue;
                *p++ = '\0';
                char *key = trim_line(line), *val = trim_line(p);
                if (!strcmp(key, "extension")) snprintf(s->ext, sizeof(s->ext), "%s", val);
                else if (!strcmp(key, "kind")) s->kind = parse_i32(val, 0);
                else if (!strcmp(key, "effects")) s->effects = parse_i32(val, 0);
                else if (!strcmp(key, "volume")) s->volume = strtod(val, NULL);
                else if (!strcmp(key, "pan")) s->pan = strtod(val, NULL);
                else if (!strcmp(key, "preload")) s->preload = parse_bool(val, 1);
            }
            fclose(f);
        }
        const char *clean_ext = (s->ext[0] == '.') ? (s->ext + 1) : (s->ext[0] ? s->ext : "wav");
        char snd_path[1200];
        snprintf(snd_path, sizeof(snd_path), "%s/sounds/%s.%s", root, name, clean_ext);
        FILE *af = fopen(snd_path, "rb");
        if (af) {
            fseek(af, 0, SEEK_END);
            long sz = ftell(af);
            fseek(af, 0, SEEK_SET);
            if (sz > 0 && sz < 64 * 1024 * 1024) {
                s->raw_data = (uint8_t *)malloc((size_t)sz);
                if (s->raw_data && fread(s->raw_data, 1, (size_t)sz, af) == (size_t)sz) {
                    s->raw_size = (size_t)sz;
                    s->data_size = (size_t)sz;
                    if (!strcasecmp(clean_ext, "wav")) {
                        gm82_wav_decode_pcm(s->raw_data, s->raw_size, &s->pcm, &s->pcm_frames, &s->sample_rate, &s->channels);
                    }
                } else {
                    free(s->raw_data); s->raw_data = NULL;
                }
            }
            fclose(af);
        }
    }
}

static void init_room_defaults(gm82_res_room *room, int id, const char *name) {
    memset(room, 0, sizeof(*room));
    room->id = id;
    room->name = strdup(name ? name : "room");
    room->width = 640;
    room->height = 480;
    room->speed = 30;
    room->snap_x = 16;
    room->snap_y = 16;
    room->background_color = 0xc0c0c0;
    room->draw_background_color = true;
    room->view_count = 8;
    room->views = (gm82_room_view *)calloc(8, sizeof(*room->views));
    for (int i = 0; i < 8 && room->views; i++) room->views[i].object_following = -1;
    room->background_count = 8;
    room->background_ids = (int32_t *)malloc(8 * sizeof(*room->background_ids));
    room->background_visible = (bool *)calloc(8, sizeof(*room->background_visible));
    room->background_foreground = (bool *)calloc(8, sizeof(*room->background_foreground));
    room->background_x = (int32_t *)calloc(8, sizeof(*room->background_x));
    room->background_y = (int32_t *)calloc(8, sizeof(*room->background_y));
    room->background_htiled = (bool *)calloc(8, sizeof(*room->background_htiled));
    room->background_vtiled = (bool *)calloc(8, sizeof(*room->background_vtiled));
    room->background_hspeed = (int32_t *)calloc(8, sizeof(*room->background_hspeed));
    room->background_vspeed = (int32_t *)calloc(8, sizeof(*room->background_vspeed));
    room->background_stretch = (bool *)calloc(8, sizeof(*room->background_stretch));
    if (room->background_ids) for (int i = 0; i < 8; ++i) room->background_ids[i] = -1;
    room->status = GM82_RES_DECODED;
}

static void load_room_txt(const char *root, const char *name, gm82_res_room *room,
                          char **bg_names, int bg_count, char **obj_names, int obj_count) {
    char path[1200], line[2048];
    snprintf(path, sizeof(path), "%s/rooms/%s/room.txt", root, name);
    FILE *f = fopen(path, "r");
    if (f) {
        while (fgets(line, sizeof(line), f)) {
            char *p = strchr(line, '=');
            if (!p) continue;
            *p++ = '\0';
            char *key = trim_line(line), *value = trim_line(p);
            if (!strcmp(key, "caption")) room->caption = strdup(value);
            else if (!strcmp(key, "width")) room->width = parse_i32(value, room->width);
            else if (!strcmp(key, "height")) room->height = parse_i32(value, room->height);
            else if (!strcmp(key, "roomspeed")) room->speed = parse_i32(value, room->speed);
            else if (!strcmp(key, "roompersistent")) room->persistent = parse_bool(value, room->persistent);
            else if (!strcmp(key, "snap_x")) room->snap_x = parse_i32(value, room->snap_x);
            else if (!strcmp(key, "snap_y")) room->snap_y = parse_i32(value, room->snap_y);
            else if (!strcmp(key, "isometric")) room->isometric = parse_bool(value, room->isometric);
            else if (!strcmp(key, "bg_color")) room->background_color = parse_i32(value, room->background_color);
            else if (!strcmp(key, "clear_screen")) room->draw_background_color = parse_bool(value, 1);
            else if (!strncmp(key, "bg_visible", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->background_visible[i] = parse_bool(value, 0); }
            else if (!strncmp(key, "bg_is_foreground", 16)) { int i = parse_i32(key + 16, -1); if (i >= 0 && i < 8) room->background_foreground[i] = parse_bool(value, 0); }
            else if (!strncmp(key, "bg_source", 9)) { int i = parse_i32(key + 9, -1); if (i >= 0 && i < 8) room->background_ids[i] = find_name_id(bg_names, bg_count, value); }
            else if (!strncmp(key, "bg_xoffset", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->background_x[i] = parse_i32(value, 0); }
            else if (!strncmp(key, "bg_yoffset", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->background_y[i] = parse_i32(value, 0); }
            else if (!strncmp(key, "bg_tile_h", 9)) { int i = parse_i32(key + 9, -1); if (i >= 0 && i < 8 && room->background_htiled) room->background_htiled[i] = parse_bool(value, 0); }
            else if (!strncmp(key, "bg_tile_v", 9)) { int i = parse_i32(key + 9, -1); if (i >= 0 && i < 8 && room->background_vtiled) room->background_vtiled[i] = parse_bool(value, 0); }
            else if (!strncmp(key, "bg_hspeed", 9)) { int i = parse_i32(key + 9, -1); if (i >= 0 && i < 8 && room->background_hspeed) room->background_hspeed[i] = parse_i32(value, 0); }
            else if (!strncmp(key, "bg_vspeed", 9)) { int i = parse_i32(key + 9, -1); if (i >= 0 && i < 8 && room->background_vspeed) room->background_vspeed[i] = parse_i32(value, 0); }
            else if (!strncmp(key, "bg_stretch", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8 && room->background_stretch) room->background_stretch[i] = parse_bool(value, 0); }
            else if (!strcmp(key, "views_enabled")) { room->views_enabled = parse_bool(value, 0); }
            else if (!strncmp(key, "view_visible", 12)) { int i = parse_i32(key + 12, -1); if (i >= 0 && i < 8) room->views[i].visible = parse_bool(value, 0); }
            else if (!strncmp(key, "view_xview", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].view_x = parse_i32(value, 0); }
            else if (!strncmp(key, "view_yview", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].view_y = parse_i32(value, 0); }
            else if (!strncmp(key, "view_wview", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].view_w = parse_i32(value, room->width); }
            else if (!strncmp(key, "view_hview", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].view_h = parse_i32(value, room->height); }
            else if (!strncmp(key, "view_xport", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].port_x = parse_i32(value, 0); }
            else if (!strncmp(key, "view_yport", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].port_y = parse_i32(value, 0); }
            else if (!strncmp(key, "view_wport", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].port_w = parse_i32(value, room->width); }
            else if (!strncmp(key, "view_hport", 10)) { int i = parse_i32(key + 10, -1); if (i >= 0 && i < 8) room->views[i].port_h = parse_i32(value, room->height); }
            else if (!strncmp(key, "view_fol_hbord", 14)) { int i = parse_i32(key + 14, -1); if (i >= 0 && i < 8) room->views[i].border_h = parse_i32(value, 0); }
            else if (!strncmp(key, "view_fol_vbord", 14)) { int i = parse_i32(key + 14, -1); if (i >= 0 && i < 8) room->views[i].border_v = parse_i32(value, 0); }
            else if (!strncmp(key, "view_fol_hspeed", 15)) { int i = parse_i32(key + 15, -1); if (i >= 0 && i < 8) room->views[i].hspeed = parse_i32(value, -1); }
            else if (!strncmp(key, "view_fol_vspeed", 15)) { int i = parse_i32(key + 15, -1); if (i >= 0 && i < 8) room->views[i].vspeed = parse_i32(value, -1); }
            else if (!strncmp(key, "view_fol_target", 15)) { int i = parse_i32(key + 15, -1); if (i >= 0 && i < 8) room->views[i].object_following = find_name_id(obj_names, obj_count, value); }
        }
        fclose(f);
    }
    if (!room->views_enabled) {
        room->view_count = 1;
    } else {
        int max_vis = 0;
        for (int vi = 0; vi < 8; vi++) {
            if (room->views && room->views[vi].visible) max_vis = vi + 1;
        }
        room->view_count = max_vis > 0 ? max_vis : 1;
    }
    snprintf(path, sizeof(path), "%s/rooms/%s/code.gml", root, name);
    room->creation_code = read_code_file(path);
}

static void load_room_instances(const char *root, const char *room_name,
                                gm82_res_room *room, char **object_names, int object_count) {
    char path[1200], line[4096];
    snprintf(path, sizeof(path), "%s/rooms/%s/instances.txt", root, room_name);
    FILE *f = fopen(path, "r");
    if (!f) return;
    int cap = 0;
    while (fgets(line, sizeof(line), f)) {
        char *p = trim_line(line);
        if (!*p) continue;
        if (room->instance_count == cap) {
            int next = cap ? cap * 2 : 16;
            gm82_room_instance *grown = (gm82_room_instance *)realloc(room->instances, (size_t)next * sizeof(*grown));
            if (!grown) break;
            room->instances = grown; cap = next;
        }
        gm82_room_instance *inst = &room->instances[room->instance_count];
        memset(inst, 0, sizeof(*inst));
        inst->id = room->instance_count + 100001;
        inst->xscale = 1.0; inst->yscale = 1.0; inst->blend = 0xffffff;
        char *fields[12] = {0};
        int nf = 0;
        for (char *tok = strtok(p, ","); tok && nf < 12; tok = strtok(NULL, ",")) fields[nf++] = tok;
        if (nf < 4) continue;
        inst->object_id = find_name_id(object_names, object_count, fields[0]);
        inst->x = strtod(fields[1], NULL);
        inst->y = strtod(fields[2], NULL);
        if (fields[3][0]) {
            int32_t parsed_id = parse_i32(fields[3], 0);
            if (parsed_id > 0) inst->id = parsed_id;
        }
        inst->locked = nf > 4 ? parse_bool(fields[4], 0) : 0;
        if (nf > 5) inst->xscale = strtod(fields[5], NULL);
        if (nf > 6) inst->yscale = strtod(fields[6], NULL);
        if (nf > 7) inst->blend = parse_i32(fields[7], 0xffffff);
        if (nf > 8) inst->angle = strtod(fields[8], NULL);
        if (nf > 9 && parse_bool(fields[9], 0) && fields[3][0]) {
            char code_path[1400];
            snprintf(code_path, sizeof(code_path), "%s/rooms/%s/%s.gml", root, room_name, fields[3]);
            inst->creation_code = read_code_file(code_path);
        }
        ++room->instance_count;
    }
    fclose(f);
}

static void load_room_tiles(const char *root, const char *room_name,
                            gm82_res_room *room, char **background_names, int background_count) {
    char layers_path[1200], line[4096];
    snprintf(layers_path, sizeof(layers_path), "%s/rooms/%s/layers.txt", root, room_name);
    FILE *layers = fopen(layers_path, "r");
    if (!layers) return;
    int cap = 0;
    while (fgets(line, sizeof(line), layers)) {
        char *depth_name = trim_line(line);
        if (!*depth_name) continue;
        char tile_path[1400];
        snprintf(tile_path, sizeof(tile_path), "%s/rooms/%s/%s.txt", root, room_name, depth_name);
        FILE *tf = fopen(tile_path, "r");
        if (!tf) continue;
        char tile_line[4096];
        while (fgets(tile_line, sizeof(tile_line), tf)) {
            char *p = trim_line(tile_line);
            if (!*p) continue;
            if (room->tile_count == cap) {
                int next = cap ? cap * 2 : 32;
                gm82_room_tile *grown = (gm82_room_tile *)realloc(room->tiles, (size_t)next * sizeof(*grown));
                if (!grown) break;
                room->tiles = grown; cap = next;
            }
            gm82_room_tile *tile = &room->tiles[room->tile_count];
            memset(tile, 0, sizeof(*tile));
            tile->id = room->tile_count + 10000001;
            tile->depth = parse_i32(depth_name, 0);
            tile->blend = 0xffffff;
            char *fields[12] = {0}; int nf = 0;
            for (char *tok = strtok(p, ","); tok && nf < 12; tok = strtok(NULL, ",")) fields[nf++] = tok;
            if (nf < 8) continue;
            tile->background_id = find_name_id(background_names, background_count, fields[0]);
            tile->x = parse_i32(fields[1], 0); tile->y = parse_i32(fields[2], 0);
            tile->src_x = parse_i32(fields[3], 0); tile->src_y = parse_i32(fields[4], 0);
            tile->width = parse_i32(fields[5], 0); tile->height = parse_i32(fields[6], 0);
            tile->locked = parse_bool(fields[7], 0);
            tile->xscale = nf > 8 ? strtod(fields[8], NULL) : 1.0;
            tile->yscale = nf > 9 ? strtod(fields[9], NULL) : 1.0;
            tile->blend = nf > 10 ? parse_i32(fields[10], 0xffffff) : 0xffffff;
            ++room->tile_count;
        }
        fclose(tf);
    }
    fclose(layers);
}

gm82_text_load_result gm82_text_load_project(const char *path) {
    gm82_text_load_result r;
    memset(&r, 0, sizeof(r));
    if (!path) { snprintf(r.error, sizeof(r.error), "null path"); return r; }
    gm82_project_ir *ir = gm82_project_ir_create();
    if (!ir) { snprintf(r.error, sizeof(r.error), "out of memory"); return r; }
    ir->format = GM82_GMK_FORMAT_GM82;
    ir->version = 82;
    ir->complete = false;
    ir->source_path = strdup(path);
    if (is_dir(path)) {
        char **object_names = NULL, **background_names = NULL, **sprite_names = NULL, **sound_names = NULL;
        int object_name_count = read_index_names(path, "objects", &object_names);
        int background_name_count = read_index_names(path, "backgrounds", &background_names);
        int sprite_name_count = read_index_names(path, "sprites", &sprite_names);
        int sound_name_count = read_index_names(path, "sounds", &sound_names);

        ir->object_names = object_names;
        ir->object_name_count = object_name_count;
        ir->background_names = background_names;
        ir->background_name_count = background_name_count;
        ir->sprite_names = sprite_names;
        ir->sprite_name_count = sprite_name_count;
        ir->sound_names = sound_names;
        ir->sound_name_count = sound_name_count;

        ir->script_count = count_assets(path, "scripts");
        ir->object_count = object_name_count > 0 ? object_name_count : count_assets(path, "objects");
        ir->background_count = background_name_count > 0 ? background_name_count : count_assets(path, "backgrounds");
        ir->sprite_count = sprite_name_count > 0 ? sprite_name_count : count_assets(path, "sprites");
        ir->sound_count = sound_name_count > 0 ? sound_name_count : count_assets(path, "sounds");

        char **room_names = NULL;
        int room_cnt = read_index_names(path, "rooms", &room_names);
        if (!room_cnt) room_cnt = count_asset_dirs(path, "rooms");
        if (!room_cnt) room_cnt = 1;
        ir->room_count = room_cnt;
        ir->rooms = (gm82_res_room *)calloc((size_t)room_cnt, sizeof(*ir->rooms));
        if (ir->rooms) {
            for (int i = 0; i < room_cnt; ++i) {
                char fallback[32];
                snprintf(fallback, sizeof(fallback), "room%d", i);
                const char *name = room_names && i < room_cnt ? room_names[i] : fallback;
                init_room_defaults(&ir->rooms[i], i, name);
                load_room_txt(path, name, &ir->rooms[i], background_names, background_name_count, object_names, object_name_count);
                load_room_instances(path, name, &ir->rooms[i], object_names, object_name_count);
                load_room_tiles(path, name, &ir->rooms[i], background_names, background_name_count);
            }
        }
        if (room_names) { for (int i = 0; i < room_cnt; ++i) free(room_names[i]); free(room_names); }
        load_settings_txt(path, &ir->settings);
        load_constants_txt(path, ir);
        load_datafiles(path, ir);
        load_triggers_dir(path, ir);
        load_scripts_from_dir(path, &ir->decoded_scripts);
        ir->script_count = ir->decoded_scripts.count;
        load_objects_dir(path, ir);
        load_sounds_dir(path, ir);
        snprintf(r.error, sizeof(r.error),
                 "GM82 text loaded (rooms=%d, objs=%d, scripts=%d, sounds=%d)",
                 room_cnt, ir->decoded_objects.count, ir->decoded_scripts.count, ir->decoded_sounds.count);
    } else {
        if (!file_exists(path)) {
            snprintf(r.error, sizeof(r.error), "GM82 path not found: %s", path);
            gm82_project_ir_free(ir);
            free(ir);
            return r;
        }
        ir->room_count = 1;
        ir->rooms = (gm82_res_room *)calloc(1, sizeof(*ir->rooms));
        if (ir->rooms) { init_room_defaults(&ir->rooms[0], 0, "room0"); ir->rooms[0].status = GM82_RES_DECODED; }
        snprintf(r.error, sizeof(r.error), "GM82 index file loaded");
    }
    gm82_project_ir_recompute_complete(ir);
    r.ir = ir;
    r.ok = true;
    return r;
}
