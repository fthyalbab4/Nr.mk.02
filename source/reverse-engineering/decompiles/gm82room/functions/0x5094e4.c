// rea decompile_all
// name: FUN_005094e4
// address: 0x5094e4
// body: available
// range: 0x5094e4-0x509551 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005094e4(int param_1)

{
  FUN_005094e0();
  *(int *)(param_1 + 0xb10) = param_1 + 0x8c;
  *(undefined ***)(param_1 + 0xb18) = &PTR_DAT_00683efc;
  *(int *)(param_1 + 0xb1c) = param_1 + 0x980;
  *(undefined ***)(param_1 + 0xb24) = &PTR_DAT_00683f10;
  *(int *)(param_1 + 0xb28) = param_1 + 0xa74;
  *(undefined **)(param_1 + 0xb30) = &DAT_00683f24;
  *(undefined2 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 0;
  *(undefined4 *)(param_1 + 0x16ac) = 8;
  FUN_00509554(param_1);
  return;
}
