// rea decompile_all
// name: FUN_004420e0
// address: 0x4420e0
// body: available
// range: 0x4420e0-0x442135 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004420e0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;

  iVar2 = FUN_0042be6c(*(undefined4 *)(in_stack_00000004 + -4),
                       *(undefined4 *)(in_stack_00000004 + -8));
  if (*(char *)(in_stack_00000004 + -9) != '\0') {
    iVar3 = FUN_0042be6c(*(undefined4 *)(in_stack_00000004 + -0x10),
                         *(undefined4 *)(in_stack_00000004 + -8));
    return iVar2 == iVar3;
  }
  iVar3 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x14);
  if ((iVar3 == -0x80000000) || (iVar3 != iVar2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}
