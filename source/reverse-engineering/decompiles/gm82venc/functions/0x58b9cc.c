// rea decompile_all
// name: FUN_0058b9cc
// address: 0x58b9cc
// body: available
// range: 0x58b9cc-0x58ba38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0058b9cc(void)

{
  int iVar1;

  for (iVar1 = 0; (iVar1 < DAT_00686b2c && (*(char *)(DAT_00686b28 + iVar1 * 0x120) != '\0'));
      iVar1 = iVar1 + 1) {
  }
  if (iVar1 == DAT_00686b2c) {
    FUN_00409dfc(&DAT_00686b28,&DAT_0058aae4,1,iVar1 + 1);
    DAT_00686b2c = iVar1 + 1;
  }
  *(undefined1 *)(DAT_00686b28 + iVar1 * 0x120) = 1;
  FUN_0058bab4(iVar1);
  return iVar1;
}
