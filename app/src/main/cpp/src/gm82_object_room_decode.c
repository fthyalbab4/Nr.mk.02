#define _POSIX_C_SOURCE 200809L
#include "gm82_int_read.h"
#include "gm82_object_room_decode.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <zlib.h>

static int32_t rd_i32(const uint8_t *p) {
    return gm82_read_i32le(p);
}

static uint8_t *inflate_at(const uint8_t *src, size_t n, size_t *out_len) {
    *out_len = 0;
    z_stream strm; memset(&strm, 0, sizeof(strm));
    if (inflateInit2(&strm, 15) != Z_OK) return NULL;
    size_t cap = n * 8 + 256;
    uint8_t *dst = (uint8_t *)malloc(cap);
    if (!dst) { inflateEnd(&strm); return NULL; }
    strm.next_in = (Bytef *)src; strm.avail_in = (uInt)n;
    strm.next_out = dst; strm.avail_out = (uInt)cap;
    int ret;
    while ((ret = inflate(&strm, Z_NO_FLUSH)) == Z_OK) {
        if (strm.avail_out == 0) {
            size_t used = cap; cap *= 2;
            uint8_t *nd = (uint8_t *)realloc(dst, cap);
            if (!nd) { free(dst); inflateEnd(&strm); return NULL; }
            dst = nd; strm.next_out = dst + used; strm.avail_out = (uInt)(cap - used);
        }
    }
    if (ret != Z_STREAM_END) { free(dst); inflateEnd(&strm); return NULL; }
    *out_len = strm.total_out; inflateEnd(&strm); return dst;
}

void gm82_decoded_object_list_init(gm82_decoded_object_list *L) {
    if (!L) return;
    memset(L, 0, sizeof(*L));
}

void gm82_decoded_room_list_init(gm82_decoded_room_list *L) {
    if (!L) return;
    memset(L, 0, sizeof(*L));
}

void gm82_decoded_action_free(gm82_decoded_action *a) {
    if (!a) return;
    free(a->fn_code);
    for (int i = 0; i < 8; i++) free(a->arg_strs[i]);
    memset(a, 0, sizeof(*a));
}

void gm82_decoded_object_list_free(gm82_decoded_object_list *L) {
    if (!L) return;
    if (L->items) {
        for (int i = 0; i < L->count; i++) {
            for (int e = 0; e < L->items[i].event_count && e < GM82_OBJ_EVENT_MAX; e++) {
                gm82_decoded_event *ev = &L->items[i].events[e];
                free(ev->code_snippet);
                if (ev->actions) {
                    for (int a = 0; a < ev->action_cap; a++) {
                        gm82_decoded_action_free(&ev->actions[a]);
                    }
                    free(ev->actions);
                }
            }
        }
    }
    free(L->items);
    memset(L, 0, sizeof(*L));
}

void gm82_decoded_room_list_free(gm82_decoded_room_list *L) {
    if (!L) return;
    for (int i = 0; i < L->count; i++) {
        free(L->items[i].creation_code);
        if (L->items[i].instances) {
            for (int k = 0; k < L->items[i].instance_count; k++)
                free(L->items[i].instances[k].creation_code);
        }
        free(L->items[i].instances);
        free(L->items[i].tiles);
    }
    free(L->items); memset(L, 0, sizeof(*L));
}

