// rea decompile_all
// name: FUN_10092e90
// address: 0x10092e90
// body: available
// range: 0x10092e90-0x10092f4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_10092e90(void)

{
  code *pcVar1;
  int iVar2;
  int *lpTlsValue;
  LPVOID lpMem;
  HANDLE hHeap;
  DWORD dwTlsIndex;

  if (DAT_10163114 == 0) {
    dwTlsIndex = FUN_1013be20(&DAT_10163114);
    lpTlsValue = TlsGetValue(dwTlsIndex);
    iVar2 = DAT_10163124;
  }
  else {
    dwTlsIndex = DAT_10163114 - 1;
    lpTlsValue = TlsGetValue(dwTlsIndex);
    iVar2 = DAT_10163124;
  }
  DAT_10163124 = iVar2;
  if (lpTlsValue < (int *)0x2) {
    if (lpTlsValue == (int *)0x1) {
      lpTlsValue = (int *)0x0;
    }
    else {
      LOCK();
      DAT_10163124 = iVar2 + 1;
      UNLOCK();
      if (iVar2 == 0) {
        FUN_101369c0("regex: thread ID allocation space exhausted",0x57,
                     &PTR_s_C__Users_runneradmin__cargo_regi_101431cc);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lpTlsValue = FUN_10107380(0,8);
      if (lpTlsValue == (int *)0x0) {
        FUN_1013679e(4,8);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *lpTlsValue = iVar2;
      lpTlsValue[1] = dwTlsIndex;
      lpMem = TlsGetValue(dwTlsIndex);
      TlsSetValue(dwTlsIndex,lpTlsValue);
      if (lpMem != (LPVOID)0x0) {
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,lpMem);
      }
    }
  }
  return lpTlsValue;
}
