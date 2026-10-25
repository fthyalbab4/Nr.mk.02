#define _POSIX_C_SOURCE 200809L
#include "gm82_gl_textures.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#if defined(__ANDROID__) || defined(GM82_HAVE_GLES)
#include <GLES2/gl2.h>
#endif

void gm82_gl_atlas_init(gm82_gl_atlas *a) {
    memset(a, 0, sizeof(*a));
}

void gm82_gl_atlas_free(gm82_gl_atlas *a) {
    if (!a) return;
#if defined(__ANDROID__) || defined(GM82_HAVE_GLES)
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
    free(a->sprites);
    free(a->backgrounds);
    free(a->entries);
    memset(a, 0, sizeof(*a));
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
    free(a->sprites);
    a->sprites = (gm82_gl_texture *)calloc((size_t)sprites->count, sizeof(gm82_gl_texture));
    if (!a->sprites) return false;
    a->sprite_count = sprites->count;

    for (int i = 0; i < sprites->count; i++) {
        a->sprites[i].width = sprites->frames[i].width;
        a->sprites[i].height = sprites->frames[i].height;
#if defined(__ANDROID__) || defined(GM82_HAVE_GLES)
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
            a->sprites[i].tex_id = (uint32_t)(i + 1000);
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
    free(a->backgrounds);
    a->backgrounds = (gm82_gl_texture *)calloc((size_t)bgs->count, sizeof(gm82_gl_texture));
    if (!a->backgrounds) return false;
    a->background_count = bgs->count;

    for (int i = 0; i < bgs->count; i++) {
        a->backgrounds[i].width = bgs->items[i].width;
        a->backgrounds[i].height = bgs->items[i].height;
#if defined(__ANDROID__) || defined(GM82_HAVE_GLES)
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
            a->backgrounds[i].tex_id = (uint32_t)(i + 2000);
        }
#else
        a->backgrounds[i].tex_id = (uint32_t)(i + 2000);
#endif
    }
    return true;
}

bool gm82_gl_draw_texture(uint32_t tex_id, float x, float y, float w, float h) {
    if (tex_id == 0) return false;

    /* Quad vertex attributes layout: {x, y, u, v} */
    float verts[16] = {
        x,     y,     0.0f, 0.0f,
        x + w, y,     1.0f, 0.0f,
        x,     y + h, 0.0f, 1.0f,
        x + w, y + h, 1.0f, 1.0f
    };
    (void)verts;

#if defined(__ANDROID__) || defined(GM82_HAVE_GLES)
    glBindTexture(GL_TEXTURE_2D, (GLuint)tex_id);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), verts);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), verts + 2);
    glEnableVertexAttribArray(1);
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
    return true;
#else
    return true;
#endif
}
