// rea decompile_all
// name: FUN_0048dc8c
// address: 0x48dc8c
// body: available
// range: 0x48dc8c-0x48dd75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048dc8c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  piVar1 = *(int **)(*(int *)(param_4 + -4) + 0x1a8);
  FUN_0045b850(piVar1[0x11],*(undefined4 *)(param_4 + -8));
  local_4c = *param_1;
  local_48 = param_1[3];
  local_40 = param_1[1];
  local_3c = param_1[2];
  local_44 = local_4c;
  local_38 = local_40;
  local_1c = local_3c;
  local_18 = local_40;
  local_14 = local_4c;
  local_10 = local_40;
  local_c = local_4c;
  local_8 = local_48;
  (**(code **)(*piVar1 + 0x68))(piVar1,&local_4c,2);
  FUN_0045b850(piVar1[0x11],*(undefined4 *)(param_4 + -0xc));
  local_4c = param_1[2];
  local_48 = param_1[1];
  local_40 = param_1[3];
  local_3c = *param_1;
  local_44 = local_4c;
  local_38 = local_40;
  local_34 = local_3c;
  local_30 = local_40;
  local_2c = local_4c;
  local_28 = local_40;
  local_24 = local_4c;
  local_20 = local_48;
  (**(code **)(*piVar1 + 0x68))(piVar1,&local_4c,2);
  return;
}
