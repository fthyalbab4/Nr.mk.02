/*
 * Structured GMK 8.x action parser.
 *
 * A GMK project is a header followed by zlib-compressed asset records. Every
 * object record is self-contained:
 *
 *   u32 1                      (asset present)
 *   pas name                   ("obj_...")
 *   u64 timestamp
 *   u32 430                    (object marker)
 *   i32 sprite, u32 solid, u32 visible, i32 depth, u32 persistent,
 *   i32 parent, i32 mask
 *   u32 event_list_count_minus_one
 *   per event list:            (list index is the main event type)
 *       per sub event:  u32 sub, u32 400, u32 action_count, actions...
 *       i32 -1                 (terminator)
 *
 * and every action is:
 *
 *   u32 440, u32 lib_id, u32 id, u32 kind, u32 can_be_relative,
 *   u32 is_condition, u32 applies_to_something, u32 execution_type,
 *   pas fn_name, pas fn_code, u32 param_count, u32 8, u32 types[8],
 *   i32 applies_to, u32 is_relative, u32 8, pas strings[8], u32 invert
 *
 * Drag-and-drop "execute code" actions carry an empty fn_name, id 603 and the
 * GML text in strings[0]; those are kept verbatim in gm82_action_ref.code so the
 * runtime can run them as a code block.
 */
#define _POSIX_C_SOURCE 200809L
#include "gm82_actions.h"
#include <zlib.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

#define GMK8_MAX_BLOB (32u * 1024u * 1024u)

typedef struct {
    const uint8_t *p;
    size_t n;
    size_t pos;
    int ok;
} gmk8_rd;

static uint32_t g8_u32(gmk8_rd *r) {
    if (!r->ok || r->pos + 4 > r->n) { r->ok = 0; return 0; }
    uint32_t v = (uint32_t)r->p[r->pos] | ((uint32_t)r->p[r->pos + 1] << 8) |
                 ((uint32_t)r->p[r->pos + 2] << 16) | ((uint32_t)r->p[r->pos + 3] << 24);
    r->pos += 4;
    return v;
}

static int32_t g8_i32(gmk8_rd *r) { return (int32_t)g8_u32(r); }

/* Reads a length-prefixed string; copies at most cap-1 bytes into dst. */
static int g8_str(gmk8_rd *r, char *dst, size_t cap) {
    uint32_t len = g8_u32(r);
    if (!r->ok) return 0;
    if (len > r->n - r->pos) { r->ok = 0; return 0; }
    size_t copy = len;
    if (dst && cap) {
        if (copy > cap - 1) copy = cap - 1;
        memcpy(dst, r->p + r->pos, copy);
        dst[copy] = 0;
    }
    r->pos += len;
    return 1;
}

static uint8_t *g8_inflate(const uint8_t *src, size_t src_len, size_t *out_len) {
    *out_len = 0;
    if (src_len < 8) return NULL;
    z_stream s;
    memset(&s, 0, sizeof(s));
    if (inflateInit(&s) != Z_OK) return NULL;
    size_t cap = src_len * 4u + 1024u;
    if (cap > GMK8_MAX_BLOB) cap = GMK8_MAX_BLOB;
    uint8_t *dst = (uint8_t *)malloc(cap);
    if (!dst) { inflateEnd(&s); return NULL; }
    s.next_in = (Bytef *)src;
    s.avail_in = (uInt)src_len;
    size_t total = 0;
    int ret = Z_OK;
    while (ret == Z_OK) {
        if (total == cap) {
            if (cap >= GMK8_MAX_BLOB) { free(dst); inflateEnd(&s); return NULL; }
            size_t ncap = cap * 2u > GMK8_MAX_BLOB ? GMK8_MAX_BLOB : cap * 2u;
            uint8_t *nd = (uint8_t *)realloc(dst, ncap);
            if (!nd) { free(dst); inflateEnd(&s); return NULL; }
            dst = nd;
            cap = ncap;
        }
        s.next_out = dst + total;
        s.avail_out = (uInt)(cap - total);
        ret = inflate(&s, Z_NO_FLUSH);
        total = cap - s.avail_out;
        if (ret == Z_STREAM_END) break;
        if (ret != Z_OK && ret != Z_BUF_ERROR) break;
        if (ret == Z_BUF_ERROR && s.avail_in == 0) break;
    }
    inflateEnd(&s);
    if (ret != Z_STREAM_END || total == 0) { free(dst); return NULL; }
    *out_len = total;
    return dst;
}

