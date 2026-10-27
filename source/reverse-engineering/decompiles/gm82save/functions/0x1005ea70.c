// rea decompile_all
// name: FUN_1005ea70
// address: 0x1005ea70
// body: available
// range: 0x1005ea70-0x1005ef4d inclusive
// range: 0x1005ef50-0x1005efdd inclusive
// range: 0x1005efe0-0x1005f3dd inclusive
// range: 0x1005f3e0-0x1005faf9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1005ea70(char *param_1,uint *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  code *pcVar3;
  int *******_Buf1;
  uint *puVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *******pppppppiVar10;
  int iVar11;
  int *******pppppppiVar12;
  HANDLE pvVar13;
  char cVar14;
  byte bVar15;
  SIZE_T extraout_ECX;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  SIZE_T extraout_EDX;
  SIZE_T extraout_EDX_00;
  SIZE_T SVar21;
  uint uVar22;
  SIZE_T extraout_EDX_01;
  SIZE_T SVar23;
  int *******_Dst;
  int *******pppppppiVar24;
  byte *pbVar25;
  bool bVar26;
  int *******local_90;
  int *******local_8c;
  int *******local_88;
  char local_84;
  int *******local_80;
  int local_7c;
  int *******local_78;
  int *******local_74;
  int *******local_70;
  SIZE_T local_6c;
  uint *local_68;
  SIZE_T local_64;
  char *local_60;
  char local_5c;
  char cStack_5b;
  undefined2 uStack_5a;
  int *******pppppppiStack_58;
  int *******pppppppiStack_54;
  int *******pppppppiStack_50;
  int *******local_4c;
  SIZE_T SStack_48;
  int *******local_44;
  SIZE_T SStack_40;
  uint *local_3c;
  int *******local_38;
  int *******pppppppiStack_34;
  int *******local_30;
  int *******local_24;
  void *local_20;
  int local_1c;
  SIZE_T local_18;
  int local_14;

  local_6c = 0x1005ea89;
  uVar1 = *(undefined4 *)(_DAT_00788958 + 0x388);
  local_60 = param_1;
  FUN_10111020(param_2,(byte *)"game_information.txt",0x14);
  pvVar2 = (void *)param_2[1];
  local_80 = (int *******)param_2[2];
  FUN_1006b940(&local_5c,pvVar2,(SIZE_T)local_80);
  local_84 = local_5c;
  if (local_5c == -1) {
    local_38 = pppppppiStack_58;
    pppppppiStack_34 = pppppppiStack_54;
    local_30 = pppppppiStack_50;
    local_24 = local_44;
    local_68 = param_2;
    local_64 = uVar1;
    local_20 = pvVar2;
    do {
      pppppppiVar24 = (int *******)&local_38;
      FUN_10090ef0((undefined8 *)&local_7c,(int *)pppppppiVar24);
      pppppppiVar12 = local_74;
      _Buf1 = local_78;
      iVar11 = local_7c;
      if (local_7c == -2) {
        if (pppppppiStack_34 != (int *******)0x0) {
          pvVar13 = GetProcessHeap();
          HeapFree(pvVar13,0,local_38);
        }
        CloseHandle(local_24);
        puVar4 = local_68;
        FUN_10110c70(local_68,"rtf",3);
        pbVar25 = (byte *)puVar4[1];
        SVar21 = puVar4[2];
        FUN_1005b040(&local_5c,pbVar25,SVar21);
        if (local_5c != -1) {
          *(ulonglong *)(local_60 + 0x10) = CONCAT44(SStack_48,local_4c);
          *(uint **)(local_60 + 0x20) = local_3c;
          *(ulonglong *)(local_60 + 0x18) = CONCAT44(SStack_40,local_44);
          *(ulonglong *)local_60 =
               CONCAT44(pppppppiStack_58,CONCAT22(uStack_5a,CONCAT11(cStack_5b,local_5c)));
          *(ulonglong *)(local_60 + 8) = CONCAT44(pppppppiStack_50,pppppppiStack_54);
          return;
        }
        iVar11 = FUN_10003510(pbVar25,SVar21);
        local_5c = (char)iVar11;
        cStack_5b = (char)((uint)iVar11 >> 8);
        uStack_5a = (undefined2)((uint)iVar11 >> 0x10);
        (*(code *)0x43dec0)();
        (*(code *)0x407ea8)();
        FUN_1011b820((int)puVar4);
        *local_60 = -1;
        return;
      }
      local_88 = local_78;
      if (local_7c == -1) {
        local_84 = '\0';
        local_8c._0_1_ = (char)local_78;
        SVar21 = extraout_ECX;
        SVar23 = extraout_EDX;
        _Dst = local_74;
        goto LAB_1005f9d3;
      }
      iVar16 = _DAT_0077b580;
      iVar7 = _DAT_0077b584;
      iVar17 = _DAT_0077b588;
      iVar18 = _DAT_0077b58c;
      if (local_74 == (int *******)0x0) goto LAB_1005f74f;
      pppppppiStack_58 = local_78;
      pppppppiStack_54 = local_74;
      pppppppiStack_50 = (int *******)0x0;
      local_4c = local_74;
      local_5c = '=';
      cStack_5b = '\0';
      uStack_5a = 0;
      local_44 = (int *******)CONCAT31(local_44._1_3_,1);
      SStack_48 = 0x3d;
      FUN_10090ba0(&local_1c,(int)&local_5c);
      if (local_1c != 1) {
        if (local_80 == (int *******)0x0) {
          _Dst = (int *******)0x1;
          SVar21 = extraout_EDX_00;
        }
        else {
          _Dst = FUN_10107380(0,(SIZE_T)local_80);
          if (_Dst == (int *******)0x0) {
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          memcpy(_Dst,local_20,(size_t)local_80);
          SVar21 = extraout_EDX_01;
        }
        local_8c = (int *******)&DAT_00000006;
        pppppppiVar24 = local_80;
        goto LAB_1005f9a2;
      }
      SVar21 = local_18;
      if (10 < local_18 - 3) goto switchD_1005ebf0_caseD_8;
      _Dst = (int *******)((int)pppppppiVar12 - local_14);
      pbVar25 = (byte *)((int)_Buf1 + local_14);
      pppppppiVar24 = pppppppiVar12;
      iVar16 = _DAT_0077b580;
      iVar7 = _DAT_0077b584;
      iVar17 = _DAT_0077b588;
      iVar18 = _DAT_0077b58c;
      switch((&switchD_1005ebf0::switchdataD_1005fafc)[local_18 - 3] + local_6c) {
      case 0x1005ebf2:
        if (*(char *)((int)_Buf1 + 2) != 'p' || *(short *)_Buf1 != 0x6f74) {
          SVar21 = 3;
          goto switchD_1005ebf0_caseD_8;
        }
        local_84 = '\t';
        SVar21 = 3;
        if (_Dst != (int *******)0x1) {
          if (_Dst == (int *******)0x0) goto LAB_1005f8ce;
          bVar15 = *pbVar25;
LAB_1005ef0d:
          if (bVar15 == 0x2d) {
            if (&DAT_00000008 < _Dst) {
              iVar7 = 0;
              iVar19 = (local_14 - (int)pppppppiVar12) + 1;
              do {
                pbVar25 = pbVar25 + 1;
                SVar21 = 3;
                iVar20 = (int)((longlong)iVar7 * 10);
                if ((longlong)iVar20 != (longlong)iVar7 * 10) goto LAB_1005fa81;
                uVar8 = *pbVar25 - 0x30;
                if (9 < uVar8) goto LAB_1005f8bb;
                iVar7 = iVar20 - uVar8;
                if (SBORROW4(iVar20,uVar8)) {
                  local_8c = (int *******)0x3;
                  goto LAB_1005f8bd;
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 != 0);
            }
            else {
              _Dst = (int *******)((int)_Dst + -1);
              if (_Dst == (int *******)0x0) {
                _DAT_0077b584 = 0;
                iVar7 = _DAT_0077b584;
              }
              else {
                pppppppiVar10 = (int *******)(local_14 + 1);
                iVar7 = 0;
                do {
                  uVar8 = *(byte *)((int)_Buf1 + (int)pppppppiVar10) - 0x30;
                  if (9 < uVar8) goto LAB_1005f8bb;
                  pppppppiVar10 = (int *******)((int)pppppppiVar10 + 1);
                  iVar7 = iVar7 * 10 - uVar8;
                } while (pppppppiVar12 != pppppppiVar10);
              }
            }
          }
          else {
            if (bVar15 == 0x2b) {
              pbVar25 = pbVar25 + 1;
              _Dst = (int *******)((int)_Dst + -1);
            }
            iVar7 = 0;
            if (_Dst < (int *******)0x8) {
              for (; _Dst != (int *******)0x0; _Dst = (int *******)((int)_Dst + -1)) {
                bVar15 = *pbVar25;
                if (9 < bVar15 - 0x30) goto LAB_1005f76f;
                pbVar25 = pbVar25 + 1;
                iVar7 = (bVar15 - 0x30) + iVar7 * 10;
              }
            }
            else {
              do {
                iVar19 = (int)((longlong)iVar7 * 10);
                if ((longlong)iVar19 != (longlong)iVar7 * 10) goto LAB_1005fa7d;
                uVar8 = *pbVar25 - 0x30;
                if (9 < uVar8) goto LAB_1005f76f;
                iVar7 = iVar19 + uVar8;
                if (SCARRY4(iVar19,uVar8)) goto LAB_1005f91e;
                pbVar25 = pbVar25 + 1;
                _Dst = (int *******)((int)_Dst + -1);
              } while (_Dst != (int *******)0x0);
            }
          }
          break;
        }
        bVar15 = *pbVar25;
        if ((bVar15 != 0x2b) && (bVar15 != 0x2d)) goto LAB_1005ef0d;
LAB_1005f8ee:
        local_84 = '\t';
        local_8c = (int *******)0x1;
        goto LAB_1005f9a6;
      case 0x1005ec33:
        iVar7 = memcmp(_Buf1,"resizable",9);
        SVar21 = 9;
        if (iVar7 != 0) goto switchD_1005ebf0_caseD_8;
        if (_Dst == (int *******)0x1) {
          bVar15 = *pbVar25;
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1005f76f;
        }
        else {
          if (_Dst == (int *******)0x0) goto LAB_1005f8ce;
          bVar15 = *pbVar25;
        }
        local_84 = '\t';
        _Dst = (int *******)((int)_Dst - (uint)(bVar15 == 0x2b));
        pbVar25 = pbVar25 + (bVar15 == 0x2b);
        if (_Dst < (int *******)0x3) {
          if (_Dst == (int *******)0x0) {
            uVar8 = 0;
            goto LAB_1005f58a;
          }
          uVar8 = *pbVar25 - 0x30;
          if (9 < uVar8) goto LAB_1005f76f;
          if (_Dst == (int *******)0x1) goto LAB_1005f58a;
          local_8c = (int *******)0x1;
          pppppppiVar24 = local_80;
          if (9 < pbVar25[1] - 0x30) goto LAB_1005f9a6;
          cVar14 = (char)(pbVar25[1] - 0x30) + (char)uVar8 * '\n';
        }
        else {
          uVar8 = 0;
          while (bVar26 = _Dst != (int *******)0x0, _Dst = (int *******)((int)_Dst + -1), bVar26) {
            sVar6 = (ushort)(byte)uVar8 * 10;
            bVar15 = *pbVar25;
            if ((char)((ushort)sVar6 >> 8) != '\0') goto LAB_1005fa67;
            if (9 < bVar15 - 0x30) goto LAB_1005f76f;
            pbVar25 = pbVar25 + 1;
            bVar5 = (byte)sVar6;
            bVar15 = (byte)(bVar15 - 0x30);
            uVar8 = (uint)(byte)(bVar5 + bVar15);
            if (CARRY1(bVar5,bVar15)) goto LAB_1005f91e;
          }
LAB_1005f58a:
          cVar14 = (char)uVar8;
        }
        DAT_0077b594 = cVar14 != '\0';
        iVar16 = _DAT_0077b580;
        iVar7 = _DAT_0077b584;
        iVar17 = _DAT_0077b588;
        iVar18 = _DAT_0077b58c;
        break;
      case 0x1005ec72:
        if (*_Buf1 != (int ******)0x7466656c) {
          SVar21 = 4;
          goto switchD_1005ebf0_caseD_8;
        }
        local_84 = '\t';
        SVar21 = 4;
        if (_Dst == (int *******)0x1) {
          bVar15 = *pbVar25;
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1005f8ee;
        }
        else {
          if (_Dst == (int *******)0x0) goto LAB_1005f8ce;
          bVar15 = *pbVar25;
        }
        if (bVar15 == 0x2d) {
          if (&DAT_00000008 < _Dst) {
            iVar16 = 0;
            iVar19 = (local_14 - (int)pppppppiVar12) + 1;
            do {
              pbVar25 = pbVar25 + 1;
              SVar21 = 4;
              iVar20 = (int)((longlong)iVar16 * 10);
              if ((longlong)iVar20 != (longlong)iVar16 * 10) goto LAB_1005fa81;
              uVar8 = *pbVar25 - 0x30;
              if (9 < uVar8) goto LAB_1005f8a8;
              iVar16 = iVar20 - uVar8;
              if (SBORROW4(iVar20,uVar8)) {
                local_8c = (int *******)0x3;
                goto LAB_1005f8aa;
              }
              iVar19 = iVar19 + 1;
            } while (iVar19 != 0);
          }
          else {
            _Dst = (int *******)((int)_Dst + -1);
            if (_Dst == (int *******)0x0) {
              _DAT_0077b580 = 0;
              iVar16 = _DAT_0077b580;
            }
            else {
              pppppppiVar10 = (int *******)(local_14 + 1);
              iVar16 = 0;
              do {
                uVar8 = *(byte *)((int)_Buf1 + (int)pppppppiVar10) - 0x30;
                if (9 < uVar8) goto LAB_1005f8a8;
                pppppppiVar10 = (int *******)((int)pppppppiVar10 + 1);
                iVar16 = iVar16 * 10 - uVar8;
              } while (pppppppiVar12 != pppppppiVar10);
            }
          }
        }
        else {
          if (bVar15 == 0x2b) {
            pbVar25 = pbVar25 + 1;
            _Dst = (int *******)((int)_Dst + -1);
          }
          iVar16 = 0;
          if (_Dst < (int *******)0x8) {
            for (; _Dst != (int *******)0x0; _Dst = (int *******)((int)_Dst + -1)) {
              bVar15 = *pbVar25;
              if (9 < bVar15 - 0x30) goto LAB_1005f76f;
              pbVar25 = pbVar25 + 1;
              iVar16 = (bVar15 - 0x30) + iVar16 * 10;
            }
          }
          else {
            do {
              iVar19 = (int)((longlong)iVar16 * 10);
              if ((longlong)iVar19 != (longlong)iVar16 * 10) goto LAB_1005fa7d;
              uVar8 = *pbVar25 - 0x30;
              if (9 < uVar8) goto LAB_1005f76f;
              iVar16 = iVar19 + uVar8;
              if (SCARRY4(iVar19,uVar8)) goto LAB_1005f91e;
              pbVar25 = pbVar25 + 1;
              _Dst = (int *******)((int)_Dst + -1);
            } while (_Dst != (int *******)0x0);
          }
        }
        break;
      case 0x1005eca6:
        local_70 = pppppppiVar12;
        pppppppiVar24 = (int *******)0x67696568;
        if (*(short *)(_Buf1 + 1) == 0x7468 && *_Buf1 == (int ******)0x67696568) {
          local_84 = '\t';
          SVar21 = 6;
          if (_Dst == (int *******)0x1) {
            bVar15 = *pbVar25;
            if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1005f8ee;
          }
          else {
            if (_Dst == (int *******)0x0) goto LAB_1005f8ce;
            bVar15 = *pbVar25;
          }
          if (bVar15 == 0x2d) {
            if (&DAT_00000008 < _Dst) {
              iVar18 = 0;
              iVar19 = (local_14 - (int)pppppppiVar12) + 1;
              do {
                pbVar25 = pbVar25 + 1;
                iVar20 = (int)((longlong)iVar18 * 10);
                if ((longlong)iVar20 != (longlong)iVar18 * 10) {
                  pppppppiVar12 = (int *******)0x3;
                  SVar21 = 6;
                  goto LAB_1005fa83;
                }
                uVar8 = *pbVar25 - 0x30;
                if (9 < uVar8) goto LAB_1005f8f6;
                iVar18 = iVar20 - uVar8;
                if (SBORROW4(iVar20,uVar8)) {
                  local_8c = (int *******)0x3;
                  goto LAB_1005f8f8;
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 != 0);
            }
            else {
              _Dst = (int *******)((int)_Dst + -1);
              if (_Dst == (int *******)0x0) {
                iVar18 = 0;
              }
              else {
                pppppppiVar10 = (int *******)(local_14 + 1);
                iVar18 = 0;
                do {
                  uVar8 = *(byte *)((int)_Buf1 + (int)pppppppiVar10) - 0x30;
                  pppppppiVar24 = pppppppiVar12;
                  if (9 < uVar8) goto LAB_1005f8f6;
                  pppppppiVar10 = (int *******)((int)pppppppiVar10 + 1);
                  iVar18 = iVar18 * 10 - uVar8;
                } while (pppppppiVar12 != pppppppiVar10);
              }
            }
          }
          else {
            if (bVar15 == 0x2b) {
              pbVar25 = pbVar25 + 1;
              _Dst = (int *******)((int)_Dst + -1);
            }
            iVar18 = 0;
            if (_Dst < (int *******)0x8) {
              for (; _Dst != (int *******)0x0; _Dst = (int *******)((int)_Dst + -1)) {
                bVar15 = *pbVar25;
                pppppppiVar12 = pppppppiVar24;
                if (9 < bVar15 - 0x30) goto LAB_1005f76f;
                pbVar25 = pbVar25 + 1;
                iVar18 = (bVar15 - 0x30) + iVar18 * 10;
              }
            }
            else {
              do {
                iVar19 = (int)((longlong)iVar18 * 10);
                if ((longlong)iVar19 != (longlong)iVar18 * 10) goto LAB_1005fa7d;
                uVar8 = *pbVar25 - 0x30;
                pppppppiVar12 = pppppppiVar24;
                if (9 < uVar8) goto LAB_1005f76f;
                iVar18 = iVar19 + uVar8;
                if (SCARRY4(iVar19,uVar8)) goto LAB_1005f91e;
                pbVar25 = pbVar25 + 1;
                _Dst = (int *******)((int)_Dst + -1);
              } while (_Dst != (int *******)0x0);
            }
          }
          break;
        }
        SVar21 = 6;
        if (*(short *)(_Buf1 + 1) != 0x7265 || *_Buf1 != (int ******)0x64726f62)
        goto switchD_1005ebf0_caseD_8;
        local_84 = '\t';
        if (_Dst == (int *******)0x1) {
          bVar15 = *pbVar25;
          pppppppiVar12 = pppppppiVar24;
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1005f76f;
        }
        else {
          if (_Dst == (int *******)0x0) goto LAB_1005f8ce;
          bVar15 = *pbVar25;
        }
        _Dst = (int *******)((int)_Dst - (uint)(bVar15 == 0x2b));
        pbVar25 = pbVar25 + (bVar15 == 0x2b);
        if (_Dst < (int *******)0x3) {
          if (_Dst == (int *******)0x0) {
            uVar8 = 0;
            goto LAB_1005f6a2;
          }
          uVar8 = *pbVar25 - 0x30;
          pppppppiVar12 = pppppppiVar24;
          if (9 < uVar8) goto LAB_1005f76f;
          if (_Dst == (int *******)0x1) goto LAB_1005f6a2;
          local_8c = (int *******)0x1;
          pppppppiVar24 = local_80;
          if (9 < pbVar25[1] - 0x30) goto LAB_1005f9a6;
          cVar14 = (char)(pbVar25[1] - 0x30) + (char)uVar8 * '\n';
        }
        else {
          uVar8 = 0;
          while (bVar26 = _Dst != (int *******)0x0, _Dst = (int *******)((int)_Dst + -1), bVar26) {
            sVar6 = (ushort)(byte)uVar8 * 10;
            bVar15 = *pbVar25;
            if ((char)((ushort)sVar6 >> 8) != '\0') goto LAB_1005fa67;
            pppppppiVar12 = pppppppiVar24;
            if (9 < bVar15 - 0x30) goto LAB_1005f76f;
            pbVar25 = pbVar25 + 1;
            bVar5 = (byte)sVar6;
            bVar15 = (byte)(bVar15 - 0x30);
            uVar8 = (uint)(byte)(bVar5 + bVar15);
            if (CARRY1(bVar5,bVar15)) goto LAB_1005f91e;
          }
LAB_1005f6a2:
          cVar14 = (char)uVar8;
        }
        DAT_0077b590 = cVar14 != '\0';
        break;
      case 0x1005ed0c:
        iVar7 = memcmp(_Buf1,"window_on_top",0xd);
        SVar21 = 0xd;
        if (iVar7 != 0) goto switchD_1005ebf0_caseD_8;
        if (_Dst == (int *******)0x1) {
          bVar15 = *pbVar25;
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1005f76f;
        }
        else {
          if (_Dst == (int *******)0x0) goto LAB_1005f8ce;
          bVar15 = *pbVar25;
        }
        local_84 = '\t';
        _Dst = (int *******)((int)_Dst - (uint)(bVar15 == 0x2b));
        pbVar25 = pbVar25 + (bVar15 == 0x2b);
        if (_Dst < (int *******)0x3) {
          if (_Dst == (int *******)0x0) {
            uVar8 = 0;
            goto LAB_1005f5a1;
          }
          uVar8 = *pbVar25 - 0x30;
          if (9 < uVar8) goto LAB_1005f76f;
          if (_Dst == (int *******)0x1) goto LAB_1005f5a1;
          local_8c = (int *******)0x1;
          pppppppiVar24 = local_80;
          if (9 < pbVar25[1] - 0x30) goto LAB_1005f9a6;
          cVar14 = (char)(pbVar25[1] - 0x30) + (char)uVar8 * '\n';
        }
        else {
          uVar8 = 0;
          while (bVar26 = _Dst != (int *******)0x0, _Dst = (int *******)((int)_Dst + -1), bVar26) {
            sVar6 = (ushort)(byte)uVar8 * 10;
            bVar15 = *pbVar25;
            if ((char)((ushort)sVar6 >> 8) != '\0') goto LAB_1005fa67;
            if (9 < bVar15 - 0x30) goto LAB_1005f76f;
            pbVar25 = pbVar25 + 1;
            bVar5 = (byte)sVar6;
            bVar15 = (byte)(bVar15 - 0x30);
            uVar8 = (uint)(byte)(bVar5 + bVar15);
            if (CARRY1(bVar5,bVar15)) goto LAB_1005f91e;
          }
LAB_1005f5a1:
          cVar14 = (char)uVar8;
        }
        DAT_0077b598 = cVar14 != '\0';
        iVar16 = _DAT_0077b580;
        iVar7 = _DAT_0077b584;
        iVar17 = _DAT_0077b588;
        iVar18 = _DAT_0077b58c;
        break;
      case 0x1005ed4b:
        local_70 = pppppppiVar12;
        pppppppiVar24 = (int *******)0x6f6c6f63;
        if (*(char *)(_Buf1 + 1) != 'r' || *_Buf1 != (int ******)0x6f6c6f63) {
          pppppppiVar24 = (int *******)0x74646977;
          if (*(char *)(_Buf1 + 1) == 'h' && *_Buf1 == (int ******)0x74646977) {
            SVar21 = 5;
            if (_Dst == (int *******)0x1) {
              bVar15 = *pbVar25;
              if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1005f8ee;
            }
            else {
              if (_Dst == (int *******)0x0) goto LAB_1005f8ce;
              bVar15 = *pbVar25;
            }
            if (bVar15 == 0x2d) {
              if (&DAT_00000008 < _Dst) {
                iVar17 = 0;
                iVar19 = (local_14 - (int)pppppppiVar12) + 1;
                do {
                  pbVar25 = pbVar25 + 1;
                  SVar21 = 5;
                  iVar20 = (int)((longlong)iVar17 * 10);
                  if ((longlong)iVar20 != (longlong)iVar17 * 10) goto LAB_1005fa81;
                  uVar8 = *pbVar25 - 0x30;
                  if (9 < uVar8) goto LAB_1005f855;
                  iVar17 = iVar20 - uVar8;
                  if (SBORROW4(iVar20,uVar8)) {
                    local_8c = (int *******)0x3;
                    goto LAB_1005f857;
                  }
                  iVar19 = iVar19 + 1;
                } while (iVar19 != 0);
              }
              else {
                _Dst = (int *******)((int)_Dst + -1);
                if (_Dst == (int *******)0x0) {
                  _DAT_0077b588 = 0;
                  iVar17 = _DAT_0077b588;
                }
                else {
                  pppppppiVar10 = (int *******)(local_14 + 1);
                  iVar17 = 0;
                  do {
                    uVar8 = *(byte *)((int)_Buf1 + (int)pppppppiVar10) - 0x30;
                    pppppppiVar24 = pppppppiVar12;
                    if (9 < uVar8) goto LAB_1005f855;
                    pppppppiVar10 = (int *******)((int)pppppppiVar10 + 1);
                    iVar17 = iVar17 * 10 - uVar8;
                  } while (pppppppiVar12 != pppppppiVar10);
                }
              }
            }
            else {
              if (bVar15 == 0x2b) {
                pbVar25 = pbVar25 + 1;
                _Dst = (int *******)((int)_Dst + -1);
              }
              iVar17 = 0;
              pppppppiVar12 = pppppppiVar24;
              if (_Dst < (int *******)0x8) {
                for (; _Dst != (int *******)0x0; _Dst = (int *******)((int)_Dst + -1)) {
                  bVar15 = *pbVar25;
                  if (9 < bVar15 - 0x30) goto LAB_1005f76f;
                  pbVar25 = pbVar25 + 1;
                  iVar17 = (bVar15 - 0x30) + iVar17 * 10;
                }
              }
              else {
                do {
                  iVar19 = (int)((longlong)iVar17 * 10);
                  if ((longlong)iVar19 != (longlong)iVar17 * 10) goto LAB_1005fa7d;
                  uVar8 = *pbVar25 - 0x30;
                  if (9 < uVar8) goto LAB_1005f76f;
                  iVar17 = iVar19 + uVar8;
                  if (SCARRY4(iVar19,uVar8)) goto LAB_1005f91e;
                  pbVar25 = pbVar25 + 1;
                  _Dst = (int *******)((int)_Dst + -1);
                } while (_Dst != (int *******)0x0);
              }
            }
            break;
          }
          SVar21 = 5;
          goto switchD_1005ebf0_caseD_8;
        }
        SVar21 = 5;
        if (_Dst != (int *******)0x1) {
          if (_Dst == (int *******)0x0) {
LAB_1005f8ce:
            local_84 = '\t';
            local_8c = (int *******)0x0;
            goto LAB_1005f9a6;
          }
          bVar15 = *pbVar25;
LAB_1005f515:
          uVar8 = 0;
          _Dst = (int *******)((int)_Dst - (uint)(bVar15 == 0x2b));
          pbVar25 = pbVar25 + (bVar15 == 0x2b);
          if (&DAT_00000008 < _Dst) {
            while (bVar26 = _Dst != (int *******)0x0, _Dst = (int *******)((int)_Dst + -1), bVar26)
            {
              uVar9 = (uint)((ulonglong)uVar8 * 10);
              if ((int)((ulonglong)uVar8 * 10 >> 0x20) != 0) {
                local_8c = (int *******)(uint)(byte)(((byte)(*pbVar25 - 0x30) < 10) + 1);
                goto LAB_1005f857;
              }
              uVar22 = *pbVar25 - 0x30;
              if (9 < uVar22) goto LAB_1005f855;
              pbVar25 = pbVar25 + 1;
              uVar8 = uVar22 + uVar9;
              if (CARRY4(uVar22,uVar9)) {
                local_8c = (int *******)0x2;
                goto LAB_1005f857;
              }
            }
          }
          else {
            for (; _Dst != (int *******)0x0; _Dst = (int *******)((int)_Dst + -1)) {
              if (9 < *pbVar25 - 0x30) goto LAB_1005f855;
              pbVar25 = pbVar25 + 1;
            }
          }
          (*(code *)0x4ee858)();
          iVar16 = _DAT_0077b580;
          iVar7 = _DAT_0077b584;
          iVar17 = _DAT_0077b588;
          iVar18 = _DAT_0077b58c;
          break;
        }
        bVar15 = *pbVar25;
        pppppppiVar12 = pppppppiVar24;
        if ((bVar15 != 0x2b) && (bVar15 != 0x2d)) goto LAB_1005f515;
LAB_1005f76f:
        local_8c = (int *******)0x1;
        pppppppiVar24 = pppppppiVar12;
        goto LAB_1005f774;
      case 0x1005edab:
        iVar7 = memcmp(_Buf1,"new_windowwidthheight",10);
        SVar21 = 10;
        if (iVar7 != 0) goto switchD_1005ebf0_caseD_8;
        if (_Dst == (int *******)0x1) {
          bVar15 = *pbVar25;
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1005f76f;
        }
        else {
          if (_Dst == (int *******)0x0) goto LAB_1005f8ce;
          bVar15 = *pbVar25;
        }
        local_84 = '\t';
        _Dst = (int *******)((int)_Dst - (uint)(bVar15 == 0x2b));
        pbVar25 = pbVar25 + (bVar15 == 0x2b);
        if (_Dst < (int *******)0x3) {
          if (_Dst == (int *******)0x0) {
            uVar8 = 0;
            goto LAB_1005f5b8;
          }
          uVar8 = *pbVar25 - 0x30;
          if (9 < uVar8) goto LAB_1005f76f;
          if (_Dst == (int *******)0x1) goto LAB_1005f5b8;
          local_8c = (int *******)0x1;
          pppppppiVar24 = local_80;
          if (9 < pbVar25[1] - 0x30) goto LAB_1005f9a6;
          cVar14 = (char)(pbVar25[1] - 0x30) + (char)uVar8 * '\n';
        }
        else {
          uVar8 = 0;
          while (bVar26 = _Dst != (int *******)0x0, _Dst = (int *******)((int)_Dst + -1), bVar26) {
            sVar6 = (ushort)(byte)uVar8 * 10;
            bVar15 = *pbVar25;
            if ((char)((ushort)sVar6 >> 8) != '\0') goto LAB_1005fa67;
            if (9 < bVar15 - 0x30) goto LAB_1005f76f;
            pbVar25 = pbVar25 + 1;
            bVar5 = (byte)sVar6;
            bVar15 = (byte)(bVar15 - 0x30);
            uVar8 = (uint)(byte)(bVar5 + bVar15);
            if (CARRY1(bVar5,bVar15)) goto LAB_1005f91e;
          }
LAB_1005f5b8:
          cVar14 = (char)uVar8;
        }
        DAT_0077b578 = cVar14 != '\0';
        iVar16 = _DAT_0077b580;
        iVar7 = _DAT_0077b584;
        iVar17 = _DAT_0077b588;
        iVar18 = _DAT_0077b58c;
        break;
      case 0x1005edea:
        if (*(int *)((int)_Buf1 + 3) == 0x6e6f6974 && *_Buf1 == (int ******)0x74706163) {
          iVar7 = FUN_10003510(pbVar25,(int)_Dst);
          local_5c = (char)iVar7;
          cStack_5b = (char)((uint)iVar7 >> 8);
          uStack_5a = (undefined2)((uint)iVar7 >> 0x10);
          (*(code *)0x407eb8)();
          (*(code *)0x407ea8)();
          iVar16 = _DAT_0077b580;
          iVar7 = _DAT_0077b584;
          iVar17 = _DAT_0077b588;
          iVar18 = _DAT_0077b58c;
          break;
        }
        SVar21 = 7;
      case 0x1005f92d:
switchD_1005ebf0_caseD_8:
        _Dst = (int *******)0x1;
        local_70 = (int *******)0x1;
        pppppppiVar24 = (int *******)local_68[2];
        if (pppppppiVar24 != (int *******)0x0) {
          pvVar2 = (void *)local_68[1];
          local_6c = SVar21;
          _Dst = FUN_10107380(0,(SIZE_T)pppppppiVar24);
          if (_Dst == (int *******)0x0) goto LAB_1005fade;
          memcpy(_Dst,pvVar2,(size_t)pppppppiVar24);
          SVar21 = local_6c;
        }
        if (SVar21 != 0) {
          pppppppiVar12 = FUN_10107380(0,SVar21);
          if (pppppppiVar12 == (int *******)0x0) {
LAB_1005fade:
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_70 = pppppppiVar12;
          memcpy(pppppppiVar12,_Buf1,SVar21);
        }
        local_8c = (int *******)0x7;
LAB_1005f9a2:
        local_84 = (char)local_8c;
        goto LAB_1005f9a6;
      case 0x1005ee34:
        iVar7 = memcmp(_Buf1,"freeze_game",0xb);
        SVar21 = 0xb;
        if (iVar7 != 0) goto switchD_1005ebf0_caseD_8;
        if (_Dst == (int *******)0x1) {
          bVar15 = *pbVar25;
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1005f76f;
        }
        else {
          if (_Dst == (int *******)0x0) goto LAB_1005f8ce;
          bVar15 = *pbVar25;
        }
        local_84 = '\t';
        _Dst = (int *******)((int)_Dst - (uint)(bVar15 == 0x2b));
        pbVar25 = pbVar25 + (bVar15 == 0x2b);
        if (_Dst < (int *******)0x3) {
          if (_Dst == (int *******)0x0) {
            uVar8 = 0;
            goto LAB_1005f5cf;
          }
          uVar8 = *pbVar25 - 0x30;
          if (9 < uVar8) goto LAB_1005f76f;
          if (_Dst == (int *******)0x1) goto LAB_1005f5cf;
          local_8c = (int *******)0x1;
          pppppppiVar24 = local_80;
          if (9 < pbVar25[1] - 0x30) goto LAB_1005f9a6;
          cVar14 = (char)(pbVar25[1] - 0x30) + (char)uVar8 * '\n';
        }
        else {
          uVar8 = 0;
          while (bVar26 = _Dst != (int *******)0x0, _Dst = (int *******)((int)_Dst + -1), bVar26) {
            sVar6 = (ushort)(byte)uVar8 * 10;
            bVar15 = *pbVar25;
            if ((char)((ushort)sVar6 >> 8) != '\0') goto LAB_1005fa67;
            if (9 < bVar15 - 0x30) goto LAB_1005f76f;
            pbVar25 = pbVar25 + 1;
            bVar5 = (byte)sVar6;
            bVar15 = (byte)(bVar15 - 0x30);
            uVar8 = (uint)(byte)(bVar5 + bVar15);
            if (CARRY1(bVar5,bVar15)) goto LAB_1005f91e;
          }
LAB_1005f5cf:
          cVar14 = (char)uVar8;
        }
        DAT_0077b59c = cVar14 != '\0';
        iVar16 = _DAT_0077b580;
        iVar7 = _DAT_0077b584;
        iVar17 = _DAT_0077b588;
        iVar18 = _DAT_0077b58c;
      }
LAB_1005f74f:
      _DAT_0077b58c = iVar18;
      _DAT_0077b588 = iVar17;
      _DAT_0077b584 = iVar7;
      _DAT_0077b580 = iVar16;
      if (iVar11 != 0) {
        pvVar13 = GetProcessHeap();
        HeapFree(pvVar13,0,_Buf1);
      }
    } while( true );
  }
  local_80._0_2_ = uStack_5a;
  local_68 = local_3c;
  local_88 = pppppppiStack_58;
  local_90 = local_4c;
  local_6c = SStack_48;
  pppppppiVar24 = pppppppiStack_50;
  _Dst = pppppppiStack_54;
  goto LAB_1005fa1f;
LAB_1005f8f6:
  local_8c = (int *******)0x1;
LAB_1005f8f8:
  SVar21 = 6;
  goto LAB_1005f9a6;
LAB_1005fa67:
  local_84 = '\t';
  local_8c = (int *******)(uint)(byte)(((byte)(bVar15 - 0x30) < 10) + 1);
  goto LAB_1005f9a6;
LAB_1005f855:
  local_8c = (int *******)0x1;
LAB_1005f857:
  local_84 = '\t';
  SVar21 = 5;
  goto LAB_1005f9a6;
LAB_1005f8a8:
  local_8c = (int *******)0x1;
LAB_1005f8aa:
  SVar21 = 4;
  goto LAB_1005f9a6;
LAB_1005fa81:
  pppppppiVar12 = (int *******)0x3;
  goto LAB_1005fa83;
LAB_1005f8bb:
  local_8c = (int *******)0x1;
LAB_1005f8bd:
  SVar21 = 3;
  goto LAB_1005f9a6;
LAB_1005fa7d:
  pppppppiVar12 = (int *******)0x2;
LAB_1005fa83:
  local_84 = '\t';
  pppppppiVar24 = (int *******)0x1;
  local_8c = (int *******)0x1;
  if ((byte)(*pbVar25 - 0x30) < 10) {
    pppppppiVar24 = pppppppiVar12;
    local_8c = pppppppiVar12;
  }
  goto LAB_1005f9a6;
LAB_1005f91e:
  local_8c = (int *******)0x2;
LAB_1005f774:
  local_84 = '\t';
LAB_1005f9a6:
  local_68 = (uint *)0x0;
  SVar23 = SVar21;
  local_88 = pppppppiVar24;
  if (iVar11 != 0) {
    pvVar13 = GetProcessHeap();
    HeapFree(pvVar13,0,_Buf1);
  }
LAB_1005f9d3:
  local_6c = SVar23;
  local_64 = SVar21;
  if (pppppppiStack_34 != (int *******)0x0) {
    pvVar13 = GetProcessHeap();
    HeapFree(pvVar13,0,local_38);
    local_80 = pppppppiVar24;
  }
  CloseHandle(local_24);
  local_90 = (int *******)0x0;
  local_44 = local_70;
  SStack_40 = local_64;
  cStack_5b = (char)local_8c;
LAB_1005fa1f:
  *local_60 = local_84;
  local_60[1] = cStack_5b;
  *(undefined2 *)(local_60 + 2) = local_80._0_2_;
  *(int ********)(local_60 + 4) = local_88;
  *(int ********)(local_60 + 8) = _Dst;
  *(int ********)(local_60 + 0xc) = pppppppiVar24;
  *(int ********)(local_60 + 0x10) = local_90;
  *(SIZE_T *)(local_60 + 0x14) = local_6c;
  *(int ********)(local_60 + 0x18) = local_44;
  *(SIZE_T *)(local_60 + 0x1c) = SStack_40;
  *(uint **)(local_60 + 0x20) = local_68;
  return;
}
