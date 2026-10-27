#define _POSIX_C_SOURCE 200809L
#include "gm82_input.h"
#include <string.h>
#include <math.h>

static gm82_input_state *g_input = NULL;
static char g_keyboard_string[256];
static int g_mouse_lastbutton = 0;

void gm82_input_bind_global(gm82_input_state *in) { g_input = in; }

void gm82_input_init(gm82_input_state *in) {
    if (!in) return;
    memset(in, 0, sizeof(*in));
}

void gm82_input_begin_frame(gm82_input_state *in) {
    if (!in) return;
    /* snapshot previous down for ghost filter */
    memcpy(in->prev_down, in->down, sizeof(in->down));
    memset(in->pressed, 0, sizeof(in->pressed));
    memset(in->released, 0, sizeof(in->released));
    memset(in->mouse_pressed, 0, sizeof(in->mouse_pressed));
    memset(in->mouse_released, 0, sizeof(in->mouse_released));
    memset(in->pad_pressed, 0, sizeof(in->pad_pressed));
    memset(in->pad_released, 0, sizeof(in->pad_released));
    in->buffer_count = 0;
}

static void buf_push(gm82_input_state *in, int key, int down) {
    if (!in || in->buffer_count >= GM82_INPUT_BUF_MAX) return;
    in->buffer[in->buffer_count].key = key;
    in->buffer[in->buffer_count].down = down;
    in->buffer_count++;
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
    /* ghost: ignore duplicate down if already down */
    if (in->down[key]) return;
    in->pressed[key] = 1;
    in->down[key] = 1;
    buf_push(in, key, 1);
}

void gm82_input_key_up(gm82_input_state *in, int key) {
    if (!in || key < 0 || key >= GM82_KEY_MAX) return;
    if (!in->down[key]) return;
    in->released[key] = 1;
    in->down[key] = 0;
    buf_push(in, key, 0);
}

void gm82_input_set_mouse(gm82_input_state *in, int x, int y) {
    if (!in) return;
    in->mouse_x = x;
    in->mouse_y = y;
    in->mouse_x_f = (double)x;
    in->mouse_y_f = (double)y;
}

void gm82_input_set_mouse_f(gm82_input_state *in, double x, double y) {
    if (!in) return;
    if (!isfinite(x) || !isfinite(y) ||
        x < (double)INT_MIN || x > (double)INT_MAX ||
        y < (double)INT_MIN || y > (double)INT_MAX) return;
    in->mouse_x_f = x;
    in->mouse_y_f = y;
    in->mouse_x = (int)x;
    in->mouse_y = (int)y;
}

void gm82_input_pad_axis(gm82_input_state *in, int pad, int axis, double v) {
    if (!in || pad < 0 || pad >= GM82_PAD_MAX || axis < 0 || axis >= 6) return;
    if (v > 1.0) v = 1.0;
    if (v < -1.0) v = -1.0;
    /* deadzone */
    if (v > -0.15 && v < 0.15) v = 0.0;
    in->pad_axis[pad][axis] = v;
}

void gm82_input_pad_button(gm82_input_state *in, int pad, int btn, int down) {
    if (!in || pad < 0 || pad >= GM82_PAD_MAX || btn < 0 || btn >= 16) return;
    if (down) {
        if (!in->pad_button[pad][btn]) in->pad_pressed[pad][btn] = 1;
        in->pad_button[pad][btn] = 1;
    } else {
        if (in->pad_button[pad][btn]) in->pad_released[pad][btn] = 1;
        in->pad_button[pad][btn] = 0;
    }
}

static int input_key_to_index(double key, int *out) {
    if (!out || !isfinite(key) || key < 0.0 || key >= (double)GM82_KEY_MAX)
        return 0;
    *out = (int)key;
    return 1;
}

