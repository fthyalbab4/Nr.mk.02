// rea decompile_all
// name: FUN_004d53dc
// address: 0x4d53dc
// body: available
// range: 0x4d53dc-0x4d553c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d53dc(void)

{
  HMODULE pHVar1;

  pHVar1 = GetModuleHandleW(L"comctl32.dll");
  if (pHVar1 != (HMODULE)0x0) {
    _DAT_00788230 = FUN_0040dcb4();
    _DAT_00788234 = FUN_0040dcb4();
    _DAT_00788228 = FUN_0040dcb4();
    _DAT_0078822c = FUN_0040dcb4();
    _DAT_00788204 = (undefined *)FUN_0040dcb4();
    if (_DAT_00788204 == (undefined *)0x0) {
      _DAT_00788204 = &DAT_0040e4c8;
    }
    _DAT_00788208 = (undefined *)FUN_0040dcb4();
    if (_DAT_00788208 == (undefined *)0x0) {
      _DAT_00788208 = &DAT_0040e9bc;
    }
    _DAT_0078820c = (code *)FUN_0040dcb4();
    if (_DAT_0078820c == (code *)0x0) {
      _DAT_0078820c = GetScrollRange;
    }
    _DAT_00788210 = (code *)FUN_0040dcb4();
    if (_DAT_00788210 == (code *)0x0) {
      _DAT_00788210 = GetScrollInfo;
    }
    _DAT_00788214 = (code *)FUN_0040dcb4();
    if (_DAT_00788214 == (code *)0x0) {
      _DAT_00788214 = GetScrollPos;
    }
    _DAT_00788218 = (code *)FUN_0040dcb4();
    if (_DAT_00788218 == (code *)0x0) {
      _DAT_00788218 = SetScrollPos;
    }
    _DAT_0078821c = (code *)FUN_0040dcb4();
    if (_DAT_0078821c == (code *)0x0) {
      _DAT_0078821c = SetScrollInfo;
    }
    _DAT_00788220 = (code *)FUN_0040dcb4();
    if (_DAT_00788220 == (code *)0x0) {
      _DAT_00788220 = SetScrollRange;
    }
  }
  return;
}
