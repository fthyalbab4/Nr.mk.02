// rea decompile_all
// name: FUN_100a8900
// address: 0x100a8900
// body: available
// range: 0x100a8900-0x100a8991 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_100a8900(void)

{
  code *pcVar1;
  undefined1 *lpTlsValue;
  LPVOID lpMem;
  HANDLE hHeap;
  DWORD dwTlsIndex;

  if (DAT_1016315c == 0) {
    dwTlsIndex = FUN_1013be20(&DAT_1016315c);
    lpTlsValue = TlsGetValue(dwTlsIndex);
  }
  else {
    dwTlsIndex = DAT_1016315c - 1;
    lpTlsValue = TlsGetValue(dwTlsIndex);
  }
  if (lpTlsValue < (undefined1 *)0x2) {
    if (lpTlsValue == (undefined1 *)0x1) {
      lpTlsValue = (undefined1 *)0x0;
    }
    else {
      lpTlsValue = FUN_10107380(0,8);
      if (lpTlsValue == (undefined1 *)0x0) {
        FUN_1013679e(4,8);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *lpTlsValue = 0;
      *(DWORD *)(lpTlsValue + 4) = dwTlsIndex;
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
