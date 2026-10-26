// rea decompile_all
// name: FUN_0074f37c
// address: 0x74f37c
// body: available
// range: 0x74f37c-0x74f3b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074f37c(int param_1)

{
  undefined4 uVar1;

  (**(code **)(**(int **)(param_1 + 0x6c) + 8))();
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = 0;
  FUN_00405a7c(uVar1);
  FUN_0074f6d8(param_1);
  FUN_0074d710(param_1);
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}
