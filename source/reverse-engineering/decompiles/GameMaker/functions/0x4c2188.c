// rea decompile_all
// name: FUN_004c2188
// address: 0x4c2188
// body: available
// range: 0x4c2188-0x4c21db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c2188(int param_1,int param_2)

{
  if (*(int *)(param_1 + 700) != 0) {
    FUN_00508208(*(int *)(param_1 + 700),*(undefined4 *)(param_1 + 0x2c0));
  }
  *(int *)(param_1 + 700) = param_2;
  if (param_2 == 0) {
    FUN_004c2158(param_1,0);
  }
  else {
    FUN_0050824c(param_2,*(undefined4 *)(param_1 + 0x2c0));
    FUN_00448f68(*(undefined4 *)(param_1 + 700),param_1);
  }
  FUN_004c2410(param_1);
  return;
}
