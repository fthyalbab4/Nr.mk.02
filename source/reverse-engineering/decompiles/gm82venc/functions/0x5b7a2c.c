// rea decompile_all
// name: FUN_005b7a2c
// address: 0x5b7a2c
// body: available
// range: 0x5b7a2c-0x5b7a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b7a2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,double param_6,double param_7)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;

  FUN_0060d14c(param_1,param_2,param_3,param_7 - *(double *)(param_1 + 0x50));
  FUN_0060d180(param_1,extraout_EDX,extraout_ECX,param_6 - *(double *)(param_1 + 0x58));
  FUN_0060d118(param_1,extraout_EDX_00,extraout_ECX_00,param_4,param_5);
  return;
}
