// rea decompile_all
// name: FUN_0059bb20
// address: 0x59bb20
// body: available
// range: 0x59bb20-0x59bb8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059bb20(void)

{
  int in_stack_00000004;

  FUN_005992f4(*(undefined4 *)(in_stack_00000004 + -100),in_stack_00000004 + -0x60);
  *(int *)(in_stack_00000004 + -0x68) =
       *(int *)(in_stack_00000004 + -0x50) - *(int *)(*(int *)(in_stack_00000004 + -100) + 0x2c8);
  if (*(int *)(in_stack_00000004 + -0x68) < 1) {
    *(undefined4 *)(in_stack_00000004 + -0x68) = 1;
  }
  *(int *)(in_stack_00000004 + -0x6c) =
       *(int *)(in_stack_00000004 + -0x20) - *(int *)(*(int *)(in_stack_00000004 + -100) + 0x2cc);
  if (*(int *)(in_stack_00000004 + -0x6c) < 1) {
    *(undefined4 *)(in_stack_00000004 + -0x6c) = 1;
  }
  return;
}
