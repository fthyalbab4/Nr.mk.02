// rea decompile_all
// name: FUN_005eff4c
// address: 0x5eff4c
// body: available
// range: 0x5eff4c-0x5effa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005eff4c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;

  iVar2 = FUN_004df914(param_1,1);
  cVar1 = FUN_004061f8(iVar2,&PTR_LAB_004daca8);
  iVar3 = 0;
  if (cVar1 != '\0') {
    iVar3 = iVar2;
  }
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x29e) == '\x01')) {
    (**(code **)(**(int **)(param_1 + 0x298) + 0x1c))();
    if (*(int *)(param_2 + 4) == 0) {
      FUN_005f07d0();
    }
  }
  return;
}
