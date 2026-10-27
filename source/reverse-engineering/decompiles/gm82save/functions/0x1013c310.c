// rea decompile_all
// name: FUN_1013c310
// address: 0x1013c310
// body: available
// range: 0x1013c310-0x1013c3f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1013c310(void)

{
  code *pcVar1;
  int *piVar2;
  undefined1 *lpTlsValue;
  LPVOID lpMem;
  HANDLE hHeap;
  undefined4 *puVar3;
  DWORD dwTlsIndex;

  piVar2 = FUN_1010c910();
  if (DAT_1016315c == 0) {
    dwTlsIndex = FUN_1013be20(&DAT_1016315c);
  }
  else {
    dwTlsIndex = DAT_1016315c - 1;
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue < (undefined1 *)0x2) {
    if (lpTlsValue == (undefined1 *)0x1) {
      FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
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
  puVar3 = FUN_10107380(0,0x18);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = 1;
    puVar3[2] = piVar2;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = lpTlsValue;
    return;
  }
  FUN_1013679e(4,0x18);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
