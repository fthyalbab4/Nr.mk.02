// rea decompile_all
// name: FUN_0045e40c
// address: 0x45e40c
// body: available
// range: 0x45e40c-0x45e462 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0045e40c(void)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int in_stack_00000004;

  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) == 0) {
    uVar3 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x20))();
    return uVar3 ^ 1;
  }
  uVar1 = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  cVar2 = FUN_00405c98(uVar1,&PTR_FUN_00456dc0);
  if ((cVar2 != '\0') &&
     (cVar2 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x1c))
                        (*(int **)(in_stack_00000004 + -8),uVar1), cVar2 != '\0')) {
    return 0;
  }
  return 1;
}
