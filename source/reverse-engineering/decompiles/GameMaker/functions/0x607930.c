// rea decompile_all
// name: FUN_00607930
// address: 0x607930
// body: available
// range: 0x607930-0x607a1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00607930(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x100);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 4) == 0) {
        FUN_0041ef80(param_1 + 0x100);
      }
      else {
        FUN_0044924c(iVar1,param_1);
        *(undefined4 *)(param_1 + 0x100) = 0;
      }
    }
  }
  else if (*(int *)(param_2 + 4) == 0) {
    iVar1 = *(int *)(param_1 + 0x100);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      FUN_0044924c(iVar1,param_1);
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    iVar1 = FUN_0040594c(param_2);
    if (*(int *)(param_1 + 0x100) != 0) {
      iVar2 = FUN_0040594c(*(int *)(param_1 + 0x100));
      if (iVar1 != iVar2) {
        FUN_0041ef80(param_1 + 0x100);
      }
    }
    if (*(int *)(param_1 + 0x100) == 0) {
      uVar3 = FUN_005e403c(iVar1,1,0);
      *(undefined4 *)(param_1 + 0x100) = uVar3;
    }
    (**(code **)(**(int **)(param_1 + 0x100) + 8))(*(int **)(param_1 + 0x100),param_2);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x100);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 4) == 0) {
        FUN_0041ef80(param_1 + 0x100);
      }
      else {
        FUN_0044924c(iVar1,param_1);
      }
    }
    *(int *)(param_1 + 0x100) = param_2;
    FUN_00448f68(param_2,param_1);
  }
  return;
}
