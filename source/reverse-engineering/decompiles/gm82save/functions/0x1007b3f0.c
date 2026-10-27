// rea decompile_all
// name: FUN_1007b3f0
// address: 0x1007b3f0
// body: available
// range: 0x1007b3f0-0x1007b461 inclusive
// range: 0x1007b470-0x1007b70a inclusive
// range: 0x1007b710-0x1007b8ad inclusive
// range: 0x1007b8b0-0x1007b9d8 inclusive
// range: 0x1007b9e0-0x1007bcd2 inclusive
// range: 0x1007bce0-0x1007bf8e inclusive
// range: 0x1007bf90-0x1007c153 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b3f0(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  code *pcVar3;
  int *piVar4;
  byte **ppbVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  byte bVar9;
  HANDLE pvVar10;
  int iVar11;
  byte *pbVar12;
  SIZE_T SVar13;
  undefined4 uVar14;
  undefined *puVar15;
  byte *extraout_EDX;
  ushort *puVar16;
  byte *pbVar17;
  LPVOID pvVar18;
  uint uVar19;
  undefined **ppuVar20;
  undefined1 uStack_a11;
  byte **ppbStack_a10;
  byte *pbStack_a0c;
  LPVOID pvStack_a08;
  byte *pbStack_a04;
  byte *local_a00;
  byte *pbStack_9fc;
  byte *local_9f8;
  undefined1 local_9f4;
  byte *pbStack_9f0;
  LPVOID pvStack_9ec;
  byte *pbStack_9e8;
  byte *pbStack_9e4;
  LPVOID pvStack_9e0;
  int iStack_9dc;
  int iStack_9d4;
  SIZE_T SStack_9d0;
  LPVOID pvStack_9cc;
  undefined4 uStack_9c8;
  byte *pbStack_9c0;
  int iStack_9bc;
  undefined4 uStack_9b8;
  undefined4 uStack_9b4;
  SIZE_T SStack_9a4;
  LPVOID pvStack_9a0;
  undefined4 uStack_99c;
  byte **local_998;
  byte *local_994;
  byte *local_990;
  byte *local_98c;
  uint local_94c;
  int *piStack_73c;
  int iStack_738;
  SIZE_T *pSStack_730;
  byte **ppbStack_72c;
  undefined4 uStack_728;
  int *piStack_724;
  undefined1 auStack_720 [32];
  byte *pbStack_700;
  int iStack_6fc;
  int aiStack_4d4 [3];
  byte *local_4c8;
  byte *pbStack_4c4;
  byte *local_4c0;
  byte **ppbStack_268;
  undefined4 uStack_264;
  int *piStack_260;
  undefined1 auStack_25c [28];
  uint uStack_240;

  FUN_1011b840(&local_998);
  FUN_1011d450((int *)&local_4c8,(int)&local_998);
  if (local_4c8 == (byte *)0xffffffff) {
    FUN_10136b20(&PTR_s_src_lib_rs_10142ffc);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_9f8 = local_4c0;
  local_a00 = local_4c8;
  pbStack_9fc = pbStack_4c4;
  local_9f4 = 1;
  if ((int)local_98c - (int)local_994 != 0) {
    uVar19 = (uint)((int)local_98c - (int)local_994) >> 4;
    pbVar17 = local_994 + 4;
    do {
      if (*(int *)(pbVar17 + -4) != 0) {
        pvVar18 = *(LPVOID *)pbVar17;
        pvVar10 = GetProcessHeap();
        HeapFree(pvVar10,0,pvVar18);
      }
      pbVar17 = pbVar17 + 0x10;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  ppbVar5 = local_998;
  if (local_990 != (byte *)0x0) {
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,ppbVar5);
  }
  pbVar17 = local_9f8;
  pbVar2 = pbStack_9fc;
  iVar11 = FUN_10110f10(pbStack_9fc,(uint)local_9f8);
  pbVar8 = local_9f8;
  if ((((iVar11 != 0) && (extraout_EDX <= pbVar17)) &&
      (pbVar8 = extraout_EDX, local_4c8 = extraout_EDX, extraout_EDX != (byte *)0x0)) &&
     (pbVar8 = extraout_EDX, extraout_EDX < pbVar17)) {
    if (pbVar2[(int)extraout_EDX] == 0xed) {
      if (pbVar17 <= extraout_EDX + 1) {
        FUN_10136b52(extraout_EDX + 1,pbVar17,&PTR_s_C__Users_runneradmin__rustup_too_10157148);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((((byte *)0x2 < extraout_EDX) && (0x9f < (pbVar2 + 1)[(int)extraout_EDX])) &&
         (((pbVar2 + -3)[(int)extraout_EDX] == 0xed && (0x9f < (pbVar2 + -2)[(int)extraout_EDX]))))
      {
        puVar15 = &DAT_10157c6a;
LAB_1007c122:
        local_998 = &local_4c8;
        local_994 = &LAB_10096fc0;
        FUN_101369c0(puVar15,&local_998,&PTR_s_C__Users_runneradmin__rustup_too_10157148);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    else if ((char)pbVar2[(int)extraout_EDX] < -0x40) {
      puVar15 = &DAT_10157c3f;
      goto LAB_1007c122;
    }
    pbVar8 = extraout_EDX;
    if ((char)pbVar2[(int)extraout_EDX] < -0x40) {
      FUN_10136b40(&DAT_101579d0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  local_9f8 = pbVar8;
  FUN_10111020((uint *)&local_a00,(byte *)"extensions",10);
  pbVar8 = local_9f8;
  pbVar2 = pbStack_9fc;
  FUN_1011c320((uint *)&local_998,(int)pbStack_9fc,(int)local_9f8);
  if (((uint)local_998 & (uint)local_994) == 0xffffffff) {
    uVar19 = (uint)local_990 & 0x1ff;
    pbVar12 = local_990;
    pbVar17 = local_98c;
  }
  else {
    pbVar12 = (byte *)0xff;
    uVar19 = (local_94c & 1) << 8 | 0xff;
  }
  if (uVar19 == 0xff) {
    FUN_101126e0((char *)&local_998,pbVar2,(int *)pbVar8);
    pbVar17 = local_994;
    if ((char)local_998 == '\x03') {
      puVar1 = *(undefined4 **)(local_994 + 4);
      pvVar18 = *(LPVOID *)local_994;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(pvVar18);
      }
      if (puVar1[1] != 0) {
        if (8 < (uint)puVar1[2]) {
          pvVar18 = *(LPVOID *)((int)pvVar18 + -4);
        }
        pvVar10 = GetProcessHeap();
        HeapFree(pvVar10,0,pvVar18);
      }
      pvVar10 = GetProcessHeap();
      HeapFree(pvVar10,0,pbVar17);
    }
    if (_DAT_0078898c == (ushort *)0x0) {
      puVar16 = (ushort *)0x2;
      SVar13 = 0;
    }
    else {
      SVar13 = *(SIZE_T *)(_DAT_0078898c + -2);
      puVar16 = _DAT_0078898c;
    }
    FUN_10093310((undefined8 *)&local_998,puVar16,SVar13);
    pbVar17 = local_994;
    ppbStack_a10 = local_998;
    pbStack_9c0 = local_990;
    FUN_1011c3c0(&local_998,local_994,(SIZE_T)local_990);
    if (local_998 == (byte **)0xffffffff) {
      local_4c0 = local_990;
      pbStack_4c4 = local_994;
      local_4c8 = (byte *)0xffffffff;
    }
    else {
      memcpy(&local_4c8,&local_998,0x260);
      if (local_4c8 != (byte *)0xffffffff) {
        memcpy(&local_998,&local_4c8,0x260);
        iStack_738 = 0x1d;
        while (FUN_1011d560(&pSStack_730,(int *)&local_998), piVar4 = piStack_724,
              ppbVar5 = ppbStack_72c, pSStack_730 == (SIZE_T *)0x1) {
          cVar6 = (char)uStack_728;
          if (ppbStack_72c != (byte **)0x0) {
            uStack_264._0_3_ = CONCAT21(uStack_728._1_2_,(undefined1)uStack_264);
            uStack_264 = (undefined1 *)CONCAT13(uStack_728._3_1_,(undefined3)uStack_264);
            memcpy(auStack_25c,auStack_720,0x248);
            ppbStack_268 = ppbVar5;
            uStack_264 = (undefined1 *)CONCAT31(uStack_264._1_3_,cVar6);
            piStack_260 = piVar4;
            FUN_10038ff0(&SStack_9a4,&ppbStack_268);
            if (SStack_9a4 != 0xffffffff) {
              pbStack_a0c = (byte *)0x0;
              pvStack_a08 = (LPVOID)0x1;
              pbStack_a04 = (byte *)0x0;
              uStack_9c8 = uStack_99c;
              pSStack_730 = &SStack_9d0;
              SStack_9d0 = SStack_9a4;
              pvStack_9cc = pvStack_9a0;
              ppbStack_72c = (byte **)&LAB_100922c0;
              uVar14 = FUN_10093d70(&pbStack_a0c,0x10143aa0,(ushort *)&DAT_10157158,
                                    (uint)&pSStack_730);
              iVar11 = iStack_738;
              if ((char)uVar14 == '\0') goto joined_r0x1007b8a7;
              ppuVar20 = &PTR_s_C__Users_runneradmin__cargo_regi_10143f10;
              goto LAB_1007c0d1;
            }
            break;
          }
          if ((char)uStack_728 == '\x03') {
            puVar1 = (undefined4 *)piStack_724[1];
            pvVar18 = (LPVOID)*piStack_724;
            if ((code *)*puVar1 != (code *)0x0) {
              (*(code *)*puVar1)(pvVar18);
            }
            if (puVar1[1] != 0) {
              if (8 < (uint)puVar1[2]) {
                pvVar18 = *(LPVOID *)((int)pvVar18 + -4);
              }
              pvVar10 = GetProcessHeap();
              HeapFree(pvVar10,0,pvVar18);
            }
            pvVar10 = GetProcessHeap();
            HeapFree(pvVar10,0,piVar4);
          }
        }
        pbStack_9f0 = (byte *)0x0;
        pvStack_9ec = (LPVOID)0x1;
        pbStack_9e8 = (byte *)0x0;
        goto LAB_1007ba99;
      }
    }
    goto LAB_1007bfeb;
  }
  if ((char)pbVar12 != '\x03') goto LAB_1007c011;
  puVar1 = *(undefined4 **)(pbVar17 + 4);
  pvVar18 = *(LPVOID *)pbVar17;
  if ((code *)*puVar1 != (code *)0x0) {
    (*(code *)*puVar1)(pvVar18);
  }
  if (puVar1[1] != 0) {
    if (8 < (uint)puVar1[2]) {
      pvVar18 = *(LPVOID *)((int)pvVar18 + -4);
    }
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,pvVar18);
  }
  pvVar10 = GetProcessHeap();
  goto LAB_1007c008;
joined_r0x1007b8a7:
  if (iVar11 != 0) {
    while( true ) {
      FUN_1011d560(&pSStack_730,(int *)&local_998);
      piVar4 = piStack_724;
      ppbVar5 = ppbStack_72c;
      if (pSStack_730 != (SIZE_T *)0x1) goto LAB_1007ba6a;
      cVar6 = (char)uStack_728;
      if (ppbStack_72c != (byte **)0x0) break;
      if ((char)uStack_728 == '\x03') {
        puVar1 = (undefined4 *)piStack_724[1];
        pvVar18 = (LPVOID)*piStack_724;
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)(pvVar18);
        }
        if (puVar1[1] != 0) {
          if (8 < (uint)puVar1[2]) {
            pvVar18 = *(LPVOID *)((int)pvVar18 + -4);
          }
          pvVar10 = GetProcessHeap();
          HeapFree(pvVar10,0,pvVar18);
        }
        pvVar10 = GetProcessHeap();
        HeapFree(pvVar10,0,piVar4);
      }
    }
    uStack_264._0_3_ = CONCAT21(uStack_728._1_2_,(undefined1)uStack_264);
    uStack_264 = (undefined1 *)CONCAT13(uStack_728._3_1_,(undefined3)uStack_264);
    memcpy(auStack_25c,auStack_720,0x248);
    ppbStack_268 = ppbVar5;
    uStack_264 = (undefined1 *)CONCAT31(uStack_264._1_3_,cVar6);
    piStack_260 = piVar4;
    FUN_10038ff0((SIZE_T *)&pbStack_9e4,&ppbStack_268);
    iVar11 = iStack_738 + -1;
    iStack_738 = iVar11;
    if (pbStack_a0c == pbStack_a04) {
      FUN_101359e0((uint *)&pbStack_a0c,(uint)pbStack_a04,1,(LPVOID)0x1,1);
    }
    *(byte *)((int)pvStack_a08 + (int)pbStack_a04) = 10;
    pbStack_a04 = pbStack_a04 + 1;
    ppbStack_268 = &pbStack_9e4;
    uStack_264 = &LAB_100922c0;
    uVar14 = FUN_10093d70(&pbStack_a0c,0x10143aa0,(ushort *)&DAT_10157158,(uint)&ppbStack_268);
    pvVar18 = pvStack_9e0;
    if ((char)uVar14 != '\0') {
      ppuVar20 = &PTR_s_C__Users_runneradmin__cargo_regi_10140370;
LAB_1007c0d1:
      FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_a11,&DAT_101402f8,
                   ppuVar20);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (pbStack_9e4 != (byte *)0x0) {
      pvVar10 = GetProcessHeap();
      HeapFree(pvVar10,0,pvVar18);
    }
    goto joined_r0x1007b8a7;
  }
LAB_1007ba6a:
  pvVar18 = pvStack_9cc;
  pbStack_9e8 = pbStack_a04;
  pbStack_9f0 = pbStack_a0c;
  pvStack_9ec = pvStack_a08;
  if (SStack_9d0 != 0) {
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,pvVar18);
  }
LAB_1007ba99:
  if (local_998 != (byte **)0x0) {
    FindClose(local_994);
  }
  LOCK();
  *piStack_73c = *piStack_73c + -1;
  UNLOCK();
  if (*piStack_73c == 0) {
    FUN_10121040(piStack_73c);
  }
  if (pbStack_9e8 != (byte *)0x0) {
    local_998 = &pbStack_9f0;
    local_994 = &LAB_100922c0;
    FUN_10093970((undefined8 *)aiStack_4d4,(ushort *)&DAT_1014300c,(uint)&local_998);
    local_998 = (byte **)FUN_100033c0(aiStack_4d4);
    iVar11 = (*(code *)0x4d437c)(0,0xffffffff,0xffffffff,0);
    (*(code *)0x407ea8)();
    pvVar18 = pvStack_9ec;
    if (iVar11 == 6) {
      if (pbStack_9f0 != (byte *)0x0) {
        pvVar10 = GetProcessHeap();
        HeapFree(pvVar10,0,pvVar18);
      }
      if (local_4c8 == (byte *)0xffffffff) {
        FUN_100039d0((int *)&local_4c8);
      }
      FUN_1011c3c0(&local_998,pbVar17,(SIZE_T)pbStack_9c0);
      if (local_998 == (byte **)0xffffffff) {
        local_4c8 = (byte *)0xffffffff;
        pbStack_4c4 = local_994;
        local_4c0 = local_990;
      }
      else {
        memcpy(&local_4c8,&local_998,0x260);
      }
      if (ppbStack_a10 != (byte **)0x0) {
        pvVar10 = GetProcessHeap();
        HeapFree(pvVar10,0,pbVar17);
      }
      if (local_4c8 != (byte *)0xffffffff) {
        memcpy(&local_998,&local_4c8,0x260);
        while (FUN_1011d560(&pSStack_730,(int *)&local_998), piVar4 = piStack_724,
              uVar19 = uStack_728, pSStack_730 == (SIZE_T *)0x1) {
          cVar6 = (char)uStack_728;
          if (ppbStack_72c == (byte **)0x0) {
            if ((char)uStack_728 == '\x03') {
              puVar1 = (undefined4 *)piStack_724[1];
              pvVar18 = (LPVOID)*piStack_724;
              if ((code *)*puVar1 != (code *)0x0) {
                (*(code *)*puVar1)(pvVar18);
              }
              if (puVar1[1] != 0) {
                if (8 < (uint)puVar1[2]) {
                  pvVar18 = *(LPVOID *)((int)pvVar18 + -4);
                }
                pvVar10 = GetProcessHeap();
                HeapFree(pvVar10,0,pvVar18);
              }
              pvVar10 = GetProcessHeap();
              HeapFree(pvVar10,0,piVar4);
            }
          }
          else {
            ppbStack_a10 = ppbStack_72c;
            uStack_264._0_3_ = CONCAT21(uStack_728._1_2_,(undefined1)uStack_264);
            uStack_264 = (undefined1 *)CONCAT13(uStack_728._3_1_,(undefined3)uStack_264);
            memcpy(auStack_25c,auStack_720,0x248);
            uVar7 = (uint)uStack_264;
            ppbStack_268 = ppbStack_a10;
            uStack_264 = (undefined1 *)CONCAT31(uStack_264._1_3_,cVar6);
            piStack_260 = piVar4;
            if ((uVar7 & 0x400) == 0) {
              if ((uVar19 & 0x10) != 0) goto LAB_1007bcc5;
LAB_1007bcfd:
              FUN_10112520((undefined8 *)&pbStack_9e4,(int *)&ppbStack_268);
              FUN_101125e0((undefined8 *)&pSStack_730,(int)&ppbStack_268);
              ppbVar5 = ppbStack_72c;
              FUN_10111020((uint *)&local_a00,(byte *)ppbStack_72c,uStack_728);
              if (pSStack_730 != (SIZE_T *)0x0) {
                pvVar10 = GetProcessHeap();
                HeapFree(pvVar10,0,ppbVar5);
              }
              pbVar2 = local_9f8;
              pbVar17 = pbStack_9fc;
              bVar9 = FUN_10112230((int)pbStack_9fc,(int)local_9f8);
              pvVar18 = pvStack_9e0;
              pbVar8 = pbStack_9e4;
              if (bVar9 == 0) {
                FUN_1011c030(&pSStack_730,(int)pvStack_9e0,iStack_9dc,(int)pbVar17,(int)pbVar2);
                if (pbVar8 != (byte *)0x0) {
                  pvVar10 = GetProcessHeap();
                  goto LAB_1007be50;
                }
                goto LAB_1007be59;
              }
              FUN_1011c320((uint *)&pSStack_730,(int)pbVar17,(int)pbVar2);
              iVar11 = iStack_9dc;
              pvVar18 = pvStack_9e0;
              if (((uint)pSStack_730 & (uint)ppbStack_72c) == 0xffffffff) {
                piVar4 = piStack_724;
joined_r0x1007bebf:
                piStack_724 = piVar4;
                if ((char)uStack_728 == '\x03') {
                  puVar1 = (undefined4 *)piVar4[1];
                  pvVar18 = (LPVOID)*piVar4;
                  if ((code *)*puVar1 != (code *)0x0) {
                    (*(code *)*puVar1)(pvVar18);
                  }
                  if (puVar1[1] != 0) {
                    FUN_10093cf0(pvVar18,puVar1[2]);
                  }
                  pvVar10 = GetProcessHeap();
                  HeapFree(pvVar10,0,piVar4);
                }
                FUN_1011b820((int)&local_a00);
                pvVar18 = pvStack_9e0;
                if (pbStack_9e4 != (byte *)0x0) {
                  pvVar10 = GetProcessHeap();
                  HeapFree(pvVar10,0,pvVar18);
                }
              }
              else {
                pbStack_9c0 = pbStack_700;
                iStack_9bc = iStack_6fc;
                uStack_9b8 = 0;
                uStack_9b4 = 0;
                FUN_1011c320((uint *)&pSStack_730,(int)pvStack_9e0,iStack_9dc);
                pbVar8 = pbStack_9e4;
                if (((uint)pSStack_730 & (uint)ppbStack_72c) == 0xffffffff) {
                  piVar4 = piStack_724;
                  goto joined_r0x1007bebf;
                }
                iStack_9d4 = iStack_9bc;
                if ((SBORROW4(iStack_6fc,iStack_9bc) !=
                    SBORROW4(iStack_6fc - iStack_9bc,(uint)(pbStack_700 < pbStack_9c0))) ==
                    (int)((iStack_6fc - iStack_9bc) - (uint)(pbStack_700 < pbStack_9c0)) < 0) {
                  pbStack_9c0 = pbStack_9e4;
                  FUN_1011c030(&pSStack_730,(int)pvVar18,iVar11,(int)pbVar17,(int)pbVar2);
                  if (pbStack_9c0 != (byte *)0x0) {
                    pvVar10 = GetProcessHeap();
                    goto LAB_1007be50;
                  }
                }
                else {
                  FUN_1011be70(&pSStack_730,(int)pvVar18,iVar11);
                  if (pbVar8 != (byte *)0x0) {
                    pvVar10 = GetProcessHeap();
LAB_1007be50:
                    HeapFree(pvVar10,0,pvVar18);
                  }
                }
LAB_1007be59:
                ppbVar5 = ppbStack_72c;
                if ((char)pSStack_730 == '\x03') {
                  pbVar17 = ppbStack_72c[1];
                  pbVar2 = *ppbStack_72c;
                  if (*(code **)pbVar17 != (code *)0x0) {
                    (**(code **)pbVar17)(pbVar2);
                  }
                  if (*(int *)(pbVar17 + 4) != 0) {
                    FUN_10093cf0(pbVar2,*(uint *)(pbVar17 + 8));
                  }
                  pvVar10 = GetProcessHeap();
                  HeapFree(pvVar10,0,ppbVar5);
                }
                FUN_1011b820((int)&local_a00);
              }
              LOCK();
              *ppbStack_a10 = *ppbStack_a10 + -1;
              pbVar17 = *ppbStack_a10;
              UNLOCK();
            }
            else {
              if ((uStack_240 & 0x20000000) == 0 && (uVar19 & 0x10) == 0) goto LAB_1007bcfd;
LAB_1007bcc5:
              LOCK();
              *ppbStack_a10 = *ppbStack_a10 + -1;
              pbVar17 = *ppbStack_a10;
              UNLOCK();
            }
            if (pbVar17 == (byte *)0x0) {
              FUN_10121040(ppbStack_a10);
            }
          }
        }
        if (local_998 != (byte **)0x0) {
          FindClose(local_994);
        }
        LOCK();
        *piStack_73c = *piStack_73c + -1;
        UNLOCK();
        if (*piStack_73c == 0) {
          FUN_10121040(piStack_73c);
        }
        if (local_4c8 != (byte *)0xffffffff) goto LAB_1007c011;
      }
      FUN_100039d0((int *)&local_4c8);
      goto LAB_1007c011;
    }
  }
  pvVar18 = pvStack_9ec;
  if (pbStack_9f0 != (byte *)0x0) {
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,pvVar18);
  }
  if (local_4c8 == (byte *)0xffffffff) {
LAB_1007bfeb:
    FUN_100039d0((int *)&local_4c8);
  }
  if (ppbStack_a10 == (byte **)0x0) goto LAB_1007c011;
  pvVar10 = GetProcessHeap();
LAB_1007c008:
  HeapFree(pvVar10,0,pbVar17);
LAB_1007c011:
  pbVar17 = pbStack_9fc;
  if (local_a00 != (byte *)0x0) {
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,pbVar17);
  }
  return;
}
