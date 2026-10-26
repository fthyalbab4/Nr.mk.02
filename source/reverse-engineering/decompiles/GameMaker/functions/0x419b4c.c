// rea decompile_all
// name: FUN_00419b4c
// address: 0x419b4c
// body: available
// range: 0x419b4c-0x419b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00419b4c(void)

{
  int in_stack_00000004;

  if (*(char *)(in_stack_00000004 + -0x1d) == '\0') {
    FUN_00419908(in_stack_00000004 + -2,in_stack_00000004 + -4,in_stack_00000004 + -6,
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 8),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 0xc));
    *(undefined1 *)(in_stack_00000004 + -0x1d) = 1;
  }
  return;
}
