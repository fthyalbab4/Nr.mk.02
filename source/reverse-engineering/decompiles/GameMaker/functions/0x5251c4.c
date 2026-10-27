// rea decompile_all
// name: FUN_005251c4
// address: 0x5251c4
// body: available
// range: 0x5251c4-0x52521a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005251c4(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int in_stack_00000004;

  uVar2 = 0;
  if ((*(byte *)(*(int *)(in_stack_00000004 + -4) + 0x55) & 0x80) != 0) {
    for (iVar3 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x34);
        (iVar3 != 0 && (*(char *)(iVar3 + 0x260) == '\0')); iVar3 = *(int *)(iVar3 + 0x34)) {
    }
    if (((iVar3 != 0) && (*(char *)(iVar3 + 0x260) != '\0')) &&
       (cVar1 = FUN_00405c98(iVar3,&PTR_LAB_0050d694), cVar1 == '\0')) {
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}
