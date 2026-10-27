// rea decompile_all
// name: FUN_0063a5a8
// address: 0x63a5a8
// body: available
// range: 0x63a5a8-0x63ad82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063a5a8(void)

{
  FUN_0058917c(&PTR_DAT_0063ad90,&LAB_00637eac,2,0);
  FUN_0058917c(L"place_free",FUN_0063804c,2,0);
  FUN_0058917c(L"place_empty",FUN_00638010,2,0);
  FUN_0058917c(L"place_meeting",FUN_00638088,3,0);
  FUN_0058917c(L"place_snapped",&LAB_006380f8,2,0);
  FUN_0058917c(&PTR_DAT_0063ae4c,&LAB_006381ac,2,0);
  FUN_0058917c(&PTR_DAT_0063ae6c,FUN_006381cc,3,0);
  FUN_0058917c(L"move_contact",&LAB_00638244,1,0);
  FUN_0058917c(L"move_contact_solid",&LAB_0063829c,2,0);
  FUN_0058917c(L"move_contact_all",&LAB_006382c0,2,0);
  FUN_0058917c(&PTR_DAT_0063af2c,&LAB_006382e4,2,0);
  FUN_0058917c(&PTR_DAT_0063af60,&LAB_00638308,2,0);
  FUN_0058917c(L"move_bounce",&LAB_006381f4,1,0);
  FUN_0058917c(L"move_bounce_solid",&LAB_006381f4,1,0);
  FUN_0058917c(L"move_bounce_all",&LAB_0063821c,1,0);
  FUN_0058917c(&PTR_DAT_0063b010,&LAB_0063832c,3,0);
  FUN_0058917c(&PTR_DAT_0063b030,&LAB_00638470,2,0);
  FUN_0058917c(&PTR_DAT_0063b054,&LAB_0063849c,2,0);
  FUN_0058917c(&PTR_DAT_0063b078,FUN_006384bc,2,0);
  FUN_0058917c(&PTR_DAT_0063b0a8,FUN_00638674,1,0);
  FUN_0058917c(&PTR_DAT_0063b0dc,FUN_00638890,4,0);
  FUN_0058917c(&PTR_DAT_0063b100,&LAB_006388e0,0,0);
  FUN_0058917c(&PTR_DAT_0063b120,&LAB_00638904,4,0);
  FUN_0058917c(&PTR_DAT_0063b14c,&LAB_00638a94,5,1);
  FUN_0058917c(&PTR_DAT_0063b178,&LAB_006389bc,4,0);
  FUN_0058917c(&PTR_DAT_0063b1b0,&LAB_00638c74,5,1);
  FUN_0058917c(&PTR_DAT_0063b1e8,&LAB_00638a5c,4,0);
  FUN_0058917c(&PTR_DAT_0063b220,&LAB_00638960,4,0);
  FUN_0058917c(&PTR_DAT_0063b250,&LAB_00638b80,6,1);
  FUN_0058917c(&PTR_DAT_0063b280,&LAB_00638a0c,4,0);
  FUN_0058917c(&PTR_DAT_0063b2c0,&LAB_00638d50,6,1);
  FUN_0058917c(L"mp_grid_create",&LAB_00638e34,6,1);
  FUN_0058917c(L"mp_grid_destroy",FUN_00638e94,1,1);
  FUN_0058917c(L"mp_grid_clear_all",FUN_00638eac,1,1);
  FUN_0058917c(L"mp_grid_clear_cell",FUN_00638ec4,3,1);
  FUN_0058917c(L"mp_grid_clear_rectangle",&LAB_00638ef4,5,1);
  FUN_0058917c(L"mp_grid_add_cell",FUN_00638f34,3,1);
  FUN_0058917c(L"mp_grid_add_rectangle",&LAB_00638f64,5,1);
  FUN_0058917c(L"mp_grid_add_instances",FUN_00638fa4,3,1);
  FUN_0058917c(L"mp_grid_path",&LAB_00639144,7,1);
  FUN_0058917c(L"mp_grid_draw",&LAB_00639244,1,1);
  FUN_0058917c(&PTR_DAT_0063b4e8,FUN_0063925c,5,0);
  FUN_0058917c(&PTR_DAT_0063b514,&LAB_006392d0,7,0);
  FUN_0058917c(&PTR_DAT_0063b548,&LAB_006393e0,6,0);
  FUN_0058917c(&PTR_DAT_0063b578,&LAB_00639358,7,0);
  FUN_0058917c(&PTR_DAT_0063b5a8,&LAB_00639480,7,0);
  FUN_0058917c(&PTR_DAT_0063b5d4,&LAB_00639508,2,0);
  FUN_0058917c(&PTR_DAT_0063b5fc,FUN_00639678,1,0);
  FUN_0058917c(&PTR_DAT_0063b628,&LAB_00639814,1,0);
  FUN_0058917c(&PTR_DAT_0063b654,&LAB_006398bc,3,0);
  FUN_0058917c(&PTR_DAT_0063b684,FUN_00639904,3,0);
  FUN_0058917c(&PTR_DAT_0063b6b4,FUN_0063994c,3,0);
  FUN_0058917c(&PTR_DAT_0063b6e4,FUN_00639994,3,0);
  FUN_0058917c(&PTR_DAT_0063b710,FUN_006399e4,3,0);
  FUN_0058917c(&PTR_DAT_0063b73c,&LAB_00639a1c,1,0);
  FUN_0058917c(&PTR_DAT_0063b764,FUN_00639aa0,2,0);
  FUN_0058917c(&PTR_DAT_0063b790,&LAB_00639a94,0,0);
  FUN_0058917c(&PTR_DAT_0063b7c0,&LAB_00639ad8,1,0);
  FUN_0058917c(&PTR_DAT_0063b7ec,&LAB_00639b50,2,0);
  FUN_0058917c(&PTR_DAT_0063b818,FUN_00639b8c,3,0);
  FUN_0058917c(&PTR_DAT_0063b848,FUN_00639af8,2,0);
  FUN_0058917c(&PTR_DAT_0063b878,FUN_00639b14,4,0);
  FUN_0058917c(&PTR_DAT_0063b8a4,&LAB_00639bfc,1,0);
  FUN_0058917c(&PTR_DAT_0063b8e0,&LAB_00639c64,1,0);
  FUN_0058917c(&PTR_DAT_0063b924,&LAB_00639d74,6,0);
  FUN_0058917c(&PTR_DAT_0063b968,&LAB_00639ed4,0,0);
  FUN_0058917c(&PTR_DAT_0063b9a0,FUN_00639f10,1,0);
  FUN_0058917c(&PTR_DAT_0063b9e0,&LAB_0063a054,5,0);
  FUN_0058917c(&PTR_DAT_0063ba20,&LAB_0063a190,1,0);
  FUN_0058917c(&PTR_DAT_0063ba40,FUN_0063a1b0,0,0);
  FUN_0058917c(&PTR_DAT_0063ba74,FUN_0063a1c4,0,0);
  FUN_0058917c(&PTR_DAT_0063baa0,FUN_0063a1d8,1,0);
  FUN_0058917c(&PTR_DAT_0063bac8,&LAB_0063a244,1,0);
  FUN_0058917c(&PTR_DAT_0063bae8,&LAB_0063a2b0,0,0);
  FUN_0058917c(&PTR_DAT_0063bb10,FUN_0063a2c4,0,0);
  FUN_0058917c(&PTR_DAT_0063bb30,FUN_0063a2d0,0,0);
  FUN_0058917c(&PTR_DAT_0063bb58,FUN_0063a2dc,1,0);
  FUN_0058917c(&PTR_DAT_0063bb78,&LAB_0063a300,1,0);
  FUN_0058917c(&PTR_DAT_0063bb98,&LAB_0063a350,2,1);
  FUN_0058917c(&PTR_DAT_0063bbc8,FUN_0063a3c4,1,1);
  FUN_0058917c(L"sleep",FUN_0063a3f4,1,0);
  FUN_0058917c(&PTR_DAT_0063bc10,&LAB_0063a418,0,0);
  FUN_0058917c(&PTR_DAT_0063bc40,&LAB_0063a434,0,0);
  FUN_0058917c(&PTR_DAT_0063bc6c,&LAB_0063a450,1,0);
  FUN_0058917c(&PTR_DAT_0063bc94,&LAB_0063a468,2,0);
  FUN_0058917c(&PTR_DAT_0063bcc4,&LAB_0063a480,3,0);
  FUN_0058917c(&PTR_DAT_0063bcf4,&LAB_0063a498,0,0);
  FUN_0058917c(&PTR_DAT_0063bd20,&LAB_0063a4cc,0,0);
  FUN_0058917c(L"YoYo_AddVirtualKey",&LAB_0063a4e4,5,0);
  FUN_0058917c(L"YoYo_DeleteVirtualKey",&LAB_0063a4fc,1,0);
  FUN_0058917c(L"YoYo_ShowVirtualKey",&LAB_0063a514,1,0);
  FUN_0058917c(L"YoYo_HideVirtualKey",&LAB_0063a52c,1,0);
  FUN_0058917c(&PTR_DAT_0063be1c,&LAB_0063a544,1,0);
  return;
}
