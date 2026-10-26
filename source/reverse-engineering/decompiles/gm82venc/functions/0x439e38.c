// rea decompile_all
// name: FUN_00439e38
// address: 0x439e38
// body: available
// range: 0x439e38-0x439ec9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439e38(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  FUN_0040b268(param_2);
  if (param_1 != (int *)0x0) {
    iVar2 = FUN_00406268(param_1);
    if (iVar2 == 0) {
      cVar1 = FUN_004061f8(param_1,&PTR_FUN_00435a84);
      if ((cVar1 != '\0') && ((*(byte *)(param_1 + 7) & 0x10) != 0)) {
        FUN_0040b268(param_2);
        (**(code **)(*param_1 + 0x28))();
      }
    }
    else {
      cVar1 = FUN_004061f8(param_1,&PTR_FUN_00435a84);
      if ((cVar1 == '\0') || ((*(byte *)(param_1 + 7) & 0x10) != 0)) {
        uVar3 = FUN_0040b268(param_2);
        FUN_00439e38(iVar2,uVar3);
      }
    }
  }
  return;
}
