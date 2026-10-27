// rea decompile_all
// name: FUN_1011a5d0
// address: 0x1011a5d0
// body: available
// range: 0x1011a5d0-0x1011a64e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __fastcall FUN_1011a5d0(LPCWSTR param_1,DWORD param_2)

{
  code *pcVar1;
  LPWSTR lpBuffer;
  DWORD DVar2;
  int iVar3;
  HANDLE hHeap;
  bool bVar4;

  if ((param_2 == 0) || (param_1[param_2 - 1] != L'\0')) {
    bVar4 = false;
  }
  else {
    lpBuffer = FUN_10107380(0,param_2 * 2);
    if (lpBuffer == (LPWSTR)0x0) {
      FUN_101366bc(2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    DVar2 = GetFullPathNameW(param_1,param_2,lpBuffer,(LPWSTR *)0x0);
    if (DVar2 == param_2 - 1 && DVar2 != 0) {
      iVar3 = memcmp(param_1,lpBuffer,param_2 * 2);
      bVar4 = iVar3 == 0;
    }
    else {
      bVar4 = false;
    }
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpBuffer);
  }
  return bVar4;
}
