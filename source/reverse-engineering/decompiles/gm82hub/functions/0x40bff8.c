// rea decompile_all
// name: FUN_0040bff8
// address: 0x40bff8
// body: available
// range: 0x40bff8-0x40c040 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bff8(int param_1)

{
  _tls_index = 0;
  _DAT_0067ca34 = GetModuleHandleW((LPCWSTR)0x0);
  _DAT_0067ca38 = 0;
  _DAT_0067ca3c = 0;
  _DAT_0067ca44 = param_1 + 8;
  DAT_0068cc40 = _DAT_0067ca34;
  FUN_0040bfec();
  FUN_00406e1c(param_1,&DAT_0067ca30);
  return;
}
