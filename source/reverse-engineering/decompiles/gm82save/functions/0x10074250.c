// rea decompile_all
// name: FUN_10074250
// address: 0x10074250
// body: available
// range: 0x10074250-0x10074834 inclusive
// range: 0x10074840-0x1007493b inclusive
// range: 0x10074940-0x100749f9 inclusive
// range: 0x10074a00-0x100753dd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10074250(char *param_1,uint *param_2,char param_3)

{
  double *pdVar1;
  byte *pbVar2;
  SIZE_T SVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined3 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined6 uVar10;
  undefined7 uVar11;
  undefined1 uVar12;
  undefined3 uVar13;
  undefined2 uVar14;
  LPVOID pvVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  HANDLE pvVar20;
  SIZE_T SVar21;
  char cVar22;
  int *piVar23;
  int *piVar24;
  uint extraout_EDX;
  uint extraout_EDX_00;
  ushort *puVar25;
  uint extraout_EDX_01;
  undefined1 (*pauVar26) [16];
  int *piVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined1 (*pauVar30) [16];
  uint uVar31;
  byte bVar32;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  ulonglong uVar37;
  undefined8 uVar38;
  byte *local_14c;
  char local_140;
  undefined2 uStack_13f;
  int iStack_13d;
  undefined4 uStack_139;
  int *piStack_135;
  undefined1 auStack_131 [4];
  undefined4 uStack_12d;
  undefined1 uStack_129;
  uint uStack_128;
  uint uStack_124;
  byte *local_11c;
  undefined8 local_118;
  int *local_110;
  undefined8 local_108;
  int *local_100;
  int *local_f8;
  int local_f4;
  uint *local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  char local_d8;
  undefined2 uStack_d7;
  int iStack_d5;
  int *piStack_d1;
  int *piStack_cd;
  undefined1 uStack_c9;
  undefined4 local_c8;
  undefined1 local_c0 [4];
  undefined3 uStack_bc;
  char cStack_b9;
  char local_b8;
  undefined2 uStack_b7;
  undefined1 auStack_b5 [4];
  undefined1 uStack_b1;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  int *local_68;
  undefined4 *local_64;
  int *local_60;
  int local_5c;
  int *local_58;
  uint local_54;
  int *local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 auVar33 [16];

  FUN_10111020(param_2,&DAT_10140297,9);
  FUN_10111020(param_2,(byte *)"include",7);
  pbVar2 = (byte *)param_2[1];
  piVar27 = (int *)param_2[2];
  FUN_101126e0(local_c0,pbVar2,piVar27);
  if (local_c0[0] == -1) {
    iVar16 = FUN_10110f10(pbVar2,(uint)piVar27);
    if (iVar16 != 0) {
      FUN_10110e70((int)param_2,extraout_EDX);
    }
    piVar27 = _DAT_0077f428;
    piVar24 = (int *)&DAT_00000004;
    if (_DAT_0077f420 != (int *)0x0) {
      piVar24 = _DAT_0077f420;
    }
    if ((int)_DAT_0077f428 < 0) {
      FUN_101367b0();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (_DAT_0077f428 == (int *)0x0) {
      pvVar15 = (LPVOID)0x1;
    }
    else {
      pvVar15 = FUN_10107380(0,(SIZE_T)_DAT_0077f428);
      if (pvVar15 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
    local_118 = CONCAT44(pvVar15,piVar27);
    local_110 = (int *)0x0;
    puVar17 = FUN_10093010();
    if (puVar17 == (uint *)0x0) {
      FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    local_f0 = (uint *)*puVar17;
    uStack_ec = puVar17[1];
    uStack_e8 = puVar17[2];
    uStack_e4 = puVar17[3];
    puVar17[1] = puVar17[1] + (uint)(0xfffffffe < local_f0);
    *puVar17 = (int)local_f0 + 1;
    FUN_10003280((undefined8 *)local_c0,0xc,(uint)piVar27);
    local_60 = piVar27;
    piStack_135 = (int *)auStack_b5;
    local_140 = local_c0[0];
    uStack_13f = local_c0._1_2_;
    iStack_13d = stack0xffffff43;
    uStack_139 = CONCAT31(CONCAT21(uStack_b7,local_b8),cStack_b9);
    auStack_131._1_3_ = SUB43(local_f0,0);
    auStack_131[0] = uStack_b1;
    uStack_12d = (undefined4)(CONCAT44(uStack_ec,local_f0) >> 0x18);
    uStack_129 = (undefined1)(uStack_ec >> 0x18);
    uStack_128 = uStack_e8;
    uStack_124 = uStack_e4;
    local_f0 = param_2;
    local_58 = piVar24;
    if (piVar27 != (int *)0x0) {
      local_68 = piVar24 + (int)piVar27;
LAB_10074401:
      local_11c = (byte *)*piVar24;
      FUN_10049460(local_c0,*(ushort **)(local_11c + 4));
      if (local_c0[0] == -1) {
        local_100 = (int *)CONCAT13(uStack_b1,auStack_b5._1_3_);
        iStack_d5 = CONCAT13(cStack_b9,uStack_bc);
        local_c0[0] = (char)&local_108;
        local_c0._1_2_ = (undefined2)((uint)&local_108 >> 8);
        stack0xffffff43 = CONCAT31(0x922c0,(char)((uint)&local_108 >> 0x18));
        cStack_b9 = '\x10';
        piStack_d1 = (int *)(CONCAT17(auStack_b5[0],CONCAT25(uStack_b7,CONCAT14(local_b8,iStack_d5))
                                     ) >> 0x20);
        local_108 = CONCAT44(piStack_d1,iStack_d5);
        piStack_cd = local_100;
        FUN_10092720((undefined8 *)&local_d8,(uint *)&local_118,(uint)local_c0);
        piVar27 = local_100;
        puVar17 = local_108._4_4_;
        if (local_d8 == -1) {
          uVar37 = FUN_10072df0((byte *)local_108._4_4_,(uint)local_100);
          iVar16 = (int)local_108;
          if ((uVar37 & 1) == 0) {
            uVar38 = FUN_1002dd50(CONCAT13((undefined1)uStack_12d,auStack_131._1_3_),
                                  CONCAT13(uStack_129,uStack_12d._1_3_),uStack_128,uStack_124,
                                  puVar17,(uint)piVar27);
            if (CONCAT13(piStack_135._0_1_,uStack_139._1_3_) == 0) {
              FUN_101333e0((undefined4 *)&local_140,(uint *)(auStack_131 + 1));
            }
            uVar18 = CONCAT13((undefined1)uStack_139,iStack_13d._1_3_);
            pauVar30 = (undefined1 (*) [16])
                       CONCAT13((char)iStack_13d,CONCAT21(uStack_13f,local_140));
            local_f8 = piVar27;
            local_f4 = 0;
            local_5c = 0;
            piVar24 = piVar24 + 1;
            uVar28 = uVar18 & (uint)uVar38;
            local_64 = (undefined4 *)((uint)uVar38 >> 0x19);
            bVar32 = (byte)((ulonglong)uVar38 >> 0x18) >> 1;
            auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
            auVar34 = pshuflw(auVar33,auVar33,0);
            auVar33._0_8_ = auVar34._0_8_;
            auVar33._8_4_ = auVar34._0_4_;
            auVar33._12_4_ = auVar34._4_4_;
            do {
              auVar34 = *(undefined1 (*) [16])(*pauVar30 + uVar28);
              auVar35[0] = -(auVar34[0] == auVar33[0]);
              auVar35[1] = -(auVar34[1] == auVar33[1]);
              auVar35[2] = -(auVar34[2] == auVar33[2]);
              auVar35[3] = -(auVar34[3] == auVar33[3]);
              auVar35[4] = -(auVar34[4] == auVar33[4]);
              auVar35[5] = -(auVar34[5] == auVar33[5]);
              auVar35[6] = -(auVar34[6] == auVar33[6]);
              auVar35[7] = -(auVar34[7] == auVar33[7]);
              auVar35[8] = -(auVar34[8] == auVar33[8]);
              auVar35[9] = -(auVar34[9] == auVar33[9]);
              auVar35[10] = -(auVar34[10] == auVar33[10]);
              auVar35[0xb] = -(auVar34[0xb] == auVar33[0xb]);
              auVar35[0xc] = -(auVar34[0xc] == auVar33[0xc]);
              auVar35[0xd] = -(auVar34[0xd] == auVar33[0xd]);
              auVar35[0xe] = -(auVar34[0xe] == auVar33[0xe]);
              auVar35[0xf] = -(auVar34[0xf] == auVar33[0xf]);
              uVar31 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(auVar35[0xf] >> 7) << 0xf);
              if (uVar31 != 0) {
                do {
                  local_30 = auVar33;
                  local_40 = auVar34;
                  local_50 = piVar24;
                  local_54 = uVar18;
                  iVar19 = 0;
                  for (uVar18 = uVar31; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
                    iVar19 = iVar19 + 1;
                  }
                  uVar18 = iVar19 + uVar28 & local_54;
                  if ((local_f8 == *(int **)((int)pauVar30 + uVar18 * -0xc + -4)) &&
                     (iVar19 = memcmp(puVar17,*(void **)((int)pauVar30 + uVar18 * -0xc + -8),
                                      (size_t)local_f8), iVar19 == 0)) {
                    if (iVar16 != 0) {
                      pvVar20 = GetProcessHeap();
                      HeapFree(pvVar20,0,puVar17);
                    }
                    puVar29 = (undefined8 *)local_c0;
                    FUN_10049460((undefined1 *)puVar29,*(ushort **)(local_11c + 4));
                    if (local_c0[0] == -1) {
                      uVar38 = CONCAT17(auStack_b5[0],
                                        CONCAT25(uStack_b7,
                                                 CONCAT14(local_b8,CONCAT13(cStack_b9,uStack_bc))));
                      piStack_cd = (int *)CONCAT13(uStack_b1,auStack_b5._1_3_);
                      cVar22 = '\r';
                      iStack_d5 = CONCAT13(cStack_b9,uStack_bc);
                      piStack_d1 = (int *)((ulonglong)uVar38 >> 0x20);
                      cStack_b9 = local_b8;
                      local_b8 = (char)uStack_b7;
                      uStack_b7 = (undefined2)((ulonglong)uVar38 >> 0x30);
                      unique0x10001259 = iStack_d5;
                      auStack_b5 = (undefined1  [4])CONCAT13(uStack_b1,auStack_b5._1_3_);
                    }
                    else {
                      uVar11 = CONCAT43(auStack_b5,CONCAT21(uStack_b7,local_b8));
                      puVar29 = (undefined8 *)&local_d8;
                      piStack_cd = (int *)(CONCAT17(uStack_b1,uVar11) >> 0x20);
                      local_d8 = (char)local_c0._1_2_;
                      uStack_d7 = (undefined2)(CONCAT42(stack0xffffff43,local_c0._1_2_) >> 8);
                      iStack_d5 = (int)(CONCAT16(cStack_b9,CONCAT42(stack0xffffff43,local_c0._1_2_))
                                       >> 0x18);
                      piStack_d1._1_3_ = (undefined3)((uint7)uVar11 >> 8);
                      piStack_d1 = (int *)CONCAT31(piStack_d1._1_3_,local_b8);
                      *(undefined4 *)(param_1 + 0x20) = local_a0;
                      *(undefined8 *)(param_1 + 0x18) = local_a8;
                      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_ac,local_b0);
                      cVar22 = local_c0[0];
                    }
                    uVar38 = *puVar29;
                    *(undefined8 *)(param_1 + 8) = *(undefined8 *)((int)puVar29 + 7);
                    *(undefined8 *)(param_1 + 1) = uVar38;
                    *param_1 = cVar22;
                    goto LAB_10074806;
                  }
                  uVar31 = uVar31 - 1 & uVar31;
                  uVar18 = local_54;
                  piVar24 = local_50;
                  auVar33 = local_30;
                  auVar34 = local_40;
                } while ((short)uVar31 != 0);
              }
              if (local_f4 == 1) {
LAB_100745c7:
                auVar36[0] = -(auVar34[0] == -1);
                auVar36[1] = -(auVar34[1] == -1);
                auVar36[2] = -(auVar34[2] == -1);
                auVar36[3] = -(auVar34[3] == -1);
                auVar36[4] = -(auVar34[4] == -1);
                auVar36[5] = -(auVar34[5] == -1);
                auVar36[6] = -(auVar34[6] == -1);
                auVar36[7] = -(auVar34[7] == -1);
                auVar36[8] = -(auVar34[8] == -1);
                auVar36[9] = -(auVar34[9] == -1);
                auVar36[10] = -(auVar34[10] == -1);
                auVar36[0xb] = -(auVar34[0xb] == -1);
                auVar36[0xc] = -(auVar34[0xc] == -1);
                auVar36[0xd] = -(auVar34[0xd] == -1);
                auVar36[0xe] = -(auVar34[0xe] == -1);
                auVar36[0xf] = -(auVar34[0xf] == 0xff);
                if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') goto LAB_10074607;
                local_f4 = 1;
              }
              else {
                uVar31 = (uint)(ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar34[0xf] >> 7) << 0xf);
                if (uVar31 != 0) {
                  iVar19 = 0;
                  for (; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
                    iVar19 = iVar19 + 1;
                  }
                  local_4c = iVar19 + uVar28 & uVar18;
                  goto LAB_100745c7;
                }
                local_f4 = 0;
              }
              iVar19 = local_5c + 0x10;
              local_5c = local_5c + 0x10;
              uVar28 = iVar19 + uVar28 & uVar18;
            } while( true );
          }
          auStack_b5 = (undefined1  [4])local_100;
          cStack_b9 = (char)((ulonglong)local_108 >> 0x20);
          local_b8 = (char)((ulonglong)local_108 >> 0x28);
          uStack_b7 = (undefined2)((ulonglong)local_108 >> 0x30);
          *param_1 = '\x10';
          *(ulonglong *)(param_1 + 1) =
               CONCAT17(cStack_b9,CONCAT43((int)local_108,CONCAT21(local_c0._1_2_,local_c0[0])));
          *(ulonglong *)(param_1 + 8) = CONCAT44(local_100,(int)((ulonglong)local_108 >> 0x20));
          *(uint *)(param_1 + 0x10) = (uint)(uVar37 >> 0x20) & 0xff;
          unique0x10001255 = (int)local_108;
        }
        else {
          *param_1 = '\0';
          *(uint *)(param_1 + 8) = CONCAT13(piStack_d1._0_1_,iStack_d5._1_3_);
          *(uint *)(param_1 + 4) = CONCAT13((undefined1)iStack_d5,CONCAT21(uStack_d7,local_d8));
          if ((int)local_108 != 0) {
            pvVar20 = GetProcessHeap();
            HeapFree(pvVar20,0,puVar17);
          }
        }
      }
      else {
        uVar11 = CONCAT43(auStack_b5,CONCAT21(uStack_b7,local_b8));
        uVar10 = CONCAT42(stack0xffffff43,local_c0._1_2_);
        piStack_cd = (int *)(CONCAT17(uStack_b1,uVar11) >> 0x20);
        local_d8 = (char)local_c0._1_2_;
        uStack_d7 = (undefined2)((uint6)uVar10 >> 8);
        iStack_d5 = (int)(CONCAT16(cStack_b9,uVar10) >> 0x18);
        piStack_d1._1_3_ = (undefined3)((uint7)uVar11 >> 8);
        piStack_d1 = (int *)CONCAT31(piStack_d1._1_3_,local_b8);
        *(undefined8 *)(param_1 + 0x18) = local_a8;
        *(undefined4 *)(param_1 + 0x20) = local_a0;
        *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_ac,local_b0);
        *(ulonglong *)(param_1 + 8) = CONCAT44(piStack_cd,piStack_d1);
        *(ulonglong *)(param_1 + 1) = CONCAT17(local_b8,CONCAT43(iStack_d5,(int3)uVar10));
        *param_1 = local_c0[0];
      }
LAB_10074806:
      iVar16 = CONCAT13((undefined1)uStack_139,iStack_13d._1_3_);
      if (iVar16 != 0) {
        iVar19 = CONCAT13(auStack_131[0],piStack_135._1_3_);
        if (iVar19 != 0) {
          pauVar26 = (undefined1 (*) [16])CONCAT13((char)iStack_13d,CONCAT21(uStack_13f,local_140));
          auVar33 = *pauVar26;
          pauVar30 = pauVar26 + 1;
          uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
          do {
            if ((short)uVar18 == 0) {
              do {
                auVar33 = *pauVar30;
                pauVar26 = pauVar26 + -0xc;
                pauVar30 = pauVar30 + 1;
                uVar18 = (ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar18 == 0);
            }
            iVar6 = 0;
            for (uVar28 = uVar18; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            if (*(int *)((int)pauVar26 + iVar6 * -0xc + -0xc) != 0) {
              local_f0 = *(uint **)((int)pauVar26 + iVar6 * -0xc + -8);
              pvVar20 = GetProcessHeap();
              HeapFree(pvVar20,0,local_f0);
            }
            uVar18 = uVar18 - 1 & uVar18;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
        uVar18 = iVar16 * 0xc + 0x1bU & 0xfffffff0;
        if (iVar16 + uVar18 != -0x11) {
          pvVar15 = *(LPVOID *)
                     ((CONCAT13((char)iStack_13d,CONCAT21(uStack_13f,local_140)) - uVar18) + -4);
          pvVar20 = GetProcessHeap();
          HeapFree(pvVar20,0,pvVar15);
        }
      }
      if ((uint)local_118 == 0) {
        return;
      }
      local_14c = local_118._4_4_;
      goto LAB_100748e0;
    }
LAB_10074725:
    puVar17 = local_f0;
    FUN_10111020(local_f0,&DAT_1013f4f5,9);
    pbVar2 = (byte *)puVar17[1];
    SVar3 = puVar17[2];
    piVar27 = (int *)local_118._4_4_;
    uVar18 = (uint)local_118;
    FUN_1011d090(local_c0,(int)pbVar2,SVar3,(int *)local_118._4_4_,local_110);
    if (uVar18 != 0) {
      pvVar20 = GetProcessHeap();
      HeapFree(pvVar20,0,piVar27);
    }
    if (local_c0[0] == -1) {
      iVar16 = FUN_10110f10(pbVar2,SVar3);
      if (iVar16 != 0) {
        FUN_10110e70((int)local_f0,extraout_EDX_00);
      }
      iVar16 = CONCAT13((undefined1)uStack_139,iStack_13d._1_3_);
      if (iVar16 != 0) {
        iVar19 = CONCAT13(auStack_131[0],piStack_135._1_3_);
        if (iVar19 != 0) {
          pauVar26 = (undefined1 (*) [16])CONCAT13((char)iStack_13d,CONCAT21(uStack_13f,local_140));
          auVar33 = *pauVar26;
          pauVar30 = pauVar26 + 1;
          uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
          do {
            if ((short)uVar18 == 0) {
              do {
                auVar33 = *pauVar30;
                pauVar26 = pauVar26 + -0xc;
                pauVar30 = pauVar30 + 1;
                uVar18 = (ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar18 == 0);
            }
            iVar6 = 0;
            for (uVar28 = uVar18; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            if (*(int *)((int)pauVar26 + iVar6 * -0xc + -0xc) != 0) {
              local_f8 = *(int **)((int)pauVar26 + iVar6 * -0xc + -8);
              pvVar20 = GetProcessHeap();
              HeapFree(pvVar20,0,local_f8);
            }
            uVar18 = uVar18 - 1 & uVar18;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
        uVar18 = iVar16 * 0xc + 0x1bU & 0xfffffff0;
        if (iVar16 + uVar18 != -0x11) {
          pvVar15 = *(LPVOID *)
                     ((CONCAT13((char)iStack_13d,CONCAT21(uStack_13f,local_140)) - uVar18) + -4);
          pvVar20 = GetProcessHeap();
          HeapFree(pvVar20,0,pvVar15);
        }
      }
      local_f4 = 8;
      if (_DAT_0077f424 != 0) {
        local_f4 = _DAT_0077f424;
      }
      piVar27 = local_60;
      if (_DAT_0077f428 < local_60) {
        piVar27 = _DAT_0077f428;
      }
      puVar17 = local_f0;
      if (piVar27 != (int *)0x0) {
        piVar23 = (int *)0x0;
        piVar24 = local_58;
        local_60 = piVar27;
        do {
          if ((param_3 == '\0') ||
             (pdVar1 = (double *)(local_f4 + (int)piVar23 * 8),
             DAT_10163290 < *pdVar1 || DAT_10163290 == *pdVar1)) {
            iVar16 = piVar24[(int)piVar23];
            local_f8 = piVar23;
            FUN_10049460(local_c0,*(ushort **)(iVar16 + 4));
            puVar17 = local_f0;
            if (local_c0[0] != -1) {
              uVar11 = CONCAT43(auStack_b5,CONCAT21(uStack_b7,local_b8));
              piStack_135 = (int *)(CONCAT17(uStack_b1,uVar11) >> 0x20);
              iStack_13d = (int)(CONCAT16(cStack_b9,CONCAT42(stack0xffffff43,local_c0._1_2_)) >>
                                0x18);
              uStack_139._1_3_ = (undefined3)((uint7)uVar11 >> 8);
              uStack_139 = CONCAT31(uStack_139._1_3_,local_b8);
              *(undefined8 *)(param_1 + 0x18) = local_a8;
              *(undefined4 *)(param_1 + 0x20) = local_a0;
              *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_ac,local_b0);
              *(ulonglong *)(param_1 + 8) = CONCAT44(piStack_135,uStack_139);
              *(ulonglong *)(param_1 + 1) =
                   CONCAT17(local_b8,CONCAT43(iStack_13d,
                                              (int3)CONCAT42(stack0xffffff43,local_c0._1_2_)));
              *param_1 = local_c0[0];
              return;
            }
            piVar27 = (int *)CONCAT13(uStack_b1,auStack_b5._1_3_);
            iStack_13d = CONCAT13(cStack_b9,uStack_bc);
            uStack_139 = (undefined4)
                         (CONCAT17(auStack_b5[0],CONCAT25(uStack_b7,CONCAT14(local_b8,iStack_13d)))
                         >> 0x20);
            local_118 = CONCAT44(uStack_139,iStack_13d);
            piStack_135 = piVar27;
            local_110 = piVar27;
            if (*(char *)(iVar16 + 0xc) == '\0') {
LAB_10074ce5:
              if ((uint)local_118 - (int)piVar27 < 4) {
                FUN_101359e0((uint *)&local_118,(uint)piVar27,4,(LPVOID)0x1,1);
                piVar27 = local_110;
              }
              puVar17 = local_f0;
              local_14c = local_118._4_4_;
              pbVar2 = local_118._4_4_ + (int)piVar27;
              pbVar2[0] = 0x2e;
              pbVar2[1] = 0x74;
              pbVar2[2] = 0x78;
              pbVar2[3] = 0x74;
              local_110 = piVar27 + 1;
              FUN_10111020(local_f0,local_118._4_4_,(uint)local_110);
              pbVar2 = (byte *)puVar17[1];
              SVar3 = puVar17[2];
              FUN_100759c0(local_c0,pbVar2,SVar3);
              if (local_c0[0] != -1) {
                uVar10 = CONCAT42(stack0xffffff43,local_c0._1_2_);
                uStack_12d = uStack_ac;
                uStack_139._1_3_ = (undefined3)CONCAT42(auStack_b5,uStack_b7);
                piStack_135 = (int *)(CONCAT16(uStack_b1,CONCAT42(auStack_b5,uStack_b7)) >> 0x18);
                auStack_131 = (undefined1  [4])local_b0;
                local_140 = (char)local_c0._1_2_;
                uStack_13f = (undefined2)((uint6)uVar10 >> 8);
                iStack_13d = (int)(CONCAT16(cStack_b9,uVar10) >> 0x18);
                uStack_139 = CONCAT31(uStack_139._1_3_,local_b8);
                *(undefined8 *)(param_1 + 0x18) = local_a8;
                *(undefined4 *)(param_1 + 0x20) = local_a0;
                *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_ac,local_b0);
                *(ulonglong *)(param_1 + 1) = CONCAT17(local_b8,CONCAT43(iStack_13d,(int3)uVar10));
                *(ulonglong *)(param_1 + 9) =
                     CONCAT17((undefined1)local_b0,CONCAT43(piStack_135,uStack_139._1_3_));
                *param_1 = local_c0[0];
                goto LAB_100753b0;
              }
              iStack_13d = CONCAT13(cStack_b9,uStack_bc);
              piStack_135 = (int *)CONCAT13(uStack_b1,auStack_b5._1_3_);
              uStack_12d = uStack_ac;
              auStack_131 = (undefined1  [4])local_b0;
              uStack_139 = (undefined4)
                           (CONCAT17(auStack_b5[0],CONCAT25(uStack_b7,CONCAT14(local_b8,iStack_13d))
                                    ) >> 0x20);
              local_d8 = (char)((uint)stack0xffffff43 >> 8);
              uStack_d7 = (undefined2)((uint)stack0xffffff43 >> 0x10);
              iStack_d5 = (int)(CONCAT44(uStack_139,iStack_13d) >> 0x18);
              piStack_d1 = (int *)auStack_b5;
              piStack_cd = (int *)(CONCAT44(local_b0,piStack_135) >> 0x18);
              uStack_c9 = (undefined1)((uint)local_b0 >> 0x18);
              local_c8 = uStack_ac;
              local_c0[0] = (char)&local_108;
              cVar22 = local_c0[0];
              local_c0._1_2_ = (undefined2)((uint)&local_108 >> 8);
              uVar14 = local_c0._1_2_;
              uVar12 = (undefined1)((uint)&local_108 >> 0x18);
              stack0xffffff43 = CONCAT31(0x97da0,uVar12);
              cStack_b9 = '\x10';
              local_108 = CONCAT71(local_108._1_7_,*(undefined1 *)(iVar16 + 0x14));
              local_11c = pbVar2;
              FUN_10092aa0((undefined8 *)&local_140,(int *)&local_d8,(ushort *)&DAT_10142748,
                           (uint)local_c0);
              if (local_140 == -1) {
                stack0xffffff43 = CONCAT31(0x97da0,uVar12);
                cStack_b9 = '\x10';
                local_108 = CONCAT71(local_108._1_7_,*(undefined1 *)(iVar16 + 0x25));
                local_c0[0] = cVar22;
                local_c0._1_2_ = uVar14;
                FUN_10092aa0((undefined8 *)&local_140,(int *)&local_d8,(ushort *)&DAT_10142753,
                             (uint)local_c0);
                if (local_140 != -1) goto LAB_10075036;
                stack0xffffff43 = CONCAT31(0x97da0,uVar12);
                cStack_b9 = '\x10';
                local_108 = CONCAT71(local_108._1_7_,*(undefined1 *)(iVar16 + 0x24));
                local_c0[0] = cVar22;
                local_c0._1_2_ = uVar14;
                FUN_10092aa0((undefined8 *)&local_140,(int *)&local_d8,(ushort *)&DAT_1014275d,
                             (uint)local_c0);
                if (local_140 != -1) goto LAB_10075036;
                stack0xffffff43 = CONCAT31(0x97da0,uVar12);
                cStack_b9 = '\x10';
                local_108 = CONCAT71(local_108._1_7_,*(undefined1 *)(iVar16 + 0x26));
                local_c0[0] = cVar22;
                local_c0._1_2_ = uVar14;
                FUN_10092aa0((undefined8 *)&local_140,(int *)&local_d8,(ushort *)&DAT_1014276c,
                             (uint)local_c0);
                if (local_140 != -1) goto LAB_10075036;
                piVar27 = (int *)(iVar16 + 0x1c);
                local_c0[0] = (char)piVar27;
                local_c0._1_2_ = (undefined2)((uint)piVar27 >> 8);
                stack0xffffff43 = CONCAT31(0x96fc0,(char)((uint)piVar27 >> 0x18));
                cStack_b9 = '\x10';
                FUN_10092aa0((undefined8 *)&local_140,(int *)&local_d8,(ushort *)&DAT_10142778,
                             (uint)local_c0);
                if (local_140 != -1) goto LAB_10075036;
                if (*piVar27 != 3) {
LAB_10074f85:
                  FUN_10053090((undefined8 *)local_c0,(int)&local_d8);
                  puVar17 = local_f0;
                  if (local_c0[0] != -1) {
                    if (local_c0[0] != -1) {
                      *param_1 = '\0';
                      *(uint *)(param_1 + 4) =
                           CONCAT13(local_c0[3],CONCAT21(local_c0._1_2_,local_c0[0]));
                      *(uint *)(param_1 + 8) = CONCAT13(cStack_b9,uStack_bc);
                      goto LAB_1007504b;
                    }
                  }
                  iVar16 = FUN_10110f10(local_11c,SVar3);
                  if (iVar16 != 0) {
                    FUN_10110e70((int)puVar17,extraout_EDX_01);
                  }
                  FUN_10005aa0((int *)&local_d8);
                  piVar24 = local_58;
                  piVar27 = local_60;
                  piVar23 = local_f8;
                  if ((uint)local_118 != 0) {
                    pvVar20 = GetProcessHeap();
                    HeapFree(pvVar20,0,local_14c);
                    piVar23 = local_f8;
                  }
                  goto LAB_10074ffb;
                }
                FUN_10049460(local_c0,*(ushort **)(iVar16 + 0x20));
                if (local_c0[0] == -1) {
                  piStack_135 = (int *)CONCAT13(uStack_b1,auStack_b5._1_3_);
                  iStack_13d = CONCAT13(cStack_b9,uStack_bc);
                  local_c0[0] = (char)&local_108;
                  local_c0._1_2_ = (undefined2)((uint)&local_108 >> 8);
                  stack0xffffff43 = CONCAT31(0x922c0,(char)((uint)&local_108 >> 0x18));
                  cStack_b9 = '\x10';
                  uStack_139 = (undefined4)
                               (CONCAT17(auStack_b5[0],
                                         CONCAT25(uStack_b7,CONCAT14(local_b8,iStack_13d))) >> 0x20)
                  ;
                  local_108 = CONCAT44(uStack_139,iStack_13d);
                  local_100 = piStack_135;
                  FUN_10092aa0((undefined8 *)&local_48,(int *)&local_d8,(ushort *)&DAT_10142784,
                               (uint)local_c0);
                  pvVar15 = local_108._4_4_;
                  if ((char)local_48 == -1) {
                    if ((int)local_108 != 0) {
                      pvVar20 = GetProcessHeap();
                      HeapFree(pvVar20,0,pvVar15);
                    }
                    goto LAB_10074f85;
                  }
                  *param_1 = '\0';
                  *(undefined4 *)(param_1 + 8) = local_44;
                  *(undefined4 *)(param_1 + 4) = local_48;
                  if ((int)local_108 != 0) {
                    pvVar20 = GetProcessHeap();
                    HeapFree(pvVar20,0,pvVar15);
                  }
                }
                else {
                  uVar11 = CONCAT43(auStack_b5,CONCAT21(uStack_b7,local_b8));
                  uVar10 = CONCAT42(stack0xffffff43,local_c0._1_2_);
                  piStack_135 = (int *)(CONCAT17(uStack_b1,uVar11) >> 0x20);
                  local_140 = (char)local_c0._1_2_;
                  uStack_13f = (undefined2)((uint6)uVar10 >> 8);
                  iStack_13d = (int)(CONCAT16(cStack_b9,uVar10) >> 0x18);
                  uStack_139._1_3_ = (undefined3)((uint7)uVar11 >> 8);
                  uStack_139 = CONCAT31(uStack_139._1_3_,local_b8);
                  *(undefined8 *)(param_1 + 0x18) = local_a8;
                  *(undefined4 *)(param_1 + 0x20) = local_a0;
                  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_ac,local_b0);
                  *(ulonglong *)(param_1 + 8) = CONCAT44(piStack_135,uStack_139);
                  *(ulonglong *)(param_1 + 1) = CONCAT17(local_b8,CONCAT43(iStack_13d,(int3)uVar10))
                  ;
                  *param_1 = local_c0[0];
                }
              }
              else {
LAB_10075036:
                *param_1 = '\0';
                *(uint *)(param_1 + 8) = CONCAT13((undefined1)uStack_139,iStack_13d._1_3_);
                *(uint *)(param_1 + 4) = CONCAT13((char)iStack_13d,CONCAT21(uStack_13f,local_140));
              }
LAB_1007504b:
              FUN_10005aa0((int *)&local_d8);
            }
            else {
              cVar22 = *(char *)(iVar16 + 0x14);
              FUN_10111020(local_f0,(byte *)"include",7);
              piVar27 = local_110;
              if (cVar22 == '\0') {
                local_14c = local_118._4_4_;
                FUN_10111020(puVar17,local_118._4_4_,(uint)local_110);
                local_11c = (byte *)puVar17[1];
                SVar3 = puVar17[2];
                FUN_1011c320((uint *)local_c0,(int)local_11c,SVar3);
                puVar17 = local_f0;
                if ((CONCAT13(local_c0[3],CONCAT21(local_c0._1_2_,local_c0[0])) &
                    CONCAT13(cStack_b9,uStack_bc)) == 0xffffffff) {
                  if (local_b8 == '\x03') {
                    local_64 = (undefined4 *)CONCAT13(uStack_b1,auStack_b5._1_3_);
                    puVar4 = (undefined4 *)local_64[1];
                    piVar24 = (int *)*local_64;
                    if ((code *)*puVar4 != (code *)0x0) {
                      local_68 = piVar24;
                      (*(code *)*puVar4)(piVar24);
                      piVar24 = local_68;
                    }
                    if (puVar4[1] != 0) {
                      FUN_10093cf0(piVar24,puVar4[2]);
                    }
                    pvVar20 = GetProcessHeap();
                    HeapFree(pvVar20,0,local_64);
                  }
                  puVar25 = *(ushort **)(iVar16 + 8);
                  if (puVar25 == (ushort *)0x0) {
                    puVar25 = (ushort *)0x2;
                    SVar21 = 0;
                  }
                  else {
                    SVar21 = *(SIZE_T *)(puVar25 + -2);
                  }
                  FUN_10093310((undefined8 *)local_c0,puVar25,SVar21);
                  pbVar2 = local_11c;
                  FUN_10018750((undefined4 *)&local_140,(int *)local_c0,(int)local_11c,SVar3);
                  puVar17 = local_f0;
                  if (CONCAT13((char)iStack_13d,CONCAT21(uStack_13f,local_140)) == 1) {
                    uVar8 = CONCAT13((undefined1)uStack_139,iStack_13d._1_3_);
                    uVar9 = CONCAT13(piStack_135._0_1_,uStack_139._1_3_);
                    FUN_10110c20((SIZE_T *)local_c0,pbVar2,SVar3);
                    param_1[0] = '\x01';
                    param_1[1] = '\0';
                    param_1[2] = '\0';
                    param_1[3] = '\0';
                    *(undefined4 *)(param_1 + 8) = uVar9;
                    *(undefined4 *)(param_1 + 4) = uVar8;
                    *(ulonglong *)(param_1 + 0x14) =
                         CONCAT17(uStack_b1,CONCAT43(auStack_b5,CONCAT21(uStack_b7,local_b8)));
                    *(ulonglong *)(param_1 + 0xc) =
                         CONCAT17(cStack_b9,
                                  CONCAT43(stack0xffffff43,CONCAT21(local_c0._1_2_,local_c0[0])));
                    *(ulonglong *)(param_1 + 0x1c) = CONCAT44(uStack_ac,local_b0);
                    goto LAB_100753b0;
                  }
                }
LAB_10074cd7:
                FUN_1011b820((int)puVar17);
                FUN_1011b820((int)puVar17);
                goto LAB_10074ce5;
              }
              local_14c = local_118._4_4_;
              FUN_10111020(puVar17,local_118._4_4_,(uint)local_110);
              SVar3 = puVar17[2];
              local_11c = (byte *)puVar17[1];
              FUN_1011d090(&local_140,(int)local_11c,SVar3,*(int **)(*(int *)(iVar16 + 0x18) + 4),
                           *(int **)(*(int *)(iVar16 + 0x18) + 8));
              iVar19 = iStack_13d;
              if (local_140 == -1) goto LAB_10074cd7;
              uVar7 = CONCAT21(uStack_13f,local_140);
              cVar22 = (char)iStack_13d;
              uVar13 = iStack_13d._1_3_;
              uVar12 = (undefined1)uStack_139;
              FUN_10110c20((SIZE_T *)(auStack_b5 + 1),local_11c,SVar3);
              local_b8 = (char)((uint)iVar19 >> 8);
              uStack_b7 = (undefined2)((uint)iVar19 >> 0x10);
              auStack_b5[0] = uVar12;
              stack0xffffff43 = CONCAT31(uVar7,local_c0[3]);
              cStack_b9 = cVar22;
              local_c0[0] = '\x01';
              *(undefined8 *)(param_1 + 0x18) = local_a8;
              *(undefined4 *)(param_1 + 0x20) = local_a0;
              *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_ac,local_b0);
              *(ulonglong *)(param_1 + 8) = CONCAT17(uStack_b1,CONCAT43(auStack_b5,uVar13));
              *(ulonglong *)param_1 =
                   CONCAT17(cVar22,CONCAT43(stack0xffffff43,CONCAT21(local_c0._1_2_,1)));
LAB_100753b0:
            }
            if ((uint)local_118 == 0) {
              return;
            }
            goto LAB_100748e0;
          }
LAB_10074ffb:
          piVar23 = (int *)((int)piVar23 + 1);
        } while (piVar27 != piVar23);
      }
      FUN_1011b820((int)puVar17);
      *param_1 = -1;
    }
    else {
      uVar8 = CONCAT13(local_c0[3],CONCAT21(local_c0._1_2_,local_c0[0]));
      puVar17 = (uint *)CONCAT13(cStack_b9,uStack_bc);
      if (SVar3 == 0) {
        pvVar15 = (LPVOID)0x1;
      }
      else {
        local_f0 = puVar17;
        pvVar15 = FUN_10107380(0,SVar3);
        if (pvVar15 == (LPVOID)0x0) goto LAB_100753c4;
        memcpy(pvVar15,pbVar2,SVar3);
        puVar17 = local_f0;
      }
      *param_1 = '\x01';
      *(undefined4 *)(param_1 + 4) = uVar8;
      *(uint **)(param_1 + 8) = puVar17;
      *(SIZE_T *)(param_1 + 0xc) = SVar3;
      *(LPVOID *)(param_1 + 0x10) = pvVar15;
      *(SIZE_T *)(param_1 + 0x14) = SVar3;
      param_1[0x18] = '\0';
      iVar16 = CONCAT13((undefined1)uStack_139,iStack_13d._1_3_);
      if (iVar16 != 0) {
        iVar19 = CONCAT13(auStack_131[0],piStack_135._1_3_);
        if (iVar19 != 0) {
          pauVar26 = (undefined1 (*) [16])CONCAT13((char)iStack_13d,CONCAT21(uStack_13f,local_140));
          auVar33 = *pauVar26;
          pauVar30 = pauVar26 + 1;
          uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
          do {
            if ((short)uVar18 == 0) {
              do {
                auVar33 = *pauVar30;
                pauVar26 = pauVar26 + -0xc;
                pauVar30 = pauVar30 + 1;
                uVar18 = (ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar18 == 0);
            }
            iVar6 = 0;
            for (uVar28 = uVar18; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            if (*(int *)((int)pauVar26 + iVar6 * -0xc + -0xc) != 0) {
              local_f0 = *(uint **)((int)pauVar26 + iVar6 * -0xc + -8);
              pvVar20 = GetProcessHeap();
              HeapFree(pvVar20,0,local_f0);
            }
            uVar18 = uVar18 - 1 & uVar18;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
        uVar18 = iVar16 * 0xc + 0x1bU & 0xfffffff0;
        if (iVar16 + uVar18 != -0x11) {
          local_14c = *(byte **)((CONCAT13((char)iStack_13d,CONCAT21(uStack_13f,local_140)) - uVar18
                                 ) + -4);
LAB_100748e0:
          pvVar20 = GetProcessHeap();
          HeapFree(pvVar20,0,local_14c);
        }
      }
    }
  }
  else {
    local_f0 = (uint *)CONCAT13(local_c0[3],CONCAT21(local_c0._1_2_,local_c0[0]));
    uVar8 = CONCAT13(cStack_b9,uStack_bc);
    if (piVar27 == (int *)0x0) {
      pvVar15 = (LPVOID)0x1;
    }
    else {
      pvVar15 = FUN_10107380(0,(SIZE_T)piVar27);
      if (pvVar15 == (LPVOID)0x0) {
LAB_100753c4:
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      memcpy(pvVar15,pbVar2,(size_t)piVar27);
    }
    *param_1 = '\x02';
    *(uint **)(param_1 + 4) = local_f0;
    *(undefined4 *)(param_1 + 8) = uVar8;
    *(int **)(param_1 + 0xc) = piVar27;
    *(LPVOID *)(param_1 + 0x10) = pvVar15;
    *(int **)(param_1 + 0x14) = piVar27;
    param_1[0x18] = '\0';
  }
  return;
LAB_10074607:
  bVar32 = (*pauVar30)[local_4c];
  uVar28 = local_4c;
  if (-1 < (char)bVar32) {
    auVar33 = *pauVar30;
    uVar28 = 0;
    for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar33[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
        uVar31 = uVar31 >> 1 | 0x80000000) {
      uVar28 = uVar28 + 1;
    }
    bVar32 = (*pauVar30)[uVar28];
  }
  iVar19 = CONCAT13(piStack_135._0_1_,uStack_139._1_3_) - (uint)(bVar32 & 1);
  uStack_139._1_3_ = (undefined3)iVar19;
  piStack_135._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
  (*pauVar30)[uVar28] = (char)local_64;
  pauVar30[1][uVar28 - 0x10 & uVar18] = (char)local_64;
  iVar19 = CONCAT13(auStack_131[0],piStack_135._1_3_) + 1;
  piStack_135._1_3_ = (undefined3)iVar19;
  auStack_131[0] = (undefined1)((uint)iVar19 >> 0x18);
  *(int *)((int)pauVar30 + uVar28 * -0xc + -0xc) = iVar16;
  *(uint **)((int)pauVar30 + uVar28 * -0xc + -8) = puVar17;
  *(int **)((int)pauVar30 + uVar28 * -0xc + -4) = local_f8;
  if (piVar24 == local_68) goto LAB_10074725;
  goto LAB_10074401;
}
