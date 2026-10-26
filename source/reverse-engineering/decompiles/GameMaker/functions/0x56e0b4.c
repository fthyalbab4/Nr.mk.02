// rea decompile_all
// name: FUN_0056e0b4
// address: 0x56e0b4
// body: available
// range: 0x56e0b4-0x56e0ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0056e0b4(void)

{
  char cVar1;
  int iVar2;
  int in_stack_00000004;

  cVar1 = FUN_00405d08(*(undefined4 *)(in_stack_00000004 + -4));
  if (cVar1 == '\0') {
    return CONCAT31((int3)((uint)*(int *)(in_stack_00000004 + -8) >> 8),
                    *(int *)(*(int *)(in_stack_00000004 + 8) + 4) <=
                    *(int *)(in_stack_00000004 + -8));
  }
  iVar2 = FUN_004edf8c(*(undefined4 *)(in_stack_00000004 + -4));
  iVar2 = iVar2 - *(int *)(*(int *)(in_stack_00000004 + 8) + 4);
  return CONCAT31((int3)((uint)iVar2 >> 8),*(int *)(in_stack_00000004 + -8) <= iVar2);
}
