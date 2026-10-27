// rea decompile_all
// name: FUN_1006e190
// address: 0x1006e190
// body: available
// range: 0x1006e190-0x1006e222 inclusive
// range: 0x1006e230-0x1006e308 inclusive
// range: 0x1006e310-0x1006e402 inclusive
// range: 0x1006e410-0x1006e61d inclusive
// range: 0x1006e620-0x1006e652 inclusive
// range: 0x1006e660-0x1006e947 inclusive
// range: 0x1006e950-0x1006ea9a inclusive
// range: 0x1006eaa0-0x1006ebe6 inclusive
// range: 0x1006ebf0-0x1006ecb3 inclusive
// range: 0x1006ecc0-0x1006ee24 inclusive
// range: 0x1006ee30-0x1006ef32 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1006e190(char *param_1,undefined *param_2,int param_3,uint *param_4)

{
  char *pcVar1;
  code *pcVar2;
  code cVar3;
  byte *pbVar4;
  LPVOID lpMem;
  ushort uVar5;
  code *pcVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  SIZE_T SVar10;
  HANDLE pvVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  uint extraout_EDX;
  ushort *puVar16;
  code *pcVar17;
  uint extraout_EDX_00;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  int *piVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  code *pcVar24;
  code *pcVar25;
  code *pcVar26;
  int *piVar27;
  uint uVar28;
  code *pcVar29;
  int *piVar30;
  byte bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uVar37;
  code *local_11c;
  uint local_114;
  code *local_10c;
  undefined1 local_fd;
  SIZE_T local_fc;
  undefined1 local_f8;
  undefined2 uStack_f7;
  undefined1 uStack_f5;
  code *pcStack_f4;
  code *local_f0;
  undefined4 uStack_ec;
  undefined3 uStack_e8;
  code *pcStack_e5;
  int local_e0;
  uint local_dc;
  code *local_d8;
  code *pcStack_d4;
  code *pcStack_d0;
  code *pcStack_cc;
  code *local_c8;
  code *pcStack_c4;
  code *local_c0;
  code *pcStack_bc;
  code *local_b8;
  code *local_b4;
  code *local_b0;
  code *local_ac;
  code *local_a8;
  code *local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  undefined8 *local_98;
  undefined1 *local_94;
  undefined8 *local_90;
  undefined1 *local_8c;
  undefined4 *local_88;
  undefined1 *local_84;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 local_40;
  code *local_34;
  undefined4 local_30;
  int local_2c;
  byte *local_28;
  uint local_24;
  undefined8 local_20 [2];

  puVar7 = FUN_10093010();
  if (puVar7 == (uint *)0x0) {
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar15 = (code *)invalidInstructionException();
    (*pcVar15)();
  }
  local_78 = 0;
  local_80 = 0x10159670;
  local_70 = *puVar7;
  uStack_6c = puVar7[1];
  uStack_68 = puVar7[2];
  uStack_64 = puVar7[3];
  puVar7[1] = puVar7[1] + (uint)(0xfffffffe < local_70);
  *puVar7 = local_70 + 1;
  if (param_3 != 0) {
    local_114 = 0;
    local_e0 = 0;
    local_5c = 0;
    local_34 = (code *)(param_2 + param_3 * 0x28);
    do {
      pcVar15 = (code *)(param_2 + 0x28);
      uVar9 = *(uint *)(param_2 + 0x1c);
      uVar37 = FUN_1002e000(local_70,uStack_6c,uStack_68,uStack_64,uVar9);
      uVar14 = (uint)uVar37;
      local_dc = uVar14 >> 0x19;
      bVar31 = (byte)((ulonglong)uVar37 >> 0x18) >> 1;
      auVar32 = ZEXT216(CONCAT11(bVar31,bVar31));
      auVar32 = pshuflw(auVar32,auVar32,0);
      iVar8 = 0;
      uVar13 = uVar14;
      while( true ) {
        uVar13 = local_114 & uVar13;
        pcVar1 = (char *)((int)(undefined1 (*) [16])local_80 + uVar13);
        auVar35[0] = -(*pcVar1 == auVar32[0]);
        auVar35[1] = -(pcVar1[1] == auVar32[1]);
        auVar35[2] = -(pcVar1[2] == auVar32[2]);
        auVar35[3] = -(pcVar1[3] == auVar32[3]);
        auVar35[4] = -(pcVar1[4] == auVar32[4]);
        auVar35[5] = -(pcVar1[5] == auVar32[5]);
        auVar35[6] = -(pcVar1[6] == auVar32[6]);
        auVar35[7] = -(pcVar1[7] == auVar32[7]);
        auVar35[8] = -(pcVar1[8] == auVar32[0]);
        auVar35[9] = -(pcVar1[9] == auVar32[1]);
        auVar35[10] = -(pcVar1[10] == auVar32[2]);
        auVar35[0xb] = -(pcVar1[0xb] == auVar32[3]);
        auVar35[0xc] = -(pcVar1[0xc] == auVar32[4]);
        auVar35[0xd] = -(pcVar1[0xd] == auVar32[5]);
        auVar35[0xe] = -(pcVar1[0xe] == auVar32[6]);
        auVar35[0xf] = -(pcVar1[0xf] == auVar32[7]);
        uVar21 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
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
        while ((short)uVar21 != 0) {
          uVar28 = uVar21 - 1 & uVar21;
          iVar23 = 0;
          for (; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
            iVar23 = iVar23 + 1;
          }
          uVar22 = iVar23 + uVar13 & local_114;
          uVar21 = uVar28;
          if (*(uint *)((int)(undefined1 (*) [16])local_80 + -0x18 + uVar22 * -0x18) == uVar9) {
            iVar8 = (int)(undefined1 (*) [16])local_80 + uVar22 * -0x18;
            goto joined_r0x1006e5b7;
          }
        }
        auVar33[0] = -(*pcVar1 == -1);
        auVar33[1] = -(pcVar1[1] == -1);
        auVar33[2] = -(pcVar1[2] == -1);
        auVar33[3] = -(pcVar1[3] == -1);
        auVar33[4] = -(pcVar1[4] == -1);
        auVar33[5] = -(pcVar1[5] == -1);
        auVar33[6] = -(pcVar1[6] == -1);
        auVar33[7] = -(pcVar1[7] == -1);
        auVar33[8] = -(pcVar1[8] == -1);
        auVar33[9] = -(pcVar1[9] == -1);
        auVar33[10] = -(pcVar1[10] == -1);
        auVar33[0xb] = -(pcVar1[0xb] == -1);
        auVar33[0xc] = -(pcVar1[0xc] == -1);
        auVar33[0xd] = -(pcVar1[0xd] == -1);
        auVar33[0xe] = -(pcVar1[0xe] == -1);
        auVar33[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar33 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar33 >> 0x1f,0) & 1) != 0) || (SUB161(auVar33 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar33 >> 0x37,0) & 1) != 0) || (SUB161(auVar33 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar33 >> 0x47,0) & 1) != 0) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') break;
        uVar13 = uVar13 + 0x10 + iVar8;
        iVar8 = iVar8 + 0x10;
      }
      if (local_5c == 0) {
        FUN_101350d0((undefined4 *)&local_80,&local_70);
      }
      pcStack_d4 = FUN_1009c910;
      local_d8 = (code *)(param_2 + 0x1c);
      FUN_10093970((undefined8 *)&local_2c,(ushort *)&DAT_1014216c,(uint)&local_d8);
      pbVar4 = local_28;
      FUN_10111020(param_4,local_28,local_24);
      if (local_2c != 0) {
        pvVar11 = GetProcessHeap();
        HeapFree(pvVar11,0,pbVar4);
      }
      pbVar4 = (byte *)param_4[1];
      SVar10 = param_4[2];
      FUN_100759c0((undefined1 *)&local_d8,pbVar4,SVar10);
      if ((char)local_d8 != -1) goto LAB_1006ea06;
      local_114 = local_80._4_4_;
      pcStack_e5 = pcStack_c4;
      uStack_ec = (undefined4)(CONCAT44(local_c8,pcStack_cc) >> 8);
      uStack_e8 = (undefined3)((uint)local_c8 >> 8);
      uStack_f5 = SUB41(pcStack_d4,0);
      pcStack_f4 = (code *)(CONCAT44(pcStack_d0,pcStack_d4) >> 8);
      local_f0._0_3_ = (undefined3)((uint)pcStack_d0 >> 8);
      local_f0 = (code *)CONCAT13((char)pcStack_cc,local_f0._0_3_);
      uVar14 = uVar14 & local_80._4_4_;
      auVar32 = *(undefined1 (*) [16])(*(undefined1 (*) [16])local_80 + uVar14);
      uVar13 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
      if (uVar13 == 0) {
        iVar8 = 0x10;
        do {
          uVar14 = uVar14 + iVar8;
          iVar8 = iVar8 + 0x10;
          uVar14 = uVar14 & local_80._4_4_;
          auVar32 = *(undefined1 (*) [16])(*(undefined1 (*) [16])local_80 + uVar14);
          uVar13 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
        } while (uVar13 == 0);
      }
      iVar8 = 0;
      for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
        iVar8 = iVar8 + 1;
      }
      uVar13 = iVar8 + uVar14 & local_80._4_4_;
      bVar31 = (*(undefined1 (*) [16])local_80)[uVar13];
      if (-1 < (char)bVar31) {
        auVar32 = *(undefined1 (*) [16])local_80;
        uVar13 = 0;
        for (uVar14 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar32[0xf] >> 7) << 0xf); (uVar14 & 1) == 0;
            uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        bVar31 = (*(undefined1 (*) [16])local_80)[uVar13];
      }
      (*(undefined1 (*) [16])local_80)[uVar13] = (char)local_dc;
      ((undefined1 (*) [16])local_80)[1][uVar13 - 0x10 & local_80._4_4_] = (char)local_dc;
      local_5c = (int)local_78 - (uint)(bVar31 & 1);
      iVar8 = (int)(undefined1 (*) [16])local_80 + uVar13 * -0x18;
      *(uint *)((int)(undefined1 (*) [16])local_80 + uVar13 * -0x18 + -0x18) = uVar9;
      *(ulonglong *)((int)(undefined1 (*) [16])local_80 + uVar13 * -0x18 + -0x14) =
           CONCAT35(local_f0._0_3_,CONCAT41(pcStack_f4,uStack_f5));
      *(ulonglong *)((int)(undefined1 (*) [16])local_80 + uVar13 * -0x18 + -0xc) =
           CONCAT35(uStack_e8,CONCAT41(uStack_ec,(char)pcStack_cc));
      *(code **)((int)(undefined1 (*) [16])local_80 + uVar13 * -0x18 + -4) = pcStack_c4;
      local_e0 = (int)local_78._4_4_ + 1;
      local_78 = CONCAT44(local_e0,local_5c);
      local_fc = SVar10;
      iVar23 = FUN_10110f10(pbVar4,SVar10);
      if (iVar23 != 0) {
        FUN_10110e70((int)param_4,extraout_EDX);
      }
