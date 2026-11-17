#define _POSIX_C_SOURCE 200809L
#include "gm82_gmk_stream.h"
#include "gm82_int_read.h"
#include "gm82_diagnostics.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <zlib.h>

typedef struct {
    const uint8_t *buf;
    size_t size;
    size_t pos;
    bool err;
} gmk_cur;

static int32_t cur_i32(gmk_cur *c) {
    if (!c || c->err || c->pos + 4 > c->size) { if (c) c->err = true; return 0; }
    int32_t v = gm82_read_i32le(c->buf + c->pos);
    c->pos += 4;
    return v;
}

static uint32_t cur_u32(gmk_cur *c) {
    return (uint32_t)cur_i32(c);
}

static double cur_f64(gmk_cur *c) {
    if (!c || c->err || c->pos + 8 > c->size) { if (c) c->err = true; return 0.0; }
    double d = 0.0;
    memcpy(&d, c->buf + c->pos, 8);
    c->pos += 8;
    return d;
}

static void cur_skip(gmk_cur *c, size_t n) {
    if (!c || c->err || c->pos + n > c->size) { if (c) c->err = true; return; }
    c->pos += n;
}

static char *cur_str_alloc(gmk_cur *c) {
    uint32_t len = cur_u32(c);
    if (c->err) return NULL;
    if (len > 64u * 1024u * 1024u || c->pos + len > c->size) {
        c->err = true;
        return NULL;
    }
    char *s = (char *)malloc((size_t)len + 1u);
    if (!s) { c->err = true; return NULL; }
    if (len > 0) memcpy(s, c->buf + c->pos, len);
    s[len] = '\0';
    c->pos += len;
    return s;
}

static void cur_str_buf(gmk_cur *c, char *dst, size_t cap) {
    if (dst && cap > 0) dst[0] = '\0';
    uint32_t len = cur_u32(c);
    if (c->err) return;
    if (len > 64u * 1024u * 1024u || c->pos + len > c->size) {
        c->err = true;
        return;
    }
    if (dst && cap > 0 && len > 0) {
        size_t copy = len < cap - 1 ? len : cap - 1;
        memcpy(dst, c->buf + c->pos, copy);
        dst[copy] = '\0';
    }
    c->pos += len;
}

static uint8_t *cur_inflate_zblock(gmk_cur *c, size_t *out_len) {
    *out_len = 0;
    uint32_t zlen = cur_u32(c);
    if (c->err || c->pos + zlen > c->size || zlen == 0) {
        if (c->pos + zlen > c->size) c->err = true;
        return NULL;
    }
    const uint8_t *src = c->buf + c->pos;
    c->pos += zlen;

    z_stream strm;
    memset(&strm, 0, sizeof(strm));
    if (inflateInit2(&strm, 15) != Z_OK) return NULL;

    size_t cap = (size_t)zlen * 4u + 256u;
    uint8_t *dst = (uint8_t *)malloc(cap);
    if (!dst) { inflateEnd(&strm); return NULL; }

    strm.next_in = (Bytef *)src;
    strm.avail_in = (uInt)zlen;
    strm.next_out = dst;
    strm.avail_out = (uInt)cap;

    int ret;
    while ((ret = inflate(&strm, Z_NO_FLUSH)) == Z_OK) {
        if (strm.avail_out == 0) {
            size_t used = cap;
            cap *= 2u;
            uint8_t *nd = (uint8_t *)realloc(dst, cap);
            if (!nd) { free(dst); inflateEnd(&strm); return NULL; }
            dst = nd;
            strm.next_out = dst + used;
            strm.avail_out = (uInt)(cap - used);
        }
    }
    if (ret != Z_STREAM_END) {
        free(dst);
        inflateEnd(&strm);
        return NULL;
    }
    *out_len = strm.total_out;
    inflateEnd(&strm);
    return dst;
}

static uint8_t *decompress_direct_zlib(const uint8_t *src, size_t zlen, size_t *out_len) {
    *out_len = 0;
    if (!src || zlen < 2) return NULL;
    z_stream strm;
    memset(&strm, 0, sizeof(strm));
    if (inflateInit2(&strm, 15) != Z_OK) return NULL;

    size_t cap = zlen * 4u + 256u;
    uint8_t *dst = (uint8_t *)malloc(cap);
    if (!dst) { inflateEnd(&strm); return NULL; }
    strm.next_in = (Bytef *)src;
    strm.avail_in = (uInt)zlen;
    strm.next_out = dst;
    strm.avail_out = (uInt)cap;
    int ret;
    while ((ret = inflate(&strm, Z_NO_FLUSH)) == Z_OK) {
        if (strm.avail_out == 0) {
            size_t used = cap;
            cap *= 2u;
            uint8_t *nd = (uint8_t *)realloc(dst, cap);
            if (!nd) { free(dst); inflateEnd(&strm); return NULL; }
            dst = nd;
            strm.next_out = dst + used;
            strm.avail_out = (uInt)(cap - used);
        }
    }
    if (ret != Z_STREAM_END) {
        free(dst);
        inflateEnd(&strm);
        return NULL;
    }
    *out_len = strm.total_out;
    inflateEnd(&strm);
    return dst;
}

static void record_dll_name(gm82_project_ir *ir, const char *name) {
    if (!ir || !name || !name[0]) return;
    for (int32_t i = 0; i < ir->dll_count; i++) {
        if (ir->dll_names[i] && strcmp(ir->dll_names[i], name) == 0) return;
    }
    char **grown = (char **)realloc(ir->dll_names, (size_t)(ir->dll_count + 1) * sizeof(char *));
    if (!grown) return;
    ir->dll_names = grown;
    ir->dll_names[ir->dll_count++] = strdup(name);
    gm82_diag_record_unmapped("dll", name);
}

