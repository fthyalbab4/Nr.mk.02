// rea decompile_all
// name: FUN_0053e434
// address: 0x53e434
// body: available
// range: 0x53e434-0x53e5fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0053e434(void)

{
  if (DAT_0069035c == (HMODULE)0x0) {
    DAT_0069035c = LoadLibraryW(L"PSAPI.dll");
    if (DAT_0069035c < (HMODULE)0x20) {
      DAT_0069035c = (HMODULE)0x0;
      return 0;
    }
    _DAT_00690360 = FUN_0040deb0();
    DAT_00690364 = FUN_0040deb0();
    _DAT_00690368 = FUN_0040deb0();
    DAT_0069036c = FUN_0040deb0();
    _DAT_00690370 = FUN_0040deb0();
    _DAT_00690374 = FUN_0040deb0();
    _DAT_00690378 = FUN_0040deb0();
    _DAT_0069037c = FUN_0040deb0();
    DAT_00690380 = FUN_0040deb0();
    _DAT_00690384 = FUN_0040deb0();
    _DAT_00690388 = FUN_0040deb0();
    _DAT_0069038c = FUN_0040deb0();
    _DAT_00690390 = FUN_0040deb0();
    _DAT_00690394 = FUN_0040deb0();
    _DAT_00690398 = FUN_0040deb0();
    _DAT_0069039c = FUN_0040deb0();
    _DAT_006903a0 = FUN_0040deb0();
    _DAT_006903a4 = FUN_0040deb0();
    _DAT_006903a8 = FUN_0040deb0();
    _DAT_006903ac = FUN_0040deb0();
    _DAT_006903b0 = FUN_0040deb0();
    _DAT_006903b4 = FUN_0040deb0();
    _DAT_006903b8 = FUN_0040deb0();
  }
  return 1;
}
