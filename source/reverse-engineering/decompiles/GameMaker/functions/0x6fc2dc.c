// rea decompile_all
// name: FUN_006fc2dc
// address: 0x6fc2dc
// body: available
// range: 0x6fc2dc-0x6fc30e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fc2dc(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x3b0) + 0x2a0) != *(int *)(*(int *)(param_1 + 1000) + 0x10)) {
    FUN_005a8740();
    FUN_006fce00(*(undefined4 *)(param_1 + 0x3f8));
    *(undefined1 *)(param_1 + 0x3f4) = 1;
  }
  return;
}
