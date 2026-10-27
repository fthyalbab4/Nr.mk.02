// rea decompile_all
// name: FUN_0063bc04
// address: 0x63bc04
// body: available
// range: 0x63bc04-0x63bc1d inclusive
// range: 0x63bc73-0x63be5e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063bc04(undefined4 param_1,undefined4 param_2)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;

  switch(param_2) {
  case 10:
    FUN_00407eb8(*(int *)PTR_DAT_00781e14 + 0x73c,L"Select a region with the mouse");
    FUN_004ee8f4(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc),CONCAT22(extraout_var,0x12));
    break;
  case 0xb:
    FUN_00407eb8(*(int *)PTR_DAT_00781e14 + 0x73c,L"Add a region with the mouse");
    FUN_004ee8f4(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc),CONCAT22(extraout_var_00,0x13));
    break;
  case 0xc:
    FUN_00407eb8(*(int *)PTR_DAT_00781e14 + 0x73c,L"Remove a region with the mouse");
    FUN_004ee8f4(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc),CONCAT22(extraout_var_01,0x14));
    break;
  case 0x14:
    FUN_00407eb8(*(int *)PTR_DAT_00781e14 + 0x73c,L"Click to select with magic wand");
    FUN_004ee8f4(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc),CONCAT22(extraout_var_02,0x15));
    break;
  case 0x15:
    FUN_00407eb8(*(int *)PTR_DAT_00781e14 + 0x73c,L"Click to add with magic wand");
    FUN_004ee8f4(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc),CONCAT22(extraout_var_03,0x16));
    break;
  case 0x16:
    FUN_00407eb8(*(int *)PTR_DAT_00781e14 + 0x73c,L"Click to remove with magic wand");
    FUN_004ee8f4(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc),CONCAT22(extraout_var_04,0x17));
    break;
  case 0x1e:
    FUN_00407eb8(*(int *)PTR_DAT_00781e14 + 0x73c,L"Spray selection with the mouse");
    FUN_004ee8f4(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc),CONCAT22(extraout_var_05,0x18));
    break;
  case 0x1f:
    FUN_00407eb8(*(int *)PTR_DAT_00781e14 + 0x73c,L"Add selection by spraying");
    FUN_004ee8f4(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc),CONCAT22(extraout_var_06,0x19));
    break;
  case 0x20:
    FUN_00407eb8(*(int *)PTR_DAT_00781e14 + 0x73c,L"Remove selection by spraying");
    FUN_004ee8f4(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc),CONCAT22(extraout_var_07,0x1a));
    break;
  case 0x32:
    FUN_00407eb8(*(int *)PTR_DAT_00781e14 + 0x73c,L"Move with the mouse, <Right> for copy");
    FUN_004ee8f4(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc),CONCAT22(extraout_var_08,0xe));
  }
  FUN_00645298(*(undefined4 *)PTR_DAT_00781e14);
  return;
}
