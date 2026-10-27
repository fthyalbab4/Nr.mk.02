// rea decompile_all
// name: FUN_0069fb48
// address: 0x69fb48
// body: available
// range: 0x69fb48-0x69fd91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069fb48(void)

{
  FUN_00696ed4(L"sound_play",1);
  FUN_00696ed4(L"sound_loop",1);
  FUN_00696ed4(L"sound_stop",1);
  FUN_00696ed4(L"sound_stop_all",0);
  FUN_00696ed4(L"sound_isplaying",1);
  FUN_00696ed4(L"sound_volume",2);
  FUN_00696ed4(L"sound_fade",3);
  FUN_00696ed4(L"sound_pan",2);
  FUN_00696ed4(L"sound_background_tempo",1);
  FUN_00696ed4(L"sound_global_volume",1);
  FUN_00696ed4(L"sound_set_search_directory",1);
  FUN_00696ed4(L"sound_effect_set",2);
  FUN_00696ed4(L"sound_effect_chorus",8);
  FUN_00696ed4(L"sound_effect_compressor",7);
  FUN_00696ed4(L"sound_effect_echo",6);
  FUN_00696ed4(L"sound_effect_flanger",8);
  FUN_00696ed4(L"sound_effect_gargle",3);
  FUN_00696ed4(L"sound_effect_equalizer",4);
  FUN_00696ed4(L"sound_effect_reverb",5);
  FUN_00696ed4(L"sound_3d_set_sound_position",4);
  FUN_00696ed4(L"sound_3d_set_sound_velocity",4);
  FUN_00696ed4(L"sound_3d_set_sound_distance",3);
  FUN_00696ed4(L"sound_3d_set_sound_cone",7);
  FUN_00696ed4(L"cd_init",0);
  FUN_00696ed4(L"cd_present",0);
  FUN_00696ed4(L"cd_number",0);
  FUN_00696ed4(L"cd_playing",0);
  FUN_00696ed4(L"cd_paused",0);
  FUN_00696ed4(L"cd_track",0);
  FUN_00696ed4(L"cd_length",0);
  FUN_00696ed4(L"cd_track_length",1);
  FUN_00696ed4(L"cd_position",0);
  FUN_00696ed4(L"cd_track_position",0);
  FUN_00696ed4(L"cd_play",2);
  FUN_00696ed4(L"cd_stop",0);
  FUN_00696ed4(L"cd_pause",0);
  FUN_00696ed4(L"cd_resume",0);
  FUN_00696ed4(L"cd_set_position",1);
  FUN_00696ed4(L"cd_set_track_position",1);
  FUN_00696ed4(L"cd_open_door",0);
  FUN_00696ed4(L"cd_close_door",0);
  FUN_00696ed4(L"MCI_command",1);
  return;
}
