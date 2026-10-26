// rea decompile_all
// name: FUN_004a248c
// address: 0x4a248c
// body: available
// range: 0x4a248c-0x4a25ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a248c(void)

{
  HMODULE pHVar1;

  pHVar1 = GetModuleHandleW(L"comctl32.dll");
  if (pHVar1 != (HMODULE)0x0) {
    _DAT_0068f22c = FUN_0040deb0();
    _DAT_0068f230 = FUN_0040deb0();
    _DAT_0068f224 = FUN_0040deb0();
    _DAT_0068f228 = FUN_0040deb0();
    _DAT_0068f200 = (undefined **)FUN_0040deb0();
    if (_DAT_0068f200 == (undefined **)0x0) {
      _DAT_0068f200 = &PTR_DAT_0040e6c0;
    }
    _DAT_0068f204 = (undefined *)FUN_0040deb0();
    if (_DAT_0068f204 == (undefined *)0x0) {
      _DAT_0068f204 = &DAT_0040eb84;
    }
    _DAT_0068f208 = (code *)FUN_0040deb0();
    if (_DAT_0068f208 == (code *)0x0) {
      _DAT_0068f208 = GetScrollRange;
    }
    _DAT_0068f20c = (undefined *)FUN_0040deb0();
    if (_DAT_0068f20c == (undefined *)0x0) {
      _DAT_0068f20c = &DAT_0040e858;
    }
    _DAT_0068f210 = (code *)FUN_0040deb0();
    if (_DAT_0068f210 == (code *)0x0) {
      _DAT_0068f210 = GetScrollPos;
    }
    _DAT_0068f214 = (code *)FUN_0040deb0();
    if (_DAT_0068f214 == (code *)0x0) {
      _DAT_0068f214 = SetScrollPos;
    }
    _DAT_0068f218 = (undefined *)FUN_0040deb0();
    if (_DAT_0068f218 == (undefined *)0x0) {
      _DAT_0068f218 = &DAT_0040eb2c;
    }
    _DAT_0068f21c = (code *)FUN_0040deb0();
    if (_DAT_0068f21c == (code *)0x0) {
      _DAT_0068f21c = SetScrollRange;
    }
  }
  return;
}