joined_r0x1006e5b7:
      if ((DAT_10163248 != 0) && (DAT_10163274 != 0)) {
        local_dc = *(uint *)(param_2 + 0x20);
        uVar37 = FUN_1002e000(DAT_10163278,DAT_1016327c,DAT_10163280,DAT_10163284,local_dc);
        uVar13 = (uint)uVar37;
        local_fc = 0;
        bVar31 = (byte)((ulonglong)uVar37 >> 0x18) >> 1;
        auVar32 = ZEXT216(CONCAT11(bVar31,bVar31));
        auVar32 = pshuflw(auVar32,auVar32,0);
        while( true ) {
          uVar13 = DAT_1016326c & uVar13;
          pcVar1 = (char *)(DAT_10163268 + uVar13);
          auVar36[0] = -(*pcVar1 == auVar32[0]);
          auVar36[1] = -(pcVar1[1] == auVar32[1]);
          auVar36[2] = -(pcVar1[2] == auVar32[2]);
          auVar36[3] = -(pcVar1[3] == auVar32[3]);
          auVar36[4] = -(pcVar1[4] == auVar32[4]);
          auVar36[5] = -(pcVar1[5] == auVar32[5]);
          auVar36[6] = -(pcVar1[6] == auVar32[6]);
          auVar36[7] = -(pcVar1[7] == auVar32[7]);
          auVar36[8] = -(pcVar1[8] == auVar32[0]);
          auVar36[9] = -(pcVar1[9] == auVar32[1]);
          auVar36[10] = -(pcVar1[10] == auVar32[2]);
          auVar36[0xb] = -(pcVar1[0xb] == auVar32[3]);
          auVar36[0xc] = -(pcVar1[0xc] == auVar32[4]);
          auVar36[0xd] = -(pcVar1[0xd] == auVar32[5]);
          auVar36[0xe] = -(pcVar1[0xe] == auVar32[6]);
          auVar36[0xf] = -(pcVar1[0xf] == auVar32[7]);
          uVar9 = (uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar36[0xf] >> 7) << 0xf);
          while ((short)uVar9 != 0) {
            iVar23 = 0;
            for (uVar14 = uVar9; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
              iVar23 = iVar23 + 1;
            }
            uVar9 = uVar9 - 1 & uVar9;
            iVar23 = DAT_10163268 + (iVar23 + uVar13 & DAT_1016326c) * -0x20;
            if (local_dc == *(uint *)(iVar23 + -0x20)) {
              local_20[0] = *(undefined8 *)(iVar23 + -0x18);
              local_40 = *(undefined8 *)(iVar23 + -0x10);
              local_30 = *(undefined4 *)(iVar23 + -8);
              goto LAB_1006e5cc;
            }
          }
          auVar34[0] = -(*pcVar1 == -1);
          auVar34[1] = -(pcVar1[1] == -1);
          auVar34[2] = -(pcVar1[2] == -1);
          auVar34[3] = -(pcVar1[3] == -1);
          auVar34[4] = -(pcVar1[4] == -1);
          auVar34[5] = -(pcVar1[5] == -1);
          auVar34[6] = -(pcVar1[6] == -1);
          auVar34[7] = -(pcVar1[7] == -1);
          auVar34[8] = -(pcVar1[8] == -1);
          auVar34[9] = -(pcVar1[9] == -1);
          auVar34[10] = -(pcVar1[10] == -1);
          auVar34[0xb] = -(pcVar1[0xb] == -1);
          auVar34[0xc] = -(pcVar1[0xc] == -1);
          auVar34[0xd] = -(pcVar1[0xd] == -1);
          auVar34[0xe] = -(pcVar1[0xe] == -1);
          auVar34[0xf] = -(pcVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar34 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x2f,0) & 1) != 0) || (SUB161(auVar34 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') break;
          uVar13 = uVar13 + 0x10 + local_fc;
          local_fc = local_fc + 0x10;
        }
      }
      local_40 = 0x3ff0000000000000;
      local_20[0] = 0x3ff0000000000000;
      local_30 = 0xffffffff;
