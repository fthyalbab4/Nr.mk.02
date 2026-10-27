// rea decompile_all
// name: FUN_0061d620
// address: 0x61d620
// body: available
// range: 0x61d620-0x61da5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061d620(void)

{
  FUN_00572690(&DAT_0061da6c,&LAB_0061bdd4,&LAB_0061c378,1);
  FUN_00572690(&DAT_0061da7c,&LAB_0061bde8,&LAB_0061c3ec,1);
  FUN_00572690(&PTR_DAT_0061da8c,&LAB_0061bdfc,&LAB_0061c460,1);
  FUN_00572690(&PTR_DAT_0061daac,&LAB_0061be10,&LAB_0061c4d0,1);
  FUN_00572690(L"xstart",&LAB_0061be24,&LAB_0061c540,1);
  FUN_00572690(L"ystart",&LAB_0061be38,&LAB_0061c5b0,1);
  FUN_00572690(L"hspeed",&LAB_0061be4c,&LAB_0061c620,1);
  FUN_00572690(L"vspeed",&LAB_0061be68,&LAB_0061c690,1);
  FUN_00572690(&PTR_DAT_0061db3c,&LAB_0061be84,&LAB_0061c700,1);
  FUN_00572690(L"speed",&LAB_0061bea0,&LAB_0061c770,1);
  FUN_00572690(&PTR_DAT_0061db74,&LAB_0061bebc,&LAB_0061c7e0,1);
  FUN_00572690(L"gravity",&LAB_0061bed8,FUN_0061c854,1);
  FUN_00572690(L"gravity_direction",&LAB_0061bef4,FUN_0061c8c8,1);
  FUN_00572690(L"object_index",&LAB_0061bfb4,0,0);
  FUN_00572690(&PTR_LAB_0061dc08,&LAB_0061bf10,0,0);
  FUN_00572690(L"alarm",&LAB_0061bf20,FUN_0061c93c,1);
  FUN_00572690(L"solid",&LAB_0061bf54,&LAB_0061c9c0,1);
  FUN_00572690(L"visible",&LAB_0061bf74,&LAB_0061ca4c,1);
  FUN_00572690(&PTR_DAT_0061dc68,&LAB_0061bf94,&LAB_0061cad8,1);
  FUN_00572690(L"depth",&LAB_0061bfc8,&LAB_0061cb64,1);
  FUN_00572690(L"bbox_left",&LAB_0061bfdc,0,0);
  FUN_00572690(L"bbox_right",&LAB_0061bff0,0,0);
  FUN_00572690(L"bbox_top",&LAB_0061c018,0,0);
  FUN_00572690(L"bbox_bottom",&LAB_0061c004,0,0);
  FUN_00572690(&PTR_DAT_0061dd2c,&LAB_0061c02c,&LAB_0061cbd4,1);
  FUN_00572690(L"image_index",&LAB_0061c03c,&LAB_0061cc48,1);
  FUN_00572690(L"image_single",&LAB_0061c050,&LAB_0061ccb8,1);
  FUN_00572690(L"image_number",&LAB_0061c088,0,0);
  FUN_00572690(&PTR_DAT_0061ddc8,&LAB_0061c0ac,0,0);
  FUN_00572690(&PTR_DAT_0061ddf0,&LAB_0061c0f0,0,0);
  FUN_00572690(&PTR_DAT_0061de18,&LAB_0061c134,0,0);
  FUN_00572690(&PTR_DAT_0061de44,&LAB_0061c16c,0,0);
  FUN_00572690(L"image_xscale",&LAB_0061c1a4,&LAB_0061cd50,1);
  FUN_00572690(L"image_yscale",&LAB_0061c1b8,&LAB_0061cdc0,1);
  FUN_00572690(L"image_angle",&LAB_0061c1cc,&LAB_0061ce30,1);
  FUN_00572690(L"image_alpha",&LAB_0061c1e0,&LAB_0061cea0,1);
  FUN_00572690(L"image_blend",&LAB_0061c1f4,&LAB_0061cf10,1);
  FUN_00572690(L"image_speed",&LAB_0061c214,&LAB_0061d024,1);
  FUN_00572690(&PTR_DAT_0061df50,&LAB_0061c228,&LAB_0061d094,1);
  FUN_00572690(&PTR_DAT_0061df74,&LAB_0061c238,0,0);
  FUN_00572690(&PTR_DAT_0061df98,&LAB_0061c24c,&LAB_0061d108,1);
  FUN_00572690(&PTR_DAT_0061dfc0,&LAB_0061c268,&LAB_0061d178,1);
  FUN_00572690(&PTR_DAT_0061dff8,&LAB_0061c284,&LAB_0061d1e8,1);
  FUN_00572690(&PTR_DAT_0061e01c,&LAB_0061c2a0,&LAB_0061d258,1);
  FUN_00572690(&PTR_DAT_0061e040,&LAB_0061c2bc,FUN_0061d2cc,1);
  FUN_00572690(&PTR_DAT_0061e070,&LAB_0061c2d8,FUN_0061d340,1);
  FUN_00572690(&PTR_DAT_0061e09c,&LAB_0061c2ec,FUN_0061d3b0,1);
  FUN_00572690(&PTR_DAT_0061e0c8,&LAB_0061c300,FUN_0061d420,1);
  FUN_00572690(&PTR_DAT_0061e0f8,&LAB_0061c31c,FUN_0061d494,1);
  FUN_00572690(&PTR_DAT_0061e124,&LAB_0061c338,FUN_0061d508,1);
  FUN_00572690(&PTR_DAT_0061e154,&LAB_0061c358,&LAB_0061d594,1);
  return;
}
