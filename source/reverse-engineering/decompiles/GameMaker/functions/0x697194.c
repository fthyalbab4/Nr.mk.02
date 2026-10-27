// rea decompile_all
// name: FUN_00697194
// address: 0x697194
// body: available
// range: 0x697194-0x6978c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00697194(void)

{
  FUN_00696ed4(L"action_move",2);
  FUN_00696ed4(L"action_set_motion",2);
  FUN_00696ed4(L"action_set_hspeed",1);
  FUN_00696ed4(L"action_set_vspeed",1);
  FUN_00696ed4(L"action_set_gravity",2);
  FUN_00696ed4(L"action_set_friction",1);
  FUN_00696ed4(L"action_move_point",3);
  FUN_00696ed4(L"action_move_to",2);
  FUN_00696ed4(L"action_move_start",0);
  FUN_00696ed4(L"action_move_random",2);
  FUN_00696ed4(L"action_snap",2);
  FUN_00696ed4(L"action_wrap",1);
  FUN_00696ed4(L"action_reverse_xdir",0);
  FUN_00696ed4(L"action_reverse_ydir",0);
  FUN_00696ed4(L"action_move_contact",3);
  FUN_00696ed4(L"action_bounce",2);
  FUN_00696ed4(L"action_path",3);
  FUN_00696ed4(L"action_path_end",0);
  FUN_00696ed4(L"action_path_position",1);
  FUN_00696ed4(L"action_path_speed",1);
  FUN_00696ed4(L"action_linear_step",4);
  FUN_00696ed4(L"action_potential_step",4);
  FUN_00696ed4(L"action_kill_object",0);
  FUN_00696ed4(L"action_create_object",3);
  FUN_00696ed4(L"action_create_object_motion",5);
  FUN_00696ed4(L"action_create_object_random",6);
  FUN_00696ed4(L"action_change_object",2);
  FUN_00696ed4(L"action_kill_position",2);
  FUN_00696ed4(L"action_sprite_set",3);
  FUN_00696ed4(L"action_sprite_transform",4);
  FUN_00696ed4(L"action_sprite_color",2);
  FUN_00696ed4(L"action_sound",2);
  FUN_00696ed4(L"action_end_sound",2);
  FUN_00696ed4(L"action_if_sound",1);
  FUN_00696ed4(L"action_another_room",2);
  FUN_00696ed4(L"action_current_room",1);
  FUN_00696ed4(L"action_previous_room",1);
  FUN_00696ed4(L"action_next_room",1);
  FUN_00696ed4(L"action_if_previous_room",0);
  FUN_00696ed4(L"action_if_next_room",0);
  FUN_00696ed4(L"action_set_alarm",2);
  FUN_00696ed4(L"action_sleep",2);
  FUN_00696ed4(L"action_timeline_set",4);
  FUN_00696ed4(L"action_timeline_start",0);
  FUN_00696ed4(L"action_timeline_pause",0);
  FUN_00696ed4(L"action_timeline_stop",0);
  FUN_00696ed4(L"action_set_timeline_position",1);
  FUN_00696ed4(L"action_set_timeline_speed",1);
  FUN_00696ed4(L"action_set_timeline",2);
  FUN_00696ed4(L"action_message",1);
  FUN_00696ed4(L"action_show_info",0);
  FUN_00696ed4(L"action_show_video",3);
  FUN_00696ed4(L"action_splash_text",1);
  FUN_00696ed4(L"action_splash_image",1);
  FUN_00696ed4(L"action_splash_web",2);
  FUN_00696ed4(L"action_splash_video",2);
  FUN_00696ed4(L"action_splash_settings",5);
  FUN_00696ed4(L"action_end_game",0);
  FUN_00696ed4(L"action_restart_game",0);
  FUN_00696ed4(L"action_save_game",1);
  FUN_00696ed4(L"action_load_game",1);
  FUN_00696ed4(L"action_replace_sprite",3);
  FUN_00696ed4(L"action_replace_sound",2);
  FUN_00696ed4(L"action_replace_background",2);
  FUN_00696ed4(L"action_if_empty",3);
  FUN_00696ed4(L"action_if_collision",3);
  FUN_00696ed4(L"action_if",1);
  FUN_00696ed4(L"action_if_number",3);
  FUN_00696ed4(L"action_if_object",3);
  FUN_00696ed4(L"action_if_question",1);
  FUN_00696ed4(L"action_if_dice",1);
  FUN_00696ed4(L"action_if_mouse",1);
  FUN_00696ed4(L"action_if_aligned",2);
  FUN_00696ed4(L"action_execute_script",6);
  FUN_00696ed4(L"action_inherited",0);
  FUN_00696ed4(L"action_if_variable",3);
  FUN_00696ed4(L"action_draw_variable",3);
  FUN_00696ed4(L"action_set_score",1);
  FUN_00696ed4(L"action_if_score",2);
  FUN_00696ed4(L"action_draw_score",3);
  FUN_00696ed4(L"action_highscore_show",6);
  FUN_00696ed4(L"action_highscore_clear",0);
  FUN_00696ed4(L"action_set_life",1);
  FUN_00696ed4(L"action_if_life",2);
  FUN_00696ed4(L"action_draw_life",3);
  FUN_00696ed4(L"action_draw_life_images",3);
  FUN_00696ed4(L"action_set_health",1);
  FUN_00696ed4(L"action_if_health",2);
  FUN_00696ed4(L"action_draw_health",6);
  FUN_00696ed4(L"action_set_caption",6);
  FUN_00696ed4(L"action_partsyst_create",1);
  FUN_00696ed4(L"action_partsyst_destroy",0);
  FUN_00696ed4(L"action_partsyst_clear",0);
  FUN_00696ed4(L"action_parttype_create",6);
  FUN_00696ed4(L"action_parttype_color",6);
  FUN_00696ed4(L"action_parttype_life",3);
  FUN_00696ed4(L"action_parttype_speed",6);
  FUN_00696ed4(L"action_parttype_gravity",3);
  FUN_00696ed4(L"action_parttype_secondary",5);
  FUN_00696ed4(L"action_partemit_create",6);
  FUN_00696ed4(L"action_partemit_destroy",1);
  FUN_00696ed4(L"action_partemit_burst",3);
  FUN_00696ed4(L"action_partemit_stream",3);
  FUN_00696ed4(L"action_cd_play",2);
  FUN_00696ed4(L"action_cd_stop",0);
  FUN_00696ed4(L"action_cd_pause",0);
  FUN_00696ed4(L"action_cd_resume",0);
  FUN_00696ed4(L"action_cd_present",0);
  FUN_00696ed4(L"action_cd_playing",0);
  FUN_00696ed4(L"action_set_cursor",2);
  FUN_00696ed4(L"action_webpage",1);
  FUN_00696ed4(L"action_draw_sprite",4);
  FUN_00696ed4(L"action_draw_background",4);
  FUN_00696ed4(L"action_draw_text",3);
  FUN_00696ed4(L"action_draw_text_transformed",6);
  FUN_00696ed4(L"action_draw_rectangle",5);
  FUN_00696ed4(L"action_draw_gradient_hor",6);
  FUN_00696ed4(L"action_draw_gradient_vert",6);
  FUN_00696ed4(L"action_draw_ellipse",5);
  FUN_00696ed4(L"action_draw_ellipse_gradient",6);
  FUN_00696ed4(L"action_draw_line",4);
  FUN_00696ed4(L"action_draw_arrow",5);
  FUN_00696ed4(L"action_color",1);
  FUN_00696ed4(L"action_font",2);
  FUN_00696ed4(L"action_fullscreen",1);
  FUN_00696ed4(L"action_snapshot",1);
  FUN_00696ed4(L"action_effect",6);
  return;
}
