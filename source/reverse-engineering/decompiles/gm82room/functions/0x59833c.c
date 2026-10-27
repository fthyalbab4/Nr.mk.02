// rea decompile_all
// name: FUN_0059833c
// address: 0x59833c
// body: available
// range: 0x59833c-0x5983bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059833c(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_00596e9c(param_1 + 0x304,param_2 + 1,param_3 + 1);
  }
  FUN_0059ad90(param_1,param_1 + 0x28c,param_2,param_3);
  FUN_0059ad90(param_1,param_1 + 0x27c,param_2,param_3);
  FUN_0059ad90(param_1,param_1 + 0x2f4,param_2,param_3);
  FUN_00406268(param_1,param_2,param_3);
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_00406268(param_1);
  }
  FUN_0059d37c(param_1);
  return;
}
