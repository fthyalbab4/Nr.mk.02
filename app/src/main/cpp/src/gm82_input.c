#define _POSIX_C_SOURCE 200809L
#include "gm82_input.h"
#include <string.h>

static gm82_input_state *g_input = NULL;
static char g_keyboard_string[256];
static int g_mouse_lastbutton = 0;

void gm82_input_bind_global(gm82_input_state *in) { g_input = in; }

void gm82_input_init(gm82_input_state *in) {
    memset(in, 0, sizeof(*in));
}

void gm82_input_begin_frame(gm82_input_state *in) {
    if (!in) return;
    memset(in->pressed, 0, sizeof(in->pressed));
    memset(in->released, 0, sizeof(in->released));
    memset(in->mouse_pressed, 0, sizeof(in->mouse_pressed));
    memset(in->mouse_released, 0, sizeof(in->mouse_released));
}

void gm82_input_mouse_down(gm82_input_state *in, int button) {
    if (button >= 0 && button <= 2) g_mouse_lastbutton = button + 1;
    if (!in || button < 0 || button > 2) return;
    if (!in->mouse_button[button]) in->mouse_pressed[button] = 1;
    in->mouse_button[button] = 1;
}

void gm82_input_mouse_up(gm82_input_state *in, int button) {
    if (!in || button < 0 || button > 2) return;
    if (in->mouse_button[button]) in->mouse_released[button] = 1;
    in->mouse_button[button] = 0;
}

void gm82_input_key_down(gm82_input_state *in, int key) {
    if (!in || key < 0 || key >= GM82_KEY_MAX) return;
    if (!in->down[key]) in->pressed[key] = 1;
    in->down[key] = 1;
}

void gm82_input_key_up(gm82_input_state *in, int key) {
    if (!in || key < 0 || key >= GM82_KEY_MAX) return;
    if (in->down[key]) in->released[key] = 1;
    in->down[key] = 0;
}

void gm82_input_set_mouse(gm82_input_state *in, int x, int y) {
    if (!in) return;
    in->mouse_x = x;
    in->mouse_y = y;
}

double gml_keyboard_check(double key) {
    int k = (int)key;
    if (!g_input) return 0;
    if (k == 0) {
        for (int i = 0; i < GM82_KEY_MAX; i++) {
            if (g_input->down[i]) return 0.0;
        }
        return 1.0;
    }
    if (k == 1) {
        for (int i = 0; i < GM82_KEY_MAX; i++) {
            if (g_input->down[i]) return 1.0;
        }
        return 0.0;
    }
    if (k < 0 || k >= GM82_KEY_MAX) return 0;
    return g_input->down[k] ? 1.0 : 0.0;
}

double gml_keyboard_check_pressed(double key) {
    int k = (int)key;
    if (!g_input) return 0;
    if (k == 0) {
        for (int i = 0; i < GM82_KEY_MAX; i++) {
            if (g_input->pressed[i]) return 0.0;
        }
        return 1.0;
    }
    if (k == 1) {
        for (int i = 0; i < GM82_KEY_MAX; i++) {
            if (g_input->pressed[i]) return 1.0;
        }
        return 0.0;
    }
    if (k < 0 || k >= GM82_KEY_MAX) return 0;
    return g_input->pressed[k] ? 1.0 : 0.0;
}

double gml_keyboard_check_released(double key) {
    int k = (int)key;
    if (!g_input) return 0;
    if (k == 0) {
        for (int i = 0; i < GM82_KEY_MAX; i++) {
            if (g_input->released[i]) return 0.0;
        }
        return 1.0;
    }
    if (k == 1) {
        for (int i = 0; i < GM82_KEY_MAX; i++) {
            if (g_input->released[i]) return 1.0;
        }
        return 0.0;
    }
    if (k < 0 || k >= GM82_KEY_MAX) return 0;
    return g_input->released[k] ? 1.0 : 0.0;
}

double gml_mouse_x(void) { return g_input ? (double)g_input->mouse_x : 0; }
double gml_mouse_y(void) { return g_input ? (double)g_input->mouse_y : 0; }

double gml_mouse_check_button(double button) {
    int b = (int)button;
    if (!g_input || b < 0 || b > 2) return 0;
    return g_input->mouse_button[b] ? 1.0 : 0.0;
}

double gml_mouse_check_button_pressed(double button) {
    int b = (int)button;
    if (!g_input || b < 0 || b > 2) return 0;
    return g_input->mouse_pressed[b] ? 1.0 : 0.0;
}

double gml_mouse_check_button_released(double button) {
    int b = (int)button;
    if (!g_input || b < 0 || b > 2) return 0;
    return g_input->mouse_released[b] ? 1.0 : 0.0;
}

double gml_keyboard_key(void) {
    if (!g_input) return 0;
    for (int i = 0; i < GM82_KEY_MAX; i++)
        if (g_input->down[i]) return (double)i;
    return 0;
}
double gml_mouse_button_code(void) {
    if (!g_input) return 0;
    for (int b = 0; b < 3; b++)
        if (g_input->mouse_button[b]) return (double)(b + 1);
    return 0;
}
double gml_mouse_lastbutton(void) { return (double)g_mouse_lastbutton; }

const char *gml_keyboard_string(void) { return g_keyboard_string; }
void gml_keyboard_string_clear(void) { g_keyboard_string[0] = 0; }
