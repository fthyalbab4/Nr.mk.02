// rea decompile_all
// name: FUN_00509018
// address: 0x509018
// body: available
// range: 0x509018-0x5094dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00509018(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *local_2c;
  uint local_20;
  byte *local_1c;
  uint local_18;
  uint local_14;
  byte *local_10;

  pbVar9 = (byte *)*param_4;
  local_18 = param_4[1];
  uVar8 = *(uint *)(param_5 + 0x1c);
  uVar6 = *(uint *)(param_5 + 0x20);
  local_1c = *(byte **)(param_5 + 0x34);
  if (local_1c < *(byte **)(param_5 + 0x30)) {
    local_20 = (*(int *)(param_5 + 0x30) - (int)local_1c) - 1;
  }
  else {
    local_20 = *(int *)(param_5 + 0x2c) - (int)local_1c;
  }
  uVar5 = *(uint *)(&DAT_00683454 + param_1 * 4);
  uVar2 = *(uint *)(&DAT_00683454 + param_2 * 4);
joined_r0x00509087:
  for (; uVar8 < 0x14; uVar8 = uVar8 + 8) {
    local_18 = local_18 - 1;
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    uVar6 = uVar6 | (uint)bVar1 << ((byte)uVar8 & 0x1f);
  }
  local_10 = (byte *)((uVar5 & uVar6) * 8 + param_3);
  local_14 = (uint)*local_10;
  if (local_14 != 0) {
LAB_005090e2:
    uVar6 = uVar6 >> (local_10[1] & 0x1f);
    uVar8 = uVar8 - local_10[1];
    if ((local_14 & 0x10) == 0) goto LAB_0050933d;
    local_14 = local_14 & 0xf;
    uVar3 = *(int *)(local_10 + 4) + (*(uint *)(&DAT_00683454 + local_14 * 4) & uVar6);
    uVar7 = uVar6 >> (sbyte)local_14;
    for (uVar8 = uVar8 - local_14; uVar8 < 0xf; uVar8 = uVar8 + 8) {
      local_18 = local_18 - 1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      uVar7 = uVar7 | (uint)bVar1 << ((byte)uVar8 & 0x1f);
    }
    local_10 = (byte *)((uVar2 & uVar7) * 8 + param_6);
    bVar1 = *local_10;
    while( true ) {
      local_14 = (uint)bVar1;
      uVar7 = uVar7 >> (local_10[1] & 0x1f);
      uVar8 = uVar8 - local_10[1];
      if ((bVar1 & 0x10) != 0) break;
      if ((bVar1 & 0x40) != 0) {
        param_4[6] = (int)s_invalid_distance_code_00683498;
        uVar6 = param_4[1] - local_18;
        if (uVar8 >> 3 < uVar6) {
          uVar6 = uVar8 >> 3;
        }
        *(uint *)(param_5 + 0x20) = uVar7;
        *(uint *)(param_5 + 0x1c) = uVar8 + uVar6 * -8;
        param_4[1] = local_18 + uVar6;
        param_4[2] = param_4[2] + (((int)pbVar9 - uVar6) - *param_4);
        *param_4 = (int)pbVar9 - uVar6;
        *(byte **)(param_5 + 0x34) = local_1c;
        return 0xfffffffd;
      }
      local_10 = local_10 +
                 (*(uint *)(&DAT_00683454 + local_14 * 4) & uVar7) * 8 + *(int *)(local_10 + 4) * 8;
      bVar1 = *local_10;
    }
    local_14 = local_14 & 0xf;
    for (; uVar8 < local_14; uVar8 = uVar8 + 8) {
      local_18 = local_18 - 1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      uVar7 = uVar7 | (uint)bVar1 << ((byte)uVar8 & 0x1f);
    }
    uVar6 = uVar7 >> (sbyte)local_14;
    uVar8 = uVar8 - local_14;
    local_20 = local_20 - uVar3;
    local_2c = local_1c +
               -(*(int *)(local_10 + 4) + (*(uint *)(&DAT_00683454 + local_14 * 4) & uVar7));
    if (local_2c < *(byte **)(param_5 + 0x28)) {
      do {
        local_2c = local_2c + (*(int *)(param_5 + 0x2c) - *(int *)(param_5 + 0x28));
      } while (local_2c < *(byte **)(param_5 + 0x28));
      local_14 = *(int *)(param_5 + 0x2c) - (int)local_2c;
      if (local_14 < uVar3) {
        iVar4 = uVar3 - local_14;
        do {
          *local_1c = *local_2c;
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        local_2c = *(byte **)(param_5 + 0x28);
        do {
          *local_1c = *local_2c;
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      else {
        *local_1c = *local_2c;
        local_1c[1] = local_2c[1];
        local_2c = local_2c + 2;
        local_1c = local_1c + 2;
        iVar4 = uVar3 - 2;
        do {
          *local_1c = *local_2c;
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      *local_1c = *local_2c;
      local_1c[1] = local_2c[1];
      local_2c = local_2c + 2;
      local_1c = local_1c + 2;
      iVar4 = uVar3 - 2;
      do {
        *local_1c = *local_2c;
        local_2c = local_2c + 1;
        local_1c = local_1c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    goto LAB_00509469;
  }
  uVar6 = uVar6 >> (local_10[1] & 0x1f);
  uVar8 = uVar8 - local_10[1];
  *local_1c = local_10[4];
  local_1c = local_1c + 1;
  local_20 = local_20 - 1;
  goto LAB_00509469;
LAB_0050933d:
  if ((local_14 & 0x40) != 0) {
    if ((local_14 & 0x20) != 0) {
      uVar5 = param_4[1] - local_18;
      if (uVar8 >> 3 < uVar5) {
        uVar5 = uVar8 >> 3;
      }
      *(uint *)(param_5 + 0x20) = uVar6;
      *(uint *)(param_5 + 0x1c) = uVar8 + uVar5 * -8;
      param_4[1] = local_18 + uVar5;
      param_4[2] = param_4[2] + (((int)pbVar9 - uVar5) - *param_4);
      *param_4 = (int)pbVar9 - uVar5;
      *(byte **)(param_5 + 0x34) = local_1c;
      return 1;
    }
    param_4[6] = (int)s_invalid_literal_length_code_006834ae;
    uVar5 = param_4[1] - local_18;
    if (uVar8 >> 3 < uVar5) {
      uVar5 = uVar8 >> 3;
    }
    *(uint *)(param_5 + 0x20) = uVar6;
    *(uint *)(param_5 + 0x1c) = uVar8 + uVar5 * -8;
    param_4[1] = local_18 + uVar5;
    param_4[2] = param_4[2] + (((int)pbVar9 - uVar5) - *param_4);
    *param_4 = (int)pbVar9 - uVar5;
    *(byte **)(param_5 + 0x34) = local_1c;
    return 0xfffffffd;
  }
  local_10 = local_10 +
             (*(uint *)(&DAT_00683454 + local_14 * 4) & uVar6) * 8 + *(int *)(local_10 + 4) * 8;
  local_14 = (uint)*local_10;
  if (local_14 == 0) goto code_r0x00509373;
  goto LAB_005090e2;
code_r0x00509373:
  uVar6 = uVar6 >> (local_10[1] & 0x1f);
  uVar8 = uVar8 - local_10[1];
  *local_1c = local_10[4];
  local_1c = local_1c + 1;
  local_20 = local_20 - 1;
LAB_00509469:
  if ((local_20 < 0x102) || (local_18 < 10)) {
    uVar5 = param_4[1] - local_18;
    if (uVar8 >> 3 < uVar5) {
      uVar5 = uVar8 >> 3;
    }
    *(uint *)(param_5 + 0x20) = uVar6;
    *(uint *)(param_5 + 0x1c) = uVar8 + uVar5 * -8;
    param_4[1] = local_18 + uVar5;
    param_4[2] = param_4[2] + (((int)pbVar9 - uVar5) - *param_4);
    *param_4 = (int)pbVar9 - uVar5;
    *(byte **)(param_5 + 0x34) = local_1c;
    return 0;
  }
  goto joined_r0x00509087;
}
