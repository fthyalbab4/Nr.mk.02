// rea decompile_all
// name: FUN_101386f0
// address: 0x101386f0
// body: available
// range: 0x101386f0-0x10138811 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_101386f0(void)

{
  code *pcVar1;
  int *piVar2;
  FARPROC in_EAX;
  HMODULE pHVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  int iVar6;
  int *lpMem;
  int *piVar7;
  HANDLE hHeap;
  FARPROC pFVar8;
  bool bVar9;
  FARPROC pFStack_14;

  pFStack_14 = in_EAX;
  pHVar3 = GetModuleHandleA("api-ms-win-core-synch-l1-2-0.dll");
  if (((pHVar3 == (HMODULE)0x0) ||
      (pFVar4 = GetProcAddress(pHVar3,"WaitOnAddress"), pFVar4 == (FARPROC)0x0)) ||
     (pFVar5 = GetProcAddress(pHVar3,"WakeByAddressSingle"), pFVar5 == (FARPROC)0x0)) {
    pHVar3 = GetModuleHandleA("ntdll.dll");
    if (((pHVar3 == (HMODULE)0x0) ||
        (pFVar5 = GetProcAddress(pHVar3,"NtCreateKeyedEvent"), pFVar5 == (FARPROC)0x0)) ||
       ((pFVar8 = GetProcAddress(pHVar3,"NtReleaseKeyedEvent"), pFVar8 == (FARPROC)0x0 ||
        ((pFVar4 = GetProcAddress(pHVar3,"NtWaitForKeyedEvent"), pFVar4 == (FARPROC)0x0 ||
         (iVar6 = (*pFVar5)(&pFStack_14,0xc0000000,0,0), pFVar5 = pFStack_14, iVar6 != 0)))))) {
      FUN_101369c0("parking_lot requires either NT Keyed Events (WinXP+) or WaitOnAddress/WakeByAddress (Win8+)C:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\parking_lot_core-0.9.12\\src\\thread_parker\\windows\\mod.rs"
                   ,0xb7,&DAT_1014febc);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    pFVar8 = (FARPROC)0x0;
  }
  lpMem = FUN_10107380(0,0xc);
  if (lpMem == (int *)0x0) {
    FUN_1013679e(4,0xc);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *lpMem = (int)pFVar8;
  lpMem[1] = (int)pFVar4;
  lpMem[2] = (int)pFVar5;
  piVar7 = (int *)0x0;
  LOCK();
  bVar9 = DAT_101632ec != (int *)0x0;
  piVar2 = lpMem;
  if (bVar9) {
    piVar7 = DAT_101632ec;
    piVar2 = DAT_101632ec;
  }
  DAT_101632ec = piVar2;
  UNLOCK();
  if (bVar9) {
    if (*lpMem != 0) {
      CloseHandle((HANDLE)lpMem[2]);
    }
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
    lpMem = piVar7;
  }
  return lpMem;
}
