// rea decompile_all
// name: FUN_10065a70
// address: 0x10065a70
// body: available
// range: 0x10065a70-0x10065de8 inclusive
// range: 0x10065df0-0x10065ee8 inclusive
// range: 0x10065ef0-0x10065f88 inclusive
// range: 0x10065f90-0x100660a5 inclusive
// range: 0x100660b0-0x10066985 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

char * __cdecl FUN_10065a70(char *param_1,uint *param_2,int param_3)

{
  uint *_Src;
  undefined8 *puVar1;
  byte *_Src_00;
  void *pvVar2;
  SIZE_T SVar3;
  code *pcVar4;
  int *lpMem;
  byte bVar5;
  short sVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  HANDLE pvVar15;
  int iVar16;
  int *piVar17;
  LPVOID pvVar18;
  byte bVar19;
  char cVar20;
  uint extraout_EDX;
  uint *extraout_EDX_00;
  uint *extraout_EDX_01;
  uint *extraout_EDX_02;
  uint *extraout_EDX_03;
  uint *puVar21;
  uint extraout_EDX_04;
  uint *extraout_EDX_05;
  uint *extraout_EDX_06;
  uint *extraout_EDX_07;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  undefined8 *puVar25;
  undefined2 uVar26;
  bool bVar27;
  char cStack_c4;
  char cStack_c0;
  uint *puStack_bc;
  uint *puStack_b4;
  uint *puStack_b0;
  uint *puStack_ac;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  uint *puStack_98;
  uint *puStack_94;
  uint *puStack_90;
  LPVOID pvStack_8c;
  uint *puStack_88;
  uint *puStack_84;
  undefined2 uStack_80;
  uint *puStack_7c;
  LPVOID pvStack_78;
  char cStack_74;
  undefined2 uStack_73;
  char cStack_71;
  uint *puStack_70;
  uint *puStack_6c;
  uint *puStack_68;
  uint *puStack_64;
  LPVOID pvStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint *puStack_4c;
  uint *puStack_48;
  undefined4 uStack_44;
  uint *puStack_3c;
  uint *puStack_38;
  undefined2 uStack_32;
  int iStack_30;
  LPVOID pvStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  int iStack_20;
  uint *puStack_1c;
  uint *puStack_18;

  iVar7 = (*(code *)0x5357b0)();
  FUN_10111020(param_2,&DAT_101420d4,8);
  _Src_00 = (byte *)param_2[1];
  puVar21 = (uint *)param_2[2];
  pbVar8 = (byte *)FUN_10110f10(_Src_00,(uint)puVar21);
  if ((pbVar8 == (byte *)0x0) ||
     (pbVar8 = (byte *)FUN_10110b00(pbVar8,extraout_EDX), pbVar8 == (byte *)0x0)) {
    iStack_30 = 0;
    pvStack_2c = (LPVOID)0x1;
    uStack_28 = 0;
    puVar24 = param_2;
  }
  else {
    FUN_100935a0((undefined8 *)&iStack_30,pbVar8,(SIZE_T)extraout_EDX_00);
    puVar24 = extraout_EDX_00;
  }
  FUN_1006b940((undefined1 *)&uStack_a4,_Src_00,(SIZE_T)puVar21);
  if ((char)uStack_a4 == -1) {
    piStack_24 = (int *)(param_3 + 0x150);
    cStack_74 = (char)uStack_a0;
    uStack_73 = (undefined2)((ulonglong)uStack_a0 >> 8);
    cStack_71 = (char)((ulonglong)uStack_a0 >> 0x18);
    puStack_6c = puStack_98;
    puStack_68 = puStack_94;
    puStack_64 = puStack_90;
    pvStack_60 = pvStack_8c;
    puStack_7c = puVar21;
    puStack_70 = uStack_a0._4_4_;
    while (FUN_10090ef0((undefined8 *)&iStack_20,(int *)&cStack_74), puVar23 = puStack_18,
          puVar21 = puStack_1c, iVar16 = iStack_20, iStack_20 != -2) {
      if (iStack_20 == -1) {
        cStack_c0 = '\0';
        puVar22 = puStack_18;
        puStack_ac = puStack_18;
        puStack_bc = puStack_1c;
        goto joined_r0x100665eb;
      }
      if (puStack_18 == (uint *)0x0) goto LAB_10066114;
      uStack_a0 = CONCAT44(puStack_18,puStack_1c);
      puStack_98 = (uint *)0x0;
      puStack_94 = puStack_18;
      uStack_a4 = 0x3d;
      pvStack_8c = (LPVOID)CONCAT31(pvStack_8c._1_3_,1);
      puStack_90 = (uint *)0x3d;
      FUN_10090ba0(&uStack_50,(int)&uStack_a4);
      puVar22 = puStack_48;
      puVar24 = puStack_7c;
      if (CONCAT22(uStack_50._2_2_,CONCAT11(uStack_50._1_1_,(char)uStack_50)) != 1) {
        if (puStack_7c == (uint *)0x0) {
          puStack_ac = (uint *)0x1;
          puVar22 = extraout_EDX_01;
        }
        else {
          puStack_ac = FUN_10107380(0,(SIZE_T)puStack_7c);
          if (puStack_ac == (uint *)0x0) {
LAB_10066978:
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          memcpy(puStack_ac,_Src_00,(size_t)puVar24);
          puVar22 = extraout_EDX_05;
        }
        cStack_c0 = '\x06';
        puStack_38 = (uint *)0x0;
        puStack_3c = puVar24;
        goto joined_r0x1006689d;
      }
      puVar24 = (uint *)((int)puVar23 - (int)puStack_48);
      _Src = (uint *)((int)puVar21 + (int)puStack_48);
      if (puStack_4c == (uint *)&DAT_00000006) {
        if ((short)puVar21[1] != 0x6465 || *puVar21 != 0x736f6c63) {
          puVar22 = (uint *)0x70616e73;
          if ((short)puVar21[1] == 0x785f && *puVar21 == 0x70616e73) {
            if (puVar24 == (uint *)0x1) {
              cVar20 = (char)*_Src;
              puVar22 = (uint *)0x70616e01;
              if ((cVar20 == '+') || (cVar20 == '-')) goto LAB_10066715;
            }
            else {
              if (puVar24 == (uint *)0x0) goto LAB_10066711;
              cVar20 = (char)*_Src;
            }
            uVar12 = 0;
            puVar24 = (uint *)((int)puVar24 - (uint)(cVar20 == '+'));
            pbVar8 = (byte *)((int)_Src + (uint)(cVar20 == '+'));
            if (&DAT_00000008 < puVar24) {
              while (bVar27 = puVar24 != (uint *)0x0, puVar24 = (uint *)((int)puVar24 + -1), bVar27)
              {
                uVar13 = (uint)((ulonglong)uVar12 * 10);
                bVar5 = *pbVar8;
                if ((int)((ulonglong)uVar12 * 10 >> 0x20) != 0) goto LAB_10066947;
                uVar14 = bVar5 - 0x30;
                if (9 < uVar14) goto LAB_1006612f;
                pbVar8 = pbVar8 + 1;
                uVar12 = uVar14 + uVar13;
                if (CARRY4(uVar14,uVar13)) goto LAB_10066940;
              }
            }
            else {
              for (; puVar24 != (uint *)0x0; puVar24 = (uint *)((int)puVar24 + -1)) {
                bVar5 = *pbVar8;
                if (9 < bVar5 - 0x30) goto LAB_1006612f;
                pbVar8 = pbVar8 + 1;
                uVar12 = (bVar5 - 0x30) + uVar12 * 10;
              }
            }
            *(uint *)(iVar7 + 0x2c) = uVar12;
          }
          else {
            if ((short)puVar21[1] != 0x795f || *puVar21 != 0x70616e73) {
              puStack_b0 = (uint *)&DAT_00000006;
              goto LAB_10066803;
            }
            if (puVar24 == (uint *)0x1) {
              cVar20 = (char)*_Src;
              puVar22 = (uint *)0x70616e01;
              if ((cVar20 == '+') || (cVar20 == '-')) goto LAB_10066715;
            }
            else {
              if (puVar24 == (uint *)0x0) goto LAB_10066711;
              cVar20 = (char)*_Src;
            }
            uVar12 = 0;
            puVar24 = (uint *)((int)puVar24 - (uint)(cVar20 == '+'));
            pbVar8 = (byte *)((int)_Src + (uint)(cVar20 == '+'));
            if (&DAT_00000008 < puVar24) {
              while (bVar27 = puVar24 != (uint *)0x0, puVar24 = (uint *)((int)puVar24 + -1), bVar27)
              {
                uVar13 = (uint)((ulonglong)uVar12 * 10);
                bVar5 = *pbVar8;
                if ((int)((ulonglong)uVar12 * 10 >> 0x20) != 0) goto LAB_10066947;
                uVar14 = bVar5 - 0x30;
                if (9 < uVar14) goto LAB_1006612f;
                pbVar8 = pbVar8 + 1;
                uVar12 = uVar14 + uVar13;
                if (CARRY4(uVar14,uVar13)) goto LAB_10066940;
              }
            }
            else {
              for (; puVar24 != (uint *)0x0; puVar24 = (uint *)((int)puVar24 + -1)) {
                bVar5 = *pbVar8;
                if (9 < bVar5 - 0x30) goto LAB_1006612f;
                pbVar8 = pbVar8 + 1;
                uVar12 = (bVar5 - 0x30) + uVar12 * 10;
              }
            }
            *(uint *)(iVar7 + 0x30) = uVar12;
          }
          goto LAB_10066114;
        }
        if (puVar24 == (uint *)0x1) {
          cVar20 = (char)*_Src;
          puVar22 = (uint *)0x1;
          if ((cVar20 != '+') && (cVar20 != '-')) goto LAB_10065fda;
LAB_10066715:
          cStack_c0 = '\t';
        }
        else {
          if (puVar24 == (uint *)0x0) {
LAB_10066711:
            puVar22 = (uint *)0x0;
            goto LAB_10066715;
          }
          cVar20 = (char)*_Src;
LAB_10065fda:
          cStack_c0 = '\t';
          puVar24 = (uint *)((int)puVar24 - (uint)(cVar20 == '+'));
          pbVar8 = (byte *)((int)_Src + (uint)(cVar20 == '+'));
          if ((uint *)0x2 < puVar24) {
            uVar12 = 0;
            while (bVar27 = puVar24 != (uint *)0x0, puVar24 = (uint *)((int)puVar24 + -1), bVar27) {
              sVar6 = (ushort)(byte)uVar12 * 10;
              if ((char)((ushort)sVar6 >> 8) != '\0') {
                puVar22 = (uint *)(uint)(byte)(((byte)(*pbVar8 - 0x30) < 10) + 1);
                goto joined_r0x1006689d;
              }
              uVar12 = *pbVar8 - 0x30;
              if (9 < uVar12) goto LAB_1006612f;
              pbVar8 = pbVar8 + 1;
              bVar5 = (byte)sVar6;
              bVar19 = (byte)uVar12;
              uVar12 = (uint)(byte)(bVar5 + bVar19);
              if (CARRY1(bVar5,bVar19)) goto LAB_10066940;
            }
LAB_1006600c:
            cVar20 = (char)uVar12;
LAB_100660ff:
            *(bool *)(iVar7 + 0x10) = cVar20 != '\0';
            goto LAB_10066114;
          }
          if (puVar24 == (uint *)0x0) {
            cVar20 = '\0';
            goto LAB_100660ff;
          }
          puVar22 = (uint *)0x1;
          uVar12 = *pbVar8 - 0x30;
          if (uVar12 < 10) {
            if (puVar24 == (uint *)0x1) goto LAB_1006600c;
            if (pbVar8[1] - 0x30 < 10) {
              cVar20 = (char)(pbVar8[1] - 0x30) + (char)uVar12 * '\n';
              goto LAB_100660ff;
            }
          }
        }
        goto joined_r0x1006689d;
      }
      if (puStack_4c == (uint *)0x9) {
        iVar9 = memcmp(puVar21,"precision",9);
        if (iVar9 == 0) {
          if (puVar24 == (uint *)0x1) {
            cVar20 = (char)*_Src;
            puVar22 = (uint *)0x1;
            if ((cVar20 == '+') || (cVar20 == '-')) goto LAB_10066715;
          }
          else {
            if (puVar24 == (uint *)0x0) goto LAB_10066711;
            cVar20 = (char)*_Src;
          }
          uVar12 = 0;
          puVar24 = (uint *)((int)puVar24 - (uint)(cVar20 == '+'));
          pbVar8 = (byte *)((int)_Src + (uint)(cVar20 == '+'));
          if (&DAT_00000008 < puVar24) {
            while (bVar27 = puVar24 != (uint *)0x0, puVar24 = (uint *)((int)puVar24 + -1), bVar27) {
              uVar13 = (uint)((ulonglong)uVar12 * 10);
              bVar5 = *pbVar8;
              if ((int)((ulonglong)uVar12 * 10 >> 0x20) != 0) goto LAB_10066947;
              uVar14 = bVar5 - 0x30;
              if (9 < uVar14) goto LAB_1006612f;
              pbVar8 = pbVar8 + 1;
              uVar12 = uVar14 + uVar13;
              if (CARRY4(uVar14,uVar13)) goto LAB_10066940;
            }
          }
          else {
            for (; puVar24 != (uint *)0x0; puVar24 = (uint *)((int)puVar24 + -1)) {
              bVar5 = *pbVar8;
              if (9 < bVar5 - 0x30) goto LAB_1006612f;
              pbVar8 = pbVar8 + 1;
              uVar12 = (bVar5 - 0x30) + uVar12 * 10;
            }
          }
          *(uint *)(iVar7 + 0x14) = uVar12;
          goto LAB_10066114;
        }
        puStack_b0 = (uint *)0x9;
        puVar22 = extraout_EDX_03;
LAB_10066803:
        puVar24 = puStack_7c;
        pvStack_78 = (LPVOID)0x1;
        puStack_ac = (uint *)0x1;
        if (puStack_7c != (uint *)0x0) {
          puStack_ac = FUN_10107380(0,(SIZE_T)puStack_7c);
          if (puStack_ac == (uint *)0x0) goto LAB_1006696a;
          memcpy(puStack_ac,_Src_00,(size_t)puVar24);
          puVar22 = extraout_EDX_06;
        }
        if (puStack_b0 != (uint *)0x0) {
          pvVar18 = FUN_10107380(0,(SIZE_T)puStack_b0);
          if (pvVar18 == (LPVOID)0x0) {
LAB_1006696a:
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          pvStack_78 = pvVar18;
          memcpy(pvVar18,puVar21,(size_t)puStack_b0);
          puVar22 = extraout_EDX_07;
        }
        cStack_c0 = '\a';
        puStack_38 = (uint *)0x0;
        puStack_3c = puStack_7c;
        puVar24 = puStack_b0;
        goto joined_r0x1006689d;
      }
      puStack_b0 = puStack_4c;
      if (puStack_4c != (uint *)0xa) goto LAB_10066803;
      puStack_b0 = puStack_48;
      puStack_ac = puVar23;
      iVar9 = memcmp(puVar21,"connection",10);
      if (iVar9 == 0) {
        if (puVar24 == (uint *)0x1) {
          cVar20 = (char)*_Src;
          puVar22 = (uint *)0x1;
          if ((cVar20 == '+') || (cVar20 == '-')) goto LAB_10066715;
        }
        else {
          if (puVar24 == (uint *)0x0) goto LAB_10066711;
          cVar20 = (char)*_Src;
        }
        uVar12 = 0;
        puVar24 = (uint *)((int)puVar24 - (uint)(cVar20 == '+'));
        pbVar8 = (byte *)((int)_Src + (uint)(cVar20 == '+'));
        if (&DAT_00000008 < puVar24) {
          while (bVar27 = puVar24 != (uint *)0x0, puVar24 = (uint *)((int)puVar24 + -1), bVar27) {
            uVar13 = (uint)((ulonglong)uVar12 * 10);
            bVar5 = *pbVar8;
            if ((int)((ulonglong)uVar12 * 10 >> 0x20) != 0) goto LAB_10066947;
            uVar14 = bVar5 - 0x30;
            if (9 < uVar14) goto LAB_1006612f;
            pbVar8 = pbVar8 + 1;
            uVar12 = uVar14 + uVar13;
            if (CARRY4(uVar14,uVar13)) goto LAB_10066940;
          }
        }
        else {
          for (; puVar24 != (uint *)0x0; puVar24 = (uint *)((int)puVar24 + -1)) {
            bVar5 = *pbVar8;
            if (9 < bVar5 - 0x30) goto LAB_1006612f;
            pbVar8 = pbVar8 + 1;
            uVar12 = (bVar5 - 0x30) + uVar12 * 10;
          }
        }
        *(uint *)(iVar7 + 0xc) = uVar12;
      }
      else {
        iVar9 = memcmp(puVar21,&DAT_1013f964,10);
        if (iVar9 != 0) {
          puStack_b0 = (uint *)0xa;
          puVar22 = extraout_EDX_02;
          goto LAB_10066803;
        }
        uVar10 = 0xffffffff;
        if (puVar23 != puVar22) {
          puVar11 = (undefined4 *)FUN_100025a0(piStack_24,_Src,(uint)puVar24);
          if (puVar11 == (undefined4 *)0x0) {
            puStack_38 = FUN_10107380(0,(SIZE_T)puVar24);
            if (puStack_38 == (uint *)0x0) goto LAB_10066978;
            memcpy(puStack_38,_Src,(size_t)puVar24);
            uStack_50._0_1_ = (char)&iStack_30;
            uStack_50._1_1_ = (char)((uint)&iStack_30 >> 8);
            uStack_50._2_2_ = (undefined2)((uint)&iStack_30 >> 0x10);
            puStack_4c = (uint *)&LAB_100922c0;
            FUN_10093970((undefined8 *)&pvStack_8c,(ushort *)&DAT_1013f981,(uint)&uStack_50);
            puVar22 = (uint *)(uStack_a4 >> 8 & 0xff);
            puStack_7c = (uint *)&DAT_1013f99a;
            puStack_ac = (uint *)&DAT_00000004;
            cStack_c0 = '\x05';
            puStack_3c = puVar24;
            puStack_b0 = puStack_88;
            pvStack_78 = pvStack_8c;
            uStack_32 = uStack_a4._2_2_;
            puStack_b4 = puStack_84;
            goto joined_r0x1006689d;
          }
          uVar10 = *puVar11;
        }
        *(undefined4 *)(iVar7 + 0x28) = uVar10;
      }
LAB_10066114:
      if (iVar16 != 0) {
        pvVar15 = GetProcessHeap();
        HeapFree(pvVar15,0,puVar21);
      }
    }
    if (puStack_70 != (uint *)0x0) {
      pvVar18 = (LPVOID)CONCAT13(cStack_71,CONCAT21(uStack_73,cStack_74));
      pvVar15 = GetProcessHeap();
      HeapFree(pvVar15,0,pvVar18);
    }
    CloseHandle(pvStack_60);
    iVar16 = FUN_10110f10(_Src_00,(uint)puStack_7c);
    if (iVar16 != 0) {
      FUN_10110e70((int)param_2,extraout_EDX_04);
    }
    FUN_10111020(param_2,&DAT_101420dc,10);
    pvVar2 = (void *)param_2[1];
    SVar3 = param_2[2];
    FUN_1011c880((undefined8 *)&cStack_74,(int)pvVar2,SVar3);
    puVar24 = puStack_6c;
    puVar21 = puStack_70;
    if (CONCAT13(cStack_71,CONCAT21(uStack_73,cStack_74)) != -1) {
      pvStack_78 = (LPVOID)CONCAT13(cStack_71,CONCAT21(uStack_73,cStack_74));
      uStack_a4 = 0;
      uStack_a0 = 4;
      FUN_1002cc00(&uStack_a4,(int)puStack_70,(int)puStack_6c);
      uVar12 = uStack_a4;
      iVar16 = (int)uStack_a0._4_4_;
      lpMem = (int *)(uint *)uStack_a0;
      *(uint **)(iVar7 + 8) = uStack_a0._4_4_;
      (*(code *)0x409be0)(uStack_a0._4_4_);
      puVar25 = (undefined8 *)&DAT_00000008;
      if (*(undefined8 **)(iVar7 + 4) != (undefined8 *)0x0) {
        puVar25 = *(undefined8 **)(iVar7 + 4);
      }
      if (iVar16 != 0) {
        iVar9 = iVar16 << 3;
        puVar1 = puVar25 + iVar16 * 3;
        piVar17 = lpMem;
        do {
          if (iVar9 == 0) break;
          iVar16 = *piVar17;
          puStack_94 = (uint *)piVar17[1];
          uStack_a0 = *(undefined8 *)piVar17;
          uStack_a4 = 0x2c;
          puStack_98 = (uint *)0x0;
          puStack_90 = (uint *)&DAT_0000002c;
          pvStack_8c = (LPVOID)CONCAT31(pvStack_8c._1_3_,1);
          puStack_88 = (uint *)0x0;
          uStack_80 = 1;
          puStack_84 = puStack_94;
          FUN_10090ba0((undefined4 *)&cStack_74,(int)&uStack_a4);
          puVar24 = puStack_88;
          if (CONCAT13(cStack_71,CONCAT21(uStack_73,cStack_74)) != 1) {
            if (uStack_80._1_1_ == '\0') {
              uStack_80 = CONCAT11(1,(char)uStack_80);
              if (((char)uStack_80 == '\x01') || (puStack_84 != puStack_88)) {
                uVar13 = (int)puStack_84 - (int)puStack_88;
                iVar16 = (int)(uint *)uStack_a0;
                goto LAB_100663e9;
              }
            }
            goto LAB_1006674f;
          }
          uVar13 = (int)puStack_70 - (int)puStack_88;
          puStack_88 = puStack_6c;
LAB_100663e9:
          FUN_10098960((undefined1 *)&uStack_50,(uint *)(iVar16 + (int)puVar24),uVar13);
          if ((char)uStack_50 != '\0') {
LAB_100667b2:
            *param_1 = '\n';
            param_1[1] = uStack_50._1_1_;
LAB_100667c0:
            if (uVar12 != 0) {
              pvVar15 = GetProcessHeap();
              HeapFree(pvVar15,0,lpMem);
            }
            if (pvStack_78 != (LPVOID)0x0) {
              pvVar15 = GetProcessHeap();
              HeapFree(pvVar15,0,puVar21);
            }
            goto LAB_100661d4;
          }
          *puVar25 = CONCAT44(uStack_44,puStack_48);
          if (uStack_80._1_1_ != '\0') {
LAB_1006674f:
            FUN_10110c20((SIZE_T *)&puStack_70,pvVar2,SVar3);
            param_1[3] = cStack_71;
            *(undefined2 *)(param_1 + 1) = uStack_73;
            *(undefined8 *)(param_1 + 0x1c) = uStack_58;
            *(ulonglong *)(param_1 + 0x14) = CONCAT44(uStack_5c,pvStack_60);
            *(ulonglong *)(param_1 + 0xc) = CONCAT44(puStack_64,puStack_68);
            *param_1 = '\x06';
            *(uint **)(param_1 + 4) = puStack_70;
            *(uint **)(param_1 + 8) = puStack_6c;
            goto LAB_100667c0;
          }
          iVar16 = (int)(uint *)uStack_a0;
          FUN_10090ba0((undefined4 *)&cStack_74,(int)&uStack_a4);
          puVar24 = puStack_88;
          if (CONCAT13(cStack_71,CONCAT21(uStack_73,cStack_74)) != 1) {
            if (uStack_80._1_1_ == '\0') {
              uStack_80 = CONCAT11(1,(char)uStack_80);
              if (((char)uStack_80 == '\x01') || (puStack_84 != puStack_88)) {
                uVar13 = (int)puStack_84 - (int)puStack_88;
                iVar16 = (int)(uint *)uStack_a0;
                goto LAB_10066480;
              }
            }
            goto LAB_1006674f;
          }
          uVar13 = (int)puStack_70 - (int)puStack_88;
          puStack_88 = puStack_6c;
LAB_10066480:
          FUN_10098960((undefined1 *)&uStack_50,(uint *)(iVar16 + (int)puVar24),uVar13);
          if ((char)uStack_50 != '\0') goto LAB_100667b2;
          puVar25[1] = CONCAT44(uStack_44,puStack_48);
          if (uStack_80._1_1_ != '\0') goto LAB_1006674f;
          iVar16 = (int)(uint *)uStack_a0;
          FUN_10090ba0((undefined4 *)&cStack_74,(int)&uStack_a4);
          puVar24 = puStack_88;
          if (CONCAT13(cStack_71,CONCAT21(uStack_73,cStack_74)) != 1) {
            if (uStack_80._1_1_ == '\0') {
              uStack_80 = CONCAT11(1,(char)uStack_80);
              if (((char)uStack_80 == '\x01') || (puStack_84 != puStack_88)) {
                uVar13 = (int)puStack_84 - (int)puStack_88;
                iVar16 = (int)(uint *)uStack_a0;
                goto LAB_10066518;
              }
            }
            goto LAB_1006674f;
          }
          uVar13 = (int)puStack_70 - (int)puStack_88;
          puStack_88 = puStack_6c;
LAB_10066518:
          FUN_10098960((undefined1 *)&uStack_50,(uint *)(iVar16 + (int)puVar24),uVar13);
          if ((char)uStack_50 != '\0') goto LAB_100667b2;
          puVar25[2] = CONCAT44(uStack_44,puStack_48);
          if ((uStack_80._1_1_ == '\0') &&
             ((FUN_10090ba0((undefined4 *)&cStack_74,(int)&uStack_a4), cStack_74 != '\0' ||
              ((uStack_80._1_1_ == '\0' && (((char)uStack_80 != '\0' || (puStack_84 != puStack_88)))
               ))))) {
            FUN_10110c20(&uStack_50,pvVar2,SVar3);
            puStack_68 = (uint *)(CONCAT44(uStack_44,puStack_48) >> 8);
            puStack_64._0_3_ = (undefined3)((uint)uStack_44 >> 8);
            cStack_71 = (char)uStack_50;
            puStack_70 = (uint *)(CONCAT44(puStack_4c,
                                           CONCAT22(uStack_50._2_2_,
                                                    CONCAT11(uStack_50._1_1_,(char)uStack_50))) >> 8
                                 );
            puStack_6c._0_3_ = (undefined3)((uint)puStack_4c >> 8);
            puStack_6c = (uint *)CONCAT13((char)puStack_48,puStack_6c._0_3_);
            *param_1 = '\x06';
            *(ulonglong *)(param_1 + 9) = CONCAT44(puStack_68,puStack_6c);
            *(ulonglong *)(param_1 + 1) =
                 CONCAT44(puStack_70,CONCAT13((char)uStack_50,CONCAT21(uStack_73,cStack_74)));
            *(undefined4 *)(param_1 + 0x10) = uStack_44;
            goto LAB_100667c0;
          }
          puVar25 = puVar25 + 3;
          iVar9 = iVar9 + -8;
          piVar17 = piVar17 + 2;
        } while (puVar25 != puVar1);
      }
      if (uVar12 != 0) {
        pvVar15 = GetProcessHeap();
        HeapFree(pvVar15,0,lpMem);
      }
      (*(code *)0x53578c)();
      FUN_1011b820((int)param_2);
      *(int *)(param_1 + 4) = iVar7;
      *param_1 = -1;
      if (pvStack_78 != (LPVOID)0x0) {
        pvVar15 = GetProcessHeap();
        HeapFree(pvVar15,0,puVar21);
      }
      pvVar18 = pvStack_2c;
      if (iStack_30 < 1) {
        return param_1;
      }
      pvVar15 = GetProcessHeap();
      HeapFree(pvVar15,0,pvVar18);
      return param_1;
    }
    FUN_10110c20((SIZE_T *)&puStack_98,pvVar2,SVar3);
    param_1[3] = uStack_a4._3_1_;
    *(undefined2 *)(param_1 + 1) = uStack_a4._1_2_;
    *(uint **)(param_1 + 0x20) = puStack_84;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(puStack_90,puStack_94);
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(puStack_88,pvStack_8c);
    *param_1 = '\x01';
    *(uint **)(param_1 + 4) = puVar21;
    *(uint **)(param_1 + 8) = puVar24;
    *(uint **)(param_1 + 0xc) = puStack_98;
    goto LAB_100661d4;
  }
  cStack_c4 = (char)(uStack_a4 >> 8);
  puStack_bc = (uint *)uStack_a0;
  puStack_ac = uStack_a0._4_4_;
  pvStack_78 = pvStack_8c;
  puStack_b4 = puStack_84;
  puStack_b0 = puStack_88;
  puVar21 = puStack_98;
  puVar23 = puStack_94;
  puVar24 = puStack_90;
  uVar26 = uStack_a4._2_2_;
  cStack_c0 = (char)uStack_a4;
  goto LAB_10066198;
LAB_10066947:
  cStack_c0 = '\t';
  puVar22 = (uint *)(uint)(byte)(((byte)(bVar5 - 0x30) < 10) + 1);
  goto joined_r0x1006689d;
LAB_10066940:
  cStack_c0 = '\t';
  puVar22 = (uint *)0x2;
  goto joined_r0x1006689d;
LAB_1006612f:
  cStack_c0 = '\t';
  puVar22 = (uint *)0x1;
joined_r0x1006689d:
  puStack_bc = puStack_7c;
  if (iVar16 != 0) {
    pvVar15 = GetProcessHeap();
    HeapFree(pvVar15,0,puVar21);
    puStack_bc = puStack_7c;
  }
joined_r0x100665eb:
  cStack_c4 = (char)puVar22;
  if (puStack_70 != (uint *)0x0) {
    pvVar18 = (LPVOID)CONCAT13(cStack_71,CONCAT21(uStack_73,cStack_74));
    pvVar15 = GetProcessHeap();
    HeapFree(pvVar15,0,pvVar18);
  }
  CloseHandle(pvStack_60);
  puVar21 = puStack_3c;
  puVar23 = puStack_38;
  uVar26 = uStack_32;
LAB_10066198:
  *param_1 = cStack_c0;
  param_1[1] = cStack_c4;
  *(undefined2 *)(param_1 + 2) = uVar26;
  *(uint **)(param_1 + 4) = puStack_bc;
  *(uint **)(param_1 + 8) = puStack_ac;
  *(uint **)(param_1 + 0xc) = puVar21;
  *(uint **)(param_1 + 0x10) = puVar23;
  *(uint **)(param_1 + 0x14) = puVar24;
  *(LPVOID *)(param_1 + 0x18) = pvStack_78;
  *(uint **)(param_1 + 0x1c) = puStack_b0;
  *(uint **)(param_1 + 0x20) = puStack_b4;
LAB_100661d4:
  pvVar18 = pvStack_2c;
  if (0 < iStack_30) {
    pvVar15 = GetProcessHeap();
    HeapFree(pvVar15,0,pvVar18);
  }
  (*(code *)0x405a7c)();
  return param_1;
}
