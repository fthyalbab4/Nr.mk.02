// rea decompile_all
// name: FUN_007280d4
// address: 0x7280d4
// body: available
// range: 0x7280d4-0x72811d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007280d4(undefined2 param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  int iVar1;

  *(undefined1 *)(*(int *)(param_4 + -4) + 0x20) = param_2;
  iVar1 = *(int *)(param_4 + -4);
  *(undefined4 *)(iVar1 + 0x21) = 0x28;
  *(undefined4 *)(iVar1 + 0x29) = *(undefined4 *)(*(int *)(param_4 + -4) + 0x45c);
  *(undefined4 *)(iVar1 + 0x25) = *(undefined4 *)(*(int *)(param_4 + -4) + 0x458);
  *(undefined2 *)(iVar1 + 0x2d) = 1;
  *(undefined2 *)(iVar1 + 0x2f) = param_1;
  *(undefined4 *)(iVar1 + 0x31) = 0;
  return;
}
