// rea decompile_all
// name: FUN_0040bd84
// address: 0x40bd84
// body: available
// range: 0x40bd84-0x40bdcc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bd84(int param_1)

{
  _tls_index = 0;
  _DAT_00773a24 = GetModuleHandleW((LPCWSTR)0x0);
  _DAT_00773a28 = 0;
  _DAT_00773a2c = 0;
  _DAT_00773a34 = param_1 + 8;
  DAT_00785c40 = _DAT_00773a24;
  FUN_0040bd78();
  FUN_00406980(param_1,&DAT_00773a20);
  return;
}