LAB_1006e5cc:
      uVar13 = *(uint *)(param_2 + 8);
      pcVar24 = (code *)0x0;
      pcVar29 = (code *)0x1;
      if (((int)uVar13 < 0) || (_DAT_0077f1c0 <= uVar13)) {
        local_f0 = (code *)0x0;
      }
      else {
        iVar23 = _DAT_0077f1b4;
        if (_DAT_0077f1b4 == 0) {
          iVar23 = 4;
        }
        puVar16 = *(ushort **)(iVar23 + uVar13 * 4);
        if (puVar16 == (ushort *)0x0) {
          puVar16 = (ushort *)0x2;
          SVar10 = 0;
        }
        else {
          SVar10 = *(SIZE_T *)(puVar16 + -2);
        }
        FUN_10093310((undefined8 *)&local_d8,puVar16,SVar10);
        pcVar6 = pcStack_d4;
        pcVar24 = local_d8;
        pcVar29 = pcStack_d4;
        pcVar26 = pcStack_d0;
        if ((char)pcStack_cc != '\x01') {
          if (pcStack_d0 == (code *)0x0) {
            pcVar26 = (code *)0x0;
          }
          else {
            pcVar2 = pcStack_d4 + (int)pcStack_d0;
            pcVar25 = pcStack_d4;
            do {
              cVar3 = *pcVar25;
              pcVar17 = pcVar25 + 1;
              if ((char)cVar3 < '\0') {
                if ((byte)cVar3 < 0xe0) {
                  if (pcVar17 != pcVar2) {
                    pcVar17 = pcVar25 + 2;
                  }
                }
                else if (cVar3 == (code)0xed) {
                  pcVar26 = pcStack_d0;
                  if ((pcVar17 == pcVar2) || (pcVar26 = pcStack_d0, pcVar25 + 2 == pcVar2)) break;
                  if (0x9f < (byte)pcVar25[1]) {
                    pcVar24 = pcStack_d4;
                    pcVar29 = pcStack_d0;
                    pcVar26 = pcStack_cc;
                    if (local_d8 != (code *)0xffffffff) {
                      if (local_d8 != (code *)0x0) {
                        pvVar11 = GetProcessHeap();
                        HeapFree(pvVar11,0,pcVar6);
                      }
                      goto LAB_1006e6ff;
                    }
                    break;
                  }
                  pcVar17 = pcVar25 + 3;
                }
                else {
                  pcVar26 = pcVar25 + 2;
                  if (pcVar17 == pcVar2) {
                    pcVar26 = pcVar17;
                  }
                  pcVar17 = pcVar26 + (pcVar26 != pcVar2);
                  if (0xef < (byte)cVar3) {
                    pcVar17 = pcVar17 + (pcVar17 != pcVar2);
                  }
                }
              }
              pcVar25 = pcVar17;
              pcVar26 = pcStack_d0;
            } while (pcVar17 != pcVar2);
          }
        }
        local_f0 = pcVar26;
        if (pcVar24 == (code *)0xffffffff) {
LAB_1006e6ff:
          pcVar24 = (code *)0x0;
          local_f0 = (code *)0x0;
          pcVar29 = (code *)0x1;
        }
      }
      local_f8 = SUB41(pcVar24,0);
      uStack_f7 = (undefined2)((uint)pcVar24 >> 8);
      uStack_f5 = (undefined1)((uint)pcVar24 >> 0x18);
      local_d8 = (code *)&local_f8;
      local_c8 = (code *)(param_2 + 4);
      pcStack_d4 = (code *)&LAB_100922c0;
      pcStack_cc = FUN_1009c910;
      local_c0 = (code *)(param_2 + 0xc);
      pcStack_c4 = FUN_1009c910;
      local_b8 = (code *)(param_2 + 0x10);
      pcStack_bc = FUN_1009c910;
      local_b0 = (code *)(param_2 + 0x14);
      local_b4 = FUN_1009c910;
      local_a8 = (code *)(param_2 + 0x18);
      local_ac = FUN_1009c910;
      local_fd = (code)param_2[0x24];
      local_a4 = FUN_1009c910;
      local_a0 = &local_fd;
      local_98 = local_20;
      local_9c = &LAB_10097da0;
      local_90 = &local_40;
      local_94 = &LAB_1009c8d0;
      local_88 = &local_30;
      local_8c = &LAB_1009c8d0;
      local_84 = &LAB_10096fc0;
      pcStack_f4 = pcVar29;
      pcStack_d0 = (code *)param_2;
      FUN_10092aa0(&local_58,(int *)(iVar8 + -0x14),(ushort *)&DAT_10142173,(uint)&local_d8);
      pcVar24 = pcStack_f4;
      if ((char)local_58 != -1) {
        *param_1 = '\0';
        *(undefined4 *)(param_1 + 8) = local_58._4_4_;
        *(int *)(param_1 + 4) = (int)local_58;
        if (CONCAT13(uStack_f5,CONCAT21(uStack_f7,local_f8)) == 0) goto LAB_1006ea63;
        pvVar11 = GetProcessHeap();
        HeapFree(pvVar11,0,pcVar24);
        local_11c = (code *)local_80._4_4_;
        uVar37 = local_78;
        goto joined_r0x1006e91c;
      }
      if (CONCAT13(uStack_f5,CONCAT21(uStack_f7,local_f8)) != 0) {
        pvVar11 = GetProcessHeap();
        HeapFree(pvVar11,0,pcVar24);
      }
      param_2 = pcVar15;
    } while (pcVar15 != local_34);
    if (local_e0 != 0) {
      auVar32 = *(undefined1 (*) [16])local_80;
      pauVar18 = (undefined1 (*) [16])local_80 + 1;
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
      pauVar19 = (undefined1 (*) [16])local_80;
      do {
        if ((short)uVar13 == 0) {
          do {
            auVar32 = *pauVar18;
            pauVar19 = pauVar19 + -0x18;
            pauVar18 = pauVar18 + 1;
            uVar13 = (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar13 == 0);
        }
        iVar8 = 0;
        for (uVar9 = uVar13; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          iVar8 = iVar8 + 1;
        }
        FUN_10053090((undefined8 *)&local_d8,(int)pauVar19 + iVar8 * -0x18 + -0x14);
        if (((char)local_d8 != -1) && ((char)local_d8 != -1)) {
          *param_1 = '\0';
          *(code **)(param_1 + 4) = local_d8;
          *(code **)(param_1 + 8) = pcStack_d4;
          local_11c = (code *)local_80._4_4_;
          uVar37 = local_78;
          goto joined_r0x1006e91c;
        }
        uVar13 = uVar13 - 1 & uVar13;
        local_e0 = local_e0 + -1;
      } while (local_e0 != 0);
    }
  }
  FUN_10111020(param_4,(byte *)"layers.txt",10);
  FUN_100759c0((undefined1 *)&local_d8,(void *)param_4[1],param_4[2]);
  if ((char)local_d8 == -1) {
    pcVar15 = local_78._4_4_;
    local_58 = CONCAT44(pcStack_d0,pcStack_d4);
    local_50 = CONCAT44(local_c8,pcStack_cc);
    local_48 = pcStack_c4;
    if (local_78._4_4_ != (code *)0x0) {
      auVar32 = *(undefined1 (*) [16])local_80;
      uVar5 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar32[0xf] >> 7) << 0xf;
      pauVar19 = (undefined1 (*) [16])local_80;
      pauVar18 = (undefined1 (*) [16])local_80;
      while( true ) {
        uVar13 = uVar5 ^ 0xffff;
        pauVar18 = pauVar18 + 1;
        if (uVar13 != 0) break;
        auVar32 = *pauVar18;
        pauVar19 = pauVar19 + -0x18;
        uVar5 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf;
      }
      local_10c = (code *)&DAT_00000004;
      if (&DAT_00000004 < local_78._4_4_) {
        local_10c = local_78._4_4_;
      }
      if ((code *)0x3fffffff < local_78._4_4_ || 0x7ffffffc < (uint)((int)local_10c * 4)) {
        FUN_101367b0();
                    /* WARNING: Does not return */
        pcVar15 = (code *)invalidInstructionException();
        (*pcVar15)();
      }
      pcVar24 = FUN_10107380(0,(int)local_10c * 4);
      if (pcVar24 == (code *)0x0) {
        FUN_101366bc(4);
                    /* WARNING: Does not return */
        pcVar15 = (code *)invalidInstructionException();
        (*pcVar15)();
      }
      iVar8 = 0;
      for (uVar9 = uVar13; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        iVar8 = iVar8 + 1;
      }
      *(int *)pcVar24 = (int)pauVar19 + iVar8 * -0x18 + -0x18;
      local_11c = pcVar15 + -1;
      pcStack_d0 = (code *)0x1;
      if (local_11c == (code *)0x0) {
        local_11c = (code *)((int)pcVar24 + pcVar15 * 4);
      }
      else {
        uVar13 = uVar13 - 1 & uVar13;
        pcVar29 = pcVar24;
        local_d8 = local_10c;
        pcStack_d4 = pcVar24;
        do {
          pcVar6 = pcStack_d0;
          if ((short)uVar13 == 0) {
            do {
              auVar32 = *pauVar18;
              pauVar19 = pauVar19 + -0x18;
              pauVar18 = pauVar18 + 1;
              uVar13 = (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar13 == 0);
          }
          iVar8 = 0;
          for (uVar9 = uVar13; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            iVar8 = iVar8 + 1;
          }
          uVar13 = uVar13 - 1 & uVar13;
          if (pcStack_d0 == local_d8) {
            FUN_101359e0((uint *)&local_d8,(uint)pcStack_d0,(uint)local_11c,&DAT_00000004,4);
            pcVar29 = pcStack_d4;
          }
          pcVar24 = pcStack_d4;
          local_11c = local_11c + -1;
          *(int *)((int)pcVar29 + pcVar6 * 4) = (int)pauVar19 + iVar8 * -0x18 + -0x18;
          pcStack_d0 = pcVar6 + 1;
        } while (local_11c != (code *)0x0);
        local_10c = local_d8;
        if (&DAT_00000014 < pcVar15) {
          local_11c = (code *)((int)pcStack_d4 + pcVar15 * 4);
          FUN_10019390((undefined4 *)pcStack_d4,(uint)pcVar15);
        }
        else {
          local_11c = (code *)((int)pcStack_d4 + pcVar15 * 4);
          iVar8 = 0;
          piVar30 = (int *)((int)pcStack_d4 + 4);
          pcVar15 = pcStack_d4;
          do {
            piVar12 = piVar30;
            piVar30 = *(int **)((int)pcVar15 + 4);
            piVar27 = *(int **)pcVar15;
            iVar23 = iVar8;
            piVar20 = piVar12;
            if (*piVar30 < *piVar27) {
              do {
                *piVar20 = (int)piVar27;
                pcVar15 = pcStack_d4;
                if (iVar23 == 0) break;
                piVar27 = (int *)piVar20[-2];
                pcVar15 = (code *)(piVar20 + -1);
                iVar23 = iVar23 + 4;
                piVar20 = (int *)pcVar15;
              } while (*piVar30 < *piVar27);
              *(int **)pcVar15 = piVar30;
            }
            iVar8 = iVar8 + -4;
            piVar30 = piVar12 + 1;
            pcVar15 = (code *)piVar12;
          } while ((code *)(piVar12 + 1) != local_11c);
        }
      }
      piVar30 = (int *)pcVar24;
      do {
        local_40 = CONCAT44(local_40._4_4_,*piVar30);
        local_d8 = (code *)&local_40;
        pcStack_d4 = (code *)&LAB_10082980;
        FUN_10092aa0((undefined8 *)&local_f8,(int *)&local_58,(ushort *)&DAT_10155922,
                     (uint)&local_d8);
        if (local_f8 != (code)0xff) {
          *param_1 = '\0';
          *(code **)(param_1 + 8) = pcStack_f4;
          *(uint *)(param_1 + 4) = CONCAT13(uStack_f5,CONCAT21(uStack_f7,local_f8));
          if (local_10c != (code *)0x0) {
            pvVar11 = GetProcessHeap();
            HeapFree(pvVar11,0,pcVar24);
          }
          goto LAB_1006eee5;
        }
        piVar30 = piVar30 + 1;
      } while ((code *)piVar30 != local_11c);
      if (local_10c != (code *)0x0) {
        pvVar11 = GetProcessHeap();
        HeapFree(pvVar11,0,pcVar24);
      }
    }
    FUN_10053090((undefined8 *)&local_d8,(int)&local_58);
    if (((char)local_d8 == -1) || ((char)local_d8 == -1)) {
      iVar8 = FUN_10110f10((byte *)param_4[1],param_4[2]);
      if (iVar8 != 0) {
        FUN_10110e70((int)param_4,extraout_EDX_00);
      }
      *param_1 = -1;
      FUN_10005aa0((int *)&local_58);
      if (local_80._4_4_ == 0) {
        return;
      }
      local_11c = (code *)local_80._4_4_;
      uVar37 = local_78;
      if (local_78._4_4_ != (code *)0x0) {
        auVar32 = *(undefined1 (*) [16])local_80;
        pauVar18 = (undefined1 (*) [16])local_80 + 1;
        uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
        iVar8 = (int)local_78._4_4_;
        pauVar19 = (undefined1 (*) [16])local_80;
        do {
          if ((short)uVar13 == 0) {
            do {
              auVar32 = *pauVar18;
              pauVar19 = pauVar19 + -0x18;
              pauVar18 = pauVar18 + 1;
              uVar13 = (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar13 == 0);
          }
          iVar23 = 0;
          for (uVar9 = uVar13; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            iVar23 = iVar23 + 1;
          }
          uVar13 = uVar13 - 1 & uVar13;
          FUN_10005aa0((int *)((int)pauVar19 + iVar23 * -0x18 + -0x14));
          iVar8 = iVar8 + -1;
          uVar37 = local_78;
        } while (iVar8 != 0);
      }
      goto LAB_1006ee7a;
    }
    *param_1 = '\0';
    *(code **)(param_1 + 4) = local_d8;
    *(code **)(param_1 + 8) = pcStack_d4;
LAB_1006eee5:
    FUN_10005aa0((int *)&local_58);
    local_11c = (code *)local_80._4_4_;
    uVar37 = local_78;
  }
  else {
LAB_1006ea06:
    uStack_e8 = (undefined3)((uint)local_c8 >> 8);
    pcStack_e5 = pcStack_c4;
    local_f0 = (code *)CONCAT43(pcStack_cc,pcStack_d0._1_3_);
    uStack_ec = (undefined4)(CONCAT17(local_c8._0_1_,CONCAT43(pcStack_cc,pcStack_d0._1_3_)) >> 0x20)
    ;
    local_f8 = SUB41((uint)local_d8 >> 8,0);
    uStack_f7 = (undefined2)((uint)local_d8 >> 0x10);
    uStack_f5 = SUB41(pcStack_d4,0);
    pcStack_f4 = (code *)(CONCAT17(pcStack_d0._0_1_,CONCAT43(pcStack_d4,local_d8._1_3_)) >> 0x20);
    *(code **)(param_1 + 0x20) = local_b8;
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(pcStack_bc,local_c0);
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(pcStack_c4,local_c8);
    *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_ec,local_f0);
    *(ulonglong *)(param_1 + 1) = CONCAT44(pcStack_f4,CONCAT13(uStack_f5,local_d8._1_3_));
    *param_1 = (char)local_d8;
LAB_1006ea63:
    local_11c = (code *)local_80._4_4_;
    uVar37 = local_78;
  }
