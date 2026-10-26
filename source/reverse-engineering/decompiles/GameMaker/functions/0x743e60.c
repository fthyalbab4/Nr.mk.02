// rea decompile_all
// name: FUN_00743e60
// address: 0x743e60
// body: available
// range: 0x743e60-0x743e92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00743e60(int param_1)

{
  if (param_1 < 0x81) {
    if (param_1 == 0x80) {
      return 0;
    }
    if (param_1 == -1) {
      return 1;
    }
    if (param_1 == 0) {
      return 3;
    }
  }
  else {
    if (param_1 == 0xc0) {
      return 2;
    }
    if (param_1 == 0x102) {
      return 4;
    }
  }
  return 1;
}
