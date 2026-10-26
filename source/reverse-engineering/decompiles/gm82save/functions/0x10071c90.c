// rea decompile_all
// name: FUN_10071c90
// address: 0x10071c90
// body: available
// range: 0x10071c90-0x100726e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10071c90(char *param_1,LPVOID param_2,int param_3,uint *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  SIZE_T SVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  LPVOID pvVar8;
  undefined1 *puVar9;
  char cVar10;
  int iVar11;
  uint *puVar12;
  int *piVar13;
  uint uVar14;
  SIZE_T SVar15;
  HANDLE pvVar16;
  LPVOID pvVar17;
  code *extraout_ECX;
  uint uVar18;
  code *extraout_ECX_00;
  code *pcVar19;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  uint uVar20;
  uint extraout_EDX_01;
  ushort *puVar21;
  byte *pbVar22;
  uint uVar23;
  byte *pbVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar31;
  byte local_122;
  undefined1 local_121;
  int local_120;
  uint local_11c;
  char *local_118;
  undefined2 local_114;
  char local_112;
  undefined8 local_110;
  uint local_108;
  undefined8 local_100;
  code *local_f8;
  undefined4 uStack_f4;
  undefined7 uStack_f0;
  SIZE_T local_e4;
  int *local_e0;
  int *local_dc;
  char local_d8;
  undefined2 uStack_d7;
  char cStack_d5;
  undefined8 uStack_d4;
  code *pcStack_cc;
  byte *local_c8;
  code *pcStack_c4;
  undefined8 *local_c0;
  undefined1 *puStack_bc;
  byte *local_b8;
  undefined1 *local_b4;
  undefined8 *local_b0;
  undefined1 *local_ac;
  undefined8 *local_a8;
  undefined1 *local_a4;
  undefined4 *local_a0;
  undefined1 *local_9c;
  undefined8 *local_98;
  undefined1 *local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  int local_88;
  undefined4 local_84;
  LPVOID local_80;
  undefined4 local_7c;
  int local_78 [4];
  code *local_68;
  LPVOID local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_48;
  undefined8 local_40;
  byte *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];

  FUN_10111020(param_4,&DAT_1014201f,0xd);
  pbVar3 = (byte *)param_4[1];
  uVar20 = param_4[2];
  FUN_100759c0(&local_d8,pbVar3,uVar20);
  if (local_d8 == -1) {
    local_68 = pcStack_c4;
    local_118 = param_1;
    iVar11 = FUN_10110f10(pbVar3,uVar20);
    if (iVar11 != 0) {
      FUN_10110e70((int)param_4,extraout_EDX);
    }
    if (DAT_10163248 == 0) {
      puVar12 = FUN_10093010();
      if (puVar12 == (uint *)0x0) {
LAB_100726ca:
        FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
        pcVar19 = (code *)invalidInstructionException();
        (*pcVar19)();
      }
      local_60 = (LPVOID)*puVar12;
      uStack_5c = puVar12[1];
      uStack_58 = puVar12[2];
      uStack_54 = puVar12[3];
      puVar12[1] = puVar12[1] + (uint)((LPVOID)0xfffffffe < local_60);
      *puVar12 = (int)local_60 + 1;
      puVar12 = FUN_10093010();
      if (puVar12 == (uint *)0x0) goto LAB_100726ca;
      DAT_10163278 = *puVar12;
      DAT_1016327c = puVar12[1];
      DAT_10163280 = puVar12[2];
      DAT_10163284 = puVar12[3];
      puVar12[1] = puVar12[1] + (uint)(0xfffffffe < DAT_10163278);
      *puVar12 = DAT_10163278 + 1;
      _DAT_10163250 = 0;
      _DAT_10163248 = 0x10159670;
      _DAT_10163268 = 0x10159670;
      _DAT_10163270 = 0;
      DAT_10163258 = local_60;
      DAT_1016325c = uStack_5c;
      DAT_10163260 = uStack_58;
      DAT_10163264 = uStack_54;
    }
    if (param_3 != 0) {
      pvVar17 = (LPVOID)((int)param_2 + param_3 * 0x18);
LAB_10071e35:
      puVar21 = *(ushort **)((int)param_2 + 0x10);
      piVar13 = (int *)0x1;
      if (puVar21 == (ushort *)0x0) {
        SVar15 = 0;
        local_60 = pvVar17;
      }
      else {
        SVar4 = *(SIZE_T *)(puVar21 + -2);
        if ((int)SVar4 < 0) {
          FUN_101367b0();
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        SVar15 = 0;
        local_60 = pvVar17;
        if ((SVar4 != 0) && (piVar13 = FUN_10107380(0,SVar4), SVar15 = SVar4, piVar13 == (int *)0x0)
           ) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
      }
      local_dc = (int *)0x0;
      local_e4 = SVar15;
      local_e0 = piVar13;
      FUN_10049460(&local_d8,puVar21);
      pvVar17 = uStack_d4._4_4_;
      puVar9 = (byte *)uStack_d4;
      uVar31 = CONCAT44(uStack_d4._4_4_,(byte *)uStack_d4);
      if (local_d8 == -1) {
        local_80 = (LPVOID)((int)param_2 + 0x18);
        uStack_d4 = FUN_10002420((int)uStack_d4._4_4_,(int)pcStack_cc);
        local_c8 = (byte *)((ulonglong)uStack_d4 >> 0x20);
        local_d8 = '\n';
        uStack_d7 = 0;
        cStack_d5 = '\0';
        pcStack_cc = (code *)0x0;
        pcStack_c4 = (code *)0xa;
        local_c0 = (undefined8 *)CONCAT31(local_c0._1_3_,1);
        puStack_bc = (undefined1 *)0x0;
        local_b4 = (undefined1 *)((uint)local_b4 & 0xffff0000);
        local_b0 = (undefined8 *)((uint)local_b0 & 0xffffff00);
        local_b8 = local_c8;
        do {
          iVar11 = FUN_1008f0d0((int)&local_d8);
          if (iVar11 == 0) {
            if (puVar9 != (undefined1 *)0x0) {
              pvVar16 = GetProcessHeap();
              HeapFree(pvVar16,0,pvVar17);
            }
            if (DAT_10163254 != 0) {
              uVar5 = *(uint *)((int)param_2 + 0xc);
              uVar31 = FUN_1002e000((uint)DAT_10163258,DAT_1016325c,DAT_10163260,DAT_10163264,uVar5)
              ;
              uVar20 = (uint)uVar31;
              local_120 = 0;
              bVar25 = (byte)((ulonglong)uVar31 >> 0x18) >> 1;
              auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
              auVar26 = pshuflw(auVar26,auVar26,0);
              local_11c = DAT_1016324c;
              while( true ) {
                uVar20 = DAT_1016324c & uVar20;
                pcVar1 = (char *)(DAT_10163248 + uVar20);
                auVar29[0] = -(*pcVar1 == auVar26[0]);
                auVar29[1] = -(pcVar1[1] == auVar26[1]);
                auVar29[2] = -(pcVar1[2] == auVar26[2]);
                auVar29[3] = -(pcVar1[3] == auVar26[3]);
                auVar29[4] = -(pcVar1[4] == auVar26[4]);
                auVar29[5] = -(pcVar1[5] == auVar26[5]);
                auVar29[6] = -(pcVar1[6] == auVar26[6]);
                auVar29[7] = -(pcVar1[7] == auVar26[7]);
                auVar29[8] = -(pcVar1[8] == auVar26[0]);
                auVar29[9] = -(pcVar1[9] == auVar26[1]);
                auVar29[10] = -(pcVar1[10] == auVar26[2]);
                auVar29[0xb] = -(pcVar1[0xb] == auVar26[3]);
                auVar29[0xc] = -(pcVar1[0xc] == auVar26[4]);
                auVar29[0xd] = -(pcVar1[0xd] == auVar26[5]);
                auVar29[0xe] = -(pcVar1[0xe] == auVar26[6]);
                auVar29[0xf] = -(pcVar1[0xf] == auVar26[7]);
                uVar23 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(auVar29[0xf] >> 7) << 0xf);
                while ((short)uVar23 != 0) {
                  iVar11 = 0;
                  for (uVar18 = uVar23; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
                    iVar11 = iVar11 + 1;
                  }
                  uVar23 = uVar23 - 1 & uVar23;
                  uVar18 = iVar11 + uVar20 & DAT_1016324c;
                  if (uVar5 == *(uint *)(DAT_10163248 + -0x28 + uVar18 * -0x28)) {
                    local_100 = CONCAT44(&LAB_1009d5f0,DAT_10163248 + uVar18 * -0x28 + -8);
                    FUN_10093970((undefined8 *)&local_d8,(ushort *)&DAT_101425a8,(uint)&local_100);
                    local_110 = CONCAT44((byte *)uStack_d4,
                                         CONCAT13(cStack_d5,CONCAT21(uStack_d7,local_d8)));
                    local_108 = (uint)uStack_d4._4_4_;
                    if (local_dc != (int *)0x0) {
                      FUN_10111020(param_4,(byte *)uStack_d4,(uint)uStack_d4._4_4_);
                      FUN_10110c70(param_4,"gml",3);
                      pbVar3 = (byte *)param_4[1];
                      uVar20 = param_4[2];
                      FUN_1011d090((char *)&local_100,(int)pbVar3,uVar20,local_e0,local_dc);
                      if ((char)local_100 != -1) {
                        pvVar17 = local_100._4_4_;
                        puVar9 = (undefined1 *)local_100;
                        FUN_10110c20((SIZE_T *)&pcStack_cc,pbVar3,uVar20);
                        uStack_d4._0_4_ = puVar9;
                        uStack_d4._4_4_ = pvVar17;
                        local_d8 = '\x01';
                        *(ulonglong *)(local_118 + 0x18) = CONCAT44(puStack_bc,local_c0);
                        *(byte **)(local_118 + 0x20) = local_b8;
                        *(ulonglong *)(local_118 + 0x10) = CONCAT44(pcStack_c4,local_c8);
                        *(ulonglong *)(local_118 + 8) = CONCAT44(pcStack_cc,pvVar17);
                        *(ulonglong *)local_118 =
                             CONCAT44(puVar9,CONCAT13(cStack_d5,CONCAT21(uStack_d7,1)));
                        goto LAB_100726a6;
                      }
                      iVar11 = FUN_10110f10(pbVar3,uVar20);
                      if (iVar11 != 0) {
                        FUN_10110e70((int)param_4,extraout_EDX_01);
                      }
                    }
                    iVar11 = DAT_10163248;
                    if ((DAT_10163248 == 0) || (DAT_10163254 == 0)) goto LAB_100721ed;
                    uVar31 = FUN_1002e000((uint)DAT_10163258,DAT_1016325c,DAT_10163260,DAT_10163264,
                                          uVar5);
                    uVar20 = (uint)uVar31;
                    local_120 = 0;
                    bVar25 = (byte)((ulonglong)uVar31 >> 0x18) >> 1;
                    auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
                    auVar26 = pshuflw(auVar26,auVar26,0);
                    local_11c = DAT_1016324c;
                    goto LAB_1007215b;
                  }
                }
                auVar27[0] = -(*pcVar1 == -1);
                auVar27[1] = -(pcVar1[1] == -1);
                auVar27[2] = -(pcVar1[2] == -1);
                auVar27[3] = -(pcVar1[3] == -1);
                auVar27[4] = -(pcVar1[4] == -1);
                auVar27[5] = -(pcVar1[5] == -1);
                auVar27[6] = -(pcVar1[6] == -1);
                auVar27[7] = -(pcVar1[7] == -1);
                auVar27[8] = -(pcVar1[8] == -1);
                auVar27[9] = -(pcVar1[9] == -1);
                auVar27[10] = -(pcVar1[10] == -1);
                auVar27[0xb] = -(pcVar1[0xb] == -1);
                auVar27[0xc] = -(pcVar1[0xc] == -1);
                auVar27[0xd] = -(pcVar1[0xd] == -1);
                auVar27[0xe] = -(pcVar1[0xe] == -1);
                auVar27[0xf] = -(pcVar1[0xf] == -1);
                if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar27 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar27 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar27 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') break;
                uVar20 = uVar20 + 0x10 + local_120;
                local_120 = local_120 + 0x10;
              }
            }
            FUN_10136b20(&PTR_s_src_save_rs_10142598);
                    /* WARNING: Does not return */
            pcVar19 = (code *)invalidInstructionException();
            (*pcVar19)();
          }
          local_100 = CONCAT44(&LAB_10093d10,&local_88);
          local_88 = iVar11;
          local_84 = extraout_EDX_00;
          FUN_10092720(&local_110,&local_e4,(uint)&local_100);
        } while ((char)local_110 == -1);
        puVar7 = (undefined1 *)local_110;
        pvVar8 = local_110._4_4_;
        pcVar19 = extraout_ECX;
        uVar31 = uStack_d4;
        if (puVar9 != (undefined1 *)0x0) {
          pvVar16 = GetProcessHeap();
          HeapFree(pvVar16,0,pvVar17);
          pcVar19 = extraout_ECX_00;
          uVar31 = uStack_d4;
        }
        uStack_d4._0_4_ = puVar7;
        uStack_d4._4_4_ = pvVar8;
        cVar10 = '\0';
      }
      else {
        local_112 = cStack_d5;
        local_48 = CONCAT44(pcStack_c4,local_c8);
        local_38 = local_b8;
        local_114 = uStack_d7;
        local_40 = CONCAT44(puStack_bc,local_c0);
        pcVar19 = pcStack_cc;
        cVar10 = local_d8;
      }
      *local_118 = cVar10;
      local_118[3] = local_112;
      *(undefined2 *)(local_118 + 1) = local_114;
      *(byte **)(local_118 + 4) = (byte *)uStack_d4;
      *(code **)(local_118 + 8) = uStack_d4._4_4_;
      *(code **)(local_118 + 0xc) = pcVar19;
      *(undefined8 *)(local_118 + 0x10) = local_48;
      *(undefined8 *)(local_118 + 0x18) = local_40;
      *(byte **)(local_118 + 0x20) = local_38;
      goto LAB_1007257b;
    }
LAB_100724c9:
    FUN_10053090((undefined8 *)&local_d8,(int)local_78);
    if ((local_d8 == -1) || (local_d8 == -1)) {
      *local_118 = -1;
      uStack_d4 = CONCAT44(uStack_d4._4_4_,(byte *)uStack_d4);
    }
    else {
      *local_118 = '\0';
      *(uint *)(local_118 + 4) = CONCAT13(cStack_d5,CONCAT21(uStack_d7,local_d8));
      *(byte **)(local_118 + 8) = (byte *)uStack_d4;
      uStack_d4 = CONCAT44(uStack_d4._4_4_,(byte *)uStack_d4);
    }
LAB_1007259f:
    FUN_10005aa0(local_78);
  }
  else {
    uStack_f0 = (undefined7)(CONCAT44(pcStack_c4,local_c8) >> 8);
    local_f8 = (code *)CONCAT43(pcStack_cc,uStack_d4._5_3_);
    uStack_f4 = (undefined4)(CONCAT17(local_c8._0_1_,CONCAT43(pcStack_cc,uStack_d4._5_3_)) >> 0x20);
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(puStack_bc,local_c0);
    *(byte **)(param_1 + 0x20) = local_b8;
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_f0,local_c8._0_1_);
    *(ulonglong *)(param_1 + 1) =
         CONCAT17(uStack_d4._4_1_,CONCAT43((byte *)uStack_d4,CONCAT12(cStack_d5,uStack_d7)));
    *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_f4,local_f8);
    *param_1 = local_d8;
  }
  return;
