// rea decompile_all
// name: FUN_00442314
// address: 0x442314
// body: available
// range: 0x442314-0x442390 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00442314(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000004;

  uVar3 = 1;
  iVar2 = FUN_0042be6c(*(undefined4 *)(in_stack_00000004 + -4),
                       *(undefined4 *)(in_stack_00000004 + -8));
  if ((iVar2 == 0) && (cVar1 = FUN_004422bc(), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = FUN_004061f8(iVar2,&PTR_FUN_0042eb04);
  if (cVar1 != '\0') {
    cVar1 = FUN_004061f8(iVar2,&PTR_FUN_00435a84);
    if ((cVar1 == '\0') || ((*(byte *)(iVar2 + 0x24) & 4) != 0)) {
      uVar3 = 0;
    }
    else {
      cVar1 = FUN_004422bc();
      if ((cVar1 == '\0') && (*(int *)(iVar2 + 8) != 0)) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
