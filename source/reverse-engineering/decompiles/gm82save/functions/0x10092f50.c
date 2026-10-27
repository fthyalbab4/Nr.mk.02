// rea decompile_all
// name: FUN_10092f50
// address: 0x10092f50
// body: available
// range: 0x10092f50-0x10093003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_10092f50(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *lpTlsValue;
  undefined4 *puVar3;
  HANDLE hHeap;
  DWORD dwTlsIndex;
  bool bVar4;

  if (DAT_101630a8 == 0) {
    dwTlsIndex = FUN_1013be20(&DAT_101630a8);
    lpTlsValue = TlsGetValue(dwTlsIndex);
  }
  else {
    dwTlsIndex = DAT_101630a8 - 1;
    lpTlsValue = TlsGetValue(dwTlsIndex);
  }
  if ((lpTlsValue < (undefined4 *)0x2) &&
     (bVar4 = lpTlsValue != (undefined4 *)0x1, lpTlsValue = (undefined4 *)0x0, bVar4)) {
    puVar3 = FUN_10136d40();
    lpTlsValue = FUN_10107380(0,8);
    if (lpTlsValue == (undefined4 *)0x0) {
      FUN_1013679e(4,8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *lpTlsValue = puVar3;
    lpTlsValue[1] = dwTlsIndex;
    puVar3 = TlsGetValue(dwTlsIndex);
    TlsSetValue(dwTlsIndex,lpTlsValue);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = (int *)*puVar3;
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          FUN_1009dc30((LPVOID)*puVar3);
        }
      }
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,puVar3);
    }
  }
  return lpTlsValue;
}