int gm82_decode_objects_from_gmk(const uint8_t *data, size_t size, gm82_decoded_object_list *out) {
    memset(out, 0, sizeof(*out));
    if (!data || size < 12) return -1;
    gm82_decoded_object *tmp = (gm82_decoded_object *)calloc(256, sizeof(gm82_decoded_object));
    if (!tmp) return -1;
    int n = 0;

    for (size_t i = 12; i + 2 < size; i++) {
        if (!(data[i]==0x78 && (data[i+1]==0x9c||data[i+1]==0xda||data[i+1]==0x01||data[i+1]==0x5e)))
            continue;
        size_t ol = 0;
        uint8_t *d = inflate_at(data + i, size - i, &ol);
        i += 16;
        if (!d || ol < 28) { free(d); continue; }
        if (rd_i32(d) != 1) { free(d); continue; }
        int32_t slen = rd_i32(d + 4);
        if (slen < 1 || slen > 64 || 8 + (size_t)slen + 16 > ol) { free(d); continue; }
        const uint8_t *ns = d + 8;
        int ok = 1;
        for (int k = 0; k < slen; k++) if (ns[k] < 32 || ns[k] > 126) ok = 0;
        if (!ok) { free(d); continue; }
        char name[64]; memcpy(name, ns, (size_t)slen); name[slen] = 0;
        size_t off = 8 + (size_t)slen + 8;
        if (off + 20 > ol) { free(d); continue; }
        int32_t ver = rd_i32(d + off); off += 4;
        if (ver != 430 && ver != 400 && ver != 800) { free(d); continue; }
        if (ver == 800 && (strncmp(name, "spr", 3) == 0 || strncmp(name, "snd", 3) == 0 ||
                           strncmp(name, "bg", 2) == 0 || strncmp(name, "back", 4) == 0)) {
            free(d); continue; }
        if (n >= 256) { free(d); break; }
        int32_t spr_i = rd_i32(d + off);
        int32_t solid_i = rd_i32(d + off + 4);
        int32_t vis_i = rd_i32(d + off + 8);
        int32_t depth_i = rd_i32(d + off + 12);
        int32_t pers_i = (off + 16 + 4 <= ol) ? rd_i32(d + off + 16) : 0;
        int32_t parent_i = (off + 20 + 4 <= ol) ? rd_i32(d + off + 20) : -1;
        if (parent_i < -1 || parent_i > 512) parent_i = -1;
        if (solid_i != 0 && solid_i != 1) { free(d); continue; }
        if (vis_i != 0 && vis_i != 1) { free(d); continue; }
        if (spr_i < -1 || spr_i > 512) { free(d); continue; }
        if (depth_i < -1000000 || depth_i > 1000000) { free(d); continue; }

        gm82_decoded_object *o = &tmp[n++];
        memset(o, 0, sizeof(*o));
        snprintf(o->name, sizeof(o->name), "%s", name);
        o->sprite_index = spr_i;
        o->solid = solid_i;
        o->visible = vis_i;
        o->depth = depth_i;
        o->persistent = pers_i;
        o->parent_index = parent_i;
        o->event_count = 0;
        if ((ver == 430 || ver == 400) && off + 32 <= ol) {
            size_t p = off + 32;
            for (int main = 0; main < 12 && p + 4 <= ol; main++) {
                int safety = 0;
                while (p + 4 <= ol && safety++ < 64) {
                    int32_t eid = rd_i32(d + p); p += 4;
                    if (eid == -1) break;
                    if (p + 8 > ol) break;
                    int32_t ever = rd_i32(d + p);
                    if (ever != 400 && ever != 440) { p -= 4; break; }
                    p += 4;
                    int32_t acount = rd_i32(d + p); p += 4;
                    if (acount < 0 || acount > 64) break;
                    gm82_decoded_event *ev = NULL;
                    if (o->event_count < GM82_OBJ_EVENT_MAX) {
                        ev = &o->events[o->event_count++];
                        memset(ev, 0, sizeof(*ev));
                        ev->main_type = main;
                        ev->event_numb = eid;
                        ev->action_id0 = -1;
                        ev->action_arg0 = -1;
                        if (acount > 0) {
                            ev->actions = (gm82_decoded_action *)calloc((size_t)acount, sizeof(gm82_decoded_action));
                            ev->action_cap = ev->actions ? acount : 0;
                        }
                    }
                    int32_t stored = 0;
                    int parse_err = 0;
                    for (int32_t ak = 0; ak < acount && !parse_err; ak++) {
                        if (p + 32 > ol) { parse_err = 1; break; }
                        int32_t aver = rd_i32(d + p); p += 4;
                        if (aver != 440 && aver != 400) { parse_err = 1; break; }
                        gm82_decoded_action act;
                        memset(&act, 0, sizeof(act));
                        act.lib_id = rd_i32(d + p); p += 4;
                        act.action_id = rd_i32(d + p); p += 4;
                        act.kind = rd_i32(d + p); p += 4;
                        act.can_be_relative = rd_i32(d + p); p += 4;
                        act.is_condition = rd_i32(d + p); p += 4;
                        act.applies_to_something = rd_i32(d + p); p += 4;
                        act.exec_type = rd_i32(d + p); p += 4;
                        if (p + 4 > ol) { gm82_decoded_action_free(&act); parse_err = 1; break; }
                        int32_t fnlen = rd_i32(d + p); p += 4;
                        if (fnlen < 0 || p + (size_t)fnlen > ol) { gm82_decoded_action_free(&act); parse_err = 1; break; }
                        if (fnlen > 0) {
                            int cp = fnlen < (int)sizeof(act.fn_name) - 1 ? fnlen : (int)sizeof(act.fn_name) - 1;
                            memcpy(act.fn_name, d + p, (size_t)cp);
                            act.fn_name[cp] = 0;
                            p += (size_t)fnlen;
                        }
                        if (p + 4 > ol) { gm82_decoded_action_free(&act); parse_err = 1; break; }
                        int32_t fclen = rd_i32(d + p); p += 4;
                        if (fclen < 0 || p + (size_t)fclen > ol) { gm82_decoded_action_free(&act); parse_err = 1; break; }
                        if (fclen > 0) {
                            act.fn_code = (char *)malloc((size_t)fclen + 1);
                            if (act.fn_code) {
                                memcpy(act.fn_code, d + p, (size_t)fclen);
                                act.fn_code[fclen] = 0;
                            }
                            p += (size_t)fclen;
                        }
                        if (p + 8 > ol) { gm82_decoded_action_free(&act); parse_err = 1; break; }
                        act.arg_count = rd_i32(d + p); p += 4;
                        int32_t nb_at = rd_i32(d + p); p += 4;
                        if (nb_at < 0 || nb_at > 32 || p + (size_t)nb_at * 4 > ol) { gm82_decoded_action_free(&act); parse_err = 1; break; }
                        for (int32_t t = 0; t < nb_at; t++) {
                            int32_t at = rd_i32(d + p); p += 4;
                            if (t < 8) act.arg_types[t] = at;
                        }
                        if (p + 12 > ol) { gm82_decoded_action_free(&act); parse_err = 1; break; }
                        act.applies_to = rd_i32(d + p); p += 4;
                        act.is_relative = rd_i32(d + p); p += 4;
                        int32_t nargs = rd_i32(d + p); p += 4;
                        if (nargs < 0 || nargs > 32) { gm82_decoded_action_free(&act); parse_err = 1; break; }
                        for (int32_t k = 0; k < nargs; k++) {
                            if (p + 4 > ol) { gm82_decoded_action_free(&act); parse_err = 1; break; }
                            int32_t alen = rd_i32(d + p); p += 4;
                            if (alen < 0 || p + (size_t)alen > ol) { gm82_decoded_action_free(&act); parse_err = 1; break; }
                            if (k < 8 && alen > 0) {
                                act.arg_strs[k] = (char *)malloc((size_t)alen + 1);
                                if (act.arg_strs[k]) {
                                    memcpy(act.arg_strs[k], d + p, (size_t)alen);
                                    act.arg_strs[k][alen] = 0;
                                }
                            }
                            p += (size_t)alen;
                        }
                        if (parse_err) break;
                        if (p + 4 > ol) { gm82_decoded_action_free(&act); parse_err = 1; break; }
                        act.is_not = rd_i32(d + p); p += 4;
                        if (ev && ev->actions && stored < ev->action_cap) {
                            ev->actions[stored] = act;
                            if (stored == 0) {
                                ev->action_id0 = act.action_id;
                                if (act.fn_name[0]) snprintf(ev->action_name0, sizeof(ev->action_name0), "%s", act.fn_name);
                                if (act.arg_strs[0] && act.arg_strs[0][0] >= '0' && act.arg_strs[0][0] <= '9') {
                                    ev->action_arg0 = atoi(act.arg_strs[0]);
                                }
                            }
                            const char *gml = (act.action_id == 603 && act.arg_strs[0]) ? act.arg_strs[0]
                                            : ((act.exec_type == 2 && act.fn_code) ? act.fn_code : NULL);
                            if (gml && gml[0] && !ev->code_snippet) {
                                ev->code_snippet = strdup(gml);
                            }
                            stored++;
                        } else {
                            gm82_decoded_action_free(&act);
                        }
                    }
                    if (ev) ev->action_count = stored;
                    if (parse_err) break;
                }
            }
        }
        free(d);
    }
    out->count = n;
    if (n > 0) {
        out->items = (gm82_decoded_object *)malloc((size_t)n * sizeof(*out->items));
        if (out->items) memcpy(out->items, tmp, (size_t)n * sizeof(*tmp));
        else out->count = 0;
    }
    free(tmp);
    return out->count;
}

