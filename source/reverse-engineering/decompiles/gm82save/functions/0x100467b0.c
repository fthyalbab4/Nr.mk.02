// rea decompile_all
// name: FUN_100467b0
// address: 0x100467b0
// body: available
// range: 0x100467b0-0x10047e55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100467b0(uint *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  code *pcVar4;
  ushort uVar5;
  short sVar6;
  void *_Src;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  short *psVar10;
  HANDLE pvVar11;
  SIZE_T SVar12;
  HWND hWnd;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined *puVar17;
  undefined1 uVar18;
  uint *extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  ushort *puVar19;
  int *extraout_EDX_02;
  int *piVar20;
  uint uVar21;
  uint *puVar22;
  LPVOID pvVar23;
  uint *puVar24;
  uint *puVar25;
  uint uVar26;
  float10 fVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint *puVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar38;
  int iVar39;
  byte bStack_4ab;
  char cStack_4aa;
  char cStack_4a9;
  byte bStack_4a8;
  char cStack_4a7;
  byte bStack_4a6;
  char cStack_4a5;
  uint *local_4a4;
  uint *local_4a0;
  undefined4 uStack_49c;
  undefined8 local_498;
  uint *local_490;
  int *apiStack_48c [2];
  uint *puStack_484;
  uint *local_480;
  uint *puStack_47c;
  uint *puStack_478;
  int *piStack_474;
  uint uStack_470;
  int *piStack_46c;
  undefined8 local_468;
  char cStack_45c;
  uint uStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  uint *local_440;
  uint *puStack_43c;
  uint *puStack_438;
  int *piStack_434;
  uint *puStack_430;
  LPVOID pvStack_42c;
  uint *puStack_428;
  LPVOID pvStack_424;
  uint *local_420;
  uint *puStack_41c;
  uint *puStack_418;
  int *piStack_414;
  uint *local_404;
  undefined4 uStack_400;
  int *piStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined8 uStack_3ec;
  undefined4 uStack_3e4;
  uint *local_3e0;
  uint *puStack_3dc;
  uint *puStack_3d8;
  int *piStack_3d4;
  uint *local_3d0;
  uint *puStack_3cc;
  uint *puStack_3c8;
  uint *puStack_3c4;
  uint **ppuStack_3c0;
  undefined8 uStack_3bc;
  uint *puStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined2 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_390;
  undefined2 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined1 uStack_380;
  undefined1 uStack_37f;
  int iStack_210;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  uint **ppuStack_1e0;
  int aiStack_140 [9];
  uint *puStack_11c;
  uint *puStack_118;
  uint auStack_20 [4];

  if (DAT_0079a982 != '\0') {
    uVar8 = (*(code *)0x6884c8)();
    return uVar8;
  }
  FUN_10119e60(&local_200);
  if ((uint *)local_200 == (uint *)0xffffffff) {
    uVar8 = (*(code *)0x6884c8)();
    if (local_200._4_1_ != '\x03') {
      return uVar8;
    }
    puVar3 = (undefined4 *)((int *)local_1f8)[1];
    pvVar23 = (LPVOID)*(int *)local_1f8;
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(pvVar23);
    }
    if (puVar3[1] != 0) {
      if (8 < (uint)puVar3[2]) {
        pvVar23 = *(LPVOID *)((int)pvVar23 + -4);
      }
      pvVar11 = GetProcessHeap();
      HeapFree(pvVar11,0,pvVar23);
    }
    pvVar11 = GetProcessHeap();
    HeapFree(pvVar11,0,(int *)local_1f8);
    return uVar8;
  }
  puStack_3dc = (uint *)((ulonglong)local_200 >> 0x20);
  puVar25 = puStack_3dc;
  puStack_3d8 = (uint *)local_1f8;
  puVar16 = puStack_3d8;
  piStack_3d4 = (int *)((ulonglong)local_1f8 >> 0x20);
  local_3e0 = (uint *)local_200;
  iVar9 = FUN_10110b00((byte *)puStack_3dc,(uint)puStack_3d8);
  puVar22 = puStack_3d8;
  if ((((iVar9 != 0) &&
       (iVar9 = FUN_10110f10((byte *)puVar25,(uint)puVar16), puVar22 = puStack_3d8, iVar9 != 0)) &&
      (extraout_EDX <= puVar16)) &&
     ((local_404 = extraout_EDX, puVar22 = extraout_EDX, extraout_EDX != (uint *)0x0 &&
      (puVar22 = extraout_EDX, extraout_EDX < puVar16)))) {
    if (*(char *)((int)puVar25 + (int)extraout_EDX) == -0x13) {
      if (puVar16 <= (uint *)((int)extraout_EDX + 1)) {
        FUN_10136b52((uint *)((int)extraout_EDX + 1),puVar16,
                     &PTR_s_C__Users_runneradmin__rustup_too_10157148);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if ((((uint *)0x2 < extraout_EDX) && (0x9f < *(byte *)((int)puVar25 + 1 + (int)extraout_EDX)))
         && ((*(char *)((int)puVar25 + -3 + (int)extraout_EDX) == -0x13 &&
             (0x9f < *(byte *)((int)puVar25 + -2 + (int)extraout_EDX))))) {
        puVar17 = &DAT_10157c6a;
LAB_10047b54:
        local_468 = CONCAT44(&LAB_10096fc0,&local_404);
        FUN_101369c0(puVar17,&local_468,&PTR_s_C__Users_runneradmin__rustup_too_10157148);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    else if (*(char *)((int)puVar25 + (int)extraout_EDX) < -0x40) {
      puVar17 = &DAT_10157c3f;
      goto LAB_10047b54;
    }
    puVar22 = extraout_EDX;
    if (*(char *)((int)puVar25 + (int)extraout_EDX) < -0x40) {
      FUN_10136b40(&DAT_101579d0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  puStack_3d8 = puVar22;
  FUN_10111020((uint *)&local_3e0,(byte *)"gm82room.exe",0xc);
  puVar16 = puStack_3d8;
  puVar25 = local_3e0;
  puVar22 = puStack_3dc;
  FUN_1011c320((uint *)&local_3e0,(int)puStack_3dc,(int)puStack_3d8);
  piVar20 = piStack_3d4;
  if (((uint)local_3e0 & (uint)puStack_3dc) == 0xffffffff) {
    if ((char)puStack_3d8 == '\x03') {
      puVar3 = (undefined4 *)piStack_3d4[1];
      pvVar23 = (LPVOID)*piStack_3d4;
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(pvVar23);
      }
      if (puVar3[1] != 0) {
        if (8 < (uint)puVar3[2]) {
          pvVar23 = *(LPVOID *)((int)pvVar23 + -4);
        }
        pvVar11 = GetProcessHeap();
        HeapFree(pvVar11,0,pvVar23);
      }
      pvVar11 = GetProcessHeap();
      HeapFree(pvVar11,0,piVar20);
    }
    goto LAB_10046abe;
  }
  local_420 = puVar16;
  if (_DAT_0077f44c == (ushort *)0x0) {
    puVar19 = (ushort *)0x2;
    SVar12 = 0;
  }
  else {
    SVar12 = *(SIZE_T *)(_DAT_0077f44c + -2);
    puVar19 = _DAT_0077f44c;
  }
  FUN_10093310((undefined8 *)&local_3e0,puVar19,SVar12);
  puVar16 = puStack_3d8;
  local_498 = CONCAT44(puStack_3dc,local_3e0);
  local_490 = puStack_3d8;
  apiStack_48c[0] = piStack_3d4;
  puVar33 = puStack_3dc;
  psVar10 = (short *)FUN_10110b00((byte *)puStack_3dc,(uint)puStack_3d8);
  if ((psVar10 != (short *)0x0) &&
     ((iVar9 = extraout_EDX_00, extraout_EDX_00 != 2 ||
      (iVar9 = extraout_EDX_00, *psVar10 != 0x2e2e)))) {
    do {
      iVar39 = iVar9;
      if (iVar39 == 0) goto LAB_10046aa0;
      iVar9 = iVar39 + -1;
    } while (*(char *)((int)psVar10 + iVar39 + -1) != '.');
    if ((iVar39 + -1 != 0 && extraout_EDX_00 - iVar39 == 4) &&
       (*(int *)((int)psVar10 + iVar39) == 0x32386d67)) {
      if (DAT_10163248 == 0) {
        local_4a4 = puVar16;
        FUN_10002aa0((uint *)&local_3e0);
        local_480 = local_3e0;
        puStack_47c = puStack_3dc;
        puStack_478 = puStack_3d8;
        piStack_474 = piStack_3d4;
        FUN_10002aa0((uint *)&local_3e0);
        local_440 = local_3e0;
        puStack_43c = puStack_3dc;
        puStack_438 = puStack_3d8;
        piStack_434 = piStack_3d4;
        FUN_10003900();
        _DAT_10163250 = 0;
        _DAT_10163248 = 0x10159670;
        DAT_10163258 = local_480;
        DAT_1016325c = puStack_47c;
        DAT_10163260 = puStack_478;
        DAT_10163264 = piStack_474;
        _DAT_10163268 = 0x10159670;
        _DAT_10163270 = 0;
        DAT_10163278 = local_440;
        DAT_1016327c = puStack_43c;
        DAT_10163280 = puStack_438;
        DAT_10163284 = piStack_434;
        FUN_10002aa0((uint *)&local_3e0);
        local_200 = 0x10159670;
        local_1f8 = 0;
        local_1f0 = CONCAT44(puStack_3dc,local_3e0);
        uStack_1e8 = CONCAT44(piStack_3d4,puStack_3d8);
        FUN_10002aa0((uint *)&local_3e0);
        puStack_3c4 = (uint *)piStack_3d4;
        puStack_3c8 = puStack_3d8;
        puStack_3cc = puStack_3dc;
        local_3d0 = local_3e0;
        puStack_3d8 = (uint *)0x0;
        piStack_3d4 = (int *)0x0;
        local_3e0 = (uint *)&DAT_10159670;
        puStack_3dc = (uint *)0x0;
        local_440 = _DAT_0077f3a8;
        if (_DAT_0077f3a8 == (uint *)0x0) {
          local_440 = (uint *)&DAT_00000004;
        }
        local_4a0 = local_440 + (int)_DAT_0077f3b8;
LAB_10046c2e:
        if (local_440 != local_4a0) {
          local_480 = (uint *)*local_440;
          local_440 = local_440 + 1;
          if (local_480 != (uint *)0x0) {
            uVar26 = local_480[0xbd];
            if (uVar26 == 0) {
              uVar26 = 4;
            }
            iVar9 = local_480[0xbc] * 0x18;
            do {
              iVar39 = iVar9;
              if (iVar39 == 0) break;
              puVar16 = (uint *)(uVar26 + 0xc);
              uVar26 = uVar26 + 0x18;
              uVar8 = FUN_1004cfe0((undefined4 *)&local_200,*puVar16);
              iVar9 = iVar39 + -0x18;
            } while ((char)uVar8 == '\0');
            uVar26 = local_480[0xbf];
            if (uVar26 == 0) {
              uVar26 = 4;
            }
            iVar9 = local_480[0xbe] * 0x28;
            do {
              if (iVar9 == 0) {
                if (iVar39 == 0) goto LAB_10046c2e;
                break;
              }
              puVar16 = (uint *)(uVar26 + 0x20);
              uVar26 = uVar26 + 0x28;
              uVar8 = FUN_1004cfe0(&local_3e0,*puVar16);
              iVar9 = iVar9 + -0x28;
            } while ((char)uVar8 == '\0');
            FUN_1003bc50((int)local_480);
          }
          goto LAB_10046c2e;
        }
        piVar20 = (int *)&DAT_00000004;
        if (_DAT_0077f3ac != (int *)0x0) {
          piVar20 = _DAT_0077f3ac;
        }
        if (_DAT_0077f3b8 != (uint *)0x0) {
          iVar9 = (int)_DAT_0077f3b8 << 2;
          do {
            iVar39 = *piVar20;
            if (iVar39 != 0) {
              (*(code *)0x657994)();
              if (*(int *)(iVar39 + 0x62c) != 0) {
                (*(code *)0x405a7c)();
                *(undefined4 *)(iVar39 + 0x62c) = 0;
              }
              *(undefined1 *)(iVar39 + 0x628) = 0;
            }
            piVar20 = piVar20 + 1;
            iVar9 = iVar9 + -4;
          } while (iVar9 != 0);
        }
        FUN_100059c0((int)local_3e0,(int)puStack_3dc);
        FUN_100059c0((int)(uint *)local_200,(int)local_200._4_4_);
        puVar16 = local_4a4;
      }
      if ((DAT_1016328b == '\0') && (iVar9 = (*(code *)0x7060e8)(), iVar9 == 0)) {
        FUN_1007a660();
      }
      else {
        DAT_1016328c = 1;
        (*(code *)0x51cc64)();
        iVar9 = (*(code *)0x705c84)();
        (*(code *)0x51cc64)();
        DAT_1016328c = 0;
        if (iVar9 == 0) {
          if ((ulonglong *****)local_498 != (ulonglong *****)0x0) {
            pvVar11 = GetProcessHeap();
            HeapFree(pvVar11,0,puVar33);
          }
          if (puVar25 == (uint *)0x0) {
            return 0;
          }
          pvVar11 = GetProcessHeap();
          HeapFree(pvVar11,0,puVar22);
          return 0;
        }
      }
      iVar9 = FUN_10110f10((byte *)puVar33,(uint)puVar16);
      if (iVar9 != 0) {
        FUN_10110e70((int)&local_498,extraout_EDX_01);
        puVar16 = local_490;
        puVar33 = local_498._4_4_;
      }
      pvVar23 = (LPVOID)0x1;
      if (puVar16 != (uint *)0x0) {
        pvVar23 = FUN_10107380(0,(SIZE_T)puVar16);
        if (pvVar23 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        memcpy(pvVar23,puVar33,(size_t)puVar16);
      }
      pvStack_424 = (LPVOID)CONCAT31(pvStack_424._1_3_,apiStack_48c[0]._0_1_);
      puStack_430 = puVar16;
      pvStack_42c = pvVar23;
      puStack_428 = puVar16;
      FUN_10111020((uint *)&local_498,&DAT_1013f3df,5);
      if (_DAT_0077f3b8 <= param_1) {
        FUN_10136b52(param_1,_DAT_0077f3b8,&PTR_s_src_lib_rs_101406ec);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      iVar9 = 4;
      if (_DAT_0077f3b0 != 0) {
        iVar9 = _DAT_0077f3b0;
      }
      puVar19 = *(ushort **)(iVar9 + (int)param_1 * 4);
      if (puVar19 == (ushort *)0x0) {
        puVar19 = (ushort *)0x2;
        SVar12 = 0;
      }
      else {
        SVar12 = *(SIZE_T *)(puVar19 + -2);
      }
      FUN_10093310((undefined8 *)&local_3e0,puVar19,SVar12);
      puVar33 = puStack_3dc;
      FUN_10111020((uint *)&local_498,(byte *)puStack_3dc,(uint)puStack_3d8);
      if (local_3e0 != (uint *)0x0) {
        pvVar11 = GetProcessHeap();
        HeapFree(pvVar11,0,puVar33);
      }
      (*(code *)0x51acd0)();
      puVar33 = local_420;
      puVar24 = (uint *)0x1;
      if (local_420 != (uint *)0x0) {
        puVar24 = FUN_10107380(0,(SIZE_T)local_420);
        if (puVar24 == (uint *)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        memcpy(puVar24,puVar22,(size_t)puVar33);
      }
      puStack_3c8 = puVar33;
      ppuStack_3c0 = (uint **)puVar33;
      uStack_3bc = (uStack_3bc >> 8 & 0xffffff) << 8;
      puStack_3b4 = (uint *)&DAT_00000004;
      uStack_3b0 = 0;
      uStack_398 = 0;
      uStack_390 = 0;
      uStack_38c = 0;
      uStack_3ac = 0xffffffff;
      uStack_388 = 0;
      uStack_39c = 0;
      local_3e0 = (uint *)0xffffffff;
      puStack_3d8 = (uint *)0xffffffff;
      local_3d0 = (uint *)0xffffffff;
      uStack_384 = 0;
      uStack_37f = 2;
      uStack_380 = 1;
      local_4a4 = puVar16;
      puStack_3c4 = puVar24;
      if (puVar25 != (uint *)0x0) {
        pvVar11 = GetProcessHeap();
        HeapFree(pvVar11,0,puVar22);
      }
      puVar25 = local_490;
      pvVar23 = (LPVOID)0x1;
      if (local_490 != (uint *)0x0) {
        _Src = local_498._4_4_;
        pvVar23 = FUN_10107380(0,(SIZE_T)local_490);
        if (pvVar23 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        memcpy(pvVar23,_Src,(size_t)puVar25);
      }
      FUN_1013bb10((uint *)((int)&uStack_3bc + 4));
      *puStack_3b4 = 0;
      puStack_3b4[1] = (uint)puVar25;
      puStack_3b4[2] = (uint)pvVar23;
      puStack_3b4[3] = (uint)puVar25;
      *(undefined1 *)(puStack_3b4 + 4) = 0;
      uStack_3b0 = 1;
      FUN_10115a40((uint *)&local_200,(uint *)&local_3e0);
      if ((int *)local_1f8 == (int *)0xffffffff) {
        piStack_46c = local_200._4_4_;
        uStack_470 = (uint)(uint *)local_200;
        uVar26 = (uint)(uint *)local_200;
      }
      else {
        uVar38 = local_1f8;
        local_1f8 = local_1f0;
        local_1f0 = uStack_1e8;
        uStack_1e8 = local_200;
        local_200 = uVar38;
        FUN_100379f0(&uStack_470,(int *)&local_200);
        uVar26 = uStack_470 & 0xff;
      }
      FUN_100072c0((int *)&local_3e0);
      (*(code *)0x51acd8)();
      keybd_event('\x12','8',0,0);
      hWnd = GetActiveWindow();
      SetForegroundWindow(hWnd);
      keybd_event('\x12','8',2,0);
      if ((char)uVar26 == -1) {
        uVar7 = (ushort)(piStack_46c == (int *)0x0) << 8 | 0xff;
        piVar20 = extraout_EDX_02;
      }
      else {
        uVar7 = (ushort)uStack_470;
        piVar20 = piStack_46c;
      }
      if (((char)uVar7 == -1 & (byte)(uVar7 >> 8) & 1) == 0) {
        FUN_10003b60((char)uVar7,piVar20);
        FUN_100797f0(auStack_20,
                     (ushort *)
                     "It looks like gm82room crashed. Would you like to load its changes? If it crashed during saving, it is recommended to click \"No\" and save."
                     ,0x115);
        local_3e0 = (uint *)FUN_100033c0((int *)auStack_20);
        iVar9 = (*(code *)0x4d437c)(0,0xffffffff,0xffffffff,0);
        if (iVar9 != 6) {
          (*(code *)0x6930cc)();
          (*(code *)0x407ea8)();
          puVar25 = uStack_49c;
          goto LAB_10047aee;
        }
        (*(code *)0x407ea8)();
      }
      if (_DAT_0077f3b8 <= param_1) {
        FUN_10136b52(param_1,_DAT_0077f3b8,&PTR_s_src_lib_rs_10140788);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      puStack_484 = (uint *)&DAT_00000004;
      if (_DAT_0077f3a8 != (uint *)0x0) {
        puStack_484 = _DAT_0077f3a8;
      }
      uVar26 = puStack_484[(int)param_1];
      if (uVar26 == 0) {
        FUN_10136b20(&PTR_s_src_lib_rs_10140798);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (DAT_10163248 == 0) {
LAB_10047613:
        (*(code *)0x405a7c)();
      }
      else {
        puVar25 = *(uint **)(uVar26 + 0x2f4);
        if (puVar25 == (uint *)0x0) {
          puVar25 = (uint *)&DAT_00000004;
        }
        if (*(int *)(uVar26 + 0x2f0) != 0) {
          local_440 = puVar25 + *(int *)(uVar26 + 0x2f0) * 6;
          local_4a4 = DAT_10163250;
          puVar16 = DAT_10163258;
          puVar22 = DAT_1016325c;
          puVar33 = DAT_10163260;
          piVar20 = DAT_10163264;
          iVar9 = DAT_10163254;
          do {
            uVar26 = puVar25[3];
            puVar25 = puVar25 + 6;
            local_420 = puVar16;
            puStack_41c = puVar22;
            puStack_418 = puVar33;
            piStack_414 = piVar20;
            uVar38 = FUN_1002e000((uint)puVar16,(uint)puVar22,(uint)puVar33,(uint)piVar20,uVar26);
            puVar13 = (undefined1 *)uVar38;
            iVar39 = DAT_10163248;
            local_4a0 = (uint *)0x0;
            bVar28 = (byte)((ulonglong)uVar38 >> 0x18) >> 1;
            auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
            auVar29 = pshuflw(auVar29,auVar29,0);
            while( true ) {
              puVar24 = (uint *)(DAT_1016324c & (uint)puVar13);
              pcVar1 = (char *)(DAT_10163248 + (int)puVar24);
              auVar34[0] = -(*pcVar1 == auVar29[0]);
              auVar34[1] = -(pcVar1[1] == auVar29[1]);
              auVar34[2] = -(pcVar1[2] == auVar29[2]);
              auVar34[3] = -(pcVar1[3] == auVar29[3]);
              auVar34[4] = -(pcVar1[4] == auVar29[4]);
              auVar34[5] = -(pcVar1[5] == auVar29[5]);
              auVar34[6] = -(pcVar1[6] == auVar29[6]);
              auVar34[7] = -(pcVar1[7] == auVar29[7]);
              auVar34[8] = -(pcVar1[8] == auVar29[0]);
              auVar34[9] = -(pcVar1[9] == auVar29[1]);
              auVar34[10] = -(pcVar1[10] == auVar29[2]);
              auVar34[0xb] = -(pcVar1[0xb] == auVar29[3]);
              auVar34[0xc] = -(pcVar1[0xc] == auVar29[4]);
              auVar34[0xd] = -(pcVar1[0xd] == auVar29[5]);
              auVar34[0xe] = -(pcVar1[0xe] == auVar29[6]);
              auVar34[0xf] = -(pcVar1[0xf] == auVar29[7]);
              uVar21 = (uint)(ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
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
                                     (ushort)(auVar34[0xf] >> 7) << 0xf);
              while ((short)uVar21 != 0) {
                iVar15 = 0;
                for (uVar14 = uVar21; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                  iVar15 = iVar15 + 1;
                }
                uVar21 = uVar21 - 1 & uVar21;
                uVar14 = (uint)(iVar15 + (int)puVar24) & DAT_1016324c;
                local_480 = puVar24;
                if (uVar26 == *(uint *)(DAT_10163248 + -0x28 + uVar14 * -0x28)) {
                  iVar15 = ((int)(uVar14 * 0x28) >> 3) * -0x33333333;
                  pcVar1 = (char *)(DAT_10163248 + iVar15);
                  uVar26 = iVar15 - 0x10U & DAT_1016324c;
                  pcVar2 = (char *)(DAT_10163248 + uVar26);
                  auVar35[0] = -(*pcVar1 == -1);
                  auVar35[1] = -(pcVar1[1] == -1);
                  auVar35[2] = -(pcVar1[2] == -1);
                  auVar35[3] = -(pcVar1[3] == -1);
                  auVar35[4] = -(pcVar1[4] == -1);
                  auVar35[5] = -(pcVar1[5] == -1);
                  auVar35[6] = -(pcVar1[6] == -1);
                  auVar35[7] = -(pcVar1[7] == -1);
                  auVar35[8] = -(pcVar1[8] == -1);
                  auVar35[9] = -(pcVar1[9] == -1);
                  auVar35[10] = -(pcVar1[10] == -1);
                  auVar35[0xb] = -(pcVar1[0xb] == -1);
                  auVar35[0xc] = -(pcVar1[0xc] == -1);
                  auVar35[0xd] = -(pcVar1[0xd] == -1);
                  auVar35[0xe] = -(pcVar1[0xe] == -1);
                  auVar35[0xf] = -(pcVar1[0xf] == -1);
                  auVar29[0] = -(*pcVar2 == -1);
                  auVar29[1] = -(pcVar2[1] == -1);
                  auVar29[2] = -(pcVar2[2] == -1);
                  auVar29[3] = -(pcVar2[3] == -1);
                  auVar29[4] = -(pcVar2[4] == -1);
                  auVar29[5] = -(pcVar2[5] == -1);
                  auVar29[6] = -(pcVar2[6] == -1);
                  auVar29[7] = -(pcVar2[7] == -1);
                  auVar29[8] = -(pcVar2[8] == -1);
                  auVar29[9] = -(pcVar2[9] == -1);
                  auVar29[10] = -(pcVar2[10] == -1);
                  auVar29[0xb] = -(pcVar2[0xb] == -1);
                  auVar29[0xc] = -(pcVar2[0xc] == -1);
                  auVar29[0xd] = -(pcVar2[0xd] == -1);
                  auVar29[0xe] = -(pcVar2[0xe] == -1);
                  auVar29[0xf] = -(pcVar2[0xf] == -1);
                  uVar5 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                          (ushort)(auVar29[0xf] >> 7) << 0xf;
                  uVar7 = 0xf;
                  if (uVar5 != 0) {
                    for (; uVar5 >> uVar7 == 0; uVar7 = uVar7 - 1) {
                    }
                  }
                  if (uVar5 == 0) {
                    uVar7 = 0x1f;
                  }
                  uVar18 = 0x80;
                  sVar6 = 0;
                  for (uVar21 = (ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
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
                                        (ushort)(auVar35[0xf] >> 7) << 0xf) | 0x10000;
                      (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
                    sVar6 = sVar6 + 1;
                  }
                  if ((ushort)(sVar6 + (uVar7 ^ 0xf)) < 0x10) {
                    uVar18 = 0xff;
                    local_4a4 = (uint *)((int)local_4a4 + 1);
                    _DAT_10163250 = ZEXT48(local_4a4);
                  }
                  *(undefined1 *)(DAT_10163248 + iVar15) = uVar18;
                  *(undefined1 *)(iVar39 + 0x10 + uVar26) = uVar18;
                  iVar9 = iVar9 + -1;
                  _DAT_10163250 = CONCAT44(iVar9,DAT_10163250);
                  puVar16 = DAT_10163258;
                  puVar22 = DAT_1016325c;
                  puVar33 = DAT_10163260;
                  piVar20 = DAT_10163264;
                  goto joined_r0x10047420;
                }
              }
              auVar31[0] = -(*pcVar1 == -1);
              auVar31[1] = -(pcVar1[1] == -1);
              auVar31[2] = -(pcVar1[2] == -1);
              auVar31[3] = -(pcVar1[3] == -1);
              auVar31[4] = -(pcVar1[4] == -1);
              auVar31[5] = -(pcVar1[5] == -1);
              auVar31[6] = -(pcVar1[6] == -1);
              auVar31[7] = -(pcVar1[7] == -1);
              auVar31[8] = -(pcVar1[8] == -1);
              auVar31[9] = -(pcVar1[9] == -1);
              auVar31[10] = -(pcVar1[10] == -1);
              auVar31[0xb] = -(pcVar1[0xb] == -1);
              auVar31[0xc] = -(pcVar1[0xc] == -1);
              auVar31[0xd] = -(pcVar1[0xd] == -1);
              auVar31[0xe] = -(pcVar1[0xe] == -1);
              auVar31[0xf] = -(pcVar1[0xf] == -1);
              puVar16 = local_420;
              puVar22 = puStack_41c;
              puVar33 = puStack_418;
              piVar20 = piStack_414;
              if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar31 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar31 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') break;
              puVar13 = (undefined1 *)((int)(puVar24 + 4) + (int)local_4a0);
              local_4a0 = local_4a0 + 4;
            }
joined_r0x10047420:
          } while (puVar25 != local_440);
          uVar26 = puStack_484[(int)param_1];
        }
        puVar25 = (uint *)&DAT_00000004;
        if (*(uint **)(uVar26 + 0x2fc) != (uint *)0x0) {
          puVar25 = *(uint **)(uVar26 + 0x2fc);
        }
        if (*(int *)(uVar26 + 0x2f8) == 0) goto LAB_10047613;
        local_440 = puVar25 + *(int *)(uVar26 + 0x2f8) * 10;
        local_4a4 = DAT_10163270;
        puVar16 = DAT_10163278;
        puVar22 = DAT_1016327c;
        puVar33 = DAT_10163280;
        piVar20 = DAT_10163284;
        iVar9 = DAT_10163274;
        do {
          uVar26 = puVar25[8];
          puVar25 = puVar25 + 10;
          local_420 = puVar16;
          puStack_41c = puVar22;
          puStack_418 = puVar33;
          piStack_414 = piVar20;
          uVar38 = FUN_1002e000((uint)puVar16,(uint)puVar22,(uint)puVar33,(uint)piVar20,uVar26);
          puVar13 = (undefined1 *)uVar38;
          iVar39 = DAT_10163268;
          local_4a0 = (uint *)0x0;
          bVar28 = (byte)((ulonglong)uVar38 >> 0x18) >> 1;
          auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
          auVar29 = pshuflw(auVar29,auVar29,0);
          while( true ) {
            puVar24 = (uint *)(DAT_1016326c & (uint)puVar13);
            pcVar1 = (char *)(DAT_10163268 + (int)puVar24);
            auVar36[0] = -(*pcVar1 == auVar29[0]);
            auVar36[1] = -(pcVar1[1] == auVar29[1]);
            auVar36[2] = -(pcVar1[2] == auVar29[2]);
            auVar36[3] = -(pcVar1[3] == auVar29[3]);
            auVar36[4] = -(pcVar1[4] == auVar29[4]);
            auVar36[5] = -(pcVar1[5] == auVar29[5]);
            auVar36[6] = -(pcVar1[6] == auVar29[6]);
            auVar36[7] = -(pcVar1[7] == auVar29[7]);
            auVar36[8] = -(pcVar1[8] == auVar29[0]);
            auVar36[9] = -(pcVar1[9] == auVar29[1]);
            auVar36[10] = -(pcVar1[10] == auVar29[2]);
            auVar36[0xb] = -(pcVar1[0xb] == auVar29[3]);
            auVar36[0xc] = -(pcVar1[0xc] == auVar29[4]);
            auVar36[0xd] = -(pcVar1[0xd] == auVar29[5]);
            auVar36[0xe] = -(pcVar1[0xe] == auVar29[6]);
            auVar36[0xf] = -(pcVar1[0xf] == auVar29[7]);
            uVar21 = (uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
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
            while ((short)uVar21 != 0) {
              iVar15 = 0;
              for (uVar14 = uVar21; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                iVar15 = iVar15 + 1;
              }
              uVar21 = uVar21 - 1 & uVar21;
              uVar14 = (uint)(iVar15 + (int)puVar24) & DAT_1016326c;
              local_480 = puVar24;
              if (uVar26 == *(uint *)(DAT_10163268 + uVar14 * -0x20 + -0x20)) {
                pcVar1 = (char *)(DAT_10163268 + uVar14);
                uVar26 = uVar14 - 0x10 & DAT_1016326c;
                pcVar2 = (char *)(DAT_10163268 + uVar26);
                auVar37[0] = -(*pcVar1 == -1);
                auVar37[1] = -(pcVar1[1] == -1);
                auVar37[2] = -(pcVar1[2] == -1);
                auVar37[3] = -(pcVar1[3] == -1);
                auVar37[4] = -(pcVar1[4] == -1);
                auVar37[5] = -(pcVar1[5] == -1);
                auVar37[6] = -(pcVar1[6] == -1);
                auVar37[7] = -(pcVar1[7] == -1);
                auVar37[8] = -(pcVar1[8] == -1);
                auVar37[9] = -(pcVar1[9] == -1);
                auVar37[10] = -(pcVar1[10] == -1);
                auVar37[0xb] = -(pcVar1[0xb] == -1);
                auVar37[0xc] = -(pcVar1[0xc] == -1);
                auVar37[0xd] = -(pcVar1[0xd] == -1);
                auVar37[0xe] = -(pcVar1[0xe] == -1);
                auVar37[0xf] = -(pcVar1[0xf] == -1);
                auVar30[0] = -(*pcVar2 == -1);
                auVar30[1] = -(pcVar2[1] == -1);
                auVar30[2] = -(pcVar2[2] == -1);
                auVar30[3] = -(pcVar2[3] == -1);
                auVar30[4] = -(pcVar2[4] == -1);
                auVar30[5] = -(pcVar2[5] == -1);
                auVar30[6] = -(pcVar2[6] == -1);
                auVar30[7] = -(pcVar2[7] == -1);
                auVar30[8] = -(pcVar2[8] == -1);
                auVar30[9] = -(pcVar2[9] == -1);
                auVar30[10] = -(pcVar2[10] == -1);
                auVar30[0xb] = -(pcVar2[0xb] == -1);
                auVar30[0xc] = -(pcVar2[0xc] == -1);
                auVar30[0xd] = -(pcVar2[0xd] == -1);
                auVar30[0xe] = -(pcVar2[0xe] == -1);
                auVar30[0xf] = -(pcVar2[0xf] == -1);
                uVar5 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                        (ushort)(auVar30[0xf] >> 7) << 0xf;
                uVar7 = 0xf;
                if (uVar5 != 0) {
                  for (; uVar5 >> uVar7 == 0; uVar7 = uVar7 - 1) {
                  }
                }
                if (uVar5 == 0) {
                  uVar7 = 0x1f;
                }
                sVar6 = 0;
                for (uVar21 = (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
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
                                      (ushort)(auVar37[0xf] >> 7) << 0xf) | 0x10000;
                    (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
                  sVar6 = sVar6 + 1;
                }
                uVar18 = 0x80;
                if ((ushort)(sVar6 + (uVar7 ^ 0xf)) < 0x10) {
                  uVar18 = 0xff;
                  local_4a4 = (uint *)((int)local_4a4 + 1);
                  _DAT_10163270 = ZEXT48(local_4a4);
                }
                *(undefined1 *)(DAT_10163268 + uVar14) = uVar18;
                *(undefined1 *)(iVar39 + 0x10 + uVar26) = uVar18;
                iVar9 = iVar9 + -1;
                _DAT_10163270 = CONCAT44(iVar9,DAT_10163270);
                puVar16 = DAT_10163278;
                puVar22 = DAT_1016327c;
                puVar33 = DAT_10163280;
                piVar20 = DAT_10163284;
                goto joined_r0x10047602;
              }
            }
            auVar32[0] = -(*pcVar1 == -1);
            auVar32[1] = -(pcVar1[1] == -1);
            auVar32[2] = -(pcVar1[2] == -1);
            auVar32[3] = -(pcVar1[3] == -1);
            auVar32[4] = -(pcVar1[4] == -1);
            auVar32[5] = -(pcVar1[5] == -1);
            auVar32[6] = -(pcVar1[6] == -1);
            auVar32[7] = -(pcVar1[7] == -1);
            auVar32[8] = -(pcVar1[8] == -1);
            auVar32[9] = -(pcVar1[9] == -1);
            auVar32[10] = -(pcVar1[10] == -1);
            auVar32[0xb] = -(pcVar1[0xb] == -1);
            auVar32[0xc] = -(pcVar1[0xc] == -1);
            auVar32[0xd] = -(pcVar1[0xd] == -1);
            auVar32[0xe] = -(pcVar1[0xe] == -1);
            auVar32[0xf] = -(pcVar1[0xf] == -1);
            puVar16 = local_420;
            puVar22 = puStack_41c;
            puVar33 = puStack_418;
            piVar20 = piStack_414;
            if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar32 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar32 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar32 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar32 >> 0x3f,0) & 1) != 0) || (SUB161(auVar32 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') break;
            puVar13 = (undefined1 *)((int)(puVar24 + 4) + (int)local_4a0);
            local_4a0 = local_4a0 + 4;
          }
joined_r0x10047602:
        } while (puVar25 != local_440);
        if (puStack_484[(int)param_1] != 0) goto LAB_10047613;
      }
      puStack_484[(int)param_1] = 0;
      bStack_4ab = 1;
      uStack_49c = (uint *)CONCAT13(1,(undefined3)uStack_49c);
      cStack_4aa = '\x01';
      cStack_4a9 = '\x01';
      bStack_4a8 = 1;
      cStack_4a7 = '\x01';
      bStack_4a6 = 1;
      cStack_4a5 = '\x01';
      local_404 = (uint *)CONCAT31(local_404._1_3_,1);
      local_468 = CONCAT71(local_468._1_7_,1);
      if (_DAT_0077f44c == (ushort *)0x0) {
        puVar19 = (ushort *)0x2;
        SVar12 = 0;
      }
      else {
        SVar12 = *(SIZE_T *)(_DAT_0077f44c + -2);
        puVar19 = _DAT_0077f44c;
      }
      FUN_10093310((undefined8 *)&local_3e0,puVar19,SVar12);
      puVar16 = puStack_3d8;
      puVar25 = puStack_3dc;
      local_4a0 = puStack_3dc;
      puStack_3d8 = (uint *)&cStack_4aa;
      piStack_3d4 = (int *)&cStack_4a9;
      local_3d0 = (uint *)&bStack_4a8;
      puStack_3cc = (uint *)&cStack_4a7;
      puStack_3c8 = (uint *)&bStack_4a6;
      puStack_3c4 = (uint *)&cStack_4a5;
      ppuStack_3c0 = &local_404;
      uStack_3bc = CONCAT44(uStack_3bc._4_4_,&local_468);
      puVar22 = local_3e0;
      local_3e0 = (uint *)&bStack_4ab;
      puStack_3dc = (uint *)((int)&uStack_49c + 3);
      FUN_10009f50((char *)&local_200,puVar25,(SIZE_T)puVar16,&local_3e0);
      if ((char)local_200 != -1) {
        local_3d0 = (uint *)local_1f0;
        puStack_3cc = (uint *)((ulonglong)local_1f0 >> 0x20);
        ppuStack_3c0 = ppuStack_1e0;
        puStack_3c8 = (uint *)uStack_1e8;
        puStack_3c4 = (uint *)((ulonglong)uStack_1e8 >> 0x20);
        local_3e0 = (uint *)local_200;
        puStack_3dc = (uint *)((ulonglong)local_200 >> 0x20);
        puStack_3d8 = (uint *)local_1f8;
        piStack_3d4 = (int *)((ulonglong)local_1f8 >> 0x20);
        FUN_10136c40(&DAT_10140894,0x18,&local_3e0,&PTR_FUN_101407f8,&PTR_s_src_lib_rs_101408ac);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      local_480 = (uint *)(uint)bStack_4a6;
      local_440 = (uint *)(uint)bStack_4ab;
      local_420 = (uint *)(uint)bStack_4a8;
      FUN_1005b7a0((undefined8 *)&local_3e0,(uint *)&puStack_430,(char)local_468,cStack_4a5,
                   bStack_4a6,bStack_4ab,bStack_4a8,cStack_4a7,cStack_4a9,cStack_4aa,(char)local_404
                  );
      if (iStack_210 == -1) {
        local_1f0 = CONCAT44(puStack_3cc,local_3d0);
        uStack_1e8 = CONCAT44(puStack_3c4,puStack_3c8);
        local_200 = CONCAT44(puStack_3dc,local_3e0);
        local_1f8 = CONCAT44(piStack_3d4,puStack_3d8);
        ppuStack_1e0 = ppuStack_3c0;
        FUN_10136c40("loading updated indexes failed",0x1e,&local_200,&PTR_FUN_101407f8,
                     &PTR_s_src_lib_rs_10140884);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      memcpy(&local_200,&local_3e0,0x1e0);
      if (puVar22 != (uint *)0x0) {
        pvVar11 = GetProcessHeap();
        HeapFree(pvVar11,0,local_4a0);
      }
      FUN_10111020((uint *)&puStack_430,(byte *)"paths",5);
      FUN_1008f000(puStack_118);
      puStack_3dc = puStack_11c + (int)puStack_118 * 3;
      local_3e0 = puStack_11c;
      puStack_3d8 = (uint *)_DAT_0077f608;
      if (_DAT_0077f608 == 0) {
        puStack_3d8 = (uint *)0x4;
      }
      if (_DAT_0077f618 < puStack_118) {
        puStack_118 = _DAT_0077f618;
      }
      piStack_3d4 = (int *)((int)puStack_3d8 + (int)_DAT_0077f618 * 4);
      local_3d0 = (uint *)0x0;
      puStack_3c8 = _DAT_0077f610;
      if (_DAT_0077f610 == (uint *)0x0) {
        puStack_3c8 = (uint *)&DAT_00000004;
      }
      puStack_3c4 = puStack_3c8 + (int)_DAT_0077f618;
      ppuStack_3c0 = (uint **)0x0;
      uStack_3bc = CONCAT44(uStack_3bc._4_4_,puStack_118);
      puStack_3cc = puStack_118;
      FUN_1002ce10((char *)&local_404,(int *)&local_3e0,pvStack_42c,(SIZE_T)puStack_428,
                   (int)&local_200);
      if ((char)local_404 != -1) {
        local_468 = CONCAT44(uStack_400,local_404);
        uStack_448 = uStack_3e4;
        uStack_450 = (undefined4)uStack_3ec;
        uStack_44c = (undefined4)((ulonglong)uStack_3ec >> 0x20);
        FUN_10136c40(&DAT_10140838,0x1c,&local_468,&PTR_FUN_101407f8,&PTR_s_src_lib_rs_10140854);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      iVar9 = _DAT_0077f60c;
      if (_DAT_0077f60c == 0) {
        iVar9 = 4;
      }
      SVar12 = _DAT_0077f608;
      if (_DAT_0077f608 == 0) {
        SVar12 = 4;
      }
      puVar25 = _DAT_0077f610;
      if (_DAT_0077f610 == (uint *)0x0) {
        puVar25 = (uint *)&DAT_00000004;
      }
      if (_DAT_0077f618 != (uint *)0x0) {
        puVar22 = (uint *)0x1;
        local_480 = _DAT_0077f618;
        puVar16 = _DAT_0077f618;
        iVar39 = iVar9;
        do {
          iVar15 = *(int *)(iVar9 + -4 + (int)puVar22 * 4);
          if ((iVar15 == 0) || (*(int *)((SVar12 - 4) + (int)puVar22 * 4) == 0)) {
            if (puVar16 == puVar22) break;
          }
          else {
            iVar9 = iVar39;
            if (*(int *)(iVar15 + 0x444) != 0) {
              (*(code *)0x535828)();
              iVar9 = iVar39;
            }
            if (*(int *)(iVar15 + 0x448) != 0) {
              (*(code *)0x535828)();
            }
            if (*(int *)(iVar15 + 0x454) != 0) {
              (*(code *)0x535828)();
            }
            uVar26 = puVar25[(int)((int)puVar22 + -1)];
            (*(code *)0x407ea0)();
            (*(code *)0x407ea8)();
            *(uint *)(iVar15 + 0x44c) = uVar26;
            *(undefined1 *)(iVar15 + 0x450) = 0;
            (*(code *)0x71ffe4)();
            puVar16 = local_480;
            iVar39 = iVar9;
            if (local_480 <= puVar22) break;
          }
          puVar22 = (uint *)((int)puVar22 + 1);
        } while( true );
      }
      FUN_1011b820((int)&puStack_430);
      (*(code *)0x4ad9ec)();
      FUN_1005d240((char *)&local_468,(undefined4 *)&DAT_0079a9cc,8,(byte *)"paths",5,aiStack_140,
                   (uint *)&puStack_430);
      if ((char)local_468 != -1) {
        ppuStack_3c0 = (uint **)uStack_448;
        local_3e0 = (uint *)local_468;
        puStack_3dc = (uint *)((ulonglong)local_468 >> 0x20);
        FUN_10136c40(&DAT_10140808,0x20,&local_3e0,&PTR_FUN_101407f8,&PTR_s_src_lib_rs_10140828);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      FUN_10066990((char *)&local_468,(ulonglong ******)&local_498,(int)&local_200);
      puVar25 = local_4a4;
      if (cStack_45c != -1) {
        uStack_3bc = CONCAT44(local_440,uStack_444);
        puStack_3b4 = puStack_43c;
        FUN_10037a80((undefined8 *)&piStack_3f8,(byte *)&piStack_3d4);
        piStack_3d4 = piStack_3f8;
        local_3d0 = (uint *)uStack_3f4;
        puStack_3cc = (uint *)uStack_3f0;
        FUN_10136c40("loading the updated room failed",0x1f,&piStack_3d4,&PTR_FUN_101407b8,
                     &PTR_s_src_lib_rs_101407e8);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (_DAT_0077f3b8 <= local_4a4) {
        FUN_10136b52(local_4a4,_DAT_0077f3b8,&PTR_s_src_lib_rs_101407a8);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      puVar16 = (uint *)&DAT_00000004;
      if (_DAT_0077f3a8 != (uint *)0x0) {
        puVar16 = _DAT_0077f3a8;
      }
      if (puVar16[(int)local_4a4] != 0) {
        (*(code *)0x405a7c)();
      }
      puVar16[(int)puVar25] = uStack_458;
      FUN_1011b820((int)apiStack_48c);
      FUN_1011b820((int)apiStack_48c);
      piStack_3d4 = (int *)0x0;
      local_3d0 = (uint *)0x0;
      (*(code *)PTR_FUN_101631b4)(&piStack_3d4);
      DAT_10163010 = (SIZE_T)puStack_3d8;
      DAT_10163014 = piStack_3d4;
      fVar27 = (float10)(*(code *)0x4199b0)();
      DAT_10163290 = (double)fVar27;
      FUN_10079850((uint *)apiStack_48c);
      FUN_10007170((int *)&local_1f8);
      puVar25 = puStack_428;
LAB_10047aee:
      pvVar23 = pvStack_424;
      if (puVar25 != (uint *)0x0) {
        pvVar11 = GetProcessHeap();
        HeapFree(pvVar11,0,pvVar23);
      }
      piVar20 = apiStack_48c[0];
      if (local_490 != (uint *)0x0) {
        pvVar11 = GetProcessHeap();
        HeapFree(pvVar11,0,piVar20);
      }
      return 0;
    }
  }
LAB_10046aa0:
  if ((ulonglong *****)local_498 != (ulonglong *****)0x0) {
    pvVar11 = GetProcessHeap();
    HeapFree(pvVar11,0,puVar33);
  }
LAB_10046abe:
  uVar8 = (*(code *)0x6884c8)();
  if (puVar25 != (uint *)0x0) {
    pvVar11 = GetProcessHeap();
    HeapFree(pvVar11,0,puVar22);
  }
  return uVar8;
}
