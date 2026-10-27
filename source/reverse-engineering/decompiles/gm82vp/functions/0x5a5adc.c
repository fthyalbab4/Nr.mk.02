// rea decompile_all
// name: FUN_005a5adc
// address: 0x5a5adc
// body: available
// range: 0x5a5adc-0x5a5d64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005a5adc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int local_34;
  int local_30;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;

  iVar1 = *(int *)(param_1 + 0x1bc);
  iVar8 = *(int *)(param_1 + 0x194);
  uVar6 = *(undefined4 *)(param_1 + 0x19c);
  if (((*(int *)(param_1 + 0x114) == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (iVar5 = FUN_005a582c(param_1), iVar5 != 0)) {
    if (*(int *)(iVar1 + 8) == 0) {
      if (*(int *)(iVar1 + 0x14) == 0) {
        local_24 = **(undefined4 **)(param_1 + 0x18);
        local_20 = (*(undefined4 **)(param_1 + 0x18))[1];
        iVar5 = *(int *)(iVar1 + 0xc);
        iVar9 = *(int *)(iVar1 + 0x10);
        iVar2 = *param_2;
        iVar3 = *(int *)(iVar1 + 0x3c);
        local_14 = param_1;
        for (local_34 = *(int *)(param_1 + 400); local_30 = 0, local_34 <= iVar8;
            local_34 = local_34 + 1) {
          if (iVar9 < 8) {
            iVar5 = FUN_005a6734(&local_24,iVar5,iVar9,0);
            if (iVar5 == 0) {
              return 0;
            }
            iVar9 = local_18;
            iVar5 = local_1c;
            if (7 < local_18) goto LAB_005a5be8;
            uVar10 = 1;
LAB_005a5c18:
            uVar7 = FUN_005a6880(&local_24,iVar5,iVar9,uVar10,iVar3);
            iVar9 = local_18;
            iVar5 = local_1c;
            if ((int)uVar7 < 0) {
              return 0;
            }
          }
          else {
LAB_005a5be8:
            uVar7 = iVar5 >> ((char)iVar9 - 8U & 0x1f) & 0xff;
            iVar11 = *(int *)(iVar3 + 0x90 + uVar7 * 4);
            if (iVar11 == 0) {
              uVar10 = 9;
              goto LAB_005a5c18;
            }
            uVar7 = (uint)*(byte *)(iVar3 + 0x490 + uVar7);
            iVar9 = iVar9 - iVar11;
          }
          iVar11 = (int)uVar7 >> 4;
          uVar7 = uVar7 & 0xf;
          if (uVar7 == 0) {
            if (iVar11 != 0xf) {
              local_30 = 1 << ((byte)iVar11 & 0x1f);
              if (iVar11 != 0) {
                if ((iVar9 < iVar11) &&
                   (iVar8 = FUN_005a6734(&local_24,iVar5,iVar9,iVar11), iVar9 = local_18,
                   iVar5 = local_1c, iVar8 == 0)) {
                  return 0;
                }
                iVar9 = iVar9 - iVar11;
                local_30 = local_30 + (iVar5 >> ((byte)iVar9 & 0x1f) & local_30 - 1U);
              }
              local_30 = local_30 + -1;
              break;
            }
            local_34 = local_34 + 0xf;
          }
          else {
            local_34 = local_34 + iVar11;
            if ((iVar9 < (int)uVar7) &&
               (iVar11 = FUN_005a6734(&local_24,iVar5,iVar9,uVar7), iVar9 = local_18,
               iVar5 = local_1c, iVar11 == 0)) {
              return 0;
            }
            iVar9 = iVar9 - uVar7;
            uVar12 = iVar5 >> ((byte)iVar9 & 0x1f) & (1 << (sbyte)uVar7) - 1U;
            if ((int)uVar12 < *(int *)(&DAT_00686cbc + uVar7 * 4)) {
              uVar12 = *(int *)(&DAT_00686cfc + uVar7 * 4) + uVar12;
            }
            *(short *)(iVar2 + (&DAT_00686f88)[local_34] * 2) =
                 (short)uVar12 << ((byte)uVar6 & 0x1f);
          }
        }
        puVar4 = *(undefined4 **)(param_1 + 0x18);
        *puVar4 = local_24;
        puVar4[1] = local_20;
        *(int *)(iVar1 + 0xc) = iVar5;
        *(int *)(iVar1 + 0x10) = iVar9;
      }
      else {
        local_30 = *(int *)(iVar1 + 0x14) + -1;
      }
      *(int *)(iVar1 + 0x14) = local_30;
    }
    uVar6 = 1;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
