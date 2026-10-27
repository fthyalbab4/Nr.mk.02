// rea decompile_all
// name: FUN_005c1848
// address: 0x5c1848
// body: available
// range: 0x5c1848-0x5c1a91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005c1848(int param_1,undefined4 *param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  byte bVar13;
  int local_5c;
  undefined4 local_4c;
  undefined4 *local_48;
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int aiStack_20 [4];

  bVar13 = 0;
  iVar1 = *(int *)(param_1 + 0x1ae);
  uVar5 = *(undefined4 *)(param_1 + 0x18e);
  if (((*(int *)(param_1 + 0x110) == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (iVar4 = FUN_005c17dc(param_1), iVar4 != 0)) {
    local_40 = **(undefined4 **)(param_1 + 0x14);
    local_3c = (*(undefined4 **)(param_1 + 0x14))[1];
    local_38 = *(undefined4 *)(param_1 + 0x192);
    iVar4 = *(int *)(iVar1 + 0xc);
    iVar11 = *(int *)(iVar1 + 8);
    local_28 = iVar1 + 0x10;
    local_44 = (int *)(param_1 + 0x15a);
    puVar10 = (undefined4 *)(iVar1 + 0x14);
    puVar12 = &local_24;
    for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
      puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
    }
    local_48 = param_2;
    local_2c = param_1;
    for (local_5c = 0; local_5c < *(int *)(param_1 + 0x156); local_5c = local_5c + 1) {
      psVar2 = (short *)*local_48;
      iVar9 = *local_44;
      iVar7 = *(int *)(iVar1 + 0x2c + *(int *)(*(int *)(param_1 + 0x13e + iVar9 * 4) + 0x14) * 4);
      if (iVar4 < 8) {
        iVar4 = FUN_005c263c(&local_40,iVar11,iVar4,0);
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = local_30;
        iVar11 = local_34;
        if (7 < local_30) goto LAB_005c1951;
        local_4c = 1;
LAB_005c198b:
        uVar6 = FUN_005c274c(&local_40,iVar11,iVar4,local_4c,iVar7);
        iVar4 = local_30;
        iVar11 = local_34;
        if ((int)uVar6 < 0) {
          return 0;
        }
      }
      else {
LAB_005c1951:
        uVar6 = iVar11 >> ((char)iVar4 - 8U & 0x1f) & 0xff;
        iVar3 = *(int *)(iVar7 + 0xd4 + uVar6 * 4);
        if (iVar3 == 0) {
          local_4c = 9;
          goto LAB_005c198b;
        }
        uVar6 = (uint)*(byte *)(iVar7 + 0x4d4 + uVar6);
        iVar4 = iVar4 - iVar3;
      }
      uVar8 = 0;
      if (uVar6 != 0) {
        if ((iVar4 < (int)uVar6) &&
           (iVar7 = FUN_005c263c(&local_40,iVar11,iVar4,uVar6), iVar4 = local_30, iVar11 = local_34,
           iVar7 == 0)) {
          return 0;
        }
        iVar4 = iVar4 - uVar6;
        uVar8 = iVar11 >> ((byte)iVar4 & 0x1f) & (1 << ((byte)uVar6 & 0x1f)) - 1U;
        if ((int)uVar8 < *(int *)(&DAT_006875c4 + uVar6 * 4)) {
          uVar8 = *(int *)(&DAT_00687604 + uVar6 * 4) + uVar8;
        }
      }
      iVar7 = aiStack_20[iVar9];
      aiStack_20[iVar9] = uVar8 + iVar7;
      *psVar2 = (short)(uVar8 + iVar7) << ((byte)uVar5 & 0x1f);
      local_44 = local_44 + 1;
      local_48 = local_48 + 1;
    }
    puVar10 = *(undefined4 **)(param_1 + 0x14);
    *puVar10 = local_40;
    puVar10[1] = local_3c;
    *(undefined4 *)(param_1 + 0x192) = local_38;
    *(int *)(iVar1 + 8) = iVar11;
    *(int *)(iVar1 + 0xc) = iVar4;
    puVar10 = &local_24;
    puVar12 = (undefined4 *)(iVar1 + 0x14);
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
      puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
    }
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
