// rea decompile_all
// name: FUN_10024be0
// address: 0x10024be0
// body: available
// range: 0x10024be0-0x10024e4d inclusive
// range: 0x10024e50-0x10024f0b inclusive
// range: 0x10024f10-0x10024fdd inclusive
// range: 0x10024fe0-0x100251c5 inclusive
// range: 0x100251d0-0x10025239 inclusive
// range: 0x10025240-0x10025322 inclusive
// range: 0x10025330-0x100253dd inclusive
// range: 0x100253e0-0x100265ec inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10024be0(undefined8 *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            undefined8 *param_7)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  code *pcVar7;
  uint *puVar8;
  undefined1 *lpMem;
  SIZE_T SVar9;
  uint **ppuVar10;
  byte bVar11;
  char cVar13;
  short sVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  HANDLE pvVar17;
  int *piVar18;
  LPVOID _Dst;
  char cVar19;
  byte *pbVar20;
  int iVar21;
  uint uVar22;
  uint **extraout_EDX;
  uint **ppuVar23;
  uint **extraout_EDX_00;
  uint **extraout_EDX_01;
  uint **extraout_EDX_02;
  uint **extraout_EDX_03;
  uint **extraout_EDX_04;
  uint **extraout_EDX_05;
  uint **ppuVar24;
  undefined3 uVar26;
  uint uVar25;
  uint uVar27;
  undefined8 *puVar28;
  uint uVar29;
  uint **ppuVar30;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined1 local_1c1;
  uint **local_1c0;
  int local_1b0;
  uint *local_1ac;
  uint *puStack_1a8;
  uint **ppuStack_1a4;
  int iStack_1a0;
  uint **local_19c;
  int iStack_198;
  int iStack_194;
  uint **ppuStack_190;
  uint **local_18c;
  char local_188;
  char cStack_187;
  undefined2 uStack_186;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  uint *puStack_174;
  uint *local_170;
  int iStack_16c;
  uint uStack_168;
  int local_164;
  uint local_160;
  int local_15c;
  int local_158;
  uint local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  uint **ppuStack_13c;
  uint **ppuStack_138;
  uint **ppuStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128;
  undefined7 uStack_127;
  uint local_120;
  char local_11c;
  undefined8 local_11b;
  undefined8 local_113;
  undefined8 local_10b;
  undefined7 local_103;
  undefined4 uStack_fc;
  uint local_f8;
  undefined8 *local_f4;
  int local_f0;
  undefined4 *local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined4 uStack_c9;
  int local_c4;
  int local_c0;
  uint local_bc;
  char *local_b8;
  uint local_b4;
  undefined1 *local_b0;
  SIZE_T local_ac;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint **local_90;
  int local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  uint **local_74;
  uint **ppuStack_70;
  uint **local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint uStack_49;
  undefined4 local_30;
  byte bVar12;

  local_b8 = *(char **)(param_7 + 1);
  local_a4 = param_4;
  local_a0 = param_5;
  if (*local_b8 != '\0') {
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  uVar22 = param_2 >> 1;
  local_78 = param_2;
  if (uVar22 < param_5) {
LAB_10024c33:
    local_80 = param_6[4];
    uVar22 = param_6[1];
    if ((uint)param_6[3] < (uint)param_6[1]) {
      uVar22 = param_6[3];
    }
    local_88 = (local_80 + uVar22) - local_80;
    if (local_80 + uVar22 < local_80) {
      local_88 = 0;
    }
    if (uVar22 < local_88) {
      local_88 = uVar22;
    }
    if ((uint)param_6[6] < local_88) {
      local_88 = param_6[6];
    }
    if (local_88 == 0) {
      *(undefined1 *)param_1 = 0xff;
      return;
    }
    local_7c = *param_6;
    local_8c = param_6[2];
    local_84 = param_6[5];
    puVar2 = *(undefined4 **)((int)param_7 + 0xc);
    local_f8 = 0;
LAB_10024cab:
    puVar3 = *(uint **)(local_8c + local_f8 * 8);
    ppuStack_1a4 = *(uint ***)(local_8c + 4 + local_f8 * 8);
    local_1ac = (uint *)0x2c;
    iStack_1a0 = 0;
    iStack_198 = 0x2c;
    iStack_194 = CONCAT31(iStack_194._1_3_,1);
    ppuStack_190 = (uint **)0x0;
    local_188 = '\x01';
    cStack_187 = '\0';
    puStack_1a8 = puVar3;
    local_19c = ppuStack_1a4;
    local_18c = ppuStack_1a4;
    FUN_10090ba0(&local_140,(int)&local_1ac);
    ppuVar23 = ppuStack_190;
    if (CONCAT22(local_140._2_2_,CONCAT11(local_140._1_1_,(char)local_140)) != 1) {
      if ((cStack_187 == '\0') &&
         ((cStack_187 = '\x01', local_188 == '\x01' || (local_18c != ppuStack_190)))) {
        ppuVar24 = (uint **)((int)local_18c - (int)ppuStack_190);
        puVar3 = puStack_1a8;
        goto LAB_10024d5b;
      }
      FUN_10110c20((SIZE_T *)&ppuStack_13c,*(void **)(*(int *)*puVar2 + 4),
                   *(SIZE_T *)(*(int *)*puVar2 + 8));
      local_e8 = CONCAT44(uStack_12c,uStack_130);
      local_e0 = CONCAT71(uStack_127,local_128);
      ppuVar23 = ppuStack_138;
      ppuVar30 = ppuStack_13c;
      goto LAB_100262ef;
    }
    ppuVar24 = (uint **)((int)ppuStack_13c - (int)ppuStack_190);
    ppuStack_190 = ppuStack_138;
LAB_10024d5b:
    local_f0 = *(int *)*puVar2;
    if (ppuVar24 == (uint **)0x0) {
      uVar16 = 0xffffffff;
    }
    else {
      puVar15 = (undefined4 *)
                FUN_100025a0((int *)puVar2[1],(uint *)((int)puVar3 + (int)ppuVar23),(uint)ppuVar24);
      if (puVar15 == (undefined4 *)0x0) {
        uVar22 = puVar2[2];
        _Dst = FUN_10107380(0,(SIZE_T)ppuVar24);
        if (_Dst == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        memcpy(_Dst,(uint *)((int)puVar3 + (int)ppuVar23),(size_t)ppuVar24);
        local_b0 = &LAB_100922c0;
        local_b4 = uVar22;
        FUN_10093970((undefined8 *)&local_128,(ushort *)&DAT_1013f96e,(uint)&local_b4);
        ppuVar23 = (uint **)&DAT_00000006;
        ppuVar30 = (uint **)&DAT_1013f94f;
        local_1c1 = 5;
        local_1c0 = (uint **)(uint)local_140._2_2_;
        local_e8 = CONCAT44(ppuVar24,_Dst);
        local_e0 = CONCAT71(uStack_127,local_128);
        local_d8 = (ulonglong)local_120;
        cVar19 = local_140._1_1_;
        goto LAB_10025daf;
      }
      uVar16 = *puVar15;
    }
    puVar3 = puStack_1a8;
    ppuVar24 = &local_1ac;
    local_ec = (undefined4 *)(local_7c + local_f8 * 0x18);
    local_ec[2] = uVar16;
    if (cStack_187 != '\0') goto LAB_1002629c;
    FUN_10090ba0(&local_140,(int)ppuVar24);
    puVar8 = puStack_1a8;
    if (CONCAT22(local_140._2_2_,CONCAT11(local_140._1_1_,(char)local_140)) == 1) {
      uVar22 = (int)ppuStack_13c - (int)ppuStack_190;
      ppuVar23 = ppuStack_190;
      ppuVar10 = ppuStack_138;
    }
    else {
      if ((cStack_187 != '\0') ||
         ((cStack_187 = '\x01', local_188 != '\x01' && (local_18c == ppuStack_190))))
      goto LAB_1002629c;
      uVar22 = (int)local_18c - (int)ppuStack_190;
      ppuVar23 = extraout_EDX;
      ppuVar10 = ppuStack_190;
      puVar3 = puStack_1a8;
    }
    ppuVar30 = (uint **)((int)ppuStack_190 + (int)puVar3);
    if (uVar22 == 1) {
      bVar11 = *(byte *)ppuVar30;
      if ((bVar11 != 0x2b) && (bVar11 != 0x2d)) {
        if (bVar11 != 0x2d) goto LAB_10024e11;
LAB_10024ee0:
        ppuVar24 = &local_1ac;
        ppuVar30 = (uint **)((int)ppuVar30 + 1);
        pbVar20 = (byte *)0x0;
        ppuVar23 = (uint **)(uVar22 - 1);
        if (uVar22 < 9) {
          for (; ppuVar23 != (uint **)0x0; ppuVar23 = (uint **)((int)ppuVar23 + -1)) {
            bVar11 = *(byte *)ppuVar30;
            if (9 < bVar11 - 0x30) goto LAB_10025dad;
            ppuVar30 = (uint **)((int)ppuVar30 + 1);
            pbVar20 = (byte *)((int)pbVar20 * 10 - (bVar11 - 0x30));
          }
        }
        else {
          do {
            iVar21 = (int)((longlong)(int)pbVar20 * 10);
            if ((longlong)iVar21 != (longlong)(int)pbVar20 * 10) goto LAB_10026500;
            uVar22 = *(byte *)ppuVar30 - 0x30;
            if (9 < uVar22) goto LAB_10025dad;
            pbVar20 = (byte *)(iVar21 - uVar22);
            if (SBORROW4(iVar21,uVar22)) goto LAB_1002651b;
            ppuVar30 = (uint **)((int)ppuVar30 + 1);
            ppuVar23 = (uint **)((int)ppuVar23 + -1);
          } while (ppuVar23 != (uint **)0x0);
        }
        goto LAB_10024f34;
      }
      goto LAB_10026319;
    }
    if (uVar22 != 0) {
      bVar11 = *(byte *)ppuVar30;
      if (bVar11 == 0x2d) goto LAB_10024ee0;
LAB_10024e11:
      ppuVar24 = &local_1ac;
      if (bVar11 == 0x2b) {
        ppuVar30 = (uint **)((int)ppuVar30 + 1);
        uVar22 = uVar22 - 1;
      }
      pbVar20 = (byte *)0x0;
      if (uVar22 < 8) {
        for (; uVar22 != 0; uVar22 = uVar22 - 1) {
          ppuVar23 = (uint **)(*(byte *)ppuVar30 - 0x30);
          if ((uint **)0x9 < ppuVar23) goto LAB_10025dad;
          ppuVar30 = (uint **)((int)ppuVar30 + 1);
          pbVar20 = (byte *)((int)ppuVar23 + (int)pbVar20 * 10);
        }
      }
      else {
        do {
          iVar21 = (int)((longlong)(int)pbVar20 * 10);
          if ((longlong)iVar21 != (longlong)(int)pbVar20 * 10) goto LAB_10026439;
          ppuVar23 = (uint **)(*(byte *)ppuVar30 - 0x30);
          if ((uint **)0x9 < ppuVar23) goto LAB_10025dad;
          pbVar20 = (byte *)(iVar21 + (int)ppuVar23);
          if (SCARRY4(iVar21,(int)ppuVar23)) goto LAB_10026432;
          ppuVar30 = (uint **)((int)ppuVar30 + 1);
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
LAB_10024f34:
      local_1c1 = 9;
      ppuVar24 = &local_1ac;
      *local_ec = pbVar20;
      ppuStack_190 = ppuVar10;
      if (cStack_187 == '\0') {
        FUN_10090ba0(&local_140,(int)ppuVar24);
        puVar3 = puStack_1a8;
        if (CONCAT22(local_140._2_2_,CONCAT11(local_140._1_1_,(char)local_140)) == 1) {
          uVar22 = (int)ppuStack_13c - (int)ppuStack_190;
          ppuVar23 = ppuStack_190;
          ppuVar10 = ppuStack_138;
        }
        else {
          if ((cStack_187 != '\0') ||
             ((cStack_187 = '\x01', local_188 != '\x01' && (local_18c == ppuStack_190))))
          goto LAB_1002629c;
          uVar22 = (int)local_18c - (int)ppuStack_190;
          ppuVar23 = extraout_EDX_00;
          ppuVar10 = ppuStack_190;
          puVar8 = puStack_1a8;
        }
        ppuVar30 = (uint **)((int)ppuStack_190 + (int)puVar8);
        if (uVar22 == 1) {
          bVar11 = *(byte *)ppuVar30;
          if ((bVar11 == 0x2b) || (bVar11 == 0x2d)) goto LAB_10026319;
          if (bVar11 != 0x2d) goto LAB_10024f9a;
LAB_1002506b:
          ppuVar24 = &local_1ac;
          ppuVar30 = (uint **)((int)ppuVar30 + 1);
          pbVar20 = (byte *)0x0;
          ppuVar23 = (uint **)(uVar22 - 1);
          if (uVar22 < 9) {
            for (; ppuVar23 != (uint **)0x0; ppuVar23 = (uint **)((int)ppuVar23 + -1)) {
              bVar11 = *(byte *)ppuVar30;
              if (9 < bVar11 - 0x30) goto LAB_10025dad;
              ppuVar30 = (uint **)((int)ppuVar30 + 1);
              pbVar20 = (byte *)((int)pbVar20 * 10 - (bVar11 - 0x30));
            }
          }
          else {
            do {
              iVar21 = (int)((longlong)(int)pbVar20 * 10);
              if ((longlong)iVar21 != (longlong)(int)pbVar20 * 10) goto LAB_10026500;
              uVar22 = *(byte *)ppuVar30 - 0x30;
              if (9 < uVar22) goto LAB_10025dad;
              pbVar20 = (byte *)(iVar21 - uVar22);
              if (SBORROW4(iVar21,uVar22)) goto LAB_1002651b;
              ppuVar30 = (uint **)((int)ppuVar30 + 1);
              ppuVar23 = (uint **)((int)ppuVar23 + -1);
            } while (ppuVar23 != (uint **)0x0);
          }
        }
        else {
          if (uVar22 == 0) goto LAB_10026320;
          bVar11 = *(byte *)ppuVar30;
          if (bVar11 == 0x2d) goto LAB_1002506b;
LAB_10024f9a:
          ppuVar24 = &local_1ac;
          if (bVar11 == 0x2b) {
            ppuVar30 = (uint **)((int)ppuVar30 + 1);
            uVar22 = uVar22 - 1;
          }
          pbVar20 = (byte *)0x0;
          if (uVar22 < 8) {
            for (; uVar22 != 0; uVar22 = uVar22 - 1) {
              ppuVar23 = (uint **)(*(byte *)ppuVar30 - 0x30);
              if ((uint **)0x9 < ppuVar23) goto LAB_10025dad;
              ppuVar30 = (uint **)((int)ppuVar30 + 1);
              pbVar20 = (byte *)((int)ppuVar23 + (int)pbVar20 * 10);
            }
          }
          else {
            do {
              iVar21 = (int)((longlong)(int)pbVar20 * 10);
              if ((longlong)iVar21 != (longlong)(int)pbVar20 * 10) goto LAB_10026439;
              ppuVar23 = (uint **)(*(byte *)ppuVar30 - 0x30);
              if ((uint **)0x9 < ppuVar23) goto LAB_10025dad;
              pbVar20 = (byte *)(iVar21 + (int)ppuVar23);
              if (SCARRY4(iVar21,(int)ppuVar23)) goto LAB_10026432;
              ppuVar30 = (uint **)((int)ppuVar30 + 1);
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
        }
        ppuVar24 = &local_1ac;
        local_ec[1] = pbVar20;
        ppuStack_190 = ppuVar10;
        if (cStack_187 == '\0') {
          FUN_10090ba0(&local_140,(int)ppuVar24);
          ppuVar23 = ppuStack_190;
          if (CONCAT22(local_140._2_2_,CONCAT11(local_140._1_1_,(char)local_140)) == 1) {
            ppuStack_190 = ppuStack_138;
            local_bc = (int)ppuStack_13c - (int)ppuVar23;
          }
          else {
            if ((cStack_187 != '\0') ||
               ((cStack_187 = '\x01', local_188 != '\x01' && (local_18c == ppuStack_190))))
            goto LAB_1002629c;
            local_bc = (int)local_18c - (int)ppuStack_190;
            puVar3 = puStack_1a8;
          }
          local_90 = (uint **)((int)puVar3 + (int)ppuVar23);
          if (local_bc == 0) {
            pbVar20 = (byte *)puVar2[3];
LAB_1002524a:
            ppuVar23 = (uint **)(*(code *)0x4047b0)();
            LOCK();
            bVar11 = *pbVar20;
            if (bVar11 == 0) {
              *pbVar20 = 1;
            }
            UNLOCK();
            if (bVar11 == 0) {
              iVar21 = *(int *)(pbVar20 + 0x14);
            }
            else {
              FUN_10138380(pbVar20);
              iVar21 = *(int *)(pbVar20 + 0x14);
            }
            if (iVar21 != 0) {
              uVar39 = FUN_1002e000(*(uint *)(pbVar20 + 0x18),*(uint *)(pbVar20 + 0x1c),
                                    *(uint *)(pbVar20 + 0x20),*(uint *)(pbVar20 + 0x24),
                                    (uint)ppuVar23);
              uVar22 = (uint)uVar39;
              local_1b0 = 0;
              bVar11 = (byte)((ulonglong)uVar39 >> 0x18) >> 1;
              auVar32 = ZEXT216(CONCAT11(bVar11,bVar11));
              auVar32 = pshuflw(auVar32,auVar32,0);
              while( true ) {
                uVar22 = *(uint *)(pbVar20 + 0xc) & uVar22;
                pcVar1 = (char *)(*(int *)(pbVar20 + 8) + uVar22);
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
                uVar27 = (uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
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
                while ((short)uVar27 != 0) {
                  iVar21 = 0;
                  for (uVar29 = uVar27; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
                    iVar21 = iVar21 + 1;
                  }
                  uVar27 = uVar27 - 1 & uVar27;
                  if (ppuVar23 ==
                      *(uint ***)
                       (*(int *)(pbVar20 + 8) + (iVar21 + uVar22 & *(uint *)(pbVar20 + 0xc)) * -4 +
                       -4)) {
                    LOCK();
                    bVar11 = *pbVar20;
                    if (bVar11 == 1) {
                      *pbVar20 = 0;
                    }
                    UNLOCK();
                    if (bVar11 != 1) {
                      FUN_10137fb0(pbVar20);
                    }
                    goto LAB_1002524a;
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
                if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar33 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar33 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar33 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar33 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar33 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar33 >> 0x5f,0) & 1) != 0) || (SUB161(auVar33 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') break;
                uVar22 = uVar22 + 0x10 + local_1b0;
                local_1b0 = local_1b0 + 0x10;
              }
            }
LAB_1002540f:
            LOCK();
            bVar11 = *pbVar20;
            if (bVar11 == 1) {
              *pbVar20 = 0;
            }
            UNLOCK();
            if (bVar11 != 1) {
              FUN_10137fb0(pbVar20);
            }
            puVar28 = (undefined8 *)(local_f8 * 0x20 + local_84);
            *(uint ***)(puVar28 + 3) = ppuVar23;
            pbVar4 = (byte *)puVar2[3];
            LOCK();
            bVar11 = *pbVar4;
            if (bVar11 == 0) {
              *pbVar4 = 1;
            }
            UNLOCK();
            if (bVar11 != 0) {
              FUN_10138380(pbVar4);
            }
            uVar27 = *(uint *)(puVar28 + 3);
            local_f4 = puVar28;
            uVar39 = FUN_1002e000(*(uint *)(pbVar4 + 0x18),*(uint *)(pbVar4 + 0x1c),
                                  *(uint *)(pbVar4 + 0x20),*(uint *)(pbVar4 + 0x24),uVar27);
            uVar22 = (uint)uVar39;
            uVar26 = (undefined3)((uint)pbVar20 >> 8);
            if (*(int *)(pbVar4 + 0x10) == 0) {
              FUN_10135590((undefined4 *)(pbVar4 + 8),1,(uint *)(pbVar4 + 0x18));
            }
            local_1c0 = *(uint ***)(pbVar4 + 0xc);
            local_c4 = 0;
            local_c0 = 0;
            local_94 = local_f8 + 1;
            local_f8 = local_f8 + local_80;
            pauVar5 = *(undefined1 (**) [16])(pbVar4 + 8);
            local_98 = uVar22 >> 0x19;
            bVar11 = (byte)((ulonglong)uVar39 >> 0x18);
            bVar12 = bVar11 >> 1;
            auVar32 = ZEXT216(CONCAT11(bVar12,bVar12));
            auVar32 = pshuflw(auVar32,auVar32,0);
            do {
              uVar22 = (uint)local_1c0 & uVar22;
              ppuVar24 = (uint **)CONCAT31(uVar26,10);
              auVar36 = *(undefined1 (*) [16])(*pauVar5 + uVar22);
              auVar38[0] = -(auVar36[0] == auVar32[0]);
              auVar38[1] = -(auVar36[1] == auVar32[1]);
              auVar38[2] = -(auVar36[2] == auVar32[2]);
              auVar38[3] = -(auVar36[3] == auVar32[3]);
              auVar38[4] = -(auVar36[4] == auVar32[4]);
              auVar38[5] = -(auVar36[5] == auVar32[5]);
              auVar38[6] = -(auVar36[6] == auVar32[6]);
              auVar38[7] = -(auVar36[7] == auVar32[7]);
              auVar38[8] = -(auVar36[8] == auVar32[0]);
              auVar38[9] = -(auVar36[9] == auVar32[1]);
              auVar38[10] = -(auVar36[10] == auVar32[2]);
              auVar38[0xb] = -(auVar36[0xb] == auVar32[3]);
              auVar38[0xc] = -(auVar36[0xc] == auVar32[4]);
              auVar38[0xd] = -(auVar36[0xd] == auVar32[5]);
              bVar12 = auVar36[0xf];
              auVar38[0xe] = -(auVar36[0xe] == auVar32[6]);
              auVar38[0xf] = -(bVar12 == auVar32[7]);
              uVar29 = (uint)(ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(auVar38[0xf] >> 7) << 0xf);
              while ((short)uVar29 != 0) {
                iVar21 = 0;
                for (uVar25 = uVar29; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
                  iVar21 = iVar21 + 1;
                }
                uVar29 = uVar29 - 1 & uVar29;
                uVar25 = iVar21 + uVar22 & (uint)local_1c0;
                ppuVar24 = (uint **)CONCAT31((int3)(uVar25 * 4 >> 8),10);
                if (uVar27 == *(uint *)((int)pauVar5 + uVar25 * -4 + -4)) goto LAB_100255cf;
              }
              uVar29 = local_9c;
              if (local_c4 == 1) {
LAB_10025542:
                auVar35[0] = -(auVar36[0] == -1);
                auVar35[1] = -(auVar36[1] == -1);
                auVar35[2] = -(auVar36[2] == -1);
                auVar35[3] = -(auVar36[3] == -1);
                auVar35[4] = -(auVar36[4] == -1);
                auVar35[5] = -(auVar36[5] == -1);
                auVar35[6] = -(auVar36[6] == -1);
                auVar35[7] = -(auVar36[7] == 0xff);
                auVar35[8] = -(auVar36[8] == -1);
                auVar35[9] = -(auVar36[9] == -1);
                auVar35[10] = -(auVar36[10] == -1);
                auVar35[0xb] = -(auVar36[0xb] == -1);
                auVar35[0xc] = -(auVar36[0xc] == -1);
                auVar35[0xd] = -(auVar36[0xd] == -1);
                auVar35[0xe] = -(auVar36[0xe] == -1);
                auVar35[0xf] = -(bVar12 == 0xff);
                if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar35 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar35 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar35 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar35 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar35 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') goto LAB_10025595;
                local_c4 = 1;
                local_9c = uVar29;
              }
              else {
                uVar29 = (uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
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
                                       (ushort)(bVar12 >> 7) << 0xf);
                if (uVar29 != 0) {
                  iVar21 = 0;
                  for (; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
                    iVar21 = iVar21 + 1;
                  }
                  uVar29 = iVar21 + uVar22 & (uint)local_1c0;
                  goto LAB_10025542;
                }
                local_c4 = 0;
              }
              uVar26 = (undefined3)((uint)ppuVar24 >> 8);
              uVar22 = local_c0 + 0x10 + uVar22;
              local_c0 = local_c0 + 0x10;
            } while( true );
          }
          bVar11 = *(byte *)local_90;
          if ((local_bc != 1) ||
             ((ppuVar23 = (uint **)0x1, ppuVar30 = local_90, bVar11 != 0x2b && (bVar11 != 0x2d)))) {
            uVar22 = local_bc - (bVar11 == 0x2b);
            pbVar20 = (byte *)((uint)(bVar11 == 0x2b) + (int)local_90);
            if (uVar22 < 9) {
              ppuVar30 = (uint **)0x0;
              for (; ppuVar23 = ppuVar30, uVar22 != 0; uVar22 = uVar22 - 1) {
                uVar27 = (uint)*pbVar20;
                ppuVar24 = (uint **)((uVar27 - 0x41 & 0xffffffdf) + 10);
                ppuVar23 = (uint **)(uVar27 - 0x30);
                if (0x39 < uVar27) {
                  ppuVar23 = ppuVar24;
                }
                if ((uint **)0xf < ppuVar23) goto LAB_10025dad;
                pbVar20 = pbVar20 + 1;
                ppuVar30 = (uint **)((int)ppuVar30 << 4 | (uint)ppuVar23);
              }
            }
            else {
              ppuVar23 = (uint **)0x0;
              do {
                bVar11 = *pbVar20;
                ppuVar24 = (uint **)(uint)bVar11;
                ppuVar30 = ppuVar24 + -0xc;
                if ((uint **)0xfffffff < ppuVar23) {
                  if (0x39 < bVar11) {
                    ppuVar30 = (uint **)(((uint)((int)ppuVar24 + -0x41) & 0xffffffde) + 10);
                  }
                  cVar19 = (ppuVar30 < &DAT_00000010) + '\x01';
                  goto LAB_10025daf;
                }
                if (0x39 < bVar11) {
                  ppuVar30 = (uint **)(((uint)((int)ppuVar24 + -0x41) & 0xffffffdf) + 10);
                }
                if ((uint **)0xf < ppuVar30) goto LAB_10025dad;
                uVar22 = uVar22 - 1;
                pbVar20 = pbVar20 + 1;
                ppuVar23 = (uint **)((uint)ppuVar30 | (int)ppuVar23 << 4);
              } while (uVar22 != 0);
            }
            pbVar20 = (byte *)puVar2[3];
            LOCK();
            bVar31 = *pbVar20 == 0;
            if (bVar31) {
              *pbVar20 = 1;
            }
            UNLOCK();
joined_r0x1002530f:
            if (bVar31) {
              iVar21 = *(int *)(pbVar20 + 0x14);
            }
            else {
              FUN_10138380(pbVar20);
              iVar21 = *(int *)(pbVar20 + 0x14);
            }
            if (iVar21 != 0) {
              uVar39 = FUN_1002e000(*(uint *)(pbVar20 + 0x18),*(uint *)(pbVar20 + 0x1c),
                                    *(uint *)(pbVar20 + 0x20),*(uint *)(pbVar20 + 0x24),
                                    (uint)ppuVar23);
              uVar22 = (uint)uVar39;
              local_1b0 = 0;
              bVar11 = (byte)((ulonglong)uVar39 >> 0x18) >> 1;
              auVar32 = ZEXT216(CONCAT11(bVar11,bVar11));
              auVar32 = pshuflw(auVar32,auVar32,0);
              while( true ) {
                uVar22 = *(uint *)(pbVar20 + 0xc) & uVar22;
                pcVar1 = (char *)(*(int *)(pbVar20 + 8) + uVar22);
                auVar37[0] = -(*pcVar1 == auVar32[0]);
                auVar37[1] = -(pcVar1[1] == auVar32[1]);
                auVar37[2] = -(pcVar1[2] == auVar32[2]);
                auVar37[3] = -(pcVar1[3] == auVar32[3]);
                auVar37[4] = -(pcVar1[4] == auVar32[4]);
                auVar37[5] = -(pcVar1[5] == auVar32[5]);
                auVar37[6] = -(pcVar1[6] == auVar32[6]);
                auVar37[7] = -(pcVar1[7] == auVar32[7]);
                auVar37[8] = -(pcVar1[8] == auVar32[0]);
                auVar37[9] = -(pcVar1[9] == auVar32[1]);
                auVar37[10] = -(pcVar1[10] == auVar32[2]);
                auVar37[0xb] = -(pcVar1[0xb] == auVar32[3]);
                auVar37[0xc] = -(pcVar1[0xc] == auVar32[4]);
                auVar37[0xd] = -(pcVar1[0xd] == auVar32[5]);
                auVar37[0xe] = -(pcVar1[0xe] == auVar32[6]);
                auVar37[0xf] = -(pcVar1[0xf] == auVar32[7]);
                uVar27 = (uint)(ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(auVar37[0xf] >> 7) << 0xf);
                while ((short)uVar27 != 0) {
                  iVar21 = 0;
                  for (uVar29 = uVar27; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
                    iVar21 = iVar21 + 1;
                  }
                  uVar27 = uVar27 - 1 & uVar27;
                  if (ppuVar23 ==
                      *(uint ***)
                       (*(int *)(pbVar20 + 8) + (iVar21 + uVar22 & *(uint *)(pbVar20 + 0xc)) * -4 +
                       -4)) {
                    LOCK();
                    bVar11 = *pbVar20;
                    if (bVar11 == 1) {
                      *pbVar20 = 0;
                    }
                    UNLOCK();
                    if (bVar11 != 1) {
                      FUN_10137fb0(pbVar20);
                    }
                    ppuVar23 = (uint **)(*(code *)0x4047b0)();
                    LOCK();
                    bVar31 = *pbVar20 == 0;
                    if (bVar31) {
                      *pbVar20 = 1;
                    }
                    UNLOCK();
                    goto joined_r0x1002530f;
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
                if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar34 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar34 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x5f,0) & 1) != 0) || (SUB161(auVar34 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') break;
                uVar22 = uVar22 + 0x10 + local_1b0;
                local_1b0 = local_1b0 + 0x10;
              }
            }
            goto LAB_1002540f;
          }
          goto LAB_10026319;
        }
      }
      goto LAB_1002629c;
    }
    goto LAB_10026320;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_10024c33;
    local_a4 = param_4 >> 1;
  }
  else {
    piVar18 = FUN_100be180();
    if (piVar18 == (int *)0x0) goto LAB_100265d3;
    if (*piVar18 == 0) {
      piVar18 = FUN_100c0800();
    }
    else {
      piVar18 = (int *)(*piVar18 + 0x8c);
    }
    local_a4 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar18 + 0x104)) {
      local_a4 = *(uint *)(*piVar18 + 0x104);
    }
  }
  local_19c = (uint **)(param_6[1] - uVar22);
  local_b4 = uVar22;
  if ((uint)param_6[1] < uVar22) {
LAB_10026522:
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_10143bf4);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  iStack_194 = param_6[3] - uVar22;
  if ((uint)param_6[3] < uVar22) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  iVar21 = param_6[6] - uVar22;
  if ((uint)param_6[6] < uVar22) goto LAB_10026522;
  iStack_16c = *param_6;
  local_1ac = &local_78;
  iStack_1a0 = iStack_16c + uVar22 * 0x18;
  puStack_1a8 = &local_b4;
  ppuStack_1a4 = (uint **)&local_a4;
  local_164 = param_6[2];
  local_158 = param_6[5];
  iStack_198 = local_164 + uVar22 * 8;
  puStack_174 = &local_b4;
  local_15c = param_6[4];
  ppuStack_190 = (uint **)(local_15c + uVar22);
  local_18c = (uint **)(uVar22 * 0x20 + local_158);
  local_188 = (char)iVar21;
  cStack_187 = (char)((uint)iVar21 >> 8);
  uStack_186 = (undefined2)((uint)iVar21 >> 0x10);
  uStack_17c = *(undefined4 *)(param_7 + 1);
  uStack_178 = *(undefined4 *)((int)param_7 + 0xc);
  uStack_184 = (undefined4)*param_7;
  uStack_180 = (undefined4)((ulonglong)*param_7 >> 0x20);
  local_150 = *param_7;
  local_170 = &local_a4;
  local_148 = *(undefined4 *)(param_7 + 1);
  uStack_168 = uVar22;
  local_160 = uVar22;
  local_154 = uVar22;
  local_144 = uStack_178;
  piVar18 = FUN_100be180();
  if (piVar18 == (int *)0x0) {
LAB_100265d3:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  iVar21 = *piVar18;
  if (iVar21 == 0) {
    piVar18 = FUN_100c0800();
    iVar6 = *piVar18;
    piVar18 = FUN_100be180();
    if (piVar18 == (int *)0x0) goto LAB_100265d3;
    iVar21 = *piVar18;
    if (iVar21 == 0) {
      FUN_1012ea80((char *)&local_140,(uint *)(iVar6 + 0x40),&local_1ac);
      goto LAB_10025fe1;
    }
    if (*(int *)(iVar21 + 0x8c) != iVar6) {
      FUN_10131190((char *)&local_140,(uint *)(iVar6 + 0x40),iVar21,&local_1ac);
      goto LAB_10025fe1;
    }
  }
  FUN_10036250(&local_140,(undefined8 *)&local_1ac,iVar21,0);
LAB_10025fe1:
  local_60 = CONCAT17((undefined1)uStack_130,CONCAT43(ppuStack_134,ppuStack_138._1_3_));
  local_58 = CONCAT17(local_128,CONCAT43(uStack_12c,uStack_130._1_3_));
  uVar26 = CONCAT21(local_140._2_2_,local_140._1_1_);
  local_68 = CONCAT17(ppuStack_138._0_1_,CONCAT43(ppuStack_13c,uVar26));
  uStack_49 = local_120;
  local_e8 = local_11b;
  local_e0 = local_113;
  local_d8 = local_10b;
  uStack_c9 = uStack_fc;
  local_170._1_3_ = (undefined3)local_103;
  iStack_16c = (int)((uint7)local_103 >> 0x18);
  uStack_178._0_1_ = (undefined1)((ulonglong)local_113 >> 0x38);
  uStack_180._1_3_ = (undefined3)local_113;
  uStack_17c = (undefined4)((ulonglong)local_113 >> 0x18);
  local_170._0_1_ = (undefined1)((ulonglong)local_10b >> 0x38);
  uStack_178._1_3_ = (undefined3)local_10b;
  puStack_174 = (uint *)((ulonglong)local_10b >> 0x18);
  cStack_187 = (char)local_11b;
  uStack_180._0_1_ = (undefined1)((ulonglong)local_11b >> 0x38);
  uStack_186 = (undefined2)((ulonglong)local_11b >> 8);
  uStack_184 = (undefined4)((ulonglong)local_11b >> 0x18);
  if ((char)local_140 == -1) {
    if (local_11c == -1) {
      *(undefined1 *)param_1 = 0xff;
    }
    else {
      param_1[2] = CONCAT44(puStack_174,uStack_178);
      *(undefined4 *)(param_1 + 4) = uStack_fc;
      param_1[3] = CONCAT44(iStack_16c,local_170);
      param_1[1] = CONCAT44(uStack_17c,uStack_180);
      *param_1 = CONCAT44(uStack_184,CONCAT22(uStack_186,CONCAT11(cStack_187,local_11c)));
    }
  }
  else {
    iStack_194._1_3_ = (undefined3)uStack_127;
    ppuStack_190 = (uint **)((uint7)uStack_127 >> 0x18);
    if (local_11c == -1) {
      local_1ac = (uint *)CONCAT31(uVar26,(char)local_140);
      iStack_194 = CONCAT31(iStack_194._1_3_,local_128);
      param_1[1] = CONCAT44(ppuStack_134,ppuStack_138);
      *param_1 = CONCAT44(ppuStack_13c,local_1ac);
      *(uint *)(param_1 + 4) = local_120;
      param_1[2] = CONCAT44(uStack_12c,uStack_130);
      param_1[3] = CONCAT44(ppuStack_190,iStack_194);
    }
    else {
      local_1ac = (uint *)CONCAT31(uVar26,(char)local_140);
      iStack_194 = CONCAT31(iStack_194._1_3_,local_128);
      local_18c = (uint **)local_120;
      local_188 = local_11c;
      param_1[2] = CONCAT44(uStack_12c,uStack_130);
      *(uint *)(param_1 + 4) = local_120;
      param_1[3] = CONCAT44(ppuStack_190,iStack_194);
      param_1[1] = CONCAT44(ppuStack_134,ppuStack_138);
      *param_1 = CONCAT44(ppuStack_13c,local_1ac);
      FUN_10005ca0(&local_188);
    }
  }
  return;
LAB_10026439:
  cVar13 = '\x02';
  goto LAB_10026502;
LAB_10026500:
  cVar13 = '\x03';
LAB_10026502:
  local_1c1 = 9;
  ppuVar24 = &local_1ac;
  cVar19 = '\x01';
  if ((byte)(*(byte *)ppuVar30 - 0x30) < 10) {
    cVar19 = cVar13;
  }
  goto LAB_10025daf;
LAB_1002651b:
  local_1c1 = 9;
  ppuVar24 = &local_1ac;
  cVar19 = '\x03';
  goto LAB_10025daf;
LAB_10026432:
  local_1c1 = 9;
  cVar19 = '\x02';
  goto LAB_10025daf;
LAB_1002653b:
  ppuVar23 = (uint **)(uint)(byte)(bVar12 - 0x30);
  cVar19 = ((byte)(bVar12 - 0x30) < 10) + '\x01';
  goto LAB_10025daf;
LAB_10025dad:
  local_1c1 = 9;
  cVar19 = '\x01';
  goto LAB_10025daf;
LAB_100265b7:
  cVar19 = '\x02';
  goto LAB_10025daf;
LAB_10025595:
  bVar12 = (*pauVar5)[uVar29];
  if (-1 < (char)bVar12) {
    auVar32 = *pauVar5;
    uVar29 = 0;
    for (uVar22 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf); (uVar22 & 1) == 0;
        uVar22 = uVar22 >> 1 | 0x80000000) {
      uVar29 = uVar29 + 1;
    }
    bVar12 = (*pauVar5)[uVar29];
  }
  *(uint *)(pbVar4 + 0x10) = *(int *)(pbVar4 + 0x10) - (uint)(bVar12 & 1);
  bVar11 = bVar11 >> 1;
  (*pauVar5)[uVar29] = bVar11;
  pauVar5[1][uVar29 - 0x10 & (uint)local_1c0] = bVar11;
  *(int *)(pbVar4 + 0x14) = *(int *)(pbVar4 + 0x14) + 1;
  *(uint *)((int)pauVar5 + uVar29 * -4 + -4) = uVar27;
LAB_100255cf:
  LOCK();
  bVar11 = *pbVar4;
  if (bVar11 == 1) {
    *pbVar4 = 0;
  }
  UNLOCK();
  puVar3 = puStack_1a8;
  if (bVar11 != 1) {
    FUN_10137fb0(pbVar4);
    puVar3 = puStack_1a8;
  }
  puStack_1a8 = puVar3;
  if (cStack_187 != '\0') {
LAB_1002629c:
    FUN_10110c20((SIZE_T *)&ppuStack_13c,*(void **)(local_f0 + 4),*(SIZE_T *)(local_f0 + 8));
    local_e8 = CONCAT44(uStack_12c,uStack_130);
    local_e0 = CONCAT71(uStack_127,local_128);
    ppuVar23 = ppuStack_138;
    ppuVar30 = ppuStack_13c;
LAB_100262ef:
    local_1c0 = (uint **)(uint)local_140._2_2_;
    local_d8 = (ulonglong)local_120;
    local_1c1 = 6;
    ppuVar24 = ppuStack_134;
    cVar19 = local_140._1_1_;
    goto LAB_10025daf;
  }
  local_1c1 = 9;
  FUN_10090ba0(&local_140,(int)&local_1ac);
  ppuVar30 = ppuStack_190;
  puVar8 = puStack_1a8;
  if (CONCAT22(local_140._2_2_,CONCAT11(local_140._1_1_,(char)local_140)) == 1) {
    iVar21 = (int)ppuStack_13c - (int)ppuStack_190;
    ppuStack_190 = ppuStack_138;
    ppuVar23 = ppuVar30;
  }
  else {
    if ((cStack_187 != '\0') ||
       ((cStack_187 = '\x01', local_188 != '\x01' && (local_18c == ppuStack_190))))
    goto LAB_1002629c;
    iVar21 = (int)local_18c - (int)ppuStack_190;
    ppuVar23 = extraout_EDX_01;
    puVar3 = puStack_1a8;
  }
  ppuVar30 = (uint **)((int)puVar3 + (int)ppuVar30);
  if (iVar21 == 1) {
    bVar11 = *(byte *)ppuVar30;
    if ((bVar11 != 0x2b) && (bVar11 != 0x2d)) {
      ppuVar24 = (uint **)CONCAT31((int3)((uint)ppuVar24 >> 8),10);
      goto LAB_10025682;
    }
    goto LAB_10026319;
  }
  if (iVar21 == 0) {
LAB_10026320:
    local_1c1 = 9;
    cVar19 = '\0';
    goto LAB_10025daf;
  }
  bVar11 = *(byte *)ppuVar30;
LAB_10025682:
  ppuVar23 = (uint **)(uint)(bVar11 == 0x2b);
  uVar22 = iVar21 - (int)ppuVar23;
  ppuVar30 = (uint **)((int)ppuVar30 + (int)ppuVar23);
  if (uVar22 < 3) {
    if (uVar22 == 0) {
      uVar27 = 0;
LAB_100256f8:
      bVar11 = (byte)uVar27;
      goto LAB_100256fc;
    }
    uVar27 = *(byte *)ppuVar30 - 0x30;
    if (uVar27 < 10) {
      if (uVar22 != 1) {
        uVar22 = *(byte *)((int)ppuVar30 + 1) - 0x30;
        if (9 < uVar22) goto LAB_10026319;
        uVar27 = (uint)(byte)((char)uVar22 + (char)uVar27 * '\n');
      }
      goto LAB_100256f8;
    }
LAB_10026319:
    local_1c1 = 9;
    cVar19 = '\x01';
    goto LAB_10025daf;
  }
  bVar11 = 0;
  while (bVar31 = uVar22 != 0, uVar22 = uVar22 - 1, bVar31) {
    bVar12 = *(byte *)ppuVar30;
    sVar14 = (ushort)bVar11 * (ushort)(byte)ppuVar24;
    if ((char)((ushort)sVar14 >> 8) != '\0') goto LAB_1002653b;
    ppuVar23 = (uint **)(bVar12 - 0x30);
    if ((uint **)0x9 < ppuVar23) goto LAB_10025dad;
    ppuVar30 = (uint **)((int)ppuVar30 + 1);
    bVar12 = (byte)sVar14;
    bVar11 = bVar12 + (byte)ppuVar23;
    if (CARRY1(bVar12,(byte)ppuVar23)) goto LAB_10026432;
  }
LAB_100256fc:
  *(bool *)(local_ec + 5) = bVar11 != 0;
  local_ec[3] = local_f8 + *(int *)puVar2[4];
  ppuVar23 = &local_1ac;
  if (cStack_187 != '\0') goto LAB_10025886;
  FUN_10090ba0(&local_140,(int)ppuVar23);
  ppuVar30 = ppuStack_190;
  if (CONCAT22(local_140._2_2_,CONCAT11(local_140._1_1_,(char)local_140)) == 1) {
    uVar22 = (int)ppuStack_13c - (int)ppuStack_190;
    ppuStack_190 = ppuStack_138;
  }
  else {
    if ((cStack_187 != '\0') ||
       ((cStack_187 = '\x01', local_188 != '\x01' && (local_18c == ppuStack_190))))
    goto LAB_10025886;
    uVar22 = (int)local_18c - (int)ppuStack_190;
    puVar8 = puStack_1a8;
  }
  ppuVar30 = (uint **)((int)puVar8 + (int)ppuVar30);
  FUN_10098960((undefined1 *)&local_140,(uint *)ppuVar30,uVar22);
  puVar3 = puStack_1a8;
  ppuVar10 = extraout_EDX_02;
  if ((char)local_140 == '\x01') {
LAB_100264ee:
    ppuVar23 = ppuVar10;
    local_1c1 = 10;
    ppuVar24 = &local_1ac;
    cVar19 = local_140._1_1_;
    goto LAB_10025daf;
  }
  *local_f4 = CONCAT44(ppuStack_134,ppuStack_138);
  if (cStack_187 != '\0') goto LAB_10025886;
  FUN_10090ba0(&local_140,(int)ppuVar23);
  ppuVar30 = ppuStack_190;
  if (CONCAT22(local_140._2_2_,CONCAT11(local_140._1_1_,(char)local_140)) == 1) {
    uVar22 = (int)ppuStack_13c - (int)ppuStack_190;
    ppuStack_190 = ppuStack_138;
  }
  else {
    if ((cStack_187 != '\0') ||
       ((cStack_187 = '\x01', local_188 != '\x01' && (local_18c == ppuStack_190))))
    goto LAB_10025886;
    uVar22 = (int)local_18c - (int)ppuStack_190;
    puVar3 = puStack_1a8;
  }
  ppuVar30 = (uint **)((int)puVar3 + (int)ppuVar30);
  FUN_10098960((undefined1 *)&local_140,(uint *)ppuVar30,uVar22);
  puVar3 = puStack_1a8;
  ppuVar10 = extraout_EDX_03;
  if ((char)local_140 == '\x01') goto LAB_100264ee;
  local_f4[1] = CONCAT44(ppuStack_134,ppuStack_138);
  if (cStack_187 == '\0') {
    FUN_10090ba0(&local_140,(int)ppuVar23);
    ppuVar30 = ppuStack_190;
    puVar8 = puStack_1a8;
    if (CONCAT22(local_140._2_2_,CONCAT11(local_140._1_1_,(char)local_140)) == 1) {
      ppuVar24 = (uint **)((int)ppuStack_13c - (int)ppuStack_190);
      ppuStack_190 = ppuStack_138;
    }
    else {
      if ((cStack_187 != '\0') ||
         ((cStack_187 = '\x01', local_188 != '\x01' && (local_18c == ppuStack_190))))
      goto LAB_10025886;
      ppuVar24 = (uint **)((int)local_18c - (int)ppuStack_190);
      puVar3 = puStack_1a8;
    }
    ppuVar30 = (uint **)((int)puVar3 + (int)ppuVar30);
    if (ppuVar24 == (uint **)0x1) {
      bVar11 = *(byte *)ppuVar30;
      if ((bVar11 == 0x2b) || (bVar11 == 0x2d)) goto LAB_10026319;
    }
    else {
      if (ppuVar24 == (uint **)0x0) goto LAB_10026320;
      bVar11 = *(byte *)ppuVar30;
    }
    ppuVar23 = &local_1ac;
    uVar22 = 0;
    ppuVar24 = (uint **)((int)ppuVar24 - (uint)(bVar11 == 0x2b));
    ppuVar30 = (uint **)((int)ppuVar30 + (uint)(bVar11 == 0x2b));
    if (&DAT_00000008 < ppuVar24) {
      while (bVar31 = ppuVar24 != (uint **)0x0, ppuVar24 = (uint **)((int)ppuVar24 + -1), bVar31) {
        ppuVar23 = (uint **)((ulonglong)uVar22 * 10 >> 0x20);
        uVar27 = (uint)((ulonglong)uVar22 * 10);
        if (ppuVar23 != (uint **)0x0) {
          cVar19 = ((byte)(*(byte *)ppuVar30 - 0x30) < 10) + '\x01';
          goto LAB_10025daf;
        }
        uVar29 = *(byte *)ppuVar30 - 0x30;
        if (9 < uVar29) goto LAB_10025dad;
        ppuVar30 = (uint **)((int)ppuVar30 + 1);
        uVar22 = uVar29 + uVar27;
        if (CARRY4(uVar29,uVar27)) goto LAB_100265b7;
      }
    }
    else {
      for (; ppuVar24 != (uint **)0x0; ppuVar24 = (uint **)((int)ppuVar24 + -1)) {
        bVar11 = *(byte *)ppuVar30;
        if (9 < bVar11 - 0x30) goto LAB_10025dad;
        ppuVar30 = (uint **)((int)ppuVar30 + 1);
        uVar22 = (bVar11 - 0x30) + uVar22 * 10;
      }
    }
    *(uint *)((int)local_f4 + 0x1c) = uVar22;
    if (cStack_187 != '\0') goto LAB_10025886;
    FUN_10090ba0(&local_140,(int)&local_1ac);
    ppuVar30 = ppuStack_190;
    if (CONCAT22(local_140._2_2_,CONCAT11(local_140._1_1_,(char)local_140)) == 1) {
      uVar22 = (int)ppuStack_13c - (int)ppuStack_190;
      ppuStack_190 = ppuStack_138;
    }
    else {
      if ((cStack_187 != '\0') ||
         ((cStack_187 = '\x01', local_188 != '\x01' && (local_18c == ppuStack_190))))
      goto LAB_10025886;
      uVar22 = (int)local_18c - (int)ppuStack_190;
      puVar8 = puStack_1a8;
    }
    ppuVar30 = (uint **)((int)puVar8 + (int)ppuVar30);
    ppuVar24 = &local_1ac;
    FUN_10098960((undefined1 *)&local_140,(uint *)ppuVar30,uVar22);
    puVar3 = puStack_1a8;
    ppuVar10 = extraout_EDX_04;
    if ((char)local_140 == '\x01') goto LAB_100264ee;
    local_f4[2] = CONCAT44(ppuStack_134,ppuStack_138);
    if (cStack_187 != '\0') goto LAB_10025886;
    FUN_10090ba0(&local_140,(int)ppuVar24);
    ppuVar30 = ppuStack_190;
    if (CONCAT22(local_140._2_2_,CONCAT11(local_140._1_1_,(char)local_140)) == 1) {
      iVar21 = (int)ppuStack_13c - (int)ppuStack_190;
      ppuStack_190 = ppuStack_138;
      ppuVar23 = ppuVar30;
    }
    else {
      if ((cStack_187 != '\0') ||
         ((cStack_187 = '\x01', local_188 != '\x01' && (local_18c == ppuStack_190))))
      goto LAB_10025886;
      iVar21 = (int)local_18c - (int)ppuStack_190;
      ppuVar23 = extraout_EDX_05;
      puVar3 = puStack_1a8;
    }
    ppuVar30 = (uint **)((int)puVar3 + (int)ppuVar30);
    if (iVar21 == 1) {
      bVar11 = *(byte *)ppuVar30;
      if ((bVar11 != 0x2b) && (bVar11 != 0x2d)) goto LAB_10025cd1;
LAB_100265cc:
      cVar19 = '\x01';
      goto LAB_10025daf;
    }
    if (iVar21 == 0) goto LAB_10026320;
    bVar11 = *(byte *)ppuVar30;
LAB_10025cd1:
    uVar22 = iVar21 - (uint)(bVar11 == 0x2b);
    ppuVar30 = (uint **)((int)ppuVar30 + (uint)(bVar11 == 0x2b));
    if (uVar22 < 3) {
      ppuVar23 = &local_1ac;
      if (uVar22 == 0) goto LAB_10025994;
      uVar27 = *(byte *)ppuVar30 - 0x30;
      if (9 < uVar27) goto LAB_100265cc;
      if (uVar22 != 1) {
        uVar22 = *(byte *)((int)ppuVar30 + 1) - 0x30;
        cVar19 = '\x01';
        if (9 < uVar22) goto LAB_10025daf;
        uVar27 = (uint)(byte)((char)uVar22 + (char)uVar27 * '\n');
      }
    }
    else {
      uVar27 = 0;
      while (bVar31 = uVar22 != 0, uVar22 = uVar22 - 1, bVar31) {
        sVar14 = (ushort)(byte)uVar27 * 10;
        bVar12 = *(byte *)ppuVar30;
        if ((char)((ushort)sVar14 >> 8) != '\0') goto LAB_1002653b;
        ppuVar23 = (uint **)(bVar12 - 0x30);
        if ((uint **)0x9 < ppuVar23) goto LAB_10025dad;
        ppuVar30 = (uint **)((int)ppuVar30 + 1);
        bVar11 = (byte)sVar14;
        uVar27 = (uint)(byte)(bVar11 + (byte)ppuVar23);
        if (CARRY1(bVar11,(byte)ppuVar23)) goto LAB_100265b7;
      }
    }
    if ((char)uVar27 == '\0') goto LAB_10025994;
  }
  else {
LAB_10025886:
    if (local_bc == 0) goto LAB_10025994;
  }
  FUN_10111eb0((undefined8 *)&local_b4,*(void **)(puVar2[5] + 4),*(SIZE_T *)(puVar2[5] + 8),
               (byte *)local_90,local_bc);
  FUN_10110c70(&local_b4,"gml",3);
  SVar9 = local_ac;
  lpMem = local_b0;
  FUN_1011c880((undefined8 *)&local_74,(int)local_b0,local_ac);
  ppuVar24 = ppuStack_70;
  ppuVar23 = local_74;
  if (local_74 != (uint **)0xffffffff) {
    ppuStack_134 = local_6c;
    ppuStack_13c = local_74;
    ppuStack_138 = ppuStack_70;
    local_1c0 = local_74;
    uVar16 = FUN_10064e50(ppuStack_70,(SIZE_T)local_6c);
    puVar15 = local_ec;
    (*(code *)0x407ea8)();
    puVar15[4] = uVar16;
    if (ppuVar23 != (uint **)0x0) {
      pvVar17 = GetProcessHeap();
      HeapFree(pvVar17,0,ppuVar24);
    }
    if (local_b4 != 0) {
      pvVar17 = GetProcessHeap();
      HeapFree(pvVar17,0,lpMem);
    }
LAB_10025994:
    local_30 = (undefined4)local_d8;
    if ((*local_b8 != '\0') || (local_f8 = local_94, local_94 == local_88)) {
      *(undefined1 *)param_1 = 0xff;
      return;
    }
    goto LAB_10024cab;
  }
  FUN_10110c20((SIZE_T *)&ppuStack_134,lpMem,SVar9);
  ppuVar24 = ppuStack_134;
  local_1c0 = (uint **)(uint)local_140._2_2_;
  local_e8 = CONCAT44(uStack_12c,uStack_130);
  local_e0 = CONCAT71(uStack_127,local_128);
  local_d8 = CONCAT44(local_d8._4_4_,local_120);
  if (local_b4 != 0) {
    pvVar17 = GetProcessHeap();
    HeapFree(pvVar17,0,lpMem);
  }
  local_1c1 = 1;
  ppuVar23 = local_6c;
  ppuVar30 = ppuStack_70;
  cVar19 = local_140._1_1_;
LAB_10025daf:
  *local_b8 = '\x01';
  *(char *)((int)param_1 + 1) = cVar19;
  *(undefined2 *)((int)param_1 + 2) = local_1c0._0_2_;
  *(uint ***)((int)param_1 + 4) = ppuVar30;
  *(uint ***)(param_1 + 1) = ppuVar23;
  *(uint ***)((int)param_1 + 0xc) = ppuVar24;
  param_1[2] = local_e8;
  param_1[3] = local_e0;
  *(undefined4 *)(param_1 + 4) = (undefined4)local_d8;
  *(undefined1 *)param_1 = local_1c1;
  return;
}
