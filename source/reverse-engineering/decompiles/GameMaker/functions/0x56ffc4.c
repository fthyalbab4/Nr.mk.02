// rea decompile_all
// name: FUN_0056ffc4
// address: 0x56ffc4
// body: available
// range: 0x56ffc4-0x57003b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056ffc4(void)

{
  int in_stack_00000004;
  undefined4 local_c;
  undefined4 local_8;

  FUN_0056dd70(*(undefined4 *)(in_stack_00000004 + -0x78),in_stack_00000004 + -0x60,
               *(undefined4 *)(in_stack_00000004 + -0x54),*(undefined4 *)(in_stack_00000004 + -0x24)
              );
  *(int *)(in_stack_00000004 + -0x68) = *(int *)(*(int *)(in_stack_00000004 + -0x78) + 0x284) + -1;
  *(int *)(in_stack_00000004 + -100) = *(int *)(*(int *)(in_stack_00000004 + -0x78) + 0x2c0) + -1;
  FUN_0056df20(*(undefined4 *)(in_stack_00000004 + -0x78),in_stack_00000004 + -0x68,
               in_stack_00000004 + -0x60,&local_c);
  *(undefined4 *)(in_stack_00000004 + -0x68) = local_c;
  *(undefined4 *)(in_stack_00000004 + -100) = local_8;
  return;
}
