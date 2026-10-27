// rea decompile_all
// name: FUN_0070e8f4
// address: 0x70e8f4
// body: available
// range: 0x70e8f4-0x70e938 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070e8f4(undefined4 param_1)

{
  float10 in_ST0;

  DAT_007909f0 = FUN_0052f114(param_1);
  FUN_0052f038(param_1);
  _DAT_007909e8 = (double)in_ST0;
  if (DAT_007909f0 != '\0') {
    _DAT_007909e4 = FUN_00405a4c(&LAB_0052e8fc,1);
    _DAT_007909e4 = FUN_0052f258(param_1);
  }
  return;
}
