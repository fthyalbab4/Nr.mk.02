// rea decompile_all
// name: FUN_1002c180
// address: 0x1002c180
// body: available
// range: 0x1002c180-0x1002c1d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1002c180(SIZE_T *param_1,void *param_2,SIZE_T param_3)

{
  code *pcVar1;
  LPVOID _Dst;

  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  _Dst = FUN_10107380(0,param_3);
  if (_Dst != (LPVOID)0x0) {
    *param_1 = param_3;
    param_1[1] = (SIZE_T)_Dst;
    memcpy(_Dst,param_2,param_3);
    param_1[2] = param_3;
    return;
  }
  FUN_101366bc(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
