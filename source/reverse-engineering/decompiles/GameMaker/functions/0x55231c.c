// rea decompile_all
// name: FUN_0055231c
// address: 0x55231c
// body: available
// range: 0x55231c-0x552747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0055231c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  short local_14c;
  short local_148;
  int local_144;
  int local_140;
  int local_130;
  int *local_12c;
  int *local_128;
  undefined4 local_124;
  undefined4 local_120;
  int local_11c;
  int local_118;
  int *local_114;
  int aiStack_110 [64];

  iVar1 = param_1[0x6f];
  iVar2 = param_1[0x65];
  uVar13 = 1 << ((byte)param_1[0x67] & 0x1f);
  uVar5 = -1 << ((byte)param_1[0x67] & 0x1f);
  if (((param_1[0x45] == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (iVar6 = FUN_00551ce8(param_1), iVar6 != 0)) {
    if (*(int *)(iVar1 + 8) == 0) {
      local_124 = *(undefined4 *)param_1[6];
      local_120 = ((undefined4 *)param_1[6])[1];
      iVar6 = *(int *)(iVar1 + 0xc);
      iVar14 = *(int *)(iVar1 + 0x10);
      local_140 = *(int *)(iVar1 + 0x14);
      iVar3 = *param_2;
      iVar11 = *(int *)(iVar1 + 0x3c);
      local_130 = 0;
      local_144 = param_1[100];
      local_14c = (short)uVar13;
      local_148 = (short)uVar5;
      local_114 = param_1;
      if (local_140 == 0) {
        local_128 = aiStack_110;
        local_12c = &DAT_0077ba60 + local_144;
        for (; local_144 <= iVar2; local_144 = local_144 + 1) {
          if (iVar14 < 8) {
            iVar6 = FUN_00552bf0(&local_124,iVar6,iVar14,0);
            if (iVar6 == 0) goto LAB_00552712;
            iVar14 = local_118;
            iVar6 = local_11c;
            if (7 < local_118) goto LAB_00552458;
            uVar7 = 1;
LAB_00552488:
            uVar8 = FUN_00552d3c(&local_124,iVar6,iVar14,uVar7,iVar11);
            iVar14 = local_118;
            iVar6 = local_11c;
            if ((int)uVar8 < 0) goto LAB_00552712;
          }
          else {
LAB_00552458:
            uVar8 = iVar6 >> ((char)iVar14 - 8U & 0x1f) & 0xff;
            iVar15 = *(int *)(iVar11 + 0x90 + uVar8 * 4);
            if (iVar15 == 0) {
              uVar7 = 9;
              goto LAB_00552488;
            }
            uVar8 = (uint)*(byte *)(iVar11 + 0x490 + uVar8);
            iVar14 = iVar14 - iVar15;
          }
          iVar15 = (int)uVar8 >> 4;
          if ((uVar8 & 0xf) == 0) {
            uVar8 = 0;
            if (iVar15 != 0xf) {
              local_140 = 1 << ((byte)iVar15 & 0x1f);
              if (iVar15 != 0) {
                if ((iVar14 < iVar15) &&
                   (iVar11 = FUN_00552bf0(&local_124,iVar6,iVar14,iVar15), iVar14 = local_118,
                   iVar6 = local_11c, iVar11 == 0)) goto LAB_00552712;
                iVar14 = iVar14 - iVar15;
                local_140 = local_140 + (iVar6 >> ((byte)iVar14 & 0x1f) & local_140 - 1U);
              }
              break;
            }
          }
          else {
            if ((uVar8 & 0xf) != 1) {
              *(undefined4 *)(*param_1 + 0x14) = 0x76;
              (**(code **)(*param_1 + 4))(param_1,0xffffffff);
            }
            if ((iVar14 < 1) &&
               (iVar9 = FUN_00552bf0(&local_124,iVar6,iVar14,1), iVar14 = local_118,
               iVar6 = local_11c, iVar9 == 0)) goto LAB_00552712;
            iVar14 = iVar14 + -1;
            uVar8 = uVar5;
            if ((iVar6 >> ((byte)iVar14 & 0x1f) & 1U) != 0) {
              uVar8 = uVar13;
            }
          }
          do {
            psVar10 = (short *)(*local_12c * 2 + iVar3);
            if (*psVar10 == 0) {
              iVar15 = iVar15 + -1;
              if (iVar15 < 0) break;
            }
            else {
              if ((iVar14 < 1) &&
                 (iVar9 = FUN_00552bf0(&local_124,iVar6,iVar14,1), iVar14 = local_118,
                 iVar6 = local_11c, iVar9 == 0)) goto LAB_00552712;
              iVar14 = iVar14 + -1;
              if (((iVar6 >> ((byte)iVar14 & 0x1f) & 1U) != 0) && (((int)*psVar10 & uVar13) == 0)) {
                if (*psVar10 < 0) {
                  *psVar10 = *psVar10 + local_148;
                }
                else {
                  *psVar10 = *psVar10 + local_14c;
                }
              }
            }
            local_144 = local_144 + 1;
            local_12c = local_12c + 1;
          } while (local_144 <= iVar2);
          if (uVar8 != 0) {
            iVar15 = *local_12c;
            *(short *)(iVar3 + iVar15 * 2) = (short)uVar8;
            *local_128 = iVar15;
            local_130 = local_130 + 1;
            local_128 = local_128 + 1;
          }
          local_12c = local_12c + 1;
        }
      }
      if (local_140 != 0) {
        for (; local_144 <= iVar2; local_144 = local_144 + 1) {
          psVar10 = (short *)((&DAT_0077ba60)[local_144] * 2 + iVar3);
          if (*psVar10 != 0) {
            if ((iVar14 < 1) &&
               (iVar11 = FUN_00552bf0(&local_124,iVar6,iVar14,1), iVar14 = local_118,
               iVar6 = local_11c, iVar11 == 0)) {
LAB_00552712:
              piVar12 = aiStack_110 + local_130;
              for (; 0 < local_130; local_130 = local_130 + -1) {
                piVar12 = piVar12 + -1;
                *(undefined2 *)(iVar3 + *piVar12 * 2) = 0;
              }
              return 0;
            }
            iVar14 = iVar14 + -1;
            if (((iVar6 >> ((byte)iVar14 & 0x1f) & 1U) != 0) && (((int)*psVar10 & uVar13) == 0)) {
              if (*psVar10 < 0) {
                *psVar10 = *psVar10 + local_148;
              }
              else {
                *psVar10 = *psVar10 + local_14c;
              }
            }
          }
        }
        local_140 = local_140 + -1;
      }
      puVar4 = (undefined4 *)param_1[6];
      *puVar4 = local_124;
      puVar4[1] = local_120;
      *(int *)(iVar1 + 0xc) = iVar6;
      *(int *)(iVar1 + 0x10) = iVar14;
      *(int *)(iVar1 + 0x14) = local_140;
    }
    uVar7 = 1;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
