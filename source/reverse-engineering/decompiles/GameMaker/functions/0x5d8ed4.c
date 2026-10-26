// rea decompile_all
// name: FUN_005d8ed4
// address: 0x5d8ed4
// body: available
// range: 0x5d8ed4-0x5d8f3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d8ed4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = *(int *)(param_1 + 0x2ac);
  if (((iVar3 != 0) && (cVar1 = FUN_00405c98(param_2,&PTR_LAB_00457450), cVar1 != '\0')) &&
     (iVar3 = *(int *)(iVar3 + 8), -1 < iVar3 + -1)) {
    iVar4 = 0;
    do {
      iVar2 = FUN_0043b048(*(undefined4 *)(param_1 + 0x2ac),iVar4);
      if (param_2 == iVar2) {
        if (*(int *)(param_2 + 0x18) == 0) {
          return;
        }
        FUN_005d92dc(param_1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x270) + 0x40) + iVar4 * 4)
                     ,param_2);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
