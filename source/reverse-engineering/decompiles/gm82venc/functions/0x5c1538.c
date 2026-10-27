// rea decompile_all
// name: FUN_005c1538
// address: 0x5c1538
// body: available
// range: 0x5c1538-0x5c17da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c1538(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  int local_20;
  int *local_18;
  undefined4 *puStack_14;

  bVar7 = *(int *)((int)param_1 + 0x182) != 0;
  iVar1 = *(int *)((int)param_1 + 0x1ae);
  bVar3 = false;
  if (bVar7) {
    if ((*(int *)((int)param_1 + 0x186) < *(int *)((int)param_1 + 0x182)) ||
       (0x3f < *(int *)((int)param_1 + 0x186))) {
      bVar3 = true;
    }
    if (*(int *)((int)param_1 + 0x13a) != 1) {
      bVar3 = true;
    }
  }
  else if (*(int *)((int)param_1 + 0x186) != 0) {
    bVar3 = true;
  }
  if ((*(int *)((int)param_1 + 0x18a) != 0) &&
     (*(int *)((int)param_1 + 0x18a) + -1 != *(int *)((int)param_1 + 0x18e))) {
    bVar3 = true;
  }
  if (0xd < *(int *)((int)param_1 + 0x18e)) {
    bVar3 = true;
  }
  if (bVar3) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0xe;
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)((int)param_1 + 0x182);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)((int)param_1 + 0x186);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)((int)param_1 + 0x18a);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)((int)param_1 + 0x18e);
    (**(code **)*param_1)();
  }
  local_18 = (int *)((int)param_1 + 0x13e);
  for (local_20 = 0; local_20 < *(int *)((int)param_1 + 0x13a); local_20 = local_20 + 1) {
    iVar2 = *(int *)(*local_18 + 4);
    piVar5 = (int *)(iVar2 * 0x100 + param_1[0x27]);
    if ((bVar7) && (*piVar5 < 0)) {
      iVar6 = *param_1;
      *(undefined4 *)(iVar6 + 0x14) = 0x6f;
      *(int *)(iVar6 + 0x18) = iVar2;
      *(undefined4 *)(iVar6 + 0x1c) = 0;
      (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    }
    iVar6 = *(int *)((int)param_1 + 0x182);
    piVar5 = piVar5 + iVar6;
    for (; iVar6 <= *(int *)((int)param_1 + 0x186); iVar6 = iVar6 + 1) {
      if (*piVar5 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar5;
      }
      if (iVar4 != *(int *)((int)param_1 + 0x18a)) {
        iVar4 = *param_1;
        *(undefined4 *)(iVar4 + 0x14) = 0x6f;
        *(int *)(iVar4 + 0x18) = iVar2;
        *(int *)(iVar4 + 0x1c) = iVar6;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      }
      *piVar5 = *(int *)((int)param_1 + 0x18e);
      piVar5 = piVar5 + 1;
    }
    local_18 = local_18 + 1;
  }
  if (*(int *)((int)param_1 + 0x18a) == 0) {
    if (bVar7) {
      *(code **)(iVar1 + 4) = FUN_005c1a94;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_005c1848;
    }
  }
  else if (bVar7) {
    *(code **)(iVar1 + 4) = FUN_005c1e4c;
  }
  else {
    *(code **)(iVar1 + 4) = FUN_005c1d34;
  }
  puStack_14 = (undefined4 *)(iVar1 + 0x18);
  local_20 = 0;
  piVar5 = (int *)((int)param_1 + 0x13e);
  while( true ) {
    if (*(int *)((int)param_1 + 0x13a) <= local_20) break;
    if (bVar7) {
      iVar2 = *(int *)(*piVar5 + 0x18);
      if (((iVar2 < 0) || (3 < iVar2)) || (param_1[iVar2 + 0x30] == 0)) {
        iVar6 = *param_1;
        *(undefined4 *)(iVar6 + 0x14) = 0x31;
        *(int *)(iVar6 + 0x18) = iVar2;
        (**(code **)*param_1)();
      }
      FUN_005c2424(param_1,param_1[iVar2 + 0x30],iVar1 + 0x2c + iVar2 * 4);
      *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x2c + iVar2 * 4);
    }
    else if (*(int *)((int)param_1 + 0x18a) == 0) {
      iVar2 = *(int *)(*piVar5 + 0x14);
      if (((iVar2 < 0) || (3 < iVar2)) || (param_1[iVar2 + 0x2c] == 0)) {
        iVar6 = *param_1;
        *(undefined4 *)(iVar6 + 0x14) = 0x31;
        *(int *)(iVar6 + 0x18) = iVar2;
        (**(code **)*param_1)();
      }
      FUN_005c2424(param_1,param_1[iVar2 + 0x2c],iVar1 + 0x2c + iVar2 * 4);
    }
    *puStack_14 = 0;
    local_20 = local_20 + 1;
    puStack_14 = puStack_14 + 1;
    piVar5 = piVar5 + 1;
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(int *)(iVar1 + 0x28) = param_1[0x44];
  return;
}
