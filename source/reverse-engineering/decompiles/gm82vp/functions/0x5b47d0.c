// rea decompile_all
// name: FUN_005b47d0
// address: 0x5b47d0
// body: available
// range: 0x5b47d0-0x5b4960 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b47d0(int param_1,short *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_18;
  int local_14;
  int local_10;

  local_10 = *param_2 - param_3;
  iVar3 = local_10;
  if (local_10 < 0) {
    iVar3 = -local_10;
    local_10 = local_10 + -1;
  }
  iVar4 = 0;
  for (; iVar3 != 0; iVar3 = iVar3 >> 1) {
    iVar4 = iVar4 + 1;
  }
  if (0xb < iVar4) {
    piVar1 = *(int **)(param_1 + 0x20);
    *(undefined4 *)(*piVar1 + 0x14) = 6;
    (**(code **)*piVar1)();
  }
  iVar3 = FUN_005b46f8(param_1,*(undefined4 *)(param_5 + iVar4 * 4),
                       (int)*(char *)(param_5 + 0x400 + iVar4));
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else if ((iVar4 == 0) || (iVar3 = FUN_005b46f8(param_1,local_10,iVar4), iVar3 != 0)) {
    local_14 = 1;
    local_18 = &DAT_00686f8c;
    iVar3 = 0;
    do {
      local_10 = (int)param_2[*local_18];
      if (local_10 == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        for (; 0xf < iVar3; iVar3 = iVar3 + -0x10) {
          iVar4 = FUN_005b46f8(param_1,param_4[0xf0],(int)*(char *)(param_4 + 0x13c));
          if (iVar4 == 0) {
            return 0;
          }
        }
        iVar4 = local_10;
        if (local_10 < 0) {
          iVar4 = -local_10;
          local_10 = local_10 + -1;
        }
        iVar5 = 1;
        while (iVar4 = iVar4 >> 1, iVar4 != 0) {
          iVar5 = iVar5 + 1;
        }
        if (10 < iVar5) {
          piVar1 = *(int **)(param_1 + 0x20);
          *(undefined4 *)(*piVar1 + 0x14) = 6;
          (**(code **)*piVar1)();
        }
        iVar3 = iVar3 * 0x10 + iVar5;
        iVar3 = FUN_005b46f8(param_1,param_4[iVar3],(int)*(char *)((int)param_4 + iVar3 + 0x400));
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_005b46f8(param_1,local_10,iVar5);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = 0;
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
    } while (local_14 < 0x40);
    if ((iVar3 < 1) ||
       (iVar3 = FUN_005b46f8(param_1,*param_4,(int)*(char *)(param_4 + 0x100)), iVar3 != 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
