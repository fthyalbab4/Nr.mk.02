#ifndef GM82_INPUT_H
#define GM82_INPUT_H
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
#define GM82_KEY_MAX 256
#define GM82_INPUT_BUF_MAX 32
#define GM82_PAD_MAX 4
typedef struct { int key; int down; } gm82_key_event;
typedef struct {
    uint8_t down[GM82_KEY_MAX];
    uint8_t pressed[GM82_KEY_MAX];
    uint8_t released[GM82_KEY_MAX];
    uint8_t prev_down[GM82_KEY_MAX];
    int mouse_x, mouse_y;
    double mouse_x_f, mouse_y_f;
    uint8_t mouse_button[3];
    uint8_t mouse_pressed[3];
    uint8_t mouse_released[3];
    gm82_key_event buffer[GM82_INPUT_BUF_MAX];
    int buffer_count;
    double pad_axis[GM82_PAD_MAX][6];
    uint8_t pad_button[GM82_PAD_MAX][16];
    uint8_t pad_pressed[GM82_PAD_MAX][16];
    uint8_t pad_released[GM82_PAD_MAX][16];
} gm82_input_state;
void gm82_input_init(gm82_input_state *in);
void gm82_input_begin_frame(gm82_input_state *in);
void gm82_input_key_down(gm82_input_state *in, int key);
void gm82_input_key_up(gm82_input_state *in, int key);
void gm82_input_set_mouse(gm82_input_state *in, int x, int y);
void gm82_input_set_mouse_f(gm82_input_state *in, double x, double y);
void gm82_input_mouse_down(gm82_input_state *in, int button);
void gm82_input_mouse_up(gm82_input_state *in, int button);
void gm82_input_pad_axis(gm82_input_state *in, int pad, int axis, double v);
void gm82_input_pad_button(gm82_input_state *in, int pad, int btn, int down);
double gml_keyboard_check(double key);
double gml_keyboard_check_pressed(double key);
double gml_keyboard_check_released(double key);
double gml_keyboard_key(void);
double gml_mouse_x(void);
double gml_mouse_y(void);
double gml_mouse_check_button(double button);
double gml_mouse_check_button_pressed(double button);
double gml_mouse_check_button_released(double button);
double gml_mouse_button_code(void);
double gml_mouse_lastbutton(void);
double gml_gamepad_axis_value(double pad, double axis);
double gml_gamepad_button_check(double pad, double btn);
const char *gml_keyboard_string(void);
void gml_keyboard_string_clear(void);
void gm82_input_bind_global(gm82_input_state *in);
#ifdef __cplusplus
}
#endif
#endif