/* Appends one action to an object table, copying its code block if present. */
static void gmk8_add_action(gm82_object_actions *oa, int etype, int enumb,
                            const char *name, int aid, int kind,
                            const int32_t *types, const char *const *strs,
                            const char *code, int is_cond, int applies_to) {
    if (oa->count >= oa->capacity) {
        int nc = oa->capacity ? oa->capacity * 2 : 8;
        gm82_action_ref *n = (gm82_action_ref *)realloc(oa->items, (size_t)nc * sizeof(*n));
        if (!n) return;
        oa->items = n;
        oa->capacity = nc;
    }
    gm82_action_ref *ar = &oa->items[oa->count++];
    memset(ar, 0, sizeof(*ar));
    ar->event_type = etype;
    ar->event_numb = enumb;
    snprintf(ar->name, sizeof(ar->name), "%s", name ? name : "");
    ar->action_id = aid;
    ar->kind = kind;
    ar->argc = GM82_ACTION_MAX_ARGS;
    for (int k = 0; k < GM82_ACTION_MAX_ARGS; k++) {
        ar->args[k] = types ? types[k] : 0;
        /* GMK stores the authored values as strings; use them when numeric so
           action implementations see the value the author actually typed. */
        if (strs && strs[k] && strs[k][0]) {
            const char *s = strs[k];
            char *end = NULL;
            long v = strtol(s, &end, 10);
            if (end && *end == 0 && end != s) ar->args[k] = (int32_t)v;
        }
    }
    ar->str_argc = 4;
    for (int k = 0; k < 4 && strs; k++)
        snprintf(ar->str_args[k], sizeof(ar->str_args[k]), "%s", strs[k] ? strs[k] : "");
    ar->is_condition = is_cond;
    ar->applies_to = applies_to;
    if (code && code[0]) ar->code = strdup(code);
}

/* Parses one inflated object record; returns 1 when the record is an object. */
/* Shared header walk: returns 1 for an object record and fills the metadata. */
typedef struct {
    char name[64];
    int32_t sprite;
    int32_t solid;
    int32_t visible;
    int32_t depth;
    int32_t persistent;
    int32_t parent;
    size_t after_header;
} gmk8_object_head;

static int gmk8_read_head(const uint8_t *blob, size_t len, gmk8_object_head *h) {
    if (len < 32) return 0;
    gmk8_rd r = { blob, len, 0, 1 };
    if (g8_u32(&r) != 1) return 0;
    if (!g8_str(&r, h->name, sizeof(h->name))) return 0;
    if (!h->name[0]) return 0;
    for (const char *c = h->name; *c; c++)
        if ((unsigned char)*c < 32 || (unsigned char)*c > 126) return 0;
    r.pos += 8;
    if (g8_u32(&r) != 430) return 0;
    h->sprite = g8_i32(&r);
    h->solid = (int32_t)g8_u32(&r);
    h->visible = (int32_t)g8_u32(&r);
    h->depth = g8_i32(&r);
    h->persistent = (int32_t)g8_u32(&r);
    h->parent = g8_i32(&r);
    (void)g8_i32(&r);
    h->after_header = r.pos;
    return r.ok;
}

