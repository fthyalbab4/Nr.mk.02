// rea decompile_all
// name: FUN_1013c290
// address: 0x1013c290
// body: available
// range: 0x1013c290-0x1013c300 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1013c290(void)

{
  code *pcVar1;
  BOOL BVar2;
  LARGE_INTEGER local_18;
  undefined4 local_10;
  DWORD local_c;

  local_18.s.HighPart = 0;
  local_18.s.LowPart = 0;
  BVar2 = QueryPerformanceFrequency(&local_18);
  if (BVar2 != 0) {
    DAT_101633b8 = CONCAT44(local_18.s.HighPart,local_18.s.LowPart);
    return CONCAT44(local_18.s.HighPart,local_18.s.LowPart);
  }
  local_c = GetLastError();
  local_10 = 0;
  FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_10,&PTR_FUN_101569a8,
               &PTR_s_C__Users_runneradmin__rustup_too_10158de8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