LAB_1007215b:
  uVar20 = DAT_1016324c & uVar20;
  pcVar1 = (char *)(iVar11 + uVar20);
  auVar30[0] = -(*pcVar1 == auVar26[0]);
  auVar30[1] = -(pcVar1[1] == auVar26[1]);
  auVar30[2] = -(pcVar1[2] == auVar26[2]);
  auVar30[3] = -(pcVar1[3] == auVar26[3]);
  auVar30[4] = -(pcVar1[4] == auVar26[4]);
  auVar30[5] = -(pcVar1[5] == auVar26[5]);
  auVar30[6] = -(pcVar1[6] == auVar26[6]);
  auVar30[7] = -(pcVar1[7] == auVar26[7]);
  auVar30[8] = -(pcVar1[8] == auVar26[0]);
  auVar30[9] = -(pcVar1[9] == auVar26[1]);
  auVar30[10] = -(pcVar1[10] == auVar26[2]);
  auVar30[0xb] = -(pcVar1[0xb] == auVar26[3]);
  auVar30[0xc] = -(pcVar1[0xc] == auVar26[4]);
  auVar30[0xd] = -(pcVar1[0xd] == auVar26[5]);
  auVar30[0xe] = -(pcVar1[0xe] == auVar26[6]);
  auVar30[0xf] = -(pcVar1[0xf] == auVar26[7]);
  uVar23 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar30[0xf] >> 7) << 0xf);
  while ((short)uVar23 != 0) {
    uVar18 = uVar23 - 1 & uVar23;
    iVar6 = 0;
    for (; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
      iVar6 = iVar6 + 1;
    }
    uVar14 = iVar6 + uVar20 & DAT_1016324c;
    uVar23 = uVar18;
    if (uVar5 == *(uint *)(iVar11 + -0x28 + uVar14 * -0x28)) {
      iVar11 = iVar11 + uVar14 * -0x28;
      local_30 = *(undefined8 *)(iVar11 + -0x20);
      local_28 = *(undefined8 *)(iVar11 + -0x18);
      local_20[0] = *(undefined8 *)(iVar11 + -0x10);
      local_7c = *(undefined4 *)(iVar11 + -4);
      goto LAB_100721f1;
    }
  }
  auVar28[0] = -(*pcVar1 == -1);
  auVar28[1] = -(pcVar1[1] == -1);
  auVar28[2] = -(pcVar1[2] == -1);
  auVar28[3] = -(pcVar1[3] == -1);
  auVar28[4] = -(pcVar1[4] == -1);
  auVar28[5] = -(pcVar1[5] == -1);
  auVar28[6] = -(pcVar1[6] == -1);
  auVar28[7] = -(pcVar1[7] == -1);
  auVar28[8] = -(pcVar1[8] == -1);
  auVar28[9] = -(pcVar1[9] == -1);
  auVar28[10] = -(pcVar1[10] == -1);
  auVar28[0xb] = -(pcVar1[0xb] == -1);
  auVar28[0xc] = -(pcVar1[0xc] == -1);
  auVar28[0xd] = -(pcVar1[0xd] == -1);
  auVar28[0xe] = -(pcVar1[0xe] == -1);
  auVar28[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') goto LAB_100721ed;
  uVar20 = uVar20 + 0x10 + local_120;
  local_120 = local_120 + 0x10;
  goto LAB_1007215b;
LAB_100721ed:
  local_20[0] = 0;
  local_30 = 0x3ff0000000000000;
  local_28 = 0x3ff0000000000000;
  local_7c = 0xffffffff;
LAB_100721f1:
  uVar20 = *(uint *)((int)param_2 + 8);
  if (((int)uVar20 < 0) || (_DAT_0077f0e0 <= uVar20)) {
    local_f8 = (code *)0x0;
    local_100 = 0x100000000;
  }
  else {
    iVar11 = _DAT_0077f0d8;
    if (_DAT_0077f0d8 == 0) {
      iVar11 = 4;
    }
    puVar21 = *(ushort **)(iVar11 + uVar20 * 4);
    if (puVar21 == (ushort *)0x0) {
      puVar21 = (ushort *)0x2;
      SVar15 = 0;
    }
    else {
      SVar15 = *(SIZE_T *)(puVar21 + -2);
    }
    FUN_10093310((undefined8 *)&local_d8,puVar21,SVar15);
    pbVar3 = (byte *)uStack_d4;
    if ((char)pcStack_cc != '\x01') {
      if (uStack_d4._4_4_ == (code *)0x0) {
        uStack_d4._4_4_ = (code *)0x0;
      }
      else {
        pbVar2 = (byte *)uStack_d4 + (int)uStack_d4._4_4_;
        pbVar24 = (byte *)uStack_d4;
        do {
          bVar25 = *pbVar24;
          pbVar22 = pbVar24 + 1;
          if ((char)bVar25 < '\0') {
            if (bVar25 < 0xe0) {
              if (pbVar22 != pbVar2) {
                pbVar22 = pbVar24 + 2;
              }
            }
            else if (bVar25 == 0xed) {
              if ((pbVar22 == pbVar2) || (pbVar24 + 2 == pbVar2)) break;
              if (0x9f < pbVar24[1]) {
                iVar11 = CONCAT13(cStack_d5,CONCAT21(uStack_d7,local_d8));
                pcVar19 = pcStack_cc;
                if (iVar11 == -1) goto joined_r0x10072346;
                if (iVar11 != 0) {
                  pvVar16 = GetProcessHeap();
                  HeapFree(pvVar16,0,pbVar3);
                }
                goto LAB_1007234a;
              }
              pbVar22 = pbVar24 + 3;
            }
            else {
              pbVar24 = pbVar24 + 2;
              if (pbVar22 == pbVar2) {
                pbVar24 = pbVar22;
              }
              pbVar22 = pbVar24 + (pbVar24 != pbVar2);
              if (0xef < bVar25) {
                pbVar22 = pbVar22 + (pbVar22 != pbVar2);
              }
            }
          }
          pbVar24 = pbVar22;
        } while (pbVar22 != pbVar2);
      }
    }
    pcVar19 = uStack_d4._4_4_;
    uStack_d4 = CONCAT44((byte *)uStack_d4,CONCAT13(cStack_d5,CONCAT21(uStack_d7,local_d8)));
joined_r0x10072346:
    local_f8 = pcVar19;
    local_100 = uStack_d4;
    if ((int)uStack_d4 == -1) {
LAB_1007234a:
      local_f8 = (code *)0x0;
      local_100 = 0x100000000;
    }
  }
  local_122 = *(byte *)((int)param_2 + 0x14);
  local_121 = local_dc != (int *)0x0;
  local_c8 = (byte *)((int)param_2 + 4);
  local_d8 = '\0';
  uStack_d7 = (undefined2)((uint)&local_100 >> 8);
  cStack_d5 = (char)((uint)&local_100 >> 0x18);
  local_c0 = &local_110;
  uStack_d4._0_4_ = &LAB_100922c0;
  pcStack_cc = FUN_1009c910;
  pcStack_c4 = FUN_1009c910;
  local_b8 = &local_122;
  local_b0 = &local_30;
  puStack_bc = &LAB_100922c0;
  local_b4 = &LAB_10097da0;
  local_a8 = &local_28;
  local_a0 = &local_7c;
  local_ac = &LAB_1009c8d0;
  local_a4 = &LAB_1009c8d0;
  local_98 = local_20;
  local_90 = &local_121;
  local_9c = &LAB_10096fc0;
  local_94 = &LAB_1009c8d0;
  local_8c = &LAB_10097da0;
  uStack_d4._4_4_ = param_2;
  FUN_10092aa0((undefined8 *)&local_88,local_78,(ushort *)&DAT_101425b0,(uint)&local_d8);
  pvVar17 = local_100._4_4_;
  if ((char)local_88 != -1) {
    *local_118 = '\0';
    *(undefined4 *)(local_118 + 8) = local_84;
    *(int *)(local_118 + 4) = local_88;
    if ((undefined1 *)local_100 != (undefined1 *)0x0) {
      pvVar16 = GetProcessHeap();
      HeapFree(pvVar16,0,pvVar17);
    }
LAB_100726a6:
    uVar31 = CONCAT44(uStack_d4._4_4_,(byte *)uStack_d4);
    if ((undefined1 *)local_110 != (undefined1 *)0x0) {
      pvVar17 = local_110._4_4_;
      pvVar16 = GetProcessHeap();
      HeapFree(pvVar16,0,pvVar17);
      uVar31 = CONCAT44(uStack_d4._4_4_,(byte *)uStack_d4);
    }
LAB_1007257b:
    piVar13 = local_e0;
    uStack_d4 = uVar31;
    if (local_e4 != 0) {
      pvVar16 = GetProcessHeap();
      HeapFree(pvVar16,0,piVar13);
    }
    goto LAB_1007259f;
  }
  if ((undefined1 *)local_100 != (undefined1 *)0x0) {
    pvVar16 = GetProcessHeap();
    HeapFree(pvVar16,0,pvVar17);
  }
  if ((undefined1 *)local_110 != (undefined1 *)0x0) {
    pvVar17 = local_110._4_4_;
    pvVar16 = GetProcessHeap();
    HeapFree(pvVar16,0,pvVar17);
  }
  piVar13 = local_e0;
  if (local_e4 != 0) {
    pvVar16 = GetProcessHeap();
    HeapFree(pvVar16,0,piVar13);
  }
  pvVar17 = local_60;
  param_2 = local_80;
  if (local_80 == local_60) goto LAB_100724c9;
  goto LAB_10071e35;
}
