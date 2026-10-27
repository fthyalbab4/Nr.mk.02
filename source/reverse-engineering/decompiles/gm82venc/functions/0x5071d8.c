// rea decompile_all
// name: FUN_005071d8
// address: 0x5071d8
// body: available
// range: 0x5071d8-0x50722f inclusive
// range: 0x507258-0x507ead inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005071d8(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  byte *local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  local_40 = (byte *)*param_2;
  local_3c = param_2[1];
  local_44 = param_1[8];
  uVar7 = param_1[7];
  local_38 = param_1[0xd];
  local_4c = param_3;
  if (local_38 < (uint)param_1[0xc]) {
    uVar6 = (param_1[0xc] - local_38) - 1;
  }
  else {
    uVar6 = param_1[0xb] - local_38;
  }
  do {
    switch(*param_1) {
    case 0:
      for (; uVar7 < 3; uVar7 = uVar7 + 8) {
        if (local_3c == 0) {
          param_1[8] = local_44;
          param_1[7] = uVar7;
          param_2[1] = 0;
          param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
          *param_2 = (int)local_40;
          param_1[0xd] = local_38;
          FUN_00508f08(param_1,param_2,local_4c);
          return;
        }
        local_4c = 0;
        local_3c = local_3c - 1;
        local_44 = local_44 | (uint)*local_40 << ((byte)uVar7 & 0x1f);
        local_40 = local_40 + 1;
      }
      param_1[6] = local_44 & 1;
      uVar3 = (local_44 & 7) >> 1;
      if (uVar3 == 0) {
        uVar3 = uVar7 - 3 & 7;
        local_44 = (local_44 >> 3) >> (sbyte)uVar3;
        uVar7 = (uVar7 - 3) - uVar3;
        *param_1 = 1;
      }
      else if (uVar3 == 1) {
        FUN_005085e4(&local_34,&local_30,&local_2c,param_2,&local_28);
        uVar5 = FUN_00508610(local_34,local_30,local_2c,param_2,local_28);
        param_1[1] = uVar5;
        if (param_1[1] == 0) {
          param_1[8] = local_44;
          param_1[7] = uVar7;
          param_2[1] = local_3c;
          param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
          *param_2 = (int)local_40;
          param_1[0xd] = local_38;
          FUN_00508f08(param_1,param_2,0xfffffffc);
          return;
        }
        local_44 = local_44 >> 3;
        uVar7 = uVar7 - 3;
        *param_1 = 6;
      }
      else if (uVar3 == 2) {
        local_44 = local_44 >> 3;
        uVar7 = uVar7 - 3;
        *param_1 = 3;
      }
      else if (uVar3 == 3) {
        *param_1 = 9;
        param_2[6] = (int)s_invalid_block_type_00681fa8;
        param_1[8] = local_44 >> 3;
        param_1[7] = uVar7 - 3;
        param_2[1] = local_3c;
        param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
        *param_2 = (int)local_40;
        param_1[0xd] = local_38;
        FUN_00508f08(param_1,param_2,0xfffffffd);
        return;
      }
      break;
    case 1:
      for (; uVar7 < 0x20; uVar7 = uVar7 + 8) {
        if (local_3c == 0) {
          param_1[8] = local_44;
          param_1[7] = uVar7;
          param_2[1] = 0;
          param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
          *param_2 = (int)local_40;
          param_1[0xd] = local_38;
          FUN_00508f08(param_1,param_2,local_4c);
          return;
        }
        local_4c = 0;
        local_3c = local_3c - 1;
        local_44 = local_44 | (uint)*local_40 << ((byte)uVar7 & 0x1f);
        local_40 = local_40 + 1;
      }
      uVar3 = local_44 & 0xffff;
      if (uVar3 != ~local_44 >> 0x10) {
        *param_1 = 9;
        param_2[6] = (int)s_invalid_stored_block_lengths_00681fbb;
        param_1[8] = local_44;
        param_1[7] = uVar7;
        param_2[1] = local_3c;
        param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
        *param_2 = (int)local_40;
        param_1[0xd] = local_38;
        FUN_00508f08(param_1,param_2,0xfffffffd);
        return;
      }
      param_1[1] = uVar3;
      uVar7 = 0;
      local_44 = 0;
      if (uVar3 == 0) {
        if (param_1[6] == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 7;
        }
      }
      else {
        uVar5 = 2;
      }
      *param_1 = uVar5;
      break;
    case 2:
      if (local_3c == 0) {
        param_1[8] = local_44;
        param_1[7] = uVar7;
        param_2[1] = 0;
        param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
        *param_2 = (int)local_40;
        param_1[0xd] = local_38;
        FUN_00508f08(param_1,param_2,local_4c);
        return;
      }
      if (uVar6 == 0) {
        if ((local_38 == param_1[0xb]) && (param_1[0xc] != param_1[10])) {
          local_38 = param_1[10];
          if (local_38 < (uint)param_1[0xc]) {
            uVar6 = (param_1[0xc] - local_38) - 1;
          }
          else {
            uVar6 = param_1[0xb] - local_38;
          }
        }
        if (uVar6 == 0) {
          param_1[0xd] = local_38;
          uVar5 = FUN_00508f08(param_1,param_2,local_4c);
          local_38 = param_1[0xd];
          if (local_38 < (uint)param_1[0xc]) {
            uVar6 = (param_1[0xc] - local_38) - 1;
          }
          else {
            uVar6 = param_1[0xb] - local_38;
          }
          if ((local_38 == param_1[0xb]) && (param_1[0xc] != param_1[10])) {
            local_38 = param_1[10];
            if (local_38 < (uint)param_1[0xc]) {
              uVar6 = (param_1[0xc] - local_38) - 1;
            }
            else {
              uVar6 = param_1[0xb] - local_38;
            }
          }
          if (uVar6 == 0) {
            param_1[8] = local_44;
            param_1[7] = uVar7;
            param_2[1] = local_3c;
            param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
            *param_2 = (int)local_40;
            param_1[0xd] = local_38;
            FUN_00508f08(param_1,param_2,uVar5);
            return;
          }
        }
      }
      local_4c = 0;
      local_48 = param_1[1];
      if (local_3c < local_48) {
        local_48 = local_3c;
      }
      if (uVar6 < local_48) {
        local_48 = uVar6;
      }
      FUN_00505260();
      local_40 = local_40 + local_48;
      local_3c = local_3c - local_48;
      local_38 = local_38 + local_48;
      uVar6 = uVar6 - local_48;
      piVar1 = param_1 + 1;
      *piVar1 = *piVar1 - local_48;
      if (*piVar1 == 0) {
        if (param_1[6] == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 7;
        }
        *param_1 = uVar5;
      }
      break;
    case 3:
      for (; uVar7 < 0xe; uVar7 = uVar7 + 8) {
        if (local_3c == 0) {
          param_1[8] = local_44;
          param_1[7] = uVar7;
          param_2[1] = 0;
          param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
          *param_2 = (int)local_40;
          param_1[0xd] = local_38;
          FUN_00508f08(param_1,param_2,local_4c);
          return;
        }
        local_4c = 0;
        local_3c = local_3c - 1;
        local_44 = local_44 | (uint)*local_40 << ((byte)uVar7 & 0x1f);
        local_40 = local_40 + 1;
      }
      uVar6 = local_44 & 0x3fff;
      param_1[1] = uVar6;
      if ((0x1d < (local_44 & 0x1f)) || (0x1d < (uVar6 >> 5 & 0x1f))) {
        *param_1 = 9;
        param_2[6] = (int)s_too_many_length_or_distance_symb_00681fd8;
        param_1[8] = local_44;
        param_1[7] = uVar7;
        param_2[1] = local_3c;
        param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
        *param_2 = (int)local_40;
        param_1[0xd] = local_38;
        FUN_00508f08(param_1,param_2,0xfffffffd);
        return;
      }
      iVar4 = (*(code *)param_2[8])(param_2[10],(local_44 & 0x1f) + (uVar6 >> 5 & 0x1f) + 0x102,4);
      param_1[3] = iVar4;
      if (iVar4 == 0) {
        param_1[8] = local_44;
        param_1[7] = uVar7;
        param_2[1] = local_3c;
        param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
        *param_2 = (int)local_40;
        param_1[0xd] = local_38;
        FUN_00508f08(param_1,param_2,0xfffffffc);
        return;
      }
      local_44 = local_44 >> 0xe;
      uVar7 = uVar7 - 0xe;
      param_1[2] = 0;
      *param_1 = 4;
    case 4:
      while ((uint)param_1[2] < ((uint)param_1[1] >> 10) + 4) {
        for (; uVar7 < 3; uVar7 = uVar7 + 8) {
          if (local_3c == 0) {
            param_1[8] = local_44;
            param_1[7] = uVar7;
            param_2[1] = 0;
            param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
            *param_2 = (int)local_40;
            param_1[0xd] = local_38;
            FUN_00508f08(param_1,param_2,local_4c);
            return;
          }
          local_4c = 0;
          local_3c = local_3c - 1;
          local_44 = local_44 | (uint)*local_40 << ((byte)uVar7 & 0x1f);
          local_40 = local_40 + 1;
        }
        iVar4 = param_1[2];
        param_1[2] = param_1[2] + 1;
        *(uint *)(param_1[3] + *(int *)(&DAT_00681f5c + iVar4 * 4) * 4) = local_44 & 7;
        local_44 = local_44 >> 3;
        uVar7 = uVar7 - 3;
      }
      while ((uint)param_1[2] < 0x13) {
        iVar4 = param_1[2];
        param_1[2] = param_1[2] + 1;
        *(undefined4 *)(param_1[3] + *(int *)(&DAT_00681f5c + iVar4 * 4) * 4) = 0;
      }
      param_1[4] = 7;
      iVar4 = FUN_00508408(param_1[3],param_1 + 4,param_1 + 5,param_2,param_1[9]);
      if (iVar4 != 0) {
        if (iVar4 == -3) {
          (*(code *)param_2[9])(param_2[10],param_1[3]);
          *param_1 = 9;
        }
        param_1[8] = local_44;
        param_1[7] = uVar7;
        param_2[1] = local_3c;
        param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
        *param_2 = (int)local_40;
        param_1[0xd] = local_38;
        FUN_00508f08(param_1,param_2,iVar4);
        return;
      }
      param_1[2] = 0;
      *param_1 = 5;
    case 5:
      while ((uint)param_1[2] < (param_1[1] & 0x1f) + ((uint)param_1[1] >> 5 & 0x1f) + 0x102) {
        for (; uVar7 < (uint)param_1[4]; uVar7 = uVar7 + 8) {
          if (local_3c == 0) {
            param_1[8] = local_44;
            param_1[7] = uVar7;
            param_2[1] = 0;
            param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
            *param_2 = (int)local_40;
            param_1[0xd] = local_38;
            FUN_00508f08(param_1,param_2,local_4c);
            return;
          }
          local_4c = 0;
          local_3c = local_3c - 1;
          local_44 = local_44 | (uint)*local_40 << ((byte)uVar7 & 0x1f);
          local_40 = local_40 + 1;
        }
        iVar4 = (*(uint *)(&DAT_00683454 + param_1[4] * 4) & local_44) * 8 + param_1[5];
        bVar2 = *(byte *)(iVar4 + 1);
        uVar3 = (uint)bVar2;
        uVar6 = *(uint *)(iVar4 + 4);
        if (uVar6 < 0x10) {
          local_44 = local_44 >> (bVar2 & 0x1f);
          uVar7 = uVar7 - uVar3;
          iVar4 = param_1[2];
          param_1[2] = param_1[2] + 1;
          *(uint *)(param_1[3] + iVar4 * 4) = uVar6;
        }
        else {
          if (uVar6 == 0x12) {
            iVar4 = 7;
            local_24 = 0xb;
          }
          else {
            iVar4 = uVar6 - 0xe;
            local_24 = 3;
          }
          for (; uVar7 < uVar3 + iVar4; uVar7 = uVar7 + 8) {
            if (local_3c == 0) {
              param_1[8] = local_44;
              param_1[7] = uVar7;
              param_2[1] = 0;
              param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
              *param_2 = (int)local_40;
              param_1[0xd] = local_38;
              FUN_00508f08(param_1,param_2,local_4c);
              return;
            }
            local_4c = 0;
            local_3c = local_3c - 1;
            local_44 = local_44 | (uint)*local_40 << ((byte)uVar7 & 0x1f);
            local_40 = local_40 + 1;
          }
          local_44 = local_44 >> (bVar2 & 0x1f);
          uVar7 = (uVar7 - uVar3) - iVar4;
          local_24 = local_24 + (*(uint *)(&DAT_00683454 + iVar4 * 4) & local_44);
          local_44 = local_44 >> ((byte)iVar4 & 0x1f);
          iVar4 = param_1[2];
          if (((param_1[1] & 0x1f) + ((uint)param_1[1] >> 5 & 0x1f) + 0x102 <
               (uint)(local_24 + iVar4)) || ((uVar6 == 0x10 && (iVar4 == 0)))) {
            (*(code *)param_2[9])(param_2[10],param_1[3]);
            *param_1 = 9;
            param_2[6] = (int)s_invalid_bit_length_repeat_00681ffc;
            param_1[8] = local_44;
            param_1[7] = uVar7;
            param_2[1] = local_3c;
            param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
            *param_2 = (int)local_40;
            param_1[0xd] = local_38;
            FUN_00508f08(param_1,param_2,0xfffffffd);
            return;
          }
          if (uVar6 == 0x10) {
            uVar5 = *(undefined4 *)(param_1[3] + -4 + iVar4 * 4);
          }
          else {
            uVar5 = 0;
          }
          do {
            *(undefined4 *)(param_1[3] + iVar4 * 4) = uVar5;
            iVar4 = iVar4 + 1;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
          param_1[2] = iVar4;
          local_24 = 0;
        }
      }
      param_1[5] = 0;
      local_20 = 9;
      local_1c = 6;
      iVar4 = FUN_005084a4((param_1[1] & 0x1f) + 0x101,((uint)param_1[1] >> 5 & 0x1f) + 1,param_1[3]
                           ,param_2,param_1[9],&local_14,&local_18,&local_1c,&local_20);
      if (iVar4 != 0) {
        if (iVar4 == -3) {
          (*(code *)param_2[9])(param_2[10],param_1[3]);
          *param_1 = 9;
        }
        param_1[8] = local_44;
        param_1[7] = uVar7;
        param_2[1] = local_3c;
        param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
        *param_2 = (int)local_40;
        param_1[0xd] = local_38;
        FUN_00508f08(param_1,param_2,iVar4);
        return;
      }
      iVar4 = FUN_00508610(local_20,local_1c,local_18,param_2,local_14);
      if (iVar4 == 0) {
        param_1[8] = local_44;
        param_1[7] = uVar7;
        param_2[1] = local_3c;
        param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
        *param_2 = (int)local_40;
        param_1[0xd] = local_38;
        FUN_00508f08(param_1,param_2,0xfffffffc);
        return;
      }
      param_1[1] = iVar4;
      (*(code *)param_2[9])(param_2[10],param_1[3]);
      *param_1 = 6;
    case 6:
      param_1[8] = local_44;
      param_1[7] = uVar7;
      param_2[1] = local_3c;
      param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
      *param_2 = (int)local_40;
      param_1[0xd] = local_38;
      iVar4 = FUN_00508660(param_1,param_2,local_4c);
      if (iVar4 != 1) {
        FUN_00508f08(param_1,param_2,iVar4);
        return;
      }
      local_4c = 0;
      FUN_00508efc(param_1[1],param_2);
      local_40 = (byte *)*param_2;
      local_3c = param_2[1];
      local_44 = param_1[8];
      uVar7 = param_1[7];
      local_38 = param_1[0xd];
      if (local_38 < (uint)param_1[0xc]) {
        uVar6 = (param_1[0xc] - local_38) - 1;
      }
      else {
        uVar6 = param_1[0xb] - local_38;
      }
      if (param_1[6] != 0) {
        *param_1 = 7;
switchD_00507229_caseD_7:
        param_1[0xd] = local_38;
        uVar5 = FUN_00508f08(param_1,param_2,local_4c);
        local_38 = param_1[0xd];
        if (param_1[0xc] != param_1[0xd]) {
          param_1[8] = local_44;
          param_1[7] = uVar7;
          param_2[1] = local_3c;
          param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
          *param_2 = (int)local_40;
          param_1[0xd] = local_38;
          FUN_00508f08(param_1,param_2,uVar5);
          return;
        }
        *param_1 = 8;
        goto switchD_00507229_caseD_8;
      }
      *param_1 = 0;
      break;
    case 7:
      goto switchD_00507229_caseD_7;
    case 8:
switchD_00507229_caseD_8:
      param_1[8] = local_44;
      param_1[7] = uVar7;
      param_2[1] = local_3c;
      param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
      *param_2 = (int)local_40;
      param_1[0xd] = local_38;
      FUN_00508f08(param_1,param_2,1);
      return;
    case 9:
      param_1[8] = local_44;
      param_1[7] = uVar7;
      param_2[1] = local_3c;
      param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
      *param_2 = (int)local_40;
      param_1[0xd] = local_38;
      FUN_00508f08(param_1,param_2,0xfffffffd);
      return;
    default:
      param_1[8] = local_44;
      param_1[7] = uVar7;
      param_2[1] = local_3c;
      param_2[2] = (int)(local_40 + (param_2[2] - *param_2));
      *param_2 = (int)local_40;
      param_1[0xd] = local_38;
      FUN_00508f08(param_1,param_2,0xfffffffe);
      return;
    }
  } while( true );
}
