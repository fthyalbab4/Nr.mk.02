// rea decompile_all
// name: FUN_00674340
// address: 0x674340
// body: available
// range: 0x674340-0x674453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00674340(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_2 == 0) {
    FUN_00405a7c(*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
  iVar2 = FUN_00673fd0(param_1);
  if (param_2 == iVar2) {
    return;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x44) = 0;
    FUN_00405a7c(uVar3);
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar2 = FUN_00405d08(param_1);
    uVar3 = (**(code **)(iVar2 + 0x14))(iVar2,1,param_1);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
  }
  (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),param_2);
  iVar2 = *(int *)(param_1 + 0x3c);
  *(int *)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_00673fa0;
  if ((*(byte *)(param_2 + 0x1c) & 1) == 0) {
    FUN_00673fc4(param_1);
    iVar2 = FUN_00671654();
    if (*(char *)(iVar2 + 0xa8) == '\0') {
      uVar3 = 0;
      goto LAB_006743d5;
    }
  }
  uVar3 = 1;
LAB_006743d5:
  FUN_00405d08(param_1,param_2,uVar3);
  uVar3 = FUN_00671654(*(undefined4 *)(param_1 + 4));
  FUN_00448f68(param_2,uVar3);
  iVar2 = FUN_00673fc4(param_1);
  if (*(int *)(iVar2 + 0x20) != 0) {
    iVar2 = FUN_00673fc4(param_1);
    if (*(int *)(*(int *)(iVar2 + 0x20) + 0xc) == 0) {
      iVar2 = FUN_00673fc4(param_1);
      if (*(int *)(*(int *)(iVar2 + 0x20) + 0x18) != 0) {
        iVar2 = FUN_00673fc4(param_1);
        piVar1 = *(int **)(*(int *)(iVar2 + 0x20) + 0x18);
        (**(code **)(*piVar1 + 0x15c))(piVar1,param_1);
      }
    }
    else {
      iVar2 = FUN_00673fc4(param_1);
      piVar1 = *(int **)(*(int *)(iVar2 + 0x20) + 0xc);
      (**(code **)(*piVar1 + 0x15c))(piVar1,param_1);
    }
  }
  return;
}
