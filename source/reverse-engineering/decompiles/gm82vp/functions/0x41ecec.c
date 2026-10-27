// rea decompile_all
// name: FUN_0041ecec
// address: 0x41ecec
// body: available
// range: 0x41ecec-0x41ed21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041ecec(void)

{
  HMODULE pHVar1;

  pHVar1 = GetModuleHandleW(L"kernel32.dll");
  if (pHVar1 != (HMODULE)0x0) {
    DAT_0067cbf0 = (undefined1 *)FUN_0040deb0();
  }
  if (DAT_0067cbf0 == (undefined1 *)0x0) {
    DAT_0067cbf0 = &LAB_00417484;
  }
  return;
}
