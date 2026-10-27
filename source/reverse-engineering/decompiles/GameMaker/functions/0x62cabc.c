// rea decompile_all
// name: FUN_0062cabc
// address: 0x62cabc
// body: available
// range: 0x62cabc-0x62cb33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062cabc(int param_1,undefined4 param_2)

{
  FUN_00407eb8(param_2,L"<undefined>");
  if (param_1 == -1) {
    FUN_00407eb8(param_2,L"self");
    return;
  }
  if (param_1 == -2) {
    FUN_00407eb8(param_2,L"other");
    return;
  }
  if (param_1 == -100) {
    FUN_00407eb8(param_2,L"<undefined>");
    return;
  }
  if (((-1 < param_1) && (param_1 < DAT_0077f0e0)) && (*(int *)(DAT_0077f0d0 + param_1 * 4) != 0)) {
    FUN_00407eb8(param_2,*(undefined4 *)(DAT_0077f0d8 + param_1 * 4));
  }
  return;
}
