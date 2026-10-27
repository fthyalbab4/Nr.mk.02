// rea decompile_all
// name: FUN_005b4b5c
// address: 0x5b4b5c
// body: available
// range: 0x5b4b5c-0x5b4c30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b4b5c(int *param_1,short *param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *local_18;
  int local_14;

  param_3 = *param_2 - param_3;
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  iVar3 = 0;
  for (; param_3 != 0; param_3 = param_3 >> 1) {
    iVar3 = iVar3 + 1;
  }
  if (0xb < iVar3) {
    *(undefined4 *)(*param_1 + 0x14) = 6;
    (**(code **)*param_1)();
  }
  piVar1 = (int *)(param_5 + iVar3 * 4);
  *piVar1 = *piVar1 + 1;
  iVar3 = 0;
  local_14 = 1;
  local_18 = &DAT_00686f8c;
  do {
    iVar2 = (int)param_2[*local_18];
    if (iVar2 == 0) {
      iVar3 = iVar3 + 1;
    }
    else {
      for (; 0xf < iVar3; iVar3 = iVar3 + -0x10) {
        param_4[0xf0] = param_4[0xf0] + 1;
      }
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      iVar4 = 1;
      while (iVar2 = iVar2 >> 1, iVar2 != 0) {
        iVar4 = iVar4 + 1;
      }
      if (10 < iVar4) {
        *(undefined4 *)(*param_1 + 0x14) = 6;
        (**(code **)*param_1)();
      }
      param_4[iVar4 + iVar3 * 0x10] = param_4[iVar4 + iVar3 * 0x10] + 1;
      iVar3 = 0;
    }
    local_14 = local_14 + 1;
    local_18 = local_18 + 1;
  } while (local_14 < 0x40);
  if (0 < iVar3) {
    *param_4 = *param_4 + 1;
  }
  return;
}
