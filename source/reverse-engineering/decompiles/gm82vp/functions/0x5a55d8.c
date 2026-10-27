// rea decompile_all
// name: FUN_005a55d8
// address: 0x5a55d8
// body: available
// range: 0x5a55d8-0x5a5828 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a55d8(int *param_1)

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

  bVar7 = param_1[100] != 0;
  iVar1 = param_1[0x6f];
  bVar3 = false;
  if (bVar7) {
    if ((param_1[0x65] < param_1[100]) || (0x3f < param_1[0x65])) {
      bVar3 = true;
    }
    if (param_1[0x52] != 1) {
      bVar3 = true;
    }
  }
  else if (param_1[0x65] != 0) {
    bVar3 = true;
  }
  if ((param_1[0x66] != 0) && (param_1[0x66] + -1 != param_1[0x67])) {
    bVar3 = true;
  }
  if (0xd < param_1[0x67]) {
    bVar3 = true;
  }
  if (bVar3) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x10;
    *(int *)(iVar2 + 0x18) = param_1[100];
    *(int *)(iVar2 + 0x1c) = param_1[0x65];
    *(int *)(iVar2 + 0x20) = param_1[0x66];
    *(int *)(iVar2 + 0x24) = param_1[0x67];
    (**(code **)*param_1)();
  }
  local_18 = param_1 + 0x53;
  for (local_20 = 0; local_20 < param_1[0x52]; local_20 = local_20 + 1) {
    iVar2 = *(int *)(*local_18 + 4);
    piVar5 = (int *)(iVar2 * 0x100 + param_1[0x28]);
    if ((bVar7) && (*piVar5 < 0)) {
      iVar6 = *param_1;
      *(undefined4 *)(iVar6 + 0x14) = 0x73;
      *(int *)(iVar6 + 0x18) = iVar2;
      *(undefined4 *)(iVar6 + 0x1c) = 0;
      (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    }
    iVar6 = param_1[100];
    piVar5 = piVar5 + iVar6;
    for (; iVar6 <= param_1[0x65]; iVar6 = iVar6 + 1) {
      if (*piVar5 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar5;
      }
      if (iVar4 != param_1[0x66]) {
        iVar4 = *param_1;
        *(undefined4 *)(iVar4 + 0x14) = 0x73;
        *(int *)(iVar4 + 0x18) = iVar2;
        *(int *)(iVar4 + 0x1c) = iVar6;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      }
      *piVar5 = param_1[0x67];
      piVar5 = piVar5 + 1;
    }
    local_18 = local_18 + 1;
  }
  if (param_1[0x66] == 0) {
    if (bVar7) {
      *(code **)(iVar1 + 4) = FUN_005a5adc;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_005a58a0;
    }
  }
  else if (bVar7) {
    *(code **)(iVar1 + 4) = FUN_005a5e60;
  }
  else {
    *(code **)(iVar1 + 4) = FUN_005a5d68;
  }
  puStack_14 = (undefined4 *)(iVar1 + 0x18);
  piVar5 = param_1 + 0x53;
  for (local_20 = 0; local_20 < param_1[0x52]; local_20 = local_20 + 1) {
    if (bVar7) {
      iVar2 = *(int *)(*piVar5 + 0x18);
      FUN_005a6438(param_1,0,iVar2,iVar1 + 0x2c + iVar2 * 4);
      *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x2c + iVar2 * 4);
    }
    else if (param_1[0x66] == 0) {
      iVar2 = *(int *)(*piVar5 + 0x14);
      FUN_005a6438(param_1,1,iVar2,iVar1 + 0x2c + iVar2 * 4);
    }
    *puStack_14 = 0;
    puStack_14 = puStack_14 + 1;
    piVar5 = piVar5 + 1;
  }
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(int *)(iVar1 + 0x28) = param_1[0x45];
  return;
}
