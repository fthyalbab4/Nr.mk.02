// rea decompile_all
// name: FUN_0072276c
// address: 0x72276c
// body: available
// range: 0x72276c-0x7227a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0072276c(int param_1)

{
  int iVar1;

  iVar1 = FUN_00722628();
  if (((-1 < param_1) && (param_1 < DAT_0077f618)) && (*(int *)(DAT_0077f608 + param_1 * 4) != 0)) {
    FUN_00535828(*(undefined4 *)(DAT_0077f608 + iVar1 * 4),
                 *(undefined4 *)(DAT_0077f608 + param_1 * 4));
  }
  return iVar1;
}
