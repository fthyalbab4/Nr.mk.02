#define _POSIX_C_SOURCE 200809L
#include "gm82_gl_textures.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#if (defined(__ANDROID__) || defined(GM82_HAVE_GLES)) && !defined(GM82_HOST_TEST)
#include <GLES2/gl2.h>
#endif

void gm82_gl_atlas_init(gm82_gl_atlas *a) {
    if (!a) return;
    memset(a, 0, sizeof(*a));
}

void gm82_gl_invalidate_handles(gm82_gl_atlas *a) {
    if (!a) return;
    free(a->sprites);
    free(a->backgrounds);
    free(a->entries);
    memset(a, 0, sizeof(*a));
}

void gm82_gl_atlas_free(gm82_gl_atlas *a) {
    if (!a) return;
#if (defined(__ANDROID__) || defined(GM82_HAVE_GLES)) && !defined(GM82_HOST_TEST)
    if (a->sprites) {
        for (int i = 0; i < a->sprite_count; i++) {
            if (a->sprites[i].tex_id != 0) {
                GLuint id = (GLuint)a->sprites[i].tex_id;
                glDeleteTextures(1, &id);
            }
        }
    }
    if (a->backgrounds) {
        for (int i = 0; i < a->background_count; i++) {
            if (a->backgrounds[i].tex_id != 0) {
                GLuint id = (GLuint)a->backgrounds[i].tex_id;
                glDeleteTextures(1, &id);
            }
        }
    }
#endif
    gm82_gl_invalidate_handles(a);
}

bool gm82_gl_atlas_build_grid(gm82_gl_atlas *a, const gm82_decoded_sprite_list *sprites, int32_t max_atlas_dim) {
    if (!a || !sprites || sprites->count <= 0) return false;
    if (max_atlas_dim < 256) max_atlas_dim = 2048;

    free(a->entries);
    a->entries = (gm82_gl_atlas_entry *)calloc((size_t)sprites->count, sizeof(gm82_gl_atlas_entry));
    if (!a->entries) return false;
    a->entry_count = sprites->count;

    int32_t cur_x = 0, cur_y = 0, row_h = 0;
    int32_t atlas_w = 0, atlas_h = 0;

    for (int i = 0; i < sprites->count; i++) {
        int32_t sw = sprites->frames[i].width;
        int32_t sh = sprites->frames[i].height;
        if (sw <= 0 || sh <= 0) continue;

        if (cur_x + sw > max_atlas_dim) {
            cur_x = 0;
            cur_y += row_h;
            row_h = 0;
        }

        a->entries[i].sprite_index = i;
        a->entries[i].x = cur_x;
        a->entries[i].y = cur_y;
        a->entries[i].w = sw;
        a->entries[i].h = sh;

        cur_x += sw;
        if (sh > row_h) row_h = sh;
        if (cur_x > atlas_w) atlas_w = cur_x;
        if (cur_y + row_h > atlas_h) atlas_h = cur_y + row_h;
    }

    a->atlas_width = atlas_w > 0 ? atlas_w : 1;
    a->atlas_height = atlas_h > 0 ? atlas_h : 1;

    for (int i = 0; i < sprites->count; i++) {
        if (a->entries[i].w <= 0 || a->entries[i].h <= 0) continue;
        a->entries[i].u1 = (float)a->entries[i].x / (float)a->atlas_width;
        a->entries[i].v1 = (float)a->entries[i].y / (float)a->atlas_height;
        a->entries[i].u2 = (float)(a->entries[i].x + a->entries[i].w) / (float)a->atlas_width;
        a->entries[i].v2 = (float)(a->entries[i].y + a->entries[i].h) / (float)a->atlas_height;
    }

    return true;
}

