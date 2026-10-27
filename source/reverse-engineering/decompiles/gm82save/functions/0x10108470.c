// rea decompile_all
// name: FUN_10108470
// address: 0x10108470
// body: available
// range: 0x10108470-0x10108835 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10108470(void)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 uVar3;
  FARPROC pFVar4;
  uint uVar5;
  byte *hObject;
  byte *pbVar6;
  HANDLE pvVar7;
  HANDLE pvVar8;
  HANDLE pvVar9;
  undefined4 uVar10;
  uint uVar11;
  byte bVar12;
  HANDLE pvVar13;
  byte *pbVar14;
  bool bVar15;
  HANDLE pvStack_5c;
  LPCWSTR lpString;
  LPCWSTR pWVar16;
  int iVar17;
  undefined8 uStack_44;
  HANDLE pvStack_3c;
  byte abStack_35 [37];

  pbVar14 = DAT_101633a8;
  if (DAT_101633a8 == (byte *)0x0) {
    pbVar14 = abStack_35 + 1;
    pvStack_5c = (HANDLE)0x10108557;
    memcpy(pbVar14,"Local\\RustBacktraceMutex00000000",0x21);
    uVar5 = GetCurrentProcessId();
    if (uVar5 != 0) {
      uVar11 = 0x1f;
      do {
        if (0x20 < uVar11) {
          FUN_10136b52(0xffffffff,0x21,&PTR_s_C__Users_runneradmin__rustup_too_10158f44);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        bVar12 = (byte)uVar5;
        uVar2 = CONCAT11(bVar12,bVar12) & 0xf0f;
        bVar12 = (bVar12 & 0xf) + 0x37;
        if ((byte)uVar2 < 10) {
          bVar12 = (byte)(uVar2 >> 8) | 0x30;
        }
        uVar5 = uVar5 >> 4;
        abStack_35[uVar11 + 1] = bVar12;
        uVar11 = uVar11 - 1;
      } while (uVar5 != 0);
    }
    pvStack_5c = (HANDLE)0x101085ab;
    hObject = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)pbVar14);
    if (hObject != (byte *)0x0) {
      pbVar6 = (byte *)0x0;
      LOCK();
      bVar15 = DAT_101633a8 != (byte *)0x0;
      pbVar14 = hObject;
      if (bVar15) {
        pbVar6 = DAT_101633a8;
        pbVar14 = DAT_101633a8;
      }
      DAT_101633a8 = pbVar14;
      UNLOCK();
      pbVar14 = hObject;
      if (bVar15) {
        CloseHandle(hObject);
        pbVar14 = pbVar6;
      }
      goto LAB_10108485;
    }
  }
  else {
LAB_10108485:
    pvStack_5c = (HANDLE)0x10108490;
    WaitForSingleObjectEx(pbVar14,0xffffffff,0);
    if ((DAT_1016330c != (HMODULE)0x0) ||
       (DAT_1016330c = LoadLibraryA("dbghelp.dll"), DAT_1016330c != (HMODULE)0x0)) {
      uVar10 = 0;
      if (DAT_101633a5 != '\0') goto LAB_101085dd;
      pFVar4 = DAT_10163310;
      if (((DAT_10163310 != (FARPROC)0x0) ||
          (pFVar4 = GetProcAddress(DAT_1016330c,"SymGetOptions"), pFVar4 != (FARPROC)0x0)) &&
         ((DAT_10163310 = pFVar4, (*DAT_10163310)(), pFVar4 = DAT_10163314,
          DAT_10163314 != (FARPROC)0x0 ||
          (pFVar4 = GetProcAddress(DAT_1016330c,"SymSetOptions"), pFVar4 != (FARPROC)0x0)))) {
        DAT_10163314 = pFVar4;
        (*DAT_10163314)();
        pFVar4 = DAT_10163318;
        if (DAT_10163318 == (FARPROC)0x0) {
          pvStack_5c = (HANDLE)0x10108530;
          pFVar4 = GetProcAddress(DAT_1016330c,"SymInitializeW");
          if (pFVar4 == (FARPROC)0x0) goto LAB_10108538;
        }
        DAT_10163318 = pFVar4;
        pFVar4 = DAT_10163318;
        pvStack_5c = GetCurrentProcess();
        (*pFVar4)();
        pvStack_5c = (HANDLE)0x0;
        lpString = (LPCWSTR)0x2;
        iVar17 = 0;
        FUN_101359e0((uint *)&pvStack_5c,0,0x400,(LPVOID)0x2,2);
        pWVar16 = lpString;
        memset(lpString + iVar17,0,0x7fe);
        lpString[iVar17 + 0x3ff] = L'\0';
        pvVar13 = (HANDLE)(iVar17 + 0x400);
        pFVar4 = DAT_1016331c;
        pvVar9 = pvVar13;
        if ((DAT_1016331c != (FARPROC)0x0) ||
           (pFVar4 = GetProcAddress(DAT_1016330c,"SymGetSearchPathW"), pvVar7 = pvStack_5c,
           pFVar4 != (FARPROC)0x0)) {
          DAT_1016331c = pFVar4;
          pFVar4 = DAT_1016331c;
          pvVar7 = GetCurrentProcess();
          iVar17 = (*pFVar4)(pvVar7,lpString,pvVar13);
          if (iVar17 == 1) {
            pvVar8 = (HANDLE)lstrlenW(lpString);
            if ((int)pvVar8 < 0) {
              FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10158208);
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (pvVar13 < pvVar8) {
              pvVar8 = pvVar9;
            }
          }
          else {
            if (pvStack_5c == (HANDLE)0x0) {
              FUN_1013c000((uint *)&pvStack_5c);
              *pWVar16 = L'.';
              lpString = pWVar16;
            }
            else {
              *lpString = L'.';
            }
            if (pvStack_5c == (HANDLE)0x1) {
              lpString = pWVar16;
              FUN_1013c000((uint *)&pvStack_5c);
              pWVar16 = lpString;
            }
            lpString[1] = L';';
            pvVar8 = (HANDLE)0x2;
          }
          pvVar7 = pvStack_5c;
          uVar3 = CONCAT44(pWVar16,pvStack_5c);
          pFVar4 = DAT_10163324;
          if ((DAT_10163324 != (FARPROC)0x0) ||
             (pFVar4 = GetProcAddress(DAT_1016330c,"EnumerateLoadedModulesW64"), lpString = pWVar16,
             pFVar4 != (FARPROC)0x0)) {
            DAT_10163324 = pFVar4;
            pFVar4 = DAT_10163324;
            pvVar9 = GetCurrentProcess();
            (*pFVar4)(pvVar9,&LAB_10109c20,&stack0xffffffb0);
            uStack_44 = uVar3;
            pvStack_3c = pvVar8;
            if (pvVar8 == pvVar7) {
              FUN_1013c000((uint *)&uStack_44);
              pvVar7 = (HANDLE)uStack_44;
            }
            lpString = uStack_44._4_4_;
            uStack_44._4_4_[(int)pvVar8] = L'\0';
            pFVar4 = DAT_10163320;
            if ((DAT_10163320 != (FARPROC)0x0) ||
               (pFVar4 = GetProcAddress(DAT_1016330c,"SymSetSearchPathW"), pFVar4 != (FARPROC)0x0))
            {
              DAT_10163320 = pFVar4;
              pFVar4 = DAT_10163320;
              pvVar9 = GetCurrentProcess();
              (*pFVar4)(pvVar9,lpString);
            }
          }
        }
        if (pvVar7 != (HANDLE)0x0) {
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,lpString);
        }
      }
LAB_10108538:
      uVar10 = 0;
      DAT_101633a5 = '\x01';
      goto LAB_101085dd;
    }
    ReleaseMutex(pbVar14);
  }
  uVar10 = 1;
LAB_101085dd:
  return CONCAT44(pbVar14,uVar10);
}
