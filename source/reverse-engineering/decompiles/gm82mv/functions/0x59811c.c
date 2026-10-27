// rea decompile_all
// name: FUN_0059811c
// address: 0x59811c
// body: available
// range: 0x59811c-0x59815e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0059811c(void)

{
  int iVar1;
  uint uVar2;
  int in_stack_00000004;

  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (iVar1 != 0) {
    uVar2 = FUN_00596ef8(*(undefined4 *)(iVar1 + 0x300),
                         *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x300));
    return uVar2 ^ 1;
  }
  return CONCAT31((int3)((uint)*(int *)(in_stack_00000004 + -8) >> 8),
                  *(int *)(*(int *)(in_stack_00000004 + -8) + 0x300) != 0);
}
