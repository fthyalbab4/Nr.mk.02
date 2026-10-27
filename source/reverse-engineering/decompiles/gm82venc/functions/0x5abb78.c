// rea decompile_all
// name: FUN_005abb78
// address: 0x5abb78
// body: available
// range: 0x5abb78-0x5abd8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005abb78(int *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iStack_28;
  undefined4 *puStack_14;

  puVar4 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xa0);
  param_1[0x71] = (int)puVar4;
  *puVar4 = &LAB_005ab694;
  puVar4[1] = FUN_005ab6ac;
  puVar4[2] = 0;
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)();
  }
  if ((param_1[0x13] == 0) || (param_1[0x4f] < 2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iStack_28 = 0;
  iVar10 = param_1[0x36];
  puStack_14 = puVar4 + 0x23;
  piVar9 = puVar4 + 0x19;
  for (; iStack_28 < param_1[9]; iStack_28 = iStack_28 + 1) {
    iVar5 = (*(int *)(iVar10 + 8) * *(int *)(iVar10 + 0x24)) / param_1[0x4f];
    iVar6 = (*(int *)(iVar10 + 0xc) * *(int *)(iVar10 + 0x24)) / param_1[0x4f];
    iVar8 = param_1[0x4d];
    iVar1 = param_1[0x4e];
    *piVar9 = iVar6;
    bVar3 = true;
    if (*(int *)(iVar10 + 0x30) == 0) {
      piVar9[-0xc] = (int)FUN_005ab7b8;
      bVar3 = false;
    }
    else if ((iVar5 == iVar8) && (iVar6 == iVar1)) {
      piVar9[-0xc] = (int)FUN_005ab7ac;
      bVar3 = false;
    }
    else if ((iVar5 * 2 == iVar8) && (iVar6 == iVar1)) {
      if ((bVar2) && (2 < *(uint *)(iVar10 + 0x28))) {
        piVar9[-0xc] = (int)FUN_005ab970;
      }
      else {
        piVar9[-0xc] = (int)FUN_005ab884;
      }
    }
    else if ((iVar5 * 2 == iVar8) && (iVar6 * 2 == iVar1)) {
      if ((bVar2) && (2 < *(uint *)(iVar10 + 0x28))) {
        piVar9[-0xc] = (int)FUN_005aba24;
        puVar4[2] = 1;
      }
      else {
        piVar9[-0xc] = (int)FUN_005ab8e0;
      }
    }
    else if ((iVar8 % iVar5 == 0) && (iVar1 % iVar6 == 0)) {
      piVar9[-0xc] = (int)FUN_005ab7c8;
      *(char *)puStack_14 = (char)(iVar8 / iVar5);
      *(char *)((int)puStack_14 + 10) = (char)(iVar1 / iVar6);
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 0x26;
      (**(code **)*param_1)();
    }
    if (bVar3) {
      uVar7 = FUN_005aea50(param_1[0x1c],param_1[0x4d],param_1[0x4e],param_1[0x4e]);
      iVar8 = (**(code **)(param_1[1] + 8))(param_1,1,uVar7);
      piVar9[-0x16] = iVar8;
    }
    piVar9 = piVar9 + 1;
    puStack_14 = (undefined4 *)((int)puStack_14 + 1);
    iVar10 = iVar10 + 0x54;
  }
  return;
}
