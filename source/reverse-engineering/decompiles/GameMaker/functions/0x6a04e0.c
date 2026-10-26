// rea decompile_all
// name: FUN_006a04e0
// address: 0x6a04e0
// body: available
// range: 0x6a04e0-0x6a0a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a04e0(void)

{
  FUN_00696ed4(L"splash_set_caption",1);
  FUN_00696ed4(L"splash_set_fullscreen",1);
  FUN_00696ed4(L"splash_set_border",1);
  FUN_00696ed4(L"splash_set_size",2);
  FUN_00696ed4(L"splash_set_position",2);
  FUN_00696ed4(L"splash_set_adapt",1);
  FUN_00696ed4(L"splash_set_top",1);
  FUN_00696ed4(L"splash_set_color",1);
  FUN_00696ed4(L"splash_set_main",1);
  FUN_00696ed4(L"splash_set_scale",1);
  FUN_00696ed4(L"splash_set_cursor",1);
  FUN_00696ed4(L"splash_set_interrupt",1);
  FUN_00696ed4(L"splash_set_stop_key",1);
  FUN_00696ed4(L"splash_set_stop_mouse",1);
  FUN_00696ed4(L"splash_set_close_button",1);
  FUN_00696ed4(L"splash_show_video",2);
  FUN_00696ed4(L"splash_show_text",2);
  FUN_00696ed4(L"splash_show_web",2);
  FUN_00696ed4(L"splash_show_image",2);
  FUN_00696ed4(L"show_image",3);
  FUN_00696ed4(L"show_video",3);
  FUN_00696ed4(L"show_text",4);
  FUN_00696ed4(L"show_message",1);
  FUN_00696ed4(L"show_question",1);
  FUN_00696ed4(L"show_error",2);
  FUN_00696ed4(L"show_info",0);
  FUN_00696ed4(L"load_info",1);
  FUN_00696ed4(L"highscore_show_ext",7);
  FUN_00696ed4(L"highscore_show",1);
  FUN_00696ed4(L"highscore_set_background",1);
  FUN_00696ed4(L"highscore_set_border",1);
  FUN_00696ed4(L"highscore_set_font",3);
  FUN_00696ed4(L"highscore_set_strings",3);
  FUN_00696ed4(L"highscore_set_colors",3);
  FUN_00696ed4(L"highscore_clear",0);
  FUN_00696ed4(L"highscore_add",2);
  FUN_00696ed4(L"highscore_add_current",0);
  FUN_00696ed4(L"highscore_value",1);
  FUN_00696ed4(L"highscore_name",1);
  FUN_00696ed4(L"draw_highscore",4);
  FUN_00696ed4(L"show_message",1);
  FUN_00696ed4(L"show_message_ext",4);
  FUN_00696ed4(L"message_background",1);
  FUN_00696ed4(L"message_button",1);
  FUN_00696ed4(L"message_alpha",1);
  FUN_00696ed4(L"message_text_font",4);
  FUN_00696ed4(L"message_button_font",4);
  FUN_00696ed4(L"message_input_font",4);
  FUN_00696ed4(L"message_text_charset",2);
  FUN_00696ed4(L"message_mouse_color",1);
  FUN_00696ed4(L"message_input_color",1);
  FUN_00696ed4(L"message_position",2);
  FUN_00696ed4(L"message_size",2);
  FUN_00696ed4(L"message_caption",2);
  FUN_00696ed4(L"show_question",1);
  FUN_00696ed4(L"show_menu",2);
  FUN_00696ed4(L"show_menu_pos",4);
  FUN_00696ed4(L"get_integer",2);
  FUN_00696ed4(L"get_string",2);
  FUN_00696ed4(L"get_color",1);
  FUN_00696ed4(L"get_open_filename",2);
  FUN_00696ed4(L"get_save_filename",2);
  FUN_00696ed4(L"get_directory",1);
  FUN_00696ed4(L"get_directory_alt",2);
  FUN_00696ed4(L"keyboard_get_numlock",0);
  FUN_00696ed4(L"keyboard_set_numlock",1);
  FUN_00696ed4(L"keyboard_key_press",1);
  FUN_00696ed4(L"keyboard_key_release",1);
  FUN_00696ed4(L"keyboard_set_map",2);
  FUN_00696ed4(L"keyboard_get_map",1);
  FUN_00696ed4(L"keyboard_unset_map",0);
  FUN_00696ed4(L"keyboard_check",1);
  FUN_00696ed4(L"keyboard_check_pressed",1);
  FUN_00696ed4(L"keyboard_check_released",1);
  FUN_00696ed4(L"keyboard_check_direct",1);
  FUN_00696ed4(L"mouse_check_button",1);
  FUN_00696ed4(L"mouse_check_button_pressed",1);
  FUN_00696ed4(L"mouse_check_button_released",1);
  FUN_00696ed4(L"mouse_wheel_up",0);
  FUN_00696ed4(L"mouse_wheel_down",0);
  FUN_00696ed4(L"joystick_exists",1);
  FUN_00696ed4(L"joystick_direction",1);
  FUN_00696ed4(L"joystick_name",1);
  FUN_00696ed4(L"joystick_axes",1);
  FUN_00696ed4(L"joystick_buttons",1);
  FUN_00696ed4(L"joystick_has_pov",1);
  FUN_00696ed4(L"joystick_check_button",2);
  FUN_00696ed4(L"joystick_xpos",1);
  FUN_00696ed4(L"joystick_ypos",1);
  FUN_00696ed4(L"joystick_zpos",1);
  FUN_00696ed4(L"joystick_rpos",1);
  FUN_00696ed4(L"joystick_upos",1);
  FUN_00696ed4(L"joystick_vpos",1);
  FUN_00696ed4(L"joystick_pov",1);
  FUN_00696ed4(L"keyboard_clear",1);
  FUN_00696ed4(L"mouse_clear",1);
  FUN_00696ed4(L"io_clear",0);
  FUN_00696ed4(L"io_handle",0);
  FUN_00696ed4(L"keyboard_wait",0);
  FUN_00696ed4(L"mouse_wait",0);
  return;
}
