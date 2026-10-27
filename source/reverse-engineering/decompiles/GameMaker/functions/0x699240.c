// rea decompile_all
// name: FUN_00699240
// address: 0x699240
// body: available
// range: 0x699240-0x6996f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00699240(void)

{
  FUN_00696ed4(L"move_random",2);
  FUN_00696ed4(L"place_free",2);
  FUN_00696ed4(L"place_empty",2);
  FUN_00696ed4(L"place_meeting",3);
  FUN_00696ed4(L"place_snapped",2);
  FUN_00696ed4(L"move_random",2);
  FUN_00696ed4(L"move_snap",2);
  FUN_00696ed4(L"move_towards_point",3);
  FUN_00696ed4(L"move_contact",1);
  FUN_00696ed4(L"move_contact_solid",2);
  FUN_00696ed4(L"move_contact_all",2);
  FUN_00696ed4(L"move_outside_solid",2);
  FUN_00696ed4(L"move_outside_all",2);
  FUN_00696ed4(L"move_bounce",1);
  FUN_00696ed4(L"move_bounce_solid",1);
  FUN_00696ed4(L"move_bounce_all",1);
  FUN_00696ed4(L"move_wrap",3);
  FUN_00696ed4(L"motion_set",2);
  FUN_00696ed4(L"motion_add",2);
  FUN_00696ed4(L"distance_to_point",2);
  FUN_00696ed4(L"distance_to_object",1);
  FUN_00696ed4(L"path_start",4);
  FUN_00696ed4(L"path_end",0);
  FUN_00696ed4(L"mp_linear_step",4);
  FUN_00696ed4(L"mp_potential_step",4);
  FUN_00696ed4(L"mp_linear_step_object",4);
  FUN_00696ed4(L"mp_potential_step_object",4);
  FUN_00696ed4(L"mp_potential_settings",4);
  FUN_00696ed4(L"mp_linear_path",5);
  FUN_00696ed4(L"mp_potential_path",6);
  FUN_00696ed4(L"mp_linear_path_object",5);
  FUN_00696ed4(L"mp_potential_path_object",6);
  FUN_00696ed4(L"mp_grid_create",6);
  FUN_00696ed4(L"mp_grid_destroy",1);
  FUN_00696ed4(L"mp_grid_clear_all",1);
  FUN_00696ed4(L"mp_grid_clear_cell",3);
  FUN_00696ed4(L"mp_grid_clear_rectangle",5);
  FUN_00696ed4(L"mp_grid_add_cell",3);
  FUN_00696ed4(L"mp_grid_add_rectangle",5);
  FUN_00696ed4(L"mp_grid_add_instances",3);
  FUN_00696ed4(L"mp_grid_path",7);
  FUN_00696ed4(L"mp_grid_draw",1);
  FUN_00696ed4(L"collision_point",5);
  FUN_00696ed4(L"collision_rectangle",7);
  FUN_00696ed4(L"collision_circle",6);
  FUN_00696ed4(L"collision_ellipse",7);
  FUN_00696ed4(L"collision_line",7);
  FUN_00696ed4(L"instance_find",2);
  FUN_00696ed4(L"instance_exists",1);
  FUN_00696ed4(L"instance_number",1);
  FUN_00696ed4(L"instance_position",3);
  FUN_00696ed4(L"instance_nearest",3);
  FUN_00696ed4(L"instance_furthest",3);
  FUN_00696ed4(L"instance_place",3);
  FUN_00696ed4(L"instance_create",3);
  FUN_00696ed4(L"instance_copy",1);
  FUN_00696ed4(L"instance_change",2);
  FUN_00696ed4(L"instance_destroy",0);
  FUN_00696ed4(L"instance_sprite",1);
  FUN_00696ed4(L"position_empty",2);
  FUN_00696ed4(L"position_meeting",3);
  FUN_00696ed4(L"position_destroy",2);
  FUN_00696ed4(L"position_change",4);
  FUN_00696ed4(L"instance_deactivate_all",1);
  FUN_00696ed4(L"instance_deactivate_object",1);
  FUN_00696ed4(L"instance_deactivate_region",6);
  FUN_00696ed4(L"instance_activate_all",0);
  FUN_00696ed4(L"instance_activate_object",1);
  FUN_00696ed4(L"instance_activate_region",5);
  FUN_00696ed4(L"room_goto",1);
  FUN_00696ed4(L"room_goto_previous",0);
  FUN_00696ed4(L"room_goto_next",0);
  FUN_00696ed4(L"room_previous",1);
  FUN_00696ed4(L"room_next",1);
  FUN_00696ed4(L"room_restart",0);
  FUN_00696ed4(L"game_end",0);
  FUN_00696ed4(L"game_restart",0);
  FUN_00696ed4(L"game_load",1);
  FUN_00696ed4(L"game_save",1);
  FUN_00696ed4(L"transition_define",2);
  FUN_00696ed4(L"transition_exists",1);
  FUN_00696ed4(L"sleep",1);
  return;
}
