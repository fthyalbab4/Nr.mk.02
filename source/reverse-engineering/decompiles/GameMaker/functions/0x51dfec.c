// rea decompile_all
// name: FUN_0051dfec
// address: 0x51dfec
// body: available
// range: 0x51dfec-0x51e04b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051dfec(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x48)) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (param_2 == *(int *)(DAT_007882f0 + 0x60)) {
    *(undefined4 *)(DAT_007882f0 + 0x60) = 0;
  }
  if (param_2 == *(int *)(DAT_007882f0 + 100)) {
    *(undefined4 *)(DAT_007882f0 + 100) = 0;
    *(undefined4 *)(DAT_007882f0 + 0x68) = 0;
  }
  if (param_2 == *(int *)(DAT_007882f0 + 0x74)) {
    *(undefined4 *)(DAT_007882f0 + 0x74) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  FUN_0051c6c4(DAT_007882f0);
  return;
}
