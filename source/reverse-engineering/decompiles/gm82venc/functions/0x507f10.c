// rea decompile_all
// name: FUN_00507f10
// address: 0x507f10
// body: available
// range: 0x507f10-0x508404 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00507f10(int *param_1,uint param_2,uint param_3,uint *param_4,int *param_5,int param_6,
            uint *param_7,int *param_8,int param_9,int param_10)

{
  undefined3 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint local_10c [16];
  int local_cc [15];
  uint local_90 [16];
  uint *local_50;
  int *local_4c;
  uint *local_48;
  uint *local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  int local_30;
  uint *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int *local_8;

  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[8] = 0;
  local_90[9] = 0;
  local_90[10] = 0;
  local_90[0xb] = 0;
  local_90[0xc] = 0;
  local_90[0xd] = 0;
  local_90[0xe] = 0;
  local_90[0xf] = 0;
  local_2c = (uint *)param_1;
  local_20 = param_2;
  do {
    local_90[*local_2c] = local_90[*local_2c] + 1;
    local_2c = local_2c + 1;
    local_20 = local_20 - 1;
  } while (local_20 != 0);
  if (local_90[0] == local_c) {
    *param_8 = 0;
    uVar2 = 0;
    *param_7 = 0;
  }
  else {
    uVar3 = 1;
    local_28 = *param_7;
    local_44 = local_90 + 1;
    do {
      if (*local_44 != 0) break;
      uVar3 = uVar3 + 1;
      local_44 = local_44 + 1;
    } while (uVar3 < 0x10);
    local_24 = uVar3;
    if (*param_7 < uVar3) {
      local_28 = uVar3;
    }
    local_20 = 0xf;
    local_48 = local_90 + 0xf;
    do {
      if (*local_48 != 0) break;
      local_20 = local_20 - 1;
      local_48 = local_48 + -1;
    } while (local_20 != 0);
    local_18 = local_20;
    if (local_20 < local_28) {
      local_28 = local_20;
    }
    *param_7 = local_28;
    local_40 = 1 << ((byte)uVar3 & 0x1f);
    local_48 = local_90 + uVar3;
    for (; uVar3 < local_20; uVar3 = uVar3 + 1) {
      uVar4 = *local_48;
      if ((int)(local_40 - uVar4) < 0) {
        return 0xfffffffd;
      }
      local_48 = local_48 + 1;
      local_40 = (local_40 - uVar4) * 2;
    }
    local_40 = local_40 - local_90[local_20];
    if (local_40 < 0) {
      uVar2 = 0xfffffffd;
    }
    else {
      local_90[local_20] = local_90[local_20] + local_40;
      local_10c[1] = 0;
      local_2c = local_90 + 1;
      puVar5 = local_10c + 2;
      uVar3 = 0;
      while (local_20 = local_20 - 1, local_20 != 0) {
        uVar3 = uVar3 + *local_2c;
        local_2c = local_2c + 1;
        *puVar5 = uVar3;
        puVar5 = puVar5 + 1;
      }
      local_2c = (uint *)local_8;
      local_20 = 0;
      do {
        puVar5 = local_2c;
        local_2c = local_2c + 1;
        iVar9 = *puVar5;
        if (iVar9 != 0) {
          uVar3 = local_10c[iVar9];
          local_10c[iVar9] = local_10c[iVar9] + 1;
          param_4[uVar3] = local_20;
        }
        local_20 = local_20 + 1;
      } while (local_20 < local_c);
      local_c = local_10c[local_18];
      local_20 = 0;
      local_10c[0] = 0;
      local_2c = param_4;
      local_1c = -1;
      local_3c = -local_28;
      local_cc[0] = 0;
      local_30 = 0;
      uVar3 = 0;
      local_48 = local_90 + local_24;
      if ((int)local_24 <= (int)local_18) {
        do {
          local_14 = *local_48;
          while (uVar4 = local_14, local_14 = local_14 - 1, uVar4 != 0) {
            local_50 = local_10c + local_1c;
            local_4c = local_cc + local_1c;
            while ((int)(local_3c + local_28) < (int)local_24) {
              local_1c = local_1c + 1;
              local_50 = local_50 + 1;
              local_4c = local_4c + 1;
              local_3c = local_3c + local_28;
              uVar3 = local_18 - local_3c;
              if (local_28 < uVar3) {
                uVar3 = local_28;
              }
              uVar4 = local_24 - local_3c;
              uVar8 = 1 << ((byte)uVar4 & 0x1f);
              if (local_14 + 1 < uVar8) {
                iVar9 = uVar8 - (local_14 + 1);
                puVar5 = local_90 + local_24;
                if (uVar4 < uVar3) {
                  while (uVar4 = uVar4 + 1, uVar4 < uVar3) {
                    puVar5 = puVar5 + 1;
                    if ((uint)(iVar9 * 2) <= *puVar5) break;
                    iVar9 = iVar9 * 2 - *puVar5;
                  }
                }
              }
              uVar3 = 1 << ((byte)uVar4 & 0x1f);
              if (0x5a0 < *param_5 + uVar3) {
                return 0xfffffffd;
              }
              local_30 = *param_5 * 8 + param_6;
              *local_4c = local_30;
              *param_5 = *param_5 + uVar3;
              if (local_1c == 0) {
                *param_8 = local_30;
              }
              else {
                *local_50 = local_20;
                local_38 = CONCAT31(CONCAT21(local_38._2_2_,(char)local_28),(byte)uVar4);
                uVar4 = local_20 >> ((char)local_3c - (char)local_28 & 0x1fU);
                iVar9 = local_4c[-1];
                iVar6 = local_30 - iVar9;
                if (iVar6 < 0) {
                  iVar6 = iVar6 + 7;
                }
                local_34 = (iVar6 >> 3) - uVar4;
                *(undefined4 *)(iVar9 + uVar4 * 8) = local_38;
                *(uint *)(iVar9 + 4 + uVar4 * 8) = local_34;
              }
            }
            uVar1 = CONCAT21(local_38._2_2_,(char)local_24 - (byte)local_3c);
            if (local_2c < param_4 + local_c) {
              if (*local_2c < local_10) {
                if (*local_2c < 0x100) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = 0x60;
                }
                local_38 = CONCAT31(uVar1,uVar7);
                local_34 = *local_2c;
                local_2c = local_2c + 1;
              }
              else {
                local_38 = CONCAT31(uVar1,*(char *)(param_9 + (*local_2c - local_10) * 4) + 'P');
                local_34 = *(uint *)(param_10 + (*local_2c - local_10) * 4);
                local_2c = local_2c + 1;
              }
            }
            else {
              local_38 = CONCAT31(uVar1,0xc0);
            }
            for (uVar4 = local_20 >> ((byte)local_3c & 0x1f); uVar4 < uVar3;
                uVar4 = uVar4 + (1 << ((char)local_24 - (byte)local_3c & 0x1f))) {
              *(undefined4 *)(local_30 + uVar4 * 8) = local_38;
              *(uint *)(local_30 + 4 + uVar4 * 8) = local_34;
            }
            uVar4 = 1 << ((char)local_24 - 1U & 0x1f);
            while ((local_20 & uVar4) != 0) {
              local_20 = local_20 ^ uVar4;
              uVar4 = uVar4 >> 1;
            }
            local_20 = local_20 ^ uVar4;
            for (local_50 = local_10c + local_1c;
                ((1 << ((byte)local_3c & 0x1f)) - 1U & local_20) != *local_50;
                local_50 = local_50 + -1) {
              local_1c = local_1c + -1;
              local_3c = local_3c - local_28;
            }
          }
          local_24 = local_24 + 1;
          local_48 = local_48 + 1;
        } while ((int)local_24 <= (int)local_18);
      }
      if ((local_40 == 0) || (local_18 == 1)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xfffffffb;
      }
    }
  }
  return uVar2;
}
