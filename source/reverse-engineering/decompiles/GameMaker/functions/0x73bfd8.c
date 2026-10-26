// rea decompile_all
// name: FUN_0073bfd8
// address: 0x73bfd8
// body: available
// range: 0x73bfd8-0x73c1a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0073bfd8(void)

{
  if (DAT_007a4fbc == (HMODULE)0x0) {
    DAT_007a4fbc = LoadLibraryW(L"PSAPI.dll");
    if (DAT_007a4fbc < (HMODULE)0x20) {
      DAT_007a4fbc = (HMODULE)0x0;
      return 0;
    }
    _DAT_007a4fc0 = FUN_0040dcb4();
    DAT_007a4fc4 = FUN_0040dcb4();
    _DAT_007a4fc8 = FUN_0040dcb4();
    DAT_007a4fcc = FUN_0040dcb4();
    _DAT_007a4fd0 = FUN_0040dcb4();
    _DAT_007a4fd4 = FUN_0040dcb4();
    _DAT_007a4fd8 = FUN_0040dcb4();
    _DAT_007a4fdc = FUN_0040dcb4();
    DAT_007a4fe0 = FUN_0040dcb4();
    _DAT_007a4fe4 = FUN_0040dcb4();
    _DAT_007a4fe8 = FUN_0040dcb4();
    _DAT_007a4fec = FUN_0040dcb4();
    _DAT_007a4ff0 = FUN_0040dcb4();
    _DAT_007a4ff4 = FUN_0040dcb4();
    _DAT_007a4ff8 = FUN_0040dcb4();
    _DAT_007a4ffc = FUN_0040dcb4();
    _DAT_007a5000 = FUN_0040dcb4();
    _DAT_007a5004 = FUN_0040dcb4();
    _DAT_007a5008 = FUN_0040dcb4();
    _DAT_007a500c = FUN_0040dcb4();
    _DAT_007a5010 = FUN_0040dcb4();
    _DAT_007a5014 = FUN_0040dcb4();
    _DAT_007a5018 = FUN_0040dcb4();
  }
  return 1;
}
