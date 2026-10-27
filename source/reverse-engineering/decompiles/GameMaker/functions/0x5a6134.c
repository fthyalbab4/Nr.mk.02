// rea decompile_all
// name: FUN_005a6134
// address: 0x5a6134
// body: available
// range: 0x5a6134-0x5a62d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005a6134(void)

{
  if (DAT_00789ae0 == (HMODULE)0x0) {
    DAT_00789ae0 = GetModuleHandleW(L"kernel32.dll");
    if (DAT_00789ae0 != (HMODULE)0x0) {
      DAT_00789ae4 = FUN_0040dcb4();
      _DAT_00789ae8 = FUN_0040dcb4();
      _DAT_00789aec = FUN_0040dcb4();
      _DAT_00789af0 = FUN_0040dcb4();
      _DAT_00789af4 = FUN_0040dcb4();
      _DAT_00789af8 = FUN_0040dcb4();
      _DAT_00789b04 = FUN_0040dcb4();
      _DAT_00789b08 = FUN_0040dcb4();
      _DAT_00789b0c = FUN_0040dcb4();
      _DAT_00789b10 = FUN_0040dcb4();
      DAT_00789afc = FUN_0040dcb4();
      DAT_00789b00 = FUN_0040dcb4();
      _DAT_00789b14 = FUN_0040dcb4();
      _DAT_00789b18 = FUN_0040dcb4();
      _DAT_00789b24 = FUN_0040dcb4();
      _DAT_00789b28 = FUN_0040dcb4();
      _DAT_00789b2c = FUN_0040dcb4();
      _DAT_00789b30 = FUN_0040dcb4();
      DAT_00789b1c = FUN_0040dcb4();
      DAT_00789b20 = FUN_0040dcb4();
    }
  }
  if ((DAT_00789ae0 != (HMODULE)0x0) && (DAT_00789ae4 != 0)) {
    return 1;
  }
  return 0;
}
