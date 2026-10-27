// rea decompile_all
// name: FUN_005b1dc8
// address: 0x5b1dc8
// body: available
// range: 0x5b1dc8-0x5b2299 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005b21d9) */
/* WARNING: Removing unreachable block (ram,0x005b201d) */
/* WARNING: Removing unreachable block (ram,0x005b2098) */
/* WARNING: Removing unreachable block (ram,0x005b210d) */

void FUN_005b1dc8(int param_1,uint param_2,uint param_3,char param_4,char param_5,int param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar6;
  int iVar7;
  int *local_b0;
  undefined1 local_ac;
  uint local_a4;
  int local_a0;
  undefined1 local_94;
  uint local_8c;
  int local_88;
  undefined1 local_7c;
  uint local_74;
  int local_70;
  undefined1 local_64;
  uint local_5c;
  int local_58;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_20;
  int local_1c;
  int local_18;

  for (iVar6 = param_6; -1 < iVar6; iVar6 = iVar6 + -1) {
  }
  local_b0 = (int *)&stack0xffffff44;
  if ((((param_1 != 0) && ((param_2 & 1) != 0)) && (-1 < (int)param_2)) &&
     ((((param_3 & 1) != 0 && (-1 < (int)param_3)) && (param_2 * param_3 - (param_6 + 1) == 0)))) {
    local_38 = 0;
    local_3c = param_2 * param_3;
    if (-1 < local_3c + -1) {
      do {
        local_38 = local_38 + *local_b0;
        local_b0 = local_b0 + 1;
        local_3c = local_3c + -1;
      } while (local_3c != 0);
    }
    lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)*(int *)(param_1 + 8);
    iVar6 = FUN_0040431c((int)lVar1 * 4,(int)((ulonglong)lVar1 >> 0x20));
    FUN_0040450c(*(undefined4 *)(param_1 + 0xc),iVar6,
                 *(int *)(param_1 + 4) * *(int *)(param_1 + 8) * 4);
    local_3c = *(int *)(param_1 + 8);
    if (-1 < local_3c + -1) {
      local_1c = 0;
      do {
        local_40 = *(int *)(param_1 + 4);
        if (-1 < local_40 + -1) {
          local_18 = 0;
          do {
            local_34 = 0;
            iVar2 = (int)param_3 >> 1;
            iVar3 = iVar2;
            if (iVar2 < 0) {
              iVar3 = iVar2 + (uint)((param_3 & 1) != 0);
            }
            local_20 = local_1c - iVar3;
            if (local_20 <= iVar3 + local_1c) {
              local_44 = ((iVar3 + local_1c) - local_20) + 1;
              do {
                iVar4 = (int)param_2 >> 1;
                iVar3 = iVar4;
                if (iVar4 < 0) {
                  iVar3 = iVar4 + (uint)((param_2 & 1) != 0);
                }
                iVar5 = local_18 - iVar3;
                if (iVar5 <= iVar3 + local_18) {
                  local_48 = ((iVar3 + local_18) - iVar5) + 1;
                  do {
                    if (((-1 < local_20) && (local_20 < *(int *)(param_1 + 8))) &&
                       ((-1 < iVar5 && (iVar5 < *(int *)(param_1 + 4))))) {
                      iVar3 = iVar2;
                      if (iVar2 < 0) {
                        iVar3 = iVar2 + (uint)((param_3 & 1) != 0);
                      }
                      iVar7 = iVar4;
                      if (iVar4 < 0) {
                        iVar7 = iVar4 + (uint)((param_2 & 1) != 0);
                      }
                      local_34 = local_34 +
                                 *(int *)(&stack0xffffff44 +
                                         (((local_20 - local_1c) + iVar3) * param_2 +
                                         (iVar5 - local_18) + iVar7) * 4) *
                                 (uint)*(byte *)(iVar6 + 3 +
                                                (*(int *)(param_1 + 4) * local_20 + iVar5) * 4);
                    }
                    iVar5 = iVar5 + 1;
                    local_48 = local_48 + -1;
                  } while (local_48 != 0);
                }
                local_20 = local_20 + 1;
                local_44 = local_44 + -1;
              } while (local_44 != 0);
            }
            iVar3 = *(int *)(param_1 + 4) * local_1c + local_18;
            if ((param_5 != '\0') && (0 < local_34)) {
              local_5c = FUN_00404878();
              local_58 = extraout_EDX;
              if ((extraout_EDX != 0) && (extraout_EDX < 0)) {
                local_5c = 0;
                local_58 = 0;
              }
              if (local_58 == 0) {
                if (local_5c < 0x100) goto LAB_005b2060;
LAB_005b2050:
                local_64 = 0xff;
              }
              else {
                if (0 < local_58) goto LAB_005b2050;
LAB_005b2060:
                local_64 = (undefined1)local_5c;
              }
              iVar2 = *(int *)(param_1 + 0xc);
              *(undefined1 *)(iVar2 + 2 + iVar3 * 4) = local_64;
              local_74 = FUN_00404878();
              local_70 = extraout_EDX_00;
              if ((extraout_EDX_00 != 0) && (extraout_EDX_00 < 0)) {
                local_74 = 0;
                local_70 = 0;
              }
              if (local_70 == 0) {
                if (local_74 < 0x100) goto LAB_005b20db;
LAB_005b20cb:
                local_7c = 0xff;
              }
              else {
                if (0 < local_70) goto LAB_005b20cb;
LAB_005b20db:
                local_7c = (undefined1)local_74;
              }
              *(undefined1 *)(iVar2 + 1 + iVar3 * 4) = local_7c;
              local_8c = FUN_00404878();
              local_88 = extraout_EDX_01;
              if ((extraout_EDX_01 != 0) && (extraout_EDX_01 < 0)) {
                local_8c = 0;
                local_88 = 0;
              }
              if (local_88 == 0) {
                if (local_8c < 0x100) goto LAB_005b2168;
LAB_005b2152:
                local_94 = 0xff;
              }
              else {
                if (0 < local_88) goto LAB_005b2152;
LAB_005b2168:
                local_94 = (undefined1)local_8c;
              }
              *(undefined1 *)(iVar2 + iVar3 * 4) = local_94;
            }
            if (((param_4 != '\0') && (*(char *)(*(int *)(param_1 + 0xc) + 3 + iVar3 * 4) != '\0'))
               && (0 < local_38)) {
              local_a4 = FUN_00404878();
              local_a0 = extraout_EDX_02;
              if ((extraout_EDX_02 != 0) && (extraout_EDX_02 < 0)) {
                local_a4 = 0;
                local_a0 = 0;
              }
              if (local_a0 == 0) {
                if (local_a4 < 0x100) goto LAB_005b223a;
LAB_005b2224:
                local_ac = 0xff;
              }
              else {
                if (0 < local_a0) goto LAB_005b2224;
LAB_005b223a:
                local_ac = (undefined1)local_a4;
              }
              *(undefined1 *)(*(int *)(param_1 + 0xc) + 3 + iVar3 * 4) = local_ac;
            }
            local_18 = local_18 + 1;
            local_40 = local_40 + -1;
          } while (local_40 != 0);
        }
        local_1c = local_1c + 1;
        local_3c = local_3c + -1;
      } while (local_3c != 0);
    }
    FUN_00404338(iVar6);
  }
  return;
}
