// rea decompile_all
// name: FUN_1005d9c0
// address: 0x1005d9c0
// body: available
// range: 0x1005d9c0-0x1005db93 inclusive
// range: 0x1005dba0-0x1005dcb4 inclusive
// range: 0x1005dcc0-0x1005ea3c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1005d9c0(char *param_1,uint *param_2)

{
  byte *pbVar1;
  void *_Src;
  code *pcVar2;
  byte *lpMem;
  byte *_Buf1;
  byte bVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  byte *pbVar9;
  HANDLE pvVar10;
  uint uVar11;
  LPVOID pvVar12;
  undefined1 *puVar13;
  byte bVar14;
  char cVar15;
  undefined2 extraout_CX;
  undefined2 uVar16;
  int iVar17;
  byte *_Size;
  uint extraout_EDX;
  int iVar18;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  ushort uVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined4 *puVar22;
  byte *pbVar23;
  byte *pbVar24;
  bool bVar25;
  byte *local_ec;
  char cStack_e8;
  byte *pbStack_e4;
  char cStack_e0;
  byte *local_dc;
  byte *pbStack_d4;
  LPVOID pvStack_bc;
  undefined4 local_b0;
  byte *local_ac;
  undefined1 *local_a8;
  byte *pbStack_a4;
  undefined1 *puStack_a0;
  byte *pbStack_9c;
  LPVOID pvStack_98;
  byte *pbStack_94;
  byte *pbStack_90;
  undefined4 uStack_78;
  int local_54;
  int local_50;
  undefined1 *puStack_4c;
  int local_48;
  undefined8 uStack_44;
  byte *pbStack_3c;
  undefined8 uStack_38;
  LPVOID pvStack_30;
  byte *pbStack_2c;
  byte *pbStack_28;
  undefined1 *puStack_24;
  int iStack_20;
  byte *pbStack_1c;
  int iStack_18;

  local_48 = 0x1005d9d4;
  FUN_10111020(param_2,&DAT_10140297,9);
  FUN_10111020(param_2,&DAT_1013f4f5,9);
  pbVar1 = (byte *)param_2[1];
  uVar20 = param_2[2];
  FUN_1011c880((undefined8 *)&local_b0,(int)pbVar1,uVar20);
  puVar13 = local_a8;
  lpMem = local_ac;
  local_50 = CONCAT22(local_b0._2_2_,CONCAT11(local_b0._1_1_,(char)local_b0));
  if (local_50 == -1) {
    if (uVar20 == 0) {
      pvVar12 = (LPVOID)0x1;
    }
    else {
      pvVar12 = FUN_10107380(0,uVar20);
      if (pvVar12 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      memcpy(pvVar12,pbVar1,uVar20);
    }
    *(LPVOID *)(param_1 + 0x10) = pvVar12;
    *(uint *)(param_1 + 0x14) = uVar20;
    param_1[0x18] = '\0';
    *param_1 = '\x01';
    *(byte **)(param_1 + 4) = local_ac;
    *(undefined1 **)(param_1 + 8) = local_a8;
    *(uint *)(param_1 + 0xc) = uVar20;
    return;
  }
  iVar5 = FUN_10110f10(pbVar1,uVar20);
  if (iVar5 != 0) {
    FUN_10110e70((int)param_2,extraout_EDX);
  }
  local_b0._0_1_ = '\0';
  local_b0._1_1_ = '\0';
  local_b0._2_2_ = 0;
  local_ac = &DAT_00000004;
  local_a8 = (undefined1 *)0x0;
  FUN_1002cc00(&local_b0,(int)lpMem,(int)puVar13);
  puVar13 = local_a8;
  pbVar1 = local_ac;
  local_54 = CONCAT22(local_b0._2_2_,CONCAT11(local_b0._1_1_,(char)local_b0));
  _DAT_0077f428 = local_a8;
  (*(code *)0x409be0)(local_a8);
  puVar22 = _DAT_0077f420;
  if (_DAT_0077f420 == (undefined4 *)0x0) {
    puVar22 = (undefined4 *)&DAT_00000004;
  }
  if (puVar13 != (undefined1 *)0x0) {
    iVar5 = (int)puVar13 * 4;
    do {
      uVar6 = (*(code *)0x6ca800)();
      *puVar22 = uVar6;
      puVar22 = puVar22 + 1;
      iVar5 = iVar5 + -4;
    } while (iVar5 != 0);
  }
  (*(code *)0x409be0)(puVar13);
  puVar22 = (undefined4 *)&DAT_00000004;
  if (_DAT_0077f420 != (undefined4 *)0x0) {
    puVar22 = _DAT_0077f420;
  }
  if (_DAT_0077f428 < puVar13) {
    puVar13 = _DAT_0077f428;
  }
  if (puVar13 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      local_b0._0_1_ = '\0';
      local_b0._1_1_ = 0;
      local_b0._2_2_ = 0;
      uVar6 = 0;
      iVar5 = *(int *)(pbVar1 + (int)puVar7 * 8 + 4);
      if (iVar5 != 0) {
        pbVar23 = *(byte **)(pbVar1 + (int)puVar7 * 8);
        (*(code *)0x408244)();
        iVar17 = iVar5 * 2;
        iVar18 = 0;
        local_dc = (byte *)CONCAT22(local_b0._2_2_,CONCAT11(local_b0._1_1_,(char)local_b0));
        local_ec = pbVar23 + iVar5;
        uVar20 = 0;
        do {
          uVar19 = (ushort)uVar20;
          pbVar9 = pbVar23;
          if (uVar19 == 0) {
            if (pbVar23 == local_ec) break;
            bVar14 = *pbVar23;
            uVar19 = (ushort)bVar14;
            if (-1 < (char)bVar14) {
              pbVar9 = pbVar23 + 1;
              goto LAB_1005dba1;
            }
            uVar20 = bVar14 & 0x1f;
            if (bVar14 < 0xe0) {
              pbVar9 = pbVar23 + 2;
              uVar8 = uVar20 << 6 | pbVar23[1] & 0x3f;
LAB_1005dc26:
              uVar19 = (ushort)uVar8;
              goto LAB_1005dba1;
            }
            uVar8 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
            if (bVar14 < 0xf0) {
              uVar8 = uVar8 | uVar20 << 0xc;
              pbVar9 = pbVar23 + 3;
            }
            else {
              pbVar9 = pbVar23 + 4;
              uVar8 = pbVar23[3] & 0x3f | uVar8 << 6 | (bVar14 & 7) << 0x12;
            }
            pbStack_e4 = pbVar23;
            if (uVar8 < 0x10000) goto LAB_1005dc26;
            uVar20 = uVar8 & 0x3ff | 0xdc00;
            uVar19 = (ushort)(uVar8 + 0xff0000 >> 10) | 0xd800;
          }
          else {
LAB_1005dba1:
            uVar20 = 0;
          }
          *(ushort *)(local_dc + iVar18 * 2) = uVar19;
          iVar18 = iVar18 + 1;
          iVar17 = iVar17 + -2;
          pbVar23 = pbVar9;
        } while (iVar17 != 0);
        (*(code *)0x408244)();
        uVar6 = CONCAT22(local_b0._2_2_,CONCAT11(local_b0._1_1_,(char)local_b0));
      }
      iVar5 = puVar22[(int)puVar7];
      (*(code *)0x407ea8)();
      *(undefined4 *)(iVar5 + 4) = uVar6;
      puVar21 = *(undefined1 **)(pbVar1 + (int)puVar7 * 8 + 4);
      if (puVar21 == (undefined1 *)0x0) {
        pbVar23 = (byte *)0x1;
        puVar21 = (undefined1 *)0x0;
      }
      else {
        _Src = *(void **)(pbVar1 + (int)puVar7 * 8);
        pbVar23 = FUN_10107380(0,(SIZE_T)puVar21);
        if (pbVar23 == (byte *)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        memcpy(pbVar23,_Src,(size_t)puVar21);
      }
      local_b0._0_1_ = (char)puVar21;
      local_b0._1_1_ = (char)((uint)puVar21 >> 8);
      local_b0._2_2_ = (undefined2)((uint)puVar21 >> 0x10);
      local_ac = pbVar23;
      local_a8 = puVar21;
      FUN_101359e0(&local_b0,(uint)puVar21,4,(LPVOID)0x1,1);
      pbVar9 = local_ac;
      pbVar23 = local_ac + (int)local_a8;
      pbVar23[0] = 0x2e;
      pbVar23[1] = 0x74;
      pbVar23[2] = 0x78;
      pbVar23[3] = 0x74;
      iVar5 = CONCAT22(local_b0._2_2_,CONCAT11(local_b0._1_1_,(char)local_b0));
      FUN_10111020(param_2,local_ac,(uint)(local_a8 + 4));
      if (iVar5 != 0) {
        pvVar10 = GetProcessHeap();
        HeapFree(pvVar10,0,pbVar9);
      }
      pbVar23 = (byte *)param_2[1];
      pbStack_d4 = (byte *)param_2[2];
      FUN_1006b940((undefined1 *)&local_b0,pbVar23,(SIZE_T)pbStack_d4);
      cStack_e0 = (char)local_b0;
      if ((char)local_b0 != -1) {
        cStack_e8 = local_b0._1_1_;
        pbStack_e4 = pbStack_9c;
        local_dc = pbStack_94;
        pbStack_d4 = pbStack_a4;
        pvStack_bc = pvStack_98;
        local_ec = pbStack_90;
        puVar13 = puStack_a0;
        puVar21 = local_a8;
        pbVar23 = local_ac;
        uVar16 = local_b0._2_2_;
        goto LAB_1005e896;
      }
      uStack_44 = CONCAT44(local_a8,local_ac);
      uStack_38 = CONCAT44(pbStack_9c,puStack_a0);
      puStack_4c = puVar7 + 1;
      pbStack_3c = pbStack_a4;
      pvStack_30 = pvStack_98;
      while (cStack_e8 = FUN_10090ef0((undefined8 *)&pbStack_2c,(int *)&uStack_44),
            puVar21 = puStack_24, _Buf1 = pbStack_28, pbVar9 = pbStack_2c,
            pbStack_2c != (byte *)0xfffffffe) {
        if (pbStack_2c == (byte *)0xffffffff) {
          cStack_e0 = '\0';
          pbVar23 = pbStack_28;
          goto LAB_1005e862;
        }
        if (puStack_24 == (undefined1 *)0x0) goto joined_r0x1005e388;
        local_ac = pbStack_28;
        local_a8 = puStack_24;
        pbStack_a4 = (byte *)0x0;
        puStack_a0 = puStack_24;
        local_b0._0_1_ = '=';
        local_b0._1_1_ = '\0';
        local_b0._2_2_ = 0;
        pvStack_98 = (LPVOID)CONCAT31(pvStack_98._1_3_,1);
        pbStack_9c = (byte *)0x3d;
        FUN_10090ba0(&iStack_20,(int)&local_b0);
        if (iStack_20 != 1) {
          if (pbStack_d4 == (byte *)0x0) {
            puVar21 = (undefined1 *)0x1;
          }
          else {
            puVar21 = FUN_10107380(0,(SIZE_T)pbStack_d4);
            if (puVar21 == (undefined1 *)0x0) goto LAB_1005ea1d;
            memcpy(puVar21,pbVar23,(size_t)pbStack_d4);
          }
          cStack_e8 = '\x06';
          cStack_e0 = cStack_e8;
          goto LAB_1005e83a;
        }
        _Size = pbStack_1c;
        if ((byte *)0x9 < pbStack_1c + -4) {
switchD_1005de91_caseD_7:
          puVar21 = (undefined1 *)0x1;
          pvStack_bc = (LPVOID)0x1;
          if (pbStack_d4 != (byte *)0x0) {
            puVar21 = FUN_10107380(0,(SIZE_T)pbStack_d4);
            if (puVar21 == (undefined1 *)0x0) {
LAB_1005ea1d:
              FUN_101366bc(1);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            memcpy(puVar21,pbVar23,(size_t)pbStack_d4);
          }
          if (_Size != (byte *)0x0) {
            pvStack_bc = FUN_10107380(0,(SIZE_T)_Size);
            if (pvStack_bc == (LPVOID)0x0) {
              FUN_101366bc(1);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            memcpy(pvStack_bc,_Buf1,(size_t)_Size);
          }
          cStack_e8 = '\a';
          pbStack_e4 = _Size;
          cStack_e0 = cStack_e8;
          goto LAB_1005e83a;
        }
        puVar21 = puVar21 + -iStack_18;
        pbVar24 = _Buf1 + iStack_18;
        local_dc = pbVar9;
        local_ec = _Buf1;
        switch((&switchD_1005de91::switchdataD_1005ea40)[(int)(pbStack_1c + -4)] + local_48) {
        case 0x1005de93:
          if (*(int *)_Buf1 != 0x65657266) {
            _Size = &DAT_00000004;
            goto switchD_1005de91_caseD_7;
          }
          if (puVar21 == (undefined1 *)0x1) {
            bVar14 = *pbVar24;
            if ((bVar14 != 0x2b) && (bVar14 != 0x2d)) goto LAB_1005e108;
            pbStack_e4 = &DAT_00000004;
LAB_1005e7aa:
            cStack_e8 = '\x01';
            cStack_e0 = '\t';
          }
          else {
            if (puVar21 != (undefined1 *)0x0) {
              bVar14 = *pbVar24;
LAB_1005e108:
              cStack_e0 = '\t';
              pbStack_e4 = &DAT_00000004;
              puVar21 = puVar21 + -(uint)(bVar14 == 0x2b);
              pbVar24 = pbVar24 + (bVar14 == 0x2b);
              if (puVar21 < (undefined1 *)0x3) {
                if (puVar21 == (undefined1 *)0x0) {
                  cVar15 = '\0';
                }
                else {
                  uVar20 = *pbVar24 - 0x30;
                  if (9 < uVar20) goto LAB_1005e683;
                  if (puVar21 == (undefined1 *)0x1) goto LAB_1005e13c;
                  cStack_e8 = '\x01';
                  if (9 < pbVar24[1] - 0x30) goto LAB_1005e83a;
                  cVar15 = (char)(pbVar24[1] - 0x30) + (char)uVar20 * '\n';
                }
              }
              else {
                uVar20 = 0;
                while (bVar25 = puVar21 != (undefined1 *)0x0, puVar21 = puVar21 + -1, bVar25) {
                  sVar4 = (ushort)(byte)uVar20 * 10;
                  bVar14 = *pbVar24;
                  if ((char)((ushort)sVar4 >> 8) != '\0') goto LAB_1005e969;
                  if (9 < bVar14 - 0x30) goto LAB_1005e683;
                  pbVar24 = pbVar24 + 1;
                  bVar3 = (byte)sVar4;
                  bVar14 = (byte)(bVar14 - 0x30);
                  uVar20 = (uint)(byte)(bVar3 + bVar14);
                  if (CARRY1(bVar3,bVar14)) goto LAB_1005e962;
                }
LAB_1005e13c:
                cVar15 = (char)uVar20;
              }
              *(bool *)(puVar22[(int)puVar7] + 0x25) = cVar15 != '\0';
              break;
            }
            pbStack_e4 = &DAT_00000004;
LAB_1005e951:
            cStack_e0 = '\t';
            cStack_e8 = '\0';
          }
          goto LAB_1005e83a;
        case 0x1005dece:
          if (_Buf1[4] != 0x65 || *(int *)_Buf1 != 0x726f7473) {
            _Size = (byte *)0x5;
            goto switchD_1005de91_caseD_7;
          }
          if (puVar21 == (undefined1 *)0x1) {
            bVar14 = *pbVar24;
            if ((bVar14 == 0x2b) || (bVar14 == 0x2d)) {
              pbStack_e4 = (byte *)0x5;
              goto LAB_1005e7aa;
            }
          }
          else {
            if (puVar21 == (undefined1 *)0x0) {
              pbStack_e4 = (byte *)0x5;
              goto LAB_1005e951;
            }
            bVar14 = *pbVar24;
          }
          cStack_e0 = '\t';
          pbStack_e4 = (byte *)0x5;
          puVar21 = puVar21 + -(uint)(bVar14 == 0x2b);
          pbVar24 = pbVar24 + (bVar14 == 0x2b);
          if ((undefined1 *)0x2 < puVar21) {
            uVar20 = 0;
            while (bVar25 = puVar21 != (undefined1 *)0x0, puVar21 = puVar21 + -1, bVar25) {
              sVar4 = (ushort)(byte)uVar20 * 10;
              bVar14 = *pbVar24;
              if ((char)((ushort)sVar4 >> 8) != '\0') goto LAB_1005e969;
              if (9 < bVar14 - 0x30) goto LAB_1005e683;
              pbVar24 = pbVar24 + 1;
              bVar3 = (byte)sVar4;
              bVar14 = (byte)(bVar14 - 0x30);
              uVar20 = (uint)(byte)(bVar3 + bVar14);
              if (CARRY1(bVar3,bVar14)) goto LAB_1005e962;
            }
LAB_1005e06c:
            cVar15 = (char)uVar20;
LAB_1005e379:
            *(bool *)(puVar22[(int)puVar7] + 0x14) = cVar15 != '\0';
            break;
          }
          if (puVar21 == (undefined1 *)0x0) {
            cVar15 = '\0';
            goto LAB_1005e379;
          }
          uVar20 = *pbVar24 - 0x30;
          if (uVar20 < 10) {
            if (puVar21 == (undefined1 *)0x1) goto LAB_1005e06c;
            cStack_e8 = '\x01';
            if (9 < pbVar24[1] - 0x30) goto LAB_1005e83a;
            cVar15 = (char)(pbVar24[1] - 0x30) + (char)uVar20 * '\n';
            goto LAB_1005e379;
          }
LAB_1005e683:
          cStack_e8 = '\x01';
          goto LAB_1005e685;
        case 0x1005df15:
          iVar5 = memcmp(_Buf1,"overwrite",9);
          if (iVar5 != 0) {
            _Size = (byte *)0x9;
            goto switchD_1005de91_caseD_7;
          }
          if (puVar21 == (undefined1 *)0x1) {
            bVar14 = *pbVar24;
            if ((bVar14 == 0x2b) || (bVar14 == 0x2d)) {
              pbStack_e4 = (byte *)0x9;
              goto LAB_1005e7aa;
            }
          }
          else {
            if (puVar21 == (undefined1 *)0x0) {
              pbStack_e4 = (byte *)0x9;
              goto LAB_1005e951;
            }
            bVar14 = *pbVar24;
          }
          cStack_e0 = '\t';
          pbStack_e4 = (byte *)0x9;
          puVar21 = puVar21 + -(uint)(bVar14 == 0x2b);
          pbVar24 = pbVar24 + (bVar14 == 0x2b);
          if (puVar21 < (undefined1 *)0x3) {
            if (puVar21 == (undefined1 *)0x0) {
              cVar15 = '\0';
            }
            else {
              uVar20 = *pbVar24 - 0x30;
              if (9 < uVar20) goto LAB_1005e683;
              if (puVar21 == (undefined1 *)0x1) goto LAB_1005e0d4;
              cStack_e8 = '\x01';
              if (9 < pbVar24[1] - 0x30) goto LAB_1005e83a;
              cVar15 = (char)(pbVar24[1] - 0x30) + (char)uVar20 * '\n';
            }
          }
          else {
            uVar20 = 0;
            while (bVar25 = puVar21 != (undefined1 *)0x0, puVar21 = puVar21 + -1, bVar25) {
              sVar4 = (ushort)(byte)uVar20 * 10;
              bVar14 = *pbVar24;
              if ((char)((ushort)sVar4 >> 8) != '\0') goto LAB_1005e969;
              if (9 < bVar14 - 0x30) goto LAB_1005e683;
              pbVar24 = pbVar24 + 1;
              bVar3 = (byte)sVar4;
              bVar14 = (byte)(bVar14 - 0x30);
              uVar20 = (uint)(byte)(bVar3 + bVar14);
              if (CARRY1(bVar3,bVar14)) goto LAB_1005e962;
            }
LAB_1005e0d4:
            cVar15 = (char)uVar20;
          }
          *(bool *)(puVar22[(int)puVar7] + 0x24) = cVar15 != '\0';
          break;
        case 0x1005df5c:
          if (*(short *)(_Buf1 + 4) == 0x6576 && *(int *)_Buf1 == 0x6f6d6572) {
            if (puVar21 == (undefined1 *)0x1) {
              bVar14 = *pbVar24;
              if ((bVar14 == 0x2b) || (bVar14 == 0x2d)) {
LAB_1005e76c:
                pbStack_e4 = &DAT_00000006;
                goto LAB_1005e7aa;
              }
            }
            else {
              if (puVar21 == (undefined1 *)0x0) {
LAB_1005e919:
                pbStack_e4 = &DAT_00000006;
                goto LAB_1005e951;
              }
              bVar14 = *pbVar24;
            }
            cStack_e0 = '\t';
            pbStack_e4 = &DAT_00000006;
            puVar21 = puVar21 + -(uint)(bVar14 == 0x2b);
            pbVar24 = pbVar24 + (bVar14 == 0x2b);
            if (puVar21 < (undefined1 *)0x3) {
              if (puVar21 == (undefined1 *)0x0) {
                cVar15 = '\0';
              }
              else {
                uVar20 = *pbVar24 - 0x30;
                if (9 < uVar20) goto LAB_1005e683;
                if (puVar21 == (undefined1 *)0x1) goto LAB_1005e2fc;
                cStack_e8 = '\x01';
                if (9 < pbVar24[1] - 0x30) goto LAB_1005e83a;
                cVar15 = (char)(pbVar24[1] - 0x30) + (char)uVar20 * '\n';
              }
            }
            else {
              uVar20 = 0;
              while (bVar25 = puVar21 != (undefined1 *)0x0, puVar21 = puVar21 + -1, bVar25) {
                sVar4 = (ushort)(byte)uVar20 * 10;
                bVar14 = *pbVar24;
                if ((char)((ushort)sVar4 >> 8) != '\0') goto LAB_1005e969;
                if (9 < bVar14 - 0x30) goto LAB_1005e683;
                pbVar24 = pbVar24 + 1;
                bVar3 = (byte)sVar4;
                bVar14 = (byte)(bVar14 - 0x30);
                uVar20 = (uint)(byte)(bVar3 + bVar14);
                if (CARRY1(bVar3,bVar14)) goto LAB_1005e962;
              }
LAB_1005e2fc:
              cVar15 = (char)uVar20;
            }
            *(bool *)(puVar22[(int)puVar7] + 0x26) = cVar15 != '\0';
          }
          else {
            if (*(short *)(_Buf1 + 4) != 0x7472 || *(int *)_Buf1 != 0x6f707865) {
              _Size = &DAT_00000006;
              goto switchD_1005de91_caseD_7;
            }
            if (puVar21 == (undefined1 *)0x1) {
              bVar14 = *pbVar24;
              if ((bVar14 == 0x2b) || (bVar14 == 0x2d)) goto LAB_1005e76c;
            }
            else {
              if (puVar21 == (undefined1 *)0x0) goto LAB_1005e919;
              bVar14 = *pbVar24;
            }
            cStack_e0 = '\t';
            pbStack_e4 = &DAT_00000006;
            puVar21 = puVar21 + -(uint)(bVar14 == 0x2b);
            pbVar24 = pbVar24 + (bVar14 == 0x2b);
            if (&DAT_00000008 < puVar21) {
              uVar20 = 0;
              while (bVar25 = puVar21 != (undefined1 *)0x0, puVar21 = puVar21 + -1, bVar25) {
                uVar8 = (uint)((ulonglong)uVar20 * 10);
                if ((int)((ulonglong)uVar20 * 10 >> 0x20) != 0) {
                  cStack_e8 = ((byte)(*pbVar24 - 0x30) < 10) + '\x01';
                  goto LAB_1005e83a;
                }
                uVar11 = *pbVar24 - 0x30;
                if (9 < uVar11) goto LAB_1005e683;
                pbVar24 = pbVar24 + 1;
                uVar20 = uVar11 + uVar8;
                if (CARRY4(uVar11,uVar8)) goto LAB_1005e962;
              }
            }
            else if (puVar21 == (undefined1 *)0x0) {
              uVar20 = 0;
            }
            else {
              uVar20 = 0;
              do {
                bVar14 = *pbVar24;
                if (9 < bVar14 - 0x30) goto LAB_1005e683;
                pbVar24 = pbVar24 + 1;
                puVar21 = puVar21 + -1;
                uVar20 = (bVar14 - 0x30) + uVar20 * 10;
              } while (puVar21 != (undefined1 *)0x0);
            }
            *(uint *)(puVar22[(int)puVar7] + 0x1c) = uVar20;
          }
          break;
        case 0x1005dfbd:
          iVar5 = memcmp(_Buf1,"export_folder",0xd);
          if (iVar5 != 0) {
            _Size = (byte *)0xd;
            goto switchD_1005de91_caseD_7;
          }
          iVar17 = FUN_10003510(pbVar24,(int)puVar21);
          iVar5 = puVar22[(int)puVar7];
          (*(code *)0x407ea8)();
          *(int *)(iVar5 + 0x20) = iVar17;
          break;
        case 0x1005e7c2:
          goto switchD_1005de91_caseD_7;
        }
joined_r0x1005e388:
        if (pbVar9 != (byte *)0x0) {
          pvVar10 = GetProcessHeap();
          HeapFree(pvVar10,0,_Buf1);
        }
      }
      if (uStack_44._4_4_ != 0) {
        pvVar12 = (LPVOID)uStack_44;
        pvVar10 = GetProcessHeap();
        HeapFree(pvVar10,0,pvVar12);
      }
      CloseHandle(pvStack_30);
      iVar5 = FUN_10110f10(pbVar23,(uint)pbStack_d4);
      if (iVar5 != 0) {
        FUN_10110e70((int)param_2,extraout_EDX_00);
      }
      FUN_10111020(param_2,(byte *)"include",7);
      FUN_10111020(param_2,*(byte **)(pbVar1 + (int)puVar7 * 8),
                   *(uint *)(pbVar1 + (int)puVar7 * 8 + 4));
      local_dc = (byte *)param_2[1];
      local_ec = (byte *)param_2[2];
      pbStack_e4 = (byte *)FUN_10003510(local_dc,(int)local_ec);
      iVar5 = puVar22[(int)puVar7];
      (*(code *)0x407ea8)();
      *(byte **)(iVar5 + 8) = pbStack_e4;
      FUN_1011c320(&local_b0,(int)local_dc,(int)local_ec);
      pbVar23 = pbStack_a4;
      puVar21 = local_a8;
      if ((CONCAT22(local_b0._2_2_,CONCAT11(local_b0._1_1_,(char)local_b0)) & (uint)local_ac) ==
          0xffffffff) {
        FUN_10110c20(&local_b0,local_dc,(SIZE_T)local_ec);
        *(undefined1 **)(param_1 + 4) = puVar21;
        param_1[0] = '\x01';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        *(byte **)(param_1 + 8) = pbVar23;
        *(uint *)(param_1 + 0xc) = CONCAT22(local_b0._2_2_,CONCAT11(local_b0._1_1_,(char)local_b0));
        *(byte **)(param_1 + 0x10) = local_ac;
        *(undefined1 **)(param_1 + 0x14) = local_a8;
        *(byte **)(param_1 + 0x18) = pbStack_a4;
        goto LAB_1005e8d7;
      }
      *(undefined4 *)(puVar22[(int)puVar7] + 0x10) = uStack_78;
      if (*(char *)(puVar22[(int)puVar7] + 0x14) != '\0') {
        FUN_1005b040((undefined1 *)&local_b0,local_dc,(SIZE_T)local_ec);
        if ((char)local_b0 != -1) {
          *(ulonglong *)(param_1 + 0x10) = CONCAT44(pbStack_9c,puStack_a0);
          *(byte **)(param_1 + 0x20) = pbStack_90;
          *(ulonglong *)(param_1 + 0x18) = CONCAT44(pbStack_94,pvStack_98);
          *(ulonglong *)param_1 =
               CONCAT44(local_ac,CONCAT22(local_b0._2_2_,CONCAT11(local_b0._1_1_,(char)local_b0)));
          *(ulonglong *)(param_1 + 8) = CONCAT44(pbStack_a4,local_a8);
          goto LAB_1005e8d7;
        }
        *(undefined1 *)(puVar22[(int)puVar7] + 0xc) = 1;
        pbStack_e4 = (byte *)(*(code *)0x405a4c)();
        iVar5 = FUN_10003510(local_dc,(int)local_ec);
        local_b0._0_1_ = (char)iVar5;
        local_b0._1_1_ = (char)((uint)iVar5 >> 8);
        local_b0._2_2_ = (undefined2)((uint)iVar5 >> 0x10);
        (*(code *)0x43ff44)();
        (*(code *)0x407ea8)();
        uVar6 = (*(code *)**(undefined4 **)pbStack_e4)();
        *(undefined4 *)(puVar22[(int)puVar7] + 0x10) = uVar6;
        iVar5 = puVar22[(int)puVar7];
        (*(code *)0x405a7c)();
        *(byte **)(iVar5 + 0x18) = pbStack_e4;
      }
      iVar5 = FUN_10110f10(local_dc,(uint)local_ec);
      pbVar23 = local_dc;
      pbVar9 = local_ec;
      if (iVar5 != 0) {
        FUN_10110e70((int)param_2,extraout_EDX_01);
        pbVar23 = (byte *)param_2[1];
        pbVar9 = (byte *)param_2[2];
      }
      iVar5 = FUN_10110f10(pbVar23,(uint)pbVar9);
      if (iVar5 != 0) {
        FUN_10110e70((int)param_2,extraout_EDX_02);
      }
      puVar7 = puStack_4c;
    } while (puStack_4c != puVar13);
  }
  iVar5 = FUN_10110f10((byte *)param_2[1],param_2[2]);
  if (iVar5 != 0) {
    FUN_10110e70((int)param_2,extraout_EDX_03);
  }
  *param_1 = -1;
  goto LAB_1005e8d7;
LAB_1005e969:
  cStack_e8 = ((byte)(bVar14 - 0x30) < 10) + '\x01';
  goto LAB_1005e685;
LAB_1005e962:
  cStack_e8 = '\x02';
LAB_1005e685:
  cStack_e0 = '\t';
LAB_1005e83a:
  local_ec = (byte *)0x0;
  if (pbVar9 != (byte *)0x0) {
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,_Buf1);
  }
  local_dc = pbStack_e4;
  pbVar23 = pbStack_d4;
LAB_1005e862:
  if (uStack_44._4_4_ != 0) {
    pvVar12 = (LPVOID)uStack_44;
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,pvVar12);
  }
  CloseHandle(pvStack_30);
  puVar13 = (undefined1 *)0x0;
  uVar16 = extraout_CX;
LAB_1005e896:
  *param_1 = cStack_e0;
  param_1[1] = cStack_e8;
  *(undefined2 *)(param_1 + 2) = uVar16;
  *(byte **)(param_1 + 4) = pbVar23;
  *(undefined1 **)(param_1 + 8) = puVar21;
  *(byte **)(param_1 + 0xc) = pbStack_d4;
  *(undefined1 **)(param_1 + 0x10) = puVar13;
  *(byte **)(param_1 + 0x14) = pbStack_e4;
  *(LPVOID *)(param_1 + 0x18) = pvStack_bc;
  *(byte **)(param_1 + 0x1c) = local_dc;
  *(byte **)(param_1 + 0x20) = local_ec;
LAB_1005e8d7:
  if (local_54 != 0) {
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,pbVar1);
  }
  if (local_50 != 0) {
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,lpMem);
  }
  return;
}
