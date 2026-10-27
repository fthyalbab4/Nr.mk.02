// rea decompile_all
// name: FUN_0054cfac
// address: 0x54cfac
// body: available
// range: 0x54cfac-0x54d064 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054cfac(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_28 = *param_1;
  local_14 = param_1[1];
  local_10 = param_1[2];
  local_c = param_1[3];
  piVar2 = (int *)(param_4 + -4);
  local_18 = local_28;
  local_8 = param_2;
  if ((*(byte *)(*piVar2 + 0x3d) & 1) == 0) {
    (**(code **)(**(int **)(param_4 + -8) + 0x80))(*(int **)(param_4 + -8),&local_18,param_2);
  }
  else {
    local_20 = (**(code **)(*(int *)*piVar2 + 0x30))();
    local_20 = local_20 + local_28;
    while (local_28 < local_10) {
      local_24 = local_14;
      local_1c = (**(code **)(*(int *)*piVar2 + 0x24))();
      local_1c = local_1c + local_24;
      while (local_24 < local_c) {
        (**(code **)(**(int **)(param_4 + -8) + 0x80))(*(int **)(param_4 + -8),&local_28,local_8);
        iVar1 = (**(code **)(*(int *)*piVar2 + 0x24))();
        local_24 = local_24 + iVar1;
        local_1c = (**(code **)(*(int *)*piVar2 + 0x24))();
        local_1c = local_1c + local_24;
      }
      iVar1 = (**(code **)(*(int *)*piVar2 + 0x30))();
      local_28 = local_28 + iVar1;
      local_20 = (**(code **)(*(int *)*piVar2 + 0x30))();
      local_20 = local_20 + local_28;
    }
  }
  return;
}
