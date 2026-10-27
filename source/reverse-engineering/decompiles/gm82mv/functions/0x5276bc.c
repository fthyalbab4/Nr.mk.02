// rea decompile_all
// name: FUN_005276bc
// address: 0x5276bc
// body: available
// range: 0x5276bc-0x52779f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005276bc(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_14;

  iVar2 = param_1[0x1c];
  iVar1 = param_2 / iVar2;
  iVar3 = param_2 % iVar2;
  local_14 = (uint)(iVar3 != 0);
  if (param_1[0x18] < (int)(param_1[0x1e] + iVar1 + local_14)) {
    iVar1 = param_1[0x18] - param_1[0x1e];
    iVar3 = param_2 - iVar1 * iVar2;
    iVar2 = FUN_00527574(param_1,iVar3,param_1[0x18]);
    local_14 = iVar2 + 1;
  }
  iVar2 = FUN_00527574(param_1,param_2,param_1[0x18]);
  if (iVar2 + 1 < (int)(local_14 + iVar1)) {
    (**(code **)(*param_1 + 4))();
    FUN_005275e4(param_1,param_2);
  }
  else {
    FUN_005275c8(param_1);
    for (; 0 < iVar1; iVar1 = iVar1 + -1) {
      FUN_005274e0(param_1,(int)*(short *)((int)param_1 + 0x4a) + param_1[0x1c] + -2);
    }
    if (0 < iVar3) {
      if ((char)param_1[0xe] == '\0') {
        if (iVar3 == 1) {
          FUN_005274e0(param_1,param_1[0x1b]);
        }
        else {
          FUN_005274e0(param_1,*(short *)((int)param_1 + 0x4a) + iVar3 + -2);
        }
      }
      else {
        FUN_005275e4(param_1,iVar3);
      }
    }
    FUN_005275d0(param_1);
  }
  return;
}
