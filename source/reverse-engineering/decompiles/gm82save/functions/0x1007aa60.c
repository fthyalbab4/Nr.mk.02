// rea decompile_all
// name: FUN_1007aa60
// address: 0x1007aa60
// body: available
// range: 0x1007aa60-0x1007acd7 inclusive
// range: 0x1007ace0-0x1007afcd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007aa60(void)

{
  int *piVar1;
  int iVar2;
  LPVOID lpMem;
  code *pcVar3;
  byte *lpMem_00;
  uint uVar4;
  int iVar5;
  HANDLE pvVar6;
  SIZE_T SVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  uint extraout_EDX;
  ushort *puVar10;
  uint uVar11;
  byte *pbVar12;
  bool bVar13;
  undefined8 *puStack_8c;
  byte *pbStack_88;
  SIZE_T SStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_64;
  uint uStack_5c;
  undefined4 uStack_48;
  undefined8 uStack_3c;
  uint uStack_34;
  undefined1 uStack_30;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined4 uStack_1c;

  iVar2 = _DAT_00790100;
  iVar5 = *(int *)(_DAT_00790100 + 0x65c);
  if (iVar5 == 0) {
    puStack_8c = (undefined8 *)0x1007aa8f;
    iVar5 = (*(code *)0x48e048)();
    *(int *)(iVar2 + 0x65c) = iVar5;
  }
  *(undefined4 *)(iVar5 + 0x34) = 1000;
  *(code **)(iVar5 + 0x40) = FUN_100773a0;
  *(undefined4 *)(iVar5 + 0x48) = 1;
  puStack_8c = (undefined8 *)0x1007aab3;
  (*(code *)0x48e12c)();
  pbStack_88 = (byte *)0x0;
  SStack_84 = 0;
  puStack_8c = (undefined8 *)&pbStack_88;
  (*(code *)PTR_FUN_101631b4)();
  DAT_1016304c = puStack_8c;
  DAT_10163050 = pbStack_88;
  LOCK();
  bVar13 = DAT_10163054 == '\0';
  if (bVar13) {
    DAT_10163054 = '\x01';
  }
  UNLOCK();
  if (bVar13) {
    if (DAT_10163058 == (undefined8 *)0xffffffff) goto LAB_1007ab46;
LAB_1007aaf5:
    iVar5 = DAT_1016305c;
    if (DAT_10163058 == (undefined8 *)0x0) goto LAB_1007abfd;
LAB_1007ab03:
    puVar9 = DAT_10163058;
    if (DAT_10163058 == (undefined8 *)0x1) {
      LOCK();
      piVar1 = (int *)(iVar5 + 0xc0);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*piVar1 == 0 || SCARRY4(iVar2,1) != *piVar1 < 0) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    else {
      LOCK();
      piVar1 = (int *)(iVar5 + 0x38);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*piVar1 == 0 || SCARRY4(iVar2,1) != *piVar1 < 0) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
  }
  else {
    FUN_10138380((byte *)&DAT_10163054);
    if (DAT_10163058 != (undefined8 *)0xffffffff) goto LAB_1007aaf5;
LAB_1007ab46:
    puVar8 = PTR_FUN_10163068;
    PTR_FUN_10163068 = (undefined *)0x0;
    if (puVar8 == (undefined *)0x0) {
      FUN_101369c0("Lazy instance has previously been poisoned",0x55,
                   &PTR_s_C__Users_runneradmin__cargo_regi_1013fd70);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    (*(code *)puVar8)(&pbStack_88);
    uStack_64 = CONCAT44(SStack_84,pbStack_88);
    uStack_5c = uStack_80;
    if (DAT_10163058 == (undefined8 *)0xffffffff) {
      DAT_10163058 = puStack_8c;
      DAT_10163064 = uStack_80;
      _DAT_1016305c = uStack_64;
    }
    else if (puStack_8c != (undefined8 *)0xffffffff) {
      FUN_10003bb0((int *)&puStack_8c);
      FUN_101369c0("reentrant initC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\core\\src\\cell\\once.rs"
                   ,0x1d,&PTR_s_C__Users_runneradmin__cargo_regi_1013f3c8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puStack_8c = (undefined8 *)0xffffffff;
    FUN_10003bb0((int *)&puStack_8c);
    iVar5 = DAT_1016305c;
    if (DAT_10163058 != (undefined8 *)0x0) goto LAB_1007ab03;
LAB_1007abfd:
    puVar9 = DAT_10163058;
    LOCK();
    piVar1 = (int *)(iVar5 + 0x100);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (*piVar1 == 0 || SCARRY4(iVar2,1) != *piVar1 < 0) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  LOCK();
  bVar13 = DAT_10163054 == '\x01';
  if (bVar13) {
    DAT_10163054 = '\0';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_10137fb0(&DAT_10163054);
  }
  FUN_1002b500((int)&puStack_8c,(int)puVar9,iVar5);
  if (SStack_84 == 0xfffffffe) {
    uStack_2c = CONCAT44(uStack_7c,uStack_80);
    uStack_24 = CONCAT44(uStack_74,uStack_78);
    uStack_1c = uStack_70;
    if (DAT_1016306c != -1) {
      FUN_10005fc0(&DAT_1016306c);
    }
    _DAT_1016307c = uStack_1c;
    _DAT_10163074 = uStack_24;
    _DAT_1016306c = uStack_2c;
    FUN_1011b840(&puStack_8c);
    FUN_1011d450((int *)&uStack_64,(int)&puStack_8c);
    if ((int)uStack_64 == -1) {
      FUN_10136b20(&PTR_s_src_regular_extension_watcher_rs_10142f64);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uStack_34 = uStack_5c;
    uStack_3c = uStack_64;
    uStack_30 = 1;
    if (uStack_80 - (int)pbStack_88 != 0) {
      uVar11 = uStack_80 - (int)pbStack_88 >> 4;
      pbVar12 = pbStack_88 + 4;
      do {
        if (*(int *)(pbVar12 + -4) != 0) {
          lpMem = *(LPVOID *)pbVar12;
          pvVar6 = GetProcessHeap();
          HeapFree(pvVar6,0,lpMem);
        }
        pbVar12 = pbVar12 + 0x10;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar9 = puStack_8c;
    if (SStack_84 != 0) {
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,puVar9);
    }
    uVar11 = uStack_34;
    pbVar12 = uStack_3c._4_4_;
    iVar5 = FUN_10110f10(uStack_3c._4_4_,uStack_34);
    uVar4 = uStack_34;
    if ((iVar5 != 0) && (extraout_EDX <= uVar11)) {
      uStack_64 = CONCAT44(uStack_64._4_4_,extraout_EDX);
      uVar4 = extraout_EDX;
      if ((extraout_EDX != 0) && (uVar4 = extraout_EDX, extraout_EDX < uVar11)) {
        if (pbVar12[extraout_EDX] == 0xed) {
          if (uVar11 <= extraout_EDX + 1) {
            FUN_10136b52(extraout_EDX + 1,uVar11,&PTR_s_C__Users_runneradmin__rustup_too_10157148);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar4 = extraout_EDX;
          if ((((2 < extraout_EDX) && (uVar4 = extraout_EDX, 0x9f < pbVar12[extraout_EDX + 1])) &&
              (uVar4 = extraout_EDX, pbVar12[extraout_EDX - 3] == 0xed)) &&
             (uVar4 = extraout_EDX, 0x9f < pbVar12[extraout_EDX - 2])) {
            puVar8 = &DAT_10157c6a;
LAB_1007af9a:
            puStack_8c = &uStack_64;
            pbStack_88 = &LAB_10096fc0;
            FUN_101369c0(puVar8,&puStack_8c,&PTR_s_C__Users_runneradmin__rustup_too_10157148);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        else {
          uVar4 = extraout_EDX;
          if ((char)pbVar12[extraout_EDX] < -0x40) {
            puVar8 = &DAT_10157c3f;
            goto LAB_1007af9a;
          }
        }
      }
    }
    uStack_34 = uVar4;
    FUN_10111020((uint *)&uStack_3c,(byte *)"extensions",10);
    pbVar12 = uStack_3c._4_4_;
    FUN_100b2620(&puStack_8c,&DAT_1016306c,uStack_3c._4_4_,uStack_34,1);
    if (SStack_84 == 0xfffffffe) {
      if (_DAT_0078898c == (ushort *)0x0) {
        puVar10 = (ushort *)0x2;
        SVar7 = 0;
      }
      else {
        SVar7 = *(SIZE_T *)(_DAT_0078898c + -2);
        puVar10 = _DAT_0078898c;
      }
      FUN_10093310((undefined8 *)&puStack_8c,puVar10,SVar7);
      lpMem_00 = pbStack_88;
      puVar9 = puStack_8c;
      FUN_100b2620(&puStack_8c,&DAT_1016306c,pbStack_88,SStack_84,1);
      if (SStack_84 == 0xfffffffe) {
        if (puVar9 != (undefined8 *)0x0) {
          pvVar6 = GetProcessHeap();
          HeapFree(pvVar6,0,lpMem_00);
        }
        if ((uint)uStack_3c != 0) {
          pvVar6 = GetProcessHeap();
          HeapFree(pvVar6,0,pbVar12);
        }
        goto LAB_1007af3a;
      }
      uStack_48 = uStack_70;
      uStack_64 = CONCAT44(pbStack_88,puStack_8c);
      uStack_5c = SStack_84;
      if (puVar9 != (undefined8 *)0x0) {
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,lpMem_00);
      }
    }
    else {
      uStack_48 = uStack_70;
      uStack_64 = CONCAT44(pbStack_88,puStack_8c);
      uStack_5c = SStack_84;
    }
    if ((uint)uStack_3c != 0) {
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,pbVar12);
    }
    if (uStack_5c == 0xfffffffe) goto LAB_1007af3a;
  }
  else {
    uStack_48 = uStack_70;
    uStack_64 = CONCAT44(pbStack_88,puStack_8c);
    uStack_5c = SStack_84;
  }
  FUN_10005ed0((char *)&uStack_64);
LAB_1007af3a:
  *(undefined1 **)(*(int *)(_DAT_00790100 + 0x3fc) + 0x110) = &LAB_1003e0e0;
  return;
}
