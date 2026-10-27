// rea decompile_all
// name: FUN_005c2304
// address: 0x5c2304
// body: available
// range: 0x5c2304-0x5c2422 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c2304(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int *local_18;
  undefined4 *local_14;

  iVar1 = *(int *)((int)param_1 + 0x1ae);
  if ((((*(int *)((int)param_1 + 0x182) != 0) || (*(int *)((int)param_1 + 0x186) != 0x3f)) ||
      (*(int *)((int)param_1 + 0x18a) != 0)) || (*(int *)((int)param_1 + 0x18e) != 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x76;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  }
  local_14 = (undefined4 *)(iVar1 + 0x14);
  local_18 = (int *)((int)param_1 + 0x13e);
  for (local_1c = 0; local_1c < *(int *)((int)param_1 + 0x13a); local_1c = local_1c + 1) {
    iVar2 = *(int *)(*local_18 + 0x14);
    iVar3 = *(int *)(*local_18 + 0x18);
    if (((iVar2 < 0) || (3 < iVar2)) || (param_1[iVar2 + 0x2c] == 0)) {
      iVar4 = *param_1;
      *(undefined4 *)(iVar4 + 0x14) = 0x31;
      *(int *)(iVar4 + 0x18) = iVar2;
      (**(code **)*param_1)();
    }
    if (((iVar3 < 0) || (3 < iVar3)) || (param_1[iVar3 + 0x30] == 0)) {
      iVar4 = *param_1;
      *(undefined4 *)(iVar4 + 0x14) = 0x31;
      *(int *)(iVar4 + 0x18) = iVar3;
      (**(code **)*param_1)();
    }
    FUN_005c2424(param_1,param_1[iVar2 + 0x2c],iVar1 + 0x28 + iVar2 * 4);
    FUN_005c2424(param_1,param_1[iVar3 + 0x30],iVar1 + 0x38 + iVar3 * 4);
    *local_14 = 0;
    local_14 = local_14 + 1;
    local_18 = local_18 + 1;
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(int *)(iVar1 + 0x24) = param_1[0x44];
  return;
}
