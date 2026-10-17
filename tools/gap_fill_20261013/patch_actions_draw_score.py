#!/usr/bin/env python3
"""Fill action_draw_background/text/score paths. Idempotent."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
p = ROOT / "app/src/main/cpp/src/gm82_actions.c"
t = p.read_text()
old = '''    if (strcmp(name, "action_draw_background") == 0) {
        /* unimplemented: action_draw_background */
        return true;
    }
    if (strcmp(name, "action_draw_text") == 0) {
        /* unimplemented: action_draw_text */
        return true;
    }
    if (strcmp(name, "action_draw_score") == 0 || strcmp(name, "action_draw_lives") == 0 ||
        strcmp(name, "action_draw_health") == 0) {
        /* unimplemented: action_draw_* */
        return true;
    }'''
new = '''    if (strcmp(name, "action_draw_background") == 0) {
        gml_draw_background(0, self->x, self->y);
        return true;
    }
    if (strcmp(name, "action_draw_text") == 0) {
        gml_draw_text(self->x, self->y, "");
        return true;
    }
    if (strcmp(name, "action_draw_score") == 0 || strcmp(name, "action_draw_lives") == 0 ||
        strcmp(name, "action_draw_health") == 0) {
        char buf[64];
        if (strstr(name, "score")) snprintf(buf, sizeof(buf), "%g", gml_get_score());
        else if (strstr(name, "lives")) snprintf(buf, sizeof(buf), "%g", gml_get_lives());
        else snprintf(buf, sizeof(buf), "%g", gml_get_health());
        gml_draw_text(self->x, self->y, buf);
        return true;
    }'''
if old in t:
    t = t.replace(old, new, 1)
    print("named draw")
old_ref = '''    if (strcmp(ar->name, "action_draw_sprite") == 0) {
        /* unimplemented: action_draw_sprite */
        return true;
    }
    if (strcmp(ar->name, "action_draw_background") == 0) {
        /* unimplemented: action_draw_background */
        return true;
    }
    if (strcmp(ar->name, "action_draw_text") == 0) {
        /* unimplemented: action_draw_text */
        return true;
    }
    if (strcmp(ar->name, "action_draw_score") == 0 || strcmp(ar->name, "action_draw_lives") == 0 ||
        strcmp(ar->name, "action_draw_health") == 0) {
        /* unimplemented: action_draw_* */
        return true;
    }'''
new_ref = '''    if (strcmp(ar->name, "action_draw_sprite") == 0) {
        int spr = ar->action_id >= 0 ? ar->action_id : self->sprite_index;
        if (spr >= 0) gml_draw_sprite((double)spr, self->x, self->y);
        return true;
    }
    if (strcmp(ar->name, "action_draw_background") == 0) {
        int bg = ar->action_id >= 0 ? ar->action_id : 0;
        gml_draw_background((double)bg, self->x, self->y);
        return true;
    }
    if (strcmp(ar->name, "action_draw_text") == 0) {
        gml_draw_text(self->x, self->y, "");
        return true;
    }
    if (strcmp(ar->name, "action_draw_score") == 0 || strcmp(ar->name, "action_draw_lives") == 0 ||
        strcmp(ar->name, "action_draw_health") == 0) {
        char buf[64];
        if (strstr(ar->name, "score")) snprintf(buf, sizeof(buf), "%g", gml_get_score());
        else if (strstr(ar->name, "lives")) snprintf(buf, sizeof(buf), "%g", gml_get_lives());
        else snprintf(buf, sizeof(buf), "%g", gml_get_health());
        gml_draw_text(self->x, self->y, buf);
        return true;
    }'''
if old_ref in t:
    t = t.replace(old_ref, new_ref, 1)
    print("ref draw")
p.write_text(t)
print("PATCH_ACTIONS_DRAW_SCORE_OK")
