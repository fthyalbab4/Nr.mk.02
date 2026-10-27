// rea decompile_all
// name: FUN_0046af80
// address: 0x46af80
// body: available
// range: 0x46af80-0x46afed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046af80(int param_1)

{
  FUN_0046af7c();
  *(int *)(param_1 + 0xb18) = param_1 + 0x94;
  *(undefined ***)(param_1 + 0xb20) = &PTR_DAT_0067e994;
  *(int *)(param_1 + 0xb24) = param_1 + 0x988;
  *(undefined ***)(param_1 + 0xb2c) = &PTR_DAT_0067e9a8;
  *(int *)(param_1 + 0xb30) = param_1 + 0xa7c;
  *(undefined **)(param_1 + 0xb38) = &DAT_0067e9bc;
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 8;
  FUN_0046aff0(param_1);
  return;
}
