// rea decompile_all
// name: FUN_0069e610
// address: 0x69e610
// body: available
// range: 0x69e610-0x69ea63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069e610(void)

{
  FUN_00696ed4(L"d3d_start",0);
  FUN_00696ed4(L"d3d_end",0);
  FUN_00696ed4(L"d3d_set_perspective",1);
  FUN_00696ed4(L"d3d_set_hidden",1);
  FUN_00696ed4(L"d3d_set_depth",1);
  FUN_00696ed4(L"d3d_set_zwriteenable",1);
  FUN_00696ed4(L"d3d_set_lighting",1);
  FUN_00696ed4(L"d3d_set_shading",1);
  FUN_00696ed4(L"d3d_set_fog",4);
  FUN_00696ed4(L"d3d_set_culling",1);
  FUN_00696ed4(L"d3d_primitive_begin",1);
  FUN_00696ed4(L"d3d_primitive_begin_texture",2);
  FUN_00696ed4(L"d3d_primitive_end",0);
  FUN_00696ed4(L"d3d_vertex",3);
  FUN_00696ed4(L"d3d_vertex_color",5);
  FUN_00696ed4(L"d3d_vertex_texture",5);
  FUN_00696ed4(L"d3d_vertex_texture_color",7);
  FUN_00696ed4(L"d3d_vertex_normal",6);
  FUN_00696ed4(L"d3d_vertex_normal_color",8);
  FUN_00696ed4(L"d3d_vertex_normal_texture",8);
  FUN_00696ed4(L"d3d_vertex_normal_texture_color",10);
  FUN_00696ed4(L"d3d_draw_block",9);
  FUN_00696ed4(L"d3d_draw_cylinder",0xb);
  FUN_00696ed4(L"d3d_draw_cone",0xb);
  FUN_00696ed4(L"d3d_draw_ellipsoid",10);
  FUN_00696ed4(L"d3d_draw_wall",9);
  FUN_00696ed4(L"d3d_draw_floor",9);
  FUN_00696ed4(L"d3d_set_projection",9);
  FUN_00696ed4(L"d3d_set_projection_ext",0xd);
  FUN_00696ed4(L"d3d_set_projection_ortho",5);
  FUN_00696ed4(L"d3d_set_projection_perspective",5);
  FUN_00696ed4(L"d3d_transform_set_identity",0);
  FUN_00696ed4(L"d3d_transform_set_translation",3);
  FUN_00696ed4(L"d3d_transform_set_scaling",3);
  FUN_00696ed4(L"d3d_transform_set_rotation_x",1);
  FUN_00696ed4(L"d3d_transform_set_rotation_y",1);
  FUN_00696ed4(L"d3d_transform_set_rotation_z",1);
  FUN_00696ed4(L"d3d_transform_set_rotation_axis",4);
  FUN_00696ed4(L"d3d_transform_add_translation",3);
  FUN_00696ed4(L"d3d_transform_add_scaling",3);
  FUN_00696ed4(L"d3d_transform_add_rotation_x",1);
  FUN_00696ed4(L"d3d_transform_add_rotation_y",1);
  FUN_00696ed4(L"d3d_transform_add_rotation_z",1);
  FUN_00696ed4(L"d3d_transform_add_rotation_axis",4);
  FUN_00696ed4(L"d3d_transform_stack_clear",0);
  FUN_00696ed4(L"d3d_transform_stack_empty",0);
  FUN_00696ed4(L"d3d_transform_stack_push",0);
  FUN_00696ed4(L"d3d_transform_stack_pop",0);
  FUN_00696ed4(L"d3d_transform_stack_top",0);
  FUN_00696ed4(L"d3d_transform_stack_discard",0);
  FUN_00696ed4(L"d3d_light_define_ambient",1);
  FUN_00696ed4(L"d3d_light_define_direction",5);
  FUN_00696ed4(L"d3d_light_define_point",6);
  FUN_00696ed4(L"d3d_light_enable",2);
  FUN_00696ed4(L"d3d_model_create",0);
  FUN_00696ed4(L"d3d_model_destroy",1);
  FUN_00696ed4(L"d3d_model_clear",1);
  FUN_00696ed4(L"d3d_model_load",2);
  FUN_00696ed4(L"d3d_model_save",2);
  FUN_00696ed4(L"d3d_model_draw",5);
  FUN_00696ed4(L"d3d_model_primitive_begin",2);
  FUN_00696ed4(L"d3d_model_primitive_end",1);
  FUN_00696ed4(L"d3d_model_vertex",4);
  FUN_00696ed4(L"d3d_model_vertex_color",6);
  FUN_00696ed4(L"d3d_model_vertex_texture",6);
  FUN_00696ed4(L"d3d_model_vertex_texture_color",8);
  FUN_00696ed4(L"d3d_model_vertex_normal",7);
  FUN_00696ed4(L"d3d_model_vertex_normal_color",9);
  FUN_00696ed4(L"d3d_model_vertex_normal_texture",9);
  FUN_00696ed4(L"d3d_model_vertex_normal_texture_color",0xb);
  FUN_00696ed4(L"d3d_model_block",9);
  FUN_00696ed4(L"d3d_model_cylinder",0xb);
  FUN_00696ed4(L"d3d_model_cone",0xb);
  FUN_00696ed4(L"d3d_model_ellipsoid",10);
  FUN_00696ed4(L"d3d_model_wall",9);
  FUN_00696ed4(L"d3d_model_floor",9);
  return;
}
