// rea decompile_all
// name: FUN_100bd860
// address: 0x100bd860
// body: available
// range: 0x100bd860-0x100bd8e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_100bd860(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int local_18;
  int local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int *local_8;
  undefined1 *local_4;

  local_10 = (undefined1 *)&local_18;
  piVar1 = *(int **)*param_1;
  if (*piVar1 == 0) {
    local_18 = piVar1[1];
    local_14 = piVar1[2];
    local_8 = &local_14;
    local_c = &LAB_10096fc0;
    local_4 = &LAB_10096fc0;
    FUN_10093d70(*param_2,param_2[1],(ushort *)&DAT_10151210,(uint)&local_10);
    return;
  }
  if (*piVar1 == 1) {
    (**(code **)(param_2[1] + 0xc))(*param_2,"End of image has been reached",0x1d);
    return;
  }
  (**(code **)(param_2[1] + 0xc))
            (*param_2,
             "A fatal decoding error has been encounted earlierGrayscaleRgbIndexedGrayscaleAlphaRgba"
             ,0x31);
  return;
}
