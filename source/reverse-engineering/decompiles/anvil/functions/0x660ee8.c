// rea decompile_all
// name: FUN_00660ee8
// address: 0x660ee8
// body: available
// range: 0x660ee8-0x660f39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00660ee8(void)

{
  int iVar1;

  iVar1 = FUN_004048b8();
  if (((iVar1 < 0) || (DAT_00688840 <= iVar1)) || (*(int *)(DAT_0088e284 + iVar1 * 4) == 0)) {
    FUN_0061156c(&PTR_DAT_00660f48,0);
  }
  else {
    FUN_00405fdc(*(undefined4 *)(DAT_0088e284 + iVar1 * 4));
    *(undefined4 *)(DAT_0088e284 + iVar1 * 4) = 0;
  }
  return;
}
