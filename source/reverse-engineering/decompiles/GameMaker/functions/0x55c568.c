// rea decompile_all
// name: FUN_0055c568
// address: 0x55c568
// body: available
// range: 0x55c568-0x55c612 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055c568(int param_1)

{
  FUN_0055c10c(param_1,0xee);
  FUN_0055c12c(param_1,0xe);
  FUN_0055c0dc(param_1,0x41);
  FUN_0055c0dc(param_1,100);
  FUN_0055c0dc(param_1,0x6f);
  FUN_0055c0dc(param_1,0x62);
  FUN_0055c0dc(param_1,0x65);
  FUN_0055c12c(param_1,100);
  FUN_0055c12c(param_1,0);
  FUN_0055c12c(param_1,0);
  if (*(int *)(param_1 + 0x3c) == 3) {
    FUN_0055c0dc(param_1,1);
    return;
  }
  if (*(int *)(param_1 + 0x3c) != 5) {
    FUN_0055c0dc(param_1,0);
    return;
  }
  FUN_0055c0dc(param_1,2);
  return;
}
