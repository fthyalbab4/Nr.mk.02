// rea decompile_all
// name: FUN_005ad35c
// address: 0x5ad35c
// body: available
// range: 0x5ad35c-0x5ad68d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ad35c(int *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  uint uStack_138;
  int iStack_134;
  byte *pbStack_12c;
  byte *pbStack_128;
  byte bStack_123;
  byte bStack_122;
  byte bStack_121;
  byte bStack_120;
  byte bStack_11f;
  byte bStack_11e;
  byte bStack_11d;
  byte bStack_11c;
  byte bStack_11b;
  byte bStack_11a;
  byte bStack_119;
  byte bStack_118;
  byte bStack_117;
  byte bStack_116;
  byte bStack_115;
  byte bStack_114;
  byte abStack_110 [256];

  puVar4 = (undefined4 *)param_1[6];
  iVar5 = puVar4[1];
  pbVar7 = (byte *)*puVar4;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar4[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = puVar4[1];
    pbVar7 = (byte *)*puVar4;
  }
  iVar5 = iVar5 + -1;
  bVar2 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar4[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = puVar4[1];
    pbVar7 = (byte *)*puVar4;
  }
  iVar5 = iVar5 + -1;
  pbVar8 = pbVar7 + 1;
  iVar1 = (uint)bVar2 * 0x100 + (uint)*pbVar7 + -2;
  do {
    if (iVar1 < 0x11) {
      if (iVar1 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0xb;
        (**(code **)*param_1)();
      }
      *puVar4 = pbVar8;
      puVar4[1] = iVar5;
      return 1;
    }
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar4[3])(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = puVar4[1];
      pbVar8 = (byte *)*puVar4;
    }
    iVar5 = iVar5 + -1;
    bVar2 = *pbVar8;
    uStack_138 = (uint)bVar2;
    pbVar8 = pbVar8 + 1;
    iVar9 = *param_1;
    *(undefined4 *)(iVar9 + 0x14) = 0x50;
    *(uint *)(iVar9 + 0x18) = uStack_138;
    (**(code **)(*param_1 + 4))(param_1,1);
    iVar9 = 1;
    iStack_134 = 0;
    pbStack_12c = &bStack_123;
    do {
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar4[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        iVar5 = puVar4[1];
        pbVar8 = (byte *)*puVar4;
      }
      bVar3 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      *pbStack_12c = bVar3;
      iStack_134 = iStack_134 + (uint)bVar3;
      pbStack_12c = pbStack_12c + 1;
      iVar5 = iVar5 + -1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x11);
    iVar9 = *param_1;
    *(uint *)(iVar9 + 0x18) = (uint)bStack_123;
    *(uint *)(iVar9 + 0x1c) = (uint)bStack_122;
    *(uint *)(iVar9 + 0x20) = (uint)bStack_121;
    *(uint *)(iVar9 + 0x24) = (uint)bStack_120;
    *(uint *)(iVar9 + 0x28) = (uint)bStack_11f;
    *(uint *)(iVar9 + 0x2c) = (uint)bStack_11e;
    *(uint *)(iVar9 + 0x30) = (uint)bStack_11d;
    *(uint *)(iVar9 + 0x34) = (uint)bStack_11c;
    *(undefined4 *)(*param_1 + 0x14) = 0x56;
    (**(code **)(*param_1 + 4))(param_1,2);
    iVar9 = *param_1;
    *(uint *)(iVar9 + 0x18) = (uint)bStack_11b;
    *(uint *)(iVar9 + 0x1c) = (uint)bStack_11a;
    *(uint *)(iVar9 + 0x20) = (uint)bStack_119;
    *(uint *)(iVar9 + 0x24) = (uint)bStack_118;
    *(uint *)(iVar9 + 0x28) = (uint)bStack_117;
    *(uint *)(iVar9 + 0x2c) = (uint)bStack_116;
    *(uint *)(iVar9 + 0x30) = (uint)bStack_115;
    *(uint *)(iVar9 + 0x34) = (uint)bStack_114;
    *(undefined4 *)(*param_1 + 0x14) = 0x56;
    (**(code **)(*param_1 + 4))(param_1,2);
    if ((0x100 < iStack_134) || (iVar1 + -0x11 < iStack_134)) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)();
    }
    iVar9 = 0;
    pbStack_128 = abStack_110;
    if (0 < iStack_134) {
      do {
        if (iVar5 == 0) {
          iVar5 = (*(code *)puVar4[3])(param_1);
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = puVar4[1];
          pbVar8 = (byte *)*puVar4;
        }
        iVar5 = iVar5 + -1;
        *pbStack_128 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        iVar9 = iVar9 + 1;
        pbStack_128 = pbStack_128 + 1;
      } while (iVar9 < iStack_134);
    }
    iVar1 = (iVar1 + -0x11) - iStack_134;
    if ((bVar2 & 0x10) == 0) {
      iVar9 = uStack_138 + 0x2d;
    }
    else {
      iVar9 = uStack_138 + 0x21;
      uStack_138 = uStack_138 - 0x10;
    }
    if (((int)uStack_138 < 0) || (3 < (int)uStack_138)) {
      iVar6 = *param_1;
      *(undefined4 *)(iVar6 + 0x14) = 0x1e;
      *(uint *)(iVar6 + 0x18) = uStack_138;
      (**(code **)*param_1)();
    }
    if (param_1[iVar9] == 0) {
      iVar6 = FUN_005aeb4c(param_1);
      param_1[iVar9] = iVar6;
    }
    FUN_005a1d28();
    FUN_005a1d28();
  } while( true );
}