static void scan_code_for_dlls(gm82_project_ir *ir, const char *code) {
    if (!ir || !code || !code[0]) return;
    const char *p = code;
    while ((p = strstr(p, "external_define")) != NULL) {
        const char *q = strchr(p, '(');
        if (!q) break;
        q++;
        while (*q == ' ' || *q == '\t') q++;
        if (*q == '\'' || *q == '"') {
            char quote = *q++;
            const char *e = strchr(q, quote);
            if (e && (e - q) > 0 && (e - q) < 128) {
                char dll[128];
                size_t len = (size_t)(e - q);
                memcpy(dll, q, len);
                dll[len] = '\0';
                record_dll_name(ir, dll);
            }
        }
        p += 15;
    }
}

static void bgra_to_rgba(const uint8_t *bgra, uint8_t *rgba, size_t pixels) {
    for (size_t i = 0; i < pixels; i++) {
        rgba[i * 4 + 0] = bgra[i * 4 + 2];
        rgba[i * 4 + 1] = bgra[i * 4 + 1];
        rgba[i * 4 + 2] = bgra[i * 4 + 0];
        rgba[i * 4 + 3] = bgra[i * 4 + 3];
    }
}

static uint8_t *decrypt_gm7_stream(const uint8_t *raw, size_t size, size_t *out_stream_start) {
    if (!raw || size < 16) return NULL;
    gmk_cur c = { raw, size, 8, false };
    int32_t s1 = cur_i32(&c);
    int32_t s2 = cur_i32(&c);
    if (c.err || s1 < 0 || s2 < 0 || s1 > 10000 || s2 > 10000) return NULL;
    if (c.pos + (size_t)s1 * 4u + 256u + (size_t)s2 * 4u > size) return NULL;
    c.pos += (size_t)s1 * 4u;
    uint8_t inv[256];
    memset(inv, 0, sizeof(inv));
    for (int i = 0; i < 256; i++) {
        inv[raw[c.pos + i]] = (uint8_t)i;
    }
    c.pos += 256u;
    c.pos += (size_t)s2 * 4u;
    size_t start = c.pos;
    uint8_t *dec = (uint8_t *)malloc(size);
    if (!dec) return NULL;
    memcpy(dec, raw, start);
    for (size_t pos = start; pos < size; pos++) {
        int val = (int)inv[raw[pos]] - (int)(pos & 0xFFu);
        dec[pos] = (uint8_t)(val & 0xFF);
    }
    *out_stream_start = start;
    return dec;
}

static bool parse_action(gmk_cur *bc, gm82_decoded_action *a, gm82_project_ir *ir) {
    memset(a, 0, sizeof(*a));
    int32_t aver = cur_i32(bc);
    if (bc->err || (aver != 440 && aver != 400)) return false;
    a->lib_id = cur_i32(bc);
    a->action_id = cur_i32(bc);
    a->kind = cur_i32(bc);
    a->can_be_relative = cur_i32(bc);
    a->is_condition = cur_i32(bc);
    a->applies_to_something = cur_i32(bc);
    a->exec_type = cur_i32(bc);
    cur_str_buf(bc, a->fn_name, sizeof(a->fn_name));
    a->fn_code = cur_str_alloc(bc);
    a->arg_count = cur_i32(bc);
    int32_t nb_at = cur_i32(bc);
    for (int32_t t = 0; t < nb_at && !bc->err; t++) {
        int32_t at = cur_i32(bc);
        if (t < 8) a->arg_types[t] = at;
    }
    a->applies_to = cur_i32(bc);
    a->is_relative = cur_i32(bc);
    int32_t nargs = cur_i32(bc);
    for (int32_t k = 0; k < nargs && !bc->err; k++) {
        char *arg = cur_str_alloc(bc);
        if (k < 8) {
            a->arg_strs[k] = arg;
            if (arg) scan_code_for_dlls(ir, arg);
        } else {
            free(arg);
        }
    }
    a->is_not = cur_i32(bc);
    if (a->fn_code) scan_code_for_dlls(ir, a->fn_code);
    return !bc->err;
}

static void parse_settings(const uint8_t *b, size_t len, gm82_project_settings *s, int32_t ver) {
    gmk_cur bc = { b, len, 0, false };
    s->fullscreen = cur_i32(&bc) != 0;
    s->interpolate_pixels = cur_i32(&bc) != 0;
    s->dont_draw_border = cur_i32(&bc) != 0;
    s->display_cursor = cur_i32(&bc) != 0;
    s->scaling = cur_i32(&bc);
    if (ver >= 700 || len > 120) {
        s->allow_resize = cur_i32(&bc) != 0;
        s->window_on_top = cur_i32(&bc) != 0;
        s->clear_color = cur_i32(&bc);
        s->set_resolution = cur_i32(&bc) != 0;
        s->color_depth = cur_i32(&bc);
        s->resolution = cur_i32(&bc);
        s->frequency = cur_i32(&bc);
        s->dont_show_buttons = cur_i32(&bc) != 0;
        s->vsync = cur_i32(&bc) != 0;
        if (ver >= 800) s->disable_screensaver = cur_i32(&bc) != 0;
        s->f4_fullscreen_toggle = cur_i32(&bc) != 0;
        s->f1_help_menu = cur_i32(&bc) != 0;
        s->esc_close_game = cur_i32(&bc) != 0;
        s->f5_save_f6_load = cur_i32(&bc) != 0;
        if (ver >= 702) s->f9_screenshot = cur_i32(&bc) != 0;
        if (ver >= 702) s->treat_close_as_esc = cur_i32(&bc) != 0;
        s->priority = cur_i32(&bc);
        s->freeze_on_lose_focus = cur_i32(&bc) != 0;
    }
    (void)bc;
}

