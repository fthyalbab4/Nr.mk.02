// rea decompile_all
// name: FUN_00663500
// address: 0x663500
// body: available
// range: 0x663500-0x663647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00663500(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x1b4) == 0) {
    return;
  }
  iVar2 = FUN_00676f90(param_1,*(undefined4 *)(param_2 + 0x1b4),param_3,param_3);
  iVar3 = FUN_006765c0(param_1,*(undefined4 *)(param_2 + 0x1b4));
  cVar1 = FUN_00674b10(*(undefined4 *)(param_2 + 0x1b4));
  if (cVar1 != '\0') {
    uVar4 = 0;
    if ((*(char *)((int)param_1 + 0x319) != '\0') &&
       (((iVar2 == 0 || (cVar1 = FUN_00674b10(iVar2), cVar1 == '\0')) &&
        (iVar2 = (**(code **)(*param_1 + 0x164))(), iVar2 != *(int *)(param_2 + 0x1b4))))) {
      uVar4 = uVar4 | 2;
    }
    if (((*(char *)((int)param_1 + 0x319) != '\0') &&
        ((iVar3 == 0 || (cVar1 = FUN_00674b10(iVar3), cVar1 == '\0')))) &&
       (iVar2 = (**(code **)(*param_1 + 0x108))(), iVar2 != *(int *)(param_2 + 0x1b4))) {
      uVar4 = uVar4 | 8;
    }
    FUN_00665950(param_2,uVar4 & 0xff);
    return;
  }
  if ((iVar2 != 0) && (cVar1 = FUN_00674b10(iVar2), cVar1 != '\0')) {
    iVar2 = *(int *)(iVar2 + 0x44);
    cVar1 = FUN_00405c98(iVar2,&PTR_FUN_0065fae8);
    if (cVar1 != '\0') {
      FUN_00665950(iVar2,*(byte *)(iVar2 + 0x1f0) | 8);
    }
  }
  if (iVar3 == 0) {
    return;
  }
  cVar1 = FUN_00674b10(iVar3);
  if (cVar1 == '\0') {
    return;
  }
  iVar2 = *(int *)(iVar3 + 0x44);
  cVar1 = FUN_00405c98(iVar2,&PTR_FUN_0065fae8);
  if (cVar1 == '\0') {
    return;
  }
  FUN_00665950(iVar2,*(byte *)(iVar2 + 0x1f0) | 2);
  return;
}
