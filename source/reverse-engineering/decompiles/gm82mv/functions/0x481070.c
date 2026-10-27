// rea decompile_all
// name: FUN_00481070
// address: 0x481070
// body: available
// range: 0x481070-0x4810cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00481070(uint param_1)

{
  param_1 = param_1 & 0xff;
  if (param_1 < 0xf0) {
    if (param_1 < 0x80) {
      return 1;
    }
    if (param_1 - 0xc2 < 0x1e) {
      return 2;
    }
    if (param_1 - 0xe0 < 0x10) {
      return 3;
    }
  }
  else {
    if (param_1 - 0xf0 < 8) {
      return 4;
    }
    if (param_1 - 0xf8 < 4) {
      return 5;
    }
    if (param_1 - 0xfc < 2) {
      return 6;
    }
  }
  return 0;
}