static bool push_frame(gm82_decoded_sprite_list *L, const char *name,
                       int32_t w, int32_t h, int32_t ox, int32_t oy,
                       const uint8_t *bgra, size_t dlen) {
    if (w <= 0 || h <= 0 || (size_t)w * (size_t)h * 4u != dlen) return false;
    if (L->count >= L->capacity) {
        int nc = L->capacity ? L->capacity * 2 : 32;
        gm82_decoded_frame *nf = (gm82_decoded_frame *)realloc(L->frames, (size_t)nc * sizeof(*nf));
        if (!nf) return false;
        L->frames = nf;
        L->capacity = nc;
    }
    gm82_decoded_frame *f = &L->frames[L->count++];
    memset(f, 0, sizeof(*f));
    snprintf(f->name, sizeof(f->name), "%s", name ? name : "?");
    f->width = w;
    f->height = h;
    f->origin_x = ox;
    f->origin_y = oy;
    f->rgba_size = dlen;
    f->rgba = (uint8_t *)malloc(dlen);
    if (!f->rgba) { L->count--; return false; }
    bgra_to_rgba(bgra, f->rgba, (size_t)w * (size_t)h);
    gm82_frame_build_bitmask(f, 16);
    return true;
}

static bool push_empty_frame(gm82_decoded_sprite_list *L, const char *name, int32_t ox, int32_t oy) {
    if (L->count >= L->capacity) {
        int nc = L->capacity ? L->capacity * 2 : 32;
        gm82_decoded_frame *nf = (gm82_decoded_frame *)realloc(L->frames, (size_t)nc * sizeof(*nf));
        if (!nf) return false;
        L->frames = nf;
        L->capacity = nc;
    }
    gm82_decoded_frame *f = &L->frames[L->count++];
    memset(f, 0, sizeof(*f));
    snprintf(f->name, sizeof(f->name), "%s", name ? name : "");
    f->origin_x = ox;
    f->origin_y = oy;
    return true;
}

