// rea decompile_all
// name: FUN_0042b550
// address: 0x42b550
// body: available
// range: 0x42b550-0x42b588 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042b550(void)

{
  uint in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;

  if (in_stack_00000010 == in_stack_00000008) {
    if (in_stack_0000000c < in_stack_00000004) {
      return 0;
    }
  }
  else if (in_stack_00000010 < in_stack_00000008) {
    return 0;
  }
  if (in_stack_00000010 == in_stack_00000008) {
    if (in_stack_0000000c <= in_stack_00000004) {
      return 1;
    }
  }
  else if (in_stack_00000010 <= in_stack_00000008) {
    return 1;
  }
  return 2;
}
