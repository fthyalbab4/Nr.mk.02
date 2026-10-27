// rea decompile_all
// name: FUN_10107e20
// address: 0x10107e20
// body: available
// range: 0x10107e20-0x10108300 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_10107e20(char *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  code *pcVar3;
  byte bVar4;
  BOOL BVar5;
  HANDLE pvVar6;
  FARPROC pFVar7;
  FARPROC pFVar8;
  int iVar9;
  undefined4 uVar10;
  LPVOID pvVar11;
  HANDLE pvVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  char cStack_47c;
  char local_47b;
  undefined1 uStack_47a;
  char cStack_479;
  HANDLE local_478;
  FARPROC pFStack_474;
  HANDLE pvStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  int local_464;
  undefined8 local_460;
  undefined4 local_458;
  char local_454;
  undefined8 local_450;
  undefined4 local_448;
  char *pcStack_440;
  undefined4 *puStack_43c;
  char *pcStack_438;
  undefined4 **ppuStack_434;
  char *pcStack_430;
  undefined4 *puStack_42c;
  undefined1 *puStack_428;
  undefined4 *puStack_424;
  int *piStack_420;
  undefined **ppuStack_41c;
  undefined4 uStack_418;
  char cStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined1 auStack_400 [4];
  undefined4 uStack_3fc;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3cc;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  int iStack_2f8;
  int local_2f0;
  undefined4 local_2ec;
  undefined4 *puStack_2e8;
  undefined4 local_2e4;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_22c;

  cVar1 = *param_1;
  local_47b = cVar1;
  FUN_10108310((undefined8 *)&local_2f0);
  if (local_2f0 == -1) {
    if ((char)local_2ec == '\x03') {
      puVar2 = (undefined4 *)puStack_2e8[1];
      pvVar11 = (LPVOID)*puStack_2e8;
      if ((code *)*puVar2 != (code *)0x0) {
        local_478 = pvVar11;
        (*(code *)*puVar2)(pvVar11);
        pvVar11 = local_478;
      }
      if (puVar2[1] != 0) {
        if (8 < (uint)puVar2[2]) {
          pvVar11 = *(LPVOID *)((int)pvVar11 + -4);
        }
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,pvVar11);
      }
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,puStack_2e8);
    }
  }
  else {
    local_450 = CONCAT44(puStack_2e8,local_2ec);
    local_448 = local_2e4;
  }
  pFVar7 = (FARPROC)0x0;
  local_464 = local_2f0;
  local_458 = local_448;
  local_460 = local_450;
  local_454 = cVar1;
  BVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,"stack backtrace:\n",0x11);
  if ((char)BVar5 == '\0') {
    piStack_420 = &local_464;
    puStack_424 = param_2;
    uStack_418 = 0;
    uStack_46c = 0;
    cStack_47c = '\0';
    uStack_468 = 0;
    uStack_47a = 1;
    pcStack_440 = &local_47b;
    ppuStack_41c = &PTR_FUN_10158324;
    puStack_43c = &uStack_46c;
    pcStack_438 = &cStack_47c;
    ppuStack_434 = &puStack_424;
    pcStack_430 = &cStack_479;
    puStack_42c = &uStack_468;
    puStack_428 = &uStack_47a;
    cStack_479 = cVar1;
    cStack_414 = cVar1;
    pvVar6 = GetCurrentProcess();
    local_478 = GetCurrentThread();
    memset(&local_2f0,0,0x2d0);
    RtlCaptureContext(&local_2f0);
    uVar14 = FUN_10108470();
    pvVar12 = (HANDLE)(uVar14 >> 0x20);
    BVar5 = (BOOL)uVar14;
    if ((uVar14 & 1) == 0) {
      pFVar7 = DAT_1016332c;
      if (((DAT_1016332c == (FARPROC)0x0) &&
          (pFVar7 = GetProcAddress(DAT_1016330c,"SymFunctionTableAccess64"), pFVar7 == (FARPROC)0x0)
          ) || ((DAT_1016332c = pFVar7, pFStack_474 = DAT_1016332c, pFVar7 = DAT_10163330,
                DAT_10163330 == (FARPROC)0x0 &&
                (pFVar7 = GetProcAddress(DAT_1016330c,"SymGetModuleBase64"), pFVar7 == (FARPROC)0x0)
                ))) {
LAB_101082f5:
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_10157910);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      DAT_10163330 = pFVar7;
      pFVar8 = DAT_1016333c;
      pvStack_470 = pvVar12;
      if ((DAT_1016333c == (FARPROC)0x0) &&
         (pFVar8 = GetProcAddress(DAT_1016330c,"StackWalkEx"), pFVar8 == (FARPROC)0x0)) {
        memset(auStack_400,0,0x100);
        uStack_40c = 0;
        uStack_410 = 1;
        iStack_2f8 = 0;
        uStack_404 = 0;
        uStack_408 = uStack_238;
        uStack_3fc = 3;
        uStack_3d8 = uStack_22c;
        uStack_3d4 = 0;
        uStack_3cc = 3;
        uStack_3e8 = uStack_23c;
        uStack_3e4 = 0;
        uStack_3dc = 3;
        do {
          pFVar8 = DAT_10163328;
          if ((DAT_10163328 == (FARPROC)0x0) &&
             (pFVar8 = GetProcAddress(DAT_1016330c,"StackWalk64"), pFVar8 == (FARPROC)0x0))
          goto LAB_101082f5;
          DAT_10163328 = pFVar8;
          iVar9 = (*DAT_10163328)(0x14c,pvVar6,local_478,&uStack_408,&local_2f0,0,pFStack_474,pFVar7
                                  ,0);
          if (iVar9 != 1) break;
          iStack_2f8 = (*pFVar7)(pvVar6,uStack_408,0);
          bVar4 = FUN_10108840(&pcStack_440,(byte *)&uStack_410);
        } while (bVar4 != 0);
      }
      else {
        DAT_1016333c = pFVar8;
        pFVar8 = DAT_1016333c;
        memset(auStack_400,0,0x100);
        uStack_40c = 0;
        uStack_410 = 0;
        uStack_300 = 0x110;
        uStack_2fc = 0;
        iStack_2f8 = 0;
        uStack_404 = 0;
        uStack_408 = uStack_238;
        uStack_3fc = 3;
        uStack_3d8 = uStack_22c;
        uStack_3d4 = 0;
        uStack_3cc = 3;
        uStack_3e8 = uStack_23c;
        uStack_3e4 = 0;
        uStack_3dc = 3;
        do {
          iVar9 = (*pFVar8)(0x14c,pvVar6,local_478,&uStack_408,&local_2f0,0,pFStack_474,pFVar7,0,0);
          if (iVar9 != 1) break;
          iStack_2f8 = (*pFVar7)(pvVar6,uStack_408,0);
          bVar4 = FUN_10108840(&pcStack_440,(byte *)&uStack_410);
        } while (bVar4 != 0);
      }
      BVar5 = ReleaseMutex(pvStack_470);
    }
    local_2f0 = local_464;
    if ((cStack_47c == '\0') &&
       ((cVar1 != '\0' ||
        (BVar5 = (**(code **)(param_2[1] + 0xc))
                           (*param_2,
                            "note: Some details are omitted, run with `RUST_BACKTRACE=full` for a verbose backtrace.\n"
                            ,0x58), local_2f0 = local_464, (char)BVar5 == '\0')))) {
      uVar13 = 0;
      uVar10 = 0;
      local_2f0 = local_464;
      goto joined_r0x10108188;
    }
  }
  uVar13 = CONCAT31((int3)((uint)pFVar7 >> 8),1);
  uVar10 = CONCAT31((int3)((uint)BVar5 >> 8),1);
joined_r0x10108188:
  if (0 < local_2f0) {
    pvVar11 = (LPVOID)local_460;
    pvVar6 = GetProcessHeap();
    HeapFree(pvVar6,0,pvVar11);
    uVar10 = uVar13;
  }
  return uVar10;
}
