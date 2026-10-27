// rea decompile_all
// name: FUN_006dfbf0
// address: 0x6dfbf0
// body: available
// range: 0x6dfbf0-0x6dfc82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dfbf0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (*(char *)((int)param_2 + 0x29a) != '\x02') {
    iVar1 = FUN_00515a48(param_2,param_2,param_3,param_3);
    iVar2 = FUN_00515a68(param_2);
    iVar3 = FUN_004edf8c(param_1);
    iVar3 = (iVar3 - *(int *)(*(int *)(param_1 + 0x5b4) + 0x48)) + -8;
    iVar4 = FUN_004edfcc(param_1);
    iVar4 = (iVar4 - *(int *)(*(int *)(param_1 + 0x5b4) + 0x44)) + -8;
    if (iVar3 < param_2[0x12] + iVar1) {
      iVar1 = iVar3 - param_2[0x12];
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    if (iVar4 < param_2[0x13] + iVar2) {
      iVar2 = iVar4 - param_2[0x13];
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    (**(code **)(*param_2 + 0x98))(param_2,iVar1,iVar2,param_2[0x13],param_2[0x12]);
  }
  return;
}
