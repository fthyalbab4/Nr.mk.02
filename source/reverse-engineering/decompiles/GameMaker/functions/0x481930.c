// rea decompile_all
// name: FUN_00481930
// address: 0x481930
// body: available
// range: 0x481930-0x481a56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481930(int param_1)

{
  char cVar1;

  cVar1 = FUN_0041d030(5,1);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x29c) != -1)) {
    FUN_0050752c(*(undefined4 *)(param_1 + 0x2a8));
    FUN_00507d80(*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2a4),
                 *(undefined4 *)(param_1 + 0x29c));
    if (*(int *)(param_1 + 0x290) == -1) {
      FUN_00507d80(*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2a4),
                   *(undefined4 *)(param_1 + 0x29c));
    }
    else {
      FUN_00507d80(*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2a4),
                   *(int *)(param_1 + 0x290));
    }
    if (*(int *)(param_1 + 0x2b0) == -1) {
      FUN_00507d80(*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2a4),
                   *(undefined4 *)(param_1 + 0x29c));
    }
    else {
      FUN_00507d80(*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2a4),
                   *(int *)(param_1 + 0x2b0));
    }
    if (*(int *)(param_1 + 0x284) == -1) {
      FUN_00507d80(*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2a4),
                   *(undefined4 *)(param_1 + 0x29c));
    }
    else {
      FUN_00507d80(*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2a4),
                   *(int *)(param_1 + 0x284));
    }
    if (*(int *)(param_1 + 0x2b4) == -1) {
      FUN_00507d80(*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2a4),
                   *(undefined4 *)(param_1 + 0x29c));
    }
    else {
      FUN_00507d80(*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2a4),
                   *(int *)(param_1 + 0x2b4));
    }
  }
  return;
}
