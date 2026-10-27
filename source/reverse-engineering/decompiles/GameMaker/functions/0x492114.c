// rea decompile_all
// name: FUN_00492114
// address: 0x492114
// body: available
// range: 0x492114-0x49222c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00492114(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;

  FUN_00491910(param_1,param_2,param_3,param_3);
  iVar5 = *(int *)(param_1 + 0x28);
  if ((((iVar5 != 0) && (param_2 != 0)) && (*(char *)(iVar5 + 0xa0) != '\0')) &&
     ((*(char *)(iVar5 + 0xb0) == '\0' &&
      (iVar5 = *(int *)(*(int *)(iVar5 + 0x50) + 8), -1 < iVar5 + -1)))) {
    iVar6 = 0;
    do {
      iVar2 = FUN_0043b048(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x50),iVar6);
      cVar1 = FUN_00405c98(*(undefined4 *)(iVar2 + 0x20),&PTR_LAB_004a8230);
      if (cVar1 == '\0') {
        cVar1 = FUN_00405c98(*(undefined4 *)(iVar2 + 0x20),&PTR_LAB_004a1dac);
        if (cVar1 != '\0') {
          uVar3 = FUN_0043c914(param_2);
          uVar3 = FUN_004b9534(*(undefined4 *)(*(int *)(iVar2 + 0x20) + 0x29c),uVar3);
          FUN_004b8d5c(uVar3,*(undefined4 *)(param_2 + 0x10));
          FUN_004b8f80(uVar3,0,*(undefined4 *)(param_2 + 0x18));
          FUN_004b8e18(uVar3,*(undefined4 *)(param_2 + 0x14));
        }
      }
      else {
        iVar2 = FUN_00405cbc(*(undefined4 *)(iVar2 + 0x20),&PTR_LAB_004a8230);
        uVar3 = FUN_0043c914(param_2);
        piVar4 = (int *)FUN_00491a08(*(undefined4 *)(iVar2 + 0x304),uVar3);
        (**(code **)(*piVar4 + 0x20))(piVar4,*(undefined4 *)(param_2 + 0x10));
        (**(code **)(*piVar4 + 0x28))(piVar4,*(undefined4 *)(param_2 + 0x18));
        (**(code **)(*piVar4 + 0x24))(piVar4,*(undefined4 *)(param_2 + 0x14));
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}
