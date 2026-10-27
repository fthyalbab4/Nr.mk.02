// rea decompile_all
// name: FUN_00575d64
// address: 0x575d64
// body: available
// range: 0x575d64-0x575e22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00575d64(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;

  if ((param_3 == 0) && ((*(byte *)(param_1 + 0x381) & 1) != 0)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x378) + 0x14))();
    if (param_2 < iVar1) {
      (**(code **)(**(int **)(param_1 + 0x378) + 0xc))(*(int **)(param_1 + 0x378),param_2,param_4);
    }
    else {
      FUN_00407eb8(param_4,0);
    }
  }
  else {
    piVar2 = (int *)FUN_00576014(param_1);
    iVar1 = (**(code **)(*piVar2 + 0x14))();
    if (iVar1 == 0) {
      FUN_00407eb8(param_4,0);
    }
    else {
      param_3 = param_3 - *(int *)(param_1 + 0x2a0);
      if (param_2 == 0) {
        uVar3 = FUN_00576014(param_1);
        FUN_0043d9f4(uVar3,param_3,param_4);
      }
      else {
        piVar2 = (int *)FUN_00576014(param_1);
        (**(code **)(*piVar2 + 0xc))(piVar2,param_3,param_4);
        iVar1 = FUN_00408a68(&LAB_00575e30,*param_4);
        if (0 < iVar1) {
          FUN_00408778(param_4,1,iVar1);
        }
      }
    }
  }
  return;
}
