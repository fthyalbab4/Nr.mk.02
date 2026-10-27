// rea decompile_all
// name: FUN_00439a7c
// address: 0x439a7c
// body: available
// range: 0x439a7c-0x439b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439a7c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  if (param_2 != *(int *)(param_1 + 4)) {
    if (param_2 < 0) {
      FUN_00439a58(param_1,param_2,param_3,param_3);
    }
    iVar1 = param_2 + 0x1f;
    if (iVar1 < 0) {
      iVar1 = param_2 + 0x3e;
    }
    iVar1 = (iVar1 >> 5) * 4;
    iVar2 = *(int *)(param_1 + 4) + 0x1f;
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 4) + 0x3e;
    }
    iVar2 = (iVar2 >> 5) * 4;
    if (iVar2 != iVar1) {
      iVar4 = 0;
      if (iVar1 != 0) {
        iVar4 = FUN_00404324(iVar1);
        FUN_00404f38(iVar4,iVar1,0);
      }
      if (iVar2 != 0) {
        if (iVar4 != 0) {
          uVar3 = FUN_00439a70(iVar2,iVar1);
          FUN_00404514(*(undefined4 *)(param_1 + 8),iVar4,uVar3);
        }
        FUN_00404340(*(undefined4 *)(param_1 + 8),iVar2);
      }
      *(int *)(param_1 + 8) = iVar4;
    }
    *(int *)(param_1 + 4) = param_2;
  }
  return;
}