joined_r0x1006e91c:
  if (local_11c == (code *)0x0) {
    return;
  }
  local_78._4_4_ = (code *)((ulonglong)uVar37 >> 0x20);
  if (local_78._4_4_ != (code *)0x0) {
    auVar32 = *(undefined1 (*) [16])local_80;
    pauVar18 = (undefined1 (*) [16])local_80 + 1;
    uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
    iVar8 = (int)local_78._4_4_;
    pauVar19 = (undefined1 (*) [16])local_80;
    local_78 = uVar37;
    do {
      if ((short)uVar13 == 0) {
        do {
          auVar32 = *pauVar18;
          pauVar19 = pauVar19 + -0x18;
          pauVar18 = pauVar18 + 1;
          uVar13 = (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar13 == 0);
      }
      iVar23 = 0;
      for (uVar9 = uVar13; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        iVar23 = iVar23 + 1;
      }
      uVar13 = uVar13 - 1 & uVar13;
      FUN_10005aa0((int *)((int)pauVar19 + iVar23 * -0x18 + -0x14));
      iVar8 = iVar8 + -1;
      uVar37 = local_78;
    } while (iVar8 != 0);
  }
LAB_1006ee7a:
  local_78 = uVar37;
  uVar13 = (int)local_11c * 0x18 + 0x27U & 0xfffffff0;
  if ((int)local_11c + uVar13 != -0x11) {
    lpMem = *(LPVOID *)(((int)(undefined1 (*) [16])local_80 - uVar13) + -4);
    pvVar11 = GetProcessHeap();
    HeapFree(pvVar11,0,lpMem);
  }
  return;
}
