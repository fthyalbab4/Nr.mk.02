// rea decompile_all
// name: FUN_0053e9a4
// address: 0x53e9a4
// body: available
// range: 0x53e9a4-0x53eb45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0053e9a4(void)

{
  if (DAT_006903bc == (HMODULE)0x0) {
    DAT_006903bc = GetModuleHandleW(L"kernel32.dll");
    if (DAT_006903bc != (HMODULE)0x0) {
      DAT_006903c0 = FUN_0040deb0();
      _DAT_006903c4 = FUN_0040deb0();
      _DAT_006903c8 = FUN_0040deb0();
      _DAT_006903cc = FUN_0040deb0();
      _DAT_006903d0 = FUN_0040deb0();
      _DAT_006903d4 = FUN_0040deb0();
      _DAT_006903e0 = FUN_0040deb0();
      _DAT_006903e4 = FUN_0040deb0();
      _DAT_006903e8 = FUN_0040deb0();
      _DAT_006903ec = FUN_0040deb0();
      _DAT_006903d8 = FUN_0040deb0();
      _DAT_006903dc = FUN_0040deb0();
      _DAT_006903f0 = FUN_0040deb0();
      _DAT_006903f4 = FUN_0040deb0();
      _DAT_00690400 = FUN_0040deb0();
      _DAT_00690404 = FUN_0040deb0();
      _DAT_00690408 = FUN_0040deb0();
      _DAT_0069040c = FUN_0040deb0();
      DAT_006903f8 = FUN_0040deb0();
      DAT_006903fc = FUN_0040deb0();
    }
  }
  if ((DAT_006903bc != (HMODULE)0x0) && (DAT_006903c0 != 0)) {
    return 1;
  }
  return 0;
}
