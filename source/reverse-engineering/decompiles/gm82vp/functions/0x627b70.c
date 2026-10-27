// rea decompile_all
// name: FUN_00627b70
// address: 0x627b70
// body: available
// range: 0x627b70-0x627bae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00627b70(void)

{
  DAT_0085b434 = LoadLibraryW((LPCWSTR)&PTR_DAT_00627bb0);
  if ((HMODULE)0x1f < DAT_0085b434) {
    DAT_00688700 = (code *)FUN_0040deb0();
    if (DAT_00688700 != (code *)0x0) {
      (*DAT_00688700)();
    }
  }
  return;
}
