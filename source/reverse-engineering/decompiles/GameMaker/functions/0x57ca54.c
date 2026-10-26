// rea decompile_all
// name: FUN_0057ca54
// address: 0x57ca54
// body: available
// range: 0x57ca54-0x57ceed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0057ca54(int param_1,int *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  byte bVar16;
  int local_64;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [4];

  bVar16 = 0;
  iVar1 = *(int *)(param_1 + 0x1ae);
  if (((*(int *)(param_1 + 0x110) == 0) || (*(int *)(iVar1 + 0x24) != 0)) ||
     (iVar6 = FUN_0057c9ec(param_1), iVar6 != 0)) {
    local_3c = **(undefined4 **)(param_1 + 0x14);
    local_38 = (*(undefined4 **)(param_1 + 0x14))[1];
    local_34 = *(undefined4 *)(param_1 + 0x192);
    iVar6 = *(int *)(iVar1 + 0xc);
    iVar14 = *(int *)(iVar1 + 8);
    local_24 = iVar1 + 0x10;
    piVar13 = (int *)(iVar1 + 0x14);
    piVar15 = local_20;
    for (iVar12 = 4; iVar12 != 0; iVar12 = iVar12 + -1) {
      *piVar15 = *piVar13;
      piVar13 = piVar13 + (uint)bVar16 * -2 + 1;
      piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
    }
    local_40 = (int *)(param_1 + 0x15a);
    local_44 = param_2;
    local_28 = param_1;
    for (local_64 = 0; local_64 < *(int *)(param_1 + 0x156); local_64 = local_64 + 1) {
      puVar2 = (undefined2 *)*local_44;
      iVar12 = *local_40;
      iVar11 = *(int *)(param_1 + 0x13e + iVar12 * 4);
      iVar9 = *(int *)(iVar1 + 0x28 + *(int *)(iVar11 + 0x14) * 4);
      iVar3 = *(int *)(iVar1 + 0x38 + *(int *)(iVar11 + 0x18) * 4);
      if (iVar6 < 8) {
        iVar6 = FUN_0057c7d8(&local_3c,iVar14,iVar6,0);
        if (iVar6 == 0) {
          return 0;
        }
        iVar6 = local_2c;
        iVar14 = local_30;
        if (7 < local_2c) goto LAB_0057cb80;
        local_50 = 1;
LAB_0057cbb9:
        uVar8 = FUN_0057c8e8(&local_3c,iVar14,iVar6,local_50,iVar9);
        iVar6 = local_2c;
        iVar14 = local_30;
        if ((int)uVar8 < 0) {
          return 0;
        }
      }
      else {
LAB_0057cb80:
        uVar8 = iVar14 >> ((char)iVar6 - 8U & 0x1f) & 0xff;
        iVar4 = *(int *)(iVar9 + 0xd4 + uVar8 * 4);
        if (iVar4 == 0) {
          local_50 = 9;
          goto LAB_0057cbb9;
        }
        uVar8 = (uint)*(byte *)(iVar9 + 0x4d4 + uVar8);
        iVar6 = iVar6 - iVar4;
      }
      uVar10 = 0;
      if (uVar8 != 0) {
        if ((iVar6 < (int)uVar8) &&
           (iVar9 = FUN_0057c7d8(&local_3c,iVar14,iVar6,uVar8), iVar6 = local_2c, iVar14 = local_30,
           iVar9 == 0)) {
          return 0;
        }
        iVar6 = iVar6 - uVar8;
        uVar10 = iVar14 >> ((byte)iVar6 & 0x1f) & (1 << ((byte)uVar8 & 0x1f)) - 1U;
        if ((int)uVar10 < *(int *)(&DAT_0077c134 + uVar8 * 4)) {
          uVar10 = *(int *)(&DAT_0077c174 + uVar8 * 4) + uVar10;
        }
      }
      if (*(int *)(iVar11 + 0x30) == 0) {
LAB_0057cd90:
        iVar12 = 1;
        do {
          if (iVar6 < 8) {
            iVar6 = FUN_0057c7d8(&local_3c,iVar14,iVar6,0);
            if (iVar6 == 0) {
              return 0;
            }
            iVar6 = local_2c;
            iVar14 = local_30;
            if (7 < local_2c) goto LAB_0057cdcb;
            local_48 = 1;
LAB_0057ce04:
            uVar8 = FUN_0057c8e8(&local_3c,iVar14,iVar6,local_48,iVar3);
            iVar6 = local_2c;
            iVar14 = local_30;
            if ((int)uVar8 < 0) {
              return 0;
            }
          }
          else {
LAB_0057cdcb:
            uVar8 = iVar14 >> ((char)iVar6 - 8U & 0x1f) & 0xff;
            iVar11 = *(int *)(iVar3 + 0xd4 + uVar8 * 4);
            if (iVar11 == 0) {
              local_48 = 9;
              goto LAB_0057ce04;
            }
            uVar8 = (uint)*(byte *)(iVar3 + 0x4d4 + uVar8);
            iVar6 = iVar6 - iVar11;
          }
          uVar10 = uVar8 & 0xf;
          if (uVar10 == 0) {
            if ((int)uVar8 >> 4 != 0xf) break;
            iVar12 = iVar12 + 0xf;
          }
          else {
            iVar12 = iVar12 + ((int)uVar8 >> 4);
            if ((iVar6 < (int)uVar10) &&
               (iVar11 = FUN_0057c7d8(&local_3c,iVar14,iVar6,uVar10), iVar6 = local_2c,
               iVar14 = local_30, iVar11 == 0)) {
              return 0;
            }
            iVar6 = iVar6 - uVar10;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < 0x40);
      }
      else {
        iVar9 = local_20[iVar12];
        local_20[iVar12] = uVar10 + iVar9;
        *puVar2 = (short)(uVar10 + iVar9);
        if (*(int *)(iVar11 + 0x24) < 2) goto LAB_0057cd90;
        iVar12 = 1;
        do {
          if (iVar6 < 8) {
            iVar6 = FUN_0057c7d8(&local_3c,iVar14,iVar6,0);
            if (iVar6 == 0) {
              return 0;
            }
            iVar6 = local_2c;
            iVar14 = local_30;
            if (7 < local_2c) goto LAB_0057cca0;
            local_4c = 1;
LAB_0057ccd9:
            uVar8 = FUN_0057c8e8(&local_3c,iVar14,iVar6,local_4c,iVar3);
            iVar6 = local_2c;
            iVar14 = local_30;
            if ((int)uVar8 < 0) {
              return 0;
            }
          }
          else {
LAB_0057cca0:
            uVar8 = iVar14 >> ((char)iVar6 - 8U & 0x1f) & 0xff;
            iVar11 = *(int *)(iVar3 + 0xd4 + uVar8 * 4);
            if (iVar11 == 0) {
              local_4c = 9;
              goto LAB_0057ccd9;
            }
            uVar8 = (uint)*(byte *)(iVar3 + 0x4d4 + uVar8);
            iVar6 = iVar6 - iVar11;
          }
          uVar10 = uVar8 & 0xf;
          if (uVar10 == 0) {
            if ((int)uVar8 >> 4 != 0xf) break;
            iVar12 = iVar12 + 0xf;
          }
          else {
            iVar12 = iVar12 + ((int)uVar8 >> 4);
            if ((iVar6 < (int)uVar10) &&
               (iVar11 = FUN_0057c7d8(&local_3c,iVar14,iVar6,uVar10), iVar6 = local_2c,
               iVar14 = local_30, iVar11 == 0)) {
              return 0;
            }
            iVar6 = iVar6 - uVar10;
            uVar8 = iVar14 >> ((byte)iVar6 & 0x1f) & (1 << (sbyte)uVar10) - 1U;
            if ((int)uVar8 < *(int *)(&DAT_0077c134 + uVar10 * 4)) {
              uVar8 = *(int *)(&DAT_0077c174 + uVar10 * 4) + uVar8;
            }
            puVar2[*(int *)(&DAT_0077c380 + iVar12 * 4)] = (short)uVar8;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < 0x40);
      }
      local_40 = local_40 + 1;
      local_44 = local_44 + 1;
    }
    puVar5 = *(undefined4 **)(param_1 + 0x14);
    *puVar5 = local_3c;
    puVar5[1] = local_38;
    *(undefined4 *)(param_1 + 0x192) = local_34;
    *(int *)(iVar1 + 8) = iVar14;
    *(int *)(iVar1 + 0xc) = iVar6;
    piVar13 = local_20;
    piVar15 = (int *)(iVar1 + 0x14);
    for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar15 = *piVar13;
      piVar13 = piVar13 + (uint)bVar16 * -2 + 1;
      piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
    }
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