bool gm82_gl_upload_sprites(gm82_gl_atlas *a, const gm82_decoded_sprite_list *sprites) {
    if (!a || !sprites || sprites->count <= 0) return false;
#if (defined(__ANDROID__) || defined(GM82_HAVE_GLES)) && !defined(GM82_HOST_TEST)
    if (a->sprites) {
        for (int i = 0; i < a->sprite_count; i++) {
            if (a->sprites[i].tex_id != 0) {
                GLuint old_id = (GLuint)a->sprites[i].tex_id;
                glDeleteTextures(1, &old_id);
            }
        }
    }
#endif
    free(a->sprites);
    a->sprites = (gm82_gl_texture *)calloc((size_t)sprites->count, sizeof(gm82_gl_texture));
    if (!a->sprites) {
        a->sprite_count = 0;
        return false;
    }
    a->sprite_count = sprites->count;

    for (int i = 0; i < sprites->count; i++) {
        a->sprites[i].width = sprites->frames[i].width;
        a->sprites[i].height = sprites->frames[i].height;
#if (defined(__ANDROID__) || defined(GM82_HAVE_GLES)) && !defined(GM82_HOST_TEST)
        if (sprites->frames[i].rgba && sprites->frames[i].width > 0 && sprites->frames[i].height > 0) {
            GLuint id = 0;
            glGenTextures(1, &id);
            glBindTexture(GL_TEXTURE_2D, id);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA,
                         sprites->frames[i].width, sprites->frames[i].height,
                         0, GL_RGBA, GL_UNSIGNED_BYTE, sprites->frames[i].rgba);
            a->sprites[i].tex_id = (uint32_t)id;
        } else {
            a->sprites[i].tex_id = 0;
        }
#else
        a->sprites[i].tex_id = (uint32_t)(i + 1000);
#endif
    }
    a->ready = 1;
    return true;
}

bool gm82_gl_atlas_get_region(const gm82_gl_atlas *a, int sprite_index, gm82_texture_region *out_region) {
    if (!a || !out_region || !a->sprites || sprite_index < 0 || sprite_index >= a->sprite_count)
        return false;
    const gm82_gl_texture *tex = &a->sprites[sprite_index];
    out_region->tex_id = tex->tex_id;
    out_region->u0 = 0.0f;
    out_region->v0 = 0.0f;
    out_region->u1 = 1.0f;
    out_region->v1 = 1.0f;
    out_region->width = tex->width;
    out_region->height = tex->height;
    return true;
}

bool gm82_gl_upload_backgrounds(gm82_gl_atlas *a, const gm82_decoded_background_list *bgs) {
    if (!a || !bgs || bgs->count <= 0) return false;
#if (defined(__ANDROID__) || defined(GM82_HAVE_GLES)) && !defined(GM82_HOST_TEST)
    if (a->backgrounds) {
        for (int i = 0; i < a->background_count; i++) {
            if (a->backgrounds[i].tex_id != 0) {
                GLuint old_id = (GLuint)a->backgrounds[i].tex_id;
                glDeleteTextures(1, &old_id);
            }
        }
    }
#endif
    free(a->backgrounds);
    a->backgrounds = (gm82_gl_texture *)calloc((size_t)bgs->count, sizeof(gm82_gl_texture));
    if (!a->backgrounds) {
        a->background_count = 0;
        return false;
    }
    a->background_count = bgs->count;

    for (int i = 0; i < bgs->count; i++) {
        a->backgrounds[i].width = bgs->items[i].width;
        a->backgrounds[i].height = bgs->items[i].height;
#if (defined(__ANDROID__) || defined(GM82_HAVE_GLES)) && !defined(GM82_HOST_TEST)
        if (bgs->items[i].rgba && bgs->items[i].width > 0 && bgs->items[i].height > 0) {
            GLuint id = 0;
            glGenTextures(1, &id);
            glBindTexture(GL_TEXTURE_2D, id);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA,
                         bgs->items[i].width, bgs->items[i].height,
                         0, GL_RGBA, GL_UNSIGNED_BYTE, bgs->items[i].rgba);
            a->backgrounds[i].tex_id = (uint32_t)id;
        } else {
            a->backgrounds[i].tex_id = 0;
        }
#else
        a->backgrounds[i].tex_id = (uint32_t)(i + 2000);
#endif
    }
    return true;
}

