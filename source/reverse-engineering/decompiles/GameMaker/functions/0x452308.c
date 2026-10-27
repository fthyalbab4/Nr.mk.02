// rea decompile_all
// name: FUN_00452308
// address: 0x452308
// body: available
// range: 0x452308-0x45232d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00452308(int param_1)

{
  undefined4 uVar1;

  if (param_1 == 1) {
    return 1;
  }
  if (param_1 == 2) {
    uVar1 = 2;
  }
  else if (param_1 == 4) {
    uVar1 = 3;
  }
  else if (param_1 == 3) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
