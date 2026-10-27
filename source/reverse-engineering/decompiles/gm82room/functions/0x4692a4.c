// rea decompile_all
// name: FUN_004692a4
// address: 0x4692a4
// body: available
// range: 0x4692a4-0x469342 inclusive
// range: 0x4693bb-0x469f27 inclusive
// range: 0x469f2a-0x469f9f inclusive
// range: 0x469fa2-0x46a638 inclusive
// range: 0x46a63e-0x46a76e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004692a4(int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  char local_20;
  byte bStack_1f;
  int local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;

  if ((((param_1 == (int *)0x0) || (param_1[7] == 0)) || (param_1[3] == 0)) ||
     ((*param_1 == 0 && (param_1[1] != 0)))) {
    return -2;
  }
  piVar4 = (int *)param_1[7];
  if (*piVar4 == 0xb) {
    *piVar4 = 0xc;
  }
  local_3c = (undefined1 *)param_1[3];
  local_38 = param_1[4];
  uVar5 = param_1[1];
  local_34 = piVar4[0xe];
  pbVar12 = (byte *)*param_1;
  uVar13 = piVar4[0xf];
  local_18 = 0;
  uVar14 = uVar5;
  local_2c = local_38;
  do {
    uVar15 = uVar14;
    switch(*piVar4) {
    case 0:
      uVar15 = uVar14;
      if (piVar4[2] == 0) {
        *piVar4 = 0xc;
      }
      else {
        for (; uVar13 < 0x10; uVar13 = uVar13 + 8) {
          uVar14 = 0;
          if (uVar15 == 0) goto LAB_0046a63e;
          bVar2 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
          uVar15 = uVar15 - 1;
        }
        uVar14 = uVar15;
        if (((*(byte *)(piVar4 + 2) & 2) == 0) || (local_34 != 0x8b1f)) {
          piVar4[4] = 0;
          if (piVar4[8] != 0) {
            *(undefined4 *)(piVar4[8] + 0x30) = 0xffffffff;
          }
          if (((*(byte *)(piVar4 + 2) & 1) == 0) ||
             (((local_34 & 0xff) * 0x100 + (local_34 >> 8)) % 0x1f != 0)) {
            param_1[6] = (int)s_incorrect_header_check_0067dfa4;
            *piVar4 = 0x1b;
          }
          else if ((local_34 & 0xf) == 8) {
            local_34 = local_34 >> 4;
            uVar13 = uVar13 - 4;
            uVar15 = (local_34 & 0xf) + 8;
            if ((uint)piVar4[9] < uVar15) {
              param_1[6] = (int)s_invalid_window_size_0067dfd6;
              *piVar4 = 0x1b;
            }
            else {
              piVar4[5] = 1 << (sbyte)uVar15;
              iVar9 = FUN_00466a54(0,0,0);
              piVar4[6] = iVar9;
              param_1[0xc] = iVar9;
              if ((local_34 & 0x200) == 0) {
                iVar9 = 0xb;
              }
              else {
                iVar9 = 9;
              }
              *piVar4 = iVar9;
              uVar13 = 0;
              local_34 = 0;
            }
          }
          else {
            param_1[6] = (int)s_unknown_compression_method_0067dfbb;
            *piVar4 = 0x1b;
          }
        }
        else {
          iVar9 = FUN_0046ce90(0,0,0);
          piVar4[6] = iVar9;
          local_14 = 0x1f;
          local_13 = 0x8b;
          iVar9 = FUN_0046ce90(piVar4[6],&local_14,2);
          piVar4[6] = iVar9;
          uVar13 = 0;
          local_34 = 0;
          *piVar4 = 1;
        }
      }
      break;
    case 1:
      for (; uVar13 < 0x10; uVar13 = uVar13 + 8) {
        uVar14 = 0;
        if (uVar15 == 0) goto LAB_0046a63e;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
        uVar15 = uVar15 - 1;
      }
      piVar4[4] = local_34;
      uVar14 = uVar15;
      if ((local_34 & 0xff) != 8) {
        param_1[6] = (int)s_unknown_compression_method_0067dfbb;
        *piVar4 = 0x1b;
        break;
      }
      if ((*(byte *)((int)piVar4 + 0x11) & 0xe0) != 0) {
        param_1[6] = (int)s_unknown_header_flags_set_0067dfea;
        *piVar4 = 0x1b;
        break;
      }
      if (piVar4[8] != 0) {
        *(uint *)piVar4[8] = local_34 >> 8 & 1;
      }
      if ((*(byte *)((int)piVar4 + 0x11) & 2) != 0) {
        local_14 = (undefined1)local_34;
        local_13 = (undefined1)(local_34 >> 8);
        iVar9 = FUN_0046ce90(piVar4[6],&local_14,2);
        piVar4[6] = iVar9;
      }
      uVar13 = 0;
      local_34 = 0;
      *piVar4 = 2;
    case 2:
      for (; uVar13 < 0x20; uVar13 = uVar13 + 8) {
        uVar14 = 0;
        if (uVar15 == 0) goto LAB_0046a63e;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
        uVar15 = uVar15 - 1;
      }
      if (piVar4[8] != 0) {
        *(uint *)(piVar4[8] + 4) = local_34;
      }
      if ((*(byte *)((int)piVar4 + 0x11) & 2) != 0) {
        local_14 = (undefined1)local_34;
        local_13 = (undefined1)(local_34 >> 8);
        local_12 = (undefined1)(local_34 >> 0x10);
        local_11 = (undefined1)(local_34 >> 0x18);
        iVar9 = FUN_0046ce90(piVar4[6],&local_14,4);
        piVar4[6] = iVar9;
      }
      uVar13 = 0;
      local_34 = 0;
      *piVar4 = 3;
switchD_0046933c_caseD_3:
      for (; uVar13 < 0x10; uVar13 = uVar13 + 8) {
        uVar14 = 0;
        if (uVar15 == 0) goto LAB_0046a63e;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
        uVar15 = uVar15 - 1;
      }
      if (piVar4[8] != 0) {
        *(uint *)(piVar4[8] + 8) = local_34 & 0xff;
        *(uint *)(piVar4[8] + 0xc) = local_34 >> 8;
      }
      if ((*(byte *)((int)piVar4 + 0x11) & 2) != 0) {
        local_14 = (undefined1)local_34;
        local_13 = (undefined1)(local_34 >> 8);
        iVar9 = FUN_0046ce90(piVar4[6],&local_14,2);
        piVar4[6] = iVar9;
      }
      uVar13 = 0;
      local_34 = 0;
      *piVar4 = 4;
switchD_0046933c_caseD_4:
      if ((*(byte *)((int)piVar4 + 0x11) & 4) == 0) {
        if (piVar4[8] != 0) {
          *(undefined4 *)(piVar4[8] + 0x10) = 0;
        }
      }
      else {
        for (; uVar13 < 0x10; uVar13 = uVar13 + 8) {
          uVar14 = 0;
          if (uVar15 == 0) goto LAB_0046a63e;
          bVar2 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
          uVar15 = uVar15 - 1;
        }
        piVar4[0x10] = local_34;
        if (piVar4[8] != 0) {
          *(uint *)(piVar4[8] + 0x14) = local_34;
        }
        if ((*(byte *)((int)piVar4 + 0x11) & 2) != 0) {
          local_14 = (undefined1)local_34;
          local_13 = (undefined1)(local_34 >> 8);
          iVar9 = FUN_0046ce90(piVar4[6],&local_14,2);
          piVar4[6] = iVar9;
        }
        uVar13 = 0;
        local_34 = 0;
      }
      *piVar4 = 5;
      uVar14 = uVar15;
switchD_0046933c_caseD_5:
      if ((*(byte *)((int)piVar4 + 0x11) & 4) != 0) {
        local_28 = piVar4[0x10];
        if (uVar14 < (uint)piVar4[0x10]) {
          local_28 = uVar14;
        }
        if (local_28 != 0) {
          if ((piVar4[8] != 0) && (*(int *)(piVar4[8] + 0x10) != 0)) {
            FUN_00466a40();
          }
          if ((*(byte *)((int)piVar4 + 0x11) & 2) != 0) {
            iVar9 = FUN_0046ce90(piVar4[6],pbVar12,local_28);
            piVar4[6] = iVar9;
          }
          uVar14 = uVar14 - local_28;
          pbVar12 = pbVar12 + local_28;
          piVar4[0x10] = piVar4[0x10] - local_28;
        }
        if (piVar4[0x10] != 0) goto LAB_0046a63e;
      }
      piVar4[0x10] = 0;
      *piVar4 = 6;
switchD_0046933c_caseD_6:
      if ((*(byte *)((int)piVar4 + 0x11) & 8) == 0) {
        if (piVar4[8] != 0) {
          *(undefined4 *)(piVar4[8] + 0x1c) = 0;
        }
      }
      else {
        if (uVar14 == 0) goto LAB_0046a63e;
        local_28 = 0;
        do {
          bVar2 = pbVar12[local_28];
          local_28 = local_28 + 1;
          iVar9 = piVar4[8];
          if (((iVar9 != 0) && (*(int *)(iVar9 + 0x1c) != 0)) &&
             ((uint)piVar4[0x10] < *(uint *)(iVar9 + 0x20))) {
            iVar1 = piVar4[0x10];
            piVar4[0x10] = piVar4[0x10] + 1;
            *(byte *)(*(int *)(iVar9 + 0x1c) + iVar1) = bVar2;
          }
        } while ((bVar2 != 0) && (local_28 < uVar14));
        if ((*(byte *)((int)piVar4 + 0x11) & 2) != 0) {
          iVar9 = FUN_0046ce90(piVar4[6],pbVar12,local_28);
          piVar4[6] = iVar9;
        }
        uVar14 = uVar14 - local_28;
        pbVar12 = pbVar12 + local_28;
        if (bVar2 != 0) goto LAB_0046a63e;
      }
      piVar4[0x10] = 0;
      *piVar4 = 7;
switchD_0046933c_caseD_7:
      if ((*(byte *)((int)piVar4 + 0x11) & 0x10) == 0) {
        if (piVar4[8] != 0) {
          *(undefined4 *)(piVar4[8] + 0x24) = 0;
        }
      }
      else {
        if (uVar14 == 0) goto LAB_0046a63e;
        local_28 = 0;
        do {
          bVar2 = pbVar12[local_28];
          local_28 = local_28 + 1;
          iVar9 = piVar4[8];
          if (((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0)) &&
             ((uint)piVar4[0x10] < *(uint *)(iVar9 + 0x28))) {
            iVar1 = piVar4[0x10];
            piVar4[0x10] = piVar4[0x10] + 1;
            *(byte *)(*(int *)(iVar9 + 0x24) + iVar1) = bVar2;
          }
        } while ((bVar2 != 0) && (local_28 < uVar14));
        if ((*(byte *)((int)piVar4 + 0x11) & 2) != 0) {
          iVar9 = FUN_0046ce90(piVar4[6],pbVar12,local_28);
          piVar4[6] = iVar9;
        }
        uVar14 = uVar14 - local_28;
        pbVar12 = pbVar12 + local_28;
        if (bVar2 != 0) goto LAB_0046a63e;
      }
      *piVar4 = 8;
      uVar15 = uVar14;
switchD_0046933c_caseD_8:
      if ((*(byte *)((int)piVar4 + 0x11) & 2) != 0) {
        for (; uVar13 < 0x10; uVar13 = uVar13 + 8) {
          uVar14 = 0;
          if (uVar15 == 0) goto LAB_0046a63e;
          bVar2 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
          uVar15 = uVar15 - 1;
        }
        if ((piVar4[6] & 0xffffU) != local_34) {
          param_1[6] = (int)s_header_crc_mismatch_0067e003;
          *piVar4 = 0x1b;
          uVar14 = uVar15;
          break;
        }
        uVar13 = 0;
        local_34 = 0;
      }
      if (piVar4[8] != 0) {
        *(uint *)(piVar4[8] + 0x2c) = piVar4[4] >> 9 & 1;
        *(undefined4 *)(piVar4[8] + 0x30) = 1;
      }
      iVar9 = FUN_0046ce90(0,0,0);
      piVar4[6] = iVar9;
      param_1[0xc] = iVar9;
      *piVar4 = 0xb;
      uVar14 = uVar15;
      break;
    case 3:
      goto switchD_0046933c_caseD_3;
    case 4:
      goto switchD_0046933c_caseD_4;
    case 5:
      goto switchD_0046933c_caseD_5;
    case 6:
      goto switchD_0046933c_caseD_6;
    case 7:
      goto switchD_0046933c_caseD_7;
    case 8:
      goto switchD_0046933c_caseD_8;
    case 9:
      for (; uVar13 < 0x20; uVar13 = uVar13 + 8) {
        uVar14 = 0;
        if (uVar15 == 0) goto LAB_0046a63e;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
        uVar15 = uVar15 - 1;
      }
      iVar9 = (local_34 >> 0x18) + (local_34 >> 8 & 0xff00) + (local_34 & 0xff00) * 0x100 +
              local_34 * 0x1000000;
      piVar4[6] = iVar9;
      param_1[0xc] = iVar9;
      uVar13 = 0;
      local_34 = 0;
      *piVar4 = 10;
    case 10:
      if (piVar4[3] == 0) {
        param_1[3] = (int)local_3c;
        param_1[4] = local_38;
        *param_1 = (int)pbVar12;
        param_1[1] = uVar15;
        piVar4[0xe] = local_34;
        piVar4[0xf] = uVar13;
        return 2;
      }
      iVar9 = FUN_00466a54(0,0,0);
      piVar4[6] = iVar9;
      param_1[0xc] = iVar9;
      *piVar4 = 0xb;
      uVar14 = uVar15;
switchD_0046933c_caseD_b:
      if (param_2 == 5) goto LAB_0046a63e;
switchD_0046933c_caseD_c:
      uVar15 = uVar14;
      if (piVar4[1] == 0) {
        for (; uVar13 < 3; uVar13 = uVar13 + 8) {
          uVar14 = 0;
          if (uVar15 == 0) goto LAB_0046a63e;
          bVar2 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
          uVar15 = uVar15 - 1;
        }
        piVar4[1] = local_34 & 1;
        uVar14 = local_34 >> 1 & 3;
        if (uVar14 == 0) {
          *piVar4 = 0xd;
        }
        else if (uVar14 == 1) {
          FUN_00469180(piVar4);
          *piVar4 = 0x12;
        }
        else if (uVar14 == 2) {
          *piVar4 = 0xf;
        }
        else if (uVar14 == 3) {
          param_1[6] = (int)s_invalid_block_type_0067e017;
          *piVar4 = 0x1b;
        }
        local_34 = local_34 >> 3;
        uVar13 = uVar13 - 3;
        uVar14 = uVar15;
      }
      else {
        local_34 = local_34 >> ((byte)uVar13 & 7);
        uVar13 = uVar13 - (uVar13 & 7);
        *piVar4 = 0x18;
      }
      break;
    case 0xb:
      goto switchD_0046933c_caseD_b;
    case 0xc:
      goto switchD_0046933c_caseD_c;
    case 0xd:
      local_34 = local_34 >> (sbyte)(uVar13 & 7);
      uVar15 = uVar14;
      for (uVar13 = uVar13 - (uVar13 & 7); uVar13 < 0x20; uVar13 = uVar13 + 8) {
        uVar14 = 0;
        if (uVar15 == 0) goto LAB_0046a63e;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
        uVar15 = uVar15 - 1;
      }
      uVar14 = uVar15;
      if ((local_34 & 0xffff) == (local_34 >> 0x10 ^ 0xffff)) {
        piVar4[0x10] = local_34 & 0xffff;
        uVar13 = 0;
        local_34 = 0;
        *piVar4 = 0xe;
        goto switchD_0046933c_caseD_e;
      }
      param_1[6] = (int)s_invalid_stored_block_lengths_0067e02a;
      *piVar4 = 0x1b;
      break;
    case 0xe:
switchD_0046933c_caseD_e:
      local_28 = piVar4[0x10];
      if (local_28 == 0) {
        *piVar4 = 0xb;
      }
      else {
        if (uVar14 < local_28) {
          local_28 = uVar14;
        }
        if (local_38 < local_28) {
          local_28 = local_38;
        }
        if (local_28 == 0) goto LAB_0046a63e;
        FUN_00466a40();
        pbVar12 = pbVar12 + local_28;
        local_38 = local_38 - local_28;
        local_3c = local_3c + local_28;
        piVar4[0x10] = piVar4[0x10] - local_28;
        uVar14 = uVar14 - local_28;
      }
      break;
    case 0xf:
      uVar15 = uVar14;
      for (; uVar13 < 0xe; uVar13 = uVar13 + 8) {
        uVar14 = 0;
        if (uVar15 == 0) goto LAB_0046a63e;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
        uVar15 = uVar15 - 1;
      }
      piVar4[0x18] = (local_34 & 0x1f) + 0x101;
      piVar4[0x19] = (local_34 >> 5 & 0x1f) + 1;
      piVar4[0x17] = (local_34 >> 10 & 0xf) + 4;
      local_34 = local_34 >> 0xe;
      uVar13 = uVar13 - 0xe;
      uVar14 = uVar15;
      if (((uint)piVar4[0x18] < 0x11f) && ((uint)piVar4[0x19] < 0x1f)) {
        piVar4[0x1a] = 0;
        *piVar4 = 0x10;
        goto switchD_0046933c_caseD_10;
      }
      param_1[6] = (int)s_too_many_length_or_distance_symb_0067e047;
      *piVar4 = 0x1b;
      break;
    case 0x10:
switchD_0046933c_caseD_10:
      while (uVar15 = uVar14, (uint)piVar4[0x1a] < (uint)piVar4[0x17]) {
        for (; uVar13 < 3; uVar13 = uVar13 + 8) {
          uVar14 = 0;
          if (uVar15 == 0) goto LAB_0046a63e;
          bVar2 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
          uVar15 = uVar15 - 1;
        }
        iVar9 = piVar4[0x1a];
        piVar4[0x1a] = piVar4[0x1a] + 1;
        *(ushort *)((int)piVar4 + (uint)*(ushort *)(&DAT_0067df78 + iVar9 * 2) * 2 + 0x70) =
             (ushort)local_34 & 7;
        local_34 = local_34 >> 3;
        uVar13 = uVar13 - 3;
        uVar14 = uVar15;
      }
      while ((uint)piVar4[0x1a] < 0x13) {
        iVar9 = piVar4[0x1a];
        piVar4[0x1a] = piVar4[0x1a] + 1;
        *(undefined2 *)((int)piVar4 + (uint)*(ushort *)(&DAT_0067df78 + iVar9 * 2) * 2 + 0x70) = 0;
      }
      piVar4[0x1b] = (int)(piVar4 + 0x14c);
      piVar4[0x13] = (int)(piVar4 + 0x14c);
      piVar4[0x15] = 7;
      local_18 = FUN_0046ab0c(0,piVar4 + 0x1c,0x13,piVar4 + 0xbc,piVar4 + 0x15,piVar4 + 0x1b);
      if (local_18 == 0) {
        piVar4[0x1a] = 0;
        *piVar4 = 0x11;
switchD_0046933c_caseD_11:
        while ((uint)piVar4[0x1a] < (uint)(piVar4[0x18] + piVar4[0x19])) {
          while( true ) {
            uVar6 = *(undefined4 *)
                     (piVar4[0x13] + ((1 << ((byte)piVar4[0x15] & 0x1f)) - 1U & local_34) * 4);
            local_24._1_1_ = (byte)((uint)uVar6 >> 8);
            if (local_24._1_1_ <= uVar13) break;
            if (uVar14 == 0) goto LAB_0046a63e;
            bVar2 = *pbVar12;
            pbVar12 = pbVar12 + 1;
            local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
            uVar14 = uVar14 - 1;
            uVar13 = uVar13 + 8;
          }
          local_24._2_2_ = (ushort)((uint)uVar6 >> 0x10);
          if (local_24._2_2_ < 0x10) {
            for (; uVar13 < local_24._1_1_; uVar13 = uVar13 + 8) {
              if (uVar14 == 0) goto LAB_0046a63e;
              bVar2 = *pbVar12;
              pbVar12 = pbVar12 + 1;
              local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
              uVar14 = uVar14 - 1;
            }
            local_34 = local_34 >> (local_24._1_1_ & 0x1f);
            uVar13 = uVar13 - local_24._1_1_;
            iVar9 = piVar4[0x1a];
            piVar4[0x1a] = piVar4[0x1a] + 1;
            *(ushort *)((int)piVar4 + iVar9 * 2 + 0x70) = local_24._2_2_;
          }
          else {
            if (local_24._2_2_ == 0x10) {
              for (; uVar13 < local_24._1_1_ + 2; uVar13 = uVar13 + 8) {
                if (uVar14 == 0) goto LAB_0046a63e;
                bVar2 = *pbVar12;
                pbVar12 = pbVar12 + 1;
                local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
                uVar14 = uVar14 - 1;
              }
              local_34 = local_34 >> (local_24._1_1_ & 0x1f);
              uVar13 = uVar13 - local_24._1_1_;
              if (piVar4[0x1a] == 0) {
                param_1[6] = (int)s_invalid_bit_length_repeat_0067e084;
                *piVar4 = 0x1b;
                break;
              }
              uVar3 = *(undefined2 *)((int)piVar4 + piVar4[0x1a] * 2 + 0x6e);
              local_28 = (local_34 & 3) + 3;
              local_34 = local_34 >> 2;
              uVar13 = uVar13 - 2;
            }
            else if (local_24._2_2_ == 0x11) {
              for (; uVar13 < local_24._1_1_ + 3; uVar13 = uVar13 + 8) {
                if (uVar14 == 0) goto LAB_0046a63e;
                bVar2 = *pbVar12;
                pbVar12 = pbVar12 + 1;
                local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
                uVar14 = uVar14 - 1;
              }
              local_34 = local_34 >> (local_24._1_1_ & 0x1f);
              uVar3 = 0;
              local_28 = (local_34 & 7) + 3;
              local_34 = local_34 >> 3;
              uVar13 = (uVar13 - local_24._1_1_) - 3;
            }
            else {
              for (; uVar13 < local_24._1_1_ + 7; uVar13 = uVar13 + 8) {
                if (uVar14 == 0) goto LAB_0046a63e;
                bVar2 = *pbVar12;
                pbVar12 = pbVar12 + 1;
                local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
                uVar14 = uVar14 - 1;
              }
              local_34 = local_34 >> (local_24._1_1_ & 0x1f);
              uVar3 = 0;
              local_28 = (local_34 & 0x7f) + 0xb;
              local_34 = local_34 >> 7;
              uVar13 = (uVar13 - local_24._1_1_) - 7;
            }
            if ((uint)(piVar4[0x18] + piVar4[0x19]) < piVar4[0x1a] + local_28) {
              param_1[6] = (int)s_invalid_bit_length_repeat_0067e084;
              *piVar4 = 0x1b;
              break;
            }
            while (local_28 != 0) {
              iVar9 = piVar4[0x1a];
              piVar4[0x1a] = piVar4[0x1a] + 1;
              *(undefined2 *)((int)piVar4 + iVar9 * 2 + 0x70) = uVar3;
              local_28 = local_28 + -1;
            }
          }
        }
        if (*piVar4 != 0x1b) {
          piVar4[0x1b] = (int)(piVar4 + 0x14c);
          piVar4[0x13] = piVar4[0x1b];
          piVar4[0x15] = 9;
          local_18 = FUN_0046ab0c(1,piVar4 + 0x1c,piVar4[0x18],piVar4 + 0xbc,piVar4 + 0x15,
                                  piVar4 + 0x1b);
          if (local_18 == 0) {
            piVar4[0x14] = piVar4[0x1b];
            piVar4[0x16] = 6;
            local_18 = FUN_0046ab0c(2,(int)piVar4 + piVar4[0x18] * 2 + 0x70,piVar4[0x19],
                                    piVar4 + 0xbc,piVar4 + 0x16,piVar4 + 0x1b);
            if (local_18 == 0) {
              *piVar4 = 0x12;
switchD_0046933c_caseD_12:
              if ((uVar14 < 6) || (local_38 < 0x102)) {
                for (; uVar15 = *(uint *)(piVar4[0x13] +
                                         ((1 << ((byte)piVar4[0x15] & 0x1f)) - 1U & local_34) * 4),
                    uVar13 < (uVar15 >> 8 & 0xff); uVar13 = uVar13 + 8) {
                  if (uVar14 == 0) goto LAB_0046a63e;
                  bVar2 = *pbVar12;
                  pbVar12 = pbVar12 + 1;
                  local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
                  uVar14 = uVar14 - 1;
                }
                local_24._0_1_ = (char)uVar15;
                if (((char)local_24 != '\0') && ((uVar15 & 0xf0) == 0)) {
                  while( true ) {
                    bStack_1f = (byte)(uVar15 >> 8);
                    uVar7 = *(uint *)(piVar4[0x13] +
                                     ((((1 << (bStack_1f + (char)local_24 & 0x1f)) - 1U & local_34)
                                      >> (bStack_1f & 0x1f)) + (uVar15 >> 0x10)) * 4);
                    if ((uint)bStack_1f + (uVar7 >> 8 & 0xff) <= uVar13) break;
                    if (uVar14 == 0) goto LAB_0046a63e;
                    bVar2 = *pbVar12;
                    pbVar12 = pbVar12 + 1;
                    local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
                    uVar14 = uVar14 - 1;
                    uVar13 = uVar13 + 8;
                  }
                  local_34 = local_34 >> (bStack_1f & 0x1f);
                  uVar13 = uVar13 - bStack_1f;
                  uVar15 = uVar7;
                }
                local_24 = uVar15;
                local_34 = local_34 >> (local_24._1_1_ & 0x1f);
                uVar13 = uVar13 - local_24._1_1_;
                piVar4[0x10] = local_24 >> 0x10;
                if ((char)local_24 == '\0') {
                  *piVar4 = 0x17;
                }
                else if ((local_24 & 0x20) == 0) {
                  if ((local_24 & 0x40) == 0) {
                    piVar4[0x12] = local_24 & 0xf;
                    *piVar4 = 0x13;
switchD_0046933c_caseD_13:
                    if (piVar4[0x12] != 0) {
                      for (; uVar13 < (uint)piVar4[0x12]; uVar13 = uVar13 + 8) {
                        if (uVar14 == 0) goto LAB_0046a63e;
                        bVar2 = *pbVar12;
                        pbVar12 = pbVar12 + 1;
                        local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
                        uVar14 = uVar14 - 1;
                      }
                      piVar4[0x10] = piVar4[0x10] +
                                     ((1 << ((byte)piVar4[0x12] & 0x1f)) - 1U & local_34);
                      local_34 = local_34 >> ((byte)piVar4[0x12] & 0x1f);
                      uVar13 = uVar13 - piVar4[0x12];
                    }
                    *piVar4 = 0x14;
switchD_0046933c_caseD_14:
                    for (; uVar15 = *(uint *)(piVar4[0x14] +
                                             ((1 << ((byte)piVar4[0x16] & 0x1f)) - 1U & local_34) *
                                             4), uVar13 < (uVar15 >> 8 & 0xff); uVar13 = uVar13 + 8)
                    {
                      if (uVar14 == 0) goto LAB_0046a63e;
                      bVar2 = *pbVar12;
                      pbVar12 = pbVar12 + 1;
                      local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
                      uVar14 = uVar14 - 1;
                    }
                    local_24 = uVar15;
                    if ((uVar15 & 0xf0) == 0) {
                      while( true ) {
                        local_20 = (char)uVar15;
                        bStack_1f = (byte)(uVar15 >> 8);
                        local_24 = *(uint *)(piVar4[0x14] +
                                            ((((1 << (bStack_1f + local_20 & 0x1f)) - 1U & local_34)
                                             >> (bStack_1f & 0x1f)) + (uVar15 >> 0x10)) * 4);
                        if ((uint)bStack_1f + (local_24 >> 8 & 0xff) <= uVar13) break;
                        if (uVar14 == 0) goto LAB_0046a63e;
                        bVar2 = *pbVar12;
                        pbVar12 = pbVar12 + 1;
                        local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
                        uVar14 = uVar14 - 1;
                        uVar13 = uVar13 + 8;
                      }
                      local_34 = local_34 >> (bStack_1f & 0x1f);
                      uVar13 = uVar13 - bStack_1f;
                    }
                    local_34 = local_34 >> (local_24._1_1_ & 0x1f);
                    uVar13 = uVar13 - local_24._1_1_;
                    if ((local_24 & 0x40) == 0) {
                      piVar4[0x11] = local_24 >> 0x10;
                      piVar4[0x12] = local_24 & 0xf;
                      *piVar4 = 0x15;
switchD_0046933c_caseD_15:
                      if (piVar4[0x12] != 0) {
                        for (; uVar13 < (uint)piVar4[0x12]; uVar13 = uVar13 + 8) {
                          if (uVar14 == 0) goto LAB_0046a63e;
                          bVar2 = *pbVar12;
                          pbVar12 = pbVar12 + 1;
                          local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
                          uVar14 = uVar14 - 1;
                        }
                        piVar4[0x11] = piVar4[0x11] +
                                       ((1 << ((byte)piVar4[0x12] & 0x1f)) - 1U & local_34);
                        local_34 = local_34 >> ((byte)piVar4[0x12] & 0x1f);
                        uVar13 = uVar13 - piVar4[0x12];
                      }
                      if ((piVar4[0xb] + local_2c) - local_38 < (uint)piVar4[0x11]) {
                        param_1[6] = (int)s_invalid_distance_too_far_back_0067e102;
                        *piVar4 = 0x1b;
                      }
                      else {
                        *piVar4 = 0x16;
switchD_0046933c_caseD_16:
                        if (local_38 == 0) goto LAB_0046a63e;
                        if (local_2c - local_38 < (uint)piVar4[0x11]) {
                          local_28 = piVar4[0x11] - (local_2c - local_38);
                          uVar15 = piVar4[0xc];
                          if (uVar15 < local_28) {
                            local_28 = local_28 - uVar15;
                            puVar8 = (undefined1 *)((piVar4[10] - local_28) + piVar4[0xd]);
                          }
                          else {
                            puVar8 = (undefined1 *)((uVar15 - local_28) + piVar4[0xd]);
                          }
                          if ((uint)piVar4[0x10] < local_28) {
                            local_28 = piVar4[0x10];
                          }
                        }
                        else {
                          local_28 = piVar4[0x10];
                          puVar8 = local_3c + -piVar4[0x11];
                        }
                        if (local_38 < local_28) {
                          local_28 = local_38;
                        }
                        local_38 = local_38 - local_28;
                        piVar4[0x10] = piVar4[0x10] - local_28;
                        do {
                          *local_3c = *puVar8;
                          puVar8 = puVar8 + 1;
                          local_3c = local_3c + 1;
                          local_28 = local_28 - 1;
                        } while (local_28 != 0);
                        if (piVar4[0x10] == 0) {
                          *piVar4 = 0x12;
                        }
                      }
                    }
                    else {
                      param_1[6] = (int)s_invalid_distance_code_0067e0ec;
                      *piVar4 = 0x1b;
                    }
                  }
                  else {
                    param_1[6] = (int)s_invalid_literal_length_code_0067e0d0;
                    *piVar4 = 0x1b;
                  }
                }
                else {
                  *piVar4 = 0xb;
                }
              }
              else {
                param_1[3] = (int)local_3c;
                param_1[4] = local_38;
                *param_1 = (int)pbVar12;
                param_1[1] = uVar14;
                piVar4[0xe] = local_34;
                piVar4[0xf] = uVar13;
                FUN_00468ae4(param_1,local_2c);
                local_3c = (undefined1 *)param_1[3];
                local_38 = param_1[4];
                pbVar12 = (byte *)*param_1;
                local_34 = piVar4[0xe];
                uVar13 = piVar4[0xf];
                uVar14 = param_1[1];
              }
            }
            else {
              param_1[6] = (int)s_invalid_distances_set_0067e0ba;
              *piVar4 = 0x1b;
            }
          }
          else {
            param_1[6] = (int)s_invalid_literal_lengths_set_0067e09e;
            *piVar4 = 0x1b;
          }
        }
      }
      else {
        param_1[6] = (int)s_invalid_code_lengths_set_0067e06b;
        *piVar4 = 0x1b;
      }
      break;
    case 0x11:
      goto switchD_0046933c_caseD_11;
    case 0x12:
      goto switchD_0046933c_caseD_12;
    case 0x13:
      goto switchD_0046933c_caseD_13;
    case 0x14:
      goto switchD_0046933c_caseD_14;
    case 0x15:
      goto switchD_0046933c_caseD_15;
    case 0x16:
      goto switchD_0046933c_caseD_16;
    case 0x17:
      if (local_38 == 0) goto LAB_0046a63e;
      *local_3c = (char)piVar4[0x10];
      local_3c = local_3c + 1;
      local_38 = local_38 - 1;
      *piVar4 = 0x12;
      break;
    case 0x18:
      if (piVar4[2] != 0) {
        for (; uVar13 < 0x20; uVar13 = uVar13 + 8) {
          uVar14 = 0;
          if (uVar15 == 0) goto LAB_0046a63e;
          bVar2 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
          uVar15 = uVar15 - 1;
        }
        iVar9 = local_2c - local_38;
        param_1[5] = param_1[5] + iVar9;
        piVar4[7] = piVar4[7] + iVar9;
        if (iVar9 != 0) {
          if (piVar4[4] == 0) {
            iVar9 = FUN_00466a54(piVar4[6],(int)local_3c - iVar9,iVar9);
          }
          else {
            iVar9 = FUN_0046ce90(piVar4[6],(int)local_3c - iVar9,iVar9);
          }
          piVar4[6] = iVar9;
          param_1[0xc] = iVar9;
        }
        local_2c = local_38;
        uVar14 = local_34;
        if (piVar4[4] == 0) {
          uVar14 = (local_34 >> 0x18) + (local_34 >> 8 & 0xff00) + (local_34 & 0xff00) * 0x100 +
                   local_34 * 0x1000000;
        }
        if (uVar14 != piVar4[6]) {
          param_1[6] = (int)s_incorrect_data_check_0067e120;
          *piVar4 = 0x1b;
          uVar14 = uVar15;
          break;
        }
        uVar13 = 0;
        local_34 = 0;
      }
      *piVar4 = 0x19;
      goto switchD_0046933c_caseD_19;
    case 0x19:
switchD_0046933c_caseD_19:
      if ((piVar4[2] == 0) || (piVar4[4] == 0)) {
LAB_0046a60b:
        *piVar4 = 0x1a;
        uVar14 = uVar15;
        goto switchD_0046933c_caseD_1a;
      }
      for (; uVar13 < 0x20; uVar13 = uVar13 + 8) {
        uVar14 = 0;
        if (uVar15 == 0) goto LAB_0046a63e;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        local_34 = local_34 + ((uint)bVar2 << ((byte)uVar13 & 0x1f));
        uVar15 = uVar15 - 1;
      }
      if (piVar4[7] == local_34) {
        uVar13 = 0;
        local_34 = 0;
        goto LAB_0046a60b;
      }
      param_1[6] = (int)s_incorrect_length_check_0067e135;
      *piVar4 = 0x1b;
      uVar14 = uVar15;
      break;
    case 0x1a:
switchD_0046933c_caseD_1a:
      local_18 = 1;
LAB_0046a63e:
      param_1[3] = (int)local_3c;
      param_1[4] = local_38;
      *param_1 = (int)pbVar12;
      param_1[1] = uVar14;
      piVar4[0xe] = local_34;
      piVar4[0xf] = uVar13;
      if (((piVar4[10] != 0) || ((*piVar4 < 0x18 && (param_1[4] != local_2c)))) &&
         (iVar9 = FUN_004691a0(param_1,local_2c), iVar9 != 0)) {
        *piVar4 = 0x1c;
        return -4;
      }
      iVar9 = uVar5 - param_1[1];
      iVar1 = local_2c - param_1[4];
      param_1[2] = param_1[2] + iVar9;
      param_1[5] = param_1[5] + iVar1;
      piVar4[7] = piVar4[7] + iVar1;
      if ((piVar4[2] != 0) && (iVar1 != 0)) {
        if (piVar4[4] == 0) {
          iVar10 = FUN_00466a54(piVar4[6],param_1[3] - iVar1,iVar1);
        }
        else {
          iVar10 = FUN_0046ce90(piVar4[6],param_1[3] - iVar1,iVar1);
        }
        piVar4[6] = iVar10;
        param_1[0xc] = iVar10;
      }
      if (piVar4[1] == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = 0x40;
      }
      if (*piVar4 == 0xb) {
        iVar11 = 0x80;
      }
      else {
        iVar11 = 0;
      }
      param_1[0xb] = iVar10 + piVar4[0xf] + iVar11;
      if (((iVar9 != 0) || (iVar1 != 0)) && (param_2 != 4)) {
        return local_18;
      }
      if (local_18 != 0) {
        return local_18;
      }
      return -5;
    case 0x1b:
      local_18 = -3;
      goto LAB_0046a63e;
    case 0x1c:
      return -4;
    default:
      return -2;
    }
  } while( true );
}
