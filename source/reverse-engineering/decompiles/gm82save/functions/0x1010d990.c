// rea decompile_all
// name: FUN_1010d990
// address: 0x1010d990
// body: available
// range: 0x1010d990-0x1010da3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_1010d990(char *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *lpMem;
  HANDLE hHeap;
  undefined4 uVar3;
  DWORD dwTlsIndex;

  if (DAT_1016312c == 0) {
    dwTlsIndex = FUN_1013be20(&DAT_1016312c);
    puVar2 = TlsGetValue(dwTlsIndex);
  }
  else {
    dwTlsIndex = DAT_1016312c - 1;
    puVar2 = TlsGetValue(dwTlsIndex);
  }
  if ((undefined4 *)0x1 < puVar2) {
    return puVar2;
  }
  if (puVar2 == (undefined4 *)0x1) {
    return (undefined4 *)0x0;
  }
  if (param_1 != (char *)0x0) {
    uVar3 = *(undefined4 *)(param_1 + 4);
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    if (*param_1 != '\0') goto LAB_1010d9c3;
  }
  uVar3 = 0;
LAB_1010d9c3:
  puVar2 = FUN_10107380(0,8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = uVar3;
    puVar2[1] = dwTlsIndex;
    lpMem = TlsGetValue(dwTlsIndex);
    TlsSetValue(dwTlsIndex,puVar2);
    if (lpMem != (undefined4 *)0x0) {
      FUN_1010d190(lpMem);
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
    }
    return puVar2;
  }
  FUN_1013679e(4,8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