int gm82_decode_rooms_from_gmk(const uint8_t *data, size_t size, gm82_decoded_room_list *out) {
    memset(out, 0, sizeof(*out));
    if (!data || size < 12) return -1;
    gm82_decoded_room tmp[32];
    int n = 0;

    for (size_t i = 12; i + 2 < size; i++) {
        if (!(data[i]==0x78 && (data[i+1]==0x9c||data[i+1]==0xda||data[i+1]==0x01||data[i+1]==0x5e)))
            continue;
        size_t ol = 0;
        uint8_t *d = inflate_at(data + i, size - i, &ol);
        i += 16;
        if (!d || ol < 40) { free(d); continue; }
        if (rd_i32(d) != 1) { free(d); continue; }
        int32_t slen = rd_i32(d + 4);
        if (slen < 1 || slen > 48 || 8 + (size_t)slen + 20 > ol) { free(d); continue; }
        const uint8_t *ns = d + 8;
        int ok = 1;
        for (int k = 0; k < slen; k++) if (ns[k] < 32 || ns[k] > 126) ok = 0;
        if (!ok) { free(d); continue; }
        char name[64]; memcpy(name, ns, (size_t)slen); name[slen] = 0;
        size_t off = 8 + (size_t)slen + 8;
        if (off + 8 > ol) { free(d); continue; }
        int32_t ver = rd_i32(d + off); off += 4;
        if (ver != 541 && ver != 520 && ver != 800) { free(d); continue; }
        if (ver == 800) {
            int name_ok = (strncmp(name, "room", 4) == 0) || (strncmp(name, "rm", 2) == 0) ||
                          (name[0] == 'r' && (name[1] == '_' || (name[1] >= '0' && name[1] <= '9'))) ||
                          (strncmp(name, "level", 5) == 0) || (strncmp(name, "stage", 5) == 0);
            if (!name_ok) { free(d); continue; }
        }
        int32_t clen = rd_i32(d + off); off += 4;
        if (clen < 0 || off + (size_t)clen > ol) { free(d); continue; }
        off += (size_t)clen;
        if (off + 20 > ol) { free(d); continue; }
        int32_t width = rd_i32(d + off); off += 4;
        int32_t height = rd_i32(d + off); off += 4;
        off += 8; off += 4;
        int32_t speed = rd_i32(d + off); off += 4;
        if (width < 16 || height < 16 || width > 10000 || height > 10000) { free(d); continue; }

        if (n >= 32) { free(d); break; }
        gm82_decoded_room *r = &tmp[n++];
        memset(r, 0, sizeof(*r));
        snprintf(r->name, sizeof(r->name), "%s", name);
        r->width = width; r->height = height; r->speed = speed;

        gm82_decoded_instance ibuf[1024];
        memset(ibuf, 0, sizeof(ibuf));
        int ic = 0;
        for (size_t j = off; j + 16 <= ol && ic < 1024; j += 4) {
            int32_t x = rd_i32(d + j);
            int32_t y = rd_i32(d + j + 4);
            int32_t obj = rd_i32(d + j + 8);
            int32_t id = rd_i32(d + j + 12);
            if (x < -32 || y < -32 || x > width + 64 || y > height + 64) continue;
            if (obj < 0 || obj > 512) continue;
            if (id < 100000 || id > 10000000) continue;
            if (x > width * 2 || y > height * 2) continue;
            int dup = 0;
            for (int k = 0; k < ic; k++) if (ibuf[k].id == id) { dup = 1; break; }
            if (dup) continue;
            ibuf[ic].x = x; ibuf[ic].y = y;
            ibuf[ic].object_index = obj; ibuf[ic].id = id;
            ibuf[ic].creation_code = NULL;
            if (j + 24 <= ol) {
                int32_t maybe_clen = rd_i32(d + j + 16);
                if (maybe_clen == 0) {
                    j += 20;
                } else if (maybe_clen > 0 && maybe_clen < 4096 &&
                           j + 20 + (size_t)maybe_clen <= ol) {
                    const uint8_t *cs = d + j + 20;
                    int printable = 1;
                    for (int k = 0; k < maybe_clen; k++) {
                        uint8_t ch = cs[k];
                        if (ch == 0) break;
                        if (ch < 9 || (ch > 13 && ch < 32)) { printable = 0; break; }
                    }
                    if (printable && maybe_clen >= 2) {
                        char *code = (char *)malloc((size_t)maybe_clen + 1);
                        if (code) {
                            memcpy(code, cs, (size_t)maybe_clen);
                            code[maybe_clen] = 0;
                            ibuf[ic].creation_code = code;
                        }
                    }
                    j += 16 + (size_t)maybe_clen;
                }
            }
            ic++;
        }
        r->instance_count = ic;
        if (ic > 0) {
            r->instances = (gm82_decoded_instance *)malloc((size_t)ic * sizeof(*r->instances));
            if (r->instances) memcpy(r->instances, ibuf, (size_t)ic * sizeof(*ibuf));
            else r->instance_count = 0;
        }
        r->tiles = NULL; r->tile_count = 0;
        free(d);
    }
    out->count = n;
    if (n > 0) {
        out->items = (gm82_decoded_room *)malloc((size_t)n * sizeof(*out->items));
        if (out->items) {
            memcpy(out->items, tmp, (size_t)n * sizeof(*tmp));
            for (int i = 0; i < n; i++) { tmp[i].instances = NULL; tmp[i].tiles = NULL; }
        } else out->count = 0;
    }
    return out->count;
}