double gml_keyboard_check(double key) {
    int k;
    if (!g_input || !input_key_to_index(key, &k)) return 0;
    if (k == 0) {
        for (int i = 0; i < GM82_KEY_MAX; i++)
            if (g_input->down[i]) return 0.0;
        return 1.0;
    }
    if (k == 1) {
        for (int i = 0; i < GM82_KEY_MAX; i++)
            if (g_input->down[i]) return 1.0;
        return 0.0;
    }
    if (k < 0 || k >= GM82_KEY_MAX) return 0;
    return g_input->down[k] ? 1.0 : 0.0;
}

double gml_keyboard_check_pressed(double key) {
    if (!g_input || isnan(key) || isinf(key)) return 0.0;
    int k = (int)key;
    if (!g_input) return 0;
    if (k == 0) return 0.0;
    if (k == 1) {
        for (int i = 0; i < GM82_KEY_MAX; i++)
            if (g_input->pressed[i]) return 1.0;
        return 0.0;
    }
    if (k < 0 || k >= GM82_KEY_MAX) return 0.0;
    return g_input->pressed[k] ? 1.0 : 0.0;
}

double gml_keyboard_check_released(double key) {
    if (!g_input || isnan(key) || isinf(key)) return 0.0;
    int k = (int)key;
    if (!g_input) return 0;
    if (k == 0) return 0.0;
    if (k == 1) {
        for (int i = 0; i < GM82_KEY_MAX; i++)
            if (g_input->released[i]) return 1.0;
        return 0.0;
    }
    if (k < 0 || k >= GM82_KEY_MAX) return 0.0;
    return g_input->released[k] ? 1.0 : 0.0;
}

double gml_keyboard_key(void) {
    if (!g_input) return 0;
    for (int i = 0; i < GM82_KEY_MAX; i++)
        if (g_input->down[i]) return (double)i;
    return 0;
}

double gml_mouse_x(void) {
    if (!g_input) return 0;
    return g_input->mouse_x_f != 0.0 || g_input->mouse_y_f != 0.0
        ? g_input->mouse_x_f : (double)g_input->mouse_x;
}

double gml_mouse_y(void) {
    if (!g_input) return 0;
    return g_input->mouse_x_f != 0.0 || g_input->mouse_y_f != 0.0
        ? g_input->mouse_y_f : (double)g_input->mouse_y;
}

double gml_mouse_check_button(double button) {
    int b = (int)button - 1;
    if (!g_input || b < 0 || b > 2) return 0;
    return g_input->mouse_button[b] ? 1.0 : 0.0;
}

double gml_mouse_check_button_pressed(double button) {
    int b = (int)button - 1;
    if (!g_input || b < 0 || b > 2) return 0;
    return g_input->mouse_pressed[b] ? 1.0 : 0.0;
}

double gml_mouse_check_button_released(double button) {
    int b = (int)button - 1;
    if (!g_input || b < 0 || b > 2) return 0;
    return g_input->mouse_released[b] ? 1.0 : 0.0;
}

double gml_mouse_button_code(void) {
    if (!g_input) return 0;
    for (int i = 0; i < 3; i++)
        if (g_input->mouse_button[i]) return (double)(i + 1);
    return 0;
}

double gml_mouse_lastbutton(void) { return (double)g_mouse_lastbutton; }

double gml_gamepad_axis_value(double pad, double axis) {
    int p = (int)pad, a = (int)axis;
    if (!g_input || p < 0 || p >= GM82_PAD_MAX || a < 0 || a >= 6) return 0;
    return g_input->pad_axis[p][a];
}

double gml_gamepad_button_check(double pad, double btn) {
    int p = (int)pad, b = (int)btn;
    if (!g_input || p < 0 || p >= GM82_PAD_MAX || b < 0 || b >= 16) return 0;
    return g_input->pad_button[p][b] ? 1.0 : 0.0;
}

const char *gml_keyboard_string(void) { return g_keyboard_string; }
void gml_keyboard_string_clear(void) { g_keyboard_string[0] = 0; }
