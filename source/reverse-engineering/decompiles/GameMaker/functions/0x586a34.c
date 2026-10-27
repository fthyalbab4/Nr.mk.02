// rea decompile_all
// name: FUN_00586a34
// address: 0x586a34
// body: available
// range: 0x586a34-0x586e88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00586a34(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint *param_5,
            int *param_6,undefined4 param_7,int param_8,uint *param_9,uint *param_10,
            undefined4 param_11,int param_12,undefined4 param_13,int param_14,uint param_15)

{
  uint3 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  uint local_10c [16];
  uint local_cc [15];
  uint local_90 [17];
  uint *local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  uint *local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  int *local_c;

  local_14 = param_3;
  local_10 = param_2;
  local_c = param_1;
  FUN_00404f08(local_90,0x40,0);
  uVar6 = local_14;
  piVar7 = local_c;
  do {
    local_90[*piVar7] = local_90[*piVar7] + 1;
    piVar7 = piVar7 + 1;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  if (local_90[0] == local_14) {
    *param_10 = 0;
    *param_9 = 0;
    local_18 = 0;
  }
  else {
    local_34 = *param_9;
    uVar6 = 1;
    puVar8 = local_90;
    do {
      puVar8 = puVar8 + 1;
      if (*puVar8 != 0) break;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x10);
    local_30 = uVar6;
    if (*param_9 < uVar6) {
      local_34 = uVar6;
    }
    local_2c = 0xf;
    puVar8 = local_90 + 0xf;
    do {
      if (*puVar8 != 0) break;
      local_2c = local_2c - 1;
      puVar8 = puVar8 + -1;
    } while (local_2c != 0);
    local_24 = local_2c;
    if (local_2c < local_34) {
      local_34 = local_2c;
    }
    *param_9 = local_34;
    local_90[0x10] = 1 << ((byte)uVar6 & 0x1f);
    for (; uVar6 < local_2c; uVar6 = uVar6 + 1) {
      if ((int)(local_90[0x10] - local_90[uVar6]) < 0) {
        return 0xfffffffd;
      }
      local_90[0x10] = (local_90[0x10] - local_90[uVar6]) * 2;
    }
    local_90[0x10] = local_90[0x10] - local_90[local_2c];
    if ((int)local_90[0x10] < 0) {
      local_18 = 0xfffffffd;
    }
    else {
      local_90[local_2c] = local_90[local_2c] + local_90[0x10];
      local_10c[1] = 0;
      uVar6 = 0;
      local_3c = local_90 + 1;
      local_4c = local_10c + 2;
      while (local_2c = local_2c - 1, local_2c != 0) {
        uVar6 = uVar6 + *local_3c;
        *local_4c = uVar6;
        local_3c = local_3c + 1;
        local_4c = local_4c + 1;
      }
      local_2c = 0;
      do {
        iVar9 = *local_c;
        if (iVar9 != 0) {
          param_5[local_10c[iVar9]] = local_2c;
          local_10c[iVar9] = local_10c[iVar9] + 1;
        }
        local_2c = local_2c + 1;
        local_c = local_c + 1;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
      local_14 = local_10c[local_24];
      local_2c = 0;
      local_10c[0] = 0;
      local_3c = param_5;
      local_28 = -1;
      iVar9 = -local_34;
      local_cc[0] = 0;
      local_40 = 0;
      uVar6 = 0;
      if ((int)local_30 <= (int)local_24) {
        do {
          local_1c = local_90[local_30];
          while (local_1c != 0) {
            local_1c = local_1c - 1;
            while (iVar2 = local_28, (int)(local_34 + iVar9) < (int)local_30) {
              local_28 = local_28 + 1;
              iVar9 = iVar9 + local_34;
              uVar6 = local_24 - iVar9;
              if (local_34 < local_24 - iVar9) {
                uVar6 = local_34;
              }
              uVar4 = local_30 - iVar9;
              local_20 = 1 << ((byte)uVar4 & 0x1f);
              if (local_1c + 1 < local_20) {
                local_20 = local_20 - (local_1c + 1);
                local_4c = local_90 + local_30;
                if (uVar4 < uVar6) {
                  while (uVar4 = uVar4 + 1, uVar4 < uVar6) {
                    local_20 = local_20 * 2;
                    local_4c = local_4c + 1;
                    if (local_20 <= *local_4c) break;
                    local_20 = local_20 - *local_4c;
                  }
                }
              }
              uVar6 = 1 << ((byte)uVar4 & 0x1f);
              if (0x5a0 < *param_6 + uVar6) {
                return 0xfffffffc;
              }
              local_40 = param_8 + *param_6 * 8;
              local_10c[iVar2 + 0x11] = local_40;
              *param_6 = *param_6 + uVar6;
              if (local_28 == 0) {
                *param_10 = local_40;
              }
              else {
                local_10c[local_28] = local_2c;
                local_48 = CONCAT31(CONCAT21(local_48._2_2_,(char)local_34),(byte)uVar4);
                uVar3 = local_2c >> ((char)iVar9 - (char)local_34 & 0x1fU);
                local_44 = (local_40 - local_10c[local_28 + 0xf] >> 3) - uVar3;
                uVar4 = local_10c[local_28 + 0xf];
                *(int *)(uVar4 + uVar3 * 8) = local_48;
                *(uint *)(uVar4 + 4 + uVar3 * 8) = local_44;
              }
            }
            bVar5 = (byte)iVar9;
            uVar1 = CONCAT21(local_48._2_2_,(char)local_30 - bVar5);
            if (local_3c < param_5 + local_14) {
              if (*local_3c < param_15) {
                if (*local_3c < 0x100) {
                  local_48 = (uint)uVar1 << 8;
                }
                else {
                  local_48 = CONCAT31(uVar1,0x60);
                }
                local_44 = *local_3c;
                local_3c = local_3c + 1;
              }
              else {
                local_48 = CONCAT31(uVar1,*(char *)(param_12 + (*local_3c - param_15) * 4) + 'P');
                local_44 = *(uint *)(param_14 + (*local_3c - param_15) * 4);
                local_3c = local_3c + 1;
              }
            }
            else {
              local_48 = CONCAT31(uVar1,0xc0);
            }
            local_20 = 1 << ((char)local_30 - bVar5 & 0x1f);
            for (uVar4 = local_2c >> (bVar5 & 0x1f); uVar4 < uVar6; uVar4 = uVar4 + local_20) {
              *(int *)(local_40 + uVar4 * 8) = local_48;
              *(uint *)(local_40 + 4 + uVar4 * 8) = local_44;
            }
            uVar4 = 1 << ((char)local_30 - 1U & 0x1f);
            while ((local_2c & uVar4) != 0) {
              local_2c = local_2c ^ uVar4;
              uVar4 = uVar4 >> 1;
            }
            local_2c = local_2c ^ uVar4;
            local_38 = (1 << (bVar5 & 0x1f)) - 1;
            while ((local_2c & local_38) != local_10c[local_28]) {
              local_28 = local_28 + -1;
              iVar9 = iVar9 - local_34;
              local_38 = (1 << ((byte)iVar9 & 0x1f)) - 1;
            }
          }
          local_30 = local_30 + 1;
        } while ((int)local_30 <= (int)local_24);
      }
      if ((local_90[0x10] == 0) || (local_24 == 1)) {
        local_18 = 0;
      }
      else {
        local_18 = 0xfffffffb;
      }
    }
  }
  return local_18;
}
