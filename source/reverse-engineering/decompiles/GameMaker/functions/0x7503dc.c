// rea decompile_all
// name: FUN_007503dc
// address: 0x7503dc
// body: available
// range: 0x7503dc-0x750450 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007503dc(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int in_stack_00000004;

  piVar2 = (int *)(in_stack_00000004 + -0x10);
  iVar3 = 0;
  while (cVar1 = FUN_00740ef8(*(undefined1 *)*piVar2), cVar1 != '\0') {
    iVar3 = iVar3 * 10 + (uint)*(byte *)*piVar2 + -0x30;
    *piVar2 = *piVar2 + 1;
  }
  while ((0 < iVar3 && (*(char *)*piVar2 != '\0'))) {
    if (*(char *)*piVar2 == '@') {
      FUN_007503b0();
      **(undefined1 **)(in_stack_00000004 + -8) = 0x2e;
    }
    else {
      **(char **)(in_stack_00000004 + -8) = *(char *)*piVar2;
    }
    *piVar2 = *piVar2 + 1;
    *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + 1;
    iVar3 = iVar3 + -1;
  }
  return;
}
