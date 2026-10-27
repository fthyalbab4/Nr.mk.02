// rea decompile_all
// name: FUN_004abf34
// address: 0x4abf34
// body: available
// range: 0x4abf34-0x4abf5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004abf34(int param_1)

{
  if (*(char *)(param_1 + 0x27f) != '\0') {
    FUN_004ee79c(param_1,*(undefined4 *)(*(int *)PTR_DAT_007828e0 + 0x7c));
    FUN_0045b0d0(*(undefined4 *)(param_1 + 100),0xff000012);
  }
  return;
}