static float g_ortho_mvp[16] = {
    1.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 1.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 1.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 1.0f
};
static const float g_identity_mvp[16] = {
    1.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 1.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 1.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 1.0f
};

void gm82_gl_begin_ortho(float left, float top, float right, float bottom) {
    float rl = (right - left);
    float tb = (top - bottom);
    if (fabsf(rl) < 1e-5f) rl = 1.0f;
    if (fabsf(tb) < 1e-5f) tb = 1.0f;
    memset(g_ortho_mvp, 0, sizeof(g_ortho_mvp));
    /* Column-major 2D top-down ortho matrix matching OpenGL ES uniformMatrix4fv(transpose=GL_FALSE) */
    g_ortho_mvp[0]  = 2.0f / rl;
    g_ortho_mvp[5]  = 2.0f / tb;
    g_ortho_mvp[10] = -1.0f;
    g_ortho_mvp[12] = -(right + left) / rl;
    g_ortho_mvp[13] = -(top + bottom) / tb;
    g_ortho_mvp[15] = 1.0f;
}

#if (defined(__ANDROID__) || defined(GM82_HAVE_GLES)) && !defined(GM82_HOST_TEST)
static GLuint g_gl_program = 0;
static GLint  g_gl_u_tex = -1;
static GLint  g_gl_u_mvp = -1;
static GLint  g_gl_u_color = -1;
static GLuint g_stream_tex = 0;
static int    g_stream_w = 0;
static int    g_stream_h = 0;
static GLuint g_overlay_tex = 0;
static int    g_overlay_w = 0;
static int    g_overlay_h = 0;

static GLuint compile_shader(GLenum type, const char *src) {
    GLuint s = glCreateShader(type);
    if (!s) return 0;
    glShaderSource(s, 1, &src, NULL);
    glCompileShader(s);
    GLint ok = 0;
    glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        glDeleteShader(s);
        return 0;
    }
    return s;
}

static bool ensure_gles2_program(void) {
    if (g_gl_program != 0) return true;
    static const char *kVertSrc =
        "attribute vec2 aPos;\n"
        "attribute vec2 aTex;\n"
        "uniform mat4 uMVP;\n"
        "varying vec2 vTex;\n"
        "void main() {\n"
        "  gl_Position = uMVP * vec4(aPos, 0.0, 1.0);\n"
        "  vTex = aTex;\n"
        "}\n";
    static const char *kFragSrc =
        "precision mediump float;\n"
        "varying vec2 vTex;\n"
        "uniform sampler2D uTex;\n"
        "uniform vec4 uColor;\n"
        "void main() {\n"
        "  gl_FragColor = texture2D(uTex, vTex) * uColor;\n"
        "}\n";
    GLuint vs = compile_shader(GL_VERTEX_SHADER, kVertSrc);
    GLuint fs = compile_shader(GL_FRAGMENT_SHADER, kFragSrc);
    if (!vs || !fs) {
        if (vs) glDeleteShader(vs);
        if (fs) glDeleteShader(fs);
        return false;
    }
    GLuint prog = glCreateProgram();
    glAttachShader(prog, vs);
    glAttachShader(prog, fs);
    glBindAttribLocation(prog, 0, "aPos");
    glBindAttribLocation(prog, 1, "aTex");
    glLinkProgram(prog);
    glDeleteShader(vs);
    glDeleteShader(fs);
    GLint linked = 0;
    glGetProgramiv(prog, GL_LINK_STATUS, &linked);
    if (!linked) {
        glDeleteProgram(prog);
        return false;
    }
    g_gl_program = prog;
    g_gl_u_tex = glGetUniformLocation(prog, "uTex");
    g_gl_u_mvp = glGetUniformLocation(prog, "uMVP");
    g_gl_u_color = glGetUniformLocation(prog, "uColor");
    return true;
}

