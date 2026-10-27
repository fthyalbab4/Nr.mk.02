// rea decompile_all
// name: FUN_00666598
// address: 0x666598
// body: available
// range: 0x666598-0x666907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00666598(void)

{
  FUN_0058917c(L"sound_play",&LAB_0066564c,1,0);
  FUN_0058917c(L"sound_loop",&LAB_006656c0,1,0);
  FUN_0058917c(L"sound_stop",&LAB_00665734,1,0);
  FUN_0058917c(L"sound_stop_all",&LAB_006657a8,0,0);
  FUN_0058917c(L"sound_isplaying",FUN_006657b4,1,0);
  FUN_0058917c(L"sound_volume",&LAB_00665804,2,0);
  FUN_0058917c(L"sound_fade",&LAB_00665880,3,0);
  FUN_0058917c(L"sound_pan",&LAB_00665908,2,0);
  FUN_0058917c(L"sound_background_tempo",&LAB_00665984,1,0);
  FUN_0058917c(L"sound_global_volume",&LAB_0066599c,1,0);
  FUN_0058917c(L"sound_set_search_directory",&LAB_006659b4,1,0);
  FUN_0058917c(L"sound_effect_set",&LAB_00665a04,2,1);
  FUN_0058917c(L"sound_effect_chorus",&LAB_00665a84,8,1);
  FUN_0058917c(L"sound_effect_compressor",&LAB_00665b38,7,1);
  FUN_0058917c(L"sound_effect_echo",&LAB_00665bdc,6,1);
  FUN_0058917c(L"sound_effect_flanger",&LAB_00665c78,8,1);
  FUN_0058917c(L"sound_effect_gargle",&LAB_00665d2c,3,1);
  FUN_0058917c(L"sound_effect_equalizer",&LAB_00665db8,4,1);
  FUN_0058917c(L"sound_effect_reverb",&LAB_00665e40,5,1);
  FUN_0058917c(L"sound_3d_set_sound_position",&LAB_00665ecc,4,1);
  FUN_0058917c(L"sound_3d_set_sound_velocity",&LAB_00665f54,4,1);
  FUN_0058917c(L"sound_3d_set_sound_distance",&LAB_00665fdc,3,1);
  FUN_0058917c(L"sound_3d_set_sound_cone",&LAB_0066605c,7,1);
  FUN_0058917c(L"cd_init",&LAB_00666108,0,1);
  FUN_0058917c(&PTR_DAT_00666dc8,FUN_00666114,0,1);
  FUN_0058917c(&PTR_DAT_00666dec,FUN_00666138,0,1);
  FUN_0058917c(&PTR_DAT_00666e0c,&LAB_0066615c,0,1);
  FUN_0058917c(&PTR_DAT_00666e30,FUN_00666180,0,1);
  FUN_0058917c(&PTR_DAT_00666e50,FUN_006661a4,0,1);
  FUN_0058917c(&PTR_DAT_00666e70,&LAB_006661c8,0,1);
  FUN_0058917c(&PTR_DAT_00666e90,&LAB_006661ec,1,1);
  FUN_0058917c(&PTR_DAT_00666ebc,FUN_00666218,0,1);
  FUN_0058917c(&PTR_DAT_00666ee0,&LAB_0066623c,0,1);
  FUN_0058917c(L"cd_play",&LAB_00666260,2,1);
  FUN_0058917c(L"cd_stop",FUN_00666284,0,1);
  FUN_0058917c(&PTR_DAT_00666f48,FUN_00666290,0,1);
  FUN_0058917c(&PTR_DAT_00666f68,FUN_0066629c,0,1);
  FUN_0058917c(&PTR_DAT_00666f88,FUN_006662a8,1,1);
  FUN_0058917c(&PTR_DAT_00666fb4,FUN_006662c0,1,1);
  FUN_0058917c(L"cd_open_door",FUN_006662d8,0,1);
  FUN_0058917c(L"cd_close_door",FUN_006662e4,0,1);
  FUN_0058917c(L"MCI_command",FUN_006662f0,1,1);
  return;
}
