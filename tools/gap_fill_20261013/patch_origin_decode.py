#!/usr/bin/env python3
"""Idempotent: enable origin decode in gm82_sprite_decode.c"""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
p = ROOT / "app/src/main/cpp/src/gm82_sprite_decode.c"
t = p.read_text()
if "origin_x = origin_x" in t and "Heuristic: GM sprite origin" in t:
    print("origin decode already present")
    raise SystemExit(0)
old = """static bool list_push(gm82_decoded_sprite_list *L, const char *name,
                      int32_t w, int32_t h, const uint8_t *bgra, size_t bgra_len) {"""
new = """static bool list_push(gm82_decoded_sprite_list *L, const char *name,
                      int32_t w, int32_t h, int32_t origin_x, int32_t origin_y,
                      const uint8_t *bgra, size_t bgra_len) {"""
if old not in t:
    raise SystemExit("list_push not found")
t = t.replace(old, new, 1)
old_wh = """    f->width = w;\n    f->height = h;\n    f->rgba_size = bgra_len;"""
new_wh = """    f->width = w;\n    f->height = h;\n    f->origin_x = origin_x;\n    f->origin_y = origin_y;\n    f->rgba_size = bgra_len;"""
t = t.replace(old_wh, new_wh, 1)
old_call = """        list_push(L, name, w, h, d + pix_off, (size_t)dlen);
        j = pix_off + (size_t)dlen - 1; /* skip past frame */"""
new_call = """        /* Heuristic: GM sprite origin often sits as two int32 before version tag. */
        int32_t ox = 0, oy = 0;
        if (j >= 8) {
            int32_t a = rd_i32(d + j - 8);
            int32_t b = rd_i32(d + j - 4);
            if (a >= 0 && a <= w && b >= 0 && b <= h) {
                ox = a; oy = b;
            } else if (j >= 16) {
                for (size_t back = 8; back <= 48 && back + 4 <= j; back += 4) {
                    int32_t xa = rd_i32(d + j - back - 4);
                    int32_t yb = rd_i32(d + j - back);
                    if (xa >= 0 && xa <= w && yb >= 0 && yb <= h) {
                        ox = xa; oy = yb;
                        break;
                    }
                }
            }
        }
        list_push(L, name, w, h, ox, oy, d + pix_off, (size_t)dlen);
        j = pix_off + (size_t)dlen - 1; /* skip past frame */"""
if old_call not in t:
    raise SystemExit("list_push call not found")
t = t.replace(old_call, new_call, 1)
p.write_text(t)
print("PATCH_ORIGIN_DECODE_OK")
