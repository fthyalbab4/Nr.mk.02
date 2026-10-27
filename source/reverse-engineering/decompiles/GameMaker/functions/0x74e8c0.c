// rea decompile_all
// name: FUN_0074e8c0
// address: 0x74e8c0
// body: available
// range: 0x74e8c0-0x74e909 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074e8c0(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 local_e4 [28];
  uint local_c8;

  FUN_0074de5c(*(undefined4 *)(param_4 + -4),local_e4);
  if ((local_c8 <= param_1) && (param_1 < *(int *)(*(int *)(param_4 + -4) + 0x48) + local_c8)) {
    param_1 = param_1 - local_c8;
  }
  FUN_0074e8a0(*(undefined4 *)(param_4 + -4),param_1);
  return;
}
