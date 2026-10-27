// rea decompile_all
// name: FUN_00581c60
// address: 0x581c60
// body: available
// range: 0x581c60-0x581e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00581c60(int *param_1)

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
  *(undefined4 **)((int)param_1 + 0x1b6) = puVar4;
  *puVar4 = &LAB_0058177c;
  puVar4[1] = FUN_00581794;
  puVar4[2] = 0;
  if (*(int *)((int)param_1 + 0x122) != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x17;
    (**(code **)*param_1)();
  }
  if ((param_1[0x12] == 0) || (*(int *)((int)param_1 + 0x12e) < 2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iStack_28 = 0;
  iVar10 = param_1[0x35];
  puStack_14 = puVar4 + 0x23;
  piVar9 = puVar4 + 0x19;
  for (; iStack_28 < param_1[8]; iStack_28 = iStack_28 + 1) {
    iVar5 = (*(int *)(iVar10 + 8) * *(int *)(iVar10 + 0x24)) / *(int *)((int)param_1 + 0x12e);
    iVar6 = (*(int *)(iVar10 + 0xc) * *(int *)(iVar10 + 0x24)) / *(int *)((int)param_1 + 0x12e);
    iVar8 = *(int *)((int)param_1 + 0x126);
    iVar1 = *(int *)((int)param_1 + 0x12a);
    *piVar9 = iVar6;
    bVar3 = true;
    if (*(int *)(iVar10 + 0x30) == 0) {
      piVar9[-0xc] = (int)FUN_005818a0;
      bVar3 = false;
    }
    else if ((iVar5 == iVar8) && (iVar6 == iVar1)) {
      piVar9[-0xc] = (int)FUN_00581894;
      bVar3 = false;
    }
    else if ((iVar5 * 2 == iVar8) && (iVar6 == iVar1)) {
      if ((bVar2) && (2 < *(uint *)(iVar10 + 0x28))) {
        piVar9[-0xc] = (int)FUN_00581a58;
      }
      else {
        piVar9[-0xc] = (int)FUN_0058196c;
      }
    }
    else if ((iVar5 * 2 == iVar8) && (iVar6 * 2 == iVar1)) {
      if ((bVar2) && (2 < *(uint *)(iVar10 + 0x28))) {
        piVar9[-0xc] = (int)FUN_00581b0c;
        puVar4[2] = 1;
      }
      else {
        piVar9[-0xc] = (int)FUN_005819c8;
      }
    }
    else if ((iVar8 % iVar5 == 0) && (iVar1 % iVar6 == 0)) {
      piVar9[-0xc] = (int)FUN_005818b0;
      *(char *)puStack_14 = (char)(iVar8 / iVar5);
      *(char *)((int)puStack_14 + 10) = (char)(iVar1 / iVar6);
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 0x25;
      (**(code **)*param_1)();
    }
    if (bVar3) {
      uVar7 = FUN_00584d80(param_1[0x1b],*(undefined4 *)((int)param_1 + 0x126),
                           *(undefined4 *)((int)param_1 + 0x12a),
                           *(undefined4 *)((int)param_1 + 0x12a));
      iVar8 = (**(code **)(param_1[1] + 8))(param_1,1,uVar7);
      piVar9[-0x16] = iVar8;
    }
    piVar9 = piVar9 + 1;
    puStack_14 = (undefined4 *)((int)puStack_14 + 1);
    iVar10 = iVar10 + 0x54;
  }
  return;
}
