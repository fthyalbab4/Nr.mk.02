// rea decompile_all
// name: FUN_00468ebc
// address: 0x468ebc
// body: available
// range: 0x468ebc-0x469289 inclusive
// range: 0x46928c-0x4692a1 inclusive
// range: 0x4692a4-0x4692d0 inclusive
// range: 0x4692d3-0x4692e6 inclusive
// range: 0x4692e9-0x4693b4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00468ebc(int *param_1,int param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  byte *local_48;
  uint local_28;
  uint local_24;
  undefined4 local_10;

  puVar2 = (undefined4 *)param_1[7];
  local_48 = (byte *)(*param_1 + -1);
  pbVar13 = local_48 + param_1[1] + -5;
  puVar18 = (undefined1 *)(param_1[3] + -1);
  iVar14 = (int)puVar18 - (param_2 - param_1[4]);
  puVar11 = puVar18 + param_1[4] + -0x101;
  iVar3 = puVar2[10];
  uVar4 = puVar2[0xb];
  uVar5 = puVar2[0xc];
  iVar15 = puVar2[0xd];
  local_28 = puVar2[0xe];
  local_24 = puVar2[0xf];
  iVar6 = puVar2[0x13];
  iVar7 = puVar2[0x14];
  uVar8 = puVar2[0x15];
  uVar9 = puVar2[0x16];
LAB_00468f8a:
  if (local_24 < 0xf) {
    pbVar1 = local_48 + 1;
    local_48 = local_48 + 2;
    local_28 = local_28 + ((uint)*pbVar1 << ((byte)local_24 & 0x1f)) +
               ((uint)*local_48 << ((byte)local_24 + 8 & 0x1f));
    local_24 = local_24 + 0x10;
  }
  local_10 = *(uint *)(iVar6 + (local_28 & (1 << ((byte)uVar8 & 0x1f)) - 1U) * 4);
  while( true ) {
    local_28 = local_28 >> (local_10._1_1_ & 0x1f);
    local_24 = local_24 - local_10._1_1_;
    if ((local_10 & 0xff) == 0) break;
    if ((local_10 & 0x10) != 0) {
      uVar12 = (uint)local_10._2_2_;
      uVar20 = local_10 & 0xf;
      if ((local_10 & 0xf) != 0) {
        if (local_24 < uVar20) {
          local_48 = local_48 + 1;
          local_28 = local_28 + ((uint)*local_48 << ((byte)local_24 & 0x1f));
          local_24 = local_24 + 8;
        }
        uVar12 = uVar12 + ((1 << (sbyte)uVar20) - 1U & local_28);
        local_28 = local_28 >> (sbyte)uVar20;
        local_24 = local_24 - uVar20;
      }
      if (local_24 < 0xf) {
        pbVar1 = local_48 + 1;
        local_48 = local_48 + 2;
        local_28 = local_28 + ((uint)*pbVar1 << ((byte)local_24 & 0x1f)) +
                   ((uint)*local_48 << ((byte)local_24 + 8 & 0x1f));
        local_24 = local_24 + 0x10;
      }
      local_10 = *(uint *)(iVar7 + (local_28 & (1 << ((byte)uVar9 & 0x1f)) - 1U) * 4);
      goto LAB_0046909e;
    }
    if ((local_10 & 0x40) != 0) {
      if ((local_10 & 0x20) == 0) {
        param_1[6] = (int)s_invalid_literal_length_code_0077469c;
        *puVar2 = 0x1b;
      }
      else {
        *puVar2 = 0xb;
      }
      goto LAB_00469313;
    }
    local_10 = *(uint *)(iVar6 + (((1 << ((byte)local_10 & 0x1f)) - 1U & local_28) +
                                 (uint)local_10._2_2_) * 4);
  }
  puVar18[1] = local_10._2_1_;
  puVar18 = puVar18 + 1;
  goto LAB_004692ff;
LAB_0046909e:
  local_28 = local_28 >> (local_10._1_1_ & 0x1f);
  uVar20 = local_24 - local_10._1_1_;
  local_24 = uVar20;
  if ((local_10 & 0x10) != 0) goto code_r0x004690be;
  if ((local_10 & 0x40) != 0) {
    param_1[6] = (int)s_invalid_distance_code_00774686;
    *puVar2 = 0x1b;
    goto LAB_00469313;
  }
  local_10 = *(uint *)(iVar7 + (((1 << ((byte)local_10 & 0x1f)) - 1U & local_28) +
                               (uint)local_10._2_2_) * 4);
  goto LAB_0046909e;
