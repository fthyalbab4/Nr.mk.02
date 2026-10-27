// rea decompile_all
// name: FUN_10093010
// address: 0x10093010
// body: available
// range: 0x10093010-0x100930ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_10093010(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined4 *lpTlsValue;
  LPVOID lpMem;
  HANDLE hHeap;
  DWORD dwTlsIndex;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  if (DAT_101631c0 == 0) {
    dwTlsIndex = FUN_1013be20(&DAT_101631c0);
    lpTlsValue = TlsGetValue(dwTlsIndex);
  }
  else {
    dwTlsIndex = DAT_101631c0 - 1;
    lpTlsValue = TlsGetValue(dwTlsIndex);
  }
  if (lpTlsValue < (undefined4 *)0x2) {
    if (lpTlsValue == (undefined4 *)0x1) {
      lpTlsValue = (undefined4 *)0x0;
    }
    else {
      local_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      BVar2 = SystemFunction036(&local_30,0x10);
      if (BVar2 == '\0') {
        FUN_101369c0("failed to generate random dataC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\std\\src\\sys\\random\\windows.rs"
                     ,0x3d,&DAT_101589e8);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_20 = local_30;
      uStack_1c = uStack_2c;
      uStack_18 = uStack_28;
      uStack_14 = uStack_24;
      lpTlsValue = FUN_10107380(0,0x18);
      if (lpTlsValue == (undefined4 *)0x0) {
        FUN_1013679e(8,0x18);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *lpTlsValue = local_20;
      lpTlsValue[1] = uStack_1c;
      lpTlsValue[2] = uStack_18;
      lpTlsValue[3] = uStack_14;
      lpTlsValue[4] = dwTlsIndex;
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
