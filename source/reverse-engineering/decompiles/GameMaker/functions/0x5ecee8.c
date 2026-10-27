// rea decompile_all
// name: FUN_005ecee8
// address: 0x5ecee8
// body: available
// range: 0x5ecee8-0x5ecf67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ecee8(void)

{
  HMODULE pHVar1;

  if ((*(int *)PTR_DAT_00782944 == 2) && (4 < *(int *)PTR_DAT_00781bfc)) {
    pHVar1 = (HMODULE)FUN_005e031c(&DAT_0077db04,0);
    if (pHVar1 != (HMODULE)0x0) {
      FreeLibrary(pHVar1);
    }
    pHVar1 = (HMODULE)FUN_005e031c(&DAT_0077db0c,0);
    if (pHVar1 != (HMODULE)0x0) {
      FreeLibrary(pHVar1);
    }
    DAT_0077db00 = 0;
    DAT_0077dacc = 0;
    DAT_0077dad0 = 0;
    DAT_0077dad4 = 0;
    _DAT_0077daec = 0;
    _DAT_0077daf0 = 0;
    _DAT_0077daf4 = 0;
    _DAT_0077daf8 = 0;
    _DAT_0077dafc = 0;
  }
  return;
}
