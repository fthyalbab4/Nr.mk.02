// rea decompile_all
// name: FUN_00508660
// address: 0x508660
// body: available
// range: 0x508660-0x5086b6 inclusive
// range: 0x5086df-0x508efa inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00508660(int param_1,int *param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  int local_34;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined1 *local_18;

  puVar2 = *(undefined4 **)(param_1 + 4);
  local_20 = param_2[1];
  pbVar8 = (byte *)*param_2;
  local_24 = *(uint *)(param_1 + 0x20);
  puVar3 = *(undefined1 **)(param_1 + 0x34);
  uVar7 = *(uint *)(param_1 + 0x1c);
  local_34 = param_3;
  if (puVar3 < *(undefined1 **)(param_1 + 0x30)) {
    local_1c = (*(int *)(param_1 + 0x30) - (int)puVar3) - 1;
  }
  else {
    local_1c = *(int *)(param_1 + 0x2c) - (int)puVar3;
  }
LAB_005086a1:
  do {
    switch(*puVar2) {
    case 0:
      if ((0x101 < local_1c) && (9 < local_20)) {
        *(uint *)(param_1 + 0x20) = local_24;
        *(uint *)(param_1 + 0x1c) = uVar7;
        param_2[1] = local_20;
        param_2[2] = (int)(pbVar8 + (param_2[2] - *param_2));
        *param_2 = (int)pbVar8;
        *(undefined1 **)(param_1 + 0x34) = puVar3;
        local_34 = FUN_00509018(*(undefined1 *)(puVar2 + 4),*(undefined1 *)((int)puVar2 + 0x11),
                                puVar2[5],param_2,param_1,puVar2[6]);
        pbVar8 = (byte *)*param_2;
        local_20 = param_2[1];
        local_24 = *(uint *)(param_1 + 0x20);
        uVar7 = *(uint *)(param_1 + 0x1c);
        puVar3 = *(undefined1 **)(param_1 + 0x34);
        if (puVar3 < *(undefined1 **)(param_1 + 0x30)) {
          local_1c = (*(int *)(param_1 + 0x30) - (int)puVar3) - 1;
        }
        else {
          local_1c = *(int *)(param_1 + 0x2c) - (int)puVar3;
        }
        if (local_34 != 0) {
          if (local_34 == 1) {
            uVar4 = 7;
          }
          else {
            uVar4 = 9;
          }
          *puVar2 = uVar4;
          break;
        }
      }
      puVar2[3] = (uint)*(byte *)(puVar2 + 4);
      puVar2[2] = puVar2[5];
      *puVar2 = 1;
    case 1:
      for (; uVar7 < (uint)puVar2[3]; uVar7 = uVar7 + 8) {
        if (local_20 == 0) {
          *(uint *)(param_1 + 0x20) = local_24;
          *(uint *)(param_1 + 0x1c) = uVar7;
          param_2[1] = 0;
          param_2[2] = (int)(pbVar8 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar8;
          *(undefined1 **)(param_1 + 0x34) = puVar3;
          FUN_00508f08(param_1,param_2,local_34);
          return;
        }
        local_34 = 0;
        local_20 = local_20 - 1;
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        local_24 = local_24 | (uint)bVar1 << ((byte)uVar7 & 0x1f);
      }
      pbVar6 = (byte *)(puVar2[2] + (*(uint *)(&DAT_00683454 + puVar2[3] * 4) & local_24) * 8);
      local_24 = local_24 >> (pbVar6[1] & 0x1f);
      uVar7 = uVar7 - pbVar6[1];
      bVar1 = *pbVar6;
      uVar5 = (uint)bVar1;
      if (uVar5 == 0) {
        puVar2[2] = *(undefined4 *)(pbVar6 + 4);
        *puVar2 = 6;
      }
      else if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) == 0) {
          puVar2[3] = uVar5;
          puVar2[2] = pbVar6 + *(int *)(pbVar6 + 4) * 8;
        }
        else {
          if ((bVar1 & 0x20) == 0) {
            *puVar2 = 9;
            param_2[6] = (int)s_invalid_literal_length_code_00683420;
            *(uint *)(param_1 + 0x20) = local_24;
            *(uint *)(param_1 + 0x1c) = uVar7;
            param_2[1] = local_20;
            param_2[2] = (int)(pbVar8 + (param_2[2] - *param_2));
            *param_2 = (int)pbVar8;
            *(undefined1 **)(param_1 + 0x34) = puVar3;
            FUN_00508f08(param_1,param_2,0xfffffffd);
            return;
          }
          *puVar2 = 7;
        }
      }
      else {
        puVar2[2] = uVar5 & 0xf;
        puVar2[1] = *(undefined4 *)(pbVar6 + 4);
        *puVar2 = 2;
      }
      break;
    case 2:
      uVar5 = puVar2[2];
      for (; uVar7 < uVar5; uVar7 = uVar7 + 8) {
        if (local_20 == 0) {
          *(uint *)(param_1 + 0x20) = local_24;
          *(uint *)(param_1 + 0x1c) = uVar7;
          param_2[1] = 0;
          param_2[2] = (int)(pbVar8 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar8;
          *(undefined1 **)(param_1 + 0x34) = puVar3;
          FUN_00508f08(param_1,param_2,local_34);
          return;
        }
        local_34 = 0;
        local_20 = local_20 - 1;
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        local_24 = local_24 | (uint)bVar1 << ((byte)uVar7 & 0x1f);
      }
      puVar2[1] = puVar2[1] + (*(uint *)(&DAT_00683454 + uVar5 * 4) & local_24);
      local_24 = local_24 >> ((byte)uVar5 & 0x1f);
      uVar7 = uVar7 - uVar5;
      puVar2[3] = (uint)*(byte *)((int)puVar2 + 0x11);
      puVar2[2] = puVar2[6];
      *puVar2 = 3;
    case 3:
      for (; uVar7 < (uint)puVar2[3]; uVar7 = uVar7 + 8) {
        if (local_20 == 0) {
          *(uint *)(param_1 + 0x20) = local_24;
          *(uint *)(param_1 + 0x1c) = uVar7;
          param_2[1] = 0;
          param_2[2] = (int)(pbVar8 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar8;
          *(undefined1 **)(param_1 + 0x34) = puVar3;
          FUN_00508f08(param_1,param_2,local_34);
          return;
        }
        local_34 = 0;
        local_20 = local_20 - 1;
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        local_24 = local_24 | (uint)bVar1 << ((byte)uVar7 & 0x1f);
      }
      pbVar6 = (byte *)(puVar2[2] + (*(uint *)(&DAT_00683454 + puVar2[3] * 4) & local_24) * 8);
      local_24 = local_24 >> (pbVar6[1] & 0x1f);
      uVar7 = uVar7 - pbVar6[1];
      bVar1 = *pbVar6;
      if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) != 0) {
          *puVar2 = 9;
          param_2[6] = (int)s_invalid_distance_code_0068343c;
          *(uint *)(param_1 + 0x20) = local_24;
          *(uint *)(param_1 + 0x1c) = uVar7;
          param_2[1] = local_20;
          param_2[2] = (int)(pbVar8 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar8;
          *(undefined1 **)(param_1 + 0x34) = puVar3;
          FUN_00508f08(param_1,param_2,0xfffffffd);
          return;
        }
        puVar2[3] = (uint)bVar1;
        puVar2[2] = pbVar6 + *(int *)(pbVar6 + 4) * 8;
      }
      else {
        puVar2[2] = bVar1 & 0xf;
        puVar2[3] = *(undefined4 *)(pbVar6 + 4);
        *puVar2 = 4;
      }
      break;
    case 4:
      uVar5 = puVar2[2];
      for (; uVar7 < uVar5; uVar7 = uVar7 + 8) {
        if (local_20 == 0) {
          *(uint *)(param_1 + 0x20) = local_24;
          *(uint *)(param_1 + 0x1c) = uVar7;
          param_2[1] = 0;
          param_2[2] = (int)(pbVar8 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar8;
          *(undefined1 **)(param_1 + 0x34) = puVar3;
          FUN_00508f08(param_1,param_2,local_34);
          return;
        }
        local_34 = 0;
        local_20 = local_20 - 1;
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        local_24 = local_24 | (uint)bVar1 << ((byte)uVar7 & 0x1f);
      }
      puVar2[3] = puVar2[3] + (*(uint *)(&DAT_00683454 + uVar5 * 4) & local_24);
      local_24 = local_24 >> ((byte)uVar5 & 0x1f);
      uVar7 = uVar7 - uVar5;
      *puVar2 = 5;
    case 5:
      for (local_18 = puVar3 + -puVar2[3]; local_18 < *(undefined1 **)(param_1 + 0x28);
          local_18 = local_18 + (*(int *)(param_1 + 0x2c) - (int)*(undefined1 **)(param_1 + 0x28)))
      {
      }
      while (puVar2[1] != 0) {
        if (local_1c == 0) {
          if ((puVar3 == *(undefined1 **)(param_1 + 0x2c)) &&
             (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x28))) {
            puVar3 = *(undefined1 **)(param_1 + 0x28);
            if (puVar3 < *(undefined1 **)(param_1 + 0x30)) {
              local_1c = (*(int *)(param_1 + 0x30) - (int)puVar3) - 1;
            }
            else {
              local_1c = *(int *)(param_1 + 0x2c) - (int)puVar3;
            }
          }
          if (local_1c == 0) {
            *(undefined1 **)(param_1 + 0x34) = puVar3;
            uVar4 = FUN_00508f08(param_1,param_2,local_34);
            puVar3 = *(undefined1 **)(param_1 + 0x34);
            if (puVar3 < *(undefined1 **)(param_1 + 0x30)) {
              local_1c = (*(int *)(param_1 + 0x30) - (int)puVar3) - 1;
            }
            else {
              local_1c = *(int *)(param_1 + 0x2c) - (int)puVar3;
            }
            if ((puVar3 == *(undefined1 **)(param_1 + 0x2c)) &&
               (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x28))) {
              puVar3 = *(undefined1 **)(param_1 + 0x28);
              if (puVar3 < *(undefined1 **)(param_1 + 0x30)) {
                local_1c = (*(int *)(param_1 + 0x30) - (int)puVar3) - 1;
              }
              else {
                local_1c = *(int *)(param_1 + 0x2c) - (int)puVar3;
              }
            }
            if (local_1c == 0) {
              *(uint *)(param_1 + 0x20) = local_24;
              *(uint *)(param_1 + 0x1c) = uVar7;
              param_2[1] = local_20;
              param_2[2] = (int)(pbVar8 + (param_2[2] - *param_2));
              *param_2 = (int)pbVar8;
              *(undefined1 **)(param_1 + 0x34) = puVar3;
              FUN_00508f08(param_1,param_2,uVar4);
              return;
            }
          }
        }
        local_34 = 0;
        *puVar3 = *local_18;
        local_18 = local_18 + 1;
        puVar3 = puVar3 + 1;
        local_1c = local_1c - 1;
        if (local_18 == *(undefined1 **)(param_1 + 0x2c)) {
          local_18 = *(undefined1 **)(param_1 + 0x28);
        }
        puVar2[1] = puVar2[1] + -1;
      }
      *puVar2 = 0;
      break;
    case 6:
      goto switchD_005086b0_caseD_6;
    case 7:
      if (7 < uVar7) {
        uVar7 = uVar7 - 8;
        local_20 = local_20 + 1;
        pbVar8 = pbVar8 + -1;
      }
      *(undefined1 **)(param_1 + 0x34) = puVar3;
      uVar4 = FUN_00508f08(param_1,param_2,local_34);
      puVar3 = *(undefined1 **)(param_1 + 0x34);
      if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34)) {
        *puVar2 = 8;
switchD_005086b0_caseD_8:
        *(uint *)(param_1 + 0x20) = local_24;
        *(uint *)(param_1 + 0x1c) = uVar7;
        param_2[1] = local_20;
        param_2[2] = (int)(pbVar8 + (param_2[2] - *param_2));
        *param_2 = (int)pbVar8;
        *(undefined1 **)(param_1 + 0x34) = puVar3;
        FUN_00508f08(param_1,param_2,1);
      }
      else {
        *(uint *)(param_1 + 0x20) = local_24;
        *(uint *)(param_1 + 0x1c) = uVar7;
        param_2[1] = local_20;
        param_2[2] = (int)(pbVar8 + (param_2[2] - *param_2));
        *param_2 = (int)pbVar8;
        *(undefined1 **)(param_1 + 0x34) = puVar3;
        FUN_00508f08(param_1,param_2,uVar4);
      }
      return;
    case 8:
      goto switchD_005086b0_caseD_8;
    case 9:
      *(uint *)(param_1 + 0x20) = local_24;
      *(uint *)(param_1 + 0x1c) = uVar7;
      param_2[1] = local_20;
      param_2[2] = (int)(pbVar8 + (param_2[2] - *param_2));
      *param_2 = (int)pbVar8;
      *(undefined1 **)(param_1 + 0x34) = puVar3;
      FUN_00508f08(param_1,param_2,0xfffffffd);
      return;
    default:
      *(uint *)(param_1 + 0x20) = local_24;
      *(uint *)(param_1 + 0x1c) = uVar7;
      param_2[1] = local_20;
      param_2[2] = (int)(pbVar8 + (param_2[2] - *param_2));
      *param_2 = (int)pbVar8;
      *(undefined1 **)(param_1 + 0x34) = puVar3;
      FUN_00508f08(param_1,param_2,0xfffffffe);
      return;
    }
  } while( true );
