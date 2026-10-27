// rea decompile_all
// name: thunk_FUN_0040629c
// address: 0x406298
// body: available
// range: 0x406298-0x406299 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 thunk_FUN_0040629c(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return 1;
    }
    if (*(int **)(param_1 + -0x30) == (int *)0x0) break;
    param_1 = **(int **)(param_1 + -0x30);
  }
  return 0;
}
