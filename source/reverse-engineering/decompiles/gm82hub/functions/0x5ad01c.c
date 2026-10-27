// rea decompile_all
// name: FUN_005ad01c
// address: 0x5ad01c
// body: available
// range: 0x5ad01c-0x5ad35b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ad01c(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iStack_28;
  int *piStack_14;

  puVar3 = (undefined4 *)param_1[6];
  iVar4 = puVar3[1];
  pbVar9 = (byte *)*puVar3;
  if (*(int *)(param_1[0x6e] + 0x10) == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3e;
    (**(code **)*param_1)();
  }
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar9 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  bVar1 = *pbVar9;
  pbVar9 = pbVar9 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar9 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  bVar2 = *pbVar9;
  pbVar9 = pbVar9 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar9 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  uVar5 = (uint)*pbVar9;
  pbVar9 = pbVar9 + 1;
  iVar7 = *param_1;
  *(undefined4 *)(iVar7 + 0x14) = 0x67;
  *(uint *)(iVar7 + 0x18) = uVar5;
  (**(code **)(*param_1 + 4))(param_1,1);
  if ((((uint)bVar1 * 0x100 + (uint)bVar2 != uVar5 * 2 + 6) || (uVar5 == 0)) || (4 < uVar5)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xb;
    (**(code **)*param_1)();
  }
  param_1[0x52] = uVar5;
  iStack_28 = 0;
  piStack_14 = param_1 + 0x53;
  if (uVar5 != 0) {
    do {
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar3[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = puVar3[1];
        pbVar9 = (byte *)*puVar3;
      }
      iVar4 = iVar4 + -1;
      uVar6 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar3[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = puVar3[1];
        pbVar9 = (byte *)*puVar3;
      }
      iVar4 = iVar4 + -1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      puVar8 = (uint *)param_1[0x36];
      for (iVar7 = 0; iVar7 < param_1[9]; iVar7 = iVar7 + 1) {
        if (uVar6 == *puVar8) goto LAB_005ad1d8;
        puVar8 = puVar8 + 0x15;
      }
      iVar7 = *param_1;
      *(undefined4 *)(iVar7 + 0x14) = 5;
      *(uint *)(iVar7 + 0x18) = uVar6;
      (**(code **)*param_1)();
LAB_005ad1d8:
      *piStack_14 = (int)puVar8;
      puVar8[5] = (int)(uint)bVar1 >> 4;
      puVar8[6] = bVar1 & 0xf;
      iVar7 = *param_1;
      *(uint *)(iVar7 + 0x18) = uVar6;
      *(uint *)(iVar7 + 0x1c) = puVar8[5];
      *(uint *)(iVar7 + 0x20) = puVar8[6];
      *(undefined4 *)(*param_1 + 0x14) = 0x68;
      (**(code **)(*param_1 + 4))(param_1,1);
      iStack_28 = iStack_28 + 1;
      piStack_14 = piStack_14 + 1;
    } while (iStack_28 < (int)uVar5);
  }
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar9 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  pbVar10 = pbVar9 + 1;
  param_1[100] = (uint)*pbVar9;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar10 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  pbVar9 = pbVar10 + 1;
  param_1[0x65] = (uint)*pbVar10;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar9 = (byte *)*puVar3;
  }
  bVar1 = *pbVar9;
  param_1[0x66] = (int)(uint)bVar1 >> 4;
  param_1[0x67] = bVar1 & 0xf;
  iVar7 = *param_1;
  *(int *)(iVar7 + 0x18) = param_1[100];
  *(int *)(iVar7 + 0x1c) = param_1[0x65];
  *(int *)(iVar7 + 0x20) = param_1[0x66];
  *(int *)(iVar7 + 0x24) = param_1[0x67];
  *(undefined4 *)(*param_1 + 0x14) = 0x69;
  (**(code **)(*param_1 + 4))(param_1,1);
  *(undefined4 *)(param_1[0x6e] + 0x14) = 0;
  param_1[0x24] = param_1[0x24] + 1;
  *puVar3 = pbVar9 + 1;
  puVar3[1] = iVar4 + -1;
  return 1;
}
