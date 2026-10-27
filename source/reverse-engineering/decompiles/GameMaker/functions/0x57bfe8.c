// rea decompile_all
// name: FUN_0057bfe8
// address: 0x57bfe8
// body: available
// range: 0x57bfe8-0x57c42a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0057bfe8(int *param_1,int *param_2)

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
  byte bVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  short local_154;
  short local_150;
  int local_14c;
  int local_148;
  int local_138;
  int *local_134;
  int *local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  int local_11c;
  int *local_118;
  int local_114;
  int aiStack_110 [64];

  iVar1 = *(int *)((int)param_1 + 0x1ae);
  iVar2 = *(int *)((int)param_1 + 0x186);
  bVar13 = (byte)*(undefined4 *)((int)param_1 + 0x18e);
  uVar14 = 1 << (bVar13 & 0x1f);
  uVar5 = -1 << (bVar13 & 0x1f);
  if (((param_1[0x44] == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (iVar6 = FUN_0057b978(param_1), iVar6 != 0)) {
    local_12c = *(undefined4 *)param_1[5];
    local_128 = ((undefined4 *)param_1[5])[1];
    local_124 = *(undefined4 *)((int)param_1 + 0x192);
    iVar6 = *(int *)(iVar1 + 0xc);
    iVar16 = *(int *)(iVar1 + 8);
    local_114 = iVar1 + 0x10;
    local_148 = *(int *)(iVar1 + 0x14);
    iVar3 = *param_2;
    iVar11 = *(int *)(iVar1 + 0x3c);
    local_138 = 0;
    local_14c = *(int *)((int)param_1 + 0x182);
    local_154 = (short)uVar14;
    local_150 = (short)uVar5;
    local_118 = param_1;
    if (local_148 == 0) {
      local_130 = aiStack_110;
      local_134 = (int *)(&DAT_0077c380 + local_14c * 4);
      for (; local_14c <= iVar2; local_14c = local_14c + 1) {
        if (iVar6 < 8) {
          iVar6 = FUN_0057c7d8(&local_12c,iVar16,iVar6,0);
          if (iVar6 == 0) goto LAB_0057c3f5;
          iVar6 = local_11c;
          iVar16 = local_120;
          if (7 < local_11c) goto LAB_0057c12e;
          uVar7 = 1;
LAB_0057c15e:
          uVar8 = FUN_0057c8e8(&local_12c,iVar16,iVar6,uVar7,iVar11);
          iVar6 = local_11c;
          iVar16 = local_120;
          if ((int)uVar8 < 0) goto LAB_0057c3f5;
        }
        else {
LAB_0057c12e:
          uVar8 = iVar16 >> ((char)iVar6 - 8U & 0x1f) & 0xff;
          iVar15 = *(int *)(iVar11 + 0xd4 + uVar8 * 4);
          if (iVar15 == 0) {
            uVar7 = 9;
            goto LAB_0057c15e;
          }
          uVar8 = (uint)*(byte *)(iVar11 + 0x4d4 + uVar8);
          iVar6 = iVar6 - iVar15;
        }
        iVar15 = (int)uVar8 >> 4;
        if ((uVar8 & 0xf) == 0) {
          uVar8 = 0;
          if (iVar15 != 0xf) {
            local_148 = 1 << ((byte)iVar15 & 0x1f);
            if (iVar15 != 0) {
              if ((iVar6 < iVar15) &&
                 (iVar11 = FUN_0057c7d8(&local_12c,iVar16,iVar6,iVar15), iVar6 = local_11c,
                 iVar16 = local_120, iVar11 == 0)) goto LAB_0057c3f5;
              iVar6 = iVar6 - iVar15;
              local_148 = local_148 + (iVar16 >> ((byte)iVar6 & 0x1f) & local_148 - 1U);
            }
            break;
          }
        }
        else {
          if ((uVar8 & 0xf) != 1) {
            *(undefined4 *)(*param_1 + 0x14) = 0x72;
            (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          }
          if ((iVar6 < 1) &&
             (iVar9 = FUN_0057c7d8(&local_12c,iVar16,iVar6,1), iVar6 = local_11c, iVar16 = local_120
             , iVar9 == 0)) goto LAB_0057c3f5;
          iVar6 = iVar6 + -1;
          uVar8 = uVar5;
          if ((iVar16 >> ((byte)iVar6 & 0x1f) & 1U) != 0) {
            uVar8 = uVar14;
          }
        }
        do {
          psVar10 = (short *)(*local_134 * 2 + iVar3);
          if (*psVar10 == 0) {
            iVar15 = iVar15 + -1;
            if (iVar15 < 0) break;
          }
          else {
            if ((iVar6 < 1) &&
               (iVar9 = FUN_0057c7d8(&local_12c,iVar16,iVar6,1), iVar6 = local_11c,
               iVar16 = local_120, iVar9 == 0)) goto LAB_0057c3f5;
            iVar6 = iVar6 + -1;
            if (((iVar16 >> ((byte)iVar6 & 0x1f) & 1U) != 0) && (((int)*psVar10 & uVar14) == 0)) {
              if (*psVar10 < 0) {
                *psVar10 = *psVar10 + local_150;
              }
              else {
                *psVar10 = *psVar10 + local_154;
              }
            }
          }
          local_14c = local_14c + 1;
          local_134 = local_134 + 1;
        } while (local_14c <= iVar2);
        if (uVar8 != 0) {
          iVar15 = *local_134;
          *(short *)(iVar3 + iVar15 * 2) = (short)uVar8;
          *local_130 = iVar15;
          local_138 = local_138 + 1;
          local_130 = local_130 + 1;
        }
        local_134 = local_134 + 1;
      }
    }
    if (local_148 != 0) {
      for (; local_14c <= iVar2; local_14c = local_14c + 1) {
        psVar10 = (short *)(*(int *)(&DAT_0077c380 + local_14c * 4) * 2 + iVar3);
        if (*psVar10 != 0) {
          if ((iVar6 < 1) &&
             (iVar11 = FUN_0057c7d8(&local_12c,iVar16,iVar6,1), iVar6 = local_11c,
             iVar16 = local_120, iVar11 == 0)) {
LAB_0057c3f5:
            piVar12 = aiStack_110 + local_138;
            for (; 0 < local_138; local_138 = local_138 + -1) {
              piVar12 = piVar12 + -1;
              *(undefined2 *)(iVar3 + *piVar12 * 2) = 0;
            }
            return 0;
          }
          iVar6 = iVar6 + -1;
          if (((iVar16 >> ((byte)iVar6 & 0x1f) & 1U) != 0) && (((int)*psVar10 & uVar14) == 0)) {
            if (*psVar10 < 0) {
              *psVar10 = *psVar10 + local_150;
            }
            else {
              *psVar10 = *psVar10 + local_154;
            }
          }
        }
      }
      local_148 = local_148 + -1;
    }
    puVar4 = (undefined4 *)param_1[5];
    *puVar4 = local_12c;
    puVar4[1] = local_128;
    *(undefined4 *)((int)param_1 + 0x192) = local_124;
    *(int *)(iVar1 + 8) = iVar16;
    *(int *)(iVar1 + 0xc) = iVar6;
    *(int *)(iVar1 + 0x14) = local_148;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
