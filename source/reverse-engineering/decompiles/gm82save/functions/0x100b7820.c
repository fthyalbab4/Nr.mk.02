// rea decompile_all
// name: FUN_100b7820
// address: 0x100b7820
// body: available
// range: 0x100b7820-0x100b7f8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b7820(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  ushort uVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *_Dst;
  void *_Src;
  uint *puVar13;
  uint *puVar14;
  byte bVar15;
  uint *unaff_EBX;
  undefined1 *puVar16;
  uint *puVar17;
  uint unaff_ESI;
  uint *puVar18;
  uint *unaff_EDI;
  undefined1 *_Dst_00;
  uint *puVar19;
  uint *in_stack_00000024;
  undefined4 local_48;
  undefined3 uStack_44;
  char local_41;
  undefined4 local_30;
  uint *puStack_28;
  uint *local_24;
  uint *local_20;
  uint local_1c;
  char cStack_18;
  undefined1 uStack_17;

  uVar1 = *(ushort *)((int)param_4 + 2);
  local_1c = (uint)uVar1;
  uVar2 = (ushort)*param_4;
  uVar10 = *param_4;
  uVar9 = *param_4;
  uVar8 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)*param_3) {
  case '\0':
    if (uVar9 != 0x474e5089) {
LAB_100b792b:
      *(undefined1 *)param_1 = 1;
      *(undefined1 *)((int)param_1 + 0x19) = 0xff;
      return;
    }
    *(undefined1 *)(param_2 + 0x14) = 1;
    break;
  case '\x01':
    if (uVar9 != 0xa1a0a0d) goto LAB_100b792b;
    *(undefined1 *)(param_2 + 0x14) = 2;
    break;
  case '\x02':
    *(undefined1 *)(param_2 + 0x14) = 3;
    param_2[0x15] = uVar8;
    break;
  case '\x03':
    uVar8 = param_3[1];
    uVar5 = uVar2 >> 8;
    puVar16 = (undefined1 *)(uint)uVar5;
    local_41 = (char)uVar2;
    bVar15 = (byte)(uVar2 >> 8);
    if ((uVar9 != 0x52444849) && (param_2[0x18] == 0xffffffff)) {
      *(undefined1 *)param_1 = 4;
      *(uint *)((int)param_1 + 1) = uVar10;
      *(undefined1 *)((int)param_1 + 0x19) = 0xff;
      return;
    }
    uVar3 = param_2[7];
    local_48 = uVar10;
    if ((uVar9 == uVar3) || ((uVar3 != 0x54416466 && (uVar3 != 0x54414449)))) {
      bVar6 = (byte)uVar1;
      if (local_41 == 'I') {
        if (((uVar5 == 0x44) && (bVar6 == 0x41)) && (uVar1 >> 8 == 0x54)) {
          if (*(char *)((int)param_2 + 0x1a9) == '\0') {
            *(undefined1 *)param_1 = 0x20;
            *(undefined4 *)((int)param_1 + 1) = 0x54414449;
            goto LAB_100b7eff;
          }
          uVar7 = 8;
          *(undefined1 *)(param_2 + 0x6a) = 1;
          goto LAB_100b7bbe;
        }
      }
      else if (((local_41 == 'f') && (uVar5 == 100)) && ((bVar6 == 0x41 && (uVar1 >> 8 == 0x54)))) {
        if (*(char *)((int)param_2 + 0x1aa) == '\0') {
          *(undefined1 *)param_1 = 0x20;
          *(undefined4 *)((int)param_1 + 1) = 0x54416466;
        }
        else {
          if (3 < uVar8) {
            uVar7 = 5;
            goto LAB_100b7bbe;
          }
          *(undefined1 *)param_1 = 0x1f;
        }
LAB_100b7eff:
        *(undefined1 *)((int)param_1 + 0x19) = 0xff;
        return;
      }
      uVar7 = 6;
LAB_100b7bbe:
      *(undefined1 *)(param_2 + 0x14) = uVar7;
      *(uint *)((int)param_2 + 0x51) = uVar10;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      param_2[7] = uVar10;
      if (*(char *)((int)param_2 + 0x1ad) == '\0') {
        param_2[3] = 0;
        param_2[2] = 4;
        if (*param_2 == 1) {
          uVar9 = FUN_1009d660(0,(undefined1 (*) [16])&local_48,4);
        }
        else {
          uVar9 = (*(uint *)("" + (uVar2 & 0xff ^ 0xff) * 4) ^ 0xffffff) >> 8 ^
                  *(uint *)("" + (uint)(byte)(bVar15 ^ (byte)(*(uint *)("" + (uVar2 & 0xff ^ 0xff) *
                                                                             4) ^ 0xffffff)) * 4);
          uVar9 = uVar9 >> 8 ^ *(uint *)("" + (uint)(byte)(bVar6 ^ (byte)uVar9) * 4);
          local_48._3_1_ = (byte)(uVar1 >> 8);
          uVar9 = ~(uVar9 >> 8 ^ *(uint *)("" + (uint)(byte)(local_48._3_1_ ^ (byte)uVar9) * 4));
        }
        param_2[1] = uVar9;
      }
      param_2[8] = uVar8;
      *param_1 = uVar8;
      param_1[1] = uVar10;
      param_2[6] = 0;
      *(undefined1 *)((int)param_1 + 0x19) = 4;
      return;
    }
    puVar13 = param_2 + 0xc;
    param_2[7] = uVar10;
    if ((char)param_2[0x13] != '\x01') goto LAB_100b7a7f;
    puVar14 = (uint *)param_2[0xf];
    local_24 = puVar13;
    if (*(char *)((int)puVar14 + 0x3a3) == '\a') {
      puVar19 = (uint *)param_2[0x10];
      puVar17 = (uint *)param_2[0xe];
    }
    else {
      puVar19 = (uint *)param_2[0x10];
      do {
        puVar18 = (uint *)param_2[0x12];
        if (puVar18 <= puVar19) {
          puVar18 = (uint *)0xffffffff;
          param_2[0x12] = 0xffffffff;
        }
        puVar17 = (uint *)param_2[0xe];
        puVar11 = puVar19 + 0x2000;
        if ((uint *)0xffff7fff < puVar19) {
          puVar11 = (uint *)0xffffffff;
        }
        if (puVar18 < puVar11) {
          puVar11 = puVar18;
        }
        _Dst = puVar14;
        if (puVar17 < puVar11) {
          puVar11 = (uint *)0x8000;
          if ((uint *)0x8000 < puVar17) {
            puVar11 = puVar17;
          }
          puVar12 = (uint *)((int)puVar11 + (int)puVar17);
          if (puVar18 <= (uint *)((int)puVar11 + (int)puVar17)) {
            puVar12 = puVar18;
          }
          if ((uint *)0x7ffffffe < puVar12) {
            puVar12 = (uint *)0x7fffffff;
          }
          uVar9 = (int)puVar12 - (int)puVar17;
          if (puVar17 <= puVar12 && uVar9 != 0) {
            if (*puVar13 - (int)puVar17 < uVar9) {
              FUN_10137980(puVar13,(uint)puVar17,uVar9);
              puVar17 = (uint *)param_2[0xe];
              uVar10 = param_2[0xd];
              _Dst_00 = (undefined1 *)(uVar10 + (int)puVar17);
              _Dst = puVar14;
            }
            else {
              uVar10 = param_2[0xd];
              _Dst_00 = (undefined1 *)(uVar10 + (int)puVar17);
            }
            if (1 < uVar9) {
              memset(_Dst_00,0,uVar9 - 1);
              puVar17 = (uint *)((int)puVar17 + (uVar9 - 1));
              _Dst_00 = (undefined1 *)(uVar10 + (int)puVar17);
            }
            *_Dst_00 = 0;
            puVar12 = (uint *)((int)puVar17 + 1);
            puVar14 = (uint *)param_2[0xf];
            puVar19 = (uint *)param_2[0x10];
          }
          param_2[0xe] = (uint)puVar12;
          puVar17 = puVar12;
        }
        local_20 = (uint *)param_2[0xd];
        FUN_1009e580(&local_30,puVar14,(uint *)0x1,(uint *)0x0,(int)local_20,puVar17,puVar19,'\x01')
        ;
        if (cStack_18 != '\0') {
          *puVar16 = 0x1c;
          puVar16[1] = uStack_17;
          puVar16[0x19] = 0xff;
          return;
        }
        puVar19 = (uint *)((int)puVar19 + unaff_ESI);
        local_24[0x10] = (uint)puVar19;
        param_2 = local_24;
        puStack_28 = puVar14;
        if (*(char *)((int)puVar14 + 0x3a3) == '\a') break;
        puVar13 = (uint *)local_24[0x11];
        local_20 = puVar17;
        if ((puVar17 < puVar19) || (uVar9 = (int)puVar19 - (int)puVar13, puVar19 < puVar13)) {
          FUN_10136a50((uint)puVar13,(uint)puVar19,(uint)puVar17,
                       &PTR_s_C__Users_runneradmin__cargo_regi_10150428);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar10 = in_stack_00000024[2];
        if (*in_stack_00000024 - uVar10 < uVar9) {
          FUN_10137980(in_stack_00000024,uVar10,uVar9);
          uVar10 = in_stack_00000024[2];
LAB_100b7e6e:
          _Dst = (uint *)(in_stack_00000024[1] + uVar10);
          uStack_44 = 0xb7e7f;
          local_41 = '\x10';
          memcpy(_Dst,(void *)((int)puVar13 + (int)unaff_EBX),uVar9);
        }
        else if (puVar19 != puVar13) goto LAB_100b7e6e;
        puVar14 = _Dst;
        param_3 = (uint *)(unaff_ESI | uVar9);
        local_24[0x11] = (uint)puVar19;
        in_stack_00000024[2] = uVar10 + uVar9;
        if (param_3 == (uint *)0x0) {
          FUN_1013bdcd("No more forward progress made in stream decoding.",0x31,
                       &PTR_s_C__Users_runneradmin__cargo_regi_1015046c);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((uint *)0x20000 < puVar19) {
          uStack_44 = 0xb7d14;
          local_41 = '\x10';
          puVar14 = unaff_EBX;
          memmove(unaff_EBX,(void *)((int)(unaff_EBX + -0x2000) + (int)puVar19),0x8000);
          puVar19 = (uint *)0x8000;
          local_24[0x11] = 0x8000;
          local_24[0x10] = 0x8000;
        }
        puVar13 = unaff_EDI;
        puVar17 = local_20;
        param_2 = local_24;
      } while (*(char *)((int)puStack_28 + 0x3a3) != '\a');
    }
    puVar13 = (uint *)param_2[0x11];
    uVar9 = (int)puVar19 - (int)puVar13;
    if ((puVar19 < puVar13) || (puVar17 < puVar19)) {
      FUN_10136a50((uint)puVar13,(uint)puVar19,(uint)puVar17,
                   &PTR_s_C__Users_runneradmin__cargo_regi_10150428);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    _Src = (void *)(param_2[0xd] + (int)puVar13);
    uVar10 = param_5[2];
    if (*param_5 - uVar10 < uVar9) {
      FUN_10137980(param_5,uVar10,uVar9);
      uVar10 = param_5[2];
LAB_100b7a53:
      memcpy((void *)(param_5[1] + uVar10),_Src,uVar9);
    }
    else if (puVar19 != puVar13) goto LAB_100b7a53;
    param_2[0x11] = (uint)puVar19;
    param_2[0xe] = 0;
    param_5[2] = uVar10 + uVar9;
    puVar13 = local_24;
LAB_100b7a7f:
    FUN_100b7760((int)puVar13);
    *(undefined2 *)((int)param_2 + 0x1a9) = 0;
    uVar9 = param_3[1];
    param_2[0x14] = *param_3;
    param_2[0x15] = uVar9;
    *(char *)(param_2 + 0x16) = local_41;
    *(undefined1 *)((int)param_1 + 0x19) = 10;
    *(byte *)((int)param_2 + 0x59) = bVar15;
    *(short *)((int)param_2 + 0x5a) = (short)local_1c;
    param_2[0x17] = 4;
    return;
  case '\x04':
    uVar9 = *(uint *)((int)param_3 + 1);
    if ((*(char *)((int)param_2 + 0x1ad) == '\0') && (uVar10 = param_2[1], uVar10 != uVar8)) {
      if ((byte)((byte)param_2[0x6c] & (byte)((uVar9 & 0x20) >> 5)) != 0) {
        *(undefined1 *)(param_2 + 0x14) = 2;
        param_2[0x16] = 0;
        param_2[0x17] = 0;
        *(undefined1 *)((int)param_1 + 0x19) = 2;
        return;
      }
      *(undefined1 *)param_1 = 0;
      param_1[1] = uVar8;
      param_1[2] = uVar10;
      param_1[3] = uVar9;
      *(undefined1 *)((int)param_1 + 0x19) = 0xff;
      return;
    }
    if (uVar9 == 0x444e4549) {
      *(undefined1 *)((int)param_1 + 0x19) = 0xc;
      return;
    }
    *(undefined1 *)(param_2 + 0x14) = 2;
    param_2[0x16] = 0;
    *param_1 = uVar8;
    param_1[1] = uVar9;
    param_2[0x17] = 0;
    *(undefined1 *)((int)param_1 + 0x19) = 5;
    return;
  case '\x05':
    param_2[8] = param_2[8] - 4;
    if ((char)param_2[10] == '\0') {
      *(undefined1 *)param_1 = 2;
      *(undefined1 *)((int)param_1 + 0x19) = 0xff;
      return;
    }
    uVar10 = param_2[0xb];
    if (uVar8 == uVar10 + 1) {
      param_2[10] = 1;
      param_2[0xb] = uVar8;
      if (*(char *)((int)param_2 + 0x1ad) == '\0') {
        puVar13 = param_2 + 2;
        uVar10 = *puVar13;
        *puVar13 = *puVar13 + 4;
        param_2[3] = param_2[3] + (uint)(0xfffffffb < uVar10);
        if (*param_2 == 1) {
          local_30 = uVar9;
          uVar9 = FUN_1009d660(param_2[1],(undefined1 (*) [16])&local_30,4);
        }
        else {
          local_30._0_1_ = (byte)uVar9;
          local_30._1_1_ = (byte)(uVar9 >> 8);
          uVar10 = ~param_2[1] >> 8 ^
                   *(uint *)("" + (uint)(byte)((byte)local_30 ^ (byte)~param_2[1]) * 4);
          local_30._2_1_ = (byte)(uVar9 >> 0x10);
          uVar10 = uVar10 >> 8 ^ *(uint *)("" + (uint)(byte)(local_30._1_1_ ^ (byte)uVar10) * 4);
          local_30._3_1_ = (byte)(uVar9 >> 0x18);
          uVar9 = uVar10 >> 8 ^ *(uint *)("" + (uint)(byte)(local_30._2_1_ ^ (byte)uVar10) * 4);
          uVar9 = ~(uVar9 >> 8 ^ *(uint *)("" + (uint)(byte)(local_30._3_1_ ^ (byte)uVar9) * 4));
        }
        param_2[1] = uVar9;
      }
      *(undefined1 *)(param_2 + 0x14) = 8;
      *param_1 = 0x54416466;
      *(undefined4 *)((int)param_2 + 0x51) = 0x54416466;
      *(undefined1 *)((int)param_1 + 0x19) = 0xb;
      return;
    }
    *(undefined1 *)param_1 = 10;
    param_1[1] = uVar8;
    param_1[2] = uVar10 + 1;
    *(undefined1 *)((int)param_1 + 0x19) = 0xff;
    return;
  }
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 2;
  return;
}