static void bgr_to_rgba_float(uint32_t bgr, float alpha, float out[4]) {
    uint32_t c = bgr & 0xFFFFFFu;
    if (c == 0u) c = 0xFFFFFFu; /* 0 = unset default tint in GM decoded rooms/objects; black tint is rarely passed, 0xFFFFFF is white */
    out[0] = (float)(c & 0xFFu) / 255.0f;
    out[1] = (float)((c >> 8) & 0xFFu) / 255.0f;
    out[2] = (float)((c >> 16) & 0xFFu) / 255.0f;
    if (alpha < 0.0f) alpha = 0.0f;
    if (alpha > 1.0f) alpha = 1.0f;
    out[3] = alpha;
}

static bool draw_quad_with_uniforms(uint32_t tex_id, const float verts[16], const float mvp[16], const float color[4]) {
    if (tex_id == 0) return false;
    if (!ensure_gles2_program()) return false;
    glUseProgram(g_gl_program);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, (GLuint)tex_id);
    if (g_gl_u_tex >= 0) glUniform1i(g_gl_u_tex, 0);
    if (g_gl_u_mvp >= 0) glUniformMatrix4fv(g_gl_u_mvp, 1, GL_FALSE, mvp);
    if (g_gl_u_color >= 0) glUniform4fv(g_gl_u_color, 1, color);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), verts);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), verts + 2);
    glEnableVertexAttribArray(1);
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
    return true;
}
#endif

void gm82_gl_reset_program(void) {
#if (defined(__ANDROID__) || defined(GM82_HAVE_GLES)) && !defined(GM82_HOST_TEST)
    g_gl_program = 0;
    g_gl_u_tex = -1;
    g_gl_u_mvp = -1;
    g_gl_u_color = -1;
    g_stream_tex = 0;
    g_stream_w = 0;
    g_stream_h = 0;
    g_overlay_tex = 0;
    g_overlay_w = 0;
    g_overlay_h = 0;
#endif
}

bool gm82_gl_draw_sprite_quad(uint32_t tex_id, float x, float y, float w, float h,
                              float ox, float oy, float xscale, float yscale,
                              float angle_deg, uint32_t bgr_color, float alpha) {
    if (tex_id == 0 || w <= 0.0f || h <= 0.0f || xscale == 0.0f || yscale == 0.0f || alpha <= 0.0f) {
        return false;
    }
    float lx0 = -ox * xscale;
    float ly0 = -oy * yscale;
    float lx1 = (w - ox) * xscale;
    float ly1 = (h - oy) * yscale;

    float cs = 1.0f, sn = 0.0f;
    if (angle_deg != 0.0f) {
        double rad = (double)angle_deg * (M_PI / 180.0);
        cs = (float)cos(rad);
        sn = (float)sin(rad);
    }

    float x00 = x + lx0 * cs + ly0 * sn;
    float y00 = y - lx0 * sn + ly0 * cs;
    float x10 = x + lx1 * cs + ly0 * sn;
    float y10 = y - lx1 * sn + ly0 * cs;
    float x01 = x + lx0 * cs + ly1 * sn;
    float y01 = y - lx0 * sn + ly1 * cs;
    float x11 = x + lx1 * cs + ly1 * sn;
    float y11 = y - lx1 * sn + ly1 * cs;

    float verts[16] = {
        x00, y00, 0.0f, 0.0f,
        x10, y10, 1.0f, 0.0f,
        x01, y01, 0.0f, 1.0f,
        x11, y11, 1.0f, 1.0f
    };

#if (defined(__ANDROID__) || defined(GM82_HAVE_GLES)) && !defined(GM82_HOST_TEST)
    float color[4];
    bgr_to_rgba_float(bgr_color, alpha, color);
    return draw_quad_with_uniforms(tex_id, verts, g_ortho_mvp, color);
#else
    (void)verts; (void)bgr_color; (void)alpha;
    return true;
#endif
}

