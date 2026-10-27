// rea decompile_all
// name: FUN_007400c0
// address: 0x7400c0
// body: available
// range: 0x7400c0-0x7400f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007400c0(void)

{
  DAT_007a5034 = FUN_00743f80(&LAB_00743930,1);
  if ((*PTR_DAT_00782944 & 2) != 0) {
    _DAT_007a502c = FUN_0074006c;
    return;
  }
  _DAT_007a502c = (code *)&LAB_0073ff18;
  return;
}