switchD_005086b0_caseD_6:
  if (local_1c == 0) {
    if ((puVar3 == *(undefined1 **)(param_1 + 0x2c)) &&
       (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x28))) {
      puVar3 = *(undefined1 **)(param_1 + 0x28);
      if (puVar3 < *(undefined1 **)(param_1 + 0x30)) {
        local_1c = (*(int *)(param_1 + 0x30) - (int)puVar3) - 1;
      }
      else {
        local_1c = *(int *)(param_1 + 0x2c) - (int)puVar3;
      }
    }
    if (local_1c == 0) {
      *(undefined1 **)(param_1 + 0x34) = puVar3;
      uVar4 = FUN_00508f08(param_1,param_2,local_34);
      puVar3 = *(undefined1 **)(param_1 + 0x34);
      if (puVar3 < *(undefined1 **)(param_1 + 0x30)) {
        local_1c = (*(int *)(param_1 + 0x30) - (int)puVar3) - 1;
      }
      else {
        local_1c = *(int *)(param_1 + 0x2c) - (int)puVar3;
      }
      if ((puVar3 == *(undefined1 **)(param_1 + 0x2c)) &&
         (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x28))) {
        puVar3 = *(undefined1 **)(param_1 + 0x28);
        if (puVar3 < *(undefined1 **)(param_1 + 0x30)) {
          local_1c = (*(int *)(param_1 + 0x30) - (int)puVar3) - 1;
        }
        else {
          local_1c = *(int *)(param_1 + 0x2c) - (int)puVar3;
        }
      }
      if (local_1c == 0) {
        *(uint *)(param_1 + 0x20) = local_24;
        *(uint *)(param_1 + 0x1c) = uVar7;
        param_2[1] = local_20;
        param_2[2] = (int)(pbVar8 + (param_2[2] - *param_2));
        *param_2 = (int)pbVar8;
        *(undefined1 **)(param_1 + 0x34) = puVar3;
        FUN_00508f08(param_1,param_2,uVar4);
        return;
      }
    }
  }
  local_34 = 0;
  *puVar3 = *(undefined1 *)(puVar2 + 2);
  puVar3 = puVar3 + 1;
  local_1c = local_1c - 1;
  *puVar2 = 0;
  goto LAB_005086a1;
}
