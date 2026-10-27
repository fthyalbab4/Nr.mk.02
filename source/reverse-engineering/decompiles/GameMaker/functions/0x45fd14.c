// rea decompile_all
// name: FUN_0045fd14
// address: 0x45fd14
// body: available
// range: 0x45fd14-0x45fd8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0045fd14(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int in_stack_00000004;

  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (iVar1 == 0) {
    bVar4 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0xc) != 0;
  }
  else {
    bVar4 = true;
    cVar3 = FUN_00405c98(iVar1,&PTR_LAB_00457450);
    if (cVar3 != '\0') {
      if ((*(int *)(*(int *)(in_stack_00000004 + -8) + 0xc) == *(int *)(iVar1 + 0xc)) ||
         (((piVar2 = *(int **)(*(int *)(in_stack_00000004 + -8) + 0xc), piVar2 != (int *)0x0 &&
           (*(int *)(iVar1 + 0xc) != 0)) &&
          (cVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2,*(undefined4 *)(iVar1 + 0xc)), cVar3 != '\0'
          )))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
  }
  return bVar4;
}
