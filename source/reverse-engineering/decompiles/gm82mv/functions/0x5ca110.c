// rea decompile_all
// name: FUN_005ca110
// address: 0x5ca110
// body: available
// range: 0x5ca110-0x5ca393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ca110(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  ushort *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iStack_24;
  int *piStack_14;

  puVar2 = (undefined4 *)param_1[5];
  iVar4 = puVar2[1];
  pbVar10 = (byte *)*puVar2;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar2[1];
    pbVar10 = (byte *)*puVar2;
  }
  iVar4 = iVar4 + -1;
  bVar1 = *pbVar10;
  pbVar10 = pbVar10 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar2[1];
    pbVar10 = (byte *)*puVar2;
  }
  iVar4 = iVar4 + -1;
  pbVar11 = pbVar10 + 1;
  iVar6 = (uint)bVar1 * 0x100 + (uint)*pbVar10 + -2;
  do {
    iVar3 = iVar6;
    if (iVar3 < 1) {
      *puVar2 = pbVar11;
      puVar2[1] = iVar4;
      return 1;
    }
    if (iVar4 == 0) {
      iVar4 = (*(code *)puVar2[3])(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = puVar2[1];
      pbVar11 = (byte *)*puVar2;
    }
    iVar4 = iVar4 + -1;
    bVar1 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    iVar5 = (int)(uint)bVar1 >> 4;
    uVar8 = bVar1 & 0xf;
    iVar6 = *param_1;
    *(undefined4 *)(iVar6 + 0x14) = 0x50;
    *(uint *)(iVar6 + 0x18) = uVar8;
    *(int *)(iVar6 + 0x1c) = iVar5;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (3 < uVar8) {
      iVar6 = *param_1;
      *(undefined4 *)(iVar6 + 0x14) = 0x1e;
      *(uint *)(iVar6 + 0x18) = uVar8;
      (**(code **)*param_1)();
    }
    if (param_1[uVar8 + 0x28] == 0) {
      iVar6 = FUN_005caca4(param_1);
      param_1[uVar8 + 0x28] = iVar6;
    }
    puVar9 = (ushort *)param_1[uVar8 + 0x28];
    iStack_24 = 0;
    piStack_14 = (int *)&DAT_00687890;
    do {
      if (iVar5 == 0) {
        if (iVar4 == 0) {
          iVar4 = (*(code *)puVar2[3])(param_1);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = puVar2[1];
          pbVar11 = (byte *)*puVar2;
        }
        uVar7 = (ushort)*pbVar11;
      }
      else {
        if (iVar4 == 0) {
          iVar4 = (*(code *)puVar2[3])(param_1);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = puVar2[1];
          pbVar11 = (byte *)*puVar2;
        }
        iVar4 = iVar4 + -1;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        if (iVar4 == 0) {
          iVar4 = (*(code *)puVar2[3])(param_1);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = puVar2[1];
          pbVar11 = (byte *)*puVar2;
        }
        uVar7 = (ushort)bVar1 * 0x100 + (ushort)*pbVar11;
      }
      iVar4 = iVar4 + -1;
      pbVar11 = pbVar11 + 1;
      puVar9[*piStack_14] = uVar7;
      iStack_24 = iStack_24 + 1;
      piStack_14 = piStack_14 + 1;
    } while (iStack_24 < 0x40);
    if (1 < *(int *)(*param_1 + 0x68)) {
      iStack_24 = 0;
      do {
        iVar6 = *param_1;
        *(uint *)(iVar6 + 0x18) = (uint)*puVar9;
        *(uint *)(iVar6 + 0x1c) = (uint)puVar9[1];
        *(uint *)(iVar6 + 0x20) = (uint)puVar9[2];
        *(uint *)(iVar6 + 0x24) = (uint)puVar9[3];
        *(uint *)(iVar6 + 0x28) = (uint)puVar9[4];
        *(uint *)(iVar6 + 0x2c) = (uint)puVar9[5];
        *(uint *)(iVar6 + 0x30) = (uint)puVar9[6];
        *(uint *)(iVar6 + 0x34) = (uint)puVar9[7];
        *(undefined4 *)(*param_1 + 0x14) = 0x5c;
        (**(code **)(*param_1 + 4))(param_1,2);
        iStack_24 = iStack_24 + 8;
        puVar9 = puVar9 + 8;
      } while (iStack_24 < 0x40);
    }
    iVar6 = iVar3 + -0x41;
    if (iVar5 != 0) {
      iVar6 = iVar3 + -0x81;
    }
  } while( true );
}
