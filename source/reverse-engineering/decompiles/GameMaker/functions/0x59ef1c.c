// rea decompile_all
// name: FUN_0059ef1c
// address: 0x59ef1c
// body: available
// range: 0x59ef1c-0x59ef86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0059ef1c(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;

  iVar6 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar6 + -1) {
    iVar5 = 0;
    do {
      puVar3 = (undefined4 *)FUN_0043b048(*(undefined4 *)(param_1 + 4),iVar5);
      cVar2 = thunk_FUN_00405d3c(*puVar3,&PTR_FUN_00590190);
      if (cVar2 != '\0') {
        piVar4 = (int *)FUN_0043b048(*(undefined4 *)(param_1 + 4),iVar5);
        iVar1 = *piVar4;
        cVar2 = (**(code **)(iVar1 + 0x80))(iVar1,param_2);
        if (cVar2 != '\0') {
          return iVar1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}
