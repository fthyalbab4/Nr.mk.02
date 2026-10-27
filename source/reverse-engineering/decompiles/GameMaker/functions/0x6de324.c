// rea decompile_all
// name: FUN_006de324
// address: 0x6de324
// body: available
// range: 0x6de324-0x6de419 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006de324(int param_1)

{
  FUN_004edce0(*(undefined4 *)(param_1 + 0x5fc),0x104);
  FUN_004edcac(*(int *)(param_1 + 0x60c),
               (*(int *)(*(int *)(param_1 + 0x5fc) + 0x4c) -
               *(int *)(*(int *)(param_1 + 0x60c) + 0x4c)) + -4);
  FUN_004edcac(*(int *)(param_1 + 0x618),
               (*(int *)(*(int *)(param_1 + 0x60c) + 0x44) -
               *(int *)(*(int *)(param_1 + 0x618) + 0x4c)) + -4);
  FUN_004edcac(*(int *)(param_1 + 0x614),
               (*(int *)(*(int *)(param_1 + 0x60c) + 0x44) -
               *(int *)(*(int *)(param_1 + 0x614) + 0x4c)) + -8);
  FUN_004edcac(*(int *)(param_1 + 0x600),
               (*(int *)(*(int *)(param_1 + 0x618) + 0x44) -
               *(int *)(*(int *)(param_1 + 0x600) + 0x4c)) + -4);
  FUN_004edcac(*(undefined4 *)(param_1 + 0x604),*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x44));
  FUN_004edcac(*(undefined4 *)(param_1 + 0x608),*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x44));
  FUN_004edc78(*(undefined4 *)(param_1 + 0x610),4);
  FUN_004edcac(*(undefined4 *)(param_1 + 0x610),4);
  FUN_004edce0(*(undefined4 *)(param_1 + 0x610),*(int *)(*(int *)(param_1 + 0x5fc) + 0x48) + -8);
  FUN_004edd14(*(int *)(param_1 + 0x610),
               (*(int *)(*(int *)(param_1 + 0x600) + 0x44) -
               *(int *)(*(int *)(param_1 + 0x610) + 0x44)) + -8);
  return;
}
