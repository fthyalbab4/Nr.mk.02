// rea decompile_all
// name: FUN_005cba30
// address: 0x5cba30
// body: available
// range: 0x5cba30-0x5cbe7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005cba30(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *local_30;
  byte *local_20;
  byte *local_1c;
  uint local_18;
  uint local_14;
  byte *local_10;

  pbVar8 = (byte *)*param_4;
  local_18 = param_4[1];
  local_14 = *(uint *)(param_5 + 0x20);
  uVar7 = *(uint *)(param_5 + 0x1c);
  local_1c = *(byte **)(param_5 + 0x34);
  if (local_1c < *(byte **)(param_5 + 0x30)) {
    local_20 = *(byte **)(param_5 + 0x30) + (-1 - (int)local_1c);
  }
  else {
    local_20 = (byte *)(*(int *)(param_5 + 0x2c) - (int)local_1c);
  }
  uVar6 = *(uint *)(&DAT_00687a14 + param_1 * 4);
  uVar2 = *(uint *)(&DAT_00687a14 + param_2 * 4);
joined_r0x005cbaa2:
  for (; uVar7 < 0x14; uVar7 = uVar7 + 8) {
    local_18 = local_18 - 1;
    local_14 = local_14 | (uint)*pbVar8 << ((byte)uVar7 & 0x1f);
    pbVar8 = pbVar8 + 1;
  }
  local_10 = (byte *)(param_3 + (local_14 & uVar6) * 8);
  uVar3 = (uint)*local_10;
  if (uVar3 != 0) {
LAB_005cbafb:
    local_14 = local_14 >> (local_10[1] & 0x1f);
    uVar7 = uVar7 - local_10[1];
    if ((uVar3 & 0x10) == 0) goto LAB_005cbce9;
    uVar3 = uVar3 & 0xf;
    uVar5 = *(int *)(local_10 + 4) + (*(uint *)(&DAT_00687a14 + uVar3 * 4) & local_14);
    local_14 = local_14 >> (sbyte)uVar3;
    for (uVar7 = uVar7 - uVar3; uVar7 < 0xf; uVar7 = uVar7 + 8) {
      local_18 = local_18 - 1;
      local_14 = local_14 | (uint)*pbVar8 << ((byte)uVar7 & 0x1f);
      pbVar8 = pbVar8 + 1;
    }
    local_10 = (byte *)(param_6 + (local_14 & uVar2) * 8);
    bVar1 = *local_10;
    while( true ) {
      local_14 = local_14 >> (local_10[1] & 0x1f);
      uVar7 = uVar7 - local_10[1];
      if ((bVar1 & 0x10) != 0) break;
      if ((bVar1 & 0x40) != 0) {
        FUN_0040b9d0(&LAB_005cad1c,param_4 + 6);
        uVar6 = param_4[1] - local_18;
        if (uVar7 >> 3 < param_4[1] - local_18) {
          uVar6 = uVar7 >> 3;
        }
        *(uint *)(param_5 + 0x20) = local_14;
        *(uint *)(param_5 + 0x1c) = uVar7 + uVar6 * -8;
        param_4[1] = local_18 + uVar6;
        param_4[2] = param_4[2] + (((int)pbVar8 - uVar6) - *param_4);
        *param_4 = (int)pbVar8 - uVar6;
        *(byte **)(param_5 + 0x34) = local_1c;
        return 0xfffffffd;
      }
      local_10 = local_10 +
                 (*(int *)(local_10 + 4) + (*(uint *)(&DAT_00687a14 + (uint)bVar1 * 4) & local_14))
                 * 8;
      bVar1 = *local_10;
    }
    uVar3 = bVar1 & 0xf;
    for (; uVar7 < uVar3; uVar7 = uVar7 + 8) {
      local_18 = local_18 - 1;
      local_14 = local_14 | (uint)*pbVar8 << ((byte)uVar7 & 0x1f);
      pbVar8 = pbVar8 + 1;
    }
    uVar4 = *(int *)(local_10 + 4) + (*(uint *)(&DAT_00687a14 + uVar3 * 4) & local_14);
    local_14 = local_14 >> (sbyte)uVar3;
    uVar7 = uVar7 - uVar3;
    local_20 = local_20 + -uVar5;
    uVar3 = (int)local_1c - *(int *)(param_5 + 0x28);
    if (uVar3 < uVar4) {
      uVar4 = uVar4 - uVar3;
      local_30 = (byte *)(*(int *)(param_5 + 0x2c) - uVar4);
      if (uVar4 < uVar5) {
        uVar5 = uVar5 - uVar4;
        do {
          *local_1c = *local_30;
          local_1c = local_1c + 1;
          local_30 = local_30 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        local_30 = *(byte **)(param_5 + 0x28);
      }
    }
    else {
      local_30 = local_1c + -uVar4;
      *local_1c = *local_30;
      local_1c[1] = local_30[1];
      local_1c = local_1c + 2;
      local_30 = local_30 + 2;
      uVar5 = uVar5 - 2;
    }
    do {
      *local_1c = *local_30;
      local_1c = local_1c + 1;
      local_30 = local_30 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    goto LAB_005cbe0d;
  }
  local_14 = local_14 >> (local_10[1] & 0x1f);
  uVar7 = uVar7 - local_10[1];
  *local_1c = local_10[4];
  local_1c = local_1c + 1;
  local_20 = local_20 + -1;
  goto LAB_005cbe0d;
LAB_005cbce9:
  if ((uVar3 & 0x40) != 0) {
    if ((uVar3 & 0x20) != 0) {
      uVar6 = param_4[1] - local_18;
      if (uVar7 >> 3 < param_4[1] - local_18) {
        uVar6 = uVar7 >> 3;
      }
      *(uint *)(param_5 + 0x20) = local_14;
      *(uint *)(param_5 + 0x1c) = uVar7 + uVar6 * -8;
      param_4[1] = local_18 + uVar6;
      param_4[2] = param_4[2] + (((int)pbVar8 - uVar6) - *param_4);
      *param_4 = (int)pbVar8 - uVar6;
      *(byte **)(param_5 + 0x34) = local_1c;
      return 1;
    }
    FUN_0040b9d0(&LAB_005cad24,param_4 + 6);
    uVar6 = param_4[1] - local_18;
    if (uVar7 >> 3 < param_4[1] - local_18) {
      uVar6 = uVar7 >> 3;
    }
    *(uint *)(param_5 + 0x20) = local_14;
    *(uint *)(param_5 + 0x1c) = uVar7 + uVar6 * -8;
    param_4[1] = local_18 + uVar6;
    param_4[2] = param_4[2] + (((int)pbVar8 - uVar6) - *param_4);
    *param_4 = (int)pbVar8 - uVar6;
    *(byte **)(param_5 + 0x34) = local_1c;
    return 0xfffffffd;
  }
  local_10 = local_10 +
             (*(int *)(local_10 + 4) + (*(uint *)(&DAT_00687a14 + uVar3 * 4) & local_14)) * 8;
  uVar3 = (uint)*local_10;
  if (uVar3 == 0) goto code_r0x005cbd18;
  goto LAB_005cbafb;
code_r0x005cbd18:
  local_14 = local_14 >> (local_10[1] & 0x1f);
  uVar7 = uVar7 - local_10[1];
  *local_1c = local_10[4];
  local_1c = local_1c + 1;
  local_20 = local_20 + -1;
LAB_005cbe0d:
  if ((local_20 < (byte *)0x102) || (local_18 < 10)) {
    uVar6 = param_4[1] - local_18;
    if (uVar7 >> 3 < param_4[1] - local_18) {
      uVar6 = uVar7 >> 3;
    }
    *(uint *)(param_5 + 0x20) = local_14;
    *(uint *)(param_5 + 0x1c) = uVar7 + uVar6 * -8;
    param_4[1] = local_18 + uVar6;
    param_4[2] = param_4[2] + (((int)pbVar8 - uVar6) - *param_4);
    *param_4 = (int)pbVar8 - uVar6;
    *(byte **)(param_5 + 0x34) = local_1c;
    return 0;
  }
  goto joined_r0x005cbaa2;
}
