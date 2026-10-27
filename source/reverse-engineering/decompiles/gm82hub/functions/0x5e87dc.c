// rea decompile_all
// name: FUN_005e87dc
// address: 0x5e87dc
// body: available
// range: 0x5e87dc-0x5e884d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e87dc(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_stack_00000004;

  piVar3 = (int *)(in_stack_00000004 + -0x10);
  if (*(int *)(in_stack_00000004 + -0xc) == 0) {
    iVar2 = 0;
    while ((iVar2 < 0xb && (*(int *)(*piVar3 + 0x1c) != 0))) {
      cVar1 = FUN_005e8570(*piVar3);
      if (cVar1 == '\0') {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = 0;
      }
    }
  }
  do {
    iVar2 = 0;
    while ((iVar2 < 8 && (*(int *)(*piVar3 + 0x1c) != 0))) {
      cVar1 = FUN_005e8570(*piVar3);
      if (cVar1 == '\0') {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = 9;
      }
    }
  } while ((iVar2 < 9) && (*(int *)(*piVar3 + 0x1c) != 0));
  *(undefined4 *)(in_stack_00000004 + -0xc) = 0;
  return;
}
