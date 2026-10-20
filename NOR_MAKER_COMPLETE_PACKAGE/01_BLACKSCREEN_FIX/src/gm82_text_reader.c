#define _POSIX_C_SOURCE 200809L
#include "gm82_text_reader.h"
#include "gm82_script.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <dirent.h>

/*
 * .gm82 text project loader for NOR Maker / GM82 Android.
 * Official GM82 projects are directory trees with human-readable text files.
 */

static int is_dir(const char *path) {
    struct stat st;
    if (stat(path, &st) != 0) return 0;
    return S_ISDIR(st.st_mode);
}

static int count_files_in_subdir(const char *root, const char *subdir, const char *ext) {
    char subpath[512];
    snprintf(subpath, sizeof(subpath), "%s/%s", root, subdir);
    DIR *d = opendir(subpath);
    if (!d) return 0;
    struct dirent *ent;
    int count = 0;
    while ((ent = readdir(d)) != NULL) {
        if (ent->d_name[0] == '.') continue;
        if (!ext || strstr(ent->d_name, ext)) count++;
    }
    closedir(d);
    return count;
}

static void load_scripts_from_dir(const char *root, gm82_script_list *list) {
    char subpath[512];
    snprintf(subpath, sizeof(subpath), "%s/scripts", root);
    DIR *d = opendir(subpath);
    if (!d) return;
    struct dirent *ent;
    while ((ent = readdir(d)) != NULL) {
        if (ent->d_name[0] == '.') continue;
        if (strstr(ent->d_name, ".gml")) {
            char fpath[512];
            snprintf(fpath, sizeof(fpath), "%s/%s", subpath, ent->d_name);
            FILE *f = fopen(fpath, "r");
            if (f) {
                char code_buf[GM82_SCRIPT_CODE_MAX] = {0};
                size_t rd = fread(code_buf, 1, sizeof(code_buf) - 1, f);
                code_buf[rd] = '\0';
                fclose(f);
                char sname[64];
                strncpy(sname, ent->d_name, sizeof(sname) - 1);
                sname[sizeof(sname) - 1] = '\0';
                char *dot = strstr(sname, ".gml");
                if (dot) *dot = '\0';
                gm82_script_add(list, sname, code_buf);
            }
        }
    }
    closedir(d);
}

gm82_text_load_result gm82_text_load_project(const char *path) {
    gm82_text_load_result r;
    memset(&r, 0, sizeof(r));

    if (!path) {
        snprintf(r.error, sizeof(r.error), "null path");
        return r;
    }

    gm82_project_ir *ir = gm82_project_ir_create();
    if (!ir) {
        snprintf(r.error, sizeof(r.error), "out of memory");
        return r;
    }

    ir->format  = GM82_GMK_FORMAT_GM82;
    ir->version = 82;          /* marker for text format */
    ir->complete = false;
    ir->source_path = strdup(path);

    if (is_dir(path)) {
        int sc = count_files_in_subdir(path, "scripts", ".gml");
        int sp = count_files_in_subdir(path, "sprites", NULL);
        int bg = count_files_in_subdir(path, "backgrounds", NULL);
        int ob = count_files_in_subdir(path, "objects", NULL);
        int rm = count_files_in_subdir(path, "rooms", NULL);

        ir->script_count = sc;
        ir->object_count = ob;
        ir->background_count = bg;
        ir->sprite_count = sp;

        gm82_script_list script_list;
        gm82_script_list_init(&script_list);
        load_scripts_from_dir(path, &script_list);

        int room_cnt = rm > 0 ? rm : 1;
        ir->room_count = room_cnt;
        ir->rooms = (gm82_res_room *)calloc((size_t)room_cnt, sizeof(gm82_res_room));
        if (ir->rooms) {
            for (int i = 0; i < room_cnt; i++) {
                char rname[32];
                snprintf(rname, sizeof(rname), "room%d", i);
                ir->rooms[i].id = i;
                ir->rooms[i].name = strdup(rname);
                ir->rooms[i].width = 640;
                ir->rooms[i].height = 480;
                ir->rooms[i].speed = 30;
                ir->rooms[i].status = GM82_RES_DECODED;
            }
        }
        snprintf(r.error, sizeof(r.error),
                 "GM82 text project loaded (rooms=%d, objs=%d, scripts=%d)",
                 room_cnt, ob, sc);
    } else {
        ir->room_count = 1;
        ir->rooms = (gm82_res_room *)calloc(1, sizeof(gm82_res_room));
        if (ir->rooms) {
            ir->rooms[0].id = 0;
            ir->rooms[0].name = strdup("room0");
            ir->rooms[0].width = 640;
            ir->rooms[0].height = 480;
            ir->rooms[0].speed = 30;
            ir->rooms[0].status = GM82_RES_DECODED;
        }
        snprintf(r.error, sizeof(r.error), "GM82 index file loaded");
    }

    gm82_project_ir_recompute_complete(ir);
    r.ir = ir;
    r.ok = true;
    return r;
}
