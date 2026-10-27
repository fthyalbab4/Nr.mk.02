// rea decompile_all
// name: FUN_0046ab0c
// address: 0x46ab0c
// body: available
// range: 0x46ab0c-0x46af7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0046ab0c(int param_1,ushort *param_2,uint param_3,ushort *param_4,uint *param_5,int *param_6)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  short *psVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ushort auStack_88 [16];
  ushort local_68 [15];
  short local_4a;
  ushort *local_48;
  int local_44;
  ushort *local_40;
  ushort *local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  ushort *local_c;
  int local_8;

  local_c = param_2;
  local_8 = param_1;
  local_10 = 0;
  puVar4 = local_68;
  do {
    *puVar4 = 0;
    local_10 = local_10 + 1;
    puVar4 = puVar4 + 1;
  } while (local_10 < 0x10);
  uVar11 = 0;
  puVar4 = local_c;
  if (param_3 != 0) {
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      uVar11 = uVar11 + 1;
      local_68[uVar1] = local_68[uVar1] + 1;
    } while (uVar11 < param_3);
  }
  psVar5 = &local_4a;
  local_1c = *param_5;
  local_18 = 0xf;
  do {
    if (*psVar5 != 0) break;
    local_18 = local_18 - 1;
    psVar5 = psVar5 + -1;
  } while (local_18 != 0);
  if (local_18 < *param_5) {
    local_1c = local_18;
  }
  if (local_18 == 0) {
    puVar3 = (undefined4 *)*param_6;
    *param_6 = *param_6 + 4;
    *puVar3 = 0x140;
    puVar3 = (undefined4 *)*param_6;
    *param_6 = *param_6 + 4;
    *puVar3 = 0x140;
    uVar6 = 0;
    *param_5 = 1;
  }
  else {
    local_14 = 1;
    local_48 = local_68 + 1;
    do {
      if (*local_48 != 0) break;
      local_14 = local_14 + 1;
      local_48 = local_48 + 1;
    } while (local_14 < 0x10);
    if (local_1c < local_14) {
      local_1c = local_14;
    }
    local_10 = 1;
    iVar12 = 1;
    puVar4 = local_68;
    do {
      puVar4 = puVar4 + 1;
      iVar12 = iVar12 * 2 - (uint)*puVar4;
      if (iVar12 < 0) {
        return 0xffffffff;
      }
      local_10 = local_10 + 1;
    } while (local_10 < 0x10);
    if ((iVar12 < 1) || ((local_8 != 0 && (local_18 == 1)))) {
      auStack_88[1] = 0;
      local_10 = 1;
      puVar4 = auStack_88;
      local_48 = local_68 + 1;
      do {
        puVar4 = puVar4 + 1;
        puVar4[1] = *puVar4 + *local_48;
        local_10 = local_10 + 1;
        local_48 = local_48 + 1;
      } while (local_10 < 0xf);
      uVar11 = 0;
      local_48 = local_c;
      if (param_3 != 0) {
        do {
          uVar1 = *local_48;
          if (uVar1 != 0) {
            uVar2 = auStack_88[uVar1];
            auStack_88[uVar1] = auStack_88[uVar1] + 1;
            param_4[uVar2] = (ushort)uVar11;
          }
          uVar11 = uVar11 + 1;
          local_48 = local_48 + 1;
        } while (uVar11 < param_3);
      }
      if (local_8 == 0) {
        local_40 = param_4;
        local_3c = param_4;
        local_44 = 0x13;
      }
      else if (local_8 == 1) {
        local_3c = (ushort *)&DAT_0067df4a;
        local_40 = (ushort *)&DAT_0067df88;
        local_44 = 0x100;
      }
      else {
        local_3c = (ushort *)&DAT_0067e1c8;
        local_40 = (ushort *)&DAT_0067e208;
        local_44 = -1;
      }
      local_10 = local_14;
      uVar11 = 0;
      local_38 = *param_6;
      local_20 = 0;
      local_2c = 0xffffffff;
      local_24 = 1 << ((byte)local_1c & 0x1f);
      local_30 = local_24 - 1;
      if ((local_8 != 1) || (local_24 < 0x5b0)) {
        local_48 = param_4;
        uVar7 = local_1c;
        while( true ) {
          do {
            uVar8 = local_10;
            bVar10 = (char)local_10 - (byte)local_20;
            uVar13 = (uint)*local_48;
            if ((int)uVar13 < local_44) {
              local_34 = (uint)CONCAT21(*local_48,bVar10) << 8;
            }
            else if (local_44 < (int)uVar13) {
              local_34 = CONCAT22(local_3c[uVar13],CONCAT11(bVar10,(char)local_40[uVar13]));
            }
            else {
              local_34 = CONCAT31((uint3)bVar10,0x60);
            }
            local_28 = 1 << ((byte)uVar7 & 0x1f);
            local_14 = local_28;
            do {
              local_28 = local_28 - (1 << ((char)local_10 - (byte)local_20 & 0x1f));
              *(uint *)(local_38 + ((uVar11 >> ((byte)local_20 & 0x1f)) + local_28) * 4) = local_34;
            } while (local_28 != 0);
            for (uVar13 = 1 << ((char)local_10 - 1U & 0x1f); (uVar13 & uVar11) != 0;
                uVar13 = uVar13 >> 1) {
            }
            if (uVar13 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (uVar11 & uVar13 - 1) + uVar13;
            }
            local_48 = local_48 + 1;
            local_68[local_10] = local_68[local_10] - 1;
            if (local_68[uVar8] == 0) {
              if (local_10 == local_18) {
                local_34._0_2_ = CONCAT11((char)local_10 - (byte)local_20,0x40);
                local_34 = (uint)(ushort)local_34;
                while (uVar11 != 0) {
                  if ((local_20 != 0) && ((local_30 & uVar11) != local_2c)) {
                    local_20 = 0;
                    local_10 = local_1c;
                    local_38 = *param_6;
                    local_34._0_2_ = CONCAT11((undefined1)local_1c,(undefined1)local_34);
                    local_34 = (uint)(ushort)local_34;
                  }
                  *(uint *)(local_38 + (uVar11 >> ((byte)local_20 & 0x1f)) * 4) = local_34;
                  for (uVar7 = 1 << ((char)local_10 - 1U & 0x1f); (uVar7 & uVar11) != 0;
                      uVar7 = uVar7 >> 1) {
                  }
                  if (uVar7 == 0) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = (uVar11 & uVar7 - 1) + uVar7;
                  }
                }
                *param_6 = *param_6 + local_24 * 4;
                *param_5 = local_1c;
                return 0;
              }
              local_10 = (uint)local_c[*local_48];
            }
          } while ((local_10 <= local_1c) || ((local_30 & uVar11) == local_2c));
          if (local_20 == 0) {
            local_20 = local_1c;
          }
          local_38 = local_38 + local_14 * 4;
          uVar7 = local_10 - local_20;
          for (iVar12 = 1 << ((byte)uVar7 & 0x1f);
              (uVar8 = local_20 + uVar7, uVar8 < local_18 &&
              (0 < (int)(iVar12 - (uint)local_68[uVar8])));
              iVar12 = (iVar12 - (uint)local_68[uVar8]) * 2) {
            uVar7 = uVar7 + 1;
          }
          local_24 = local_24 + (1 << ((byte)uVar7 & 0x1f));
          if ((local_8 == 1) && (0x5af < local_24)) break;
          local_2c = local_30 & uVar11;
          iVar12 = *param_6;
          *(byte *)(iVar12 + local_2c * 4) = (byte)uVar7;
          *(undefined1 *)(iVar12 + 1 + local_2c * 4) = (undefined1)local_1c;
          iVar9 = local_38 - iVar12;
          if (iVar9 < 0) {
            iVar9 = iVar9 + 3;
          }
          *(short *)(iVar12 + 2 + local_2c * 4) = (short)(iVar9 >> 2);
        }
        return 1;
      }
      uVar6 = 1;
    }
    else {
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
}
