// rea decompile_all
// name: FUN_10009f50
// address: 0x10009f50
// body: available
// range: 0x10009f50-0x1000ab68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10009f50(char *param_1,void *param_2,SIZE_T param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int iVar8;
  void *_Buf1;
  byte bVar9;
  short sVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  HANDLE pvVar14;
  byte bVar15;
  char cVar16;
  undefined4 *puVar17;
  char extraout_DL;
  char extraout_DL_00;
  SIZE_T SVar18;
  byte *_Dst;
  bool bVar19;
  char local_a5;
  undefined4 local_7c;
  void *pvStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  HANDLE pvStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_58;
  int local_54;
  undefined4 local_50;
  int iStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined3 local_40;
  undefined8 local_34;
  HANDLE pvStack_20;
  int local_1c;
  void *local_18;
  int local_14;

  FUN_1006b940((undefined1 *)&local_7c,param_2,param_3);
  if ((char)local_7c != -1) {
    *(ulonglong *)(param_1 + 9) =
         CONCAT17((undefined1)iStack_6c,CONCAT43(uStack_70,iStack_74._1_3_));
    *(ulonglong *)(param_1 + 1) =
         CONCAT17((undefined1)iStack_74,CONCAT43(pvStack_78,local_7c._1_3_));
    *(HANDLE *)(param_1 + 0x18) = pvStack_64;
    *(ulonglong *)(param_1 + 0x11) = CONCAT17(pvStack_64._0_1_,CONCAT43(uStack_68,iStack_6c._1_3_));
    *param_1 = (char)local_7c;
    *(undefined4 *)(param_1 + 0x20) = local_5c;
    *(undefined4 *)(param_1 + 0x1c) = local_60;
    return;
  }
  pvStack_20 = pvStack_64;
  local_34 = CONCAT44(iStack_74,pvStack_78);
  local_54 = 0x10009f63;
  puVar1 = param_4 + 6;
  uStack_44 = (undefined4)(CONCAT44(iStack_6c,uStack_70) >> 8);
  local_50._3_1_ = SUB41(pvStack_78,0);
  iStack_4c = (int)((ulonglong)local_34 >> 8);
  local_48 = CONCAT13((char)uStack_70,iStack_74._1_3_);
  puVar2 = param_4 + 5;
  puVar3 = param_4 + 3;
  puVar4 = param_4 + 4;
  puVar5 = param_4 + 2;
  puVar6 = param_4 + 8;
  puVar11 = param_4 + 1;
  local_58 = param_2;
  local_40 = iStack_6c._1_3_;
  do {
    FUN_10090ef0((undefined8 *)&local_1c,(int *)&local_34);
    iVar12 = local_14;
    _Buf1 = local_18;
    iVar8 = local_1c;
    if (local_1c == -2) {
      if (local_34._4_4_ != 0) {
        pvVar14 = GetProcessHeap();
        HeapFree(pvVar14,0,(LPVOID)local_34);
      }
      CloseHandle(pvStack_20);
      *param_1 = -1;
      return;
    }
    if (local_1c == -1) {
      *param_1 = '\0';
      *(void **)(param_1 + 4) = local_18;
      *(int *)(param_1 + 8) = local_14;
      goto joined_r0x1000aade;
    }
    if (local_14 == 0) goto switchD_1000a113_caseD_e;
    pvStack_78 = local_18;
    iStack_74 = local_14;
    uStack_70 = 0;
    iStack_6c = local_14;
    local_7c = 0x3d;
    pvStack_64 = (HANDLE)CONCAT31(pvStack_64._1_3_,1);
    uStack_68 = 0x3d;
    FUN_10090ba0(&local_50,(int)&local_7c);
    if (local_50 != 1) {
      if (param_3 == 0) {
        _Dst = (byte *)0x1;
        cVar16 = extraout_DL;
      }
      else {
        _Dst = FUN_10107380(0,param_3);
        if (_Dst == (byte *)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        memcpy(_Dst,local_58,param_3);
        cVar16 = extraout_DL_00;
      }
      local_a5 = '\x06';
      SVar18 = param_3;
      goto LAB_1000aa36;
    }
    if (6 < iStack_4c - 9U) goto switchD_1000a113_caseD_e;
    SVar18 = iVar12 - local_48;
    _Dst = (byte *)(local_48 + (int)_Buf1);
    switch((&switchD_1000a113::switchdataD_1000ab6c)[iStack_4c - 9U] + local_54) {
    case 0x1000a115:
      iVar12 = memcmp(_Buf1,"has_fonts",9);
      if (iVar12 != 0) {
        iVar12 = memcmp(_Buf1,"has_paths",9);
        if (iVar12 == 0) {
          if (SVar18 == 1) {
            bVar15 = *_Dst;
            cVar16 = '\x01';
            if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1000ab41;
          }
          else {
            if (SVar18 == 0) goto LAB_1000ab22;
            bVar15 = *_Dst;
          }
          local_a5 = '\t';
          SVar18 = SVar18 - (bVar15 == 0x2b);
          _Dst = _Dst + (bVar15 == 0x2b);
          puVar17 = puVar4;
          if (SVar18 < 3) {
            if (SVar18 == 0) goto LAB_1000aa0e;
            cVar16 = '\x01';
            uVar13 = *_Dst - 0x30;
            if (uVar13 < 10) {
              if (SVar18 == 1) goto LAB_1000a70b;
              if (_Dst[1] - 0x30 < 10) {
                cVar16 = (char)(_Dst[1] - 0x30) + (char)uVar13 * '\n';
                goto LAB_1000aa10;
              }
            }
            goto LAB_1000aa36;
          }
          uVar13 = 0;
          while (bVar19 = SVar18 != 0, SVar18 = SVar18 - 1, bVar19) {
            bVar15 = *_Dst;
            sVar10 = (ushort)(byte)uVar13 * 10;
            if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_1000ab4b;
            if (9 < bVar15 - 0x30) goto LAB_1000aa34;
            _Dst = _Dst + 1;
            bVar9 = (byte)sVar10;
            bVar15 = (byte)(bVar15 - 0x30);
            uVar13 = (uint)(byte)(bVar9 + bVar15);
            if (CARRY1(bVar9,bVar15)) goto LAB_1000ab2e;
          }
LAB_1000a70b:
          cVar16 = (char)uVar13;
          goto LAB_1000aa10;
        }
        break;
      }
      if (SVar18 == 1) {
        bVar15 = *_Dst;
        cVar16 = '\x01';
        if ((bVar15 != 0x2b) && (bVar15 != 0x2d)) goto LAB_1000a3c8;
        goto LAB_1000ab41;
      }
      if (SVar18 == 0) {
LAB_1000ab22:
        local_a5 = '\t';
        cVar16 = '\0';
        goto LAB_1000aa36;
      }
      bVar15 = *_Dst;
LAB_1000a3c8:
      local_a5 = '\t';
      SVar18 = SVar18 - (bVar15 == 0x2b);
      _Dst = _Dst + (bVar15 == 0x2b);
      puVar17 = puVar5;
      if (2 < SVar18) {
        uVar13 = 0;
        while (bVar19 = SVar18 != 0, SVar18 = SVar18 - 1, bVar19) {
          sVar10 = (ushort)(byte)uVar13 * 10;
          if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_1000ab35;
          bVar15 = *_Dst;
          if (9 < bVar15 - 0x30) goto LAB_1000aa34;
          _Dst = _Dst + 1;
          bVar9 = (byte)sVar10;
          bVar15 = (byte)(bVar15 - 0x30);
          uVar13 = (uint)(byte)(bVar9 + bVar15);
          if (CARRY1(bVar9,bVar15)) goto LAB_1000ab2e;
        }
LAB_1000a405:
        cVar16 = (char)uVar13;
        goto LAB_1000aa10;
      }
      if (SVar18 == 0) goto LAB_1000aa0e;
      cVar16 = '\x01';
      uVar13 = *_Dst - 0x30;
      if (uVar13 < 10) {
        if (SVar18 == 1) goto LAB_1000a405;
        if (_Dst[1] - 0x30 < 10) {
          cVar16 = (char)(_Dst[1] - 0x30) + (char)uVar13 * '\n';
          goto LAB_1000aa10;
        }
      }
      goto LAB_1000aa36;
    case 0x1000a15e:
      iVar12 = memcmp(_Buf1,"has_objects",0xb);
      if (iVar12 == 0) {
        if (SVar18 == 1) {
          bVar15 = *_Dst;
          cVar16 = '\x01';
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1000ab41;
        }
        else {
          if (SVar18 == 0) goto LAB_1000ab22;
          bVar15 = *_Dst;
        }
        local_a5 = '\t';
        SVar18 = SVar18 - (bVar15 == 0x2b);
        _Dst = _Dst + (bVar15 == 0x2b);
        puVar17 = puVar3;
        if (SVar18 < 3) {
          if (SVar18 == 0) goto LAB_1000aa0e;
          cVar16 = '\x01';
          uVar13 = *_Dst - 0x30;
          if (uVar13 < 10) {
            if (SVar18 == 1) goto LAB_1000a348;
            if (_Dst[1] - 0x30 < 10) {
              cVar16 = (char)(_Dst[1] - 0x30) + (char)uVar13 * '\n';
              goto LAB_1000aa10;
            }
          }
          goto LAB_1000aa36;
        }
        uVar13 = 0;
        while (bVar19 = SVar18 != 0, SVar18 = SVar18 - 1, bVar19) {
          sVar10 = (ushort)(byte)uVar13 * 10;
          if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_1000ab35;
          bVar15 = *_Dst;
          if (9 < bVar15 - 0x30) goto LAB_1000aa34;
          _Dst = _Dst + 1;
          bVar9 = (byte)sVar10;
          bVar15 = (byte)(bVar15 - 0x30);
          uVar13 = (uint)(byte)(bVar9 + bVar15);
          if (CARRY1(bVar9,bVar15)) goto LAB_1000ab2e;
        }
LAB_1000a348:
        cVar16 = (char)uVar13;
      }
      else {
        iVar12 = memcmp(_Buf1,"has_scripts",0xb);
        if (iVar12 == 0) {
          if (SVar18 == 1) {
            bVar15 = *_Dst;
            cVar16 = '\x01';
            if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1000ab41;
          }
          else {
            if (SVar18 == 0) goto LAB_1000ab22;
            bVar15 = *_Dst;
          }
          local_a5 = '\t';
          SVar18 = SVar18 - (bVar15 == 0x2b);
          _Dst = _Dst + (bVar15 == 0x2b);
          puVar17 = puVar2;
          if (2 < SVar18) {
            uVar13 = 0;
            while (bVar19 = SVar18 != 0, SVar18 = SVar18 - 1, bVar19) {
              bVar15 = *_Dst;
              sVar10 = (ushort)(byte)uVar13 * 10;
              if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_1000ab4b;
              if (9 < bVar15 - 0x30) goto LAB_1000aa34;
              _Dst = _Dst + 1;
              bVar9 = (byte)sVar10;
              bVar15 = (byte)(bVar15 - 0x30);
              uVar13 = (uint)(byte)(bVar9 + bVar15);
              if (CARRY1(bVar9,bVar15)) goto LAB_1000ab2e;
            }
LAB_1000a6ae:
            cVar16 = (char)uVar13;
            goto LAB_1000aa10;
          }
          if (SVar18 == 0) goto LAB_1000aa0e;
          cVar16 = '\x01';
          uVar13 = *_Dst - 0x30;
          if (uVar13 < 10) {
            if (SVar18 == 1) goto LAB_1000a6ae;
            if (_Dst[1] - 0x30 < 10) {
              cVar16 = (char)(_Dst[1] - 0x30) + (char)uVar13 * '\n';
              goto LAB_1000aa10;
            }
          }
          goto LAB_1000aa36;
        }
        iVar12 = memcmp(_Buf1,"has_sprites",0xb);
        if (iVar12 != 0) break;
        if (SVar18 == 1) {
          bVar15 = *_Dst;
          cVar16 = '\x01';
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1000ab41;
        }
        else {
          if (SVar18 == 0) goto LAB_1000ab22;
          bVar15 = *_Dst;
        }
        local_a5 = '\t';
        SVar18 = SVar18 - (bVar15 == 0x2b);
        _Dst = _Dst + (bVar15 == 0x2b);
        puVar17 = param_4 + 7;
        if (2 < SVar18) {
          uVar13 = 0;
          while (bVar19 = SVar18 != 0, SVar18 = SVar18 - 1, bVar19) {
            sVar10 = (ushort)(byte)uVar13 * 10;
            bVar15 = *_Dst;
            if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_1000ab4b;
            if (9 < bVar15 - 0x30) goto LAB_1000aa34;
            _Dst = _Dst + 1;
            bVar9 = (byte)sVar10;
            bVar15 = (byte)(bVar15 - 0x30);
            uVar13 = (uint)(byte)(bVar9 + bVar15);
            cVar16 = '\x02';
            if (CARRY1(bVar9,bVar15)) goto LAB_1000aa36;
          }
          goto LAB_1000a86c;
        }
        if (SVar18 == 0) goto LAB_1000aa0e;
        cVar16 = '\x01';
        uVar13 = *_Dst - 0x30;
        if (9 < uVar13) goto LAB_1000aa36;
        if (SVar18 != 1) {
          if (9 < _Dst[1] - 0x30) goto LAB_1000aa36;
          uVar13 = (uint)(byte)((char)(_Dst[1] - 0x30) + (char)uVar13 * '\n');
        }
LAB_1000a86c:
        cVar16 = (char)uVar13;
      }
LAB_1000aa10:
      *(bool *)*puVar17 = cVar16 != '\0';
      break;
    case 0x1000a1bf:
      iVar12 = memcmp(_Buf1,"has_backgrounds",0xf);
      if (iVar12 == 0) {
        if (SVar18 == 1) {
          bVar15 = *_Dst;
          cVar16 = '\x01';
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1000ab41;
        }
        else {
          if (SVar18 == 0) goto LAB_1000ab22;
          bVar15 = *_Dst;
        }
        local_a5 = '\t';
        SVar18 = SVar18 - (bVar15 == 0x2b);
        _Dst = _Dst + (bVar15 == 0x2b);
        puVar17 = param_4;
        if (SVar18 < 3) {
          if (SVar18 == 0) goto LAB_1000aa0e;
          cVar16 = '\x01';
          uVar13 = *_Dst - 0x30;
          if (uVar13 < 10) {
            if (SVar18 == 1) goto LAB_1000a3a5;
            if (_Dst[1] - 0x30 < 10) {
              cVar16 = (char)(_Dst[1] - 0x30) + (char)uVar13 * '\n';
              goto LAB_1000aa10;
            }
          }
          goto LAB_1000aa36;
        }
        uVar13 = 0;
        while (bVar19 = SVar18 != 0, SVar18 = SVar18 - 1, bVar19) {
          sVar10 = (ushort)(byte)uVar13 * 10;
          if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_1000ab35;
          bVar15 = *_Dst;
          if (9 < bVar15 - 0x30) goto LAB_1000aa34;
          _Dst = _Dst + 1;
          bVar9 = (byte)sVar10;
          bVar15 = (byte)(bVar15 - 0x30);
          uVar13 = (uint)(byte)(bVar9 + bVar15);
          if (CARRY1(bVar9,bVar15)) goto LAB_1000ab2e;
        }
LAB_1000a3a5:
        cVar16 = (char)uVar13;
        goto LAB_1000aa10;
      }
      break;
    case 0x1000a1f0:
      iVar12 = memcmp(_Buf1,"has_sounds",10);
      if (iVar12 == 0) {
        if (SVar18 == 1) {
          bVar15 = *_Dst;
          cVar16 = '\x01';
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1000ab41;
        }
        else {
          if (SVar18 == 0) goto LAB_1000ab22;
          bVar15 = *_Dst;
        }
        local_a5 = '\t';
        SVar18 = SVar18 - (bVar15 == 0x2b);
        _Dst = _Dst + (bVar15 == 0x2b);
        puVar17 = puVar1;
        if (2 < SVar18) {
          uVar13 = 0;
          while (bVar19 = SVar18 != 0, SVar18 = SVar18 - 1, bVar19) {
            sVar10 = (ushort)(byte)uVar13 * 10;
            if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_1000ab35;
            bVar15 = *_Dst;
            if (9 < bVar15 - 0x30) goto LAB_1000aa34;
            _Dst = _Dst + 1;
            bVar9 = (byte)sVar10;
            bVar15 = (byte)(bVar15 - 0x30);
            uVar13 = (uint)(byte)(bVar9 + bVar15);
            if (CARRY1(bVar9,bVar15)) goto LAB_1000ab2e;
          }
LAB_1000a462:
          cVar16 = (char)uVar13;
          goto LAB_1000aa10;
        }
        if (SVar18 != 0) {
          cVar16 = '\x01';
          uVar13 = *_Dst - 0x30;
          if (uVar13 < 10) {
            if (SVar18 == 1) goto LAB_1000a462;
            if (_Dst[1] - 0x30 < 10) {
              cVar16 = (char)(_Dst[1] - 0x30) + (char)uVar13 * '\n';
              goto LAB_1000aa10;
            }
          }
          goto LAB_1000aa36;
        }
LAB_1000aa0e:
        cVar16 = '\0';
        goto LAB_1000aa10;
      }
      break;
    case 0x1000a221:
      iVar12 = memcmp(_Buf1,"has_triggerssrc\\font_render.rs",0xc);
      if (iVar12 == 0) {
        if (SVar18 == 1) {
          bVar15 = *_Dst;
          cVar16 = '\x01';
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1000ab41;
        }
        else {
          if (SVar18 == 0) goto LAB_1000ab22;
          bVar15 = *_Dst;
        }
        local_a5 = '\t';
        SVar18 = SVar18 - (bVar15 == 0x2b);
        _Dst = _Dst + (bVar15 == 0x2b);
        if (2 < SVar18) {
          uVar13 = 0;
          while (bVar19 = SVar18 != 0, SVar18 = SVar18 - 1, bVar19) {
            sVar10 = (ushort)(byte)uVar13 * 10;
            if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_1000ab35;
            bVar15 = *_Dst;
            if (9 < bVar15 - 0x30) goto LAB_1000aa34;
            _Dst = _Dst + 1;
            bVar9 = (byte)sVar10;
            bVar15 = (byte)(bVar15 - 0x30);
            uVar13 = (uint)(byte)(bVar9 + bVar15);
            if (CARRY1(bVar9,bVar15)) goto LAB_1000ab2e;
          }
LAB_1000a8d3:
          cVar16 = (char)uVar13;
          puVar17 = param_4 + 9;
          goto LAB_1000aa10;
        }
        if (SVar18 == 0) {
          uVar13 = 0;
          goto LAB_1000a8d3;
        }
        cVar16 = '\x01';
        uVar13 = *_Dst - 0x30;
        if (uVar13 < 10) {
          if (SVar18 != 1) {
            if (9 < _Dst[1] - 0x30) goto LAB_1000aa36;
            uVar13 = (uint)(byte)((char)(_Dst[1] - 0x30) + (char)uVar13 * '\n');
          }
          goto LAB_1000a8d3;
        }
        goto LAB_1000aa36;
      }
      break;
    case 0x1000a252:
      iVar12 = memcmp(_Buf1,"has_datafiles",0xd);
      if (iVar12 == 0) {
        if (SVar18 == 1) {
          bVar15 = *_Dst;
          cVar16 = '\x01';
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1000ab41;
        }
        else {
          if (SVar18 == 0) goto LAB_1000ab22;
          bVar15 = *_Dst;
        }
        local_a5 = '\t';
        SVar18 = SVar18 - (bVar15 == 0x2b);
        _Dst = _Dst + (bVar15 == 0x2b);
        puVar17 = puVar11;
        if (SVar18 < 3) {
          if (SVar18 == 0) goto LAB_1000aa0e;
          cVar16 = '\x01';
          uVar13 = *_Dst - 0x30;
          if (uVar13 < 10) {
            if (SVar18 == 1) goto LAB_1000a534;
            if (_Dst[1] - 0x30 < 10) {
              cVar16 = (char)(_Dst[1] - 0x30) + (char)uVar13 * '\n';
              goto LAB_1000aa10;
            }
          }
          goto LAB_1000aa36;
        }
        uVar13 = 0;
        while (bVar19 = SVar18 != 0, SVar18 = SVar18 - 1, bVar19) {
          sVar10 = (ushort)(byte)uVar13 * 10;
          if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_1000ab35;
          bVar15 = *_Dst;
          if (9 < bVar15 - 0x30) goto LAB_1000aa34;
          _Dst = _Dst + 1;
          bVar9 = (byte)sVar10;
          bVar15 = (byte)(bVar15 - 0x30);
          uVar13 = (uint)(byte)(bVar9 + bVar15);
          if (CARRY1(bVar9,bVar15)) goto LAB_1000ab2e;
        }
LAB_1000a534:
        cVar16 = (char)uVar13;
        goto LAB_1000aa10;
      }
      iVar12 = memcmp(_Buf1,"has_timelines",0xd);
      if (iVar12 == 0) {
        if (SVar18 == 1) {
          bVar15 = *_Dst;
          cVar16 = '\x01';
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_1000ab41;
        }
        else {
          if (SVar18 == 0) goto LAB_1000ab22;
          bVar15 = *_Dst;
        }
        local_a5 = '\t';
        SVar18 = SVar18 - (bVar15 == 0x2b);
        _Dst = _Dst + (bVar15 == 0x2b);
        puVar17 = puVar6;
        if (SVar18 < 3) {
          if (SVar18 == 0) goto LAB_1000aa0e;
          cVar16 = '\x01';
          uVar13 = *_Dst - 0x30;
          if (uVar13 < 10) {
            if (SVar18 == 1) goto LAB_1000a768;
            if (_Dst[1] - 0x30 < 10) {
              cVar16 = (char)(_Dst[1] - 0x30) + (char)uVar13 * '\n';
              goto LAB_1000aa10;
            }
          }
          goto LAB_1000aa36;
        }
        uVar13 = 0;
        while (bVar19 = SVar18 != 0, SVar18 = SVar18 - 1, bVar19) {
          sVar10 = (ushort)(byte)uVar13 * 10;
          if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_1000ab35;
          bVar15 = *_Dst;
          if (9 < bVar15 - 0x30) goto LAB_1000aa34;
          _Dst = _Dst + 1;
          bVar9 = (byte)sVar10;
          bVar15 = (byte)(bVar15 - 0x30);
          uVar13 = (uint)(byte)(bVar9 + bVar15);
          if (CARRY1(bVar9,bVar15)) goto LAB_1000ab2e;
        }
LAB_1000a768:
        cVar16 = (char)uVar13;
        goto LAB_1000aa10;
      }
    }
switchD_1000a113_caseD_e:
    if (iVar8 != 0) {
      pvVar14 = GetProcessHeap();
      HeapFree(pvVar14,0,_Buf1);
    }
  } while( true );
LAB_1000ab4b:
  local_a5 = '\t';
  cVar16 = ((byte)(bVar15 - 0x30) < 10) + '\x01';
  goto LAB_1000aa36;
LAB_1000aa34:
  local_a5 = '\t';
  cVar16 = '\x01';
  goto LAB_1000aa36;
LAB_1000ab2e:
  local_a5 = '\t';
  cVar16 = '\x02';
  goto LAB_1000aa36;
LAB_1000ab35:
  cVar16 = ((byte)(*_Dst - 0x30) < 10) + '\x01';
LAB_1000ab41:
  local_a5 = '\t';
LAB_1000aa36:
  *param_1 = local_a5;
  param_1[1] = cVar16;
  *(SIZE_T *)(param_1 + 4) = SVar18;
  *(byte **)(param_1 + 8) = _Dst;
  *(SIZE_T *)(param_1 + 0xc) = SVar18;
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  if (iVar8 != 0) {
    pvVar14 = GetProcessHeap();
    HeapFree(pvVar14,0,_Buf1);
  }
joined_r0x1000aade:
  if (local_34._4_4_ != 0) {
    pvVar14 = GetProcessHeap();
    HeapFree(pvVar14,0,(LPVOID)local_34);
  }
  CloseHandle(pvStack_20);
  return;
}