code_r0x004690be:
  uVar21 = local_10 & 0xf;
  pbVar1 = local_48;
  if (uVar20 < uVar21) {
    local_28 = local_28 + ((uint)local_48[1] << ((byte)uVar20 & 0x1f));
    local_24 = uVar20 + 8;
    pbVar1 = local_48 + 1;
    if (local_24 < uVar21) {
      local_28 = local_28 + ((uint)local_48[2] << ((byte)local_24 & 0x1f));
      local_24 = uVar20 + 0x10;
      pbVar1 = local_48 + 2;
    }
  }
  local_48 = pbVar1;
  uVar20 = (1 << (sbyte)uVar21) - 1U & local_28;
  local_28 = local_28 >> (sbyte)uVar21;
  local_24 = local_24 - uVar21;
  uVar21 = (int)puVar18 - iVar14;
  uVar20 = local_10._2_2_ + uVar20;
  if (uVar21 < uVar20) {
    uVar21 = uVar20 - uVar21;
    if (uVar4 < uVar21) {
      param_1[6] = (int)s_invalid_distance_too_far_back_00774668;
      *puVar2 = 0x1b;
LAB_00469313:
      local_48 = local_48 + -(local_24 >> 3);
      iVar3 = local_24 + (local_24 >> 3) * -8;
      *param_1 = (int)(local_48 + 1);
      param_1[3] = (int)(puVar18 + 1);
      if (local_48 < pbVar13) {
        iVar15 = (int)pbVar13 - (int)local_48;
      }
      else {
        iVar15 = -((int)local_48 - (int)pbVar13);
      }
      param_1[1] = iVar15 + 5;
      if (puVar18 < puVar11) {
        iVar15 = (int)puVar11 - (int)puVar18;
      }
      else {
        iVar15 = -((int)puVar18 - (int)puVar11);
      }
      param_1[4] = iVar15 + 0x101;
      puVar2[0xe] = local_28 & (1 << ((byte)iVar3 & 0x1f)) - 1U;
      puVar2[0xf] = iVar3;
      return;
    }
    iVar16 = iVar15 + -1;
    puVar10 = puVar18;
    if (uVar5 == 0) {
      puVar17 = (undefined1 *)(iVar16 + (iVar3 - uVar21));
      if (uVar21 < uVar12) {
        uVar12 = uVar12 - uVar21;
        do {
          puVar18 = puVar18 + 1;
          puVar17 = puVar17 + 1;
          *puVar18 = *puVar17;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
        puVar17 = puVar18 + -uVar20;
        puVar10 = puVar18;
      }
    }
    else if (uVar5 < uVar21) {
      puVar17 = (undefined1 *)(iVar16 + ((iVar3 + uVar5) - uVar21));
      uVar21 = uVar21 - uVar5;
      if (uVar21 < uVar12) {
        uVar12 = uVar12 - uVar21;
        do {
          puVar18 = puVar18 + 1;
          puVar17 = puVar17 + 1;
          *puVar18 = *puVar17;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
        puVar17 = (undefined1 *)(iVar15 + -1);
        puVar10 = puVar18;
        if (uVar5 < uVar12) {
          uVar12 = uVar12 - uVar5;
          uVar21 = uVar5;
          do {
            puVar18 = puVar18 + 1;
            puVar17 = puVar17 + 1;
            *puVar18 = *puVar17;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
          puVar17 = puVar18 + -uVar20;
          puVar10 = puVar18;
        }
      }
    }
    else {
      puVar17 = (undefined1 *)(iVar16 + (uVar5 - uVar21));
      if (uVar21 < uVar12) {
        uVar12 = uVar12 - uVar21;
        do {
          puVar18 = puVar18 + 1;
          puVar17 = puVar17 + 1;
          *puVar18 = *puVar17;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
        puVar17 = puVar18 + -uVar20;
        puVar10 = puVar18;
      }
    }
    for (; 2 < uVar12; uVar12 = uVar12 - 3) {
      puVar18 = puVar17 + 2;
      puVar10[1] = puVar17[1];
      puVar17 = puVar17 + 3;
      puVar10[2] = *puVar18;
      puVar10[3] = *puVar17;
      puVar10 = puVar10 + 3;
    }
    puVar18 = puVar10;
    if (uVar12 != 0) {
      puVar18 = puVar10 + 1;
      *puVar18 = puVar17[1];
      if (1 < uVar12) {
        puVar18 = puVar10 + 2;
        *puVar18 = puVar17[2];
      }
    }
  }
  else {
    puVar10 = puVar18 + -uVar20;
    do {
      puVar19 = puVar18;
      puVar17 = puVar10;
      puVar19[1] = puVar17[1];
      puVar19[2] = puVar17[2];
      puVar18 = puVar19 + 3;
      uVar12 = uVar12 - 3;
      *puVar18 = puVar17[3];
      puVar10 = puVar17 + 3;
    } while (2 < uVar12);
    if (uVar12 != 0) {
      puVar18 = puVar19 + 4;
      *puVar18 = puVar17[4];
      if (1 < uVar12) {
        puVar18 = puVar19 + 5;
        *puVar18 = puVar17[5];
      }
    }
  }
LAB_004692ff:
  if ((pbVar13 <= local_48) || (puVar11 <= puVar18)) goto LAB_00469313;
  goto LAB_00468f8a;
}
