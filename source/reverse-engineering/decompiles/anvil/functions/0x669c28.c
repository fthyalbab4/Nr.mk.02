// rea decompile_all
// name: FUN_00669c28
// address: 0x669c28
// body: available
// range: 0x669c28-0x66a28f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00669c28(void)

{
  FUN_0058917c(L"d3d_start",&LAB_00668aa0,0,1);
  FUN_0058917c(L"d3d_end",&LAB_00668ac8,0,1);
  FUN_0058917c(L"d3d_set_perspective",&LAB_00668af0,1,1);
  FUN_0058917c(L"d3d_set_hidden",&LAB_00668b14,1,1);
  FUN_0058917c(L"d3d_set_depth",&LAB_00668b38,1,1);
  FUN_0058917c(L"d3d_set_zwriteenable",&LAB_00668b50,1,1);
  FUN_0058917c(L"d3d_set_lighting",&LAB_00668b68,1,1);
  FUN_0058917c(L"d3d_set_shading",&LAB_00668b8c,1,1);
  FUN_0058917c(L"d3d_set_fog",&LAB_00668bb0,4,1);
  FUN_0058917c(L"d3d_set_culling",&LAB_00668bf4,1,1);
  FUN_0058917c(L"d3d_primitive_begin",&LAB_00668c18,1,1);
  FUN_0058917c(L"d3d_primitive_begin_texture",&LAB_00668c34,2,1);
  FUN_0058917c(L"d3d_primitive_end",FUN_00668c58,0,1);
  FUN_0058917c(L"d3d_vertex",FUN_00668c64,3,1);
  FUN_0058917c(L"d3d_vertex_color",&LAB_00668c88,5,1);
  FUN_0058917c(L"d3d_vertex_texture",&LAB_00668cbc,5,1);
  FUN_0058917c(L"d3d_vertex_texture_color",&LAB_00668cec,7,1);
  FUN_0058917c(L"d3d_vertex_normal",&LAB_00668d34,6,1);
  FUN_0058917c(L"d3d_vertex_normal_color",&LAB_00668d70,8,1);
  FUN_0058917c(L"d3d_vertex_normal_texture",&LAB_00668dc4,8,1);
  FUN_0058917c(L"d3d_vertex_normal_texture_color",&LAB_00668e18,10,1);
  FUN_0058917c(L"d3d_draw_block",&LAB_00668e84,9,1);
  FUN_0058917c(L"d3d_draw_cylinder",&LAB_00668ee4,0xb,1);
  FUN_0058917c(L"d3d_draw_cone",&LAB_00668f68,0xb,1);
  FUN_0058917c(L"d3d_draw_ellipsoid",&LAB_00668fec,10,1);
  FUN_0058917c(L"d3d_draw_wall",FUN_00669058,9,1);
  FUN_0058917c(L"d3d_draw_floor",&LAB_006690b8,9,1);
  FUN_0058917c(L"d3d_set_projection",&LAB_00669118,9,1);
  FUN_0058917c(L"d3d_set_projection_ext",&LAB_00669178,0xd,1);
  FUN_0058917c(L"d3d_set_projection_ortho",&LAB_00669208,5,1);
  FUN_0058917c(L"d3d_set_projection_perspective",&LAB_00669238,5,1);
  FUN_0058917c(L"d3d_transform_set_identity",&LAB_00669268,0,1);
  FUN_0058917c(L"d3d_transform_set_translation",FUN_00669274,3,1);
  FUN_0058917c(L"d3d_transform_set_scaling",&LAB_00669298,3,1);
  FUN_0058917c(L"d3d_transform_set_rotation_x",&LAB_006692bc,1,1);
  FUN_0058917c(L"d3d_transform_set_rotation_y",&LAB_006692d4,1,1);
  FUN_0058917c(L"d3d_transform_set_rotation_z",&LAB_006692ec,1,1);
  FUN_0058917c(L"d3d_transform_set_rotation_axis",&LAB_00669304,4,1);
  FUN_0058917c(L"d3d_transform_add_translation",FUN_0066932c,3,1);
  FUN_0058917c(L"d3d_transform_add_scaling",&LAB_00669350,3,1);
  FUN_0058917c(L"d3d_transform_add_rotation_x",&LAB_00669374,1,1);
  FUN_0058917c(L"d3d_transform_add_rotation_y",&LAB_0066938c,1,1);
  FUN_0058917c(L"d3d_transform_add_rotation_z",&LAB_006693a4,1,1);
  FUN_0058917c(L"d3d_transform_add_rotation_axis",&LAB_006693bc,4,1);
  FUN_0058917c(L"d3d_transform_stack_clear",FUN_006693e4,0,1);
  FUN_0058917c(L"d3d_transform_stack_empty",FUN_006693f0,0,1);
  FUN_0058917c(L"d3d_transform_stack_push",FUN_00669414,0,1);
  FUN_0058917c(L"d3d_transform_stack_pop",FUN_00669438,0,1);
  FUN_0058917c(L"d3d_transform_stack_top",FUN_0066945c,0,1);
  FUN_0058917c(L"d3d_transform_stack_discard",FUN_00669480,0,1);
  FUN_0058917c(L"d3d_light_define_ambient",FUN_006694a4,1,1);
  FUN_0058917c(L"d3d_light_define_direction",&LAB_006694c4,5,1);
  FUN_0058917c(L"d3d_light_define_point",&LAB_006694fc,6,1);
  FUN_0058917c(L"d3d_light_enable",&LAB_0066953c,2,1);
  FUN_0058917c(L"d3d_model_create",&LAB_0066956c,0,1);
  FUN_0058917c(L"d3d_model_destroy",&LAB_00669590,1,1);
  FUN_0058917c(L"d3d_model_clear",FUN_006695a8,1,1);
  FUN_0058917c(L"d3d_model_load",FUN_006695c0,2,1);
  FUN_0058917c(L"d3d_model_save",FUN_00669618,2,1);
  FUN_0058917c(L"d3d_model_draw",FUN_00669670,5,1);
  FUN_0058917c(L"d3d_model_primitive_begin",&LAB_006696a8,2,1);
  FUN_0058917c(L"d3d_model_primitive_end",FUN_006696cc,1,1);
  FUN_0058917c(L"d3d_model_vertex",FUN_006696e4,4,1);
  FUN_0058917c(L"d3d_model_vertex_color",FUN_00669710,6,1);
  FUN_0058917c(L"d3d_model_vertex_texture",&LAB_00669754,6,1);
  FUN_0058917c(L"d3d_model_vertex_texture_color",&LAB_00669794,8,1);
  FUN_0058917c(L"d3d_model_vertex_normal",&LAB_006697ec,7,1);
  FUN_0058917c(L"d3d_model_vertex_normal_color",&LAB_00669838,9,1);
  FUN_0058917c(L"d3d_model_vertex_normal_texture",&LAB_0066989c,9,1);
  FUN_0058917c(L"d3d_model_vertex_normal_texture_color",&LAB_00669900,0xb,1);
  FUN_0058917c(L"d3d_model_block",&LAB_0066997c,9,1);
  FUN_0058917c(L"d3d_model_cylinder",&LAB_006699e0,0xb,1);
  FUN_0058917c(L"d3d_model_cone",&LAB_00669a68,0xb,1);
  FUN_0058917c(L"d3d_model_ellipsoid",&LAB_00669af0,10,1);
  FUN_0058917c(L"d3d_model_wall",&LAB_00669b60,9,1);
  FUN_0058917c(L"d3d_model_floor",&LAB_00669bc4,9,1);
  return;
}
