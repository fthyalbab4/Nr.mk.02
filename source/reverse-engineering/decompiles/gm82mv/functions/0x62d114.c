// rea decompile_all
// name: FUN_0062d114
// address: 0x62d114
// body: available
// range: 0x62d114-0x62d14c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062d114(int param_1)

{
  int in_stack_0000000c;

  if (*PTR_PTR_00689170 == '\0') {
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(in_stack_0000000c + 8);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(in_stack_0000000c + 0xc);
  }
  else {
    *(double *)(param_1 + 0x90) = *(double *)(in_stack_0000000c + 8) + *(double *)(param_1 + 0x90);
  }
  return;
}