bool gm82_gmk_stream_parse(const uint8_t *data, size_t size, gm82_project_ir *ir) {
    if (!data || size < 24 || !ir) return false;
    int32_t magic = gm82_read_i32le(data);
    int32_t file_ver = gm82_read_i32le(data + 4);
    if (magic != 1234321) return false;
    if (file_ver != 600 && file_ver != 700 && file_ver != 701 && file_ver != 800 && file_ver != 810) {
        return false;
    }

    uint8_t *decrypted = NULL;
    const uint8_t *stream = data;
    size_t pos = 8;

    if (file_ver == 700 || file_ver == 701) {
        size_t sstart = 0;
        decrypted = decrypt_gm7_stream(data, size, &sstart);
        if (!decrypted) return false;
        stream = decrypted;
        pos = sstart;
    }

    gmk_cur c = { stream, size, pos, false };
    int32_t game_id = cur_i32(&c);
    cur_skip(&c, 16); /* GUID */
    if (c.err) { free(decrypted); return false; }

    bool compressed_blocks = (file_ver >= 800);
    if (file_ver == 800) ir->format = GM82_GMK_FORMAT_GM7_GM8;
    else if (file_ver == 810) ir->format = GM82_GMK_FORMAT_GM81;
    else if (file_ver >= 700) ir->format = GM82_GMK_FORMAT_GM7_GM8;
    else ir->format = GM82_GMK_FORMAT_GM5_GM6;
    ir->magic = magic;
    ir->version = file_ver;
    ir->app_id = game_id;

    /* 1. Settings */
    int32_t settings_ver = cur_i32(&c);
    if (c.err) { free(decrypted); return false; }
    if (compressed_blocks) {
        size_t slen = 0;
        uint8_t *sb = cur_inflate_zblock(&c, &slen);
        if (!sb) { free(decrypted); return false; }
        parse_settings(sb, slen, &ir->settings, settings_ver);
        free(sb);
    } else {
        /* Uncompressed GM6/GM7 settings block: locate triggers/constants safely not needed on GM8, skip via parse if ver<800 */
        free(decrypted);
        return false; /* Let fallback handle rare GM6/GM7 uncompressed settings offsets if layout differs */
    }

    /* 2. Triggers (GM >= 800) */
    int32_t trig_ver = cur_i32(&c); (void)trig_ver;
    int32_t ntrig = cur_i32(&c);
    if (c.err || ntrig < 0 || ntrig > 4096) { free(decrypted); return false; }
    if (ntrig > 0) {
        ir->triggers = (gm82_res_trigger *)calloc((size_t)ntrig, sizeof(gm82_res_trigger));
        if (ir->triggers) ir->trigger_count = ntrig;
    }
    for (int32_t i = 0; i < ntrig && !c.err; i++) {
        size_t blen = 0;
        uint8_t *b = cur_inflate_zblock(&c, &blen);
        if (b && ir->triggers) {
            gmk_cur bc = { b, blen, 0, false };
            int32_t ex = cur_i32(&bc);
            if (ex) {
                cur_str_buf(&bc, NULL, 0);
                ir->triggers[i].name = NULL; /* reopen properly */
                bc.pos = 4;
                ir->triggers[i].name = cur_str_alloc(&bc);
                ir->triggers[i].condition = cur_str_alloc(&bc);
                ir->triggers[i].kind = cur_i32(&bc);
                ir->triggers[i].constant_name = cur_str_alloc(&bc);
            }
        }
        free(b);
    }
    cur_f64(&c); /* triggers timestamp */

    /* 3. Constants */
    int32_t const_ver = cur_i32(&c); (void)const_ver;
    int32_t nconst = cur_i32(&c);
    if (c.err || nconst < 0 || nconst > 16384) { free(decrypted); return false; }
    if (nconst > 0) {
        ir->constants = (gm82_res_constant *)calloc((size_t)nconst, sizeof(gm82_res_constant));
        if (ir->constants) ir->constant_count = nconst;
    }
    for (int32_t i = 0; i < nconst && !c.err; i++) {
        char *cn = cur_str_alloc(&c);
        char *cv = cur_str_alloc(&c);
        if (ir->constants) {
            ir->constants[i].name = cn;
            ir->constants[i].value = cv;
        } else { free(cn); free(cv); }
    }
    cur_f64(&c); /* constants timestamp */

    /* Reset previously populated decoded lists cleanly */
    gm82_decoded_sprite_list_free(&ir->decoded_frames);
    gm82_sprite_group_list_free(&ir->sprite_groups);
    gm82_decoded_object_list_free(&ir->decoded_objects);
    gm82_script_list_free(&ir->decoded_scripts);
    gm82_decoded_sound_list_free(&ir->decoded_sounds);
    gm82_path_list_init(&ir->decoded_paths);
    gm82_timeline_list_init(&ir->decoded_timelines);
    gm82_decoded_font_list_free(&ir->decoded_fonts);

    /* 4. Sounds */
    int32_t snd_sec_ver = cur_i32(&c); (void)snd_sec_ver;
    int32_t nsnd = cur_i32(&c);
    if (c.err || nsnd < 0 || nsnd > 8192) { free(decrypted); return false; }
    ir->sound_count = nsnd;
    if (nsnd > 0) {
        ir->decoded_sounds.items = (gm82_decoded_sound *)calloc((size_t)nsnd, sizeof(gm82_decoded_sound));
        ir->decoded_sounds.capacity = nsnd;
        ir->decoded_sounds.count = nsnd;
        ir->sound_names = (char **)calloc((size_t)nsnd, sizeof(char *));
        ir->sound_name_count = nsnd;
    }
    for (int32_t i = 0; i < nsnd && !c.err; i++) {
        size_t blen = 0;
        uint8_t *b = cur_inflate_zblock(&c, &blen);
        if (!b) continue;
        gm82_decoded_sound *s = &ir->decoded_sounds.items[i];
        s->volume = 1.0;
        gmk_cur bc = { b, blen, 0, false };
        int32_t ex = cur_i32(&bc);
        if (ex) {
            cur_str_buf(&bc, s->name, sizeof(s->name));
            if (ir->sound_names) ir->sound_names[i] = strdup(s->name);
            cur_f64(&bc); /* lastChanged */
            int32_t sv = cur_i32(&bc); (void)sv;
            s->kind = cur_i32(&bc);
            cur_str_buf(&bc, s->ext, sizeof(s->ext));
            cur_str_buf(&bc, s->file_name, sizeof(s->file_name));
            int32_t has_data = cur_i32(&bc);
            if (has_data) {
                int32_t dlen = cur_i32(&bc);
                if (dlen > 0 && !bc.err && bc.pos + (size_t)dlen <= bc.size) {
                    s->raw_data = (uint8_t *)malloc((size_t)dlen);
                    if (s->raw_data) {
                        memcpy(s->raw_data, bc.buf + bc.pos, (size_t)dlen);
                        s->raw_size = (size_t)dlen;
                        s->data_size = (size_t)dlen;
                    }
                    bc.pos += (size_t)dlen;
                    if (s->raw_data && strcasecmp(s->ext, ".wav") == 0) {
                        gm82_wav_decode_pcm(s->raw_data, s->raw_size, &s->pcm, &s->pcm_frames, &s->sample_rate, &s->channels);
                    }
                }
            }
            s->effects = cur_i32(&bc);
            s->volume = cur_f64(&bc);
            s->pan = cur_f64(&bc);
            s->preload = cur_i32(&bc);
        }
        free(b);
    }

    /* 5. Sprites */
    int32_t spr_sec_ver = cur_i32(&c); (void)spr_sec_ver;
    int32_t nspr = cur_i32(&c);
    if (c.err || nspr < 0 || nspr > 8192) { free(decrypted); return false; }
    for (int32_t i = 0; i < ir->sprite_count; i++) {
        free(ir->sprites[i].name);
        free(ir->sprites[i].gl_textures);
        free(ir->sprites[i].rgba);
    }
    free(ir->sprites);
    ir->sprite_count = nspr;
    ir->sprites = nspr > 0 ? (gm82_res_sprite *)calloc((size_t)nspr, sizeof(gm82_res_sprite)) : NULL;
    if (nspr > 0) {
        ir->sprite_names = (char **)calloc((size_t)nspr, sizeof(char *));
        ir->sprite_name_count = nspr;
        ir->sprite_groups.items = (gm82_sprite_group *)calloc((size_t)nspr, sizeof(gm82_sprite_group));
        ir->sprite_groups.count = ir->sprite_groups.items ? nspr : 0;
    }
    for (int32_t i = 0; i < nspr && !c.err; i++) {
        size_t blen = 0;
        uint8_t *b = cur_inflate_zblock(&c, &blen);
        gm82_res_sprite *s = ir->sprites ? &ir->sprites[i] : NULL;
        int32_t group_start = ir->decoded_frames.count;
        if (s) { s->id = i; s->status = GM82_RES_DECODED; }
        if (!b) {
            push_empty_frame(&ir->decoded_frames, "", 0, 0);
            if (ir->sprite_groups.items && i < ir->sprite_groups.count) {
                ir->sprite_groups.items[i].frame_start = group_start;
                ir->sprite_groups.items[i].frame_count = 0;
            }
            continue;
        }
        gmk_cur bc = { b, blen, 0, false };
        int32_t ex = cur_i32(&bc);
        if (!ex) {
            push_empty_frame(&ir->decoded_frames, "", 0, 0);
            if (ir->sprite_groups.items && i < ir->sprite_groups.count) {
                ir->sprite_groups.items[i].frame_start = group_start;
                ir->sprite_groups.items[i].frame_count = 0;
            }
            free(b);
            continue;
        }
        char sname[64];
        cur_str_buf(&bc, sname, sizeof(sname));
        cur_f64(&bc); /* lastChanged */
        int32_t sv = cur_i32(&bc);
        int32_t ox = cur_i32(&bc);
        int32_t oy = cur_i32(&bc);
        int32_t nf = cur_i32(&bc);
        if (s) {
            s->name = strdup(sname);
            if (ir->sprite_names) ir->sprite_names[i] = strdup(sname);
            s->origin_x = ox;
            s->origin_y = oy;
            s->subimage_count = nf;
        }
        int32_t first_w = 0, first_h = 0;
        uint8_t *first_rgba = NULL;
        size_t first_sz = 0;
        int32_t pushed_nf = 0;
        if (nf <= 0) {
            push_empty_frame(&ir->decoded_frames, sname, ox, oy);
        }
        for (int32_t f = 0; f < nf && !bc.err; f++) {
            int32_t fv = cur_i32(&bc); (void)fv;
            int32_t w = cur_i32(&bc);
            int32_t h = cur_i32(&bc);
            int32_t dlen = cur_i32(&bc);
            if (dlen > 0 && !bc.err && bc.pos + (size_t)dlen <= bc.size) {
                if (push_frame(&ir->decoded_frames, sname, w, h, ox, oy, bc.buf + bc.pos, (size_t)dlen)) {
                    pushed_nf++;
                }
                if (f == 0 && w > 0 && h > 0 && (size_t)w * (size_t)h * 4u == (size_t)dlen) {
                    first_w = w; first_h = h;
                    first_sz = (size_t)dlen;
                    first_rgba = (uint8_t *)malloc(first_sz);
                    if (first_rgba) bgra_to_rgba(bc.buf + bc.pos, first_rgba, (size_t)w * (size_t)h);
                }
                bc.pos += (size_t)dlen;
            }
        }
        int32_t shape = (sv >= 800) ? cur_i32(&bc) : 0;
        int32_t atol = (sv >= 800) ? cur_i32(&bc) : 0; (void)atol;
        int32_t smask = cur_i32(&bc); (void)smask;
        int32_t bbtype = cur_i32(&bc);
        int32_t bbl = cur_i32(&bc);
        int32_t bbr = cur_i32(&bc);
        int32_t bbb = cur_i32(&bc);
        int32_t bbt = cur_i32(&bc);
        if (ir->sprite_groups.items && i < ir->sprite_groups.count) {
            gm82_sprite_group *g = &ir->sprite_groups.items[i];
            snprintf(g->name, sizeof(g->name), "%s", sname);
            g->frame_start = group_start;
            g->frame_count = pushed_nf;
            g->width = first_w;
            g->height = first_h;
        }
        if (s) {
            s->width = first_w;
            s->height = first_h;
            s->rgba = first_rgba;
            s->rgba_size = first_sz;
            s->colcheck = shape;
            s->bbox_mode = bbtype;
            s->bbox_left = bbl;
            s->bbox_right = bbr;
            s->bbox_bottom = bbb;
            s->bbox_top = bbt;
            s->status = GM82_RES_DECODED;
        } else {
            free(first_rgba);
        }
        free(b);
    }

    /* 6. Backgrounds */
    int32_t bg_sec_ver = cur_i32(&c); (void)bg_sec_ver;
    int32_t nbg = cur_i32(&c);
    if (c.err || nbg < 0 || nbg > 8192) { free(decrypted); return false; }
    for (int32_t i = 0; i < ir->background_count; i++) {
        free(ir->backgrounds[i].name);
        free(ir->backgrounds[i].rgba);
    }
    free(ir->backgrounds);
    ir->background_count = nbg;
    ir->backgrounds = nbg > 0 ? (gm82_res_background *)calloc((size_t)nbg, sizeof(gm82_res_background)) : NULL;
    if (nbg > 0) {
        ir->background_names = (char **)calloc((size_t)nbg, sizeof(char *));
        ir->background_name_count = nbg;
    }
    for (int32_t i = 0; i < nbg && !c.err; i++) {
        size_t blen = 0;
        uint8_t *b = cur_inflate_zblock(&c, &blen);
        gm82_res_background *bg = ir->backgrounds ? &ir->backgrounds[i] : NULL;
        if (bg) { bg->id = i; bg->status = GM82_RES_DECODED; }
        if (!b) continue;
        gmk_cur bc = { b, blen, 0, false };
        int32_t ex = cur_i32(&bc);
        if (ex) {
            char bname[64];
            cur_str_buf(&bc, bname, sizeof(bname));
            cur_f64(&bc); /* lastChanged */
            int32_t bv = cur_i32(&bc); (void)bv;
            int32_t is_ts = cur_i32(&bc);
            int32_t tw = cur_i32(&bc), th = cur_i32(&bc);
            int32_t ho = cur_i32(&bc), vo = cur_i32(&bc);
            int32_t hs = cur_i32(&bc), vs = cur_i32(&bc);
            int32_t iv = cur_i32(&bc); (void)iv;
            int32_t w = cur_i32(&bc), h = cur_i32(&bc);
            int32_t dlen = cur_i32(&bc);
            if (bg) {
                bg->name = strdup(bname);
                if (ir->background_names) ir->background_names[i] = strdup(bname);
                bg->tileset = is_ts != 0;
                bg->tile_width = tw; bg->tile_height = th;
                bg->tile_hoffset = ho; bg->tile_voffset = vo;
                bg->tile_hsep = hs; bg->tile_vsep = vs;
                bg->width = w; bg->height = h;
                if (w > 0 && h > 0 && dlen == w * h * 4 && !bc.err && bc.pos + (size_t)dlen <= bc.size) {
                    bg->rgba_size = (size_t)dlen;
                    bg->rgba = (uint8_t *)malloc((size_t)dlen);
                    if (bg->rgba) bgra_to_rgba(bc.buf + bc.pos, bg->rgba, (size_t)w * (size_t)h);
                }
            }
        }
        free(b);
    }

    /* 7. Paths */
    cur_i32(&c);
    int32_t npath = cur_i32(&c);
    if (c.err || npath < 0 || npath > 8192) { free(decrypted); return false; }
    for (int32_t i = 0; i < npath && !c.err; i++) {
        size_t blen = 0;
        uint8_t *b = cur_inflate_zblock(&c, &blen);
        if (!b) continue;
        gmk_cur bc = { b, blen, 0, false };
        int32_t ex = cur_i32(&bc);
        if (ex) {
            char pname[64];
            cur_str_buf(&bc, pname, sizeof(pname));
            cur_f64(&bc);
            int32_t pv = cur_i32(&bc); (void)pv;
            int32_t smooth = cur_i32(&bc); (void)smooth;
            int32_t closed = cur_i32(&bc);
            int32_t prec = cur_i32(&bc); (void)prec;
            cur_i32(&bc); /* background room */
            cur_i32(&bc); cur_i32(&bc); /* snap x/y */
            int32_t npts = cur_i32(&bc);
            int pid = gm82_path_add(&ir->decoded_paths, pname, closed);
            for (int32_t k = 0; k < npts && !bc.err; k++) {
                double px = cur_f64(&bc);
                double py = cur_f64(&bc);
                double pspd = cur_f64(&bc);
                if (pid >= 0) gm82_path_add_point(&ir->decoded_paths, pid, px, py, pspd);
            }
        }
        free(b);
    }

    /* 8. Scripts */
    cur_i32(&c);
    int32_t nscr = cur_i32(&c);
    if (c.err || nscr < 0 || nscr > 8192) { free(decrypted); return false; }
    ir->script_count = nscr;
    for (int32_t i = 0; i < nscr && !c.err; i++) {
        size_t blen = 0;
        uint8_t *b = cur_inflate_zblock(&c, &blen);
        if (!b) {
            gm82_script_add(&ir->decoded_scripts, "", "");
            continue;
        }
        gmk_cur bc = { b, blen, 0, false };
        int32_t ex = cur_i32(&bc);
        if (!ex) {
            gm82_script_add(&ir->decoded_scripts, "", "");
            free(b);
            continue;
        }
        char scname[64];
        cur_str_buf(&bc, scname, sizeof(scname));
        cur_f64(&bc);
        cur_i32(&bc); /* ver 800 */
        char *code = cur_str_alloc(&bc);
        gm82_script_add(&ir->decoded_scripts, scname, code ? code : "");
        if (code) scan_code_for_dlls(ir, code);
        free(code);
        free(b);
    }

    /* 9. Fonts */
    cur_i32(&c);
    int32_t nfnt = cur_i32(&c);
    if (c.err || nfnt < 0 || nfnt > 4096) { free(decrypted); return false; }
    if (nfnt > 0) {
        ir->decoded_fonts.items = (gm82_decoded_font *)calloc((size_t)nfnt, sizeof(gm82_decoded_font));
        ir->decoded_fonts.count = nfnt;
    }
    for (int32_t i = 0; i < nfnt && !c.err; i++) {
        size_t blen = 0;
        uint8_t *b = cur_inflate_zblock(&c, &blen);
        if (!b) continue;
        gmk_cur bc = { b, blen, 0, false };
        int32_t ex = cur_i32(&bc);
        if (ex && ir->decoded_fonts.items) {
            gm82_decoded_font *fn = &ir->decoded_fonts.items[i];
            cur_str_buf(&bc, fn->name, sizeof(fn->name));
            cur_f64(&bc);
            cur_i32(&bc); /* ver */
            cur_str_buf(&bc, fn->font_name, sizeof(fn->font_name));
            fn->size = cur_i32(&bc);
            fn->bold = cur_i32(&bc);
            fn->italic = cur_i32(&bc);
        }
        free(b);
    }

    /* 10. Timelines */
    cur_i32(&c);
    int32_t ntl = cur_i32(&c);
    if (c.err || ntl < 0 || ntl > 4096) { free(decrypted); return false; }
    for (int32_t i = 0; i < ntl && !c.err; i++) {
        size_t blen = 0;
        uint8_t *b = cur_inflate_zblock(&c, &blen);
        if (!b) continue;
        gmk_cur bc = { b, blen, 0, false };
        int32_t ex = cur_i32(&bc);
        if (ex) {
            char tlname[64];
            cur_str_buf(&bc, tlname, sizeof(tlname));
            cur_f64(&bc);
            cur_i32(&bc);
            int32_t nmom = cur_i32(&bc);
            int tid = gm82_timeline_add(&ir->decoded_timelines, tlname);
            for (int32_t m = 0; m < nmom && !bc.err; m++) {
                int32_t step = cur_i32(&bc);
                cur_i32(&bc); /* action ver 400 */
                int32_t nac = cur_i32(&bc);
                char combined[128] = {0};
                for (int32_t k = 0; k < nac && !bc.err; k++) {
                    gm82_decoded_action act;
                    if (parse_action(&bc, &act, ir)) {
                        const char *snippet = (act.exec_type == 2 && act.arg_strs[0]) ? act.arg_strs[0] : act.fn_code;
                        if (snippet && snippet[0] && !combined[0]) {
                            snprintf(combined, sizeof(combined), "%s", snippet);
                        }
                        gm82_decoded_action_free(&act);
                    }
                }
                if (tid >= 0) gm82_timeline_add_moment(&ir->decoded_timelines, tid, step, combined);
            }
        }
        free(b);
    }

    /* 11. Objects */
    cur_i32(&c);
    int32_t nobj = cur_i32(&c);
    if (c.err || nobj < 0 || nobj > 8192) { free(decrypted); return false; }
    ir->object_count = nobj;
    if (nobj > 0) {
        ir->decoded_objects.items = (gm82_decoded_object *)calloc((size_t)nobj, sizeof(gm82_decoded_object));
        ir->decoded_objects.count = nobj;
        ir->object_names = (char **)calloc((size_t)nobj, sizeof(char *));
        ir->object_name_count = nobj;
    }
    for (int32_t i = 0; i < nobj && !c.err; i++) {
        size_t blen = 0;
        uint8_t *b = cur_inflate_zblock(&c, &blen);
        gm82_decoded_object *o = ir->decoded_objects.items ? &ir->decoded_objects.items[i] : NULL;
        if (o) { o->sprite_index = -1; o->parent_index = -1; o->mask_index = -1; }
        if (!b || !o) { free(b); continue; }
        gmk_cur bc = { b, blen, 0, false };
        int32_t ex = cur_i32(&bc);
        if (!ex) { free(b); continue; }
        cur_str_buf(&bc, o->name, sizeof(o->name));
        if (ir->object_names) ir->object_names[i] = strdup(o->name);
        cur_f64(&bc);
        int32_t ov = cur_i32(&bc); (void)ov;
        o->sprite_index = cur_i32(&bc);
        o->solid = cur_i32(&bc);
        o->visible = cur_i32(&bc);
        o->depth = cur_i32(&bc);
        o->persistent = cur_i32(&bc);
        o->parent_index = cur_i32(&bc);
        o->mask_index = cur_i32(&bc);
        int32_t num_ev_types = cur_i32(&bc); (void)num_ev_types;
        for (int main = 0; main < 12 && !bc.err; main++) {
            while (!bc.err) {
                int32_t evn = cur_i32(&bc);
                if (evn == -1) break;
                int32_t ever = cur_i32(&bc); (void)ever;
                int32_t nac = cur_i32(&bc);
                gm82_decoded_event *ev = NULL;
                if (o->event_count < GM82_OBJ_EVENT_MAX) {
                    ev = &o->events[o->event_count++];
                    memset(ev, 0, sizeof(*ev));
                    ev->main_type = main;
                    ev->event_numb = evn;
                    ev->action_id0 = -1;
                    ev->action_arg0 = -1;
                    if (nac > 0) {
                        ev->actions = (gm82_decoded_action *)calloc((size_t)nac, sizeof(gm82_decoded_action));
                        ev->action_cap = ev->actions ? nac : 0;
                    }
                }
                int32_t stored = 0;
                for (int32_t k = 0; k < nac && !bc.err; k++) {
                    gm82_decoded_action tmp;
                    if (!parse_action(&bc, &tmp, ir)) break;
                    if (ev && ev->actions && stored < ev->action_cap) {
                        ev->actions[stored] = tmp;
                        if (stored == 0) {
                            ev->action_id0 = tmp.action_id;
                            if (tmp.fn_name[0]) snprintf(ev->action_name0, sizeof(ev->action_name0), "%s", tmp.fn_name);
                            if (tmp.arg_strs[0] && isdigit((unsigned char)tmp.arg_strs[0][0])) {
                                ev->action_arg0 = atoi(tmp.arg_strs[0]);
                            }
                        }
                        /* Also append code snippet if action is GML code (id 603 / exec_type == 2) */
                        const char *gml = (tmp.action_id == 603 && tmp.arg_strs[0]) ? tmp.arg_strs[0]
                                        : ((tmp.exec_type == 2 && tmp.fn_code) ? tmp.fn_code : NULL);
                        if (gml && gml[0] && !ev->code_snippet) {
                            ev->code_snippet = strdup(gml);
                        }
                        stored++;
                    } else {
                        gm82_decoded_action_free(&tmp);
                    }
                }
                if (ev) ev->action_count = stored;
            }
        }
        free(b);
    }

    /* 12. Rooms */
    cur_i32(&c);
    int32_t nrm = cur_i32(&c);
    if (c.err || nrm < 0 || nrm > 4096) { free(decrypted); return false; }
    for (int32_t i = 0; i < ir->room_count; i++) {
        free(ir->rooms[i].name);
        free(ir->rooms[i].caption);
        free(ir->rooms[i].creation_code);
        free(ir->rooms[i].background_ids);
        free(ir->rooms[i].background_visible);
        free(ir->rooms[i].background_foreground);
        free(ir->rooms[i].background_x);
        free(ir->rooms[i].background_y);
        free(ir->rooms[i].background_htiled);
        free(ir->rooms[i].background_vtiled);
        free(ir->rooms[i].background_hspeed);
        free(ir->rooms[i].background_vspeed);
        free(ir->rooms[i].background_stretch);
        free(ir->rooms[i].views);
        if (ir->rooms[i].instances) {
            for (int32_t k = 0; k < ir->rooms[i].instance_count; k++) free(ir->rooms[i].instances[k].creation_code);
            free(ir->rooms[i].instances);
        }
        free(ir->rooms[i].tiles);
    }
    free(ir->rooms);
    ir->room_count = nrm;
    ir->rooms = nrm > 0 ? (gm82_res_room *)calloc((size_t)nrm, sizeof(gm82_res_room)) : NULL;

    for (int32_t i = 0; i < nrm && !c.err; i++) {
        size_t blen = 0;
        uint8_t *b = cur_inflate_zblock(&c, &blen);
        gm82_res_room *r = ir->rooms ? &ir->rooms[i] : NULL;
        if (r) { r->id = i; r->status = GM82_RES_DECODED; }
        if (!b || !r) { free(b); continue; }
        gmk_cur bc = { b, blen, 0, false };
        int32_t ex = cur_i32(&bc);
        if (!ex) { free(b); continue; }
        r->name = cur_str_alloc(&bc);
        cur_f64(&bc);
        int32_t rv = cur_i32(&bc);
        r->caption = cur_str_alloc(&bc);
        r->width = cur_i32(&bc);
        r->height = cur_i32(&bc);
        r->snap_x = cur_i32(&bc);
        r->snap_y = cur_i32(&bc);
        r->isometric = cur_i32(&bc) != 0;
        r->speed = cur_i32(&bc);
        r->persistent = cur_i32(&bc) != 0;
        r->background_color = cur_i32(&bc);
        r->draw_background_color = cur_i32(&bc) != 0;
        r->creation_code = cur_str_alloc(&bc);
        if (r->creation_code) scan_code_for_dlls(ir, r->creation_code);

        int32_t nrb = cur_i32(&bc);
        if (nrb > 0 && nrb <= 32) {
            r->background_count = nrb;
            r->background_ids = (int32_t *)calloc((size_t)nrb, sizeof(int32_t));
            r->background_visible = (bool *)calloc((size_t)nrb, sizeof(bool));
            r->background_foreground = (bool *)calloc((size_t)nrb, sizeof(bool));
            r->background_x = (int32_t *)calloc((size_t)nrb, sizeof(int32_t));
            r->background_y = (int32_t *)calloc((size_t)nrb, sizeof(int32_t));
            r->background_htiled = (bool *)calloc((size_t)nrb, sizeof(bool));
            r->background_vtiled = (bool *)calloc((size_t)nrb, sizeof(bool));
            r->background_hspeed = (int32_t *)calloc((size_t)nrb, sizeof(int32_t));
            r->background_vspeed = (int32_t *)calloc((size_t)nrb, sizeof(int32_t));
            r->background_stretch = (bool *)calloc((size_t)nrb, sizeof(bool));
            for (int32_t bi = 0; bi < nrb && !bc.err; bi++) {
                r->background_visible[bi] = cur_i32(&bc) != 0;
                r->background_foreground[bi] = cur_i32(&bc) != 0;
                r->background_ids[bi] = cur_i32(&bc);
                r->background_x[bi] = cur_i32(&bc);
                r->background_y[bi] = cur_i32(&bc);
                r->background_htiled[bi] = cur_i32(&bc) != 0;
                r->background_vtiled[bi] = cur_i32(&bc) != 0;
                r->background_hspeed[bi] = cur_i32(&bc);
                r->background_vspeed[bi] = cur_i32(&bc);
                r->background_stretch[bi] = cur_i32(&bc) != 0;
            }
        }
        r->views_enabled = cur_i32(&bc) != 0;
        int32_t nviews = cur_i32(&bc);
        if (nviews > 0 && nviews <= 16) {
            r->view_count = nviews;
            r->views = (gm82_room_view *)calloc((size_t)nviews, sizeof(gm82_room_view));
            for (int32_t vi = 0; vi < nviews && !bc.err; vi++) {
                r->views[vi].visible = cur_i32(&bc) != 0;
                r->views[vi].view_x = cur_i32(&bc);
                r->views[vi].view_y = cur_i32(&bc);
                r->views[vi].view_w = cur_i32(&bc);
                r->views[vi].view_h = cur_i32(&bc);
                r->views[vi].port_x = cur_i32(&bc);
                r->views[vi].port_y = cur_i32(&bc);
                r->views[vi].port_w = cur_i32(&bc);
                r->views[vi].port_h = cur_i32(&bc);
                r->views[vi].border_h = cur_i32(&bc);
                r->views[vi].border_v = cur_i32(&bc);
                r->views[vi].hspeed = cur_i32(&bc);
                r->views[vi].vspeed = cur_i32(&bc);
                r->views[vi].object_following = cur_i32(&bc);
            }
        }
        int32_t ninst = cur_i32(&bc);
        if (ninst > 0 && ninst <= 65535) {
            r->instance_count = ninst;
            r->instances = (gm82_room_instance *)calloc((size_t)ninst, sizeof(gm82_room_instance));
            for (int32_t k = 0; k < ninst && !bc.err; k++) {
                r->instances[k].x = (double)cur_i32(&bc);
                r->instances[k].y = (double)cur_i32(&bc);
                r->instances[k].object_id = cur_i32(&bc);
                r->instances[k].id = cur_i32(&bc);
                r->instances[k].creation_code = cur_str_alloc(&bc);
                if (r->instances[k].creation_code) scan_code_for_dlls(ir, r->instances[k].creation_code);
                r->instances[k].locked = cur_i32(&bc) != 0;
                r->instances[k].xscale = 1.0;
                r->instances[k].yscale = 1.0;
                r->instances[k].blend = 0xffffff;
            }
        }
        int32_t ntile = cur_i32(&bc);
        if (ntile > 0 && ntile <= 65535) {
            r->tile_count = ntile;
            r->tiles = (gm82_room_tile *)calloc((size_t)ntile, sizeof(gm82_room_tile));
            for (int32_t k = 0; k < ntile && !bc.err; k++) {
                r->tiles[k].x = cur_i32(&bc);
                r->tiles[k].y = cur_i32(&bc);
                r->tiles[k].background_id = cur_i32(&bc);
                r->tiles[k].src_x = cur_i32(&bc);
                r->tiles[k].src_y = cur_i32(&bc);
                r->tiles[k].width = cur_i32(&bc);
                r->tiles[k].height = cur_i32(&bc);
                r->tiles[k].depth = cur_i32(&bc);
                r->tiles[k].id = cur_i32(&bc);
                r->tiles[k].locked = cur_i32(&bc) != 0;
                r->tiles[k].xscale = 1.0;
                r->tiles[k].yscale = 1.0;
                r->tiles[k].blend = 0xffffff;
            }
        }
        (void)rv;
        free(b);
    }

    /* 13. Trailing sections: last IDs, included files, extensions */
    if (!c.err && c.pos + 8 <= c.size) {
        cur_i32(&c); /* last_instance_id */
        cur_i32(&c); /* last_tile_id */
        if (c.pos + 8 <= c.size) {
            cur_i32(&c); /* includes ver */
            int32_t ninc = cur_i32(&c);
            if (!c.err && ninc >= 0 && ninc <= 2048) {
                for (int32_t i = 0; i < ninc && !c.err; i++) {
                    size_t blen = 0;
                    uint8_t *b = cur_inflate_zblock(&c, &blen);
                    if (b) {
                        gmk_cur bc = { b, blen, 0, false };
                        cur_f64(&bc);
                        cur_i32(&bc);
                        char *fname = cur_str_alloc(&bc);
                        if (fname) {
                            const char *ext = strrchr(fname, '.');
                            if (ext && strcasecmp(ext, ".dll") == 0) record_dll_name(ir, fname);
                            free(fname);
                        }
                        free(b);
                    }
                }
            }
        }
        if (!c.err && c.pos + 8 <= c.size) {
            cur_i32(&c); /* ext ver */
            int32_t nexts = cur_i32(&c);
            if (!c.err && nexts >= 0 && nexts <= 512) {
                ir->extension_count = nexts;
                ir->extension_names = nexts > 0 ? (char **)calloc((size_t)nexts, sizeof(char *)) : NULL;
                for (int32_t i = 0; i < nexts && !c.err; i++) {
                    char *ename = cur_str_alloc(&c);
                    if (ir->extension_names) ir->extension_names[i] = ename;
                    else free(ename);
                }
            }
        }
    }

    free(decrypted);
    (void)decompress_direct_zlib;
    return !c.err && ir->room_count > 0;
}
