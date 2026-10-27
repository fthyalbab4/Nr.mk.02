// rea decompile_all
// name: FUN_005a69e8
// address: 0x5a69e8
// body: available
// range: 0x5a69e8-0x5a6e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005a69e8(int param_1,int *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  byte bVar14;
  int local_58;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [4];

  bVar14 = 0;
  iVar1 = *(int *)(param_1 + 0x1bc);
  if (((*(int *)(param_1 + 0x114) == 0) || (*(int *)(iVar1 + 0x24) != 0)) ||
     (iVar5 = FUN_005a6978(param_1), iVar5 != 0)) {
    if (*(int *)(iVar1 + 8) == 0) {
      local_34 = **(undefined4 **)(param_1 + 0x18);
      local_30 = (*(undefined4 **)(param_1 + 0x18))[1];
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar11 = *(int *)(iVar1 + 0x10);
      piVar12 = (int *)(iVar1 + 0x14);
      piVar13 = local_20;
      for (iVar10 = 4; iVar10 != 0; iVar10 = iVar10 + -1) {
        *piVar13 = *piVar12;
        piVar12 = piVar12 + (uint)bVar14 * -2 + 1;
        piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
      }
      local_38 = (int *)(param_1 + 0x168);
      local_3c = (int *)(iVar1 + 0x48);
      local_40 = param_2;
      local_24 = param_1;
      for (local_58 = 0; local_58 < *(int *)(param_1 + 0x164); local_58 = local_58 + 1) {
        puVar2 = (undefined2 *)*local_40;
        iVar10 = *local_3c;
        iVar3 = local_3c[10];
        if (iVar11 < 8) {
          iVar5 = FUN_005a6734(&local_34,iVar5,iVar11,0);
          if (iVar5 == 0) {
            return 0;
          }
          iVar11 = local_28;
          iVar5 = local_2c;
          if (7 < local_28) goto LAB_005a6af1;
          uVar6 = 1;
LAB_005a6b21:
          uVar7 = FUN_005a6880(&local_34,iVar5,iVar11,uVar6,iVar10);
          iVar11 = local_28;
          iVar5 = local_2c;
          if ((int)uVar7 < 0) {
            return 0;
          }
        }
        else {
LAB_005a6af1:
          uVar7 = iVar5 >> ((char)iVar11 - 8U & 0x1f) & 0xff;
          iVar9 = *(int *)(iVar10 + 0x90 + uVar7 * 4);
          if (iVar9 == 0) {
            uVar6 = 9;
            goto LAB_005a6b21;
          }
          uVar7 = (uint)*(byte *)(iVar10 + 0x490 + uVar7);
          iVar11 = iVar11 - iVar9;
        }
        uVar8 = 0;
        if (uVar7 != 0) {
          if ((iVar11 < (int)uVar7) &&
             (iVar10 = FUN_005a6734(&local_34,iVar5,iVar11,uVar7), iVar11 = local_28,
             iVar5 = local_2c, iVar10 == 0)) {
            return 0;
          }
          iVar11 = iVar11 - uVar7;
          uVar8 = iVar5 >> ((byte)iVar11 & 0x1f) & (1 << ((byte)uVar7 & 0x1f)) - 1U;
          if ((int)uVar8 < *(int *)(&DAT_00686d3c + uVar7 * 4)) {
            uVar8 = *(int *)(&DAT_00686d7c + uVar7 * 4) + uVar8;
          }
        }
        if (local_3c[0x14] != 0) {
          iVar10 = local_20[*local_38];
          local_20[*local_38] = uVar8 + iVar10;
          *puVar2 = (short)(uVar8 + iVar10);
        }
        if (local_3c[0x1e] == 0) {
          iVar10 = 1;
          do {
            if (iVar11 < 8) {
              iVar5 = FUN_005a6734(&local_34,iVar5,iVar11,0);
              if (iVar5 == 0) {
                return 0;
              }
              iVar11 = local_28;
              iVar5 = local_2c;
              if (7 < local_28) goto LAB_005a6d31;
              local_44 = 1;
LAB_005a6d6a:
              uVar7 = FUN_005a6880(&local_34,iVar5,iVar11,local_44,iVar3);
              iVar11 = local_28;
              iVar5 = local_2c;
              if ((int)uVar7 < 0) {
                return 0;
              }
            }
            else {
LAB_005a6d31:
              uVar7 = iVar5 >> ((char)iVar11 - 8U & 0x1f) & 0xff;
              iVar9 = *(int *)(iVar3 + 0x90 + uVar7 * 4);
              if (iVar9 == 0) {
                local_44 = 9;
                goto LAB_005a6d6a;
              }
              uVar7 = (uint)*(byte *)(iVar3 + 0x490 + uVar7);
              iVar11 = iVar11 - iVar9;
            }
            uVar8 = uVar7 & 0xf;
            if (uVar8 == 0) {
              if ((int)uVar7 >> 4 != 0xf) break;
              iVar10 = iVar10 + 0xf;
            }
            else {
              iVar10 = iVar10 + ((int)uVar7 >> 4);
              if ((iVar11 < (int)uVar8) &&
                 (iVar9 = FUN_005a6734(&local_34,iVar5,iVar11,uVar8), iVar11 = local_28,
                 iVar5 = local_2c, iVar9 == 0)) {
                return 0;
              }
              iVar11 = iVar11 - uVar8;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x40);
        }
        else {
          iVar10 = 1;
          do {
            if (iVar11 < 8) {
              iVar5 = FUN_005a6734(&local_34,iVar5,iVar11,0);
              if (iVar5 == 0) {
                return 0;
              }
              iVar11 = local_28;
              iVar5 = local_2c;
              if (7 < local_28) goto LAB_005a6c06;
              local_48 = 1;
LAB_005a6c3f:
              uVar7 = FUN_005a6880(&local_34,iVar5,iVar11,local_48,iVar3);
              iVar11 = local_28;
              iVar5 = local_2c;
              if ((int)uVar7 < 0) {
                return 0;
              }
            }
            else {
LAB_005a6c06:
              uVar7 = iVar5 >> ((char)iVar11 - 8U & 0x1f) & 0xff;
              iVar9 = *(int *)(iVar3 + 0x90 + uVar7 * 4);
              if (iVar9 == 0) {
                local_48 = 9;
                goto LAB_005a6c3f;
              }
              uVar7 = (uint)*(byte *)(iVar3 + 0x490 + uVar7);
              iVar11 = iVar11 - iVar9;
            }
            uVar8 = uVar7 & 0xf;
            if (uVar8 == 0) {
              if ((int)uVar7 >> 4 != 0xf) break;
              iVar10 = iVar10 + 0xf;
            }
            else {
              iVar10 = iVar10 + ((int)uVar7 >> 4);
              if ((iVar11 < (int)uVar8) &&
                 (iVar9 = FUN_005a6734(&local_34,iVar5,iVar11,uVar8), iVar11 = local_28,
                 iVar5 = local_2c, iVar9 == 0)) {
                return 0;
              }
              iVar11 = iVar11 - uVar8;
              uVar7 = iVar5 >> ((byte)iVar11 & 0x1f) & (1 << (sbyte)uVar8) - 1U;
              if ((int)uVar7 < *(int *)(&DAT_00686d3c + uVar8 * 4)) {
                uVar7 = *(int *)(&DAT_00686d7c + uVar8 * 4) + uVar7;
              }
              puVar2[(&DAT_00686f88)[iVar10]] = (short)uVar7;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x40);
        }
        local_38 = local_38 + 1;
        local_3c = local_3c + 1;
        local_40 = local_40 + 1;
      }
      puVar4 = *(undefined4 **)(param_1 + 0x18);
      *puVar4 = local_34;
      puVar4[1] = local_30;
      *(int *)(iVar1 + 0xc) = iVar5;
      *(int *)(iVar1 + 0x10) = iVar11;
      piVar12 = local_20;
      piVar13 = (int *)(iVar1 + 0x14);
      for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar13 = *piVar12;
        piVar12 = piVar12 + (uint)bVar14 * -2 + 1;
        piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
      }
    }
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
