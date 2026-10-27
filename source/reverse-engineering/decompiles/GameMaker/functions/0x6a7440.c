// rea decompile_all
// name: FUN_006a7440
// address: 0x6a7440
// body: available
// range: 0x6a7440-0x6a7905 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a7440(void)

{
  FUN_00696ed4(L"part_type_create",0);
  FUN_00696ed4(L"part_type_destroy",1);
  FUN_00696ed4(L"part_type_exists",1);
  FUN_00696ed4(L"part_type_clear",1);
  FUN_00696ed4(L"part_type_shape",2);
  FUN_00696ed4(L"part_type_sprite",5);
  FUN_00696ed4(L"part_type_size",5);
  FUN_00696ed4(L"part_type_scale",3);
  FUN_00696ed4(L"part_type_orientation",6);
  FUN_00696ed4(L"part_type_life",3);
  FUN_00696ed4(L"part_type_step",3);
  FUN_00696ed4(L"part_type_death",3);
  FUN_00696ed4(L"part_type_speed",5);
  FUN_00696ed4(L"part_type_direction",5);
  FUN_00696ed4(L"part_type_gravity",3);
  FUN_00696ed4(L"part_type_color_mix",3);
  FUN_00696ed4(L"part_type_color_rgb",7);
  FUN_00696ed4(L"part_type_color_hsv",7);
  FUN_00696ed4(L"part_type_color1",2);
  FUN_00696ed4(L"part_type_color2",3);
  FUN_00696ed4(L"part_type_color3",4);
  FUN_00696ed4(L"part_type_color",4);
  FUN_00696ed4(L"part_type_alpha1",2);
  FUN_00696ed4(L"part_type_alpha2",3);
  FUN_00696ed4(L"part_type_alpha3",4);
  FUN_00696ed4(L"part_type_alpha",4);
  FUN_00696ed4(L"part_type_blend",2);
  FUN_00696ed4(L"part_system_create",0);
  FUN_00696ed4(L"part_system_destroy",1);
  FUN_00696ed4(L"part_system_exists",1);
  FUN_00696ed4(L"part_system_clear",1);
  FUN_00696ed4(L"part_system_draw_order",2);
  FUN_00696ed4(L"part_system_depth",2);
  FUN_00696ed4(L"part_system_position",3);
  FUN_00696ed4(L"part_system_automatic_update",2);
  FUN_00696ed4(L"part_system_automatic_draw",2);
  FUN_00696ed4(L"part_system_update",1);
  FUN_00696ed4(L"part_system_drawit",1);
  FUN_00696ed4(L"part_particles_create",5);
  FUN_00696ed4(L"part_particles_create_color",6);
  FUN_00696ed4(L"part_particles_clear",1);
  FUN_00696ed4(L"part_particles_count",1);
  FUN_00696ed4(L"part_emitter_create",1);
  FUN_00696ed4(L"part_emitter_destroy",2);
  FUN_00696ed4(L"part_emitter_destroy_all",1);
  FUN_00696ed4(L"part_emitter_exists",2);
  FUN_00696ed4(L"part_emitter_clear",2);
  FUN_00696ed4(L"part_emitter_region",8);
  FUN_00696ed4(L"part_emitter_burst",4);
  FUN_00696ed4(L"part_emitter_stream",4);
  FUN_00696ed4(L"part_attractor_create",1);
  FUN_00696ed4(L"part_attractor_destroy",2);
  FUN_00696ed4(L"part_attractor_destroy_all",1);
  FUN_00696ed4(L"part_attractor_exists",2);
  FUN_00696ed4(L"part_attractor_clear",2);
  FUN_00696ed4(L"part_attractor_position",4);
  FUN_00696ed4(L"part_attractor_force",6);
  FUN_00696ed4(L"part_destroyer_create",1);
  FUN_00696ed4(L"part_destroyer_destroy",2);
  FUN_00696ed4(L"part_destroyer_destroy_all",1);
  FUN_00696ed4(L"part_destroyer_exists",2);
  FUN_00696ed4(L"part_destroyer_clear",2);
  FUN_00696ed4(L"part_destroyer_region",7);
  FUN_00696ed4(L"part_deflector_create",1);
  FUN_00696ed4(L"part_deflector_destroy",2);
  FUN_00696ed4(L"part_deflector_destroy_all",1);
  FUN_00696ed4(L"part_deflector_exists",2);
  FUN_00696ed4(L"part_deflector_clear",2);
  FUN_00696ed4(L"part_deflector_region",6);
  FUN_00696ed4(L"part_deflector_kind",3);
  FUN_00696ed4(L"part_deflector_friction",3);
  FUN_00696ed4(L"part_changer_create",1);
  FUN_00696ed4(L"part_changer_destroy",2);
  FUN_00696ed4(L"part_changer_destroy_all",1);
  FUN_00696ed4(L"part_changer_exists",2);
  FUN_00696ed4(L"part_changer_clear",2);
  FUN_00696ed4(L"part_changer_region",7);
  FUN_00696ed4(L"part_changer_kind",3);
  FUN_00696ed4(L"part_changer_types",4);
  FUN_00696ed4(L"effect_create_below",5);
  FUN_00696ed4(L"effect_create_above",5);
  FUN_00696ed4(L"effect_clear",0);
  return;
}
