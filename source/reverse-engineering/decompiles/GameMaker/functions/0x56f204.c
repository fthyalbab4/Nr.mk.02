// rea decompile_all
// name: FUN_0056f204
// address: 0x56f204
// body: available
// range: 0x56f204-0x56f261 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0056f204(void)

{
  int in_stack_00000004;
  int local_c;
  int local_8;

  FUN_0056df20(*(undefined4 *)(in_stack_00000004 + -8),*(int *)(in_stack_00000004 + -8) + 0x2c8,
               in_stack_00000004 + -0x70,&local_c);
  if (*(int *)(in_stack_00000004 + -4) == 0) {
    local_c = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x2c8) - local_c;
  }
  else {
    local_c = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x2cc) - local_8;
  }
  if (local_c < 1) {
    local_c = 1;
  }
  return local_c;
}
