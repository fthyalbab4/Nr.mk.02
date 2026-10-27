// rea decompile_all
// name: FUN_00536a68
// address: 0x536a68
// body: available
// range: 0x536a68-0x536ada inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00536a68(void)

{
  HMODULE pHVar1;

  pHVar1 = GetModuleHandleW(L"ole32.dll");
  if (pHVar1 != (HMODULE)0x0) {
    DAT_00684854 = FUN_0040deb0();
    DAT_00684858 = FUN_0040deb0();
    _DAT_0068485c = FUN_0040deb0();
    _DAT_00684860 = FUN_0040deb0();
    _DAT_00684864 = FUN_0040deb0();
    _DAT_00684868 = FUN_0040deb0();
  }
  return;
}