static int gmk8_parse_object(const uint8_t *blob, size_t len, gm82_object_actions *out) {
    if (len < 32) return 0;
    gmk8_object_head head;
    if (!gmk8_read_head(blob, len, &head)) return 0;
    char name[64];
    snprintf(name, sizeof(name), "%s", head.name);
    gmk8_rd r = { blob, len, head.after_header, 1 };
    uint32_t lists_minus_one = g8_u32(&r);
    if (!r.ok || lists_minus_one > 11) return 0;

    snprintf(out->object_name, sizeof(out->object_name), "%s", name);
    out->items = NULL;
    out->count = 0;
    out->capacity = 0;

    for (uint32_t li = 0; li <= lists_minus_one; li++) {
        for (;;) {
            int32_t sub = g8_i32(&r);
            if (!r.ok) return 1; /* truncated: keep what we have */
            if (sub == -1) break;
            uint32_t ver = g8_u32(&r);
            if (ver != 400) return 1;
            uint32_t acount = g8_u32(&r);
            if (!r.ok || acount > 4096) return 1;
            for (uint32_t ai = 0; ai < acount; ai++) {
                uint32_t aver = g8_u32(&r);
                if (aver != 440) return 1;
                (void)g8_u32(&r);                 /* lib id */
                int32_t aid = g8_i32(&r);
                int32_t kind = g8_i32(&r);
                (void)g8_u32(&r);                 /* can be relative */
                int32_t is_cond = g8_i32(&r);
                (void)g8_u32(&r);                 /* applies to something */
                (void)g8_u32(&r);                 /* execution type */
                char fname[64], fcode[64];
                if (!g8_str(&r, fname, sizeof(fname))) return 1;
                if (!g8_str(&r, fcode, sizeof(fcode))) return 1;
                (void)g8_u32(&r);                 /* param count */
                (void)g8_u32(&r);                 /* 8 */
                int32_t types[GM82_ACTION_MAX_ARGS];
                for (int k = 0; k < GM82_ACTION_MAX_ARGS; k++) types[k] = g8_i32(&r);
                int32_t applies_to = g8_i32(&r);
                (void)g8_u32(&r);                 /* is relative */
                (void)g8_u32(&r);                 /* 8 */
                char strs[GM82_ACTION_MAX_ARGS][1024];
                const char *sp[GM82_ACTION_MAX_ARGS];
                for (int k = 0; k < GM82_ACTION_MAX_ARGS; k++) {
                    if (!g8_str(&r, strs[k], sizeof(strs[k]))) return 1;
                    sp[k] = strs[k];
                }
                (void)g8_u32(&r);                 /* invert condition */
                if (!r.ok) return 1;
                /* Code actions: no function name, GML in strings[0]. */
                const char *code = (aid == 603 || fname[0] == 0) ? strs[0] : NULL;
                gmk8_add_action(out, (int)li, sub, fname, aid, kind, types, sp, code,
                                is_cond, applies_to);
            }
        }
    }
    return 1;
}

int gm82_actions_parse_gmk8(const uint8_t *data, size_t size, gm82_action_table *out) {
    if (!data || !size || !out) return 0;
    memset(out, 0, sizeof(*out));
    int objs = 0;
    int cap = 0;
    /* The container stores one zlib stream per asset; walking the section list
       needs the section kinds, so the streams are located by their zlib header
       and each candidate is verified against the object record layout. */
    for (size_t i = 0; i + 2 < size; i++) {
        if (data[i] != 0x78 || data[i + 1] != 0x9c) continue;
        size_t blob_len = 0;
        uint8_t *blob = g8_inflate(data + i, size - i, &blob_len);
        if (!blob) continue;
        gm82_object_actions oa;
        memset(&oa, 0, sizeof(oa));
        if (gmk8_parse_object(blob, blob_len, &oa)) {
            if (objs == cap) {
                int nc = cap ? cap * 2 : 8;
                gm82_object_actions *n = (gm82_object_actions *)realloc(out->objects, (size_t)nc * sizeof(*n));
                if (!n) { free(oa.items); free(blob); break; }
                out->objects = n;
                cap = nc;
            }
            out->objects[objs++] = oa;
        }
        free(blob);
        i += 1; /* keep scanning: records are not aligned */
    }
    out->count = objs;
    return objs;
}

/* Walks the same records but emits only the ordered object metadata. */
int gm82_objects_parse_gmk8(const uint8_t *data, size_t size, gm82_decoded_object_list *out) {
    if (!data || !size || !out) return 0;
    out->items = NULL;
    out->count = 0;
    int cap = 0;
    for (size_t i = 0; i + 2 < size; i++) {
        if (data[i] != 0x78 || data[i + 1] != 0x9c) continue;
        size_t blob_len = 0;
        uint8_t *blob = g8_inflate(data + i, size - i, &blob_len);
        if (!blob) continue;
        gmk8_object_head head;
        if (gmk8_read_head(blob, blob_len, &head)) {
            if (out->count == cap) {
                int nc = cap ? cap * 2 : 8;
                gm82_decoded_object *n = (gm82_decoded_object *)realloc(out->items, (size_t)nc * sizeof(*n));
                if (!n) { free(blob); break; }
                out->items = n;
                cap = nc;
            }
            gm82_decoded_object *o = &out->items[out->count++];
            memset(o, 0, sizeof(*o));
            snprintf(o->name, sizeof(o->name), "%s", head.name);
            o->sprite_index = head.sprite;
            o->solid = head.solid;
            o->visible = head.visible;
            o->depth = head.depth;
            o->persistent = head.persistent;
            o->parent_index = head.parent;
            o->event_count = 0;
        }
        free(blob);
        i += 1;
    }
    return out->count;
}
