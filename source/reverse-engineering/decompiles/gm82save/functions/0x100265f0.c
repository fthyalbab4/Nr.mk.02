// rea decompile_all
// name: FUN_100265f0
// address: 0x100265f0
// body: available
// range: 0x100265f0-0x100266dd inclusive
// range: 0x100266e0-0x100267c6 inclusive
// range: 0x100267d0-0x10026812 inclusive
// range: 0x10026820-0x100268b4 inclusive
// range: 0x100268c0-0x10026bbd inclusive
// range: 0x10026bc0-0x10026c4b inclusive
// range: 0x10026c50-0x100275be inclusive
// range: 0x100275c0-0x10027706 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100265f0(undefined4 *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            undefined4 *param_7)

{
  undefined4 *puVar1;
  void *pvVar2;
  PSRWLOCK SRWLock;
  LPVOID lpMem;
  code *pcVar3;
  uint *puVar4;
  BOOLEAN BVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  HANDLE pvVar12;
  byte bVar13;
  uint uVar14;
  uint *_Size;
  uint *extraout_EDX;
  uint *puVar15;
  uint *extraout_EDX_00;
  uint *extraout_EDX_01;
  int iVar16;
  uint extraout_EDX_02;
  uint *extraout_EDX_03;
  uint extraout_EDX_04;
  int extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint uVar17;
  int extraout_EDX_08;
  uint extraout_EDX_09;
  char cVar18;
  byte *pbVar19;
  uint *puVar20;
  bool bVar21;
  uint *in_XMM0_Da;
  uint *in_XMM0_Db;
  uint *in_XMM0_Dc;
  int in_XMM0_Dd;
  ulonglong uVar22;
  uint *local_154;
  uint *local_150;
  uint *local_14c;
  undefined4 local_148;
  uint *local_144;
  uint *local_140;
  uint *puStack_13c;
  uint *local_138;
  uint *puStack_134;
  uint *puStack_130;
  int iStack_12c;
  char *local_128;
  int local_120;
  char *local_11c;
  char local_115;
  undefined4 local_114;
  uint *local_110;
  uint *local_108;
  uint *puStack_104;
  uint *local_100;
  uint *puStack_fc;
  uint *local_f8;
  uint *puStack_f4;
  uint *puStack_f0;
  uint *puStack_ec;
  uint *local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 *local_dc;
  uint *local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  uint local_c4;
  char *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 *local_b4;
  undefined1 *local_b0;
  uint local_ac;
  undefined4 *local_a8;
  char *local_a4;
  uint local_a0;
  undefined1 *local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint *local_8c;
  uint *local_88;
  uint *local_84;
  int local_80;
  uint local_7c;
  undefined4 *local_78;
  uint *local_74;
  uint *local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  char *local_18;

  local_a4 = (char *)*param_7;
  local_94 = param_4;
  local_90 = param_5;
  if (*local_a4 != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  uVar14 = param_2 >> 1;
  local_b4 = param_1;
  local_64 = param_2;
  if (uVar14 < param_5) {
LAB_1002665d:
    uVar14 = param_6[1];
    local_a0 = 0;
    local_9c = &DAT_00000004;
    local_98 = 0;
    local_b0 = &DAT_00000004;
    local_7c = param_6[2];
    local_68 = (local_7c + uVar14) - local_7c;
    if (local_7c + uVar14 < local_7c) {
      local_68 = 0;
    }
    if (uVar14 < local_68) {
      local_68 = uVar14;
    }
    if ((uint)param_6[4] < local_68) {
      local_68 = param_6[4];
    }
    local_6c = *param_6;
    puVar1 = (undefined4 *)param_7[2];
    local_80 = param_6[3];
    local_78 = (undefined4 *)param_7[1];
LAB_1002673c:
    uVar14 = local_98;
    if (local_98 != local_68) {
      puVar11 = *(uint **)(local_6c + local_98 * 8);
      local_100 = *(uint **)(local_6c + 4 + local_98 * 8);
      local_108 = (uint *)0x2c;
      puStack_fc = (uint *)0x0;
      puStack_f4 = (uint *)0x2c;
      puStack_f0 = (uint *)CONCAT31(puStack_f0._1_3_,1);
      puStack_ec = (uint *)0x0;
      local_e4 = CONCAT22(local_e4._2_2_,1);
      puStack_104 = puVar11;
      local_f8 = local_100;
      local_e8 = local_100;
      FUN_10090ba0(&local_148,(int)&local_108);
      puVar20 = puStack_ec;
      local_ac = uVar14;
      if (local_148 == (uint *)0x1) {
        _Size = (uint *)((int)local_144 - (int)puStack_ec);
        puStack_ec = local_140;
LAB_10026848:
        local_120 = *(int *)*puVar1;
        if (_Size != (uint *)0x0) {
          puVar6 = (undefined4 *)
                   FUN_100025a0((int *)puVar1[1],(uint *)((int)puVar11 + (int)puVar20),(uint)_Size);
          if (puVar6 != (undefined4 *)0x0) {
            local_150 = (uint *)*puVar6;
            puVar11 = puStack_104;
            goto joined_r0x10026877;
          }
          uVar7 = puVar1[2];
          in_XMM0_Da = FUN_10107380(0,(SIZE_T)_Size);
          if (in_XMM0_Da == (uint *)0x0) {
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          memcpy(in_XMM0_Da,(uint *)((int)puVar11 + (int)puVar20),(size_t)_Size);
          local_110 = (uint *)&LAB_100922c0;
          local_114 = uVar7;
          FUN_10093970((undefined8 *)&puStack_130,(ushort *)&DAT_1013f955,(uint)&local_114);
          uVar14 = 5;
          cVar18 = '\x02';
          local_14c = (uint *)&DAT_1013f964;
          local_150 = (uint *)0xa;
          local_11c = local_128;
          bVar13 = local_148._1_1_;
          in_XMM0_Dc = puStack_130;
          iVar16 = iStack_12c;
          local_154 = _Size;
          puVar11 = local_148;
LAB_100269b0:
          puVar11 = (uint *)((uint)puVar11 >> 0x10);
          puVar15 = (uint *)(uint)bVar13;
LAB_100269b4:
          uVar22 = CONCAT44(puVar15,puVar11);
          in_XMM0_Db = _Size;
          in_XMM0_Dd = iVar16;
          goto LAB_10026a25;
        }
        local_150 = (uint *)0xffffffff;
        _Size = local_154;
        puVar11 = puStack_104;
joined_r0x10026877:
        puStack_104 = puVar11;
        if (local_e4._1_1_ != '\0') {
          local_14c = *(uint **)(local_120 + 8);
joined_r0x100269d0:
          if (local_14c == (uint *)0x0) {
            local_150 = (uint *)0x1;
          }
          else {
            pvVar2 = *(void **)(local_120 + 4);
            local_150 = FUN_10107380(0,(SIZE_T)local_14c);
            if (local_150 == (uint *)0x0) {
LAB_100276cf:
              FUN_101366bc(1);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            memcpy(local_150,pvVar2,(size_t)local_14c);
          }
          in_XMM0_Da = (uint *)((uint)local_70 & 0xffffff00);
          local_70 = in_XMM0_Da;
          goto LAB_10026a16;
        }
        FUN_10090ba0(&local_148,(int)&local_108);
        puVar20 = puStack_104;
        if (local_148 != (uint *)0x1) {
          if (local_e4._1_1_ == '\0') {
            local_e4._0_2_ = CONCAT11(1,(char)local_e4);
            if (((char)local_e4 == '\x01') || (local_e8 != puStack_ec)) {
              uVar14 = (int)local_e8 - (int)puStack_ec;
              puVar15 = extraout_EDX;
              puVar11 = puStack_104;
              puVar4 = puStack_ec;
              uVar7 = local_e4;
              goto joined_r0x10026c03;
            }
          }
          local_14c = *(uint **)(local_120 + 8);
          goto joined_r0x100269d0;
        }
        uVar14 = (int)local_144 - (int)puStack_ec;
        puVar15 = puStack_ec;
        puVar4 = local_140;
        uVar7 = local_e4;
joined_r0x10026c03:
        local_154 = _Size;
        local_e4 = uVar7;
        if (uVar14 != 0) {
          pbVar19 = (byte *)((int)puVar11 + (int)puStack_ec);
          if (uVar14 == 1) {
            bVar13 = *pbVar19;
            puVar15 = (uint *)0x1;
            if ((bVar13 == 0x2b) || (bVar13 == 0x2d)) goto LAB_10026c0b;
          }
          else {
            bVar13 = *pbVar19;
          }
          if (bVar13 == 0x2d) {
            pbVar19 = pbVar19 + 1;
            puVar11 = (uint *)0x0;
            iVar16 = uVar14 - 1;
            if (uVar14 < 9) {
              for (; iVar16 != 0; iVar16 = iVar16 + -1) {
                uVar14 = *pbVar19 - 0x30;
                if (9 < uVar14) goto LAB_10026e78;
                pbVar19 = pbVar19 + 1;
                puVar11 = (uint *)((int)puVar11 * 10 - uVar14);
              }
            }
            else {
              do {
                iVar9 = (int)((longlong)(int)puVar11 * 10);
                if ((longlong)iVar9 != (longlong)(int)puVar11 * 10) goto LAB_10026ffb;
                uVar14 = *pbVar19 - 0x30;
                if (9 < uVar14) goto LAB_10026e78;
                puVar11 = (uint *)(iVar9 - uVar14);
                if (SBORROW4(iVar9,uVar14)) goto LAB_10026f87;
                pbVar19 = pbVar19 + 1;
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
            }
          }
          else {
            if (bVar13 == 0x2b) {
              pbVar19 = pbVar19 + 1;
              uVar14 = uVar14 - 1;
            }
            puVar11 = (uint *)0x0;
            if (uVar14 < 8) {
              for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                bVar13 = *pbVar19;
                if (9 < bVar13 - 0x30) goto LAB_10026e78;
                puVar15 = (uint *)((int)puVar11 * 5);
                pbVar19 = pbVar19 + 1;
                puVar11 = (uint *)((bVar13 - 0x30) + (int)puVar11 * 10);
              }
            }
            else {
              do {
                iVar16 = (int)((longlong)(int)puVar11 * 10);
                if ((longlong)iVar16 != (longlong)(int)puVar11 * 10) goto LAB_10026f7f;
                uVar17 = *pbVar19 - 0x30;
                if (9 < uVar17) goto LAB_10026dc5;
                puVar11 = (uint *)(iVar16 + uVar17);
                if (SCARRY4(iVar16,uVar17)) goto LAB_10026eeb;
                pbVar19 = pbVar19 + 1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
          }
          local_e4._1_1_ = (char)((uint)uVar7 >> 8);
          bVar21 = local_e4._1_1_ != '\0';
          puStack_ec = puVar4;
          if (bVar21) {
LAB_10026c7b:
            local_154 = *(uint **)(local_120 + 8);
            if (local_154 == (uint *)0x0) {
              local_150 = (uint *)0x1;
            }
            else {
              pvVar2 = *(void **)(local_120 + 4);
              local_150 = FUN_10107380(0,(SIZE_T)local_154);
              if (local_150 == (uint *)0x0) {
                FUN_101366bc(1);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              memcpy(local_150,pvVar2,(size_t)local_154);
              puVar15 = extraout_EDX_00;
            }
            cVar18 = '\x02';
            uVar14 = 6;
            puVar11 = (uint *)((uint)local_84 & 0xffffff00);
            _Size = (uint *)0x0;
            in_XMM0_Dc = (uint *)0x0;
            iVar16 = 0;
            in_XMM0_Da = puVar11;
            local_14c = local_154;
            local_84 = puVar11;
            goto LAB_100269b4;
          }
          FUN_10090ba0(&local_148,(int)&local_108);
          puVar4 = puStack_104;
          if (local_148 != (uint *)0x1) {
            puVar15 = extraout_EDX_01;
            if (local_e4._1_1_ == '\0') {
              local_e4._0_2_ = CONCAT11(1,(char)local_e4);
              if (((char)local_e4 == '\x01') || (local_e8 != puStack_ec)) {
                uVar14 = (int)local_e8 - (int)puStack_ec;
                puVar20 = puStack_104;
                puVar15 = puStack_ec;
                uVar7 = local_e4;
                goto joined_r0x10026de6;
              }
            }
            goto LAB_10026c7b;
          }
          uVar14 = (int)local_144 - (int)puStack_ec;
          puVar15 = local_140;
          uVar7 = local_e4;
joined_r0x10026de6:
          local_e4 = uVar7;
          if (uVar14 == 0) {
            uVar22 = 0;
            goto LAB_10026e7d;
          }
          pbVar19 = (byte *)((int)puVar20 + (int)puStack_ec);
          if (uVar14 == 1) {
            bVar13 = *pbVar19;
            uVar22 = 0x100000001;
            if ((bVar13 == 0x2b) || (uVar22 = 0x100000001, bVar13 == 0x2d)) goto LAB_10026e7d;
          }
          else {
            bVar13 = *pbVar19;
          }
          if (bVar13 == 0x2d) {
            pbVar19 = pbVar19 + 1;
            puVar20 = (uint *)0x0;
            iVar16 = uVar14 - 1;
            if (uVar14 < 9) {
              for (; iVar16 != 0; iVar16 = iVar16 + -1) {
                uVar14 = *pbVar19 - 0x30;
                if (9 < uVar14) goto LAB_10026e78;
                pbVar19 = pbVar19 + 1;
                puVar20 = (uint *)((int)puVar20 * 10 - uVar14);
              }
            }
            else {
              do {
                iVar9 = (int)((longlong)(int)puVar20 * 10);
                if ((longlong)iVar9 != (longlong)(int)puVar20 * 10) goto LAB_10026ffb;
                uVar14 = *pbVar19 - 0x30;
                if (9 < uVar14) goto LAB_10026e78;
                puVar20 = (uint *)(iVar9 - uVar14);
                if (SBORROW4(iVar9,uVar14)) goto LAB_10026f87;
                pbVar19 = pbVar19 + 1;
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
            }
          }
          else {
            if (bVar13 == 0x2b) {
              pbVar19 = pbVar19 + 1;
              uVar14 = uVar14 - 1;
            }
            puVar20 = (uint *)0x0;
            if (uVar14 < 8) {
              for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                bVar13 = *pbVar19;
                if (9 < bVar13 - 0x30) goto LAB_10026e78;
                pbVar19 = pbVar19 + 1;
                puVar20 = (uint *)((bVar13 - 0x30) + (int)puVar20 * 10);
              }
            }
            else {
              do {
                iVar16 = (int)((longlong)(int)puVar20 * 10);
                if ((longlong)iVar16 != (longlong)(int)puVar20 * 10) goto LAB_10026f7f;
                uVar17 = *pbVar19 - 0x30;
                if (9 < uVar17) goto LAB_10026dc5;
                puVar20 = (uint *)(iVar16 + uVar17);
                if (SCARRY4(iVar16,uVar17)) goto LAB_10026eeb;
                pbVar19 = pbVar19 + 1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
          }
          local_e4._1_1_ = (char)((uint)uVar7 >> 8);
          bVar21 = local_e4._1_1_ != '\0';
          puStack_ec = puVar15;
          if (bVar21) {
LAB_1002705b:
            FUN_10110c20((SIZE_T *)&local_144,*(void **)(local_120 + 4),*(SIZE_T *)(local_120 + 8));
            local_11c = local_128;
            uVar22 = (ulonglong)CONCAT14(local_148._1_1_,(uint)local_148 >> 0x10);
            cVar18 = '\x02';
            local_14c = local_144;
            local_150 = local_140;
            uVar14 = 6;
            in_XMM0_Da = local_138;
            in_XMM0_Db = puStack_134;
            in_XMM0_Dc = puStack_130;
            in_XMM0_Dd = iStack_12c;
            local_154 = puStack_13c;
            goto LAB_10026a25;
          }
          FUN_10090ba0(&local_148,(int)&local_108);
          puVar15 = puStack_ec;
          if (local_148 != (uint *)0x1) {
            if (local_e4._1_1_ == '\0') {
              local_e4._0_2_ = CONCAT11(1,(char)local_e4);
              if (((char)local_e4 == '\x01') || (local_e8 != puStack_ec)) {
                uVar14 = (int)local_e8 - (int)puStack_ec;
                puVar4 = puStack_104;
                goto LAB_10026ec0;
              }
            }
            goto LAB_1002705b;
          }
          uVar14 = (int)local_144 - (int)puStack_ec;
          puStack_ec = local_140;
LAB_10026ec0:
          pbVar19 = (byte *)((int)puVar4 + (int)puVar15);
          if (uVar14 == 0) {
            uVar22 = 0;
            goto LAB_10026e7d;
          }
          if (uVar14 == 1) {
            bVar13 = *pbVar19;
            uVar22 = 0x100000001;
            if ((bVar13 == 0x2b) || (bVar13 == 0x2d)) goto LAB_10026e7d;
          }
          else {
            bVar13 = *pbVar19;
          }
          if (bVar13 == 0x2d) {
            pbVar19 = pbVar19 + 1;
            iVar16 = uVar14 - 1;
            if (uVar14 < 9) {
              if (iVar16 == 0) goto LAB_10026f83;
              local_154 = (uint *)0x0;
              do {
                uVar14 = *pbVar19 - 0x30;
                if (9 < uVar14) goto LAB_10026ff1;
                pbVar19 = pbVar19 + 1;
                local_154 = (uint *)((int)local_154 * 10 - uVar14);
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
            }
            else {
              local_154 = (uint *)0x0;
              do {
                iVar9 = (int)((longlong)(int)local_154 * 10);
                if ((longlong)iVar9 != (longlong)(int)local_154 * 10) goto LAB_10026ffb;
                uVar14 = *pbVar19 - 0x30;
                if (9 < uVar14) goto LAB_10026ff1;
                local_154 = (uint *)(iVar9 - uVar14);
                if (SBORROW4(iVar9,uVar14)) {
                  uVar22 = CONCAT44(3,uVar14);
                  local_154 = _Size;
                  goto LAB_10026e7d;
                }
                pbVar19 = pbVar19 + 1;
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
            }
          }
          else {
            if (bVar13 == 0x2b) {
              pbVar19 = pbVar19 + 1;
              uVar14 = uVar14 - 1;
            }
            if (uVar14 < 8) {
              if (uVar14 == 0) {
LAB_10026f83:
                local_154 = (uint *)0x0;
              }
              else {
                local_154 = (uint *)0x0;
                do {
                  bVar13 = *pbVar19;
                  if (9 < bVar13 - 0x30) goto LAB_10026ff1;
                  pbVar19 = pbVar19 + 1;
                  uVar14 = uVar14 - 1;
                  local_154 = (uint *)((bVar13 - 0x30) + (int)local_154 * 10);
                } while (uVar14 != 0);
              }
            }
            else {
              local_154 = (uint *)0x0;
              do {
                iVar16 = (int)((longlong)(int)local_154 * 10);
                if ((longlong)iVar16 != (longlong)(int)local_154 * 10) goto LAB_10026f7f;
                uVar17 = *pbVar19 - 0x30;
                if (9 < uVar17) {
                  uVar22 = CONCAT44(1,uVar14);
                  cVar18 = '\x02';
                  uVar14 = 9;
                  local_154 = _Size;
                  goto LAB_10026a25;
                }
                local_154 = (uint *)(iVar16 + uVar17);
                if (SCARRY4(iVar16,uVar17)) {
                  cVar18 = '\x02';
                  uVar22 = CONCAT44(2,uVar14);
                  uVar14 = 9;
                  local_154 = _Size;
                  goto LAB_10026a25;
                }
                pbVar19 = pbVar19 + 1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
          }
          pbVar19 = (byte *)FUN_100533e0((int)&local_108);
          if (pbVar19 == (byte *)0x0) goto LAB_1002705b;
          uVar7 = FUN_10053f80((undefined1 *)&local_114,pbVar19,extraout_EDX_02);
          if ((char)local_114 == '\0') {
            local_88 = local_110;
            pbVar19 = (byte *)FUN_100533e0((int)&local_108);
            if (pbVar19 == (byte *)0x0) goto LAB_1002705b;
            uVar7 = FUN_10053f80((undefined1 *)&local_114,pbVar19,(uint)extraout_EDX_03);
            _Size = local_110;
            local_14c = extraout_EDX_03;
            if ((char)local_114 != '\0') goto LAB_1002704e;
            pbVar19 = (byte *)FUN_100533e0((int)&local_108);
            if (pbVar19 == (byte *)0x0) {
LAB_100271c8:
              FUN_10110c20((SIZE_T *)&local_144,*(void **)(local_120 + 4),*(SIZE_T *)(local_120 + 8)
                          );
              uVar17 = (uint)local_148 >> 8 & 0xff;
              local_150 = local_140;
              local_154 = puStack_13c;
              local_14c = local_144;
              uVar14 = 6;
              local_11c = local_128;
              puVar20 = (uint *)((uint)local_148 >> 0x10);
              in_XMM0_Da = local_138;
              in_XMM0_Db = puStack_134;
              in_XMM0_Dc = puStack_130;
              in_XMM0_Dd = iStack_12c;
            }
            else {
              uVar7 = FUN_10053f80((undefined1 *)&local_114,pbVar19,extraout_EDX_04);
              local_14c = puVar20;
              if ((char)local_114 != '\0') {
                uVar22 = (ulonglong)CONCAT14(local_114._1_1_,uVar7);
                goto LAB_10026e7d;
              }
              local_8c = local_110;
              pbVar19 = (byte *)FUN_100533e0((int)&local_108);
              if (pbVar19 == (byte *)0x0) goto LAB_100271c8;
              uVar22 = FUN_100540a0(pbVar19,extraout_EDX_05);
              if ((uVar22 & 1) != 0) goto LAB_10026e7d;
              local_115 = (char)(uVar22 >> 0x20) != '\0';
              local_a8 = (undefined4 *)(local_80 + local_ac * 0x18);
              local_11c = (char *)(local_ac + local_7c + *(int *)puVar1[4]);
              iVar16 = *(int *)puVar1[3];
              puVar20 = (uint *)FUN_100533e0((int)&local_108);
              if (puVar20 == (uint *)0x0) {
LAB_1002718b:
                puVar20 = (uint *)FUN_100533e0((int)&local_108);
                if (puVar20 != (uint *)0x0) {
                  puVar20 = (uint *)FUN_10098960((undefined1 *)&local_148,puVar20,extraout_EDX_07);
                  if ((char)local_148 == '\x01') goto LAB_100271b9;
                  in_XMM0_Dc = (uint *)0x0;
                  in_XMM0_Dd = 0;
                  local_a8[2] = local_140;
                  local_a8[3] = puStack_13c;
                  in_XMM0_Da = local_140;
                  in_XMM0_Db = puStack_13c;
                }
                pcVar8 = (char *)FUN_100533e0((int)&local_108);
                if (pcVar8 != (char *)0x0) {
                  uVar7 = FUN_100528c0((undefined1 *)&local_148,pcVar8,extraout_EDX_08);
                  if ((char)local_148 == '\x01') {
                    uVar22 = (ulonglong)CONCAT14(local_148._1_1_,uVar7);
                    goto LAB_10026e7d;
                  }
                  local_a8[4] = local_144;
                }
                iVar9 = FUN_100533e0((int)&local_108);
                if (iVar9 == 0) {
                  uVar14 = (uint)puVar11 & 0xff;
                  cVar18 = local_115;
                  bVar13 = (byte)((uint)puVar11 >> 8);
                  in_XMM0_Da = local_88;
                  in_XMM0_Dc = local_8c;
                  goto LAB_100269b0;
                }
                FUN_10110c20(&local_148,*(void **)(local_120 + 4),*(SIZE_T *)(local_120 + 8));
                in_XMM0_Db = (uint *)0x0;
                in_XMM0_Dc = (uint *)0x0;
                in_XMM0_Dd = 0;
                uVar14 = 6;
                local_14c = local_148;
                local_150 = local_144;
                local_154 = local_140;
                puVar20 = local_140;
                uVar17 = extraout_EDX_09;
                in_XMM0_Da = puStack_13c;
              }
              else {
                puVar20 = (uint *)FUN_10098960((undefined1 *)&local_148,puVar20,extraout_EDX_06);
                if ((char)local_148 != '\x01') {
                  in_XMM0_Dc = (uint *)0x0;
                  in_XMM0_Dd = 0;
                  *local_a8 = local_140;
                  local_a8[1] = puStack_13c;
                  in_XMM0_Da = local_140;
                  in_XMM0_Db = puStack_13c;
                  goto LAB_1002718b;
                }
LAB_100271b9:
                uVar17 = (uint)local_148 >> 8 & 0xff;
                uVar14 = 10;
              }
            }
            uVar22 = CONCAT44(uVar17,puVar20);
            cVar18 = '\x02';
            goto LAB_10026a25;
          }
LAB_1002704e:
          uVar22 = (ulonglong)CONCAT14(local_114._1_1_,uVar7);
          goto LAB_10026e7d;
        }
        puVar15 = (uint *)0x0;
        goto LAB_10026c0b;
      }
      if (local_e4._1_1_ == '\0') {
        local_e4._0_2_ = CONCAT11(1,(char)local_e4);
        if (((char)local_e4 == '\x01') || (local_e8 != puStack_ec)) {
          _Size = (uint *)((int)local_e8 - (int)puStack_ec);
          puVar11 = puStack_104;
          goto LAB_10026848;
        }
      }
      local_14c = *(uint **)(*(int *)*puVar1 + 8);
      if (local_14c == (uint *)0x0) {
        local_150 = (uint *)0x1;
      }
      else {
        pvVar2 = *(void **)(*(int *)*puVar1 + 4);
        local_150 = FUN_10107380(0,(SIZE_T)local_14c);
        if (local_150 == (uint *)0x0) goto LAB_100276cf;
        memcpy(local_150,pvVar2,(size_t)local_14c);
      }
      in_XMM0_Da = (uint *)((uint)local_74 & 0xffffff00);
      local_74 = in_XMM0_Da;
LAB_10026a16:
      uVar22 = CONCAT44(local_14c,in_XMM0_Da);
      uVar14 = 6;
      cVar18 = '\x02';
      in_XMM0_Db = (uint *)0x0;
      in_XMM0_Dc = (uint *)0x0;
      in_XMM0_Dd = 0;
      local_154 = local_14c;
      goto LAB_10026a25;
    }
LAB_1002738e:
    uVar17 = local_a0;
    if (uVar14 == 0) {
      *local_b4 = 0;
      local_b4[1] = 0;
      local_b4[2] = 0;
      if (local_a0 == 0) {
        return;
      }
      pvVar12 = GetProcessHeap();
      HeapFree(pvVar12,0,local_b0);
      return;
    }
    puVar11 = FUN_10107380(0,0x14);
    if (puVar11 != (uint *)0x0) {
      *puVar11 = uVar17;
      puVar11[1] = (uint)local_b0;
      puVar11[2] = uVar14;
      puVar11[3] = 0;
      puVar11[4] = 0;
      *local_b4 = puVar11;
      local_b4[1] = puVar11;
      local_b4[2] = 1;
      return;
    }
    FUN_1013679e(4,0x14);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_1002665d;
    local_94 = param_4 >> 1;
  }
  else {
    piVar10 = FUN_100be180();
    if (piVar10 == (int *)0x0) goto LAB_100276ed;
    if (*piVar10 == 0) {
      piVar10 = FUN_100c0800();
    }
    else {
      piVar10 = (int *)(*piVar10 + 0x8c);
    }
    local_94 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar10 + 0x104)) {
      local_94 = *(uint *)(*piVar10 + 0x104);
    }
  }
  local_60 = CONCAT44(local_60._4_4_,uVar14);
  local_f8 = (uint *)(param_6[1] - uVar14);
  if ((uint)param_6[1] < uVar14) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  puStack_ec = (uint *)(param_6[4] - uVar14);
  if ((uint)param_6[4] < uVar14) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_10143bf4);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_108 = &local_64;
  local_dc = &local_60;
  puStack_104 = (uint *)&local_60;
  local_100 = &local_94;
  local_d4 = *param_6;
  puStack_fc = (uint *)(local_d4 + uVar14 * 8);
  local_cc = param_6[2];
  local_c8 = param_6[3];
  puStack_f4 = (uint *)(local_cc + uVar14);
  puStack_f0 = (uint *)(local_c8 + uVar14 * 0x18);
  local_e4 = param_7[1];
  local_e0 = param_7[2];
  local_e8 = (uint *)local_a4;
  local_d8 = &local_94;
  local_c0 = local_a4;
  local_d0 = uVar14;
  local_c4 = uVar14;
  local_bc = local_e4;
  local_b8 = local_e0;
  piVar10 = FUN_100be180();
  if (piVar10 == (int *)0x0) {
LAB_100276ed:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  iVar16 = *piVar10;
  if (iVar16 == 0) {
    piVar10 = FUN_100c0800();
    iVar9 = *piVar10;
    piVar10 = FUN_100be180();
    if (piVar10 == (int *)0x0) goto LAB_100276ed;
    iVar16 = *piVar10;
    if (iVar16 == 0) {
      FUN_1012ec50((undefined8 *)&local_148,(uint *)(iVar9 + 0x40),&local_108);
      goto LAB_10027576;
    }
    if (*(int *)(iVar16 + 0x8c) != iVar9) {
      FUN_101312e0((undefined8 *)&local_148,(uint *)(iVar9 + 0x40),iVar16,&local_108);
      goto LAB_10027576;
    }
  }
  FUN_10036740(&local_148,(undefined8 *)&local_108,iVar16,0);
LAB_10027576:
  if (local_144 == (uint *)0x0) {
    *local_b4 = puStack_13c;
    local_b4[1] = local_138;
    local_b4[2] = puStack_134;
    puVar11 = local_148;
    while (puVar11 != (uint *)0x0) {
      puVar20 = (uint *)puVar11[3];
      if (puVar20 != (uint *)0x0) {
        puVar20[4] = 0;
      }
      if (*puVar11 != 0) {
        lpMem = (LPVOID)puVar11[1];
        pvVar12 = GetProcessHeap();
        HeapFree(pvVar12,0,lpMem);
      }
      pvVar12 = GetProcessHeap();
      HeapFree(pvVar12,0,puVar11);
      puVar11 = puVar20;
    }
  }
  else {
    if (puStack_13c != (uint *)0x0) {
      local_140 = (uint *)((int)local_140 + (int)puStack_134);
      local_144[3] = (uint)puStack_13c;
      puStack_13c[4] = (uint)local_144;
      local_144 = local_138;
    }
    *local_b4 = local_148;
    local_b4[1] = local_144;
    local_b4[2] = local_140;
  }
  return;
LAB_10026f87:
  uVar22 = CONCAT44(3,uVar14);
  goto LAB_10026e7d;
LAB_10026dc5:
  puVar15 = (uint *)0x1;
  goto LAB_10026c0b;
LAB_10026eeb:
  puVar15 = (uint *)0x2;
LAB_10026c0b:
  uVar22 = CONCAT44(puVar15,uVar14);
  cVar18 = '\x02';
  uVar14 = 9;
  goto LAB_10026a25;
LAB_10026e78:
  uVar22 = CONCAT44(1,uVar14);
  goto LAB_10026e7d;
LAB_10026ffb:
  uVar7 = 3;
  goto LAB_10026ffd;
LAB_10026f7f:
  uVar7 = 2;
LAB_10026ffd:
  if (9 < (byte)(*pbVar19 - 0x30)) {
    uVar7 = 1;
  }
  uVar22 = CONCAT44(uVar7,1);
  local_154 = _Size;
  goto LAB_10026e7d;
LAB_10026ff1:
  uVar22 = CONCAT44(1,uVar14);
  local_154 = _Size;
LAB_10026e7d:
  cVar18 = '\x02';
  uVar14 = 9;
LAB_10026a25:
  uVar17 = local_ac;
  puStack_104 = local_14c;
  local_108 = (uint *)(((uint)(uVar22 >> 0x20) & 0xff) << 8 | (int)uVar22 << 0x10 | uVar14);
  local_100 = local_150;
  puStack_fc = local_154;
  local_e8 = (uint *)local_11c;
  local_e4 = CONCAT31(local_e4._1_3_,cVar18);
  local_f8 = in_XMM0_Da;
  puStack_f4 = in_XMM0_Db;
  puStack_f0 = in_XMM0_Dc;
  puStack_ec = (uint *)in_XMM0_Dd;
  if (cVar18 != '\x02') {
    local_50 = CONCAT44(in_XMM0_Db,in_XMM0_Da);
    local_40 = local_11c;
    local_48 = CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
    local_60 = CONCAT44(local_14c,local_108);
    local_58 = CONCAT44(local_154,local_150);
    uVar14 = local_ac;
    if (*local_a4 != '\0') goto LAB_1002738e;
    local_18 = local_11c;
    local_38 = local_60;
    local_30 = local_58;
    local_28 = local_50;
    local_20 = local_48;
    if (local_ac == local_a0) {
      FUN_101359e0(&local_a0,local_ac,1,&DAT_00000004,0x28);
      local_b0 = local_9c;
    }
    local_98 = uVar17 + 1;
    *(char **)(local_b0 + uVar17 * 0x28 + 0x20) = local_18;
    *(undefined8 *)(local_b0 + uVar17 * 0x28 + 0x18) = local_20;
    *(undefined8 *)(local_b0 + uVar17 * 0x28 + 0x10) = local_28;
    in_XMM0_Dc = (uint *)0x0;
    in_XMM0_Dd = 0;
    *(undefined8 *)(local_b0 + uVar17 * 0x28 + 8) = local_30;
    *(uint **)(local_b0 + uVar17 * 0x28) = (uint *)local_38;
    *(uint **)((int)(local_b0 + uVar17 * 0x28) + 4) = local_38._4_4_;
    local_b0[uVar17 * 0x28 + 0x24] = cVar18;
    in_XMM0_Da = (uint *)local_38;
    in_XMM0_Db = local_38._4_4_;
    goto LAB_1002673c;
  }
  SRWLock = (PSRWLOCK)*local_78;
  BVar5 = TryAcquireSRWLockExclusive(SRWLock);
  pcVar8 = local_a4;
  if (BVar5 != '\0') {
    if (*(char *)&SRWLock[1].Ptr == -1) {
      SRWLock[9].Ptr = local_e8;
      *(ulonglong *)(SRWLock + 7) = CONCAT44(puStack_ec,puStack_f0);
      *(ulonglong *)(SRWLock + 5) = CONCAT44(puStack_f4,local_f8);
      *(ulonglong *)(SRWLock + 3) = CONCAT44(puStack_fc,local_100);
      *(ulonglong *)(SRWLock + 1) = CONCAT44(puStack_104,local_108);
      ReleaseSRWLockExclusive(SRWLock);
      goto LAB_10027384;
    }
    ReleaseSRWLockExclusive(SRWLock);
  }
  FUN_10005ca0((undefined1 *)&local_108);
LAB_10027384:
  *pcVar8 = '\x01';
  uVar14 = local_ac;
  goto LAB_1002738e;
}
