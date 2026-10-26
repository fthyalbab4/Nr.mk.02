// rea decompile_all
// name: FUN_00493520
// address: 0x493520
// body: available
// range: 0x493520-0x493572 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00493520(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000004;

  iVar2 = FUN_004df914(*(undefined4 *)(in_stack_00000004 + -4),0);
  if ((iVar2 == 0) || (*(int *)(*(int *)PTR_DAT_00689620 + 0x60) == 0)) {
    uVar3 = 0;
  }
  else {
    if ((iVar2 != *(int *)(*(int *)PTR_DAT_00689620 + 0x60)) &&
       (cVar1 = thunk_FUN_004bfe1d(iVar2,*(int *)(*(int *)PTR_DAT_00689620 + 0x60)), cVar1 == '\0'))
    {
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}