bool gm82_gl_draw_region_quad(uint32_t tex_id, float x, float y, float w, float h,
                              float u0, float v0, float u1, float v1,
                              uint32_t bgr_color, float alpha) {
    if (tex_id == 0 || w == 0.0f || h == 0.0f || alpha <= 0.0f) return false;
    float verts[16] = {
        x,     y,     u0, v0,
        x + w, y,     u1, v0,
        x,     y + h, u0, v1,
        x + w, y + h, u1, v1
    };
#if (defined(__ANDROID__) || defined(GM82_HAVE_GLES)) && !defined(GM82_HOST_TEST)
    float color[4];
    bgr_to_rgba_float(bgr_color, alpha, color);
    return draw_quad_with_uniforms(tex_id, verts, g_ortho_mvp, color);
#else
    (void)verts; (void)bgr_color; (void)alpha;
    return true;
#endif
}

bool gm82_gl_draw_texture(uint32_t tex_id, float x, float y, float w, float h) {
    if (tex_id == 0) return false;

    /* Quad vertex attributes layout: {x, y, u, v}.
       NDC y is bottom-to-top while RGBA textures are top-to-bottom. */
    float verts[16] = {
        x,     y,     0.0f, 1.0f,
        x + w, y,     1.0f, 1.0f,
        x,     y + h, 0.0f, 0.0f,
        x + w, y + h, 1.0f, 0.0f
    };

#if (defined(__ANDROID__) || defined(GM82_HAVE_GLES)) && !defined(GM82_HOST_TEST)
    static const float kWhite[4] = {1.0f, 1.0f, 1.0f, 1.0f};
    return draw_quad_with_uniforms(tex_id, verts, g_identity_mvp, kWhite);
#else
    (void)verts;
    return true;
#endif
}

bool gm82_gl_draw_rgba_fullscreen(const uint8_t *rgba, int width, int height) {
    if (!rgba || width <= 0 || height <= 0) return false;
#if (defined(__ANDROID__) || defined(GM82_HAVE_GLES)) && !defined(GM82_HOST_TEST)
    if (!ensure_gles2_program()) return false;
    if (g_stream_tex == 0) {
        glGenTextures(1, &g_stream_tex);
        g_stream_w = 0;
        g_stream_h = 0;
    }
    if (g_stream_tex == 0) return false;
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, g_stream_tex);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    if (g_stream_w != width || g_stream_h != height) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
        g_stream_w = width;
        g_stream_h = height;
    } else {
        glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, width, height, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
    }
    return gm82_gl_draw_texture((uint32_t)g_stream_tex, -1.0f, -1.0f, 2.0f, 2.0f);
#else
    return true;
#endif
}

bool gm82_gl_draw_rgba_overlay(const uint8_t *rgba, int width, int height) {
    if (!rgba || width <= 0 || height <= 0) return false;
#if (defined(__ANDROID__) || defined(GM82_HAVE_GLES)) && !defined(GM82_HOST_TEST)
    if (!ensure_gles2_program()) return false;
    if (g_overlay_tex == 0) {
        glGenTextures(1, &g_overlay_tex);
        g_overlay_w = 0;
        g_overlay_h = 0;
    }
    if (g_overlay_tex == 0) return false;
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, g_overlay_tex);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    if (g_overlay_w != width || g_overlay_h != height) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
        g_overlay_w = width;
        g_overlay_h = height;
    } else {
        glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, width, height, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
    }
    return gm82_gl_draw_texture((uint32_t)g_overlay_tex, -1.0f, -1.0f, 2.0f, 2.0f);
#else
    return true;
#endif
}
